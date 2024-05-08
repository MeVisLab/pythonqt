/****************************************************************************
**
** Copyright (C) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the Qt Script Generator project on Qt Labs.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <algorithm> // for std::sort

#include "shellgenerator.h"
#include "reporthandler.h"

#include "metaqtscript.h"
#include <iostream>

bool ShellGenerator::shouldGenerate(const AbstractMetaClass *meta_class) const
{
    uint cg = meta_class->typeEntry()->codeGeneration();
    return ((cg & TypeEntry::GenerateCode) != 0);
}

void ShellGenerator::writeTypeInfo(QTextStream &s, AbstractMetaType::const_shared_pointer type, Option options, TypeSystem::Ownership ownership)
{
    if ((options & OriginalTypeDescription) && !type->originalTypeDescription().isEmpty()) {
        s << type->originalTypeDescription();
        return;
    }

    if (type->isArray()) {
        writeTypeInfo(s, type->arrayElementType(), options, ownership);
        if (options & ArrayAsPointer) {
            s << "*";
        } else {
            s << "[" << type->arrayElementCount() << "]";
        }
        return;
    }

    const TypeEntry *te = type->typeEntry();

    if (type->isConstant() && !(options & ExcludeConst) && !(ownership!=TypeSystem::InvalidOwnership && type->isReference()) )
        s << "const ";

    if ((options & EnumAsInts) && (te->isEnum() || te->isFlags())) {
        s << "int";
    } else if (te->isFlags()) {
        s << ((FlagsTypeEntry *) te)->originalName();
    } else {
      if (type->isEnum() && (options & ProtectedEnumAsInts)) {
        AbstractMetaEnum* enumType = m_classes.findEnum((EnumTypeEntry *)te);
        if (enumType && enumType->wasProtected()) {
          s << "int";
        } else {
          s << fixCppTypeName(te->qualifiedCppName());
        }
      } else {
        s << fixCppTypeName(te->qualifiedCppName());
      }
    }

    if (type->instantiations().size() > 0
        && (!te->isContainer() 
            || (static_cast<const ContainerTypeEntry *>(te))->type() != ContainerTypeEntry::StringListContainer)) {
        s << '<';
        auto &args = type->instantiations();
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

    if (type->isReference() && !(options & ExcludeReference) && !(options & ConvertReferenceToPtr) && !(ownership != TypeSystem::InvalidOwnership && type->isReference()))
        s << "&";

    if (type->isReference() && (options & ConvertReferenceToPtr)) {
      s << "*";
    }
    

    if (!(options & SkipName))
        s << ' ';
}

namespace {
  AbstractMetaEnum* findEnumTypeOfClass(const AbstractMetaClass* implementor, const QString& enumName)
  {
    for (AbstractMetaEnum* enumType : implementor->enums()) {
      if (enumType->name() == enumName) {
        return enumType;
      }
    }
    return nullptr;
  }
}


void ShellGenerator::writeFunctionArguments(QTextStream &s,
                                            const AbstractMetaFunction *meta_function,
                                            Option option,
                                            int numArguments)
{
  const AbstractMetaArgumentList &arguments = meta_function->arguments();

    if (numArguments < 0) numArguments = arguments.size();

    for (int i=0; i<numArguments; ++i) {
        if (i != 0)
            s << ", ";
        AbstractMetaArgument *arg = arguments.at(i);
        TypeSystem::Ownership ownership = TypeSystem::InvalidOwnership;
        if (option & AddOwnershipTemplates) {
          ownership = writeOwnershipTemplate(s, meta_function, i+1);
        }
        writeTypeInfo(s, arg->type(), option, ownership);
        if (ownership != TypeSystem::InvalidOwnership) {
          s << "> ";
        }

        if (!(option & SkipName)) {
          if (option & UseIndexedName) {
            s << " " << arg->indexedName();
          }
          else {
            s << " " << arg->argumentName();
          }
        }
        if ((option & IncludeDefaultExpression) && !arg->defaultValueExpression().isEmpty()) {
            s << " = "; 

            QString expr = arg->defaultValueExpression();
          if (expr == "NULL")
          {
            expr = "nullptr";
          }
          if (expr != "0") {
            QString qualifier;
            if (arg->type()->typeEntry()->isEnum() && expr.indexOf("::") < 0) {
              qualifier =  ((EnumTypeEntry *)arg->type()->typeEntry())->qualifier();
            } else if (arg->type()->typeEntry()->isFlags() && expr.indexOf("::") < 0) {
              qualifier = ((FlagsTypeEntry *)arg->type()->typeEntry())->originator()->qualifier();
            } else if (_currentScope) {
              int pos = expr.indexOf("::");
              if (pos > 0) {
                QString typeName = expr.left(pos);
                AbstractMetaEnum* enumType = findEnumTypeOfClass(_currentScope, typeName);
                if (enumType && enumType->typeEntry()->isEnumClass()) {
                  // prepend original class name, otherwise the new enum type from the wrapper will be used,
                  // which is not compatible
                  qualifier = _currentScope->name();
                }
              }
            }

            if (!qualifier.isEmpty() && !expr.startsWith("{")) {
              s << qualifier << "::";
            }
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
    AbstractMetaType::shared_pointer function_type = meta_function->type();


    if ((option & SkipReturnType) == 0) {
        if (function_type) {
          TypeSystem::Ownership ownership = TypeSystem::InvalidOwnership;
          if (option & AddOwnershipTemplates) {
            ownership = writeOwnershipTemplate(s, meta_function, 0);
          }
          writeTypeInfo(s, function_type, option, ownership);
          s << " ";
          if (ownership != TypeSystem::InvalidOwnership) {
            s << "> ";
          }
        } else if (!meta_function->isConstructor()) {
            s << "void ";
        }
    }

    if (implementor) {
        if (classname_prefix.isEmpty())
            s << wrapperClassName(implementor) << "::";
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
    }

    if (meta_function->attributes() & AbstractMetaAttributes::SetterFunction)
    s << "py_set_";
    else if (meta_function->attributes() & AbstractMetaAttributes::GetterFunction)
    s << "py_get_";

  s << name_prefix << function_name;

    s << "(";

  if ((option & FirstArgIsWrappedObject) && meta_function->ownerClass() && !meta_function->isConstructor() && !meta_function->isStatic()) {
    s << meta_function->ownerClass()->qualifiedCppName() << "* theWrappedObject"; 
    if (meta_function->arguments().size() != 0) {
      s << ", ";
    }
  }
  
   writeFunctionArguments(s, meta_function, Option(option & Option(~ConvertReferenceToPtr)), numArguments);

    // The extra arguments...
    for (int i=0; i<extra_arguments.size(); ++i) {
        if (i > 0 || meta_function->arguments().size() != 0)
            s << ", ";
        s << extra_arguments.at(i);
    }

    s << ")";
    if (meta_function->isConstant())
        s << " const";
    if (!meta_function->exception().isEmpty())
        s << " " << meta_function->exception();
}
bool function_sorter(AbstractMetaFunction *a, AbstractMetaFunction *b);

bool ShellGenerator::functionHasNonConstReferences(const AbstractMetaFunction* function)
{
  for (const AbstractMetaArgument* arg :  function->arguments())
  {
    if (!arg->type()->isConstant() && arg->type()->isReference()) {
      QString s;
      QTextStream t(&s);
      t << function->implementingClass()->qualifiedCppName() << "::";
      writeFunctionSignature(t, function, 0, "",
        Option(ConvertReferenceToPtr | FirstArgIsWrappedObject | IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces | ProtectedEnumAsInts));
      std::cout << s.toLatin1().constData() << std::endl;
      return true;
    }
  }
  return false;
}

bool ShellGenerator::functionNeedsNormalWrapperSlot(const AbstractMetaFunction* func, const AbstractMetaClass* currentClass)
{
  if (func->isSlot()) {
    return false;
  }
  else if (func->isVirtual()) {
    return func->declaringClass() == currentClass;
  } else {
    return true;
  }
}

AbstractMetaFunctionList ShellGenerator::getFunctionsToWrap(const AbstractMetaClass* meta_class)
{
  AbstractMetaFunctionList functions = meta_class->queryFunctions( 
    AbstractMetaClass::NormalFunctions | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang | AbstractMetaClass::ClassImplements
    );
  AbstractMetaFunctionList functions2 = meta_class->queryFunctions( 
    AbstractMetaClass::VirtualFunctions | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang | AbstractMetaClass::ClassImplements
    );
#if QT_VERSION < QT_VERSION_CHECK(5,14,0)
  QSet<AbstractMetaFunction*> set1 = QSet<AbstractMetaFunction*>::fromList(functions);
#else
  QSet<AbstractMetaFunction*> set1(functions.begin(), functions.end());
#endif
  for (AbstractMetaFunction* func :  functions2) {
    set1.insert(func);
  }

  AbstractMetaFunctionList resultFunctions;

  bool hasPromoter = meta_class->typeEntry()->shouldCreatePromoter();

  for (AbstractMetaFunction* func :
#   if QT_VERSION < QT_VERSION_CHECK(5,14,0)
          set1.toList()
#   else
          QList<AbstractMetaFunction*>(set1.begin(), set1.end())
#   endif
      ) {
    if (func->implementingClass()==meta_class) {
      if (hasPromoter || func->wasPublic()) {
        resultFunctions << func;
      }
    }
  }
  std::sort(resultFunctions.begin(), resultFunctions.end(), function_sorter);
  return resultFunctions;
}

AbstractMetaFunctionList ShellGenerator::getVirtualFunctionsForShell(const AbstractMetaClass* meta_class)
{
  AbstractMetaFunctionList functions = meta_class->queryFunctions( 
    AbstractMetaClass::VirtualFunctions | AbstractMetaClass::WasVisible
        | AbstractMetaClass::NotRemovedFromTargetLang
    );
  std::sort(functions.begin(), functions.end(), function_sorter);
  return functions;
}

AbstractMetaFunctionList ShellGenerator::getProtectedFunctionsThatNeedPromotion(const AbstractMetaClass* meta_class)
{
  AbstractMetaFunctionList functions; 
  AbstractMetaFunctionList functions1 = getFunctionsToWrap(meta_class); 
  for (AbstractMetaFunction* func :  functions1) {
    if (func->wasProtected() || func->isVirtual()) {
      functions << func;
    }
  }
  std::sort(functions.begin(), functions.end(), function_sorter);
  return functions;
}

/*!
Writes the include defined by \a inc to \a stream.
*/
void ShellGenerator::writeInclude(QTextStream &stream, const Include &inc)
{
  if (inc.name.isEmpty())
    return;
  if (inc.type == Include::TargetLangImport)
    return;
  stream << "#include ";
  if (inc.type == Include::IncludePath)
    stream << "<";
  else
    stream << "\"";
  stream << inc.name;
  if (inc.type == Include::IncludePath)
    stream << ">";
  else
    stream << "\"";
  stream << endl;
}

