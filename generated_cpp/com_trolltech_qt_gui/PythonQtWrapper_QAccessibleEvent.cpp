#include "PythonQtWrapper_QAccessibleEvent.h"

#include <QVariant>

QAccessibleEvent* PythonQtWrapper_QAccessibleEvent::new_QAccessibleEvent(QEvent::Type  type, int  child)
{ 
return new QAccessibleEvent(type, child); }

int  PythonQtWrapper_QAccessibleEvent::child(QAccessibleEvent* theWrappedObject) const
{
return theWrappedObject->child();
}

void PythonQtWrapper_QAccessibleEvent::setValue(QAccessibleEvent* theWrappedObject, const QString&  aText)
{
theWrappedObject->setValue(aText);
}

QString  PythonQtWrapper_QAccessibleEvent::value(QAccessibleEvent* theWrappedObject) const
{
return theWrappedObject->value();
}

