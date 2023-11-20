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

#include <cstdio>

#include "main.h"
#include "asttoxml.h"
#include "reporthandler.h"
#include "typesystem.h"
#include "generatorset.h"
#include "fileout.h"
#include "control.h"

#include <QDir>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include <QRegularExpression>

void displayHelp(GeneratorSet *generatorSet);

static unsigned int getQtVersion(const QString& commandLineIncludes)
{
  QRegularExpression re("#define\\s+QTCORE_VERSION\\s+0x([0-9a-f]+)", QRegularExpression::CaseInsensitiveOption);
  for (const QString& includeDir : Preprocess::getIncludeDirectories(commandLineIncludes)) {
    QFileInfo fi(QDir(includeDir), "qtcoreversion.h");
    if (fi.exists()) {
      QString filePath = fi.absoluteFilePath();
      QFile f(filePath);
      if (f.open(QIODevice::ReadOnly)) {
        QTextStream ts(&f);
        QString content = ts.readAll();
        f.close();
        auto match = re.match(content);
        if (match.isValid()) {
          unsigned int result;
          bool ok;
          result = match.captured(1).toUInt(&ok, 16);
          if (!ok) {
            printf("Could not parse Qt version in file [%s] (looked for #define QTCORE_VERSION)\n",
              qPrintable(filePath));
          }
          return result;
        }
      }
    }
  }
  printf("Error: Could not find Qt version (looked for qtcoreversion.h in %s)\n",
    qPrintable(commandLineIncludes));
  return 0;
}


#include <QDebug>
int main(int argc, char *argv[])
{
    ReportHandler::setContext("Arguments");

    QScopedPointer<GeneratorSet> gs(GeneratorSet::getInstance());

    QString default_file = ":/trolltech/generator/qtscript_masterinclude.h";
    QString default_system = ":/trolltech/generator/build_all.txt";

    QString fileName;
    QString typesystemFileName;
    QString pp_file = ".preprocessed.tmp";
    QStringList rebuild_classes;

    QMap<QString, QString> args;
    unsigned int qtVersion{};

    int argNum = 0;
    for (int i=1; i<argc; ++i) {
        QString arg(argv[i]);
        arg = arg.trimmed();
        if( arg.startsWith("--") ) {
            int split = arg.indexOf("=");
            if( split > 0 )
                args[arg.mid(2).left(split-2)] = arg.mid(split + 1).trimmed();
            else
                args[arg.mid(2)] = QString();
        } else if( arg.startsWith("-")) {
            args[arg.mid(1)] = QString();
        } else {
            argNum++;
            args[QString("arg-%1").arg(argNum)] = arg;
        }
    }

    if (args.contains("no-suppress-warnings")) {
        TypeDatabase *db = TypeDatabase::instance();
        db->setSuppressWarnings(false);
    }

    if (args.contains("debug-level")) {
        QString level = args.value("debug-level");
        if (level == "sparse")
            ReportHandler::setDebugLevel(ReportHandler::SparseDebug);
        else if (level == "medium")
            ReportHandler::setDebugLevel(ReportHandler::MediumDebug);
        else if (level == "full")
            ReportHandler::setDebugLevel(ReportHandler::FullDebug);
    }

    if (args.contains("print-parser-errors")) {
      Control::setPrintErrors(true);
    }

    if (args.contains("dummy")) {
        FileOut::dummy = true;
    }

    if (args.contains("diff")) {
        FileOut::diff = true;
    }

    if (args.contains("license"))
        FileOut::license = true;

    if (args.contains("rebuild-only")) {
        QStringList classes = args.value("rebuild-only").split(",", Qt::SkipEmptyParts);
        TypeDatabase::instance()->setRebuildClasses(classes);
    }

    if (args.contains("qt-version")) {
        bool ok;
        qtVersion = TypeSystem::qtVersionFromString(args.value("qt-version"), ok);
        if (!ok || qtVersion < 0x050000) {
            printf("Invalid Qt version specified, will look into header files for version...\n");
            qtVersion = 0;
        }
    }

    fileName = args.value("arg-1");

    typesystemFileName = args.value("arg-2");
    if (args.contains("arg-3"))
        displayHelp(&*gs);

    if (fileName.isEmpty())
        fileName = default_file;

    if (typesystemFileName.isEmpty())
        typesystemFileName = default_system;

    if (fileName.isEmpty() || typesystemFileName.isEmpty() )
        displayHelp(&*gs);

    if (!gs->readParameters(args))
        displayHelp(&*gs);

    printf("Please wait while source files are being generated...\n");

    if (!qtVersion) {
        printf("Trying to determine Qt version...\n");
        qtVersion = getQtVersion(args.value("include-paths"));
        if (!qtVersion)
        {
            fprintf(stderr, "Aborting\n"); // the error message was printed by getQtVersion
            return 1;
        }
        printf("Determined Qt version is %d.%d.%d\n", qtVersion >> 16, (qtVersion >> 8) & 0xFF, qtVersion & 0xFF);
    }

    printf("Parsing typesystem file [%s]\n", qPrintable(typesystemFileName));
    fflush(stdout);
    ReportHandler::setContext("Typesystem");
    if (!TypeDatabase::instance()->parseFile(typesystemFileName, qtVersion))
        qFatal("Cannot parse file: '%s'", qPrintable(typesystemFileName));

    printf("PreProcessing - Generate [%s] using [%s] and include-paths [%s]\n",
      qPrintable(pp_file), qPrintable(fileName), qPrintable(args.value("include-paths")));
    ReportHandler::setContext("Preprocess");
    if (!Preprocess::preprocess(fileName, pp_file, args.value("include-paths"))) {
        fprintf(stderr, "Preprocessor failed on file: '%s'\n", qPrintable(fileName));
        return 1;
    }

    if (args.contains("ast-to-xml")) {
      printf("Running ast-to-xml on file [%s] using pp_file [%s] and include-paths [%s]\n",
        qPrintable(fileName), qPrintable(pp_file), qPrintable(args.value("include-paths")));
      ReportHandler::setContext(QString("AST-to-XML"));
      astToXML(pp_file);
      return 0;
    }

    printf("Building model using [%s]\n", qPrintable(pp_file));
    ReportHandler::setContext("Build");
    gs->buildModel(pp_file);
    if (args.contains("dump-object-tree")) {
        gs->dumpObjectTree();
        return 0;
    }
    ReportHandler::setContext("Generate");
    printf("%s\n", qPrintable(gs->generate()));

    printf("Done, %d warnings (%d known issues)\n", ReportHandler::warningCount(),
           ReportHandler::suppressedCount());
}


void displayHelp(GeneratorSet* generatorSet) {
#if defined(Q_OS_WIN32)
    char path_splitter = ';';
#else
    char path_splitter = ':';
#endif
    printf("Usage:\n  generator [options] header-file typesystem-file\n\n");
    printf("Available options:\n\n");
    printf("General:\n");
    printf("  --debug-level=[sparse|medium|full]        \n"
           "  --print-parser-errors                     \n"
           "  --dump-object-tree                        \n"
           "  --help, -h or -?                          \n"
           "  --no-suppress-warnings                    \n"
           "  --output-directory=[dir]                  \n"
           "  --include-paths=<path>[%c<path>%c...]     \n"
           "  --qt-version=x.y.z                        \n"
           "  --print-stdout                            \n",
           path_splitter, path_splitter);

    printf("%s", qPrintable( generatorSet->usage()));
    exit(0);
}
