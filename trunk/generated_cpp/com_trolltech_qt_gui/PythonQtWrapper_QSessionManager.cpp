#include "PythonQtWrapper_QSessionManager.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

QStringList  PythonQtWrapper_QSessionManager::discardCommand(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->discardCommand();
}

QString  PythonQtWrapper_QSessionManager::sessionKey(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->sessionKey();
}

void PythonQtWrapper_QSessionManager::setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
 theWrappedObject->setDiscardCommand(arg__1);
}

bool  PythonQtWrapper_QSessionManager::allowsErrorInteraction(QSessionManager* theWrappedObject)
{
return  theWrappedObject->allowsErrorInteraction();
}

QSessionManager::RestartHint  PythonQtWrapper_QSessionManager::restartHint(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->restartHint();
}

void PythonQtWrapper_QSessionManager::setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
 theWrappedObject->setRestartCommand(arg__1);
}

void PythonQtWrapper_QSessionManager::requestPhase2(QSessionManager* theWrappedObject)
{
 theWrappedObject->requestPhase2();
}

void PythonQtWrapper_QSessionManager::release(QSessionManager* theWrappedObject)
{
 theWrappedObject->release();
}

bool  PythonQtWrapper_QSessionManager::allowsInteraction(QSessionManager* theWrappedObject)
{
return  theWrappedObject->allowsInteraction();
}

bool  PythonQtWrapper_QSessionManager::isPhase2(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->isPhase2();
}

QString  PythonQtWrapper_QSessionManager::sessionId(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->sessionId();
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value)
{
 theWrappedObject->setManagerProperty(name, value);
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value)
{
 theWrappedObject->setManagerProperty(name, value);
}

void PythonQtWrapper_QSessionManager::cancel(QSessionManager* theWrappedObject)
{
 theWrappedObject->cancel();
}

void PythonQtWrapper_QSessionManager::setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1)
{
 theWrappedObject->setRestartHint(arg__1);
}

QStringList  PythonQtWrapper_QSessionManager::restartCommand(QSessionManager* theWrappedObject) const
{
return  theWrappedObject->restartCommand();
}

