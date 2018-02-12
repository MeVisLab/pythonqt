#include <PythonQt.h>
#include <QDateTime>
#include <QObject>
#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qhostaddress.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qnetworkconfiguration.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworksession.h>
#include <qobject.h>
#include <qssl.h>
#include <qsslcertificate.h>
#include <qsslcertificateextension.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslellipticcurve.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qsslsocket.h>
#include <qstringlist.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qvector.h>



class PythonQtShell_QNetworkSession : public QNetworkSession
{
public:
    PythonQtShell_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = NULL):QNetworkSession(connConfig, parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkSession();

virtual void childEvent(QChildEvent*  event);
virtual void connectNotify(const QMetaMethod&  signal);
virtual void customEvent(QEvent*  event);
virtual void disconnectNotify(const QMetaMethod&  signal);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkSession : public QNetworkSession
{ public:
inline void promoted_connectNotify(const QMetaMethod&  signal) { this->connectNotify(signal); }
inline void promoted_disconnectNotify(const QMetaMethod&  signal) { this->disconnectNotify(signal); }
inline void py_q_connectNotify(const QMetaMethod&  signal) { QNetworkSession::connectNotify(signal); }
inline void py_q_disconnectNotify(const QMetaMethod&  signal) { QNetworkSession::disconnectNotify(signal); }
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
QNetworkSession* new_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent = NULL);
void delete_QNetworkSession(QNetworkSession* obj) { delete obj; } 
   quint64  activeTime(QNetworkSession* theWrappedObject) const;
   quint64  bytesReceived(QNetworkSession* theWrappedObject) const;
   quint64  bytesWritten(QNetworkSession* theWrappedObject) const;
   QNetworkConfiguration  configuration(QNetworkSession* theWrappedObject) const;
   void connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   void py_q_connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal){  (((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->py_q_connectNotify(signal));}
   void disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal);
   void py_q_disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal){  (((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->py_q_disconnectNotify(signal));}
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





#ifndef QT_NO_SSL
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
  Opaque = QSsl::Opaque,   Rsa = QSsl::Rsa,   Dsa = QSsl::Dsa,   Ec = QSsl::Ec};
enum KeyType{
  PrivateKey = QSsl::PrivateKey,   PublicKey = QSsl::PublicKey};
enum SslOption{
  SslOptionDisableEmptyFragments = QSsl::SslOptionDisableEmptyFragments,   SslOptionDisableSessionTickets = QSsl::SslOptionDisableSessionTickets,   SslOptionDisableCompression = QSsl::SslOptionDisableCompression,   SslOptionDisableServerNameIndication = QSsl::SslOptionDisableServerNameIndication,   SslOptionDisableLegacyRenegotiation = QSsl::SslOptionDisableLegacyRenegotiation,   SslOptionDisableSessionSharing = QSsl::SslOptionDisableSessionSharing,   SslOptionDisableSessionPersistence = QSsl::SslOptionDisableSessionPersistence,   SslOptionDisableServerCipherPreference = QSsl::SslOptionDisableServerCipherPreference};
enum SslProtocol{
  SslV3 = QSsl::SslV3,   SslV2 = QSsl::SslV2,   TlsV1_0 = QSsl::TlsV1_0,   TlsV1_1 = QSsl::TlsV1_1,   TlsV1_2 = QSsl::TlsV1_2,   AnyProtocol = QSsl::AnyProtocol,   TlsV1SslV3 = QSsl::TlsV1SslV3,   SecureProtocols = QSsl::SecureProtocols,   TlsV1_0OrLater = QSsl::TlsV1_0OrLater,   TlsV1_1OrLater = QSsl::TlsV1_1OrLater,   TlsV1_2OrLater = QSsl::TlsV1_2OrLater,   UnknownProtocol = QSsl::UnknownProtocol};
Q_DECLARE_FLAGS(SslOptions, SslOption)
public slots:
};

#endif





