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
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkconfigmanager.h>
#include <qnetworkconfiguration.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qnetworksession.h>
#include <qobject.h>
#include <qpair.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qstringlist.h>
#include <qurl.h>



class PythonQtShell_QAbstractNetworkCache : public QAbstractNetworkCache
{
public:
    PythonQtShell_QAbstractNetworkCache(QObject*  parent = 0):QAbstractNetworkCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractNetworkCache();

virtual qint64  cacheSize() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void customEvent(QEvent*  arg__1);
virtual QIODevice*  data(const QUrl&  url);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractNetworkCache : public QAbstractNetworkCache
{ public:
inline qint64  promoted_cacheSize() const { return this->cacheSize(); }
inline void promoted_clear() { this->clear(); }
inline QIODevice*  promoted_data(const QUrl&  url) { return this->data(url); }
inline void promoted_insert(QIODevice*  device) { this->insert(device); }
inline QNetworkCacheMetaData  promoted_metaData(const QUrl&  url) { return this->metaData(url); }
inline QIODevice*  promoted_prepare(const QNetworkCacheMetaData&  metaData) { return this->prepare(metaData); }
inline bool  promoted_remove(const QUrl&  url) { return this->remove(url); }
inline void promoted_updateMetaData(const QNetworkCacheMetaData&  metaData) { this->updateMetaData(metaData); }
};

class PythonQtWrapper_QAbstractNetworkCache : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractNetworkCache* new_QAbstractNetworkCache(QObject*  parent = 0);
void delete_QAbstractNetworkCache(QAbstractNetworkCache* obj) { delete obj; } 
   qint64  cacheSize(QAbstractNetworkCache* theWrappedObject) const;
   void clear(QAbstractNetworkCache* theWrappedObject);
   QIODevice*  data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   void insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device);
   QNetworkCacheMetaData  metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   QIODevice*  prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   bool  remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   void updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
};





class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void customEvent(QEvent*  arg__1);
virtual void disconnectFromHost();
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline bool  promoted_atEnd() const { return QAbstractSocket::atEnd(); }
inline qint64  promoted_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline qint64  promoted_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QAbstractSocket::canReadLine(); }
inline void promoted_close() { QAbstractSocket::close(); }
inline void promoted_connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite) { QAbstractSocket::connectToHost(address, port, mode); }
inline void promoted_connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QAbstractSocket::connectToHost(hostName, port, mode, protocol); }
inline void promoted_disconnectFromHost() { QAbstractSocket::disconnectFromHost(); }
inline bool  promoted_isSequential() const { return QAbstractSocket::isSequential(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline void promoted_resume() { QAbstractSocket::resume(); }
inline void promoted_setLocalAddress(const QHostAddress&  address) { QAbstractSocket::setLocalAddress(address); }
inline void promoted_setLocalPort(unsigned short  port) { QAbstractSocket::setLocalPort(port); }
inline void promoted_setPeerAddress(const QHostAddress&  address) { QAbstractSocket::setPeerAddress(address); }
inline void promoted_setPeerName(const QString&  name) { QAbstractSocket::setPeerName(name); }
inline void promoted_setPeerPort(unsigned short  port) { QAbstractSocket::setPeerPort(port); }
inline void promoted_setReadBufferSize(qint64  size) { QAbstractSocket::setReadBufferSize(size); }
inline void promoted_setSocketError(QAbstractSocket::SocketError  socketError) { QAbstractSocket::setSocketError(socketError); }
inline void promoted_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QAbstractSocket::setSocketOption(option, value); }
inline void promoted_setSocketState(QAbstractSocket::SocketState  state) { QAbstractSocket::setSocketState(state); }
inline QVariant  promoted_socketOption(QAbstractSocket::SocketOption  option) { return QAbstractSocket::socketOption(option); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline bool  promoted_waitForConnected(int  msecs = 30000) { return QAbstractSocket::waitForConnected(msecs); }
inline bool  promoted_waitForDisconnected(int  msecs = 30000) { return QAbstractSocket::waitForDisconnected(msecs); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindFlag PauseMode )
Q_FLAGS(BindMode PauseModes )
enum BindFlag{
  DefaultForPlatform = QAbstractSocket::DefaultForPlatform,   ShareAddress = QAbstractSocket::ShareAddress,   DontShareAddress = QAbstractSocket::DontShareAddress,   ReuseAddressHint = QAbstractSocket::ReuseAddressHint};
enum PauseMode{
  PauseNever = QAbstractSocket::PauseNever,   PauseOnSslErrors = QAbstractSocket::PauseOnSslErrors};
Q_DECLARE_FLAGS(BindMode, BindFlag)
Q_DECLARE_FLAGS(PauseModes, PauseMode)
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   void abort(QAbstractSocket* theWrappedObject);
   bool  atEnd(QAbstractSocket* theWrappedObject) const;
   bool  bind(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   bool  bind(QAbstractSocket* theWrappedObject, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   qint64  bytesAvailable(QAbstractSocket* theWrappedObject) const;
   qint64  bytesToWrite(QAbstractSocket* theWrappedObject) const;
   bool  canReadLine(QAbstractSocket* theWrappedObject) const;
   void close(QAbstractSocket* theWrappedObject);
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   bool  flush(QAbstractSocket* theWrappedObject);
   bool  isSequential(QAbstractSocket* theWrappedObject) const;
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::PauseModes  pauseMode(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   qint64  readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   qint64  readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen);
   void resume(QAbstractSocket* theWrappedObject);
   void setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setPauseMode(QAbstractSocket* theWrappedObject, QAbstractSocket::PauseModes  pauseMode);
   void setPeerAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setPeerName(QAbstractSocket* theWrappedObject, const QString&  name);
   void setPeerPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   void setSocketError(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketError  socketError);
   void setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   void setSocketState(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketState  state);
   QVariant  socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   qint64  writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len);
};





class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   bool  isNull(QAuthenticator* theWrappedObject) const;
   bool  __ne__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   bool  __eq__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   QVariant  option(QAuthenticator* theWrappedObject, const QString&  opt) const;
   QHash<QString , QVariant >  options(QAuthenticator* theWrappedObject) const;
   QString  password(QAuthenticator* theWrappedObject) const;
   QString  realm(QAuthenticator* theWrappedObject) const;
   void setOption(QAuthenticator* theWrappedObject, const QString&  opt, const QVariant&  value);
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
   QString  user(QAuthenticator* theWrappedObject) const;
    bool __nonzero__(QAuthenticator* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QHostAddress : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialAddress )
enum SpecialAddress{
  Null = QHostAddress::Null,   Broadcast = QHostAddress::Broadcast,   LocalHost = QHostAddress::LocalHost,   LocalHostIPv6 = QHostAddress::LocalHostIPv6,   Any = QHostAddress::Any,   AnyIPv6 = QHostAddress::AnyIPv6,   AnyIPv4 = QHostAddress::AnyIPv4};
public slots:
QHostAddress* new_QHostAddress();
QHostAddress* new_QHostAddress(QHostAddress::SpecialAddress  address);
QHostAddress* new_QHostAddress(const QHostAddress&  copy);
QHostAddress* new_QHostAddress(const QIPv6Address&  ip6Addr);
QHostAddress* new_QHostAddress(const QString&  address);
QHostAddress* new_QHostAddress(unsigned int  ip4Addr);
void delete_QHostAddress(QHostAddress* obj) { delete obj; } 
   void clear(QHostAddress* theWrappedObject);
   bool  isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const;
   bool  isInSubnet(QHostAddress* theWrappedObject, const QPair<QHostAddress , int >&  subnet) const;
   bool  isLoopback(QHostAddress* theWrappedObject) const;
   bool  isNull(QHostAddress* theWrappedObject) const;
   bool  __ne__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   bool  __ne__(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   bool  __eq__(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   QPair<QHostAddress , int >  static_QHostAddress_parseSubnet(const QString&  subnet);
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   QString  scopeId(QHostAddress* theWrappedObject) const;
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
    QString py_toString(QHostAddress*);
    bool __nonzero__(QHostAddress* obj) { return !obj->isNull(); }
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
   void static_QHostInfo_abortHostLookup(int  lookupId);
   QList<QHostAddress >  addresses(QHostInfo* theWrappedObject) const;
   QHostInfo::HostInfoError  error(QHostInfo* theWrappedObject) const;
   QString  errorString(QHostInfo* theWrappedObject) const;
   QHostInfo  static_QHostInfo_fromName(const QString&  name);
   QString  hostName(QHostInfo* theWrappedObject) const;
   QString  static_QHostInfo_localDomainName();
   QString  static_QHostInfo_localHostName();
   int  static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member);
   int  lookupId(QHostInfo* theWrappedObject) const;
   void setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses);
   void setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error);
   void setErrorString(QHostInfo* theWrappedObject, const QString&  errorString);
   void setHostName(QHostInfo* theWrappedObject, const QString&  name);
   void setLookupId(QHostInfo* theWrappedObject, int  id);
};





