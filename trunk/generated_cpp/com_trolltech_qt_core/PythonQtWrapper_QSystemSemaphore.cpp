#include "PythonQtWrapper_QSystemSemaphore.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qsystemsemaphore.h>

QSystemSemaphore* PythonQtWrapper_QSystemSemaphore::new_QSystemSemaphore(const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{ 
return new QSystemSemaphore(key, initialValue, mode); }

bool  PythonQtWrapper_QSystemSemaphore::release(QSystemSemaphore* theWrappedObject, int  n)
{
return  theWrappedObject->release(n);
}

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
return  theWrappedObject->acquire();
}

void PythonQtWrapper_QSystemSemaphore::setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{
 theWrappedObject->setKey(key, initialValue, mode);
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
return  theWrappedObject->key();
}

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
return  theWrappedObject->error();
}

