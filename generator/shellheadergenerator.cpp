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
  ShellGenerator::writeInclude(s, inc);

  s << "#include <QObject>" << endl << endl;
  s << "#include <PythonQt.h>" << endl << endl;

  IncludeList list = meta_class->typeEntry()->extraIncludes();
  qSort(list.begin(), list.end());
  foreach (const Include &inc, list) {
    ShellGenerator::writeInclude(s, inc);
  }  
  s << endl;

  QString pro_file_name = meta_class->package().replace(".", "_") + "/" + meta_class->package().replace(".", "_") + ".pri";

  //    if (!meta_class->generateShellClass()) {
  //        s << "#endif" << endl << endl;
  //        priGenerator->addHeader(pro_file_name, fileNameForClass(meta_class));
  //        return ;
  //    }

  AbstractMetaFunctionList ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
    | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang);

  // Shell-------------------------------------------------------------------
  if (meta_class->generateShellClass()) {

    AbstractMetaFunctionList virtualsForShell = getVirtualFunctionsForShell(meta_class);

    s << "class " << shellClassName(meta_class)
      << " : public " << meta_class->qualifiedCppName() << endl << "{" << endl;
    s << "public:" << endl;
    foreach(AbstractMetaFunction* fun, ctors) {
      s << "    ";
      writeFunctionSignature(s, fun, 0,"PythonQtShell_",
        Option(IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
      s << ":" << meta_class->qualifiedCppName() << "(";
      QString scriptFunctionName = fun->originalName();
      AbstractMetaArgumentList args = fun->arguments();
      for (int i = 0; i < args.size(); ++i) {
        if (i > 0)
          s << ", ";
        s << args.at(i)->argumentName();
      }
      s << "),_wrapper(NULL) {};" << endl;
    }
    s << endl;

    foreach(AbstractMetaFunction* fun, virtualsForShell) {
      s << "virtual ";
      writeFunctionSignature(s, fun, 0, QString(),
        Option(IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
      s << ";" << endl;
    }
    s << endl;
    s << "  PythonQtInstanceWrapper* _wrapper; " << endl;

    s << "};" << endl << endl;
  }

  // Promoter-------------------------------------------------------------------
  AbstractMetaFunctionList promoteFunctions = getProtectedFunctionsThatNeedPromotion(meta_class);
  if (!promoteFunctions.isEmpty()) {
    s << "class " << promoterClassName(meta_class)
      << " : public " << meta_class->qualifiedCppName() << endl << "{ public:" << endl;

    foreach(AbstractMetaFunction* fun, promoteFunctions) {
      s << "inline ";
      writeFunctionSignature(s, fun, 0, "promoted_",
        Option(IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
      s << " { ";
      QString scriptFunctionName = fun->originalName();
      AbstractMetaArgumentList args = fun->arguments();
      if (fun->type())
        s << "return ";
      s << meta_class->qualifiedCppName() << "::";
      s << fun->originalName() << "(";
      for (int i = 0; i < args.size(); ++i) {
        if (i > 0)
          s << ", ";
        s << args.at(i)->argumentName();
      }
      s << "); }" << endl;
    }

    s << "};" << endl << endl;
  }

  // Wrapper-------------------------------------------------------------------

  s << "class " << wrapperClassName(meta_class)
    << " : public QObject" << endl
    << "{ Q_OBJECT" << endl;

  s << "public:" << endl;

  AbstractMetaEnumList enums1 = meta_class->enums();
  AbstractMetaEnumList enums;
  QList<FlagsTypeEntry*> flags;
  foreach(AbstractMetaEnum* enum1, enums1) {
    // catch gadgets and enums that are not exported on QObjects...
    if (enum1->wasPublic() && (!meta_class->isQObject() || !enum1->hasQEnumsDeclaration())) {
      enums << enum1;
      if (enum1->typeEntry()->flags()) {
        flags << enum1->typeEntry()->flags();
      }
    }
  }
  if (enums.count()) {
    s << "Q_ENUMS(";
    foreach(AbstractMetaEnum* enum1, enums) {
      s << enum1->name() << " ";
    }
    s << ")" << endl;
    
    if (flags.count()) {
      s << "Q_FLAGS(";
      foreach(FlagsTypeEntry* flag1, flags) {
        QString origName = flag1->originalName();
        int idx = origName.lastIndexOf("::");
        if (idx!= -1) {
          origName = origName.mid(idx+2);
        }
        s << origName << " ";
      }
      s << ")" << endl;
    }
    
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
    if (flags.count()) {
      foreach(AbstractMetaEnum* enum1, enums) {
        if (enum1->typeEntry()->flags()) {
          QString origName = enum1->typeEntry()->flags()->originalName();
          int idx = origName.lastIndexOf("::");
          if (idx!= -1) {
            origName = origName.mid(idx+2);
          }
          s << "Q_DECLARE_FLAGS("<< origName << ", " << enum1->name() <<")"<<endl;
        }
      }
    }
  }
  s << "public slots:" << endl;
  if (meta_class->generateShellClass() || !meta_class->isAbstract()) {

    bool copyConstructorSeen = false;
    bool defaultConstructorSeen = false;
    foreach (const AbstractMetaFunction *fun, ctors) {
      if (!fun->isPublic() || fun->isAbstract()) { continue; }
      s << meta_class->qualifiedCppName() << "* ";
      writeFunctionSignature(s, fun, 0, "new_",
        Option(IncludeDefaultExpression | OriginalName | ShowStatic));
      s << ";" << endl;
      if (fun->arguments().size()==1 && meta_class->qualifiedCppName() == fun->arguments().at(0)->type()->typeEntry()->qualifiedCppName()) {
        copyConstructorSeen = true;
      }
      if (fun->arguments().size()==0) {
        defaultConstructorSeen = true;
      }
    }

    if (meta_class->typeEntry()->isValue()
        && !copyConstructorSeen && defaultConstructorSeen) {
      QString className = meta_class->generateShellClass()?shellClassName(meta_class):meta_class->qualifiedCppName();
      s << meta_class->qualifiedCppName() << "* new_" << meta_class->name() << "(const " << meta_class->qualifiedCppName() << "& other) {" << endl;
      s << className << "* a = new " << className << "();" << endl;
      s << "*((" << meta_class->qualifiedCppName() << "*)a) = other;" << endl;
      s << "return a; }" << endl;
    }
  }
  if (meta_class->hasPublicDestructor() && !meta_class->isNamespace()) {
    s << "void delete_" << meta_class->name() << "(" << meta_class->qualifiedCppName() << "* obj) { delete obj; } ";
    s << endl;
  }
  if (meta_class->name()=="QTreeWidgetItem") {
    s << "bool hasOwner(QTreeWidgetItem* theWrappedObject) { return theWrappedObject->treeWidget()!=NULL || theWrappedObject->parent()!=NULL; }" << endl;
  } else if (meta_class->name()=="QGraphicsItem") {
    s << "bool hasOwner(QGraphicsItem* theWrappedObject) { return theWrappedObject->scene()!=NULL || theWrappedObject->parentItem()!=NULL; }" << endl;
  }

  AbstractMetaFunctionList functions = getFunctionsToWrap(meta_class);

  foreach (const AbstractMetaFunction *function, functions) {
    if (!function->isSlot()) {
      s << "   ";
      writeFunctionSignature(s, function, 0, QString(),
        Option(FirstArgIsWrappedObject| IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
      s << ";" << endl;
    }
  }

  //    writeInjectedCode(s, meta_class);

  //  s  << endl << "    QScriptValue __qtscript_self;" << endl;

  s  << "};" << endl << endl
    << "#endif // " << include_block << endl;

  if (!ShellGenerator::isBuiltIn(meta_class->name())) {
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
