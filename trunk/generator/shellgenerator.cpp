/****************************************************************************
**
** Copyright (C) 1992-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the Qt Script Generator project on Trolltech Labs.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include "shellgenerator.h"
#include "reporthandler.h"

#include "metaqtscript.h"

bool ShellGenerator::shouldGenerate(const AbstractMetaClass *meta_class) const
{
    uint cg = meta_class->typeEntry()->codeGeneration();
    if (meta_class->name().startsWith("QtScript")) return false;
    if (meta_class->name().startsWith("QFuture")) return false;
    if (meta_class->name().startsWith("Global")) return false;
    if (meta_class->name().startsWith("QStyleOptionComplex")) return false;
    if (meta_class->name().startsWith("QTextLayout")) return false;
    //if (meta_class->name().startsWith("QTextStream")) return false; // because of >> operators
    //if (meta_class->name().startsWith("QDataStream")) return false; // "
    return ((cg & TypeEntry::GenerateCode) != 0);
}

void ShellGenerator::writeTypeInfo(QTextStream &s, const AbstractMetaType *type, Option options)
{
    if ((options & OriginalTypeDescription) && !type->originalTypeDescription().isEmpty()) {
        s << type->originalTypeDescription();
        return;
    }

    if (type->isArray()) {
        writeTypeInfo(s, type->arrayElementType(), options);
        if (options & ArrayAsPointer) {
            s << "*";
        } else {
            s << "[" << type->arrayElementCount() << "]";
        }
        return;
    }

    const TypeEntry *te = type->typeEntry();

    if (type->isConstant() && !(options & ExcludeConst))
        s << "const ";

    if ((options & EnumAsInts) && (te->isEnum() || te->isFlags())) {
        s << "int";
    } else if (te->isFlags()) {
        s << ((FlagsTypeEntry *) te)->originalName();
    } else {
        s << fixCppTypeName(te->qualifiedCppName());
    }

    if (type->instantiations().size() > 0
        && (!type->isContainer() 
            || (static_cast<const ContainerTypeEntry *>(te))->type() != ContainerTypeEntry::StringListContainer)) {
        s << '<';
        QList<AbstractMetaType *> args = type->instantiations();
        bool nested_template = false;
        for (int i=0; i<args.size(); ++i) {
            if (i != 0)
                s << ", ";
            nested_template |= args.at(i)->isContainer();
            writeTypeInfo(s, args.at(i));
        }
        if (nested_template)
            s << ' ';
        s << '>';
    }

    s << QString(type->indirections(), '*');

    if (type->isReference() && !(options & ExcludeReference))
        s << "&";

    if (!(options & SkipName))
        s << ' ';
}


void ShellGenerator::writeFunctionArguments(QTextStream &s, const AbstractMetaClass* owner,
                                          const AbstractMetaArgumentList &arguments,
                                          Option option,
                                          int numArguments)
{
    if (numArguments < 0) numArguments = arguments.size();

    for (int i=0; i<numArguments; ++i) {
        if (i != 0)
            s << ", ";
        AbstractMetaArgument *arg = arguments.at(i);
        writeTypeInfo(s, arg->type(), option);
        if (!(option & SkipName))
            s << " " << arg->argumentName();
        if ((option & IncludeDefaultExpression) && !arg->originalDefaultValueExpression().isEmpty()) {
            s << " = "; 

          QString expr = arg->originalDefaultValueExpression();
          if (expr != "0") {
            QString qualifier;
            if (arg->type()->typeEntry()->isEnum() && expr.indexOf("::") < 0) {
              qualifier =  ((EnumTypeEntry *)arg->type()->typeEntry())->qualifier();
            } else if (arg->type()->typeEntry()->isFlags() && expr.indexOf("::") < 0) {
              qualifier = ((FlagsTypeEntry *)arg->type()->typeEntry())->originator()->qualifier();
            }
            if (!qualifier.isEmpty()) {
              s << qualifier << "::";
            }
          }
          if (expr.contains("defaultConnection")) {
            expr.replace("defaultConnection","QSqlDatabase::defaultConnection");
          }
          if (expr == "MediaSource()") {
            expr = "Phonon::MediaSource()";
          }
          s << expr; 
        }
    }
}

/*!
 * Writes the function \a meta_function signature to the textstream \a s.
 *
 * The \a name_prefix can be used to give the function name a prefix,
 * like "__public_" or "__override_" and \a classname_prefix can
 * be used to give the class name a prefix.
 *
 * The \a option flags can be used to tweak various parameters, such as
 * showing static, original vs renamed name, underscores for space etc.
 *
 * The \a extra_arguments list is a list of extra arguments on the
 * form "bool static_call".
 */

