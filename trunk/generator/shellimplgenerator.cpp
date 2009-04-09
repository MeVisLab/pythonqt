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

#include "shellimplgenerator.h"
#include "reporthandler.h"
#include "fileout.h"
#include "classgenerator.h"

extern void declareFunctionMetaTypes(QTextStream &stream,
                                     const AbstractMetaFunctionList &functions,
                                     QSet<QString> &registeredTypeNames);

QString ShellImplGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
    return QString("PythonQtWrapper_%1.cpp").arg(meta_class->name());
}

static bool include_less_than(const Include &a, const Include &b) 
{
    return a.name < b.name;
}

static void writeHelperCode(QTextStream &s, const AbstractMetaClass *)
{
}

void writeQtScriptQtBindingsLicense(QTextStream &stream);

void ShellImplGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
    if (FileOut::license)
        writeQtScriptQtBindingsLicense(s);

    QString pro_file_name = meta_class->package().replace(".", "_") + "/" + meta_class->package().replace(".", "_") + ".pri";

    if (!ClassGenerator::isBuiltIn(meta_class->name())) {
      priGenerator->addSource(pro_file_name, fileNameForClass(meta_class));
    }

    s << "#include \"PythonQtWrapper_" << meta_class->name() << ".h\"" << endl << endl;

    //if (!meta_class->generateShellClass())
    //    return;
  
    IncludeList list = meta_class->typeEntry()->extraIncludes();
    qSort(list.begin(), list.end());
    foreach (const Include &inc, list) {
      ClassGenerator::writeInclude(s, inc);
    }  
    s << endl;

    writeHelperCode(s, meta_class);

    // find constructors
    AbstractMetaFunctionList ctors;
    ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
                                       | AbstractMetaClass::WasVisible
                                       | AbstractMetaClass::NotRemovedFromTargetLang);
    // find member functions
    AbstractMetaFunctionList functions = meta_class->queryFunctions(
                                                                    AbstractMetaClass::NormalFunctions | AbstractMetaClass::WasPublic
                                                                    | AbstractMetaClass::NotRemovedFromTargetLang | AbstractMetaClass::ClassImplements
        );

    // write metatype declarations
    {
        QSet<QString> registeredTypeNames = m_qmetatype_declared_typenames;
    //    declareFunctionMetaTypes(s, functions, registeredTypeNames);
    //    s << endl;
    }
  
  if (!meta_class->isAbstract()) {

    // write constructors
    foreach (const AbstractMetaFunction *ctor, ctors) {
      if (!ctor->isPublic() || ctor->isAbstract()) { continue; }
      
        s << meta_class->qualifiedCppName() << "* ";
        s << "PythonQtWrapper_" << meta_class->name() << "::";
        writeFunctionSignature(s, ctor, 0, "new_", Option(OriginalName | ShowStatic));
        s << endl;
        s << "{ " << endl;
      s << "return new " << meta_class->qualifiedCppName() << "(";
        AbstractMetaArgumentList args = ctor->arguments();
        for (int i = 0; i < args.size(); ++i) {
            if (i > 0)
                s << ", ";
            s << args.at(i)->argumentName();
        }
        s << ");" << " }" << endl << endl;
    }
  }
  
    // write member functions
    for (int i = 0; i < functions.size(); ++i) {
        AbstractMetaFunction *fun = functions.at(i);
        if (fun->isSlot()) continue;
  
        writeFunctionSignature(s, fun, meta_class, QString(),
                               Option(OriginalName | ShowStatic | UnderscoreSpaces),
                               "PythonQtWrapper_");
        s << endl << "{" << endl;
        if (ClassGenerator::isSpecialStreamingOperator(fun)) {
          s << fun->arguments().at(0)->argumentName();
          if (fun->originalName().startsWith("operator>>")) {
            s << " >> ";
          } else {
            s << " << ";
          }
          s << " *theWrappedObject";
        } else {
          QString scriptFunctionName = fun->originalName();
          AbstractMetaArgumentList args = fun->arguments();
            // call the C++ implementation
            if (fun->type())
                s << "return ";
            if (scriptFunctionName.startsWith("operator>>")) {
              s << "(*theWrappedObject) >>" << args.at(0)->argumentName();
            } else if (scriptFunctionName.startsWith("operator<<")) {
              s << "(*theWrappedObject) <<" << args.at(0)->argumentName();
            } else if (scriptFunctionName.startsWith("operator[]")) {
                s << "(*theWrappedObject)[" << args.at(0)->argumentName() << "]";
            } else if (scriptFunctionName.startsWith("operator") && args.size()==1) {
              QString op = scriptFunctionName.mid(8);
              s << "*theWrappedObject " << op << " " << args.at(0)->argumentName();
            } else {
              if (fun->isStatic()) {
                s << meta_class->qualifiedCppName() << "::";
              } else {
                s << "theWrappedObject->";
              }
              s << fun->originalName() << "(";
              for (int i = 0; i < args.size(); ++i) {
                  if (i > 0)
                      s << ", ";
                  s << args.at(i)->argumentName();
              }
              s << ")";
            }
        }
        s << ";" << endl;

        s << "}" << endl << endl;
    }
}

void ShellImplGenerator::writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class)
{
    CodeSnipList code_snips = meta_class->typeEntry()->codeSnips();
    foreach (const CodeSnip &cs, code_snips) {
        if (cs.language == TypeSystem::ShellCode) {
            s << cs.code() << endl;
        }
    }
}
