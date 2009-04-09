#include "PythonQtWrapper_QTimerEvent.h"

#include <QVariant>

QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new QTimerEvent(timerId); }

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
return theWrappedObject->timerId();
}

