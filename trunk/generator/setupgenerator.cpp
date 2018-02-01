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

#include "setupgenerator.h"
#include "shellgenerator.h"
#include "reporthandler.h"
#include "fileout.h"


void SetupGenerator::addClass(const QString& package, const AbstractMetaClass *cls)
{
  packHash[package].append(cls);
}

void maybeDeclareMetaType(QTextStream &stream, const QString &typeName,
                          QSet<QString> &registeredTypeNames);
bool hasDefaultConstructor(const AbstractMetaClass *meta_class);

static QStringList getOperatorCodes(const AbstractMetaClass* cls) {
  QSet<QString> operatorCodes;
  AbstractMetaFunctionList returned;
  AbstractMetaFunctionList functions = cls->functions();
  foreach (AbstractMetaFunction *function, functions) {
    if (function->originalName().startsWith("operator")) {
      QString op = function->originalName().mid(8);
      operatorCodes.insert(op);
    }
  }
  QSet<QString> r;
  foreach(QString op, operatorCodes.toList()) {
    if (op == ">" || op == "<" || op == ">=" || op == "<=" || op == "==" || op == "!=") {
      r.insert("PythonQt::Type_RichCompare");
    } else if (op == "+") {
      r.insert("PythonQt::Type_Add");
    } else if (op == "-") {
      r.insert("PythonQt::Type_Subtract");
    } else if (op == "/") {
      r.insert("PythonQt::Type_Divide");
    } else if (op == "*") {
      r.insert("PythonQt::Type_Multiply");
    } else if (op == "%") {
      r.insert("PythonQt::Type_Mod");
    } else if (op == "&") {
      r.insert("PythonQt::Type_And");
    } else if (op == "|") {
      r.insert("PythonQt::Type_Or");
    } else if (op == "^") {
      r.insert("PythonQt::Type_Xor");
    } else if (op == "~") {
      r.insert("PythonQt::Type_Invert");
    
    } else if (op == "+=") {
      r.insert("PythonQt::Type_InplaceAdd");
    } else if (op == "-=") {
      r.insert("PythonQt::Type_InplaceSubtract");
    } else if (op == "/=") {
      r.insert("PythonQt::Type_InplaceDivide");
    } else if (op == "*=") {
      r.insert("PythonQt::Type_InplaceMultiply");
    } else if (op == "%=") {
      r.insert("PythonQt::Type_InplaceMod");
    } else if (op == "&=") {
      r.insert("PythonQt::Type_InplaceAnd");
    } else if (op == "|=") {
      r.insert("PythonQt::Type_InplaceOr");
    } else if (op == "^=") {
      r.insert("PythonQt::Type_InplaceXor");
    }
  }
  if (!cls->getDefaultNonZeroFunction().isEmpty()) {
    r.insert("PythonQt::Type_NonZero");
  }

  {
    CodeSnipList code_snips = cls->typeEntry()->codeSnips();
    foreach(const CodeSnip &cs, code_snips) {
      if (cs.language == TypeSystem::PyWrapperOperators) {
        QStringList values = cs.code().split(" ", QString::SkipEmptyParts);
        foreach(QString value, values) {
          r.insert(value);
        }
      }
    }
  }


  QStringList result = r.toList();
  qSort(result);
  return result;
}

static bool class_less_than(const AbstractMetaClass *a, const AbstractMetaClass *b)
{
  return a->name() < b->name();
}

static QSet<QString> _builtinListTypes = QSet<QString>() << "QByteArray"
<< "QDate"
<< "QTime"
<< "QDateTime"
<< "QUrl"
<< "QLocale"
<< "QRect"
<< "QRectF"
<< "QSize"
<< "QSizeF"
<< "QLine"
<< "QLineF"
<< "QPoint"
<< "QPointF"
<< "QRegExp"
<< "QFont"
<< "QPixmap"
<< "QBrush"
<< "QColor"
<< "QPalette"
<< "QIcon"
<< "QImage"
<< "QPolygon"
<< "QRegion"
<< "QBitmap"
<< "QCursor"
<< "QSizePolicy"
<< "QKeySequence"
<< "QPen"
<< "QTextLength"
<< "QTextFormat"
<< "QMatrix"
<< "QVariant";

