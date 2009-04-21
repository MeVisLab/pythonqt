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

#include "generatorsetqtscript.h"
#include "reporthandler.h"
#include "classgenerator.h"
#include "shellheadergenerator.h"
#include "shellimplgenerator.h"
#include "docgenerator.h"

GeneratorSet *GeneratorSet::getInstance() {
    return new GeneratorSetQtScript();
}

GeneratorSetQtScript::GeneratorSetQtScript() 
{}

QString GeneratorSetQtScript::usage() {
    QString usage =
        "QtScript:\n" 
        "  --nothing-to-report-yet                   \n";

    return usage;
}

bool GeneratorSetQtScript::readParameters(const QMap<QString, QString> args) {
    return GeneratorSet::readParameters(args);
}

void GeneratorSetQtScript::buildModel(const QString pp_file) {
    // Building the code inforamation...
    ReportHandler::setContext("MetaJavaBuilder");
    builder.setFileName(pp_file);
    builder.build();
}

void GeneratorSetQtScript::dumpObjectTree() {
 
}

QString GeneratorSetQtScript::generate() {
    AbstractMetaClassList classes = builder.classesTopologicalSorted();
    QSet<QString> declaredTypeNames = builder.qtMetaTypeDeclaredTypeNames();

    PriGenerator priGenerator;
    priGenerator.setOutputDirectory(outDir);

    SetupGenerator setupGenerator;
    setupGenerator.setOutputDirectory(outDir);
    setupGenerator.setQtMetaTypeDeclaredTypeNames(declaredTypeNames);

    /*
    ClassGenerator classGenerator(&priGenerator, &setupGenerator);
    classGenerator.setOutputDirectory(outDir);
    classGenerator.setClasses(classes);
    classGenerator.setQtMetaTypeDeclaredTypeNames(declaredTypeNames);
    classGenerator.generate();
*/
    ShellImplGenerator shellImplGenerator(&priGenerator);
    shellImplGenerator.setOutputDirectory(outDir);
    shellImplGenerator.setClasses(classes);
    shellImplGenerator.setQtMetaTypeDeclaredTypeNames(declaredTypeNames);
    shellImplGenerator.generate();

    ShellHeaderGenerator shellHeaderGenerator(&priGenerator, &setupGenerator);
    shellHeaderGenerator.setOutputDirectory(outDir);
    shellHeaderGenerator.setClasses(classes);
    shellHeaderGenerator.generate();

    //DocGenerator docGenerator;
    //docGenerator.setOutputDirectory(outDir);
    //docGenerator.setClasses(classes);
    //docGenerator.generate();

    priGenerator.generate();
    setupGenerator.generate();

    return QString("Classes in typesystem: %1\n"
                   "Generated:\n"
                   "  - header....: %4 (%5)\n"
                   "  - impl......: %6 (%7)\n"
                   "  - modules...: %8 (%9)\n"
                   "  - pri.......: %10 (%11)\n"
                   )
        .arg(builder.classes().size())

        .arg(shellHeaderGenerator.numGenerated())
        .arg(shellHeaderGenerator.numGeneratedAndWritten())

        .arg(shellImplGenerator.numGenerated())
        .arg(shellImplGenerator.numGeneratedAndWritten())

        .arg(setupGenerator.numGenerated())
        .arg(setupGenerator.numGeneratedAndWritten())

        .arg(priGenerator.numGenerated())
        .arg(priGenerator.numGeneratedAndWritten());
}