class PythonQtShell_QHttpMultiPart : public QHttpMultiPart
{
public:
    PythonQtShell_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent = 0):QHttpMultiPart(contentType, parent),_wrapper(NULL) {};
    PythonQtShell_QHttpMultiPart(QObject*  parent = 0):QHttpMultiPart(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHttpMultiPart();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHttpMultiPart : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ContentType )
enum ContentType{
  MixedType = QHttpMultiPart::MixedType,   RelatedType = QHttpMultiPart::RelatedType,   FormDataType = QHttpMultiPart::FormDataType,   AlternativeType = QHttpMultiPart::AlternativeType};
public slots:
QHttpMultiPart* new_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent = 0);
QHttpMultiPart* new_QHttpMultiPart(QObject*  parent = 0);
void delete_QHttpMultiPart(QHttpMultiPart* obj) { delete obj; } 
   void append(QHttpMultiPart* theWrappedObject, const QHttpPart&  httpPart);
   QByteArray  boundary(QHttpMultiPart* theWrappedObject) const;
   void setBoundary(QHttpMultiPart* theWrappedObject, const QByteArray&  boundary);
   void setContentType(QHttpMultiPart* theWrappedObject, QHttpMultiPart::ContentType  contentType);
};





class PythonQtWrapper_QHttpPart : public QObject
{ Q_OBJECT
public:
public slots:
QHttpPart* new_QHttpPart();
QHttpPart* new_QHttpPart(const QHttpPart&  other);
void delete_QHttpPart(QHttpPart* obj) { delete obj; } 
   bool  __ne__(QHttpPart* theWrappedObject, const QHttpPart&  other) const;
   QHttpPart*  operator_assign(QHttpPart* theWrappedObject, const QHttpPart&  other);
   bool  __eq__(QHttpPart* theWrappedObject, const QHttpPart&  other) const;
   void setBody(QHttpPart* theWrappedObject, const QByteArray&  body);
   void setBodyDevice(QHttpPart* theWrappedObject, QIODevice*  device);
   void setHeader(QHttpPart* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setRawHeader(QHttpPart* theWrappedObject, const QByteArray&  headerName, const QByteArray&  headerValue);
   void swap(QHttpPart* theWrappedObject, QHttpPart&  other);
};





class PythonQtShell_QIPv6Address : public QIPv6Address
{
public:
    PythonQtShell_QIPv6Address():QIPv6Address(),_wrapper(NULL) {};

   ~PythonQtShell_QIPv6Address();


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

