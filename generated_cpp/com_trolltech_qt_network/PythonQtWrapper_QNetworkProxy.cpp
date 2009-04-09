#include "PythonQtWrapper_QNetworkProxy.h"

#include <QVariant>
#include <qnetworkproxy.h>

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy()
{ 
return new QNetworkProxy(); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName, unsigned short  port, const QString&  user, const QString&  password)
{ 
return new QNetworkProxy(type, hostName, port, user, password); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(const QNetworkProxy&  other)
{ 
return new QNetworkProxy(other); }

QNetworkProxy  PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_applicationProxy()
{
return QNetworkProxy::applicationProxy();
}

QString  PythonQtWrapper_QNetworkProxy::hostName(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->hostName();
}

bool  PythonQtWrapper_QNetworkProxy::isCachingProxy(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->isCachingProxy();
}

bool  PythonQtWrapper_QNetworkProxy::isTransparentProxy(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->isTransparentProxy();
}

bool  PythonQtWrapper_QNetworkProxy::operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
return *theWrappedObject == other;
}

QString  PythonQtWrapper_QNetworkProxy::password(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->password();
}

unsigned short  PythonQtWrapper_QNetworkProxy::port(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->port();
}

void PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy)
{
QNetworkProxy::setApplicationProxy(proxy);
}

void PythonQtWrapper_QNetworkProxy::setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName)
{
theWrappedObject->setHostName(hostName);
}

void PythonQtWrapper_QNetworkProxy::setPassword(QNetworkProxy* theWrappedObject, const QString&  password)
{
theWrappedObject->setPassword(password);
}

void PythonQtWrapper_QNetworkProxy::setPort(QNetworkProxy* theWrappedObject, unsigned short  port)
{
theWrappedObject->setPort(port);
}

void PythonQtWrapper_QNetworkProxy::setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type)
{
theWrappedObject->setType(type);
}

void PythonQtWrapper_QNetworkProxy::setUser(QNetworkProxy* theWrappedObject, const QString&  userName)
{
theWrappedObject->setUser(userName);
}

QNetworkProxy::ProxyType  PythonQtWrapper_QNetworkProxy::type(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->type();
}

QString  PythonQtWrapper_QNetworkProxy::user(QNetworkProxy* theWrappedObject) const
{
return theWrappedObject->user();
}

