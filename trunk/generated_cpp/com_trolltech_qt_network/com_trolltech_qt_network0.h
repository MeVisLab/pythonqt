#include <PythonQt.h>
#include <QDateTime>
#include <QObject>
#include <QVariant>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qftp.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkcookie.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qssl.h>
#include <qstringlist.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurl.h>
#include <qurlinfo.h>



class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

virtual bool  canReadLine() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual qint64  bytesAvailable() const;
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual void close();
virtual bool  atEnd() const;
virtual bool  isSequential() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesToWrite() const;
virtual bool  seek(qint64  pos);
virtual bool  reset();
virtual qint64  size() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline bool  promoted_canReadLine() const { return QAbstractSocket::canReadLine(); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline qint64  promoted_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline void promoted_close() { QAbstractSocket::close(); }
inline bool  promoted_atEnd() const { return QAbstractSocket::atEnd(); }
inline bool  promoted_isSequential() const { return QAbstractSocket::isSequential(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
inline qint64  promoted_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
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
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   qint64  readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   int  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   void close(QAbstractSocket* theWrappedObject);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   qint64  readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void abort(QAbstractSocket* theWrappedObject);
   bool  flush(QAbstractSocket* theWrappedObject);
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   qint64  writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len);
   qint64  bytesToWrite(QAbstractSocket* theWrappedObject) const;
};





class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   QString  password(QAuthenticator* theWrappedObject) const;
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   QString  realm(QAuthenticator* theWrappedObject) const;
   bool  operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   QString  user(QAuthenticator* theWrappedObject) const;
   bool  isNull(QAuthenticator* theWrappedObject) const;
};





class PythonQtShell_QFtp : public QFtp
{
public:
    PythonQtShell_QFtp(QObject*  parent = 0):QFtp(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFtp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransferType Error Command TransferMode State )
enum TransferType{
  Binary = QFtp::Binary,   Ascii = QFtp::Ascii};
enum Error{
  NoError = QFtp::NoError,   UnknownError = QFtp::UnknownError,   HostNotFound = QFtp::HostNotFound,   ConnectionRefused = QFtp::ConnectionRefused,   NotConnected = QFtp::NotConnected};
enum Command{
  None = QFtp::None,   SetTransferMode = QFtp::SetTransferMode,   SetProxy = QFtp::SetProxy,   ConnectToHost = QFtp::ConnectToHost,   Login = QFtp::Login,   Close = QFtp::Close,   List = QFtp::List,   Cd = QFtp::Cd,   Get = QFtp::Get,   Put = QFtp::Put,   Remove = QFtp::Remove,   Mkdir = QFtp::Mkdir,   Rmdir = QFtp::Rmdir,   Rename = QFtp::Rename,   RawCommand = QFtp::RawCommand};
enum TransferMode{
  Active = QFtp::Active,   Passive = QFtp::Passive};
enum State{
  Unconnected = QFtp::Unconnected,   HostLookup = QFtp::HostLookup,   Connecting = QFtp::Connecting,   Connected = QFtp::Connected,   LoggedIn = QFtp::LoggedIn,   Closing = QFtp::Closing};
public slots:
QFtp* new_QFtp(QObject*  parent = 0);
void delete_QFtp(QFtp* obj) { delete obj; } 
   QIODevice*  currentDevice(QFtp* theWrappedObject) const;
   QFtp::Command  currentCommand(QFtp* theWrappedObject) const;
   int  setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode);
   QFtp::Error  error(QFtp* theWrappedObject) const;
   int  cd(QFtp* theWrappedObject, const QString&  dir);
   qint64  bytesAvailable(QFtp* theWrappedObject) const;
   int  currentId(QFtp* theWrappedObject) const;
   int  remove(QFtp* theWrappedObject, const QString&  file);
   int  rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname);
   int  close(QFtp* theWrappedObject);
   int  login(QFtp* theWrappedObject, const QString&  user = QString(), const QString&  password = QString());
   bool  hasPendingCommands(QFtp* theWrappedObject) const;
   int  put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev = 0, QFtp::TransferType  type = QFtp::Binary);
   int  rmdir(QFtp* theWrappedObject, const QString&  dir);
   QString  errorString(QFtp* theWrappedObject) const;
   int  mkdir(QFtp* theWrappedObject, const QString&  dir);
   int  connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port = 21);
   QFtp::State  state(QFtp* theWrappedObject) const;
   int  put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   QByteArray  readAll(QFtp* theWrappedObject);
   void clearPendingCommands(QFtp* theWrappedObject);
   int  rawCommand(QFtp* theWrappedObject, const QString&  command);
   int  setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port);
   int  list(QFtp* theWrappedObject, const QString&  dir = QString());
   qint64  read(QFtp* theWrappedObject, char*  data, qint64  maxlen);
};