   ~PythonQtShell_QLocalServer();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual QLocalSocket*  nextPendingConnection();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalServer : public QLocalServer
{ public:
inline bool  promoted_hasPendingConnections() const { return QLocalServer::hasPendingConnections(); }
inline void promoted_incomingConnection(quintptr  socketDescriptor) { QLocalServer::incomingConnection(socketDescriptor); }
inline QLocalSocket*  promoted_nextPendingConnection() { return QLocalServer::nextPendingConnection(); }
};

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketOption )
Q_FLAGS(SocketOptions )
enum SocketOption{
  NoOptions = QLocalServer::NoOptions,   UserAccessOption = QLocalServer::UserAccessOption,   GroupAccessOption = QLocalServer::GroupAccessOption,   OtherAccessOption = QLocalServer::OtherAccessOption,   WorldAccessOption = QLocalServer::WorldAccessOption};
Q_DECLARE_FLAGS(SocketOptions, SocketOption)
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = 0);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   bool  isListening(QLocalServer* theWrappedObject) const;
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   bool  static_QLocalServer_removeServer(const QString&  name);
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   QString  serverName(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   void setSocketOptions(QLocalServer* theWrappedObject, QLocalServer::SocketOptions  options);
   QLocalServer::SocketOptions  socketOptions(QLocalServer* theWrappedObject) const;
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = 0);
};





class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = 0):QLocalSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLocalSocket();

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
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline qint64  promoted_bytesAvailable() const { return QLocalSocket::bytesAvailable(); }
inline qint64  promoted_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline bool  promoted_canReadLine() const { return QLocalSocket::canReadLine(); }
inline void promoted_close() { QLocalSocket::close(); }
inline bool  promoted_isSequential() const { return QLocalSocket::isSequential(); }
inline qint64  promoted_readData(char*  arg__1, qint64  arg__2) { return QLocalSocket::readData(arg__1, arg__2); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline qint64  promoted_writeData(const char*  arg__1, qint64  arg__2) { return QLocalSocket::writeData(arg__1, arg__2); }
};

class PythonQtWrapper_QLocalSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocalSocketError LocalSocketState )
enum LocalSocketError{
  ConnectionRefusedError = QLocalSocket::ConnectionRefusedError,   PeerClosedError = QLocalSocket::PeerClosedError,   ServerNotFoundError = QLocalSocket::ServerNotFoundError,   SocketAccessError = QLocalSocket::SocketAccessError,   SocketResourceError = QLocalSocket::SocketResourceError,   SocketTimeoutError = QLocalSocket::SocketTimeoutError,   DatagramTooLargeError = QLocalSocket::DatagramTooLargeError,   ConnectionError = QLocalSocket::ConnectionError,   UnsupportedSocketOperationError = QLocalSocket::UnsupportedSocketOperationError,   UnknownSocketError = QLocalSocket::UnknownSocketError,   OperationError = QLocalSocket::OperationError};
enum LocalSocketState{
  UnconnectedState = QLocalSocket::UnconnectedState,   ConnectingState = QLocalSocket::ConnectingState,   ConnectedState = QLocalSocket::ConnectedState,   ClosingState = QLocalSocket::ClosingState};
public slots:
QLocalSocket* new_QLocalSocket(QObject*  parent = 0);
void delete_QLocalSocket(QLocalSocket* obj) { delete obj; } 
   void abort(QLocalSocket* theWrappedObject);
   qint64  bytesAvailable(QLocalSocket* theWrappedObject) const;
   qint64  bytesToWrite(QLocalSocket* theWrappedObject) const;
   bool  canReadLine(QLocalSocket* theWrappedObject) const;
   void close(QLocalSocket* theWrappedObject);
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   bool  flush(QLocalSocket* theWrappedObject);
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   bool  isSequential(QLocalSocket* theWrappedObject) const;
   bool  isValid(QLocalSocket* theWrappedObject) const;
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   qint64  readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2);
   QString  serverName(QLocalSocket* theWrappedObject) const;
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   bool  waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000);
   qint64  writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2);
};





class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = 0):QNetworkAccessManager(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkAccessManager();

virtual void childEvent(QChildEvent*  arg__1);
virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkAccessManager : public QNetworkAccessManager
{ public:
inline QNetworkReply*  promoted_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0) { return QNetworkAccessManager::createRequest(op, request, outgoingData); }
};

class PythonQtWrapper_QNetworkAccessManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NetworkAccessibility Operation )
enum NetworkAccessibility{
  UnknownAccessibility = QNetworkAccessManager::UnknownAccessibility,   NotAccessible = QNetworkAccessManager::NotAccessible,   Accessible = QNetworkAccessManager::Accessible};
enum Operation{
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   DeleteOperation = QNetworkAccessManager::DeleteOperation,   CustomOperation = QNetworkAccessManager::CustomOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = 0);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   QNetworkConfiguration  activeConfiguration(QNetworkAccessManager* theWrappedObject) const;
   QAbstractNetworkCache*  cache(QNetworkAccessManager* theWrappedObject) const;
   void clearAccessCache(QNetworkAccessManager* theWrappedObject);
   QNetworkConfiguration  configuration(QNetworkAccessManager* theWrappedObject) const;
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = 0);
   QNetworkReply*  deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkAccessManager::NetworkAccessibility  networkAccessible(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkProxyFactory*  proxyFactory(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QIODevice*  data = 0);
   void setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache);
   void setConfiguration(QNetworkAccessManager* theWrappedObject, const QNetworkConfiguration&  config);
   void setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar);
   void setNetworkAccessible(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::NetworkAccessibility  accessible);
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   void setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory);
};





class PythonQtWrapper_QNetworkAddressEntry : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkAddressEntry* new_QNetworkAddressEntry();
QNetworkAddressEntry* new_QNetworkAddressEntry(const QNetworkAddressEntry&  other);
void delete_QNetworkAddressEntry(QNetworkAddressEntry* obj) { delete obj; } 
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   bool  __ne__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   bool  __eq__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   int  prefixLength(QNetworkAddressEntry* theWrappedObject) const;
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
   void setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length);
   void swap(QNetworkAddressEntry* theWrappedObject, QNetworkAddressEntry&  other);
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
   bool  isValid(QNetworkCacheMetaData* theWrappedObject) const;
   QDateTime  lastModified(QNetworkCacheMetaData* theWrappedObject) const;
   bool  __ne__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   QList<QPair<QByteArray , QByteArray >  >  rawHeaders(QNetworkCacheMetaData* theWrappedObject) const;
   bool  saveToDisk(QNetworkCacheMetaData* theWrappedObject) const;
   void setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes);
   void setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  headers);
   void setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow);
   void setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url);
   void swap(QNetworkCacheMetaData* theWrappedObject, QNetworkCacheMetaData&  other);
   QUrl  url(QNetworkCacheMetaData* theWrappedObject) const;
};





