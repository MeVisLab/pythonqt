#include "PythonQtWrapper_QAccessibleObject.h"

#include <QVariant>
#include <qaccessible.h>
#include <qaccessibleobject.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

QString  PythonQtWrapper_QAccessibleObject::actionText(QAccessibleObject* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return theWrappedObject->actionText(action, t, child);
}

bool  PythonQtWrapper_QAccessibleObject::doAction(QAccessibleObject* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->doAction(action, child, params);
}

bool  PythonQtWrapper_QAccessibleObject::isValid(QAccessibleObject* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QObject*  PythonQtWrapper_QAccessibleObject::object(QAccessibleObject* theWrappedObject) const
{
return theWrappedObject->object();
}

QRect  PythonQtWrapper_QAccessibleObject::rect(QAccessibleObject* theWrappedObject, int  child) const
{
return theWrappedObject->rect(child);
}

void PythonQtWrapper_QAccessibleObject::setText(QAccessibleObject* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text)
{
theWrappedObject->setText(t, child, text);
}

int  PythonQtWrapper_QAccessibleObject::userActionCount(QAccessibleObject* theWrappedObject, int  child) const
{
return theWrappedObject->userActionCount(child);
}