class PythonQtWrapper_QHostAddress : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialAddress )
enum SpecialAddress{
  Null = QHostAddress::Null,   Broadcast = QHostAddress::Broadcast,   LocalHost = QHostAddress::LocalHost,   LocalHostIPv6 = QHostAddress::LocalHostIPv6,   Any = QHostAddress::Any,   AnyIPv6 = QHostAddress::AnyIPv6};
public slots:
QHostAddress* new_QHostAddress();
QHostAddress* new_QHostAddress(QHostAddress::SpecialAddress  address);
QHostAddress* new_QHostAddress(const QHostAddress&  copy);
QHostAddress* new_QHostAddress(const QIPv6Address&  ip6Addr);
QHostAddress* new_QHostAddress(const QString&  address);
QHostAddress* new_QHostAddress(unsigned int  ip4Addr);
void delete_QHostAddress(QHostAddress* obj) { delete obj; } 
   void clear(QHostAddress* theWrappedObject);
   bool  isNull(QHostAddress* theWrappedObject) const;
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   bool  operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   bool  operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   QString  scopeId(QHostAddress* theWrappedObject) const;
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QHostInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HostInfoError )
enum HostInfoError{
  NoError = QHostInfo::NoError,   HostNotFound = QHostInfo::HostNotFound,   UnknownError = QHostInfo::UnknownError};
public slots:
QHostInfo* new_QHostInfo(const QHostInfo&  d);
QHostInfo* new_QHostInfo(int  lookupId = -1);
void delete_QHostInfo(QHostInfo* obj) { delete obj; } 
   void setErrorString(QHostInfo* theWrappedObject, const QString&  errorString);
   QHostInfo  static_QHostInfo_fromName(const QString&  name);
   QString  static_QHostInfo_localHostName();
   int  lookupId(QHostInfo* theWrappedObject) const;
   void static_QHostInfo_abortHostLookup(int  lookupId);
   void setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses);
   QString  hostName(QHostInfo* theWrappedObject) const;
   QList<QHostAddress >  addresses(QHostInfo* theWrappedObject) const;
   QHostInfo::HostInfoError  error(QHostInfo* theWrappedObject) const;
   void setLookupId(QHostInfo* theWrappedObject, int  id);
   void setHostName(QHostInfo* theWrappedObject, const QString&  name);
   void setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error);
   QString  errorString(QHostInfo* theWrappedObject) const;
   int  static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member);
};





