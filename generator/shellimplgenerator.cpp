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

#include "shellimplgenerator.h"
#include "reporthandler.h"
#include "fileout.h"
#include <iostream>

extern void declareFunctionMetaTypes(QTextStream &stream,
                                     const AbstractMetaFunctionList &functions,
                                     QSet<QString> &registeredTypeNames);

QString ShellImplGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
  return QString("PythonQtWrapper_%1.cpp").arg(meta_class->name());
}

/* UNUSED
static bool include_less_than(const Include &a, const Include &b) 
{
  return a.name < b.name;
}
*/

static void writeHelperCode(QTextStream &, const AbstractMetaClass *)
{
}



void ShellImplGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
  setCurrentScope(meta_class);

  QString builtIn = ShellGenerator::isBuiltIn(meta_class->name())?"_builtin":"";
  QString fileBaseName = toFileNameBase(meta_class->package() + builtIn);
  QString pro_file_name = fileBaseName + "/" + fileBaseName + ".pri";
  priGenerator->addSource(pro_file_name, fileNameForClass(meta_class));
  
  s << "#include \"PythonQtWrapper_" << meta_class->name() << ".h\"" << endl << endl;

  s << "#include <PythonQtSignalReceiver.h>" << endl;
  s << "#include <PythonQtMethodInfo.h>" << endl;
  s << "#include <PythonQtConversion.h>" << endl;

  //if (!meta_class->generateShellClass())
  //    return;

  IncludeList list = meta_class->typeEntry()->extraIncludes();
  std::sort(list.begin(), list.end());
  foreach (const Include &inc, list) {
    ShellGenerator::writeInclude(s, inc);
  }  
  s << endl;

  writeHelperCode(s, meta_class);

  // find constructors
  AbstractMetaFunctionList ctors;
  ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
    | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang);
  // find member functions
  AbstractMetaFunctionList functions = getFunctionsToWrap(meta_class);

  // write metatype declarations
  {
    //    QSet<QString> registeredTypeNames = m_qmetatype_declared_typenames;
    //    declareFunctionMetaTypes(s, functions, registeredTypeNames);
    //    s << endl;
  }
  if (meta_class->qualifiedCppName().contains("Ssl")) {
    s << "#ifndef QT_NO_SSL"  << endl;
  }

  bool generateShell = meta_class->generateShellClass() && !ctors.isEmpty();
  if (generateShell) {

    s << shellClassName(meta_class) << "::~" << shellClassName(meta_class) << "() {" << endl;
    s << "  PythonQtPrivate* priv = PythonQt::priv();" << endl;
    s << "  if (priv) { priv->shellClassDeleted(this); }" << endl;
    s << "}" << endl;

    AbstractMetaFunctionList virtualsForShell = getVirtualFunctionsForShell(meta_class);
    foreach (const AbstractMetaFunction *fun, virtualsForShell) {
      bool hasReturnValue = !fun->type().isNull();
      writeFunctionSignature(s, fun, meta_class, QString(),
        Option(OriginalName | ShowStatic | UnderscoreSpaces | UseIndexedName),
        "PythonQtShell_");
      s << endl << "{" << endl;

      Option typeOptions = Option(OriginalName | UnderscoreSpaces | SkipName);
      AbstractMetaArgumentList args = fun->arguments();

      // we can't handle return values which are references right now, do not send those to Python...
      if (!hasReturnValue || !fun->type()->isReference()) {

        s << "if (_wrapper) {" << endl;
        s << "  PYTHONQT_GIL_SCOPE" << endl;
        s << "  if (((PyObject*)_wrapper)->ob_refcnt > 0) {" << endl;
        s << "    static PyObject* name = PyString_FromString(\"" << fun->name() << "\");" << endl;
        s << "    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);" << endl;
        s << "    if (obj) {" << endl;
        s << "      static const char* argumentList[] ={\"";
        if (hasReturnValue) {
          // write the arguments, return type first
          writeTypeInfo(s, fun->type(), typeOptions);
        }
        s << "\"";
        for (int i = 0; i < args.size(); ++i) {
          s << " , \"";
          writeTypeInfo(s, args.at(i)->type(), typeOptions);
          s << "\"";
        }
        s << "};" << endl;
        s << "      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(" << QString::number(args.size() + 1) << ", argumentList);" << endl;

        if (hasReturnValue) {
          s << "      ";
          writeTypeInfo(s, fun->type(), typeOptions);
          s << " returnValue{};" << endl;
        }
        s << "      void* args[" << QString::number(args.size() + 1) << "] = {nullptr";
        for (int i = 0; i < args.size(); ++i) {
          s << ", (void*)&" << args.at(i)->indexedName();
        }
        s << "};" << endl;

        s << "      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);" << endl;
        if (hasReturnValue) {
          s << "      if (result) {" << endl;
          s << "        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);" << endl;
          s << "        if (args[0]!=&returnValue) {" << endl;
          s << "          if (args[0]==nullptr) {" << endl;
          s << "            PythonQt::priv()->handleVirtualOverloadReturnError(\"" << fun->name() << "\", methodInfo, result);" << endl;
          s << "          } else {" << endl;
          s << "            returnValue = *((";
          writeTypeInfo(s, fun->type(), typeOptions);
          s << "*)args[0]);" << endl;
          s << "          }" << endl;
          s << "        }" << endl;
          s << "      }" << endl;
        }
        s << "      if (result) { Py_DECREF(result); }" << endl;
        s << "      Py_DECREF(obj);" << endl;
        // ugly hack, we don't support QGraphicsScene* nor QGraphicsItem* QVariants in PythonQt...
        if (fun->name() == "itemChange" && fun->type() && fun->type()->isVariant()) {
            s << "      if (change0 == QGraphicsItem::ItemParentChange || change0 == QGraphicsItem::ItemSceneChange) {\n";
            s << "        returnValue = value1;\n";
            s << "      } \n";
        }
        if (hasReturnValue) {
          s << "      return returnValue;" << endl;
        }
        else {
          s << "      return;" << endl;
        }
        s << "    } else {" << endl;
        s << "      PyErr_Clear();" << endl;
        s << "    }" << endl;
        s << "  }" << endl;
        s << "}" << endl;
      }
      s << "  ";
      if (fun->isAbstract()) {
        if (fun->type()) {
          // return empty default object
          s << "return ";
          if (fun->type()->indirections()>0) {
            s << "nullptr;";
          } else {
            writeTypeInfo(s, fun->type(), typeOptions);
            s << "();";
          }
        }
      } else {
        if (fun->type()) {
          s << "return ";
        }
        s << meta_class->qualifiedCppName() << "::";
        s << fun->originalName() << "(";
        for (int i = 0; i < args.size(); ++i) {
          if (i > 0) {
            s << ", ";
          }
          s << args.at(i)->indexedName();
        }
        s << ");";
      }
      s << endl << "}" << endl;
    }
  }

  if (meta_class->generateShellClass() || !meta_class->isAbstract()) {

    // write constructors
    foreach (const AbstractMetaFunction *ctor, ctors) {
      if (ctor->isAbstract() || (!meta_class->generateShellClass() && !ctor->isPublic())) { continue; }

      s << meta_class->qualifiedCppName() << "* ";
      s << "PythonQtWrapper_" << meta_class->name() << "::";
      writeFunctionSignature(s, ctor, 0, "new_", Option(AddOwnershipTemplates | OriginalName | ShowStatic));
      s << endl;
      s << "{ " << endl;
      s << "return new " << (meta_class->generateShellClass()?shellClassName(meta_class):meta_class->qualifiedCppName()) << "(";
      AbstractMetaArgumentList args = ctor->arguments();
      for (int i = 0; i < args.size(); ++i) {
        if (i > 0)
          s << ", ";
        s << args.at(i)->argumentName();
      }
      s << ");" << " }" << endl << endl;
    }
  }

  if (generateShell && meta_class->isQObject()) {
    s << "const QMetaObject* " << shellClassName(meta_class) << "::metaObject() const {" << endl;
    s << "  if (QObject::d_ptr->metaObject) {" << endl;
    s << "    return QObject::d_ptr->dynamicMetaObject();" << endl;
    s << "  } else if (_wrapper) {" << endl;
    s << "    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &" << meta_class->qualifiedCppName() << "::staticMetaObject);" << endl;
    s << "  } else {" << endl;
    s << "    return &" << meta_class->qualifiedCppName() << "::staticMetaObject;" << endl;
    s << "  }" << endl;
    s << "}" << endl;

    s << "int " << shellClassName(meta_class) << "::qt_metacall(QMetaObject::Call call, int id, void** args) {" << endl;
    s << "  int result = " << meta_class->qualifiedCppName() << "::qt_metacall(call, id, args);" << endl;
    s << "  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;" << endl;
    s << "}" << endl;

  }

  QString wrappedObject = " (*theWrappedObject)";

  // write member functions
  for (int i = 0; i < functions.size(); ++i) {
    AbstractMetaFunction *fun = functions.at(i);
    bool needsWrapping = functionNeedsNormalWrapperSlot(fun, meta_class);
    if (!needsWrapping) {
      continue;
    }
    writeFunctionSignature(s, fun, meta_class, QString(),
      Option(AddOwnershipTemplates | ConvertReferenceToPtr | FirstArgIsWrappedObject | OriginalName | ShowStatic | UnderscoreSpaces | ProtectedEnumAsInts),
      "PythonQtWrapper_");
    s << endl << "{" << endl;
    s << "  ";
    if (ShellGenerator::isSpecialStreamingOperator(fun)) {
      s << fun->arguments().at(0)->argumentName();
      if (fun->originalName().startsWith("operator>>")) {
        s << " >> ";
      } else {
        s << " << ";
      }
      s << wrappedObject;
    } else {
      QString scriptFunctionName = fun->originalName();
      AbstractMetaArgumentList args = fun->arguments();
      // call the C++ implementation
      if (fun->type()) {
        s << "return ";
        // call the C++ implementation
        if (fun->type()->isReference()) {
          s << "&";
        }
      }
      s << "(";
      if (scriptFunctionName.startsWith("operator>>") && !fun->wasProtected()) {
        s << wrappedObject << " >>" << args.at(0)->argumentName();
      } else if (scriptFunctionName.startsWith("operator<<") && !fun->wasProtected()) {
        s << wrappedObject << " <<" << args.at(0)->argumentName();
      } else if (scriptFunctionName.startsWith("operator[]") && !fun->wasProtected()) {
        s << wrappedObject << "[" << args.at(0)->argumentName() << "]";
      } else if (scriptFunctionName.startsWith("operator") && args.size()==1 && !fun->wasProtected()) {
        QString op = scriptFunctionName.mid(8);
        s << wrappedObject << op << " " << args.at(0)->argumentName();
      } else {
        if (fun->isStatic()) {
          if (fun->wasProtected()) {
            s << promoterClassName(meta_class) << "::promoted_";
          } else {
            s << meta_class->qualifiedCppName() << "::";
          }
        } else {
          if (fun->wasProtected()) {
            //|| (fun->isVirtual() && meta_class->typeEntry()->shouldCreatePromoter())) {
            s << " (("  << promoterClassName(meta_class) << "*)theWrappedObject)->promoted_";
          } else {
            s << " theWrappedObject->";
          }
        }
        if (fun->wasProtected()) {
          // this is different e.g. for operators
          s << fun->name() << "(";
        }
        else {
          s << fun->originalName() << "(";
        }
        for (int i = 0; i < args.size(); ++i) {
          if (i > 0)
            s << ", ";
          s << args.at(i)->argumentName();
        }
        s << ")";
      }
      s << ")";
    }
    s << ";" << endl;

    s << "}" << endl << endl;
  }

  if (meta_class->hasDefaultToStringFunction()) {
    s << "QString PythonQtWrapper_" << meta_class->name() << "::py_toString(" << meta_class->qualifiedCppName() << "* obj) { return obj->toString(); }" << endl; 
  } else if (meta_class->hasToStringCapability()) {
    FunctionModelItem fun = meta_class->hasToStringCapability();
    int indirections = fun->arguments().at(1)->type().indirections();
    QString deref = QLatin1String(indirections == 0 ? "*" : "");
    s << "QString PythonQtWrapper_" << meta_class->name() << "::py_toString(" << meta_class->qualifiedCppName() << "* obj) {" << endl; 
    s << "  QString result;" << endl;
    s << "  QDebug d(&result);" << endl;
    s << "  d << " << deref  << "obj;" << endl;
    s << "  return result;" << endl;
    s << "}" << endl << endl;
  }

  writeInjectedCode(s, meta_class);

  if (meta_class->qualifiedCppName().contains("Ssl")) {
    s << "#endif"  << endl;
  }

  setCurrentScope(nullptr);
}

void ShellImplGenerator::writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class)
{
  CodeSnipList code_snips = meta_class->typeEntry()->codeSnips();
  foreach (const CodeSnip &cs, code_snips) {
    if (cs.language == TypeSystem::PyWrapperCode) {
      s << cs.code() << endl;
    }
  }
}