#ifndef QT_NO_SSL
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
   QList<QSslCertificateExtension >  extensions(QSslCertificate* theWrappedObject) const;
   QList<QSslCertificate >  static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format = QSsl::Pem);
   QList<QSslCertificate >  static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   Qt::HANDLE  handle(QSslCertificate* theWrappedObject) const;
   bool  static_QSslCertificate_importPkcs12(QIODevice*  device, QSslKey*  key, QSslCertificate*  cert, QList<QSslCertificate >*  caCertificates = NULL, const QByteArray&  passPhrase = QByteArray());
   bool  isBlacklisted(QSslCertificate* theWrappedObject) const;
   bool  isNull(QSslCertificate* theWrappedObject) const;
   bool  isSelfSigned(QSslCertificate* theWrappedObject) const;
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





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslCertificateExtension : public QObject
{ Q_OBJECT
public:
public slots:
QSslCertificateExtension* new_QSslCertificateExtension();
QSslCertificateExtension* new_QSslCertificateExtension(const QSslCertificateExtension&  other);
void delete_QSslCertificateExtension(QSslCertificateExtension* obj) { delete obj; } 
   bool  isCritical(QSslCertificateExtension* theWrappedObject) const;
   bool  isSupported(QSslCertificateExtension* theWrappedObject) const;
   QString  name(QSslCertificateExtension* theWrappedObject) const;
   QString  oid(QSslCertificateExtension* theWrappedObject) const;
   QSslCertificateExtension*  operator_assign(QSslCertificateExtension* theWrappedObject, const QSslCertificateExtension&  other);
   void swap(QSslCertificateExtension* theWrappedObject, QSslCertificateExtension&  other);
   QVariant  value(QSslCertificateExtension* theWrappedObject) const;
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslCipher : public QObject
{ Q_OBJECT
public:
public slots:
QSslCipher* new_QSslCipher();
QSslCipher* new_QSslCipher(const QSslCipher&  other);
QSslCipher* new_QSslCipher(const QString&  name);
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





#ifndef QT_NO_SSL
class PythonQtShell_QSslConfiguration : public QSslConfiguration
{
public:
    PythonQtShell_QSslConfiguration():QSslConfiguration(),_wrapper(NULL) {};
    PythonQtShell_QSslConfiguration(const QSslConfiguration&  other):QSslConfiguration(other),_wrapper(NULL) {};

   ~PythonQtShell_QSslConfiguration();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSslConfiguration : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NextProtocolNegotiationStatus )
enum NextProtocolNegotiationStatus{
  NextProtocolNegotiationNone = QSslConfiguration::NextProtocolNegotiationNone,   NextProtocolNegotiationNegotiated = QSslConfiguration::NextProtocolNegotiationNegotiated,   NextProtocolNegotiationUnsupported = QSslConfiguration::NextProtocolNegotiationUnsupported};
public slots:
QSslConfiguration* new_QSslConfiguration();
QSslConfiguration* new_QSslConfiguration(const QSslConfiguration&  other);
void delete_QSslConfiguration(QSslConfiguration* obj) { delete obj; } 
   QList<QByteArray >  allowedNextProtocols(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  caCertificates(QSslConfiguration* theWrappedObject) const;
   QList<QSslCipher >  ciphers(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration  static_QSslConfiguration_defaultConfiguration();
   QVector<QSslEllipticCurve >  ellipticCurves(QSslConfiguration* theWrappedObject) const;
   bool  isNull(QSslConfiguration* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslConfiguration* theWrappedObject) const;
   QList<QSslCertificate >  localCertificateChain(QSslConfiguration* theWrappedObject) const;
   QByteArray  nextNegotiatedProtocol(QSslConfiguration* theWrappedObject) const;
   QSslConfiguration::NextProtocolNegotiationStatus  nextProtocolNegotiationStatus(QSslConfiguration* theWrappedObject) const;
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
   QSsl::SslProtocol  sessionProtocol(QSslConfiguration* theWrappedObject) const;
   QByteArray  sessionTicket(QSslConfiguration* theWrappedObject) const;
   int  sessionTicketLifeTimeHint(QSslConfiguration* theWrappedObject) const;
   void setAllowedNextProtocols(QSslConfiguration* theWrappedObject, QList<QByteArray >  protocols);
   void setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration);
   void setEllipticCurves(QSslConfiguration* theWrappedObject, const QVector<QSslEllipticCurve >&  curves);
   void setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate);
   void setLocalCertificateChain(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  localChain);
   void setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key);
   void setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol);
   void setSessionTicket(QSslConfiguration* theWrappedObject, const QByteArray&  sessionTicket);
   void setSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option, bool  on);
   QList<QSslCipher >  static_QSslConfiguration_supportedCiphers();
   QVector<QSslEllipticCurve >  static_QSslConfiguration_supportedEllipticCurves();
   void swap(QSslConfiguration* theWrappedObject, QSslConfiguration&  other);
   QList<QSslCertificate >  static_QSslConfiguration_systemCaCertificates();
   bool  testSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option) const;
    bool __nonzero__(QSslConfiguration* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslEllipticCurve : public QObject
{ Q_OBJECT
public:
public slots:
QSslEllipticCurve* new_QSslEllipticCurve();
void delete_QSslEllipticCurve(QSslEllipticCurve* obj) { delete obj; } 
   QSslEllipticCurve  static_QSslEllipticCurve_fromLongName(const QString&  name);
   QSslEllipticCurve  static_QSslEllipticCurve_fromShortName(const QString&  name);
   bool  isTlsNamedCurve(QSslEllipticCurve* theWrappedObject) const;
   bool  isValid(QSslEllipticCurve* theWrappedObject) const;
   QString  longName(QSslEllipticCurve* theWrappedObject) const;
   bool  __eq__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs);
   QString  shortName(QSslEllipticCurve* theWrappedObject) const;
    QString py_toString(QSslEllipticCurve*);
    bool __nonzero__(QSslEllipticCurve* obj) { return obj->isValid(); }
};