class PythonQtShell_QHttp : public QHttp
{
public:
    PythonQtShell_QHttp(QObject*  parent = 0):QHttp(parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0, QObject*  parent = 0):QHttp(hostname, mode, port, parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, unsigned short  port = 80, QObject*  parent = 0):QHttp(hostname, port, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHttp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error ConnectionMode State )
enum Error{
  NoError = QHttp::NoError,   UnknownError = QHttp::UnknownError,   HostNotFound = QHttp::HostNotFound,   ConnectionRefused = QHttp::ConnectionRefused,   UnexpectedClose = QHttp::UnexpectedClose,   InvalidResponseHeader = QHttp::InvalidResponseHeader,   WrongContentLength = QHttp::WrongContentLength,   Aborted = QHttp::Aborted,   AuthenticationRequiredError = QHttp::AuthenticationRequiredError,   ProxyAuthenticationRequiredError = QHttp::ProxyAuthenticationRequiredError};
enum ConnectionMode{
  ConnectionModeHttp = QHttp::ConnectionModeHttp,   ConnectionModeHttps = QHttp::ConnectionModeHttps};
enum State{
  Unconnected = QHttp::Unconnected,   HostLookup = QHttp::HostLookup,   Connecting = QHttp::Connecting,   Sending = QHttp::Sending,   Reading = QHttp::Reading,   Connected = QHttp::Connected,   Closing = QHttp::Closing};
public slots:
QHttp* new_QHttp(QObject*  parent = 0);
QHttp* new_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0, QObject*  parent = 0);
QHttp* new_QHttp(const QString&  hostname, unsigned short  port = 80, QObject*  parent = 0);
void delete_QHttp(QHttp* obj) { delete obj; } 
   int  setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device = 0, QIODevice*  to = 0);
   QIODevice*  currentSourceDevice(QHttp* theWrappedObject) const;
   QHttp::State  state(QHttp* theWrappedObject) const;
   QHttpResponseHeader  lastResponse(QHttp* theWrappedObject) const;
   QString  errorString(QHttp* theWrappedObject) const;
   int  get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to = 0);
   int  setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password = QString());
   int  setSocket(QHttp* theWrappedObject, QTcpSocket*  socket);
   int  close(QHttp* theWrappedObject);
   int  post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to = 0);
   int  currentId(QHttp* theWrappedObject) const;
   qint64  bytesAvailable(QHttp* theWrappedObject) const;
   QHttp::Error  error(QHttp* theWrappedObject) const;
   int  post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to = 0);
   int  head(QHttp* theWrappedObject, const QString&  path);
   QIODevice*  currentDestinationDevice(QHttp* theWrappedObject) const;
   void clearPendingRequests(QHttp* theWrappedObject);
   QByteArray  readAll(QHttp* theWrappedObject);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port = 80);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to = 0);
   QHttpRequestHeader  currentRequest(QHttp* theWrappedObject) const;
   qint64  read(QHttp* theWrappedObject, char*  data, qint64  maxlen);
   int  setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username = QString(), const QString&  password = QString());
   bool  hasPendingRequests(QHttp* theWrappedObject) const;
};





class PythonQtShell_QHttpHeader : public QHttpHeader
{
public:
    PythonQtShell_QHttpHeader():QHttpHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpHeader(const QString&  str):QHttpHeader(str),_wrapper(NULL) {};

virtual int  majorVersion() const;
virtual QString  toString() const;
virtual int  minorVersion() const;
virtual bool  parseLine(const QString&  line, int  number);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpHeader : public QHttpHeader
{ public:
inline QString  promoted_toString() const { return QHttpHeader::toString(); }
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpHeader::parseLine(line, number); }
};

class PythonQtWrapper_QHttpHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpHeader* new_QHttpHeader();
QHttpHeader* new_QHttpHeader(const QString&  str);
void delete_QHttpHeader(QHttpHeader* obj) { delete obj; } 
   void setContentLength(QHttpHeader* theWrappedObject, int  len);
   QList<QPair<QString , QString >  >  values(QHttpHeader* theWrappedObject) const;
   bool  hasKey(QHttpHeader* theWrappedObject, const QString&  key) const;
   bool  isValid(QHttpHeader* theWrappedObject) const;
   QString  toString(QHttpHeader* theWrappedObject) const;
   bool  hasContentLength(QHttpHeader* theWrappedObject) const;
   bool  hasContentType(QHttpHeader* theWrappedObject) const;
   QStringList  allValues(QHttpHeader* theWrappedObject, const QString&  key) const;
   QString  contentType(QHttpHeader* theWrappedObject) const;
   uint  contentLength(QHttpHeader* theWrappedObject) const;
   void addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   void removeValue(QHttpHeader* theWrappedObject, const QString&  key);
   QString  value(QHttpHeader* theWrappedObject, const QString&  key) const;
   QStringList  keys(QHttpHeader* theWrappedObject) const;
   void setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values);
   bool  parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number);
   void removeAllValues(QHttpHeader* theWrappedObject, const QString&  key);
   void setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   void setContentType(QHttpHeader* theWrappedObject, const QString&  type);
};





class PythonQtShell_QHttpRequestHeader : public QHttpRequestHeader
{
public:
    PythonQtShell_QHttpRequestHeader():QHttpRequestHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QHttpRequestHeader&  header):QHttpRequestHeader(header),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1):QHttpRequestHeader(method, path, majorVer, minorVer),_wrapper(NULL) {};
    PythonQtShell_QHttpRequestHeader(const QString&  str):QHttpRequestHeader(str),_wrapper(NULL) {};

