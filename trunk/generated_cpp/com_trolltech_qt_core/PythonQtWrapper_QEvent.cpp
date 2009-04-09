#include "PythonQtWrapper_QEvent.h"

#include <QVariant>

QEvent* PythonQtWrapper_QEvent::new_QEvent(QEvent::Type  type)
{ 
return new QEvent(type); }

void PythonQtWrapper_QEvent::accept(QEvent* theWrappedObject)
{
theWrappedObject->accept();
}

void PythonQtWrapper_QEvent::ignore(QEvent* theWrappedObject)
{
theWrappedObject->ignore();
}

bool  PythonQtWrapper_QEvent::isAccepted(QEvent* theWrappedObject) const
{
return theWrappedObject->isAccepted();
}

int  PythonQtWrapper_QEvent::static_QEvent_registerEventType(int  hint)
{
return QEvent::registerEventType(hint);
}

void PythonQtWrapper_QEvent::setAccepted(QEvent* theWrappedObject, bool  accepted)
{
theWrappedObject->setAccepted(accepted);
}

bool  PythonQtWrapper_QEvent::spontaneous(QEvent* theWrappedObject) const
{
return theWrappedObject->spontaneous();
}

QEvent::Type  PythonQtWrapper_QEvent::type(QEvent* theWrappedObject) const
{
return theWrappedObject->type();
}

