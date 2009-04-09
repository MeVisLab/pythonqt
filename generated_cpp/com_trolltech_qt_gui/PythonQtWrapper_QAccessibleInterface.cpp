#include "PythonQtWrapper_QAccessibleInterface.h"

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>

QString  PythonQtWrapper_QAccessibleInterface::actionText(QAccessibleInterface* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return theWrappedObject->actionText(action, t, child);
}

int  PythonQtWrapper_QAccessibleInterface::childAt(QAccessibleInterface* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->childAt(x, y);
}

int  PythonQtWrapper_QAccessibleInterface::childCount(QAccessibleInterface* theWrappedObject) const
{
return theWrappedObject->childCount();
}

bool  PythonQtWrapper_QAccessibleInterface::doAction(QAccessibleInterface* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->doAction(action, child, params);
}

int  PythonQtWrapper_QAccessibleInterface::indexOfChild(QAccessibleInterface* theWrappedObject, const QAccessibleInterface*  arg__1) const
{
return theWrappedObject->indexOfChild(arg__1);
}

QVariant  PythonQtWrapper_QAccessibleInterface::invokeMethod(QAccessibleInterface* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->invokeMethod(method, child, params);
}

bool  PythonQtWrapper_QAccessibleInterface::isValid(QAccessibleInterface* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QAccessibleInterface::navigate(QAccessibleInterface* theWrappedObject, QAccessible::RelationFlag  relation, int  index, QAccessibleInterface**  iface) const
{
return theWrappedObject->navigate(relation, index, iface);
}

QObject*  PythonQtWrapper_QAccessibleInterface::object(QAccessibleInterface* theWrappedObject) const
{
return theWrappedObject->object();
}

QRect  PythonQtWrapper_QAccessibleInterface::rect(QAccessibleInterface* theWrappedObject, int  child) const
{
return theWrappedObject->rect(child);
}

QAccessible::Relation  PythonQtWrapper_QAccessibleInterface::relationTo(QAccessibleInterface* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const
{
return theWrappedObject->relationTo(child, other, otherChild);
}

QAccessible::Role  PythonQtWrapper_QAccessibleInterface::role(QAccessibleInterface* theWrappedObject, int  child) const
{
return theWrappedObject->role(child);
}

void PythonQtWrapper_QAccessibleInterface::setText(QAccessibleInterface* theWrappedObject, QAccessible::Text  t, int  child, const QString&  text)
{
theWrappedObject->setText(t, child, text);
}

QAccessible::State  PythonQtWrapper_QAccessibleInterface::state(QAccessibleInterface* theWrappedObject, int  child) const
{
return theWrappedObject->state(child);
}

QSet<QAccessible::Method >  PythonQtWrapper_QAccessibleInterface::supportedMethods(QAccessibleInterface* theWrappedObject)
{
return theWrappedObject->supportedMethods();
}

QString  PythonQtWrapper_QAccessibleInterface::text(QAccessibleInterface* theWrappedObject, QAccessible::Text  t, int  child) const
{
return theWrappedObject->text(t, child);
}

int  PythonQtWrapper_QAccessibleInterface::userActionCount(QAccessibleInterface* theWrappedObject, int  child) const
{
return theWrappedObject->userActionCount(child);
}