virtual bool  parseLine(const QString&  line, int  number);
virtual QString  toString() const;
virtual int  minorVersion() const;
virtual int  majorVersion() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpRequestHeader : public QHttpRequestHeader
{ public:
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpRequestHeader::parseLine(line, number); }
inline QString  promoted_toString() const { return QHttpRequestHeader::toString(); }
inline int  promoted_minorVersion() const { return QHttpRequestHeader::minorVersion(); }
inline int  promoted_majorVersion() const { return QHttpRequestHeader::majorVersion(); }
};

class PythonQtWrapper_QHttpRequestHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpRequestHeader* new_QHttpRequestHeader();
QHttpRequestHeader* new_QHttpRequestHeader(const QHttpRequestHeader&  header);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
QHttpRequestHeader* new_QHttpRequestHeader(const QString&  str);
void delete_QHttpRequestHeader(QHttpRequestHeader* obj) { delete obj; } 
   QString  method(QHttpRequestHeader* theWrappedObject) const;
   bool  parseLine(QHttpRequestHeader* theWrappedObject, const QString&  line, int  number);
   QString  toString(QHttpRequestHeader* theWrappedObject) const;
   QString  path(QHttpRequestHeader* theWrappedObject) const;
   int  minorVersion(QHttpRequestHeader* theWrappedObject) const;
   void setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
   int  majorVersion(QHttpRequestHeader* theWrappedObject) const;
};





class PythonQtShell_QHttpResponseHeader : public QHttpResponseHeader
{
public:
    PythonQtShell_QHttpResponseHeader():QHttpResponseHeader(),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(const QHttpResponseHeader&  header):QHttpResponseHeader(header),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(const QString&  str):QHttpResponseHeader(str),_wrapper(NULL) {};
    PythonQtShell_QHttpResponseHeader(int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1):QHttpResponseHeader(code, text, majorVer, minorVer),_wrapper(NULL) {};

virtual bool  parseLine(const QString&  line, int  number);
virtual QString  toString() const;
virtual int  minorVersion() const;
virtual int  majorVersion() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpResponseHeader : public QHttpResponseHeader
{ public:
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpResponseHeader::parseLine(line, number); }
inline QString  promoted_toString() const { return QHttpResponseHeader::toString(); }
inline int  promoted_minorVersion() const { return QHttpResponseHeader::minorVersion(); }
inline int  promoted_majorVersion() const { return QHttpResponseHeader::majorVersion(); }
};

class PythonQtWrapper_QHttpResponseHeader : public QObject
{ Q_OBJECT
public:
public slots:
QHttpResponseHeader* new_QHttpResponseHeader();
QHttpResponseHeader* new_QHttpResponseHeader(const QHttpResponseHeader&  header);
QHttpResponseHeader* new_QHttpResponseHeader(const QString&  str);
QHttpResponseHeader* new_QHttpResponseHeader(int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
void delete_QHttpResponseHeader(QHttpResponseHeader* obj) { delete obj; } 
   void setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
   bool  parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number);
   int  statusCode(QHttpResponseHeader* theWrappedObject) const;
   QString  toString(QHttpResponseHeader* theWrappedObject) const;
   int  minorVersion(QHttpResponseHeader* theWrappedObject) const;
   int  majorVersion(QHttpResponseHeader* theWrappedObject) const;
   QString  reasonPhrase(QHttpResponseHeader* theWrappedObject) const;
};





