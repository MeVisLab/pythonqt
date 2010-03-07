#include <PythonQt.h>
#include <QDateTime>
#include <QObject>
#include <QVariant>
#include <qabstractnetworkcache.h>
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
#include <qnetworkcookiejar.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qstringlist.h>
#include <qtcpsocket.h>
#include <qurl.h>
#include <qurlinfo.h>



class PythonQtShell_QAbstractNetworkCache : public QAbstractNetworkCache
{
public:
    PythonQtShell_QAbstractNetworkCache(QObject*  parent = 0):QAbstractNetworkCache(parent),_wrapper(NULL) {};

virtual bool  remove(const QUrl&  url);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual void clear();
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);
virtual void insert(QIODevice*  device);
virtual qint64  cacheSize() const;
virtual QIODevice*  data(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractNetworkCache : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractNetworkCache(QAbstractNetworkCache* obj) { delete obj; } 
};





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
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesToWrite() const;
virtual qint64  size() const;
virtual qint64  pos() const;
virtual bool  reset();
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  seek(qint64  pos);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
inline qint64  promoted_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketType SocketError NetworkLayerProtocol SocketOption SocketState )
enum SocketType{
  TcpSocket = QAbstractSocket::TcpSocket,   UdpSocket = QAbstractSocket::UdpSocket,   UnknownSocketType = QAbstractSocket::UnknownSocketType};
enum SocketError{
  ConnectionRefusedError = QAbstractSocket::ConnectionRefusedError,   RemoteHostClosedError = QAbstractSocket::RemoteHostClosedError,   HostNotFoundError = QAbstractSocket::HostNotFoundError,   SocketAccessError = QAbstractSocket::SocketAccessError,   SocketResourceError = QAbstractSocket::SocketResourceError,   SocketTimeoutError = QAbstractSocket::SocketTimeoutError,   DatagramTooLargeError = QAbstractSocket::DatagramTooLargeError,   NetworkError = QAbstractSocket::NetworkError,   AddressInUseError = QAbstractSocket::AddressInUseError,   SocketAddressNotAvailableError = QAbstractSocket::SocketAddressNotAvailableError,   UnsupportedSocketOperationError = QAbstractSocket::UnsupportedSocketOperationError,   UnfinishedSocketOperationError = QAbstractSocket::UnfinishedSocketOperationError,   ProxyAuthenticationRequiredError = QAbstractSocket::ProxyAuthenticationRequiredError,   SslHandshakeFailedError = QAbstractSocket::SslHandshakeFailedError,   ProxyConnectionRefusedError = QAbstractSocket::ProxyConnectionRefusedError,   ProxyConnectionClosedError = QAbstractSocket::ProxyConnectionClosedError,   ProxyConnectionTimeoutError = QAbstractSocket::ProxyConnectionTimeoutError,   ProxyNotFoundError = QAbstractSocket::ProxyNotFoundError,   ProxyProtocolError = QAbstractSocket::ProxyProtocolError,   UnknownSocketError = QAbstractSocket::UnknownSocketError};
enum NetworkLayerProtocol{
  IPv4Protocol = QAbstractSocket::IPv4Protocol,   IPv6Protocol = QAbstractSocket::IPv6Protocol,   UnknownNetworkLayerProtocol = QAbstractSocket::UnknownNetworkLayerProtocol};
enum SocketOption{
  LowDelayOption = QAbstractSocket::LowDelayOption,   KeepAliveOption = QAbstractSocket::KeepAliveOption};
enum SocketState{
  UnconnectedState = QAbstractSocket::UnconnectedState,   HostLookupState = QAbstractSocket::HostLookupState,   ConnectingState = QAbstractSocket::ConnectingState,   ConnectedState = QAbstractSocket::ConnectedState,   BoundState = QAbstractSocket::BoundState,   ListeningState = QAbstractSocket::ListeningState,   ClosingState = QAbstractSocket::ClosingState};
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   qint64  readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   int  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   void close(QAbstractSocket* theWrappedObject);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   qint64  readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   void abort(QAbstractSocket* theWrappedObject);
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
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
   QString  realm(QAuthenticator* theWrappedObject) const;
   bool  operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   bool  isNull(QAuthenticator* theWrappedObject) const;
   QString  user(QAuthenticator* theWrappedObject) const;
};





