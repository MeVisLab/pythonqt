#ifndef PYTHONQTWRAPPER_QABSTRACTSOCKET_H
#define PYTHONQTWRAPPER_QABSTRACTSOCKET_H

#include <qabstractsocket.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>

class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

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
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline qint64  promoted_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline qint64  promoted_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
inline bool  promoted_atEnd() const { return QAbstractSocket::atEnd(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
inline bool  promoted_isSequential() const { return QAbstractSocket::isSequential(); }
inline bool  promoted_canReadLine() const { return QAbstractSocket::canReadLine(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline void promoted_close() { QAbstractSocket::close(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketType SocketError NetworkLayerProtocol SocketState )
enum SocketType{
  TcpSocket = QAbstractSocket::TcpSocket,   UdpSocket = QAbstractSocket::UdpSocket,   UnknownSocketType = QAbstractSocket::UnknownSocketType};
enum SocketError{
  ConnectionRefusedError = QAbstractSocket::ConnectionRefusedError,   RemoteHostClosedError = QAbstractSocket::RemoteHostClosedError,   HostNotFoundError = QAbstractSocket::HostNotFoundError,   SocketAccessError = QAbstractSocket::SocketAccessError,   SocketResourceError = QAbstractSocket::SocketResourceError,   SocketTimeoutError = QAbstractSocket::SocketTimeoutError,   DatagramTooLargeError = QAbstractSocket::DatagramTooLargeError,   NetworkError = QAbstractSocket::NetworkError,   AddressInUseError = QAbstractSocket::AddressInUseError,   SocketAddressNotAvailableError = QAbstractSocket::SocketAddressNotAvailableError,   UnsupportedSocketOperationError = QAbstractSocket::UnsupportedSocketOperationError,   UnfinishedSocketOperationError = QAbstractSocket::UnfinishedSocketOperationError,   ProxyAuthenticationRequiredError = QAbstractSocket::ProxyAuthenticationRequiredError,   SslHandshakeFailedError = QAbstractSocket::SslHandshakeFailedError,   UnknownSocketError = QAbstractSocket::UnknownSocketError};
enum NetworkLayerProtocol{
  IPv4Protocol = QAbstractSocket::IPv4Protocol,   IPv6Protocol = QAbstractSocket::IPv6Protocol,   UnknownNetworkLayerProtocol = QAbstractSocket::UnknownNetworkLayerProtocol};
enum SocketState{
  UnconnectedState = QAbstractSocket::UnconnectedState,   HostLookupState = QAbstractSocket::HostLookupState,   ConnectingState = QAbstractSocket::ConnectingState,   ConnectedState = QAbstractSocket::ConnectedState,   BoundState = QAbstractSocket::BoundState,   ListeningState = QAbstractSocket::ListeningState,   ClosingState = QAbstractSocket::ClosingState};
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   int  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   qint64  readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   qint64  bytesToWrite(QAbstractSocket* theWrappedObject) const;
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void abort(QAbstractSocket* theWrappedObject);
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  flush(QAbstractSocket* theWrappedObject);
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   qint64  writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len);
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   qint64  readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   void close(QAbstractSocket* theWrappedObject);
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
};

#endif // PYTHONQTWRAPPER_QABSTRACTSOCKET_H
