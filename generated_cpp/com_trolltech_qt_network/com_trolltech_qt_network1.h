#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qhostaddress.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslsocket.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurl.h>
#include <qurlinfo.h>



class PythonQtWrapper_QSslKey : public QObject
{ Q_OBJECT
public:
public slots:
QSslKey* new_QSslKey();
QSslKey* new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QSslKey&  other);
void delete_QSslKey(QSslKey* obj) { delete obj; } 
   QSsl::KeyAlgorithm  algorithm(QSslKey* theWrappedObject) const;
   QByteArray  toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   QSslKey*  operator_assign(QSslKey* theWrappedObject, const QSslKey&  other);
   void clear(QSslKey* theWrappedObject);
   int  length(QSslKey* theWrappedObject) const;
   QByteArray  toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   Qt::HANDLE  handle(QSslKey* theWrappedObject) const;
   QSsl::KeyType  type(QSslKey* theWrappedObject) const;
   bool  operator_equal(QSslKey* theWrappedObject, const QSslKey&  key) const;
   bool  isNull(QSslKey* theWrappedObject) const;
    QString py_toString(QSslKey*);
};





class PythonQtShell_QSslSocket : public QSslSocket
{
public:
    PythonQtShell_QSslSocket(QObject*  parent = 0):QSslSocket(parent),_wrapper(NULL) {};

virtual bool  canReadLine() const;
virtual qint64  bytesToWrite() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesAvailable() const;
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  atEnd() const;
virtual void close();
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  isSequential() const;
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

class PythonQtPublicPromoter_QSslSocket : public QSslSocket
{ public:
inline bool  promoted_canReadLine() const { return QSslSocket::canReadLine(); }
inline qint64  promoted_bytesToWrite() const { return QSslSocket::bytesToWrite(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QSslSocket::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QSslSocket::writeData(data, len); }
inline qint64  promoted_bytesAvailable() const { return QSslSocket::bytesAvailable(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QSslSocket::waitForBytesWritten(msecs); }
inline bool  promoted_atEnd() const { return QSslSocket::atEnd(); }
inline void promoted_close() { QSslSocket::close(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QSslSocket::waitForReadyRead(msecs); }
};

class PythonQtWrapper_QSslSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SslMode PeerVerifyMode )
enum SslMode{
  UnencryptedMode = QSslSocket::UnencryptedMode,   SslClientMode = QSslSocket::SslClientMode,   SslServerMode = QSslSocket::SslServerMode};
enum PeerVerifyMode{
  VerifyNone = QSslSocket::VerifyNone,   QueryPeer = QSslSocket::QueryPeer,   VerifyPeer = QSslSocket::VerifyPeer,   AutoVerifyPeer = QSslSocket::AutoVerifyPeer};
public slots:
QSslSocket* new_QSslSocket(QObject*  parent = 0);
void delete_QSslSocket(QSslSocket* obj) { delete obj; } 
   QSslSocket::SslMode  mode(QSslSocket* theWrappedObject) const;
   void setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol);
   void static_QSslSocket_setDefaultCiphers(const QList<QSslCipher >&  ciphers);
   void static_QSslSocket_setDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   bool  static_QSslSocket_supportsSsl();
   void setSocketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   bool  isEncrypted(QSslSocket* theWrappedObject) const;
   bool  canReadLine(QSslSocket* theWrappedObject) const;
   QSslKey  privateKey(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslSocket_defaultCaCertificates();
   QSslConfiguration  sslConfiguration(QSslSocket* theWrappedObject) const;
   qint64  bytesToWrite(QSslSocket* theWrappedObject) const;
   void setCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   QList<QSslCipher >  static_QSslSocket_defaultCiphers();
   QList<QSslError >  sslErrors(QSslSocket* theWrappedObject) const;
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors);
   void setCiphers(QSslSocket* theWrappedObject, const QString&  ciphers);
   qint64  encryptedBytesAvailable(QSslSocket* theWrappedObject) const;
   void setCiphers(QSslSocket* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void addCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   bool  addCaCertificates(QSslSocket* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   bool  flush(QSslSocket* theWrappedObject);
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslSocket* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslSocket* theWrappedObject) const;
   bool  setSocketDescriptor(QSslSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   QList<QSslCertificate >  caCertificates(QSslSocket* theWrappedObject) const;
   void setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm = QSsl::Rsa, QSsl::EncodingFormat  format = QSsl::Pem, const QByteArray&  passPhrase = QByteArray());
   qint64  readData(QSslSocket* theWrappedObject, char*  data, qint64  maxlen);
   QSslCipher  sessionCipher(QSslSocket* theWrappedObject) const;
   void setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key);
   void setReadBufferSize(QSslSocket* theWrappedObject, qint64  size);
   void addCaCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   qint64  writeData(QSslSocket* theWrappedObject, const char*  data, qint64  len);
   void setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config);
   void setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth);
   void abort(QSslSocket* theWrappedObject);
   qint64  bytesAvailable(QSslSocket* theWrappedObject) const;
   bool  waitForDisconnected(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForBytesWritten(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  atEnd(QSslSocket* theWrappedObject) const;
   void static_QSslSocket_addDefaultCaCertificate(const QSslCertificate&  certificate);
   void setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format = QSsl::Pem);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   QList<QSslCipher >  static_QSslSocket_supportedCiphers();
   qint64  encryptedBytesToWrite(QSslSocket* theWrappedObject) const;
   void close(QSslSocket* theWrappedObject);
   bool  waitForConnected(QSslSocket* theWrappedObject, int  msecs = 30000);
   QList<QSslCertificate >  static_QSslSocket_systemCaCertificates();
   bool  waitForReadyRead(QSslSocket* theWrappedObject, int  msecs = 30000);
   QSslCertificate  localCertificate(QSslSocket* theWrappedObject) const;
   bool  waitForEncrypted(QSslSocket* theWrappedObject, int  msecs = 30000);
   QVariant  socketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
   QList<QSslCertificate >  peerCertificateChain(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslSocket* theWrappedObject) const;
   int  peerVerifyDepth(QSslSocket* theWrappedObject) const;
   void static_QSslSocket_addDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   bool  static_QSslSocket_addDefaultCaCertificates(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   QList<QSslCipher >  ciphers(QSslSocket* theWrappedObject) const;
};





class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = 0):QTcpServer(parent),_wrapper(NULL) {};