class PythonQtShell_QFtp : public QFtp
{
public:
    PythonQtShell_QFtp(QObject*  parent = 0):QFtp(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   QFtp::Command  currentCommand(QFtp* theWrappedObject) const;
   QIODevice*  currentDevice(QFtp* theWrappedObject) const;
   int  currentId(QFtp* theWrappedObject) const;
   int  cd(QFtp* theWrappedObject, const QString&  dir);
   QFtp::Error  error(QFtp* theWrappedObject) const;
   qint64  bytesAvailable(QFtp* theWrappedObject) const;
   int  rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname);
   int  login(QFtp* theWrappedObject, const QString&  user = QString(), const QString&  password = QString());
   int  remove(QFtp* theWrappedObject, const QString&  file);
   int  close(QFtp* theWrappedObject);
   int  get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev = 0, QFtp::TransferType  type = QFtp::Binary);
   bool  hasPendingCommands(QFtp* theWrappedObject) const;
   QString  errorString(QFtp* theWrappedObject) const;
   int  mkdir(QFtp* theWrappedObject, const QString&  dir);
   int  rmdir(QFtp* theWrappedObject, const QString&  dir);
   QFtp::State  state(QFtp* theWrappedObject) const;
   int  connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port = 21);
   int  put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   int  put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type = QFtp::Binary);
   QByteArray  readAll(QFtp* theWrappedObject);
   void clearPendingCommands(QFtp* theWrappedObject);
   int  rawCommand(QFtp* theWrappedObject, const QString&  command);
   int  setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port);
   qint64  read(QFtp* theWrappedObject, char*  data, qint64  maxlen);
   int  setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode);
   int  list(QFtp* theWrappedObject, const QString&  dir = QString());
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
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   bool  operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   bool  operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   bool  isInSubnet(QHostAddress* theWrappedObject, const QPair<QHostAddress , int >&  subnet) const;
   bool  isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const;
   bool  isNull(QHostAddress* theWrappedObject) const;
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   void clear(QHostAddress* theWrappedObject);
   QString  scopeId(QHostAddress* theWrappedObject) const;
   QPair<QHostAddress , int >  static_QHostAddress_parseSubnet(const QString&  subnet);
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
    QString py_toString(QHostAddress*);
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
   void static_QHostInfo_abortHostLookup(int  lookupId);
   int  lookupId(QHostInfo* theWrappedObject) const;
   void setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses);
   QString  hostName(QHostInfo* theWrappedObject) const;
   QList<QHostAddress >  addresses(QHostInfo* theWrappedObject) const;
   void setLookupId(QHostInfo* theWrappedObject, int  id);
   QHostInfo::HostInfoError  error(QHostInfo* theWrappedObject) const;
   void setHostName(QHostInfo* theWrappedObject, const QString&  name);
   QString  errorString(QHostInfo* theWrappedObject) const;
   int  static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member);
   QString  static_QHostInfo_localDomainName();
   void setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error);
};