static void addListRegistration(AbstractMetaType* type, QSet<QString>& output) {
  if (type->instantiations().size() > 0) {
    QList<AbstractMetaType *> args = type->instantiations();
    
    /*
    QString debugStr;
    Q_FOREACH(AbstractMetaType* arg, args) {
      debugStr += QString(arg->typeEntry()->isEnum()?"ENUM ":"") + arg->typeEntry()->qualifiedCppName() + ",";
      if (arg->typeEntry()->qualifiedCppName() == "QPair") {
        debugStr += "(" + arg->instantiations().at(0)->typeEntry()->qualifiedCppName() + ",";
        debugStr += arg->instantiations().at(1)->typeEntry()->qualifiedCppName() + ")";
      }
    }
    output.insert(QString("// TEMPLATEARG: ") + type->typeEntry()->qualifiedCppName() + " " + debugStr);
    */

    if (args.count() == 1) {
      if (args.at(0)->indirections() > 0) {
        return;
      }
      QString typeName = type->typeEntry()->qualifiedCppName();
      QString innerName = args.at(0)->typeEntry()->qualifiedCppName();

      if (typeName == "QStringList") {
        return;
      }
      if (typeName.startsWith("QVector") || typeName.startsWith("QList")) {
        if (args.at(0)->isEnum()) {
          output.insert(QString("PythonQtMethodInfo::addParameterTypeAlias(\"") + typeName + "<" + innerName + ">\", \"" + typeName + "<int>\");");
        } else if (args.at(0)->instantiations().isEmpty() && innerName.startsWith("Q") && !_builtinListTypes.contains(innerName)) {
          QString result = "PythonQtRegisterListTemplateConverterForKnownClass(" + typeName + ", " + innerName + ");";
          output.insert(result);
        }
        if (!innerName.startsWith("Q")) {
          // for debugging:
          //output.insert(QString("// POD: ") + typeName + " " + innerName);
        }
      }
    }
  }
}