class PythonQtShell_QIPv6Address : public QIPv6Address
{
public:
    PythonQtShell_QIPv6Address():QIPv6Address(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIPv6Address : public QObject
{ Q_OBJECT
public:
public slots:
QIPv6Address* new_QIPv6Address();
QIPv6Address* new_QIPv6Address(const QIPv6Address& other) {
PythonQtShell_QIPv6Address* a = new PythonQtShell_QIPv6Address();
*((QIPv6Address*)a) = other;
return a; }
void delete_QIPv6Address(QIPv6Address* obj) { delete obj; } 
};





class PythonQtShell_QLocalServer : public QLocalServer
{
public:
    PythonQtShell_QLocalServer(QObject*  parent = 0):QLocalServer(parent),_wrapper(NULL) {};

virtual QLocalSocket*  nextPendingConnection();
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalServer : public QLocalServer
{ public:
inline QLocalSocket*  promoted_nextPendingConnection() { return QLocalServer::nextPendingConnection(); }
inline bool  promoted_hasPendingConnections() const { return QLocalServer::hasPendingConnections(); }
inline void promoted_incomingConnection(quintptr  socketDescriptor) { QLocalServer::incomingConnection(socketDescriptor); }
};

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = 0);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QString  serverName(QLocalServer* theWrappedObject) const;
   bool  isListening(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
};





class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = 0):QLocalSocket(parent),_wrapper(NULL) {};

virtual bool  canReadLine() const;
virtual qint64  bytesToWrite() const;
virtual void close();
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  isSequential() const;
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);
virtual qint64  bytesAvailable() const;
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual bool  reset();
virtual bool  atEnd() const;
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline bool  promoted_canReadLine() const { return QLocalSocket::canReadLine(); }
inline qint64  promoted_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline void promoted_close() { QLocalSocket::close(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
inline bool  promoted_isSequential() const { return QLocalSocket::isSequential(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline qint64  promoted_writeData(const char*  arg__1, qint64  arg__2) { return QLocalSocket::writeData(arg__1, arg__2); }
inline qint64  promoted_bytesAvailable() const { return QLocalSocket::bytesAvailable(); }
inline qint64  promoted_readData(char*  arg__1, qint64  arg__2) { return QLocalSocket::readData(arg__1, arg__2); }
};

class PythonQtWrapper_QLocalSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocalSocketState LocalSocketError )
enum LocalSocketState{
  UnconnectedState = QLocalSocket::UnconnectedState,   ConnectingState = QLocalSocket::ConnectingState,   ConnectedState = QLocalSocket::ConnectedState,   ClosingState = QLocalSocket::ClosingState};
enum LocalSocketError{
  ConnectionRefusedError = QLocalSocket::ConnectionRefusedError,   PeerClosedError = QLocalSocket::PeerClosedError,   ServerNotFoundError = QLocalSocket::ServerNotFoundError,   SocketAccessError = QLocalSocket::SocketAccessError,   SocketResourceError = QLocalSocket::SocketResourceError,   SocketTimeoutError = QLocalSocket::SocketTimeoutError,   DatagramTooLargeError = QLocalSocket::DatagramTooLargeError,   ConnectionError = QLocalSocket::ConnectionError,   UnsupportedSocketOperationError = QLocalSocket::UnsupportedSocketOperationError,   UnknownSocketError = QLocalSocket::UnknownSocketError};
public slots:
QLocalSocket* new_QLocalSocket(QObject*  parent = 0);
void delete_QLocalSocket(QLocalSocket* obj) { delete obj; } 
   bool  canReadLine(QLocalSocket* theWrappedObject) const;
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   qint64  bytesToWrite(QLocalSocket* theWrappedObject) const;
   void close(QLocalSocket* theWrappedObject);
   bool  waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  isSequential(QLocalSocket* theWrappedObject) const;
   bool  isValid(QLocalSocket* theWrappedObject) const;
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   QString  serverName(QLocalSocket* theWrappedObject) const;
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   bool  waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   quintptr  socketDescriptor(QLocalSocket* theWrappedObject) const;
   qint64  writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2);
   bool  setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState = QLocalSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  flush(QLocalSocket* theWrappedObject);
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   qint64  bytesAvailable(QLocalSocket* theWrappedObject) const;
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   void abort(QLocalSocket* theWrappedObject);
   qint64  readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2);
};





class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = 0):QNetworkAccessManager(parent),_wrapper(NULL) {};

virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkAccessManager : public QNetworkAccessManager
{ public:
inline QNetworkReply*  promoted_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0) { return QNetworkAccessManager::createRequest(op, request, outgoingData); }
};

class PythonQtWrapper_QNetworkAccessManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Operation )
enum Operation{
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = 0);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   void setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar);
   QNetworkReply*  createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
};





class PythonQtWrapper_QNetworkAddressEntry : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkAddressEntry* new_QNetworkAddressEntry();
QNetworkAddressEntry* new_QNetworkAddressEntry(const QNetworkAddressEntry&  other);
void delete_QNetworkAddressEntry(QNetworkAddressEntry* obj) { delete obj; } 
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
};





