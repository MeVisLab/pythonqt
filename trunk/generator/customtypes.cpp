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

#include "customtypes.h"

#include "metajava.h"

#include <QtCore/QDebug>
#include <QtCore/QTextStream>


void QModelIndexTypeEntry::generateCppJavaToQt(QTextStream &s,
                                               const AbstractMetaType *,
                                               const QString &env_name,
                                               const QString &qt_name,
                                               const QString &java_name) const
{
    s << "QModelIndex " << qt_name << " = qtjambi_to_QModelIndex(" << env_name << ", "
      << java_name << ")";
}


void QModelIndexTypeEntry::generateCppQtToJava(QTextStream &s,
                                               const AbstractMetaType *,
                                               const QString &env_name,
                                               const QString &qt_name,
                                               const QString &java_name) const
{
    s << "jobject " << java_name << " = qtjambi_from_QModelIndex(" << env_name << ", "
      << qt_name << ")";
}