#endif





#ifndef QT_NO_SSL
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





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslKey : public QObject
{ Q_OBJECT
public:
public slots:
QSslKey* new_QSslKey();
QSslKey* new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(Qt::HANDLE  handle, QSsl::KeyType  type = QSsl::PrivateKey);
QSslKey* new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format = QSsl::Pem, QSsl::KeyType  type = QSsl::PrivateKey, const QByteArray&  passPhrase = QByteArray());
QSslKey* new_QSslKey(const QSslKey&  other);
void delete_QSslKey(QSslKey* obj) { delete obj; } 
   QSsl::KeyAlgorithm  algorithm(QSslKey* theWrappedObject) const;
   void clear(QSslKey* theWrappedObject);
   Qt::HANDLE  handle(QSslKey* theWrappedObject) const;
   bool  isNull(QSslKey* theWrappedObject) const;
   int  length(QSslKey* theWrappedObject) const;
   bool  __ne__(QSslKey* theWrappedObject, const QSslKey&  key) const;
   QSslKey*  operator_assign(QSslKey* theWrappedObject, const QSslKey&  other);
   bool  __eq__(QSslKey* theWrappedObject, const QSslKey&  key) const;
   void swap(QSslKey* theWrappedObject, QSslKey&  other);
   QByteArray  toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   QByteArray  toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase = QByteArray()) const;
   QSsl::KeyType  type(QSslKey* theWrappedObject) const;
    QString py_toString(QSslKey*);
    bool __nonzero__(QSslKey* obj) { return !obj->isNull(); }
};

#endif





#ifndef QT_NO_SSL
class PythonQtWrapper_QSslPreSharedKeyAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QSslPreSharedKeyAuthenticator* new_QSslPreSharedKeyAuthenticator();
QSslPreSharedKeyAuthenticator* new_QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator&  authenticator);
void delete_QSslPreSharedKeyAuthenticator(QSslPreSharedKeyAuthenticator* obj) { delete obj; } 
   QByteArray  identity(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   QByteArray  identityHint(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   int  maximumIdentityLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   int  maximumPreSharedKeyLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   QSslPreSharedKeyAuthenticator*  operator_assign(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  authenticator);
   QByteArray  preSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject) const;
   void setIdentity(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  identity);
   void setPreSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  preSharedKey);
   void swap(QSslPreSharedKeyAuthenticator* theWrappedObject, QSslPreSharedKeyAuthenticator&  other);
};