class PythonQtWrapper_QNetworkCookie : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RawForm )
enum RawForm{
  NameAndValueOnly = QNetworkCookie::NameAndValueOnly,   Full = QNetworkCookie::Full};
public slots:
QNetworkCookie* new_QNetworkCookie(const QByteArray&  name = QByteArray(), const QByteArray&  value = QByteArray());
QNetworkCookie* new_QNetworkCookie(const QNetworkCookie&  other);
void delete_QNetworkCookie(QNetworkCookie* obj) { delete obj; } 
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   bool  operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QString  path(QNetworkCookie* theWrappedObject) const;
    QString toString(QNetworkCookie*);
};





class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = 0):QNetworkCookieJar(parent),_wrapper(NULL) {};

virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline bool  promoted_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
inline QList<QNetworkCookie >  promoted_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = 0);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; } 
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
};





class PythonQtWrapper_QNetworkInterface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InterfaceFlag )
Q_FLAGS(InterfaceFlags )
enum InterfaceFlag{
  IsUp = QNetworkInterface::IsUp,   IsRunning = QNetworkInterface::IsRunning,   CanBroadcast = QNetworkInterface::CanBroadcast,   IsLoopBack = QNetworkInterface::IsLoopBack,   IsPointToPoint = QNetworkInterface::IsPointToPoint,   CanMulticast = QNetworkInterface::CanMulticast};
Q_DECLARE_FLAGS(InterfaceFlags, InterfaceFlag)
public slots:
QNetworkInterface* new_QNetworkInterface();
QNetworkInterface* new_QNetworkInterface(const QNetworkInterface&  other);
void delete_QNetworkInterface(QNetworkInterface* obj) { delete obj; } 
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   QString  name(QNetworkInterface* theWrappedObject) const;
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   QList<QNetworkAddressEntry >  addressEntries(QNetworkInterface* theWrappedObject) const;
    QString toString(QNetworkInterface*);
};





class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProxyType )
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   bool  operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   QString  user(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = 0):QNetworkReply(parent),_wrapper(NULL) {};

virtual void setReadBufferSize(qint64  size);
virtual bool  isSequential() const;
virtual void close();
virtual qint64  writeData(const char*  data, qint64  len);
virtual void abort();
virtual void ignoreSslErrors();
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual qint64  size() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  canReadLine() const;
virtual bool  atEnd() const;
virtual bool  seek(qint64  pos);
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline bool  promoted_isSequential() const { return QNetworkReply::isSequential(); }
inline void promoted_close() { QNetworkReply::close(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
inline void promoted_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   bool  isSequential(QNetworkReply* theWrappedObject) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void close(QNetworkReply* theWrappedObject);
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   qint64  writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len);
   QUrl  url(QNetworkReply* theWrappedObject) const;
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
};





class PythonQtWrapper_QNetworkRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheLoadControl KnownHeaders Attribute )
enum CacheLoadControl{
  AlwaysNetwork = QNetworkRequest::AlwaysNetwork,   PreferNetwork = QNetworkRequest::PreferNetwork,   PreferCache = QNetworkRequest::PreferCache,   AlwaysCache = QNetworkRequest::AlwaysCache};
enum KnownHeaders{
  ContentTypeHeader = QNetworkRequest::ContentTypeHeader,   ContentLengthHeader = QNetworkRequest::ContentLengthHeader,   LocationHeader = QNetworkRequest::LocationHeader,   LastModifiedHeader = QNetworkRequest::LastModifiedHeader,   CookieHeader = QNetworkRequest::CookieHeader,   SetCookieHeader = QNetworkRequest::SetCookieHeader};
enum Attribute{
  HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,   HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,   RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,   ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,   CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,   CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,   User = QNetworkRequest::User,   UserMax = QNetworkRequest::UserMax};
public slots:
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url = QUrl());
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; } 
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   bool  operator_equal(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   QUrl  url(QNetworkRequest* theWrappedObject) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
};





class PythonQtWrapper_QSsl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(KeyType KeyAlgorithm SslProtocol AlternateNameEntryType EncodingFormat )
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum KeyAlgorithm{
  Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa};
