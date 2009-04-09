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

#include "reporthandler.h"
#include "typesystem.h"

int ReportHandler::m_warning_count = 0;
int ReportHandler::m_suppressed_count = 0;
QString ReportHandler::m_context;
ReportHandler::DebugLevel ReportHandler::m_debug_level = NoDebug;
QSet<QString> ReportHandler::m_reported_warnings;


void ReportHandler::warning(const QString &text)
{
    QString warningText = QString("WARNING(%1) :: %2").arg(m_context).arg(text);

    TypeDatabase *db = TypeDatabase::instance();
    if (db && db->isSuppressedWarning(warningText)) {
        ++m_suppressed_count;
    } else if (!m_reported_warnings.contains(warningText)) {
        qDebug(qPrintable(warningText));
        ++m_warning_count;

        m_reported_warnings.insert(warningText);
    }
}

void ReportHandler::debug(DebugLevel level, const QString &text)
{
    if (m_debug_level == NoDebug)
        return;

    if (level <= m_debug_level)
        qDebug(" - DEBUG(%s) :: %s", qPrintable(m_context), qPrintable(text));
}
