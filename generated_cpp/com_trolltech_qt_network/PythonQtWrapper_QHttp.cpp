#include "PythonQtWrapper_QHttp.h"

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpsocket.h>

QHttp* PythonQtWrapper_QHttp::new_QHttp(QObject*  parent)
{ 
return new QHttp(parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port, QObject*  parent)
{ 
return new QHttp(hostname, mode, port, parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, unsigned short  port, QObject*  parent)
{ 
return new QHttp(hostname, port, parent); }

qint64  PythonQtWrapper_QHttp::bytesAvailable(QHttp* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

void PythonQtWrapper_QHttp::clearPendingRequests(QHttp* theWrappedObject)
{
theWrappedObject->clearPendingRequests();
}

int  PythonQtWrapper_QHttp::close(QHttp* theWrappedObject)
{
return theWrappedObject->close();
}

QIODevice*  PythonQtWrapper_QHttp::currentDestinationDevice(QHttp* theWrappedObject) const
{
return theWrappedObject->currentDestinationDevice();
}

int  PythonQtWrapper_QHttp::currentId(QHttp* theWrappedObject) const
{
return theWrappedObject->currentId();
}

QHttpRequestHeader  PythonQtWrapper_QHttp::currentRequest(QHttp* theWrappedObject) const
{
return theWrappedObject->currentRequest();
}

QIODevice*  PythonQtWrapper_QHttp::currentSourceDevice(QHttp* theWrappedObject) const
{
return theWrappedObject->currentSourceDevice();
}

QHttp::Error  PythonQtWrapper_QHttp::error(QHttp* theWrappedObject) const
{
return theWrappedObject->error();
}

QString  PythonQtWrapper_QHttp::errorString(QHttp* theWrappedObject) const
{
return theWrappedObject->errorString();
}

int  PythonQtWrapper_QHttp::get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to)
{
return theWrappedObject->get(path, to);
}

bool  PythonQtWrapper_QHttp::hasPendingRequests(QHttp* theWrappedObject) const
{
return theWrappedObject->hasPendingRequests();
}

int  PythonQtWrapper_QHttp::head(QHttp* theWrappedObject, const QString&  path)
{
return theWrappedObject->head(path);
}

QHttpResponseHeader  PythonQtWrapper_QHttp::lastResponse(QHttp* theWrappedObject) const
{
return theWrappedObject->lastResponse();
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to)
{
return theWrappedObject->post(path, data, to);
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to)
{
return theWrappedObject->post(path, data, to);
}

qint64  PythonQtWrapper_QHttp::read(QHttp* theWrappedObject, char*  data, qint64  maxlen)
{
return theWrappedObject->read(data, maxlen);
}

QByteArray  PythonQtWrapper_QHttp::readAll(QHttp* theWrappedObject)
{
return theWrappedObject->readAll();
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device, QIODevice*  to)
{
return theWrappedObject->request(header, device, to);
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to)
{
return theWrappedObject->request(header, data, to);
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port)
{
return theWrappedObject->setHost(hostname, mode, port);
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port)
{
return theWrappedObject->setHost(hostname, port);
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy)
{
return theWrappedObject->setProxy(proxy);
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username, const QString&  password)
{
return theWrappedObject->setProxy(host, port, username, password);
}

int  PythonQtWrapper_QHttp::setSocket(QHttp* theWrappedObject, QTcpSocket*  socket)
{
return theWrappedObject->setSocket(socket);
}

int  PythonQtWrapper_QHttp::setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password)
{
return theWrappedObject->setUser(username, password);
}

QHttp::State  PythonQtWrapper_QHttp::state(QHttp* theWrappedObject) const
{
return theWrappedObject->state();
}