enum SslProtocol{
  SslV3 = QSsl::SslV3,   SslV2 = QSsl::SslV2,   TlsV1 = QSsl::TlsV1,   AnyProtocol = QSsl::AnyProtocol,   UnknownProtocol = QSsl::UnknownProtocol};
enum AlternateNameEntryType{
  EmailEntry = QSsl::EmailEntry,   DnsEntry = QSsl::DnsEntry};
enum EncodingFormat{
  Pem = QSsl::Pem,   Der = QSsl::Der};
public slots:
};





class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = 0):QTcpServer(parent),_wrapper(NULL) {};

virtual QTcpSocket*  nextPendingConnection();
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(int  handle);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTcpServer : public QTcpServer
{ public:
inline QTcpSocket*  promoted_nextPendingConnection() { return QTcpServer::nextPendingConnection(); }
inline bool  promoted_hasPendingConnections() const { return QTcpServer::hasPendingConnections(); }
inline void promoted_incomingConnection(int  handle) { QTcpServer::incomingConnection(handle); }
};

class PythonQtWrapper_QTcpServer : public QObject
{ Q_OBJECT
public:
public slots:
QTcpServer* new_QTcpServer(QObject*  parent = 0);
void delete_QTcpServer(QTcpServer* obj) { delete obj; } 
   int  maxPendingConnections(QTcpServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QTcpServer* theWrappedObject) const;
   bool  waitForNewConnection(QTcpServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   bool  isListening(QTcpServer* theWrappedObject) const;
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor);
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   int  socketDescriptor(QTcpServer* theWrappedObject) const;
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   void close(QTcpServer* theWrappedObject);
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   QString  errorString(QTcpServer* theWrappedObject) const;
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   void incomingConnection(QTcpServer* theWrappedObject, int  handle);
};





class PythonQtShell_QTcpSocket : public QTcpSocket
{
public:
    PythonQtShell_QTcpSocket(QObject*  parent = 0):QTcpSocket(parent),_wrapper(NULL) {};

virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  canReadLine() const;
virtual bool  atEnd() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  waitForReadyRead(int  msecs);
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  bytesAvailable() const;
virtual qint64  writeData(const char*  data, qint64  len);
virtual void close();
virtual qint64  bytesToWrite() const;
virtual bool  isSequential() const;
virtual qint64  size() const;
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTcpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QTcpSocket* new_QTcpSocket(QObject*  parent = 0);
void delete_QTcpSocket(QTcpSocket* obj) { delete obj; } 
};





class PythonQtShell_QUdpSocket : public QUdpSocket
{
public:
    PythonQtShell_QUdpSocket(QObject*  parent = 0):QUdpSocket(parent),_wrapper(NULL) {};

virtual bool  reset();
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  canReadLine() const;
virtual bool  atEnd() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  waitForReadyRead(int  msecs);
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  bytesAvailable() const;
virtual qint64  writeData(const char*  data, qint64  len);
virtual void close();
virtual qint64  bytesToWrite() const;
virtual bool  isSequential() const;
virtual qint64  size() const;
virtual bool  seek(qint64  pos);
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUdpSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindFlag )
Q_FLAGS(BindMode )
enum BindFlag{
  DefaultForPlatform = QUdpSocket::DefaultForPlatform,   ShareAddress = QUdpSocket::ShareAddress,   DontShareAddress = QUdpSocket::DontShareAddress,   ReuseAddressHint = QUdpSocket::ReuseAddressHint};
Q_DECLARE_FLAGS(BindMode, BindFlag)
public slots:
QUdpSocket* new_QUdpSocket(QObject*  parent = 0);
void delete_QUdpSocket(QUdpSocket* obj) { delete obj; } 
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port);
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port, QUdpSocket::BindMode  mode);
   bool  bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QUdpSocket::BindMode  mode);
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port = 0);
   bool  bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port);
   qint64  readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host = 0, unsigned short*  port = 0);
};





class PythonQtShell_QUrlInfo : public QUrlInfo
{
public:
    PythonQtShell_QUrlInfo():QUrlInfo(),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable):QUrlInfo(name, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable):QUrlInfo(url, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable),_wrapper(NULL) {};
    PythonQtShell_QUrlInfo(const QUrlInfo&  ui):QUrlInfo(ui),_wrapper(NULL) {};

