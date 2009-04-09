#include "PythonQtWrapper_QSessionManager.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>

bool  PythonQtWrapper_QSessionManager::allowsErrorInteraction(QSessionManager* theWrappedObject)
{
return theWrappedObject->allowsErrorInteraction();
}

bool  PythonQtWrapper_QSessionManager::allowsInteraction(QSessionManager* theWrappedObject)
{
return theWrappedObject->allowsInteraction();
}

void PythonQtWrapper_QSessionManager::cancel(QSessionManager* theWrappedObject)
{
theWrappedObject->cancel();
}

QStringList  PythonQtWrapper_QSessionManager::discardCommand(QSessionManager* theWrappedObject) const
{
return theWrappedObject->discardCommand();
}

bool  PythonQtWrapper_QSessionManager::isPhase2(QSessionManager* theWrappedObject) const
{
return theWrappedObject->isPhase2();
}

void PythonQtWrapper_QSessionManager::release(QSessionManager* theWrappedObject)
{
theWrappedObject->release();
}

void PythonQtWrapper_QSessionManager::requestPhase2(QSessionManager* theWrappedObject)
{
theWrappedObject->requestPhase2();
}

QStringList  PythonQtWrapper_QSessionManager::restartCommand(QSessionManager* theWrappedObject) const
{
return theWrappedObject->restartCommand();
}

QSessionManager::RestartHint  PythonQtWrapper_QSessionManager::restartHint(QSessionManager* theWrappedObject) const
{
return theWrappedObject->restartHint();
}

QString  PythonQtWrapper_QSessionManager::sessionId(QSessionManager* theWrappedObject) const
{
return theWrappedObject->sessionId();
}

QString  PythonQtWrapper_QSessionManager::sessionKey(QSessionManager* theWrappedObject) const
{
return theWrappedObject->sessionKey();
}

void PythonQtWrapper_QSessionManager::setDiscardCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
theWrappedObject->setDiscardCommand(arg__1);
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QString&  value)
{
theWrappedObject->setManagerProperty(name, value);
}

void PythonQtWrapper_QSessionManager::setManagerProperty(QSessionManager* theWrappedObject, const QString&  name, const QStringList&  value)
{
theWrappedObject->setManagerProperty(name, value);
}

void PythonQtWrapper_QSessionManager::setRestartCommand(QSessionManager* theWrappedObject, const QStringList&  arg__1)
{
theWrappedObject->setRestartCommand(arg__1);
}

void PythonQtWrapper_QSessionManager::setRestartHint(QSessionManager* theWrappedObject, QSessionManager::RestartHint  arg__1)
{
theWrappedObject->setRestartHint(arg__1);
}