virtual QTcpSocket*  nextPendingConnection();
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(int  handle);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   bool  isListening(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   void close(QTcpServer* theWrappedObject);
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
   int  socketDescriptor(QTcpServer* theWrappedObject) const;
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor);
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   QString  errorString(QTcpServer* theWrappedObject) const;
   void incomingConnection(QTcpServer* theWrappedObject, int  handle);
};





class PythonQtShell_QTcpSocket : public QTcpSocket
{
public:
    PythonQtShell_QTcpSocket(QObject*  parent = 0):QTcpSocket(parent),_wrapper(NULL) {};

virtual qint64  bytesAvailable() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  isSequential() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual qint64  bytesToWrite() const;
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);
virtual bool  canReadLine() const;
virtual void close();
virtual bool  atEnd() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual qint64  size() const;
virtual qint64  pos() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  seek(qint64  pos);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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

virtual qint64  bytesAvailable() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  size() const;
virtual bool  isSequential() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  bytesToWrite() const;
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);
virtual bool  canReadLine() const;
virtual void close();
virtual bool  atEnd() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
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
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port = 0);
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   bool  bind(QUdpSocket* theWrappedObject, unsigned short  port, QUdpSocket::BindMode  mode);
   bool  bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QUdpSocket::BindMode  mode);
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

virtual void setWritable(bool  b);
virtual void setName(const QString&  name);
virtual void setReadable(bool  b);
virtual void setGroup(const QString&  s);
virtual void setSize(qint64  size);
virtual void setFile(bool  b);
virtual void setLastModified(const QDateTime&  dt);
virtual void setDir(bool  b);
virtual void setPermissions(int  p);
virtual void setOwner(const QString&  s);
virtual void setSymLink(bool  b);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QUrlInfo : public QUrlInfo
{ public:
inline void promoted_setWritable(bool  b) { QUrlInfo::setWritable(b); }
inline void promoted_setName(const QString&  name) { QUrlInfo::setName(name); }
inline void promoted_setReadable(bool  b) { QUrlInfo::setReadable(b); }
inline void promoted_setGroup(const QString&  s) { QUrlInfo::setGroup(s); }
inline void promoted_setSize(qint64  size) { QUrlInfo::setSize(size); }
inline void promoted_setFile(bool  b) { QUrlInfo::setFile(b); }
inline void promoted_setLastModified(const QDateTime&  dt) { QUrlInfo::setLastModified(dt); }
inline void promoted_setDir(bool  b) { QUrlInfo::setDir(b); }
inline void promoted_setPermissions(int  p) { QUrlInfo::setPermissions(p); }
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
   bool  isValid(QUrlInfo* theWrappedObject) const;
   bool  isWritable(QUrlInfo* theWrappedObject) const;
   void setWritable(QUrlInfo* theWrappedObject, bool  b);
   bool  static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   void setName(QUrlInfo* theWrappedObject, const QString&  name);
   void setReadable(QUrlInfo* theWrappedObject, bool  b);
   bool  isDir(QUrlInfo* theWrappedObject) const;
   QString  name(QUrlInfo* theWrappedObject) const;
   void setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setGroup(QUrlInfo* theWrappedObject, const QString&  s);
   bool  isExecutable(QUrlInfo* theWrappedObject) const;
   QDateTime  lastModified(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   void setSize(QUrlInfo* theWrappedObject, qint64  size);
   QString  owner(QUrlInfo* theWrappedObject) const;
   bool  operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const;
   void setFile(QUrlInfo* theWrappedObject, bool  b);
   bool  isSymLink(QUrlInfo* theWrappedObject) const;
   void setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt);
   void setDir(QUrlInfo* theWrappedObject, bool  b);
   void setPermissions(QUrlInfo* theWrappedObject, int  p);
   bool  isFile(QUrlInfo* theWrappedObject) const;
   bool  isReadable(QUrlInfo* theWrappedObject) const;
   void setOwner(QUrlInfo* theWrappedObject, const QString&  s);
   QString  group(QUrlInfo* theWrappedObject) const;
   qint64  size(QUrlInfo* theWrappedObject) const;
   bool  static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy);
   QDateTime  lastRead(QUrlInfo* theWrappedObject) const;
   int  permissions(QUrlInfo* theWrappedObject) const;
   void setSymLink(QUrlInfo* theWrappedObject, bool  b);
};


