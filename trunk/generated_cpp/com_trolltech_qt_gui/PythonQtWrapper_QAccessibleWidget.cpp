#include "PythonQtWrapper_QAccessibleWidget.h"

#include <QVariant>
#include <qaccessible.h>
#include <qaccessiblewidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qwidget.h>

QAccessibleWidget* PythonQtWrapper_QAccessibleWidget::new_QAccessibleWidget(QWidget*  o, QAccessible::Role  r, const QString&  name)
{ 
return new QAccessibleWidget(o, r, name); }

QString  PythonQtWrapper_QAccessibleWidget::actionText(QAccessibleWidget* theWrappedObject, int  action, QAccessible::Text  t, int  child) const
{
return theWrappedObject->actionText(action, t, child);
}

int  PythonQtWrapper_QAccessibleWidget::childAt(QAccessibleWidget* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->childAt(x, y);
}

int  PythonQtWrapper_QAccessibleWidget::childCount(QAccessibleWidget* theWrappedObject) const
{
return theWrappedObject->childCount();
}

bool  PythonQtWrapper_QAccessibleWidget::doAction(QAccessibleWidget* theWrappedObject, int  action, int  child, const QList<QVariant >&  params)
{
return theWrappedObject->doAction(action, child, params);
}

int  PythonQtWrapper_QAccessibleWidget::indexOfChild(QAccessibleWidget* theWrappedObject, const QAccessibleInterface*  child) const
{
return theWrappedObject->indexOfChild(child);
}

int  PythonQtWrapper_QAccessibleWidget::navigate(QAccessibleWidget* theWrappedObject, QAccessible::RelationFlag  rel, int  entry, QAccessibleInterface**  target) const
{
return theWrappedObject->navigate(rel, entry, target);
}

QRect  PythonQtWrapper_QAccessibleWidget::rect(QAccessibleWidget* theWrappedObject, int  child) const
{
return theWrappedObject->rect(child);
}

QAccessible::Relation  PythonQtWrapper_QAccessibleWidget::relationTo(QAccessibleWidget* theWrappedObject, int  child, const QAccessibleInterface*  other, int  otherChild) const
{
return theWrappedObject->relationTo(child, other, otherChild);
}

QAccessible::Role  PythonQtWrapper_QAccessibleWidget::role(QAccessibleWidget* theWrappedObject, int  child) const
{
return theWrappedObject->role(child);
}

QAccessible::State  PythonQtWrapper_QAccessibleWidget::state(QAccessibleWidget* theWrappedObject, int  child) const
{
return theWrappedObject->state(child);
}

QString  PythonQtWrapper_QAccessibleWidget::text(QAccessibleWidget* theWrappedObject, QAccessible::Text  t, int  child) const
{
return theWrappedObject->text(t, child);
}

int  PythonQtWrapper_QAccessibleWidget::userActionCount(QAccessibleWidget* theWrappedObject, int  child) const
{
return theWrappedObject->userActionCount(child);
}

