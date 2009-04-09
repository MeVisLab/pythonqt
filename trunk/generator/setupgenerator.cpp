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
#include "classgenerator.h"
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
    QHashIterator<QString, QList<const AbstractMetaClass*> > pack(packHash);
    while (pack.hasNext()) {
        pack.next();
        QList<const AbstractMetaClass*> list = pack.value();
        if (list.isEmpty())
            continue;

        QString packName = pack.key();
        QStringList components = packName.split(".");
        if ((components.size() > 2) && (components.at(0) == "com")
            && (components.at(1) == "trolltech")) {
            // kill com.trolltech in key
            components.removeAt(0);
            components.removeAt(0);
        }
        packName.replace(".", "_");
      
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
        } 
        
      
        {
            FileOut initFile(m_out_dir + "/generated_cpp/" + packName + "/init.cpp");
            QTextStream &s = initFile.stream;

            if (FileOut::license)
                writeQtScriptQtBindingsLicense(s);
          
            s << "#include <PythonQt.h>" << endl;

          foreach (const AbstractMetaClass *cls, list) {
            s << "#include \"PythonQtWrapper_" << cls->name() << ".h\"" << endl;
          }
          s << endl;
          
            // declare individual class creation functions
            s << "void PythonQt_init_" << shortPackName << "() {" << endl;
          QStringList cppClassNames; 
          foreach (const AbstractMetaClass *cls, list) {
            if (ClassGenerator::isBuiltIn(cls->name())) { continue; }

            if (cls->isQObject()) {
              s << "PythonQt::self()->registerClass(&" << cls->qualifiedCppName() << "::staticMetaObject, \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">);" << endl;
            } else {
              QString baseName = cls->baseClass()?cls->baseClass()->qualifiedCppName():"";
              s << "PythonQt::self()->registerCPPClass(\""<< cls->qualifiedCppName() << "\", \"" << baseName << "\", \"" << shortPackName <<"\", PythonQtCreateObject<PythonQtWrapper_" << cls->name() << ">);" << endl;
            }
          }
          s << endl;
          
            s << "}";
            s << endl;
        }
    }
}