#endif





#ifndef QT_NO_SSL
class PythonQtShell_QSslSocket : public QSslSocket
{
public:
    PythonQtShell_QSslSocket(QObject*  parent = NULL):QSslSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSslSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void customEvent(QEvent*  event);
virtual void disconnectFromHost();
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSslSocket : public QSslSocket
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QSslSocket::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QSslSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QSslSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QSslSocket::canReadLine(); }
inline void py_q_close() { QSslSocket::close(); }
inline void py_q_connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QSslSocket::connectToHost(hostName, port, openMode, protocol); }
inline void py_q_disconnectFromHost() { QSslSocket::disconnectFromHost(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QSslSocket::readData(data, maxlen); }
inline void py_q_resume() { QSslSocket::resume(); }
inline void py_q_setReadBufferSize(qint64  size) { QSslSocket::setReadBufferSize(size); }
inline bool  py_q_setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QSslSocket::setSocketDescriptor(socketDescriptor, state, openMode); }
inline void py_q_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QSslSocket::setSocketOption(option, value); }
inline QVariant  py_q_socketOption(QAbstractSocket::SocketOption  option) { return QSslSocket::socketOption(option); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QSslSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForConnected(int  msecs = 30000) { return QSslSocket::waitForConnected(msecs); }
inline bool  py_q_waitForDisconnected(int  msecs = 30000) { return QSslSocket::waitForDisconnected(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QSslSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QSslSocket::writeData(data, len); }
};

class PythonQtWrapper_QSslSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PeerVerifyMode SslMode )
enum PeerVerifyMode{
  VerifyNone = QSslSocket::VerifyNone,   QueryPeer = QSslSocket::QueryPeer,   VerifyPeer = QSslSocket::VerifyPeer,   AutoVerifyPeer = QSslSocket::AutoVerifyPeer};
enum SslMode{
  UnencryptedMode = QSslSocket::UnencryptedMode,   SslClientMode = QSslSocket::SslClientMode,   SslServerMode = QSslSocket::SslServerMode};
