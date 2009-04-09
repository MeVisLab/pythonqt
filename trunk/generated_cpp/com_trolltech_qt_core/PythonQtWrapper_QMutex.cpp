#include "PythonQtWrapper_QMutex.h"

#include <QVariant>
#include <qmutex.h>

QMutex* PythonQtWrapper_QMutex::new_QMutex(QMutex::RecursionMode  mode)
{ 
return new QMutex(mode); }

void PythonQtWrapper_QMutex::lock(QMutex* theWrappedObject)
{
theWrappedObject->lock();
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject)
{
return theWrappedObject->tryLock();
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, int  timeout)
{
return theWrappedObject->tryLock(timeout);
}

void PythonQtWrapper_QMutex::unlock(QMutex* theWrappedObject)
{
theWrappedObject->unlock();
}

