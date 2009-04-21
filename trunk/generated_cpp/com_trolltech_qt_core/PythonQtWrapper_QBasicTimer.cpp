#include "PythonQtWrapper_QBasicTimer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qobject.h>

QBasicTimer* PythonQtWrapper_QBasicTimer::new_QBasicTimer()
{ 
return new QBasicTimer(); }

void PythonQtWrapper_QBasicTimer::stop(QBasicTimer* theWrappedObject)
{
 (*theWrappedObject).stop();
}

bool  PythonQtWrapper_QBasicTimer::isActive(QBasicTimer* theWrappedObject) const
{
return  (*theWrappedObject).isActive();
}

int  PythonQtWrapper_QBasicTimer::timerId(QBasicTimer* theWrappedObject) const
{
return  (*theWrappedObject).timerId();
}

void PythonQtWrapper_QBasicTimer::start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj)
{
 (*theWrappedObject).start(msec, obj);
}

