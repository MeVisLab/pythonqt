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

#include "shellheadergenerator.h"
#include "fileout.h"
#include "classgenerator.h"

#include <QtCore/QDir>

#include <qdebug.h>

QString ShellHeaderGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
    return QString("PythonQtWrapper_%1.h").arg(meta_class->name());
}

void writeQtScriptQtBindingsLicense(QTextStream &stream);

void ShellHeaderGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
  
  setupGenerator->addClass(meta_class);

  if (FileOut::license)
        writeQtScriptQtBindingsLicense(s);

    QString include_block = "PYTHONQTWRAPPER_" + meta_class->name().toUpper() + "_H";

    s << "#ifndef " << include_block << endl
      << "#define " << include_block << endl << endl;

    Include inc = meta_class->typeEntry()->include();
    ClassGenerator::writeInclude(s, inc);
  
  s << "#include <QObject>" << endl << endl;

  IncludeList list = meta_class->typeEntry()->extraIncludes();
  qSort(list.begin(), list.end());
  foreach (const Include &inc, list) {
    ClassGenerator::writeInclude(s, inc);
  }  
  s << endl;
  
    QString pro_file_name = meta_class->package().replace(".", "_") + "/" + meta_class->package().replace(".", "_") + ".pri";

//    if (!meta_class->generateShellClass()) {
//        s << "#endif" << endl << endl;
//        priGenerator->addHeader(pro_file_name, fileNameForClass(meta_class));
//        return ;
//    }

    s << "class " << shellClassName(meta_class)
      << " : public QObject" << endl
      << "{ Q_OBJECT" << endl;

    s << "public:" << endl;
    
    AbstractMetaEnumList enums1 = meta_class->enums();
    AbstractMetaEnumList enums;
    foreach(AbstractMetaEnum* enum1, enums1) {
      if (enum1->isPublic() && !enum1->hasQEnumsDeclaration()) {
        enums << enum1;
      }
    }
  if (enums.count()) {
    s << "Q_ENUMS(";
    foreach(AbstractMetaEnum* enum1, enums) {
      s << enum1->name() << " ";
    }
    s << ")" << endl;

    foreach(AbstractMetaEnum* enum1, enums) {
      s << "enum " << enum1->name() << "{" << endl;
      bool first = true;
      foreach(AbstractMetaEnumValue* value, enum1->values()) {
        if (first) { first = false; }
        else { s << ", "; }
        s << "  " << value->name() << " = " << meta_class->qualifiedCppName() << "::" << value->name();
      }
      s << "};" << endl;
    }
  }

    s << "public slots:" << endl;
  if (!meta_class->isAbstract()) {
    AbstractMetaFunctionList ctors;
    ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
                                       | AbstractMetaClass::WasVisible
                                       | AbstractMetaClass::NotRemovedFromTargetLang);
    
    foreach (const AbstractMetaFunction *function, ctors) {
      if (!function->isPublic() || function->isAbstract()) { continue; }
            s << meta_class->qualifiedCppName() << "* ";
            writeFunctionSignature(s, function, 0, "new_",
                                   Option(IncludeDefaultExpression | OriginalName | ShowStatic));
            s << ";" << endl;
    }
  }
  if (meta_class->hasPublicDestructor() && !meta_class->isNamespace()) {
    s << "void delete_" << meta_class->name() << "(" << meta_class->qualifiedCppName() << "* obj) { delete obj; } ";
    s << endl;
  }
  
    AbstractMetaFunctionList functions = meta_class->queryFunctions( 
        AbstractMetaClass::NormalFunctions | AbstractMetaClass::WasVisible | AbstractMetaClass::WasPublic
        | AbstractMetaClass::NotRemovedFromTargetLang | AbstractMetaClass::ClassImplements
        );

    foreach (const AbstractMetaFunction *function, functions) {
      if (!function->isSlot()) {
        s << "   ";
        writeFunctionSignature(s, function, 0, QString(),
                               Option(IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
        s << ";" << endl;
      }
    }

//    writeInjectedCode(s, meta_class);

  //  s  << endl << "    QScriptValue __qtscript_self;" << endl;

    s  << "};" << endl << endl
       << "#endif // " << include_block << endl;

  if (!ClassGenerator::isBuiltIn(meta_class->name())) {
    priGenerator->addHeader(pro_file_name, fileNameForClass(meta_class));
  }
}

void ShellHeaderGenerator::writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class)
{
    CodeSnipList code_snips = meta_class->typeEntry()->codeSnips();
    foreach (const CodeSnip &cs, code_snips) {
        if (cs.language == TypeSystem::ShellDeclaration) {
            s << cs.code() << endl;
        }
    }
}