class PythonQtShell_QHttp : public QHttp
{
public:
    PythonQtShell_QHttp(QObject*  parent = 0):QHttp(parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0, QObject*  parent = 0):QHttp(hostname, mode, port, parent),_wrapper(NULL) {};
    PythonQtShell_QHttp(const QString&  hostname, unsigned short  port = 80, QObject*  parent = 0):QHttp(hostname, port, parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   QHttp::Error  error(QHttp* theWrappedObject) const;
   qint64  bytesAvailable(QHttp* theWrappedObject) const;
   int  currentId(QHttp* theWrappedObject) const;
   int  post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to = 0);
   int  post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to = 0);
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port = 0);
   int  close(QHttp* theWrappedObject);
   int  setSocket(QHttp* theWrappedObject, QTcpSocket*  socket);
   int  setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password = QString());
   int  get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to = 0);
   QString  errorString(QHttp* theWrappedObject) const;
   int  head(QHttp* theWrappedObject, const QString&  path);
   QHttp::State  state(QHttp* theWrappedObject) const;
   QIODevice*  currentDestinationDevice(QHttp* theWrappedObject) const;
   void clearPendingRequests(QHttp* theWrappedObject);
   QByteArray  readAll(QHttp* theWrappedObject);
   QHttpResponseHeader  lastResponse(QHttp* theWrappedObject) const;
   int  setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port = 80);
   QIODevice*  currentSourceDevice(QHttp* theWrappedObject) const;
   QHttpRequestHeader  currentRequest(QHttp* theWrappedObject) const;
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to = 0);
   int  request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device = 0, QIODevice*  to = 0);
   int  setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy);
   int  setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username = QString(), const QString&  password = QString());
   bool  hasPendingRequests(QHttp* theWrappedObject) const;
   qint64  read(QHttp* theWrappedObject, char*  data, qint64  maxlen);
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
   bool  isValid(QHttpHeader* theWrappedObject) const;
   QList<QPair<QString , QString >  >  values(QHttpHeader* theWrappedObject) const;
   bool  hasKey(QHttpHeader* theWrappedObject, const QString&  key) const;
   QString  toString(QHttpHeader* theWrappedObject) const;
   bool  hasContentLength(QHttpHeader* theWrappedObject) const;
   bool  hasContentType(QHttpHeader* theWrappedObject) const;
   QStringList  allValues(QHttpHeader* theWrappedObject, const QString&  key) const;
   void addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   QString  contentType(QHttpHeader* theWrappedObject) const;
   QStringList  keys(QHttpHeader* theWrappedObject) const;
   uint  contentLength(QHttpHeader* theWrappedObject) const;
   void removeValue(QHttpHeader* theWrappedObject, const QString&  key);
   QString  value(QHttpHeader* theWrappedObject, const QString&  key) const;
   void setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values);
   void removeAllValues(QHttpHeader* theWrappedObject, const QString&  key);
   bool  parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number);
   void setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value);
   void setContentType(QHttpHeader* theWrappedObject, const QString&  type);
    QString py_toString(QHttpHeader*);
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
virtual int  majorVersion() const;
virtual int  minorVersion() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QHttpRequestHeader : public QHttpRequestHeader
{ public:
inline bool  promoted_parseLine(const QString&  line, int  number) { return QHttpRequestHeader::parseLine(line, number); }
inline QString  promoted_toString() const { return QHttpRequestHeader::toString(); }
inline int  promoted_majorVersion() const { return QHttpRequestHeader::majorVersion(); }
inline int  promoted_minorVersion() const { return QHttpRequestHeader::minorVersion(); }
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
   int  majorVersion(QHttpRequestHeader* theWrappedObject) const;
   QString  path(QHttpRequestHeader* theWrappedObject) const;
   int  minorVersion(QHttpRequestHeader* theWrappedObject) const;
   void setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer = 1, int  minorVer = 1);
    QString py_toString(QHttpRequestHeader*);
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
   int  statusCode(QHttpResponseHeader* theWrappedObject) const;
   bool  parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number);
   QString  toString(QHttpResponseHeader* theWrappedObject) const;
   void setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text = QString(), int  majorVer = 1, int  minorVer = 1);
   int  minorVersion(QHttpResponseHeader* theWrappedObject) const;
   int  majorVersion(QHttpResponseHeader* theWrappedObject) const;
   QString  reasonPhrase(QHttpResponseHeader* theWrappedObject) const;
    QString py_toString(QHttpResponseHeader*);
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
void py_set_c(QIPv6Address* theWrappedObject, unsigned char [16] c){ theWrappedObject->c = c; }
unsigned char [16] py_get_c(QIPv6Address* theWrappedObject){ return theWrappedObject->c; }
};





class PythonQtShell_QLocalServer : public QLocalServer
{
public:
    PythonQtShell_QLocalServer(QObject*  parent = 0):QLocalServer(parent),_wrapper(NULL) {};

virtual QLocalSocket*  nextPendingConnection();
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   QString  serverName(QLocalServer* theWrappedObject) const;
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
   bool  isListening(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   void close(QLocalServer* theWrappedObject);
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   QString  errorString(QLocalServer* theWrappedObject) const;
   bool  static_QLocalServer_removeServer(const QString&  name);
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
};





class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = 0):QLocalSocket(parent),_wrapper(NULL) {};

