#include "PythonQtWrapper_QReadWriteLock.h"

#include <QVariant>
#include <qreadwritelock.h>

QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock()
{ 
return new QReadWriteLock(); }

QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode)
{ 
return new QReadWriteLock(recursionMode); }

void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
theWrappedObject->lockForRead();
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
theWrappedObject->lockForWrite();
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
return theWrappedObject->tryLockForRead();
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
return theWrappedObject->tryLockForRead(timeout);
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
return theWrappedObject->tryLockForWrite();
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
return theWrappedObject->tryLockForWrite(timeout);
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
theWrappedObject->unlock();
}

