#include "PythonQtWrapper_QSemaphore.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsemaphore.h>

QSemaphore* PythonQtWrapper_QSemaphore::new_QSemaphore(int  n)
{ 
return new QSemaphore(n); }

int  PythonQtWrapper_QSemaphore::available(QSemaphore* theWrappedObject) const
{
return  theWrappedObject->available();
}

void PythonQtWrapper_QSemaphore::acquire(QSemaphore* theWrappedObject, int  n)
{
 theWrappedObject->acquire(n);
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n)
{
return  theWrappedObject->tryAcquire(n);
}

bool  PythonQtWrapper_QSemaphore::tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout)
{
return  theWrappedObject->tryAcquire(n, timeout);
}

void PythonQtWrapper_QSemaphore::release(QSemaphore* theWrappedObject, int  n)
{
 theWrappedObject->release(n);
}