public slots:
QSslSocket* new_QSslSocket(QObject*  parent = NULL);
void delete_QSslSocket(QSslSocket* obj) { delete obj; } 
   void abort(QSslSocket* theWrappedObject);
   void addCaCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void addCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   bool  addCaCertificates(QSslSocket* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   void static_QSslSocket_addDefaultCaCertificate(const QSslCertificate&  certificate);
   void static_QSslSocket_addDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   bool  static_QSslSocket_addDefaultCaCertificates(const QString&  path, QSsl::EncodingFormat  format = QSsl::Pem, QRegExp::PatternSyntax  syntax = QRegExp::FixedString);
   bool  py_q_atEnd(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_atEnd());}
   qint64  py_q_bytesAvailable(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_bytesToWrite());}
   QList<QSslCertificate >  caCertificates(QSslSocket* theWrappedObject) const;
   bool  py_q_canReadLine(QSslSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_canReadLine());}
   QList<QSslCipher >  ciphers(QSslSocket* theWrappedObject) const;
   void py_q_close(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_close());}
   void py_q_connectToHost(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  openMode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_connectToHost(hostName, port, openMode, protocol));}
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   QList<QSslCertificate >  static_QSslSocket_defaultCaCertificates();
   QList<QSslCipher >  static_QSslSocket_defaultCiphers();
   void py_q_disconnectFromHost(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_disconnectFromHost());}
   qint64  encryptedBytesAvailable(QSslSocket* theWrappedObject) const;
   qint64  encryptedBytesToWrite(QSslSocket* theWrappedObject) const;
   bool  flush(QSslSocket* theWrappedObject);
   void ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors);
   bool  isEncrypted(QSslSocket* theWrappedObject) const;
   QSslCertificate  localCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  localCertificateChain(QSslSocket* theWrappedObject) const;
   QSslSocket::SslMode  mode(QSslSocket* theWrappedObject) const;
   QSslCertificate  peerCertificate(QSslSocket* theWrappedObject) const;
   QList<QSslCertificate >  peerCertificateChain(QSslSocket* theWrappedObject) const;
   int  peerVerifyDepth(QSslSocket* theWrappedObject) const;
   QSslSocket::PeerVerifyMode  peerVerifyMode(QSslSocket* theWrappedObject) const;
   QString  peerVerifyName(QSslSocket* theWrappedObject) const;
   QSslKey  privateKey(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  protocol(QSslSocket* theWrappedObject) const;
   qint64  py_q_readData(QSslSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_readData(data, maxlen));}
   void py_q_resume(QSslSocket* theWrappedObject){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_resume());}
   QSslCipher  sessionCipher(QSslSocket* theWrappedObject) const;
   QSsl::SslProtocol  sessionProtocol(QSslSocket* theWrappedObject) const;
   void setCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates);
   void setCiphers(QSslSocket* theWrappedObject, const QList<QSslCipher >&  ciphers);
   void setCiphers(QSslSocket* theWrappedObject, const QString&  ciphers);
   void static_QSslSocket_setDefaultCaCertificates(const QList<QSslCertificate >&  certificates);
   void static_QSslSocket_setDefaultCiphers(const QList<QSslCipher >&  ciphers);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate);
   void setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format = QSsl::Pem);
   void setLocalCertificateChain(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  localChain);
   void setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth);
   void setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode);
   void setPeerVerifyName(QSslSocket* theWrappedObject, const QString&  hostName);
   void setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key);
   void setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm = QSsl::Rsa, QSsl::EncodingFormat  format = QSsl::Pem, const QByteArray&  passPhrase = QByteArray());
   void setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol);
   void py_q_setReadBufferSize(QSslSocket* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setReadBufferSize(size));}
   bool  py_q_setSocketDescriptor(QSslSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketDescriptor(socketDescriptor, state, openMode));}
   void py_q_setSocketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_setSocketOption(option, value));}
   void setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config);
   QVariant  py_q_socketOption(QSslSocket* theWrappedObject, QAbstractSocket::SocketOption  option){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_socketOption(option));}
   QSslConfiguration  sslConfiguration(QSslSocket* theWrappedObject) const;
   QList<QSslError >  sslErrors(QSslSocket* theWrappedObject) const;
   long  static_QSslSocket_sslLibraryBuildVersionNumber();
   QString  static_QSslSocket_sslLibraryBuildVersionString();
   long  static_QSslSocket_sslLibraryVersionNumber();
   QString  static_QSslSocket_sslLibraryVersionString();
   QList<QSslCipher >  static_QSslSocket_supportedCiphers();
   bool  static_QSslSocket_supportsSsl();
   QList<QSslCertificate >  static_QSslSocket_systemCaCertificates();
   bool  py_q_waitForBytesWritten(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  py_q_waitForConnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForConnected(msecs));}
   bool  py_q_waitForDisconnected(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForDisconnected(msecs));}
   bool  waitForEncrypted(QSslSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QSslSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QSslSocket* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QSslSocket*)theWrappedObject)->py_q_writeData(data, len));}
    bool __nonzero__(QSslSocket* obj) { return obj->isValid(); }
};

#endif





