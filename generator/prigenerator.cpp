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

#include "prigenerator.h"
#include "reporthandler.h"
#include "fileout.h"

void PriGenerator::addHeader(const QString &folder, const QString &header)
{
    priHash[folder].headers << header;
}

void PriGenerator::addSource(const QString &folder, const QString &source)
{
    priHash[folder].sources << source;
}

void PriGenerator::generate()
{
    QHashIterator<QString, Pri> pri(priHash);
    while (pri.hasNext()) {
        pri.next();
        QStringList list = pri.value().headers;
        if (list.isEmpty())
            continue;

        FileOut file(m_out_dir + "/generated_cpp/" + pri.key());
        file.stream << "HEADERS += \\\n";
        qSort(list.begin(), list.end());
        foreach (const QString &entry, list) {
            file.stream << "           $$PWD/" << entry << " \\\n";
        }

        file.stream << "\n";
        file.stream << "SOURCES += \\\n";
        list = pri.value().sources;
        qSort(list.begin(), list.end());
        foreach (const QString &entry, list) {
            file.stream << "           $$PWD/" << entry << " \\\n";
        }
        QString initName = pri.key();
        initName = initName.mid(initName.indexOf('/')+1);
        initName = initName.left(initName.length()-4);
        file.stream << "           $$PWD/" + initName + "_init.cpp\n";

        if (file.done())
            ++m_num_generated_written;
        ++m_num_generated;
    }
}