class PythonQtWrapper_QNetworkConfiguration : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BearerType Purpose StateFlag Type )
Q_FLAGS(StateFlags )
enum BearerType{
  BearerUnknown = QNetworkConfiguration::BearerUnknown,   BearerEthernet = QNetworkConfiguration::BearerEthernet,   BearerWLAN = QNetworkConfiguration::BearerWLAN,   Bearer2G = QNetworkConfiguration::Bearer2G,   BearerCDMA2000 = QNetworkConfiguration::BearerCDMA2000,   BearerWCDMA = QNetworkConfiguration::BearerWCDMA,   BearerHSPA = QNetworkConfiguration::BearerHSPA,   BearerBluetooth = QNetworkConfiguration::BearerBluetooth,   BearerWiMAX = QNetworkConfiguration::BearerWiMAX};
enum Purpose{
  UnknownPurpose = QNetworkConfiguration::UnknownPurpose,   PublicPurpose = QNetworkConfiguration::PublicPurpose,   PrivatePurpose = QNetworkConfiguration::PrivatePurpose,   ServiceSpecificPurpose = QNetworkConfiguration::ServiceSpecificPurpose};
enum StateFlag{
  Undefined = QNetworkConfiguration::Undefined,   Defined = QNetworkConfiguration::Defined,   Discovered = QNetworkConfiguration::Discovered,   Active = QNetworkConfiguration::Active};
enum Type{
  InternetAccessPoint = QNetworkConfiguration::InternetAccessPoint,   ServiceNetwork = QNetworkConfiguration::ServiceNetwork,   UserChoice = QNetworkConfiguration::UserChoice,   Invalid = QNetworkConfiguration::Invalid};
Q_DECLARE_FLAGS(StateFlags, StateFlag)
public slots:
QNetworkConfiguration* new_QNetworkConfiguration();
QNetworkConfiguration* new_QNetworkConfiguration(const QNetworkConfiguration&  other);
void delete_QNetworkConfiguration(QNetworkConfiguration* obj) { delete obj; } 
   QNetworkConfiguration::BearerType  bearerType(QNetworkConfiguration* theWrappedObject) const;
   QString  bearerTypeName(QNetworkConfiguration* theWrappedObject) const;
   QList<QNetworkConfiguration >  children(QNetworkConfiguration* theWrappedObject) const;
   QString  identifier(QNetworkConfiguration* theWrappedObject) const;
   bool  isRoamingAvailable(QNetworkConfiguration* theWrappedObject) const;
   bool  isValid(QNetworkConfiguration* theWrappedObject) const;
   QString  name(QNetworkConfiguration* theWrappedObject) const;
   bool  __ne__(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other) const;
   QNetworkConfiguration*  operator_assign(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other);
   bool  __eq__(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other) const;
   QNetworkConfiguration::Purpose  purpose(QNetworkConfiguration* theWrappedObject) const;
   QNetworkConfiguration::StateFlags  state(QNetworkConfiguration* theWrappedObject) const;
   void swap(QNetworkConfiguration* theWrappedObject, QNetworkConfiguration&  other);
   QNetworkConfiguration::Type  type(QNetworkConfiguration* theWrappedObject) const;
};





class PythonQtShell_QNetworkConfigurationManager : public QNetworkConfigurationManager
{
public:
    PythonQtShell_QNetworkConfigurationManager(QObject*  parent = 0):QNetworkConfigurationManager(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkConfigurationManager();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNetworkConfigurationManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability )
Q_FLAGS(Capabilities )
enum Capability{
  CanStartAndStopInterfaces = QNetworkConfigurationManager::CanStartAndStopInterfaces,   DirectConnectionRouting = QNetworkConfigurationManager::DirectConnectionRouting,   SystemSessionSupport = QNetworkConfigurationManager::SystemSessionSupport,   ApplicationLevelRoaming = QNetworkConfigurationManager::ApplicationLevelRoaming,   ForcedRoaming = QNetworkConfigurationManager::ForcedRoaming,   DataStatistics = QNetworkConfigurationManager::DataStatistics,   NetworkSessionRequired = QNetworkConfigurationManager::NetworkSessionRequired};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkConfigurationManager* new_QNetworkConfigurationManager(QObject*  parent = 0);
void delete_QNetworkConfigurationManager(QNetworkConfigurationManager* obj) { delete obj; } 
   QList<QNetworkConfiguration >  allConfigurations(QNetworkConfigurationManager* theWrappedObject, QNetworkConfiguration::StateFlags  flags = 0) const;
   QNetworkConfigurationManager::Capabilities  capabilities(QNetworkConfigurationManager* theWrappedObject) const;
   QNetworkConfiguration  configurationFromIdentifier(QNetworkConfigurationManager* theWrappedObject, const QString&  identifier) const;
   QNetworkConfiguration  defaultConfiguration(QNetworkConfigurationManager* theWrappedObject) const;
   bool  isOnline(QNetworkConfigurationManager* theWrappedObject) const;
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
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
   bool  hasSameIdentifier(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   bool  isHttpOnly(QNetworkCookie* theWrappedObject) const;
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   void normalize(QNetworkCookie* theWrappedObject, const QUrl&  url);
   bool  __ne__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   bool  __eq__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   QString  path(QNetworkCookie* theWrappedObject) const;
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   void setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable);
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   void swap(QNetworkCookie* theWrappedObject, QNetworkCookie&  other);
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
    QString py_toString(QNetworkCookie*);
};





