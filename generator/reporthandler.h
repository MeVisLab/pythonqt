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

#ifndef REPORTHANDLER_H
#define REPORTHANDLER_H

#include <QtCore/QString>
#include <QtCore/QSet>

class ReportHandler
{
public:
    enum DebugLevel { NoDebug, SparseDebug, MediumDebug, FullDebug };

    static void setContext(const QString &context) { m_context = context; }

    static DebugLevel debugLevel() { return m_debug_level; }
    static void setDebugLevel(DebugLevel level) { m_debug_level = level; }

    static int warningCount() { return m_warning_count; }

    static int suppressedCount() { return m_suppressed_count; }

    static void warning(const QString &str);

    static void debugSparse(const QString &str) {
        debug(SparseDebug, str);
    }
    static void debugMedium(const QString &str) {
        debug(MediumDebug, str);
    }
    static void debugFull(const QString &str) {
        debug(FullDebug, str);
    }
    static void debug(DebugLevel level, const QString &str);

private:
    static int m_warning_count;
    static int m_suppressed_count;
    static DebugLevel m_debug_level;
    static QString m_context;
    static QSet<QString> m_reported_warnings;
};

#endif // REPORTHANDLER_H
