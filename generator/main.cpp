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

#include "main.h"
#include "asttoxml.h"
#include "reporthandler.h"
#include "typesystem.h"
#include "generatorset.h"
#include "fileout.h"

#include <QDir>

void displayHelp(GeneratorSet *generatorSet);

#include <QDebug>

/* List of core modules to add to the build in order. */
static const char coreModuleListDefault[]{"Xml,Network,Core,Gui,OpenGL"};

int main(int argc, char *argv[])
{
    ReportHandler::setContext("Parameters");
    QScopedPointer<GeneratorSet> gs(GeneratorSet::getInstance());

    QString default_file = ":/trolltech/generator/qtscript_masterinclude.h";
    QString default_system = ":/trolltech/generator/build_all.txt";

    QString fileName;
    QString typesystemFileName;
    const QString pp_file = "qtheaders.preprocessed.tmp";
    QStringList rebuild_classes;

    QMap<QString, QString> args;

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

    ReportHandler::setContext("Files");

    /* This used to be in main.h::preprocess however this makes it difficult to
     * update the command line argument handling (because, unusually, it was
     * split into two different places, one a header file!).  This is the
     * code form main.h:
     */
    const bool minimal(args.contains("minimal"));
    QStringList includes;
    if (!minimal)
        includes << QString(".");

    // Environment INCLUDE
    const QString includePath(getenv("INCLUDE"));
    if (!includePath.isEmpty())
        includes += includePath.split(QDir::listSeparator());

    // Includes from the command line
    const QString commandLineIncludes(args.value("include-paths"));
    if (!commandLineIncludes.isEmpty())
        includes += commandLineIncludes.split(QDir::listSeparator());

    /* Allow coreModules to be specified on the command line (e.g. to add or
     * remove modules for an application specific build).
     */
    QString moduleList(args.value("core-modules"));
    if (moduleList.isEmpty())
        moduleList = coreModuleListDefault;
    const QStringList coreModules(moduleList.split(","));

    // Include Qt
    QString qtHeaders(args.value("qt-headers"));

    if (qtHeaders.isEmpty()) {
        /* This is the legacy QTDIR approach.  It requires Qt to be installed
         * in a single directory which contains a subdirectory /include with
         * all the expected header files (in module-specific sub-directories).
         * There is a work-round for MacOS (recent versions) which understands
         * the MacOS file system layout.
         *
         * TODO: remove this, require the directories to be specified on the
         * command line.
         */
        QString qtdir = getenv ("QTDIR");

        if (qtdir.isEmpty()) {
#if defined(Q_OS_MAC)
            qWarning(
"QTDIR environment variable not set. Assuming standard binary install using\n"
"frameworks.");
            foreach (const QString &mod, coreModules)
                includes << ("/Library/Frameworks/Qt" + mod + ".framework/Headers");
            includes << "/Library/Frameworks"; // this seems wrong
#else
            qWarning(
"QTDIR environment variable not set. This may cause problems with finding the\n"
"necessary include files.  You can find the correct directory with the\n"
"command:\n\n"
"  qmake -query QT_INSTALL_HEADERS\n\n"
"This directory can be supplied using the command line argument --qt-headers\n"
            );
#endif
        } else {
            /* Legacy handling: Qt install into a single directory on its own,
             * basically /opt/qt or something like that:
             */
            qtHeaders = qtdir + "/include";
        }
    }

    if (!qtHeaders.isEmpty()) {
        /* Look for the 'standard' directories, favouring the first found
         * in the qt-headers list.
         *
         * NOTE: use of a list here is intended for the project build workflows
         * which apparently have to assemble the headers from difference
         * installation directories.  This could be avoided by using
         * --include-paths instead!
         *
         */
        QStringList dirList;
        QStringList requiredModules(coreModules);

        foreach (const QString &dir, qtHeaders.split(QDir::listSeparator()))
            if (QDir(dir).exists())  {
                QStringList remaining(requiredModules);

                foreach (const QString &mod, requiredModules) {
                    const QString modpath(dir + "/Qt" + mod);
                    if (QDir(modpath).exists()) {
                        includes << modpath;
                        remaining.removeAll(mod);
                    }
                }

                requiredModules = remaining;
                dirList << dir;
            } else
                qWarning((dir + " Qt header directory not found")
                                            .toLocal8Bit().constData());

        /* Add the top level directories at the end; this simulates the legacy
         * behaviour.
         */
        if (!minimal)
            includes += dirList;

        /* Warn if standard directories are not found: */
        if (!requiredModules.isEmpty()) {
            QString sep("");
            QString errMsg("WARNING: missing core Qt modules:");

            foreach (const QString &mod, requiredModules) {
                errMsg += sep + " Qt" + mod;
                sep = ",";
            }

            if (args.contains("core-error"))
                qFatal(errMsg.toLocal8Bit().constData());
            else
                qWarning(errMsg.toLocal8Bit().constData());
        }
    } else if (includes.isEmpty()) {
        /* This is never true unless --minimal is given because "." is always
         * added to includes first.
         */
        qWarning("No directories to scan: use --include-paths or --qt-headers");
        displayHelp(&*gs);
    }

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Scanning Qt headers from (in this order):" << std::endl;
    foreach (const QString &dir, includes) {
        std::cout << "  " << dir.toUtf8().constData();
        if (!QDir(dir).exists())
            std::cout << " [DIRECTORY DOES NOT EXIST]";
        std::cout << std::endl;
    }
    std::cout << "-------------------------------------------------------------" << std::endl;

    printf("Please wait while source files are being generated...\n");

    printf("Parsing typesystem file [%s]\n", qPrintable(typesystemFileName));
    fflush(stdout);
    ReportHandler::setContext(QString("Parse[%1]").arg(typesystemFileName));

    if (!TypeDatabase::instance()->parseFile(typesystemFileName))
        qFatal("Cannot parse file: '%s'", qPrintable(typesystemFileName));

    printf("PreProcessing - Generate [%s] using [%s] and include-paths [%s]\n",
            qPrintable(pp_file), qPrintable(fileName),
            qPrintable(args.value("include-paths")));
    fflush(stdout);
    ReportHandler::setContext(QString("Preprocess[%1]->[%2]")
            .arg(fileName).arg(pp_file));

    if (!Preprocess::preprocess(fileName, pp_file, includes)) {
        fprintf(stderr, "Preprocessor failed on file: '%s'\n",
                qPrintable(fileName));
        return 1;
    }

    if (args.contains("ast-to-xml")) {
        printf("Running ast-to-xml on file [%s] using pp_file [%s] and include-paths [%s]+[%s]\n",
                qPrintable(fileName), qPrintable(pp_file),
                qPrintable(includePath), qPrintable(commandLineIncludes));
        fflush(stdout);
        ReportHandler::setContext(QString("ast-to-xml[%1]([%2]+[%3])")
                .arg(pp_file).arg(includePath).arg(commandLineIncludes));
        astToXML(pp_file);
        return 0;
    }

    printf("Building model using [%s]\n", qPrintable(pp_file));
    fflush(stdout);
    ReportHandler::setContext(QString("Model[%1]").arg(pp_file));
    gs->buildModel(pp_file);
    if (args.contains("dump-object-tree")) {
        ReportHandler::setContext("dump-object-tree");
        gs->dumpObjectTree();
        return 0;
    }

    printf("Generate\n");
    fflush(stdout);
    ReportHandler::setContext("Generate");
    printf("%s\n", qPrintable(gs->generate()));

    ReportHandler::setContext("Finished");
    printf("Done, %d warnings (%d known issues)\n",
            ReportHandler::warningCount(),
            ReportHandler::suppressedCount());
    fflush(stdout);
}


