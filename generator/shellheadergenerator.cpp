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

#include "shellheadergenerator.h"
#include "fileout.h"

#include <QtCore/QDir>

#include <qdebug.h>

QString ShellHeaderGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
  return QString("PythonQtWrapper_%1.h").arg(meta_class->name());
}


void ShellHeaderGenerator::writeFieldAccessors(QTextStream &s, const AbstractMetaField *field)
{
  const AbstractMetaFunction *setter = field->setter();
  const AbstractMetaFunction *getter = field->getter();

  // static fields are not supported (yet?)
  if (setter->isStatic()) return;

  // Uuid data4 did not work (TODO: move to typesystem...(
  if (field->enclosingClass()->name()=="QUuid" &&  setter->name()=="data4") return;
  if (field->enclosingClass()->name()=="QIPv6Address") return;

  bool isInventorField = field->type()->name().startsWith("So");

  if (!isInventorField && !field->type()->isConstant()) {
    writeFunctionSignature(s, setter, 0, QString(),
                           Option(ConvertReferenceToPtr | FirstArgIsWrappedObject| IncludeDefaultExpression | ShowStatic | UnderscoreSpaces));
    s << "{ theWrappedObject->" << field->name() << " = " << setter->arguments()[0]->argumentName() << "; }\n";
  }
  
  bool addIndirection = false;
  if (isInventorField && getter->type()->indirections() == 0) {
    // make it a field ptr:
    getter->type()->setIndirections(1);
    addIndirection = true;
  }
  writeFunctionSignature(s, getter, 0, QString(),
                         Option(ConvertReferenceToPtr | FirstArgIsWrappedObject| IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
  s << "{ return ";
  if (addIndirection) {
    s << "&";
  }
  s << "theWrappedObject->" << field->name() << "; }\n";
}

static bool enum_lessThan(const AbstractMetaEnum *a, const AbstractMetaEnum *b)
{
  return a->name() < b->name();
}

static bool field_lessThan(const AbstractMetaField *a, const AbstractMetaField *b)
{
  return a->name() < b->name();
}

void ShellHeaderGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
  QString builtIn = ShellGenerator::isBuiltIn(meta_class->name())?"_builtin":"";
  QString pro_file_name = meta_class->package().replace(".", "_") + builtIn + "/" + meta_class->package().replace(".", "_") + builtIn + ".pri";
  priGenerator->addHeader(pro_file_name, fileNameForClass(meta_class));
  setupGenerator->addClass(meta_class->package().replace(".", "_") + builtIn, meta_class);

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

  AbstractMetaFunctionList ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
    | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang);

  if (meta_class->qualifiedCppName().contains("Ssl")) {
    s << "#ifndef QT_NO_SSL"  << endl;
  }

  // Shell-------------------------------------------------------------------
  if (meta_class->generateShellClass() && !ctors.isEmpty()) {

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
      s << "),_wrapper(NULL) {";
      writeInjectedCode(s, meta_class, TypeSystem::PyInheritShellConstructorCode, true);
      s << "};" << endl;
    }
    s << endl;
    s << "   ~" << shellClassName(meta_class) << "();" << endl;
    s << endl;

    foreach(AbstractMetaFunction* fun, virtualsForShell) {
      s << "virtual ";
      writeFunctionSignature(s, fun, 0, QString(),
        Option(IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces));
      s << ";" << endl;
    }
    s << endl;
    if (meta_class->isQObject()) {
      s << "  const QMetaObject* metaObject() const;" << endl;
      s << "  int qt_metacall(QMetaObject::Call call, int id, void** args);" << endl;
    }
    writeInjectedCode(s, meta_class, TypeSystem::PyShellDeclaration);
    writeInjectedCode(s, meta_class, TypeSystem::PyInheritShellDeclaration, true);
    s << "  PythonQtInstanceWrapper* _wrapper;" << endl;

    s << "};" << endl << endl;
  }

  // Promoter-------------------------------------------------------------------
  AbstractMetaFunctionList promoteFunctions;
  if (meta_class->typeEntry()->shouldCreatePromoter()) {
    promoteFunctions = getProtectedFunctionsThatNeedPromotion(meta_class);
  }
  if (!promoteFunctions.isEmpty()) {
    s << "class " << promoterClassName(meta_class)
      << " : public " << meta_class->qualifiedCppName() << endl << "{ public:" << endl;

    AbstractMetaEnumList enums1 = meta_class->enums();
    qSort(enums1.begin(), enums1.end(), enum_lessThan);
    foreach(AbstractMetaEnum* enum1, enums1) {
      if (enum1->wasProtected()) {
        s << "enum " << enum1->name() << "{" << endl;
        bool first = true;
        QString scope = meta_class->qualifiedCppName();
        foreach(AbstractMetaEnumValue* value, enum1->values()) {
          if (first) { first = false; }
          else { s << ", "; }
          s << "  " << value->name() << " = " << scope << "::" << value->name();
        }
        s << "};" << endl;
      }
    }
    
    foreach(AbstractMetaFunction* fun, promoteFunctions) {
      // normal promoter
      if (fun->wasProtected()) {
        if (fun->isStatic()) {
          s << "static ";
        }
        s << "inline ";
        writeFunctionSignature(s, fun, 0, "promoted_",
          Option(IncludeDefaultExpression | OriginalName | UnderscoreSpaces | ProtectedEnumAsInts));
        s << " { ";
        QString scriptFunctionName = fun->originalName();
        AbstractMetaArgumentList args = fun->arguments();
        if (fun->type()) {
          s << "return ";
        }
        if (!fun->isStatic()) {
          // always do a direct call, since we want to call the real virtual function here
          s << "this->";
        }
        s << fun->originalName() << "(";
        writePromoterArgs(args, s);
        s << "); }" << endl;
      }
    }

    foreach(AbstractMetaFunction* fun, promoteFunctions) {
      // qualified promoter for virtual functions
      if (fun->isVirtual()) {
        s << "inline ";
        writeFunctionSignature(s, fun, 0, "py_q_",
          Option(IncludeDefaultExpression | OriginalName | UnderscoreSpaces | ProtectedEnumAsInts));
        s << " { ";
        QString scriptFunctionName = fun->originalName();
        AbstractMetaArgumentList args = fun->arguments();
        if (fun->type()) {
          s << "return ";
        }
        if (!fun->isAbstract()) {
          // call the qualified version, we don't want the virtual function
          s << meta_class->qualifiedCppName() << "::";
        }
        else {
          // TODO: this would better be empty and do no call at all...
          s << "this->";
        }
        s << fun->originalName() << "(";
        writePromoterArgs(args, s);
        s << "); }" << endl;
      }
    }

    s << "};" << endl << endl;
  }

  // Wrapper-------------------------------------------------------------------

  s << "class " << wrapperClassName(meta_class)
    << " : public QObject" << endl
    << "{ Q_OBJECT" << endl;

  s << "public:" << endl;

  AbstractMetaEnumList enums1 = meta_class->enums();
  qSort(enums1.begin(), enums1.end(), enum_lessThan);
  AbstractMetaEnumList enums;
  QList<FlagsTypeEntry*> flags;
  foreach(AbstractMetaEnum* enum1, enums1) {
    // catch gadgets and enums that are not exported on QObjects...
    // since we don't parse Q_FLAG(S), we also need to generate for Q_ENUM which might
    // have a missing Q_FLAG(S) declaration.
    if ((enum1->wasProtected() || enum1->wasPublic()) && 
      (!meta_class->isQObject() || !enum1->hasQEnumsDeclaration() || enum1->typeEntry()->flags()))
    {
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
      QString scope = enum1->wasProtected() ? promoterClassName(meta_class) : meta_class->qualifiedCppName();

      foreach(AbstractMetaEnumValue* value, enum1->values()) {
        if (first) { first = false; }
        else { s << ", "; }
        s << "  " << value->name() << " = " << scope << "::" << value->name();
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
      if (fun->isAbstract() || (!meta_class->generateShellClass() && !fun->isPublic())) { continue; }

      s << meta_class->qualifiedCppName() << "* ";
      writeFunctionSignature(s, fun, 0, "new_",
        Option(IncludeDefaultExpression | OriginalName | ShowStatic | AddOwnershipTemplates));
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
    s << "void delete_" << meta_class->name() << "(" << meta_class->qualifiedCppName() << "* obj) { delete obj; }" << endl;
  }

  AbstractMetaFunctionList functions = getFunctionsToWrap(meta_class);

  foreach (const AbstractMetaFunction *function, functions) {
    if (functionNeedsNormalWrapperSlot(function, meta_class)) {
      // for debugging:
      //functionHasNonConstReferences(function);
      s << "   ";
      writeFunctionSignature(s, function, 0, QString(),
        Option(AddOwnershipTemplates | ConvertReferenceToPtr | FirstArgIsWrappedObject | IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces | ProtectedEnumAsInts));
      s << ";" << endl;
    }
    if (function->isVirtual() && meta_class->typeEntry()->shouldCreatePromoter()) {
      // qualified version that calls the promoter/the qualified version
      s << "   ";
      writeFunctionSignature(s, function, 0, "py_q_",
        Option(AddOwnershipTemplates | ConvertReferenceToPtr | FirstArgIsWrappedObject | IncludeDefaultExpression | OriginalName | ShowStatic | UnderscoreSpaces | ProtectedEnumAsInts));
      s << "{  ";

      QString scriptFunctionName = function->originalName();
      AbstractMetaArgumentList args = function->arguments();
      // call the C++ implementation
      if (function->type()) {
        s << "return ";
        // call the C++ implementation
        if (function->type()->isReference()) {
          s << "&";
        }
      }
      s << "(((" << promoterClassName(meta_class) << "*)theWrappedObject)->py_q_";
      s << function->originalName() << "(";
      for (int i = 0; i < args.size(); ++i) {
        if (i > 0)
          s << ", ";
        s << args.at(i)->argumentName();
      }
      s << "));";
      s << "}" << endl;
    }
  }
  if (meta_class->hasDefaultToStringFunction() || meta_class->hasToStringCapability()) {
    s << "    QString py_toString(" << meta_class->qualifiedCppName() << "*);" << endl; 
  }
  QString nonZeroFunc = meta_class->getDefaultNonZeroFunction();
  if (!nonZeroFunc.isEmpty()) {
    s << "    bool __nonzero__(" << meta_class->qualifiedCppName() << "* obj) { return ";
    if (nonZeroFunc != "isValid") {
      s << "!";
    }
    s << "obj->" << nonZeroFunc << "(); }" << endl;
  }

  AbstractMetaFieldList fields = meta_class->fields();
  qSort(fields.begin(), fields.end(), field_lessThan);

  // TODO: move "So" check to typesystem, e.g. allow star in rejection...
  // Field accessors
  foreach (const AbstractMetaField *field, fields ) {
    if (field->isPublic()) {
      writeFieldAccessors(s, field);
    }
  }

  writeInjectedCode(s, meta_class, TypeSystem::PyWrapperDeclaration);

  
  s  << "};" << endl << endl;
  if (meta_class->qualifiedCppName().contains("Ssl")) {
    s << "#endif"  << endl << endl;
  }

  s  << "#endif // " << include_block << endl;


}

void ShellHeaderGenerator::writePromoterArgs(AbstractMetaArgumentList &args, QTextStream & s)
{
  for (int i = 0; i < args.size(); ++i) {
    if (i > 0) {
      s << ", ";
    }
    if (args.at(i)->type()->isEnum()) {
      AbstractMetaEnum* enumType = m_classes.findEnum((EnumTypeEntry *)args.at(i)->type()->typeEntry());
      if (enumType && enumType->wasProtected()) {
        s << "(" << enumType->typeEntry()->qualifiedCppName() << ")";
      }
    }
    s << args.at(i)->argumentName();
  }
}

void ShellHeaderGenerator::writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class, int type, bool recursive)
{
  const AbstractMetaClass *cls = meta_class;
  do {
    CodeSnipList code_snips = cls->typeEntry()->codeSnips();
    foreach(const CodeSnip &cs, code_snips) {
      if (cs.language == type) {
        s << cs.code() << endl;
      }
    }
    cls = cls->baseClass();
  } while (recursive && cls);
}