class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = 0):QNetworkCookieJar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkCookieJar();

virtual void childEvent(QChildEvent*  arg__1);
virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual void customEvent(QEvent*  arg__1);
virtual bool  deleteCookie(const QNetworkCookie&  cookie);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  insertCookie(const QNetworkCookie&  cookie);
virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  updateCookie(const QNetworkCookie&  cookie);
virtual bool  validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline QList<QNetworkCookie >  promoted_allCookies() const { return QNetworkCookieJar::allCookies(); }
inline QList<QNetworkCookie >  promoted_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
inline bool  promoted_deleteCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::deleteCookie(cookie); }
inline bool  promoted_insertCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::insertCookie(cookie); }
inline void promoted_setAllCookies(const QList<QNetworkCookie >&  cookieList) { QNetworkCookieJar::setAllCookies(cookieList); }
inline bool  promoted_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
inline bool  promoted_updateCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::updateCookie(cookie); }
inline bool  promoted_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return QNetworkCookieJar::validateCookie(cookie, url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = 0);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; } 
   QList<QNetworkCookie >  allCookies(QNetworkCookieJar* theWrappedObject) const;
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
   bool  deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   void setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList);
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
   bool  updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const;
};





class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = 0):QNetworkDiskCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkDiskCache();

virtual qint64  cacheSize() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void clear();
virtual void customEvent(QEvent*  arg__1);
virtual QIODevice*  data(const QUrl&  url);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual qint64  expire();
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline qint64  promoted_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline void promoted_clear() { QNetworkDiskCache::clear(); }
inline QIODevice*  promoted_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline qint64  promoted_expire() { return QNetworkDiskCache::expire(); }
inline void promoted_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline QNetworkCacheMetaData  promoted_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
inline QIODevice*  promoted_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline bool  promoted_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline void promoted_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = 0);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; } 
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   qint64  cacheSize(QNetworkDiskCache* theWrappedObject) const;
   void clear(QNetworkDiskCache* theWrappedObject);
   QIODevice*  data(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   void insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device);
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QNetworkCacheMetaData  metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   QIODevice*  prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   bool  remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url);
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
   void updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
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
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QString  humanReadableName(QNetworkInterface* theWrappedObject) const;
   int  index(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   QString  name(QNetworkInterface* theWrappedObject) const;
   void swap(QNetworkInterface* theWrappedObject, QNetworkInterface&  other);
    QString py_toString(QNetworkInterface*);
};





class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability ProxyType )
Q_FLAGS(Capabilities )
enum Capability{
  TunnelingCapability = QNetworkProxy::TunnelingCapability,   ListeningCapability = QNetworkProxy::ListeningCapability,   UdpTunnelingCapability = QNetworkProxy::UdpTunnelingCapability,   CachingCapability = QNetworkProxy::CachingCapability,   HostNameLookupCapability = QNetworkProxy::HostNameLookupCapability};
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   QNetworkProxy::Capabilities  capabilities(QNetworkProxy* theWrappedObject) const;
   bool  hasRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   bool  __ne__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   bool  __eq__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab);
   void setHeader(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   void setRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
   void swap(QNetworkProxy* theWrappedObject, QNetworkProxy&  other);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   QString  user(QNetworkProxy* theWrappedObject) const;
    QString py_toString(QNetworkProxy*);
};





class PythonQtShell_QNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    PythonQtShell_QNetworkProxyFactory():QNetworkProxyFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkProxyFactory();

virtual QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery());

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkProxyFactory : public QNetworkProxyFactory
{ public:
inline QList<QNetworkProxy >  promoted_queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery()) { return this->queryProxy(query); }
};

class PythonQtWrapper_QNetworkProxyFactory : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkProxyFactory* new_QNetworkProxyFactory();
void delete_QNetworkProxyFactory(QNetworkProxyFactory* obj) { delete obj; } 
   QList<QNetworkProxy >  static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query);
   QList<QNetworkProxy >  queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query = QNetworkProxyQuery());
   void static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory);
   void static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable);
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
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkProxyQuery&  other);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
void delete_QNetworkProxyQuery(QNetworkProxyQuery* obj) { delete obj; } 
   int  localPort(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkConfiguration  networkConfiguration(QNetworkProxyQuery* theWrappedObject) const;
   bool  __ne__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   bool  __eq__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   QString  peerHostName(QNetworkProxyQuery* theWrappedObject) const;
   int  peerPort(QNetworkProxyQuery* theWrappedObject) const;
   QString  protocolTag(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkProxyQuery::QueryType  queryType(QNetworkProxyQuery* theWrappedObject) const;
   void setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setNetworkConfiguration(QNetworkProxyQuery* theWrappedObject, const QNetworkConfiguration&  networkConfiguration);
   void setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname);
   void setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag);
   void setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type);
   void setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url);
   void swap(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery&  other);
   QUrl  url(QNetworkProxyQuery* theWrappedObject) const;
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = 0):QNetworkReply(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkReply();

virtual void abort();
virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void close();
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void ignoreSslErrors();
virtual void ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual void setSslConfigurationImplementation(const QSslConfiguration&  arg__1);
virtual qint64  size() const;
virtual void sslConfigurationImplementation(QSslConfiguration&  arg__1) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_abort() { this->abort(); }
inline void promoted_close() { QNetworkReply::close(); }
inline void promoted_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
inline void promoted_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { QNetworkReply::ignoreSslErrorsImplementation(arg__1); }
inline bool  promoted_isSequential() const { return QNetworkReply::isSequential(); }
inline void promoted_setAttribute(QNetworkRequest::Attribute  code, const QVariant&  value) { QNetworkReply::setAttribute(code, value); }
inline void promoted_setError(QNetworkReply::NetworkError  errorCode, const QString&  errorString) { QNetworkReply::setError(errorCode, errorString); }
inline void promoted_setFinished(bool  arg__1) { QNetworkReply::setFinished(arg__1); }
inline void promoted_setHeader(QNetworkRequest::KnownHeaders  header, const QVariant&  value) { QNetworkReply::setHeader(header, value); }
inline void promoted_setOperation(QNetworkAccessManager::Operation  operation) { QNetworkReply::setOperation(operation); }
inline void promoted_setRawHeader(const QByteArray&  headerName, const QByteArray&  value) { QNetworkReply::setRawHeader(headerName, value); }
inline void promoted_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline void promoted_setRequest(const QNetworkRequest&  request) { QNetworkReply::setRequest(request); }
inline void promoted_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { QNetworkReply::setSslConfigurationImplementation(arg__1); }
inline void promoted_setUrl(const QUrl&  url) { QNetworkReply::setUrl(url); }
inline void promoted_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { QNetworkReply::sslConfigurationImplementation(arg__1); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkReply* new_QNetworkReply(QObject*  parent = 0);
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   void abort(QNetworkReply* theWrappedObject);
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   void close(QNetworkReply* theWrappedObject);
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void ignoreSslErrors(QNetworkReply* theWrappedObject);
   void ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1);
   bool  isFinished(QNetworkReply* theWrappedObject) const;
   bool  isRunning(QNetworkReply* theWrappedObject) const;
   bool  isSequential(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   const QList<QPair<QByteArray , QByteArray >  >*  rawHeaderPairs(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString);
   void setFinished(QNetworkReply* theWrappedObject, bool  arg__1);
   void setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation);
   void setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   void setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request);
   void setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1);
   void setUrl(QNetworkReply* theWrappedObject, const QUrl&  url);
   void sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const;
   QUrl  url(QNetworkReply* theWrappedObject) const;
   qint64  writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len);
};





