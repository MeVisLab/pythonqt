#include "PythonQtWrapper_QAccessibleWidgetEx.h"

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

QAccessibleWidgetEx* PythonQtWrapper_QAccessibleWidgetEx::new_QAccessibleWidgetEx(QWidget*  o, QAccessible::Role  r, const QString&  name)
{ 
return new QAccessibleWidgetEx(o, r, name); }

QString  PythonQtWrapper_QAccessibleWidgetEx::actionText(QAccessibleWidgetEx* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return theWrappedObject->actionText(action, t, child);
}

int  PythonQtWrapper_QAccessibleWidgetEx::childAt(QAccessibleWidgetEx* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->childAt(x, y);
}

int  PythonQtWrapper_QAccessibleWidgetEx::childCount(QAccessibleWidgetEx* theWrappedObject) const
{
return theWrappedObject->childCount();
}

bool  PythonQtWrapper_QAccessibleWidgetEx::doAction(QAccessibleWidgetEx* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->doAction(action, child, params);
}

int  PythonQtWrapper_QAccessibleWidgetEx::indexOfChild(QAccessibleWidgetEx* theWrappedObject, const QAccessibleInterface*  child) const
{
return theWrappedObject->indexOfChild(child);
}

QVariant  PythonQtWrapper_QAccessibleWidgetEx::invokeMethodEx(QAccessibleWidgetEx* theWrappedObject, QAccessible::Method  method, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->invokeMethodEx(method, child, params);
}

int  PythonQtWrapper_QAccessibleWidgetEx::navigate(QAccessibleWidgetEx* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const
{
return theWrappedObject->navigate(rel, entry, target);
}

QRect  PythonQtWrapper_QAccessibleWidgetEx::rect(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return theWrappedObject->rect(child);
}

QAccessible::Relation  PythonQtWrapper_QAccessibleWidgetEx::relationTo(QAccessibleWidgetEx* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const
{
return theWrappedObject->relationTo(child, other, otherChild);
}

QAccessible::Role  PythonQtWrapper_QAccessibleWidgetEx::role(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return theWrappedObject->role(child);
}

QAccessible::State  PythonQtWrapper_QAccessibleWidgetEx::state(QAccessibleWidgetEx* theWrappedObject, int  child) const
{
return theWrappedObject->state(child);
}

QString  PythonQtWrapper_QAccessibleWidgetEx::text(QAccessibleWidgetEx* theWrappedObject, QAccessible::Text  t, int  child) const
{
return theWrappedObject->text(t, child);
}

