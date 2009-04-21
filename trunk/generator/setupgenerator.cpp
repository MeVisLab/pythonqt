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

#include "setupgenerator.h"
#include "shellgenerator.h"
#include "reporthandler.h"
#include "fileout.h"

//#define Q_SCRIPT_LAZY_GENERATOR

void SetupGenerator::addClass(const AbstractMetaClass *cls)
{
  packHash[cls->package()].append(cls);
}

void writeQtScriptQtBindingsLicense(QTextStream &stream);

void maybeDeclareMetaType(QTextStream &stream, const QString &typeName,
                          QSet<QString> &registeredTypeNames);
bool hasDefaultConstructor(const AbstractMetaClass *meta_class);

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

  QHashIterator<QString, QList<const AbstractMetaClass*> > pack(packHash);
  while (pack.hasNext()) {
    pack.next();
    QList<const AbstractMetaClass*> list = pack.value();
    if (list.isEmpty())
      continue;

    QString packKey = pack.key();
    QString packName = pack.key();
    QStringList components = packName.split(".");
    if ((components.size() > 2) && (components.at(0) == "com")
      && (components.at(1) == "trolltech")) {
        // kill com.trolltech in key
        components.removeAt(0);
        components.removeAt(0);
    }
    packName.replace(".", "_");
    packKey.replace(".", "_");

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
    } else if (shortPackName == "QtOpengl") {
      shortPackName = "QtOpenGL";
    } else if (shortPackName == "QtUitools") {
      shortPackName = "QtUiTools";
    }


    {
      FileOut initFile(m_out_dir + "/generated_cpp/" + packName + "/" + packKey + "_init.cpp");
      QTextStream &s = initFile.stream;

      if (FileOut::license)
        writeQtScriptQtBindingsLicense(s);

      s << "#include <PythonQt.h>" << endl;

      foreach (const AbstractMetaClass *cls, list) {
        s << "#include \"" << ShellGenerator::wrapperClassName(cls) << ".h\"" << endl;
      }
      s << endl;

      QStringList polymorphicHandlers = writePolymorphicHandler(s, list.at(0)->package(), classes_with_polymorphic_id);
      s << endl;

      // declare individual class creation functions
      s << "void PythonQt_init_" << shortPackName << "() {" << endl;
      QStringList cppClassNames;
      foreach (const AbstractMetaClass *cls, list) {
        if (ShellGenerator::isBuiltIn(cls->name())) { continue; }

        QString shellCreator;
        if (cls->generateShellClass()) {
          shellCreator = ", PythonQtSetInstanceWrapperOnShell<" + ShellGenerator::shellClassName(cls) + ">";
        }
        if (cls->isQObject()) {
          s << "PythonQt::self()->registerClass(&" << cls->qualifiedCppName() << "::staticMetaObject, \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">" << shellCreator << ");" << endl;
        } else {
          QString baseName = cls->baseClass()?cls->baseClass()->qualifiedCppName():"";
          s << "PythonQt::self()->registerCPPClass(\""<< cls->qualifiedCppName() << "\", \"" << baseName << "\", \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">" << shellCreator << ");" << endl;
        }
        foreach(AbstractMetaClass* interface, cls->interfaces()) {
          // the interface might be our own class... (e.g. QPaintDevice)
          if (interface->qualifiedCppName() != cls->qualifiedCppName()) {
            s << "PythonQt::self()->addParentClass(\""<< cls->qualifiedCppName() << "\", \"" << interface->qualifiedCppName() << "\",PythonQtUpcastingOffset<" << cls->qualifiedCppName() <<","<<interface->qualifiedCppName()<<">());" << endl;
          }
        }
      }
      s << endl;
      foreach (QString handler, polymorphicHandlers) {
        s << "PythonQt::self()->addPolymorphicHandler(\""<< handler << "\", polymorphichandler_" << handler << ");" << endl;
      }

      s << "}";
      s << endl;
    }
  }
}

QStringList SetupGenerator::writePolymorphicHandler(QTextStream &s, const QString &package,
                                                    const AbstractMetaClassList &classes)
{
  QStringList handlers;
  foreach (AbstractMetaClass *cls, classes) {
    const ComplexTypeEntry *centry = cls->typeEntry();
    if (!centry->isPolymorphicBase())
      continue;
    bool isGraphicsItem = (cls->qualifiedCppName()=="QGraphicsItem");

    AbstractMetaClassList classList = this->classes();
    bool first = true;
    foreach (AbstractMetaClass *clazz, classList) {
      bool inherits = false;
      if (isGraphicsItem) {
        foreach(AbstractMetaClass* interfaze, clazz->interfaces()) {
          if (interfaze->qualifiedCppName()=="QGraphicsItem") {
            inherits = true;
            break;
          }
        }
      } else {
        inherits = clazz->inheritsFrom(cls);
      }
      if (clazz->package() == package && inherits) {
        if (!clazz->typeEntry()->polymorphicIdValue().isEmpty() || isGraphicsItem) {
          // On first find, open the function
          if (first) {
            first = false;

            QString handler = cls->name();
            handlers.append(handler);

            s << "static void* polymorphichandler_" << handler
              << "(const void *ptr, char **class_name)" << endl
              << "{" << endl
              << "    Q_ASSERT(ptr != 0);" << endl
              << "    " << cls->qualifiedCppName() << " *object = ("
              << cls->qualifiedCppName() << " *)ptr;" << endl;
          }

          // For each, add case label
          QString polyId = clazz->typeEntry()->polymorphicIdValue();
          if (isGraphicsItem) {
            polyId = "%1->type() == " + clazz->qualifiedCppName() + "::Type";
          }
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