virtual bool  waitForReadyRead(int  msecs = 30000);
virtual bool  isSequential() const;
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual qint64  bytesToWrite() const;
virtual void close();
virtual bool  canReadLine() const;
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);
virtual qint64  bytesAvailable() const;
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual void childEvent(QChildEvent*  arg__1);
virtual qint64  size() const;
virtual qint64  pos() const;
virtual bool  reset();
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  atEnd() const;
virtual bool  seek(qint64  pos);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline bool  promoted_isSequential() const { return QLocalSocket::isSequential(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
inline qint64  promoted_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline void promoted_close() { QLocalSocket::close(); }
inline bool  promoted_canReadLine() const { return QLocalSocket::canReadLine(); }
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
   QString  serverName(QLocalSocket* theWrappedObject) const;
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   bool  isValid(QLocalSocket* theWrappedObject) const;
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   bool  waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  isSequential(QLocalSocket* theWrappedObject) const;
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000);
   qint64  bytesToWrite(QLocalSocket* theWrappedObject) const;
   void close(QLocalSocket* theWrappedObject);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   bool  canReadLine(QLocalSocket* theWrappedObject) const;
   quintptr  socketDescriptor(QLocalSocket* theWrappedObject) const;
   qint64  writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2);
   bool  setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState = QLocalSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  flush(QLocalSocket* theWrappedObject);
   qint64  bytesAvailable(QLocalSocket* theWrappedObject) const;
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   void abort(QLocalSocket* theWrappedObject);
   qint64  readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2);
};





class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = 0):QNetworkAccessManager(parent),_wrapper(NULL) {};

virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   DeleteOperation = QNetworkAccessManager::DeleteOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = 0);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   void setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory);
   void setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache);
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkProxyFactory*  proxyFactory(QNetworkAccessManager* theWrappedObject) const;
   QAbstractNetworkCache*  cache(QNetworkAccessManager* theWrappedObject) const;
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
   int  prefixLength(QNetworkAddressEntry* theWrappedObject) const;
   void setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length);
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   bool  operator_equal(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
};





class PythonQtWrapper_QNetworkCacheMetaData : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCacheMetaData* new_QNetworkCacheMetaData();
QNetworkCacheMetaData* new_QNetworkCacheMetaData(const QNetworkCacheMetaData&  other);
void delete_QNetworkCacheMetaData(QNetworkCacheMetaData* obj) { delete obj; } 
   QHash<QNetworkRequest::Attribute , QVariant >  attributes(QNetworkCacheMetaData* theWrappedObject) const;
   QDateTime  expirationDate(QNetworkCacheMetaData* theWrappedObject) const;
   void setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes);
   bool  isValid(QNetworkCacheMetaData* theWrappedObject) const;
   void setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow);
   QDateTime  lastModified(QNetworkCacheMetaData* theWrappedObject) const;
   bool  operator_equal(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  headers);
   bool  saveToDisk(QNetworkCacheMetaData* theWrappedObject) const;
   QUrl  url(QNetworkCacheMetaData* theWrappedObject) const;
   QList<QPair<QByteArray , QByteArray >  >  rawHeaders(QNetworkCacheMetaData* theWrappedObject) const;
   void setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url);
   void writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
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
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   void setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable);
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
   bool  operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   bool  isHttpOnly(QNetworkCookie* theWrappedObject) const;
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QString  path(QNetworkCookie* theWrappedObject) const;
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
    QString py_toString(QNetworkCookie*);
};





class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = 0):QNetworkCookieJar(parent),_wrapper(NULL) {};

virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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





class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = 0):QNetworkDiskCache(parent),_wrapper(NULL) {};

virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  data(const QUrl&  url);
virtual qint64  cacheSize() const;
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual void insert(QIODevice*  device);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);
virtual qint64  expire();
virtual bool  remove(const QUrl&  url);
virtual void clear();
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline QNetworkCacheMetaData  promoted_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
inline QIODevice*  promoted_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline qint64  promoted_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline QIODevice*  promoted_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline void promoted_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline void promoted_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
inline qint64  promoted_expire() { return QNetworkDiskCache::expire(); }
inline bool  promoted_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline void promoted_clear() { QNetworkDiskCache::clear(); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = 0);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; } 
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   QNetworkCacheMetaData  metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QIODevice*  data(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   qint64  cacheSize(QNetworkDiskCache* theWrappedObject) const;
   QIODevice*  prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   void insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device);
   void updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   bool  remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
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
   QList<QNetworkAddressEntry >  addressEntries(QNetworkInterface* theWrappedObject) const;
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QString  humanReadableName(QNetworkInterface* theWrappedObject) const;
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   int  index(QNetworkInterface* theWrappedObject) const;
   QString  name(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
    QString py_toString(QNetworkInterface*);
};





class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProxyType Capability )
Q_FLAGS(Capabilities )
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
enum Capability{
  TunnelingCapability = QNetworkProxy::TunnelingCapability,   ListeningCapability = QNetworkProxy::ListeningCapability,   UdpTunnelingCapability = QNetworkProxy::UdpTunnelingCapability,   CachingCapability = QNetworkProxy::CachingCapability,   HostNameLookupCapability = QNetworkProxy::HostNameLookupCapability};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   void setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab);
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   bool  operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   QString  user(QNetworkProxy* theWrappedObject) const;
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   QNetworkProxy::Capabilities  capabilities(QNetworkProxy* theWrappedObject) const;
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
};





class PythonQtShell_QNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    PythonQtShell_QNetworkProxyFactory():QNetworkProxyFactory(),_wrapper(NULL) {};

virtual QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery());

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNetworkProxyFactory : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkProxyFactory* new_QNetworkProxyFactory();
void delete_QNetworkProxyFactory(QNetworkProxyFactory* obj) { delete obj; } 
   void static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable);
   void static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory);
   QList<QNetworkProxy >  static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query);
   QList<QNetworkProxy >  static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query = QNetworkProxyQuery());
};





class PythonQtWrapper_QNetworkProxyQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryType )
enum QueryType{
  TcpSocket = QNetworkProxyQuery::TcpSocket,   UdpSocket = QNetworkProxyQuery::UdpSocket,   TcpServer = QNetworkProxyQuery::TcpServer,   UrlRequest = QNetworkProxyQuery::UrlRequest};
public slots:
QNetworkProxyQuery* new_QNetworkProxyQuery();
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkProxyQuery&  other);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
void delete_QNetworkProxyQuery(QNetworkProxyQuery* obj) { delete obj; } 
   void setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag);
   void setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type);
   void setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port);
   bool  operator_equal(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   int  localPort(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkProxyQuery::QueryType  queryType(QNetworkProxyQuery* theWrappedObject) const;
   void setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname);
   void setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port);
   QUrl  url(QNetworkProxyQuery* theWrappedObject) const;
   QString  protocolTag(QNetworkProxyQuery* theWrappedObject) const;
   int  peerPort(QNetworkProxyQuery* theWrappedObject) const;
   QString  peerHostName(QNetworkProxyQuery* theWrappedObject) const;
   void setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url);
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = 0):QNetworkReply(parent),_wrapper(NULL) {};