class PythonQtWrapper_QNetworkRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attribute CacheLoadControl KnownHeaders LoadControl Priority )
enum Attribute{
  HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,   HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,   RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,   ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,   CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,   CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,   SourceIsFromCacheAttribute = QNetworkRequest::SourceIsFromCacheAttribute,   DoNotBufferUploadDataAttribute = QNetworkRequest::DoNotBufferUploadDataAttribute,   HttpPipeliningAllowedAttribute = QNetworkRequest::HttpPipeliningAllowedAttribute,   HttpPipeliningWasUsedAttribute = QNetworkRequest::HttpPipeliningWasUsedAttribute,   CustomVerbAttribute = QNetworkRequest::CustomVerbAttribute,   CookieLoadControlAttribute = QNetworkRequest::CookieLoadControlAttribute,   AuthenticationReuseAttribute = QNetworkRequest::AuthenticationReuseAttribute,   CookieSaveControlAttribute = QNetworkRequest::CookieSaveControlAttribute,   MaximumDownloadBufferSizeAttribute = QNetworkRequest::MaximumDownloadBufferSizeAttribute,   DownloadBufferAttribute = QNetworkRequest::DownloadBufferAttribute,   SynchronousRequestAttribute = QNetworkRequest::SynchronousRequestAttribute,   BackgroundRequestAttribute = QNetworkRequest::BackgroundRequestAttribute,   User = QNetworkRequest::User,   UserMax = QNetworkRequest::UserMax};
enum CacheLoadControl{
  AlwaysNetwork = QNetworkRequest::AlwaysNetwork,   PreferNetwork = QNetworkRequest::PreferNetwork,   PreferCache = QNetworkRequest::PreferCache,   AlwaysCache = QNetworkRequest::AlwaysCache};
enum KnownHeaders{
  ContentTypeHeader = QNetworkRequest::ContentTypeHeader,   ContentLengthHeader = QNetworkRequest::ContentLengthHeader,   LocationHeader = QNetworkRequest::LocationHeader,   LastModifiedHeader = QNetworkRequest::LastModifiedHeader,   CookieHeader = QNetworkRequest::CookieHeader,   SetCookieHeader = QNetworkRequest::SetCookieHeader,   ContentDispositionHeader = QNetworkRequest::ContentDispositionHeader,   UserAgentHeader = QNetworkRequest::UserAgentHeader,   ServerHeader = QNetworkRequest::ServerHeader};
enum LoadControl{
  Automatic = QNetworkRequest::Automatic,   Manual = QNetworkRequest::Manual};
enum Priority{
  HighPriority = QNetworkRequest::HighPriority,   NormalPriority = QNetworkRequest::NormalPriority,   LowPriority = QNetworkRequest::LowPriority};
public slots:
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url = QUrl());
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; } 
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   bool  __ne__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   bool  __eq__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   QObject*  originatingObject(QNetworkRequest* theWrappedObject) const;
   QNetworkRequest::Priority  priority(QNetworkRequest* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object);
   void setPriority(QNetworkRequest* theWrappedObject, QNetworkRequest::Priority  priority);
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
   void swap(QNetworkRequest* theWrappedObject, QNetworkRequest&  other);
   QUrl  url(QNetworkRequest* theWrappedObject) const;
};





class PythonQtShell_QNetworkSession : public QNetworkSession
{
public:
    PythonQtShell_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = 0):QNetworkSession(connConfig, parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkSession();

virtual void childEvent(QChildEvent*  arg__1);
virtual void connectNotify(const QMetaMethod&  signal);
virtual void customEvent(QEvent*  arg__1);
virtual void disconnectNotify(const QMetaMethod&  signal);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkSession : public QNetworkSession
{ public:
inline void promoted_connectNotify(const QMetaMethod&  signal) { QNetworkSession::connectNotify(signal); }
inline void promoted_disconnectNotify(const QMetaMethod&  signal) { QNetworkSession::disconnectNotify(signal); }
};

class PythonQtWrapper_QNetworkSession : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SessionError State UsagePolicy )
Q_FLAGS(UsagePolicies )
enum SessionError{
  UnknownSessionError = QNetworkSession::UnknownSessionError,   SessionAbortedError = QNetworkSession::SessionAbortedError,   RoamingError = QNetworkSession::RoamingError,   OperationNotSupportedError = QNetworkSession::OperationNotSupportedError,   InvalidConfigurationError = QNetworkSession::InvalidConfigurationError};