void SetupGenerator::generate()
{
  AbstractMetaClassList classes_with_polymorphic_id;
  {
    QHashIterator<QString, QList<const AbstractMetaClass*> > pack(packHash);
    while (pack.hasNext()) {
      pack.next();
      QList<const AbstractMetaClass*> list = pack.value();
      foreach (const AbstractMetaClass *cls, list) {
        if (cls->typeEntry()->isPolymorphicBase()) {
          classes_with_polymorphic_id.append((AbstractMetaClass*)cls);
        }
      }
    }
  }
  qSort(classes_with_polymorphic_id.begin(), classes_with_polymorphic_id.end(), class_less_than);

  QHashIterator<QString, QList<const AbstractMetaClass*> > pack(packHash);
  while (pack.hasNext()) {
    pack.next();
    QList<const AbstractMetaClass*> list = pack.value();
    if (list.isEmpty())
      continue;
    qSort(list.begin(), list.end(), class_less_than);

    QString packKey = pack.key();
    QString packName = pack.key();
    QStringList components = packName.split("_");
    if ((components.size() > 2) && (components.at(0) == "com")
      && (components.at(1) == "trolltech")) {
        // kill com.trolltech in key
        components.removeAt(0);
        components.removeAt(0);
    }

    QString shortPackName;
    foreach (QString comp, components) {
      comp[0] = comp[0].toUpper();
      shortPackName += comp;
    }
    // add missing camel case (workaround..)
    if (shortPackName == "QtWebkit") {
      shortPackName = "QtWebKit";
    } else if (shortPackName == "QtXmlpatterns") {
      shortPackName = "QtXmlPatterns";
    } else if (shortPackName == "QtWebenginewidgets") {
      shortPackName = "QtWebEngineWidgets";
    } else if (shortPackName == "QtOpengl") {
      shortPackName = "QtOpenGL";
    } else if (shortPackName == "QtUitools") {
      shortPackName = "QtUiTools";
    }


    {
      QString fileName(packName + "/" + packKey + "_init.cpp");
      FileOut initFile(m_out_dir + "/generated_cpp/" + fileName);
      ReportHandler::debugSparse(QString("generating: %1").arg(fileName));
      QTextStream &s = initFile.stream;

      s << "#include <PythonQt.h>" << endl;
      s << "#include <PythonQtConversion.h>" << endl;

      for (int i=0; i<(list.count()+MAX_CLASSES_PER_FILE-1) / MAX_CLASSES_PER_FILE; i++) {
        s << "#include \"" << packKey << QString::number(i) << ".h\"" << endl;
      }
      s << endl;

      QStringList polymorphicHandlers;
      if (!packName.endsWith("_builtin")) {
        polymorphicHandlers = writePolymorphicHandler(s, list.at(0)->package(), classes_with_polymorphic_id, list);
        s << endl;
      }

      QSet<QString> listRegistration;
      QSet<QString> snips;
      foreach(const AbstractMetaClass *cls, list) {
        Q_FOREACH(const AbstractMetaFunction* func, cls->functions()) {
          if (func->type() && func->type()->isContainer()) {
            addListRegistration(func->type(), listRegistration);
          }
          Q_FOREACH(const AbstractMetaArgument* arg, func->arguments()) {
            if (arg->type() && arg->type()->isContainer()) {
              addListRegistration(arg->type(), listRegistration);
            }
          }
        }
        {
          while (cls) {
            CodeSnipList code_snips = cls->typeEntry()->codeSnips();
            foreach(const CodeSnip &cs, code_snips) {
              if (cs.language == TypeSystem::PyInitSource) {
                snips.insert(cs.code());
              }
            }
            cls = cls->baseClass();
          }
        }
      }

      foreach(QString snip, snips) {
        s << snip;
      }
      s << endl;

      // declare individual class creation functions
      s << "void PythonQt_init_" << shortPackName << "(PyObject* module) {" << endl;

      if (shortPackName.endsWith("Builtin")) {
        shortPackName = shortPackName.mid(0, shortPackName.length()-strlen("builtin"));
      }

      foreach (const AbstractMetaClass *cls, list) {
        if (cls->qualifiedCppName().contains("Ssl")) {
          s << "#ifndef QT_NO_SSL"  << endl;
        }
        AbstractMetaFunctionList ctors = cls->queryFunctions(AbstractMetaClass::Constructors
          | AbstractMetaClass::WasVisible
          | AbstractMetaClass::NotRemovedFromTargetLang);

        QString shellCreator;
        if (cls->generateShellClass() && !ctors.isEmpty()) {
          QString setInstanceFunc = "PythonQtSetInstanceWrapperOnShell";
          {
            const AbstractMetaClass* theclass = cls;
            while (theclass) {
              CodeSnipList code_snips = theclass->typeEntry()->codeSnips();
              foreach(const CodeSnip &cs, code_snips) {
                if (cs.language == TypeSystem::PySetWrapperFunc) {
                  setInstanceFunc = cs.code();
                  break;
                }
              }
              theclass = theclass->baseClass();
            }
          }
          shellCreator = ", " + setInstanceFunc + "<" + ShellGenerator::shellClassName(cls) + ">";
        } else {
          shellCreator = ", NULL";
        }
        QString operatorCodes = getOperatorCodes(cls).join("|");
        if (operatorCodes.isEmpty()) {
          operatorCodes = "0";
        }
        if (cls->isQObject()) {
          s << "PythonQt::priv()->registerClass(&" << cls->qualifiedCppName() << "::staticMetaObject, \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">" << shellCreator << ", module, " << operatorCodes <<");" << endl;
        } else {
          QString baseName = cls->baseClass()?cls->baseClass()->qualifiedCppName():"";
          s << "PythonQt::priv()->registerCPPClass(\""<< cls->qualifiedCppName() << "\", \"" << baseName << "\", \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">" << shellCreator << ", module, " << operatorCodes <<");" << endl;
        }
        foreach(AbstractMetaClass* interface, cls->interfaces()) {
          // the interface might be our own class... (e.g. QPaintDevice)
          if (interface->qualifiedCppName() != cls->qualifiedCppName()) {
            s << "PythonQt::self()->addParentClass(\""<< cls->qualifiedCppName() << "\", \"" << interface->qualifiedCppName() << "\",PythonQtUpcastingOffset<" << cls->qualifiedCppName() <<","<<interface->qualifiedCppName()<<">());" << endl;
          }
        }
        if (cls->qualifiedCppName().contains("Ssl")) {
          s << "#endif"  << endl;
        }
      }
      s << endl;
      foreach (QString handler, polymorphicHandlers) {
        s << "PythonQt::self()->addPolymorphicHandler(\""<< handler << "\", polymorphichandler_" << handler << ");" << endl;
      }
      s << endl;

      QStringList list = listRegistration.toList();
      list.sort();
      Q_FOREACH(QString name, list) {
        if (name.contains("Ssl")) {
          s << "#ifndef QT_NO_SSL" << endl;
        }
        s << name << endl;
        if (name.contains("Ssl")) {
          s << "#endif" << endl;
        }
      }

      s << "}";
      s << endl;
    }
  }
}

