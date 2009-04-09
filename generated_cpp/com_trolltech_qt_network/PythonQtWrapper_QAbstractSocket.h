#ifndef PYTHONQTWRAPPER_QABSTRACTSOCKET_H
#define PYTHONQTWRAPPER_QABSTRACTSOCKET_H

#include <qabstractsocket.h>
#include <QObject>

#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>

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
   void abort(QAbstractSocket* theWrappedObject);
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   qint64  bytesToWrite(QAbstractSocket* theWrappedObject) const;
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   void close(QAbstractSocket* theWrappedObject);
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   bool  flush(QAbstractSocket* theWrappedObject);
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   int  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
};

#endif // PYTHONQTWRAPPER_QABSTRACTSOCKET_H