virtual void close();
virtual void setReadBufferSize(qint64  size);
virtual bool  isSequential() const;
virtual void abort();
virtual void ignoreSslErrors();
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  size() const;
virtual qint64  pos() const;
virtual qint64  bytesToWrite() const;
virtual qint64  bytesAvailable() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  reset();
virtual bool  waitForReadyRead(int  msecs);
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  atEnd() const;
virtual bool  seek(qint64  pos);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_close() { QNetworkReply::close(); }
inline void promoted_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline bool  promoted_isSequential() const { return QNetworkReply::isSequential(); }
inline void promoted_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  isFinished(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   void close(QNetworkReply* theWrappedObject);
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   void ignoreSslErrors(QNetworkReply* theWrappedObject, const QList<QSslError >&  errors);
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   bool  isRunning(QNetworkReply* theWrappedObject) const;
   bool  isSequential(QNetworkReply* theWrappedObject) const;
   void setSslConfiguration(QNetworkReply* theWrappedObject, const QSslConfiguration&  configuration);
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   QUrl  url(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   qint64  writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len);
   QSslConfiguration  sslConfiguration(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
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
  HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,   HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,   RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,   ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,   CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,   CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,   SourceIsFromCacheAttribute = QNetworkRequest::SourceIsFromCacheAttribute,   DoNotBufferUploadDataAttribute = QNetworkRequest::DoNotBufferUploadDataAttribute,   HttpPipeliningAllowedAttribute = QNetworkRequest::HttpPipeliningAllowedAttribute,   HttpPipeliningWasUsedAttribute = QNetworkRequest::HttpPipeliningWasUsedAttribute,   User = QNetworkRequest::User,   UserMax = QNetworkRequest::UserMax};
public slots:
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url = QUrl());
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; } 
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   bool  operator_equal(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   void setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object);
   QObject*  originatingObject(QNetworkRequest* theWrappedObject) const;
   void setSslConfiguration(QNetworkRequest* theWrappedObject, const QSslConfiguration&  configuration);
   QUrl  url(QNetworkRequest* theWrappedObject) const;
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   QSslConfiguration  sslConfiguration(QNetworkRequest* theWrappedObject) const;
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
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





class PythonQtWrapper_QSslCertificate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubjectInfo )
enum SubjectInfo{
  Organization = QSslCertificate::Organization,   CommonName = QSslCertificate::CommonName,   LocalityName = QSslCertificate::LocalityName,   OrganizationalUnitName = QSslCertificate::OrganizationalUnitName,   CountryName = QSslCertificate::CountryName,   StateOrProvinceName = QSslCertificate::StateOrProvinceName};
public slots:
QSslCertificate* new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QByteArray&  encoded = QByteArray(), QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QSslCertificate&  other);
void delete_QSslCertificate(QSslCertificate* obj) { delete obj; } 
   bool  isValid(QSslCertificate* theWrappedObject) const;
   QDateTime  effectiveDate(QSslCertificate* theWrappedObject) const;
   QSslCertificate*  operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other);
   QByteArray  version(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   QByteArray  toPem(QSslCertificate* theWrappedObject) const;
   QSslKey  publicKey(QSslCertificate* theWrappedObject) const;
   QString  issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const;
   QString  issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QString  subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  tag) const;
   QString  subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QByteArray  serialNumber(QSslCertificate* theWrappedObject) const;
   bool  operator_equal(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QByteArray  toDer(QSslCertificate* theWrappedObject) const;
   QDateTime  expiryDate(QSslCertificate* theWrappedObject) const;
   bool  isNull(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format = QSsl::Pem);
   QByteArray  digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm = QCryptographicHash::Md5) const;
   QMultiMap<QSsl::AlternateNameEntryType , QString >  alternateSubjectNames(QSslCertificate* theWrappedObject) const;
   void clear(QSslCertificate* theWrappedObject);
   Qt::HANDLE  handle(QSslCertificate* theWrappedObject) const;
    QString py_toString(QSslCertificate*);
};





class PythonQtWrapper_QSslCipher : public QObject
{ Q_OBJECT
public:
public slots:
QSslCipher* new_QSslCipher();
QSslCipher* new_QSslCipher(const QSslCipher&  other);
QSslCipher* new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol);
void delete_QSslCipher(QSslCipher* obj) { delete obj; } 
   QSsl::SslProtocol  protocol(QSslCipher* theWrappedObject) const;
   QSslCipher*  operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other);
   int  supportedBits(QSslCipher* theWrappedObject) const;
   bool  operator_equal(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QString  name(QSslCipher* theWrappedObject) const;
   QString  keyExchangeMethod(QSslCipher* theWrappedObject) const;
   QString  authenticationMethod(QSslCipher* theWrappedObject) const;
   int  usedBits(QSslCipher* theWrappedObject) const;
   QString  encryptionMethod(QSslCipher* theWrappedObject) const;
   bool  isNull(QSslCipher* theWrappedObject) const;
   QString  protocolString(QSslCipher* theWrappedObject) const;
    QString py_toString(QSslCipher*);
};