QStringList SetupGenerator::writePolymorphicHandler(QTextStream &s, const QString &package,
                                                    const AbstractMetaClassList &polybase, QList<const AbstractMetaClass*>& allClasses)
{
  QStringList handlers;
  foreach (AbstractMetaClass *cls, polybase) {
    const ComplexTypeEntry *centry = cls->typeEntry();
    if (!centry->isPolymorphicBase())
      continue;
    bool isGraphicsItem = (cls->qualifiedCppName()=="QGraphicsItem");

    bool first = true;
    foreach (const AbstractMetaClass *clazz, allClasses) {
      bool inherits = false;
      if (isGraphicsItem) {
        const AbstractMetaClass *currentClazz = clazz;
        while (!inherits && currentClazz) {
          foreach(AbstractMetaClass* interfaze, currentClazz->interfaces()) {
            if (interfaze->qualifiedCppName()=="QGraphicsItem") {
              inherits = true;
              break;
            }
          }
          currentClazz = currentClazz->baseClass();
        }
      } else {
        inherits = clazz->inheritsFrom(cls);
      }
      if (clazz->package() == package && inherits) {
        if (!clazz->typeEntry()->polymorphicIdValue().isEmpty()) {
          // On first find, open the function
          if (first) {
            first = false;

            QString handler = cls->name();
            handlers.append(handler);

            s << "static void* polymorphichandler_" << handler
              << "(const void *ptr, const char **class_name)" << endl
              << "{" << endl
              << "    Q_ASSERT(ptr != 0);" << endl
              << "    " << cls->qualifiedCppName() << " *object = ("
              << cls->qualifiedCppName() << " *)ptr;" << endl;
          }

          // For each, add case label
          QString polyId = clazz->typeEntry()->polymorphicIdValue();
          s << "    if ("
            << polyId.replace("%1", "object")
            << ") {" << endl
            << "        *class_name = \"" << clazz->name() << "\";" << endl
            << "        return (" << clazz->qualifiedCppName() << "*)object;" << endl
            << "    }" << endl;
        } else {
          QString warning = QString("class '%1' inherits from polymorphic class '%2', but has no polymorphic id set")
            .arg(clazz->name())
            .arg(cls->name());

          ReportHandler::warning(warning);
        }
      }
    }

    // Close the function if it has been opened
    if (!first) {
      s << "    return NULL;" << endl
        << "}" << endl;
    }
  }

  return handlers;
}