enum State{
  Invalid = QNetworkSession::Invalid,   NotAvailable = QNetworkSession::NotAvailable,   Connecting = QNetworkSession::Connecting,   Connected = QNetworkSession::Connected,   Closing = QNetworkSession::Closing,   Disconnected = QNetworkSession::Disconnected,   Roaming = QNetworkSession::Roaming};
enum UsagePolicy{
  NoPolicy = QNetworkSession::NoPolicy,   NoBackgroundTrafficPolicy = QNetworkSession::NoBackgroundTrafficPolicy};
Q_DECLARE_FLAGS(UsagePolicies, UsagePolicy)
public slots:
QNetworkSession* new_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = 0);
void delete_QNetworkSession(QNetworkSession* obj) { delete obj; } 
   quint64  activeTime(QNetworkSession* theWrappedObject) const;
   quint64  bytesReceived(QNetworkSession* theWrappedObject) const;
   quint64  bytesWritten(QNetworkSession* theWrappedObject) const;
   QNetworkConfiguration  configuration(QNetworkSession* theWrappedObject) const;
   void connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   void disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   QNetworkSession::SessionError  error(QNetworkSession* theWrappedObject) const;
   QString  errorString(QNetworkSession* theWrappedObject) const;
   QNetworkInterface  interface(QNetworkSession* theWrappedObject) const;
   bool  isOpen(QNetworkSession* theWrappedObject) const;
   QVariant  sessionProperty(QNetworkSession* theWrappedObject, const QString&  key) const;
   void setSessionProperty(QNetworkSession* theWrappedObject, const QString&  key, const QVariant&  value);
   QNetworkSession::State  state(QNetworkSession* theWrappedObject) const;
   QNetworkSession::UsagePolicies  usagePolicies(QNetworkSession* theWrappedObject) const;
   bool  waitForOpened(QNetworkSession* theWrappedObject, int  msecs = 30000);
};





#ifndef QT_NO_OPENSSL
class PythonQtWrapper_QSsl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlternativeNameEntryType EncodingFormat KeyAlgorithm KeyType SslOption SslProtocol )
Q_FLAGS(SslOptions )
enum AlternativeNameEntryType{
  EmailEntry = QSsl::EmailEntry,   DnsEntry = QSsl::DnsEntry};
enum EncodingFormat{
  Pem = QSsl::Pem,   Der = QSsl::Der};
enum KeyAlgorithm{
  Opaque = QSsl::Opaque,   Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa};
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum SslOption{
  SslOptionDisableEmptyFragments = QSsl::SslOptionDisableEmptyFragments,   SslOptionDisableSessionTickets = QSsl::SslOptionDisableSessionTickets,   SslOptionDisableCompression = QSsl::SslOptionDisableCompression,   SslOptionDisableServerNameIndication = QSsl::SslOptionDisableServerNameIndication,   SslOptionDisableLegacyRenegotiation = QSsl::SslOptionDisableLegacyRenegotiation};
enum SslProtocol{
  SslV3 = QSsl::SslV3,   SslV2 = QSsl::SslV2,   TlsV1_0 = QSsl::TlsV1_0,   TlsV1_1 = QSsl::TlsV1_1,   TlsV1_2 = QSsl::TlsV1_2,   AnyProtocol = QSsl::AnyProtocol,   TlsV1SslV3 = QSsl::TlsV1SslV3,   SecureProtocols = QSsl::SecureProtocols,   UnknownProtocol = QSsl::UnknownProtocol};
Q_DECLARE_FLAGS(SslOptions, SslOption)
public slots:
};

#endif





#ifndef QT_NO_OPENSSL
class PythonQtWrapper_QSslCertificate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubjectInfo )
enum SubjectInfo{
  Organization = QSslCertificate::Organization,   CommonName = QSslCertificate::CommonName,   LocalityName = QSslCertificate::LocalityName,   OrganizationalUnitName = QSslCertificate::OrganizationalUnitName,   CountryName = QSslCertificate::CountryName,   StateOrProvinceName = QSslCertificate::StateOrProvinceName,   DistinguishedNameQualifier = QSslCertificate::DistinguishedNameQualifier,   SerialNumber = QSslCertificate::SerialNumber,   EmailAddress = QSslCertificate::EmailAddress};
