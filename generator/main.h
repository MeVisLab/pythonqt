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

#ifndef MAIN_H
#define MAIN_H

#include "pp.h"

#include <QFile>
#include <QDir>

struct Preprocess
{
    static bool preprocess(const QString &sourceFile, const QString &targetFile, const QString &commandLineIncludes = QString())
    {
        rpp::pp_environment env;
        rpp::pp preprocess(env);

        rpp::pp_null_output_iterator null_out;

        const char *ppconfig = ":/trolltech/generator/parser/rpp/pp-qt-configuration";

        QFile file(ppconfig);
        if (!file.open(QFile::ReadOnly)) {
            fprintf(stderr, "Preprocessor configuration file not found '%s'\n", ppconfig);
            return false;
        }

        QByteArray ba = file.readAll();
        file.close();
        preprocess.operator() (ba.constData(), ba.constData() + ba.size(), null_out);

        QStringList includes;
        includes << QString(".");

#if defined(Q_OS_WIN32)
        char *path_splitter = ";";
#else
        const char *path_splitter = ":";
#endif

        // Environment INCLUDE
        QString includePath = getenv("INCLUDE");
        if (!includePath.isEmpty())
            includes += includePath.split(path_splitter);        

        // Includes from the command line
        if (!commandLineIncludes.isEmpty())
            includes += commandLineIncludes.split(path_splitter);        

        // Include Qt
        QString qtdir = getenv ("QTDIR");
        if (qtdir.isEmpty()) {
#if defined(Q_OS_MAC)
            qWarning("QTDIR environment variable not set. Assuming standard binary install using frameworks.");
            QString frameworkDir = "/Library/Frameworks";
            includes << (frameworkDir + "/QtXml.framework/Headers");
            includes << (frameworkDir + "/QtNetwork.framework/Headers");
            includes << (frameworkDir + "/QtCore.framework/Headers");
            includes << (frameworkDir + "/QtGui.framework/Headers");
            includes << (frameworkDir + "/QtOpenGL.framework/Headers");
            includes << frameworkDir;
#else
            qWarning("QTDIR environment variable not set. This may cause problems with finding the necessary include files.");
#endif
        } else {
            qtdir += "/include";
            includes << (qtdir + "/QtXml");
            includes << (qtdir + "/QtNetwork");
            includes << (qtdir + "/QtCore");
            includes << (qtdir + "/QtGui");
            includes << (qtdir + "/QtOpenGL");
            includes << qtdir;
        }

        foreach (QString include, includes)
            preprocess.push_include_path(QDir::convertSeparators(include).toStdString());        

        QString currentDir = QDir::current().absolutePath();
        QFileInfo sourceInfo(sourceFile);
        QDir::setCurrent(sourceInfo.absolutePath());        

        std::string result;
        result.reserve (20 * 1024); // 20K

        result += "# 1 \"builtins\"\n";
        result += "# 1 \"";
        result += sourceFile.toStdString();
        result += "\"\n";

        preprocess.file (sourceInfo.fileName().toStdString(),
                         rpp::pp_output_iterator<std::string> (result));

        QDir::setCurrent(currentDir);

        QFile f(targetFile);
        if (!f.open(QIODevice::WriteOnly | QIODevice::Text)) {
            fprintf(stderr, "Failed to write preprocessed file: %s\n", qPrintable(targetFile));
        }
        f.write(result.c_str(), result.length());

        return true;
    }
};

#endif // MAIN_H