class PythonQtShell_QTcpServer : public QTcpServer
{
public:
    PythonQtShell_QTcpServer(QObject*  parent = NULL):QTcpServer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTcpServer();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(qintptr  handle);
virtual QTcpSocket*  nextPendingConnection();
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTcpServer : public QTcpServer
{ public:
inline void promoted_addPendingConnection(QTcpSocket*  socket) { this->addPendingConnection(socket); }
inline void promoted_incomingConnection(qintptr  handle) { this->incomingConnection(handle); }
inline bool  py_q_hasPendingConnections() const { return QTcpServer::hasPendingConnections(); }
inline void py_q_incomingConnection(qintptr  handle) { QTcpServer::incomingConnection(handle); }
inline QTcpSocket*  py_q_nextPendingConnection() { return QTcpServer::nextPendingConnection(); }
};

class PythonQtWrapper_QTcpServer : public QObject
{ Q_OBJECT
public:
public slots:
QTcpServer* new_QTcpServer(QObject*  parent = NULL);
void delete_QTcpServer(QTcpServer* obj) { delete obj; } 
   void addPendingConnection(QTcpServer* theWrappedObject, QTcpSocket*  socket);
   void close(QTcpServer* theWrappedObject);
   QString  errorString(QTcpServer* theWrappedObject) const;
   bool  hasPendingConnections(QTcpServer* theWrappedObject) const;
   bool  py_q_hasPendingConnections(QTcpServer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_hasPendingConnections());}
   void incomingConnection(QTcpServer* theWrappedObject, qintptr  handle);
   void py_q_incomingConnection(QTcpServer* theWrappedObject, qintptr  handle){  (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_incomingConnection(handle));}
   bool  isListening(QTcpServer* theWrappedObject) const;
   bool  listen(QTcpServer* theWrappedObject, const QHostAddress&  address = QHostAddress::Any, unsigned short  port = 0);
   int  maxPendingConnections(QTcpServer* theWrappedObject) const;
   QTcpSocket*  nextPendingConnection(QTcpServer* theWrappedObject);
   QTcpSocket*  py_q_nextPendingConnection(QTcpServer* theWrappedObject){  return (((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->py_q_nextPendingConnection());}
   void pauseAccepting(QTcpServer* theWrappedObject);
   QNetworkProxy  proxy(QTcpServer* theWrappedObject) const;
   void resumeAccepting(QTcpServer* theWrappedObject);
   QHostAddress  serverAddress(QTcpServer* theWrappedObject) const;
   QAbstractSocket::SocketError  serverError(QTcpServer* theWrappedObject) const;
   unsigned short  serverPort(QTcpServer* theWrappedObject) const;
   void setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections);
   void setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy);
   bool  setSocketDescriptor(QTcpServer* theWrappedObject, qintptr  socketDescriptor);
   qintptr  socketDescriptor(QTcpServer* theWrappedObject) const;
   bool  waitForNewConnection(QTcpServer* theWrappedObject, int  msec = 0, bool*  timedOut = NULL);
};





class PythonQtShell_QTcpSocket : public QTcpSocket
{
public:
    PythonQtShell_QTcpSocket(QObject*  parent = NULL):QTcpSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTcpSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void customEvent(QEvent*  event);
virtual void disconnectFromHost();
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QTcpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QTcpSocket* new_QTcpSocket(QObject*  parent = NULL);
void delete_QTcpSocket(QTcpSocket* obj) { delete obj; } 
    bool __nonzero__(QTcpSocket* obj) { return obj->isValid(); }
};





class PythonQtShell_QUdpSocket : public QUdpSocket
{
public:
    PythonQtShell_QUdpSocket(QObject*  parent = NULL):QUdpSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QUdpSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void customEvent(QEvent*  event);
virtual void disconnectFromHost();
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QUdpSocket : public QObject
{ Q_OBJECT
public:
public slots:
QUdpSocket* new_QUdpSocket(QObject*  parent = NULL);
void delete_QUdpSocket(QUdpSocket* obj) { delete obj; } 
   bool  hasPendingDatagrams(QUdpSocket* theWrappedObject) const;
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress);
   bool  leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface);
   QNetworkInterface  multicastInterface(QUdpSocket* theWrappedObject) const;
   qint64  pendingDatagramSize(QUdpSocket* theWrappedObject) const;
   qint64  readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host = NULL, unsigned short*  port = NULL);
   void setMulticastInterface(QUdpSocket* theWrappedObject, const QNetworkInterface&  iface);
   qint64  writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port);
    bool __nonzero__(QUdpSocket* obj) { return obj->isValid(); }
};