public slots:
QSslCertificate* new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QByteArray&  data = QByteArray(), QSsl::EncodingFormat  format = QSsl::Pem);
QSslCertificate* new_QSslCertificate(const QSslCertificate&  other);
void delete_QSslCertificate(QSslCertificate* obj) { delete obj; } 
   void clear(QSslCertificate* theWrappedObject);
   QByteArray  digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm = QCryptographicHash::Md5) const;
   QDateTime  effectiveDate(QSslCertificate* theWrappedObject) const;
   QDateTime  expiryDate(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   Qt::HANDLE  handle(QSslCertificate* theWrappedObject) const;
   bool  isBlacklisted(QSslCertificate* theWrappedObject) const;
   bool  isNull(QSslCertificate* theWrappedObject) const;
   QStringList  issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QStringList  issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const;
   QList<QByteArray >  issuerInfoAttributes(QSslCertificate* theWrappedObject) const;
   bool  __ne__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QSslCertificate*  operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other);
   bool  __eq__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const;
   QSslKey  publicKey(QSslCertificate* theWrappedObject) const;
   QByteArray  serialNumber(QSslCertificate* theWrappedObject) const;
   QMultiMap<QSsl::AlternativeNameEntryType , QString >  subjectAlternativeNames(QSslCertificate* theWrappedObject) const;
   QStringList  subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const;
   QStringList  subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const;
   QList<QByteArray >  subjectInfoAttributes(QSslCertificate* theWrappedObject) const;
   void swap(QSslCertificate* theWrappedObject, QSslCertificate&  other);
   QByteArray  toDer(QSslCertificate* theWrappedObject) const;
   QByteArray  toPem(QSslCertificate* theWrappedObject) const;
   QString  toText(QSslCertificate* theWrappedObject) const;
   QList<QSslError >  static_QSslCertificate_verify(QList<QSslCertificate >  certificateChain, const QString&  hostName = QString());
   QByteArray  version(QSslCertificate* theWrappedObject) const;
    QString py_toString(QSslCertificate*);
    bool __nonzero__(QSslCertificate* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_OPENSSL
class PythonQtWrapper_QSslCipher : public QObject
{ Q_OBJECT
public:
public slots:
QSslCipher* new_QSslCipher();
QSslCipher* new_QSslCipher(const QSslCipher&  other);
QSslCipher* new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol);
void delete_QSslCipher(QSslCipher* obj) { delete obj; } 
   QString  authenticationMethod(QSslCipher* theWrappedObject) const;
   QString  encryptionMethod(QSslCipher* theWrappedObject) const;
   bool  isNull(QSslCipher* theWrappedObject) const;
   QString  keyExchangeMethod(QSslCipher* theWrappedObject) const;
   QString  name(QSslCipher* theWrappedObject) const;
   bool  __ne__(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QSslCipher*  operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other);
   bool  __eq__(QSslCipher* theWrappedObject, const QSslCipher&  other) const;
   QSsl::SslProtocol  protocol(QSslCipher* theWrappedObject) const;
   QString  protocolString(QSslCipher* theWrappedObject) const;
   int  supportedBits(QSslCipher* theWrappedObject) const;
   void swap(QSslCipher* theWrappedObject, QSslCipher&  other);
   int  usedBits(QSslCipher* theWrappedObject) const;
    QString py_toString(QSslCipher*);
    bool __nonzero__(QSslCipher* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_OPENSSL
class PythonQtWrapper_QSslConfiguration : public QObject
{ Q_OBJECT
public:
public slots:
QSslConfiguration* new_QSslConfiguration();
QSslConfiguration* new_QSslConfiguration(const QSslConfiguration&  other);
void delete_QSslConfiguration(QSslConfiguration* obj) { delete obj; } 
   QList<QSslCertificate >  caCertificates(QSslConfiguration* theWrappedObject) const;
   QList<QSslCipher >  ciphers(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration  static_QSslConfiguration_defaultConfiguration();
   bool  isNull(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslConfiguration* theWrappedObject) const;
   bool  __ne__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
   QSslConfiguration*  operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other);
   bool  __eq__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const;
   QSslCertificate  peerCertificate(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslConfiguration* theWrappedObject) const;
   int  peerVerifyDepth(QSslConfiguration* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslConfiguration* theWrappedObject) const;
   QSslKey  privateKey(QSslConfiguration* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslConfiguration* theWrappedObject) const;
   QSslCipher  sessionCipher(QSslConfiguration* theWrappedObject) const;
   void setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration);
   void setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   void setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key);
   void setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol);
   void setSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option, bool  on);
   void swap(QSslConfiguration* theWrappedObject, QSslConfiguration&  other);
   bool  testSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option) const;
    bool __nonzero__(QSslConfiguration* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_OPENSSL
class PythonQtWrapper_QSslError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslError )
enum SslError{
  NoError = QSslError::NoError,   UnableToGetIssuerCertificate = QSslError::UnableToGetIssuerCertificate,   UnableToDecryptCertificateSignature = QSslError::UnableToDecryptCertificateSignature,   UnableToDecodeIssuerPublicKey = QSslError::UnableToDecodeIssuerPublicKey,   CertificateSignatureFailed = QSslError::CertificateSignatureFailed,   CertificateNotYetValid = QSslError::CertificateNotYetValid,   CertificateExpired = QSslError::CertificateExpired,   InvalidNotBeforeField = QSslError::InvalidNotBeforeField,   InvalidNotAfterField = QSslError::InvalidNotAfterField,   SelfSignedCertificate = QSslError::SelfSignedCertificate,   SelfSignedCertificateInChain = QSslError::SelfSignedCertificateInChain,   UnableToGetLocalIssuerCertificate = QSslError::UnableToGetLocalIssuerCertificate,   UnableToVerifyFirstCertificate = QSslError::UnableToVerifyFirstCertificate,   CertificateRevoked = QSslError::CertificateRevoked,   InvalidCaCertificate = QSslError::InvalidCaCertificate,   PathLengthExceeded = QSslError::PathLengthExceeded,   InvalidPurpose = QSslError::InvalidPurpose,   CertificateUntrusted = QSslError::CertificateUntrusted,   CertificateRejected = QSslError::CertificateRejected,   SubjectIssuerMismatch = QSslError::SubjectIssuerMismatch,   AuthorityIssuerSerialNumberMismatch = QSslError::AuthorityIssuerSerialNumberMismatch,   NoPeerCertificate = QSslError::NoPeerCertificate,   HostNameMismatch = QSslError::HostNameMismatch,   NoSslSupport = QSslError::NoSslSupport,   CertificateBlacklisted = QSslError::CertificateBlacklisted,   UnspecifiedError = QSslError::UnspecifiedError};
public slots:
QSslError* new_QSslError();
QSslError* new_QSslError(QSslError::SslError  error);
QSslError* new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate);
QSslError* new_QSslError(const QSslError&  other);
void delete_QSslError(QSslError* obj) { delete obj; } 
   QSslCertificate  certificate(QSslError* theWrappedObject) const;
   QSslError::SslError  error(QSslError* theWrappedObject) const;
   QString  errorString(QSslError* theWrappedObject) const;
   bool  __ne__(QSslError* theWrappedObject, const QSslError&  other) const;
   QSslError*  operator_assign(QSslError* theWrappedObject, const QSslError&  other);
   bool  __eq__(QSslError* theWrappedObject, const QSslError&  other) const;
   void swap(QSslError* theWrappedObject, QSslError&  other);
    QString py_toString(QSslError*);
};

#endif


