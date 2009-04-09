#include "PythonQtWrapper_QAbstractSocket.h"

#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>

QAbstractSocket* PythonQtWrapper_QAbstractSocket::new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent)
{ 
return new QAbstractSocket(socketType, parent); }

void PythonQtWrapper_QAbstractSocket::abort(QAbstractSocket* theWrappedObject)
{
theWrappedObject->abort();
}

bool  PythonQtWrapper_QAbstractSocket::atEnd(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->atEnd();
}

qint64  PythonQtWrapper_QAbstractSocket::bytesAvailable(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

qint64  PythonQtWrapper_QAbstractSocket::bytesToWrite(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->bytesToWrite();
}

bool  PythonQtWrapper_QAbstractSocket::canReadLine(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->canReadLine();
}

void PythonQtWrapper_QAbstractSocket::close(QAbstractSocket* theWrappedObject)
{
theWrappedObject->close();
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode)
{
theWrappedObject->connectToHost(address, port, mode);
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode)
{
theWrappedObject->connectToHost(hostName, port, mode);
}

void PythonQtWrapper_QAbstractSocket::disconnectFromHost(QAbstractSocket* theWrappedObject)
{
theWrappedObject->disconnectFromHost();
}

QAbstractSocket::SocketError  PythonQtWrapper_QAbstractSocket::error(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->error();
}

bool  PythonQtWrapper_QAbstractSocket::flush(QAbstractSocket* theWrappedObject)
{
return theWrappedObject->flush();
}

bool  PythonQtWrapper_QAbstractSocket::isSequential(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

bool  PythonQtWrapper_QAbstractSocket::isValid(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->isValid();
}

QHostAddress  PythonQtWrapper_QAbstractSocket::localAddress(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->localAddress();
}

unsigned short  PythonQtWrapper_QAbstractSocket::localPort(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->localPort();
}

QHostAddress  PythonQtWrapper_QAbstractSocket::peerAddress(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->peerAddress();
}

QString  PythonQtWrapper_QAbstractSocket::peerName(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->peerName();
}

unsigned short  PythonQtWrapper_QAbstractSocket::peerPort(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->peerPort();
}

QNetworkProxy  PythonQtWrapper_QAbstractSocket::proxy(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->proxy();
}

qint64  PythonQtWrapper_QAbstractSocket::readBufferSize(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->readBufferSize();
}

void PythonQtWrapper_QAbstractSocket::setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy)
{
theWrappedObject->setProxy(networkProxy);
}

void PythonQtWrapper_QAbstractSocket::setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size)
{
theWrappedObject->setReadBufferSize(size);
}

bool  PythonQtWrapper_QAbstractSocket::setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state, QIODevice::OpenMode  openMode)
{
return theWrappedObject->setSocketDescriptor(socketDescriptor, state, openMode);
}

int  PythonQtWrapper_QAbstractSocket::socketDescriptor(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->socketDescriptor();
}

QAbstractSocket::SocketType  PythonQtWrapper_QAbstractSocket::socketType(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->socketType();
}

QAbstractSocket::SocketState  PythonQtWrapper_QAbstractSocket::state(QAbstractSocket* theWrappedObject) const
{
return theWrappedObject->state();
}

bool  PythonQtWrapper_QAbstractSocket::waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForBytesWritten(msecs);
}

bool  PythonQtWrapper_QAbstractSocket::waitForConnected(QAbstractSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForConnected(msecs);
}

bool  PythonQtWrapper_QAbstractSocket::waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForDisconnected(msecs);
}

bool  PythonQtWrapper_QAbstractSocket::waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForReadyRead(msecs);
}