class PythonQtWrapper_QSslConfiguration : public QObject
{ Q_OBJECT
public:
public slots:
QSslConfiguration* new_QSslConfiguration();
QSslConfiguration* new_QSslConfiguration(const QSslConfiguration&  other);
void delete_QSslConfiguration(QSslConfiguration* obj) { delete obj; } 
   QSslCipher  sessionCipher(QSslConfiguration* theWrappedObject) const;
   void setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   void setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   QList<QSslCertificate >  peerCertificateChain(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslConfiguration* theWrappedObject) const;
   void setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key);
   QSslConfiguration*  operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other);
   QList<QSslCipher >  ciphers(QSslConfiguration* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslConfiguration* theWrappedObject) const;
   void setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth);
   QSsl::SslProtocol  protocol(QSslConfiguration* theWrappedObject) const;
   bool  operator_equal(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
   bool  isNull(QSslConfiguration* theWrappedObject) const;
   void setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration);
   QSslConfiguration  static_QSslConfiguration_defaultConfiguration();
   int  peerVerifyDepth(QSslConfiguration* theWrappedObject) const;
   void setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   QList<QSslCertificate >  caCertificates(QSslConfiguration* theWrappedObject) const;
   void setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol);
   QSslKey  privateKey(QSslConfiguration* theWrappedObject) const;
};





class PythonQtWrapper_QSslError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslError )
enum SslError{
  NoError = QSslError::NoError,   UnableToGetIssuerCertificate = QSslError::UnableToGetIssuerCertificate,   UnableToDecryptCertificateSignature = QSslError::UnableToDecryptCertificateSignature,   UnableToDecodeIssuerPublicKey = QSslError::UnableToDecodeIssuerPublicKey,   CertificateSignatureFailed = QSslError::CertificateSignatureFailed,   CertificateNotYetValid = QSslError::CertificateNotYetValid,   CertificateExpired = QSslError::CertificateExpired,   InvalidNotBeforeField = QSslError::InvalidNotBeforeField,   InvalidNotAfterField = QSslError::InvalidNotAfterField,   SelfSignedCertificate = QSslError::SelfSignedCertificate,   SelfSignedCertificateInChain = QSslError::SelfSignedCertificateInChain,   UnableToGetLocalIssuerCertificate = QSslError::UnableToGetLocalIssuerCertificate,   UnableToVerifyFirstCertificate = QSslError::UnableToVerifyFirstCertificate,   CertificateRevoked = QSslError::CertificateRevoked,   InvalidCaCertificate = QSslError::InvalidCaCertificate,   PathLengthExceeded = QSslError::PathLengthExceeded,   InvalidPurpose = QSslError::InvalidPurpose,   CertificateUntrusted = QSslError::CertificateUntrusted,   CertificateRejected = QSslError::CertificateRejected,   SubjectIssuerMismatch = QSslError::SubjectIssuerMismatch,   AuthorityIssuerSerialNumberMismatch = QSslError::AuthorityIssuerSerialNumberMismatch,   NoPeerCertificate = QSslError::NoPeerCertificate,   HostNameMismatch = QSslError::HostNameMismatch,   NoSslSupport = QSslError::NoSslSupport,   UnspecifiedError = QSslError::UnspecifiedError};
public slots:
QSslError* new_QSslError();
QSslError* new_QSslError(QSslError::SslError  error);
QSslError* new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate);
QSslError* new_QSslError(const QSslError&  other);
void delete_QSslError(QSslError* obj) { delete obj; } 
   QSslError*  operator_assign(QSslError* theWrappedObject, const QSslError&  other);
   QSslError::SslError  error(QSslError* theWrappedObject) const;
   QString  errorString(QSslError* theWrappedObject) const;
   bool  operator_equal(QSslError* theWrappedObject, const QSslError&  other) const;
   QSslCertificate  certificate(QSslError* theWrappedObject) const;
    QString py_toString(QSslError*);
};


