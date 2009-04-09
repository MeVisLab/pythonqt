#include "PythonQtWrapper_QUdpSocket.h"

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qudpsocket.h>

QUdpSocket* PythonQtWrapper_QUdpSocket::new_QUdpSocket(QObject*  parent)
{ 
return new QUdpSocket(parent); }

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
return theWrappedObject->bind(address, port);
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QUdpSocket::BindMode  mode)
{
return theWrappedObject->bind(address, port, mode);
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, unsigned short  port)
{
return theWrappedObject->bind(port);
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, unsigned short  port, QUdpSocket::BindMode  mode)
{
return theWrappedObject->bind(port, mode);
}

bool  PythonQtWrapper_QUdpSocket::hasPendingDatagrams(QUdpSocket* theWrappedObject) const
{
return theWrappedObject->hasPendingDatagrams();
}

qint64  PythonQtWrapper_QUdpSocket::pendingDatagramSize(QUdpSocket* theWrappedObject) const
{
return theWrappedObject->pendingDatagramSize();
}

qint64  PythonQtWrapper_QUdpSocket::readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host, unsigned short*  port)
{
return theWrappedObject->readDatagram(data, maxlen, host, port);
}

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port)
{
return theWrappedObject->writeDatagram(datagram, host, port);
}

