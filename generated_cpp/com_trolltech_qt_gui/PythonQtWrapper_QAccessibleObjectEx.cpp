#include "PythonQtWrapper_QAccessibleObjectEx.h"

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

QString  PythonQtWrapper_QAccessibleObjectEx::actionText(QAccessibleObjectEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return theWrappedObject->actionText(action, t, child);
}

bool  PythonQtWrapper_QAccessibleObjectEx::doAction(QAccessibleObjectEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->doAction(action, child, params);
}

bool  PythonQtWrapper_QAccessibleObjectEx::isValid(QAccessibleObjectEx* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QObject*  PythonQtWrapper_QAccessibleObjectEx::object(QAccessibleObjectEx* theWrappedObject) const
{
return theWrappedObject->object();
}

QRect  PythonQtWrapper_QAccessibleObjectEx::rect(QAccessibleObjectEx* theWrappedObject, int  child) const
{
return theWrappedObject->rect(child);
}

void PythonQtWrapper_QAccessibleObjectEx::setText(QAccessibleObjectEx* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text)
{
theWrappedObject->setText(t, child, text);
}

int  PythonQtWrapper_QAccessibleObjectEx::userActionCount(QAccessibleObjectEx* theWrappedObject, int  child) const
{
return theWrappedObject->userActionCount(child);
}