const AbstractMetaClass* ShellGenerator::setCurrentScope(const AbstractMetaClass* scope)
{
  const AbstractMetaClass* previousScope = _currentScope;
  _currentScope = scope;
  return previousScope;
}

/*!
Returns true if the given function \a fun is operator>>() or
operator<<() that streams from/to a Q{Data,Text}Stream, false
otherwise.
*/
bool ShellGenerator::isSpecialStreamingOperator(const AbstractMetaFunction *fun)
{
  return ((fun->functionType() == AbstractMetaFunction::GlobalScopeFunction)
    && (fun->arguments().size() == 1)
    && (((fun->originalName() == "operator>>") && (fun->modifiedName() == "readFrom"))
    || ((fun->originalName() == "operator<<") && (fun->modifiedName() == "writeTo"))));
}

bool ShellGenerator::isBuiltIn(const QString& name) {

  static QSet<QString> builtIn;
  if (builtIn.isEmpty()) {
    builtIn.insert("Qt");
    builtIn.insert("QFont");
    builtIn.insert("QPixmap");
    builtIn.insert("QBrush");
    builtIn.insert("QBitArray");
    builtIn.insert("QByteArray");
    builtIn.insert("QPalette");
    builtIn.insert("QPen");
    builtIn.insert("QIcon");
    builtIn.insert("QImage");
    builtIn.insert("QPolygon");
    builtIn.insert("QRegion");
    builtIn.insert("QBitmap");
    builtIn.insert("QCursor");
    builtIn.insert("QColor");
    builtIn.insert("QSizePolicy");
    builtIn.insert("QKeySequence");
    builtIn.insert("QTextLength");
    builtIn.insert("QTextFormat");
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    builtIn.insert("QMatrix");
#endif
    builtIn.insert("QTransform");
    builtIn.insert("QMatrix4x4");
    builtIn.insert("QDate");
    builtIn.insert("QTime");
    builtIn.insert("QDateTime");
    builtIn.insert("QUrl");
    builtIn.insert("QLocale");
    builtIn.insert("QRect");
    builtIn.insert("QRectF");
    builtIn.insert("QSize");
    builtIn.insert("QSizeF");
    builtIn.insert("QLine");
    builtIn.insert("QLineF");
    builtIn.insert("QPoint");
    builtIn.insert("QPointF");
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    builtIn.insert("QRegExp");
#endif
    builtIn.insert("QRegularExpression");
  }
  return builtIn.contains(name);
}

TypeSystem::Ownership ShellGenerator::writeOwnershipTemplate(QTextStream & s, const AbstractMetaFunction * meta_function, int argumentIndex)
{
  TypeSystem::Ownership ownership = meta_function->ownership(meta_function->ownerClass(), TypeSystem::TargetLangCode, argumentIndex);
  if (ownership == TypeSystem::CppOwnership) {
    s << "PythonQtPassOwnershipToCPP<";
  }
  else if (ownership == TypeSystem::TargetLangOwnership) {
    s << "PythonQtPassOwnershipToPython<";
  }
  else if (ownership == TypeSystem::TargetLangThisOwnership) {
    s << "PythonQtNewOwnerOfThis<";
  }
  return ownership;
}
