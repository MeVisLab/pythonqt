#ifndef PYTHONQTWRAPPER_QUDPSOCKET_H
#define PYTHONQTWRAPPER_QUDPSOCKET_H

#include <qudpsocket.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qudpsocket.h>

class PythonQtShell_QUdpSocket : public QUdpSocket
{
public:
    PythonQtShell_QUdpSocket(QObject*  parent = 0):QUdpSocket(parent),_wrapper(NULL) {};

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUdpSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindFlag )
enum BindFlag{
  DefaultForPlatform = QUdpSocket::DefaultForPlatform,   ShareAddress = QUdpSocket::ShareAddress,   DontShareAddress = QUdpSocket::DontShareAddress,   ReuseAddressHint = QUdpSocket::ReuseAddressHint};
public slots:
QUdpSocket* new_QUdpSocket(QObject*  parent = 0);
void delete_QUdpSocket(QUdpSocket* obj) { delete obj; } 
   bool  bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port);
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   qint64  readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host = 0, unsigned short*  port = 0);
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port = 0);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port);
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   bool  bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QUdpSocket::BindMode  mode);
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port, QUdpSocket::BindMode  mode);
};

#endif // PYTHONQTWRAPPER_QUDPSOCKET_H
