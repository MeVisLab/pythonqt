#include "PythonQtWrapper_QTcpServer.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>

QTcpServer* PythonQtWrapper_QTcpServer::new_QTcpServer(QObject*  parent)
{ 
return new QTcpServer(parent); }

void PythonQtWrapper_QTcpServer::close(QTcpServer* theWrappedObject)
{
theWrappedObject->close();
}

QString  PythonQtWrapper_QTcpServer::errorString(QTcpServer* theWrappedObject) const
{
return theWrappedObject->errorString();
}

bool  PythonQtWrapper_QTcpServer::hasPendingConnections(QTcpServer* theWrappedObject) const
{
return theWrappedObject->hasPendingConnections();
}

bool  PythonQtWrapper_QTcpServer::isListening(QTcpServer* theWrappedObject) const
{
return theWrappedObject->isListening();
}

bool  PythonQtWrapper_QTcpServer::listen(QTcpServer* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
return theWrappedObject->listen(address, port);
}

int  PythonQtWrapper_QTcpServer::maxPendingConnections(QTcpServer* theWrappedObject) const
{
return theWrappedObject->maxPendingConnections();
}

QTcpSocket*  PythonQtWrapper_QTcpServer::nextPendingConnection(QTcpServer* theWrappedObject)
{
return theWrappedObject->nextPendingConnection();
}

QNetworkProxy  PythonQtWrapper_QTcpServer::proxy(QTcpServer* theWrappedObject) const
{
return theWrappedObject->proxy();
}

QHostAddress  PythonQtWrapper_QTcpServer::serverAddress(QTcpServer* theWrappedObject) const
{
return theWrappedObject->serverAddress();
}

QAbstractSocket::SocketError  PythonQtWrapper_QTcpServer::serverError(QTcpServer* theWrappedObject) const
{
return theWrappedObject->serverError();
}

unsigned short  PythonQtWrapper_QTcpServer::serverPort(QTcpServer* theWrappedObject) const
{
return theWrappedObject->serverPort();
}

void PythonQtWrapper_QTcpServer::setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections)
{
theWrappedObject->setMaxPendingConnections(numConnections);
}

void PythonQtWrapper_QTcpServer::setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy)
{
theWrappedObject->setProxy(networkProxy);
}

bool  PythonQtWrapper_QTcpServer::setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor)
{
return theWrappedObject->setSocketDescriptor(socketDescriptor);
}

int  PythonQtWrapper_QTcpServer::socketDescriptor(QTcpServer* theWrappedObject) const
{
return theWrappedObject->socketDescriptor();
}

bool  PythonQtWrapper_QTcpServer::waitForNewConnection(QTcpServer* theWrappedObject, int  msec, bool*  timedOut)
{
return theWrappedObject->waitForNewConnection(msec, timedOut);
}