void ShellGenerator::writeFunctionSignature(QTextStream &s,
                                          const AbstractMetaFunction *meta_function,
                                          const AbstractMetaClass *implementor,
                                          const QString &name_prefix,
                                          Option option,
                                          const QString &classname_prefix,
                                          const QStringList &extra_arguments,
                                          int numArguments)
{
// ### remove the implementor
    AbstractMetaType *function_type = meta_function->type();


    if ((option & SkipReturnType) == 0) {
        if (function_type) {
            writeTypeInfo(s, function_type, option);
            s << " ";
        } else if (!meta_function->isConstructor()) {
            s << "void ";
        }
    }

    if (implementor) {
        if (classname_prefix.isEmpty())
            s << shellClassName(implementor) << "::";
        else
            s << classname_prefix << implementor->name() << "::";
    }


    QString function_name;
    if (option & OriginalName)
        function_name = meta_function->originalName();
    else
        function_name = meta_function->name();

    if (option & UnderscoreSpaces)
        function_name = function_name.replace(' ', '_');

    if (meta_function->isConstructor())
        function_name = meta_function->ownerClass()->name();

    if (meta_function->isStatic() && (option & ShowStatic)) {
      function_name = "static_" + meta_function->ownerClass()->name() + "_" + function_name;
    }
  
    if (function_name.startsWith("operator")) {
      function_name = meta_function->name();
/*      function_name.replace("operator>>", "op_streamin");
      function_name.replace("operator<<", "op_streamout");
      function_name.replace("operator>", "op_greater");
      function_name.replace("operator<", "op_less");
      function_name.replace("operator==", "op_equal");
      function_name.replace("operator!=", "op_notequal");
      function_name.replace("operator=", "op_assignment");
      function_name.replace("operator[]", "op_array");
      function_name.replace("operator*=", "op_assign_multiply"); //todo... (assign is the wrong word!)
      function_name.replace("operator/=", "op_assign_divide");
      function_name.replace("operator+=", "op_assign_add");
      function_name.replace("operator-=", "op_assign_subtract");
      function_name.replace("operator|=", "op_assign_binary_or");
      function_name.replace("operator&=", "op_assign_binary_and");
      function_name.replace("operator~=", "op_assign_tilde"); //todo
      function_name.replace("operator^=", "op_assign_whatever"); //todo
      function_name.replace("operator*", "op_multiply");
      function_name.replace("operator/", "op_divide");
      function_name.replace("operator+", "op_add");
      function_name.replace("operator-", "op_subtract");
      function_name.replace("operator|", "op_binary_or");
      function_name.replace("operator&", "op_binary_and");
      function_name.replace("operator~", "op_tilde"); //todo
      function_name.replace("operator^", "op_whatever"); //todo
 */
    }

    s << name_prefix << function_name;

    if (meta_function->attributes() & AbstractMetaAttributes::SetterFunction)
        s << "_setter";
    else if (meta_function->attributes() & AbstractMetaAttributes::GetterFunction)
        s << "_getter";

    s << "(";

  if (meta_function->ownerClass() && !meta_function->isConstructor() && !meta_function->isStatic()) {
    s << meta_function->ownerClass()->qualifiedCppName() << "* theWrappedObject"; 
    if (meta_function->arguments().size() != 0) {
      s << ", ";
    }
  }
  
   writeFunctionArguments(s, meta_function->ownerClass(), meta_function->arguments(), option, numArguments);

    // The extra arguments...
    for (int i=0; i<extra_arguments.size(); ++i) {
        if (i > 0 || meta_function->arguments().size() != 0)
            s << ", ";
        s << extra_arguments.at(i);
    }

    s << ")";
    if (meta_function->isConstant())
        s << " const";
}
