#include "PythonQtWrapper_QLocalSocket.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalsocket.h>
#include <qobject.h>

QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new QLocalSocket(parent); }

void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
theWrappedObject->abort();
}

qint64  PythonQtWrapper_QLocalSocket::bytesAvailable(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->bytesAvailable();
}

qint64  PythonQtWrapper_QLocalSocket::bytesToWrite(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->bytesToWrite();
}

bool  PythonQtWrapper_QLocalSocket::canReadLine(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->canReadLine();
}

void PythonQtWrapper_QLocalSocket::close(QLocalSocket* theWrappedObject)
{
theWrappedObject->close();
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode)
{
theWrappedObject->connectToServer(name, openMode);
}

void PythonQtWrapper_QLocalSocket::disconnectFromServer(QLocalSocket* theWrappedObject)
{
theWrappedObject->disconnectFromServer();
}

QLocalSocket::LocalSocketError  PythonQtWrapper_QLocalSocket::error(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->error();
}

bool  PythonQtWrapper_QLocalSocket::flush(QLocalSocket* theWrappedObject)
{
return theWrappedObject->flush();
}

QString  PythonQtWrapper_QLocalSocket::fullServerName(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->fullServerName();
}

bool  PythonQtWrapper_QLocalSocket::isSequential(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->isSequential();
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->isValid();
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->readBufferSize();
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->serverName();
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
theWrappedObject->setReadBufferSize(size);
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODevice::OpenMode  openMode)
{
return theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode);
}

quintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->socketDescriptor();
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
return theWrappedObject->state();
}

bool  PythonQtWrapper_QLocalSocket::waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForBytesWritten(msecs);
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForConnected(msecs);
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForDisconnected(msecs);
}

bool  PythonQtWrapper_QLocalSocket::waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs)
{
return theWrappedObject->waitForReadyRead(msecs);
}