virtual void setFile(bool  b);
virtual void setWritable(bool  b);
virtual void setName(const QString&  name);
virtual void setReadable(bool  b);
virtual void setPermissions(int  p);
virtual void setGroup(const QString&  s);
virtual void setSize(qint64  size);
virtual void setLastModified(const QDateTime&  dt);
virtual void setDir(bool  b);
virtual void setOwner(const QString&  s);
virtual void setSymLink(bool  b);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUrlInfo : public QUrlInfo
{ public:
inline void promoted_setFile(bool  b) { QUrlInfo::setFile(b); }
inline void promoted_setWritable(bool  b) { QUrlInfo::setWritable(b); }
inline void promoted_setName(const QString&  name) { QUrlInfo::setName(name); }
inline void promoted_setReadable(bool  b) { QUrlInfo::setReadable(b); }
inline void promoted_setPermissions(int  p) { QUrlInfo::setPermissions(p); }
inline void promoted_setGroup(const QString&  s) { QUrlInfo::setGroup(s); }
inline void promoted_setSize(qint64  size) { QUrlInfo::setSize(size); }
inline void promoted_setLastModified(const QDateTime&  dt) { QUrlInfo::setLastModified(dt); }
inline void promoted_setDir(bool  b) { QUrlInfo::setDir(b); }
inline void promoted_setOwner(const QString&  s) { QUrlInfo::setOwner(s); }
inline void promoted_setSymLink(bool  b) { QUrlInfo::setSymLink(b); }
};

class PythonQtWrapper_QUrlInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PermissionSpec )
enum PermissionSpec{
  ReadOwner = QUrlInfo::ReadOwner,   WriteOwner = QUrlInfo::WriteOwner,   ExeOwner = QUrlInfo::ExeOwner,   ReadGroup = QUrlInfo::ReadGroup,   WriteGroup = QUrlInfo::WriteGroup,   ExeGroup = QUrlInfo::ExeGroup,   ReadOther = QUrlInfo::ReadOther,   WriteOther = QUrlInfo::WriteOther,   ExeOther = QUrlInfo::ExeOther};
public slots:
QUrlInfo* new_QUrlInfo();
QUrlInfo* new_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable);
QUrlInfo* new_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable);
QUrlInfo* new_QUrlInfo(const QUrlInfo&  ui);
void delete_QUrlInfo(QUrlInfo* obj) { delete obj; } 
   bool  isSymLink(QUrlInfo* theWrappedObject) const;
   void setFile(QUrlInfo* theWrappedObject, bool  b);
   bool  isValid(QUrlInfo* theWrappedObject) const;
   bool  isWritable(QUrlInfo* theWrappedObject) const;
   void setWritable(QUrlInfo* theWrappedObject, bool  b);
   void setName(QUrlInfo* theWrappedObject, const QString&  name);
   QString  name(QUrlInfo* theWrappedObject) const;
   void setReadable(QUrlInfo* theWrappedObject, bool  b);
   bool  isDir(QUrlInfo* theWrappedObject) const;
   void setPermissions(QUrlInfo* theWrappedObject, int  p);
   bool  static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QDateTime  lastModified(QUrlInfo* theWrappedObject) const;
   bool  isExecutable(QUrlInfo* theWrappedObject) const;
   void setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setGroup(QUrlInfo* theWrappedObject, const QString&  s);
   bool  static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   bool  operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const;
   QString  owner(QUrlInfo* theWrappedObject) const;
   void setSize(QUrlInfo* theWrappedObject, qint64  size);
   void setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setDir(QUrlInfo* theWrappedObject, bool  b);
   bool  isFile(QUrlInfo* theWrappedObject) const;
   bool  isReadable(QUrlInfo* theWrappedObject) const;
   void setOwner(QUrlInfo* theWrappedObject, const QString&  s);
   QString  group(QUrlInfo* theWrappedObject) const;
   qint64  size(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   int  permissions(QUrlInfo* theWrappedObject) const;
   QDateTime  lastRead(QUrlInfo* theWrappedObject) const;
   void setSymLink(QUrlInfo* theWrappedObject, bool  b);
};