void displayHelp(GeneratorSet* generatorSet) {
    const QByteArray sep(QString(QDir::listSeparator()).toLocal8Bit());

    printf("Usage:\n  generator [options] header-file typesystem-file\n\n");
    printf("Available options:\n\n");
    printf("General:\n");
    printf("  --debug-level=[sparse|medium|full]\n"
           "  --dump-object-tree\n"
           "  --help, -h or -?\n"
           "  --no-suppress-warnings\n"
           "  --output-directory=[dir]\n"
           "  --include-paths=<path>[%s<path>%s...]\n"
           "  --qt-headers=<path>[%s<path>%s...]\n"
           "  --core-modules=module,...\n"
           "  --core-error\n"
           "  --minimal\n"
           "  --print-stdout\n\n",
           sep.constData(), sep.constData(), sep.constData(), sep.constData());

    printf("%s\n", qPrintable( generatorSet->usage()));

    printf("Notes:\n"
"  The location of the Qt header files to be used must be specified either by\n"
"  a directory in --qt-headers or by the location of the Qt installation in\n"
"  the environment variable QTDIR.  The latter is equivalent to passing\n"
"  $QT_DIR/include to --qt-headers.\n\n"
"  --core-modules is a comma-separated list of Qt modules names without the\n"
"  leading 'Qt'.  Do not put spaces in the list.  The headers directory is\n"
"  used to locate these modules and they are added, in turn, to the end of\n"
"  the list of directories to scan.  The header directory itself is added at\n"
"  the end unless --minimal is given. By default:\n\n"
"    --core-modules=\"%s\"\n\n"
"  If core modules fail to be found a warning is issued unless --core-error\n"
"  is given in which case the generator exits with an error.\n\n"
"  Additional directories to be scanned are passed in the environment\n"
"  variable INCLUDE and the --include-paths argument.  Both are '%s'\n"
"  separated lists of directories which are scanned before the core module\n"
"  directories in the order given.\n\n"
"  The current working directory is also scanned (first) unless --minimal is\n"
"  given.\n",
        coreModuleListDefault, sep.constData());

    exit(1);
}
