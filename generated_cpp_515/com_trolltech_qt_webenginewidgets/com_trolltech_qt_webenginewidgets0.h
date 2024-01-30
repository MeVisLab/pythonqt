#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qauthenticator.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qjsonobject.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qnetworkcookie.h>
#include <qobject.h>
#include <qpagelayout.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qsslcertificate.h>
#include <qsslkey.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qthread.h>
#include <qurl.h>
#include <qvector.h>
#include <qwebchannel.h>
#include <qwebchannelabstracttransport.h>
#include <qwebenginecertificateerror.h>
#include <qwebengineclientcertificateselection.h>
#include <qwebengineclientcertificatestore.h>
#include <qwebenginecookiestore.h>
#include <qwebenginedownloaditem.h>
#include <qwebenginefindtextresult.h>
#include <qwebenginefullscreenrequest.h>
#include <qwebenginehistory.h>
#include <qwebenginehttprequest.h>
#include <qwebenginenotification.h>
#include <qwebenginepage.h>
#include <qwebengineprofile.h>
#include <qwebenginequotarequest.h>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include <qwebenginescript.h>
#include <qwebenginescriptcollection.h>
#include <qwebenginesettings.h>
#include <qwebengineurlrequestinfo.h>
#include <qwebengineurlrequestinterceptor.h>
#include <qwebengineurlrequestjob.h>
#include <qwebengineurlscheme.h>
#include <qwebengineurlschemehandler.h>
#include <qwebengineview.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QWebChannel : public QWebChannel
{
public:
    PythonQtShell_QWebChannel(QObject*  parent = nullptr):QWebChannel(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebChannel() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebChannel : public QObject
{ Q_OBJECT
public:
public slots:
QWebChannel* new_QWebChannel(QObject*  parent = nullptr);
void delete_QWebChannel(QWebChannel* obj) { delete obj; }
   bool  blockUpdates(QWebChannel* theWrappedObject) const;
   void deregisterObject(QWebChannel* theWrappedObject, QObject*  object);
   void registerObject(QWebChannel* theWrappedObject, const QString&  id, QObject*  object);
   void registerObjects(QWebChannel* theWrappedObject, const QHash<QString , QObject* >&  objects);
   QHash<QString , QObject* >  registeredObjects(QWebChannel* theWrappedObject) const;
   void setBlockUpdates(QWebChannel* theWrappedObject, bool  block);
};





class PythonQtShell_QWebChannelAbstractTransport : public QWebChannelAbstractTransport
{
public:
    PythonQtShell_QWebChannelAbstractTransport(QObject*  parent = nullptr):QWebChannelAbstractTransport(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebChannelAbstractTransport() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void sendMessage(const QJsonObject&  message) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebChannelAbstractTransport : public QWebChannelAbstractTransport
{ public:
inline void py_q_sendMessage(const QJsonObject&  message) { this->sendMessage(message); }
};

class PythonQtWrapper_QWebChannelAbstractTransport : public QObject
{ Q_OBJECT
public:
public slots:
QWebChannelAbstractTransport* new_QWebChannelAbstractTransport(QObject*  parent = nullptr);
void delete_QWebChannelAbstractTransport(QWebChannelAbstractTransport* obj) { delete obj; }
   void py_q_sendMessage(QWebChannelAbstractTransport* theWrappedObject, const QJsonObject&  message){  (((PythonQtPublicPromoter_QWebChannelAbstractTransport*)theWrappedObject)->py_q_sendMessage(message));}
};





class PythonQtWrapper_QWebEngineCertificateError : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error )
enum Error{
  SslPinnedKeyNotInCertificateChain = QWebEngineCertificateError::SslPinnedKeyNotInCertificateChain,   CertificateCommonNameInvalid = QWebEngineCertificateError::CertificateCommonNameInvalid,   CertificateDateInvalid = QWebEngineCertificateError::CertificateDateInvalid,   CertificateAuthorityInvalid = QWebEngineCertificateError::CertificateAuthorityInvalid,   CertificateContainsErrors = QWebEngineCertificateError::CertificateContainsErrors,   CertificateNoRevocationMechanism = QWebEngineCertificateError::CertificateNoRevocationMechanism,   CertificateUnableToCheckRevocation = QWebEngineCertificateError::CertificateUnableToCheckRevocation,   CertificateRevoked = QWebEngineCertificateError::CertificateRevoked,   CertificateInvalid = QWebEngineCertificateError::CertificateInvalid,   CertificateWeakSignatureAlgorithm = QWebEngineCertificateError::CertificateWeakSignatureAlgorithm,   CertificateNonUniqueName = QWebEngineCertificateError::CertificateNonUniqueName,   CertificateWeakKey = QWebEngineCertificateError::CertificateWeakKey,   CertificateNameConstraintViolation = QWebEngineCertificateError::CertificateNameConstraintViolation,   CertificateValidityTooLong = QWebEngineCertificateError::CertificateValidityTooLong,   CertificateTransparencyRequired = QWebEngineCertificateError::CertificateTransparencyRequired,   CertificateKnownInterceptionBlocked = QWebEngineCertificateError::CertificateKnownInterceptionBlocked};
public slots:
QWebEngineCertificateError* new_QWebEngineCertificateError(const QWebEngineCertificateError&  other);
QWebEngineCertificateError* new_QWebEngineCertificateError(int  error, QUrl  url, bool  overridable, QString  errorDescription);
void delete_QWebEngineCertificateError(QWebEngineCertificateError* obj) { delete obj; }
   bool  answered(QWebEngineCertificateError* theWrappedObject) const;
   QList<QSslCertificate >  certificateChain(QWebEngineCertificateError* theWrappedObject) const;
   void defer(QWebEngineCertificateError* theWrappedObject);
   bool  deferred(QWebEngineCertificateError* theWrappedObject) const;
   QWebEngineCertificateError::Error  error(QWebEngineCertificateError* theWrappedObject) const;
   QString  errorDescription(QWebEngineCertificateError* theWrappedObject) const;
   void ignoreCertificateError(QWebEngineCertificateError* theWrappedObject);
   bool  isOverridable(QWebEngineCertificateError* theWrappedObject) const;
   QWebEngineCertificateError*  operator_assign(QWebEngineCertificateError* theWrappedObject, const QWebEngineCertificateError&  other);
   void rejectCertificate(QWebEngineCertificateError* theWrappedObject);
   QUrl  url(QWebEngineCertificateError* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineClientCertificateSelection : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineClientCertificateSelection* new_QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection&  arg__1);
void delete_QWebEngineClientCertificateSelection(QWebEngineClientCertificateSelection* obj) { delete obj; }
   QVector<QSslCertificate >  certificates(QWebEngineClientCertificateSelection* theWrappedObject) const;
   QUrl  host(QWebEngineClientCertificateSelection* theWrappedObject) const;
   QWebEngineClientCertificateSelection*  operator_assign(QWebEngineClientCertificateSelection* theWrappedObject, const QWebEngineClientCertificateSelection&  arg__1);
   void select(QWebEngineClientCertificateSelection* theWrappedObject, const QSslCertificate&  certificate);
   void selectNone(QWebEngineClientCertificateSelection* theWrappedObject);
};





class PythonQtWrapper_QWebEngineClientCertificateStore : public QObject
{ Q_OBJECT
public:
public slots:
   void add(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate, const QSslKey&  privateKey);
   QVector<QSslCertificate >  certificates(QWebEngineClientCertificateStore* theWrappedObject) const;
   void clear(QWebEngineClientCertificateStore* theWrappedObject);
   void remove(QWebEngineClientCertificateStore* theWrappedObject, const QSslCertificate&  certificate);
};





class PythonQtWrapper_QWebEngineCookieStore : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineCookieStore(QWebEngineCookieStore* obj) { delete obj; }
   void deleteAllCookies(QWebEngineCookieStore* theWrappedObject);
   void deleteCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
   void deleteSessionCookies(QWebEngineCookieStore* theWrappedObject);
   void loadAllCookies(QWebEngineCookieStore* theWrappedObject);
   void setCookie(QWebEngineCookieStore* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  origin = QUrl());
};





class PythonQtShell_QWebEngineCookieStore__FilterRequest : public QWebEngineCookieStore::FilterRequest
{
public:
    PythonQtShell_QWebEngineCookieStore__FilterRequest():QWebEngineCookieStore::FilterRequest(),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineCookieStore__FilterRequest();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebEngineCookieStore__FilterRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineCookieStore::FilterRequest* new_QWebEngineCookieStore__FilterRequest();
QWebEngineCookieStore::FilterRequest* new_QWebEngineCookieStore__FilterRequest(const QWebEngineCookieStore::FilterRequest& other) {
PythonQtShell_QWebEngineCookieStore__FilterRequest* a = new PythonQtShell_QWebEngineCookieStore__FilterRequest();
*((QWebEngineCookieStore::FilterRequest*)a) = other;
return a; }
void delete_QWebEngineCookieStore__FilterRequest(QWebEngineCookieStore::FilterRequest* obj) { delete obj; }
void py_set__reservedFlag(QWebEngineCookieStore::FilterRequest* theWrappedObject, bool  _reservedFlag){ theWrappedObject->_reservedFlag = _reservedFlag; }
bool  py_get__reservedFlag(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->_reservedFlag; }
void py_set__reservedType(QWebEngineCookieStore::FilterRequest* theWrappedObject, ushort  _reservedType){ theWrappedObject->_reservedType = _reservedType; }
ushort  py_get__reservedType(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->_reservedType; }
void py_set_firstPartyUrl(QWebEngineCookieStore::FilterRequest* theWrappedObject, QUrl  firstPartyUrl){ theWrappedObject->firstPartyUrl = firstPartyUrl; }
QUrl  py_get_firstPartyUrl(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->firstPartyUrl; }
void py_set_origin(QWebEngineCookieStore::FilterRequest* theWrappedObject, QUrl  origin){ theWrappedObject->origin = origin; }
QUrl  py_get_origin(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->origin; }
void py_set_thirdParty(QWebEngineCookieStore::FilterRequest* theWrappedObject, bool  thirdParty){ theWrappedObject->thirdParty = thirdParty; }
bool  py_get_thirdParty(QWebEngineCookieStore::FilterRequest* theWrappedObject){ return theWrappedObject->thirdParty; }
};





class PythonQtWrapper_QWebEngineDownloadItem : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineDownloadItem(QWebEngineDownloadItem* obj) { delete obj; }
   QString  downloadDirectory(QWebEngineDownloadItem* theWrappedObject) const;
   QString  downloadFileName(QWebEngineDownloadItem* theWrappedObject) const;
   unsigned int  id(QWebEngineDownloadItem* theWrappedObject) const;
   QWebEngineDownloadItem::DownloadInterruptReason  interruptReason(QWebEngineDownloadItem* theWrappedObject) const;
   QString  interruptReasonString(QWebEngineDownloadItem* theWrappedObject) const;
   bool  isFinished(QWebEngineDownloadItem* theWrappedObject) const;
   bool  isPaused(QWebEngineDownloadItem* theWrappedObject) const;
   bool  isSavePageDownload(QWebEngineDownloadItem* theWrappedObject) const;
   QString  mimeType(QWebEngineDownloadItem* theWrappedObject) const;
   QWebEnginePage*  page(QWebEngineDownloadItem* theWrappedObject) const;
   QString  path(QWebEngineDownloadItem* theWrappedObject) const;
   qint64  receivedBytes(QWebEngineDownloadItem* theWrappedObject) const;
   QWebEngineDownloadItem::SavePageFormat  savePageFormat(QWebEngineDownloadItem* theWrappedObject) const;
   void setDownloadDirectory(QWebEngineDownloadItem* theWrappedObject, const QString&  directory);
   void setDownloadFileName(QWebEngineDownloadItem* theWrappedObject, const QString&  fileName);
   void setPath(QWebEngineDownloadItem* theWrappedObject, QString  path);
   void setSavePageFormat(QWebEngineDownloadItem* theWrappedObject, QWebEngineDownloadItem::SavePageFormat  format);
   QWebEngineDownloadItem::DownloadState  state(QWebEngineDownloadItem* theWrappedObject) const;
   QString  suggestedFileName(QWebEngineDownloadItem* theWrappedObject) const;
   qint64  totalBytes(QWebEngineDownloadItem* theWrappedObject) const;
   QWebEngineDownloadItem::DownloadType  type(QWebEngineDownloadItem* theWrappedObject) const;
   QUrl  url(QWebEngineDownloadItem* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineFindTextResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineFindTextResult* new_QWebEngineFindTextResult();
QWebEngineFindTextResult* new_QWebEngineFindTextResult(const QWebEngineFindTextResult&  other);
void delete_QWebEngineFindTextResult(QWebEngineFindTextResult* obj) { delete obj; }
   int  activeMatch(QWebEngineFindTextResult* theWrappedObject) const;
   int  numberOfMatches(QWebEngineFindTextResult* theWrappedObject) const;
   QWebEngineFindTextResult*  operator_assign(QWebEngineFindTextResult* theWrappedObject, const QWebEngineFindTextResult&  other);
};





class PythonQtWrapper_QWebEngineFullScreenRequest : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineFullScreenRequest(QWebEngineFullScreenRequest* obj) { delete obj; }
   void accept(QWebEngineFullScreenRequest* theWrappedObject);
   const QUrl*  origin(QWebEngineFullScreenRequest* theWrappedObject) const;
   void reject(QWebEngineFullScreenRequest* theWrappedObject);
   bool  toggleOn(QWebEngineFullScreenRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineHistory : public QObject
{ Q_OBJECT
public:
public slots:
   void back(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  backItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  backItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   bool  canGoBack(QWebEngineHistory* theWrappedObject) const;
   bool  canGoForward(QWebEngineHistory* theWrappedObject) const;
   void clear(QWebEngineHistory* theWrappedObject);
   int  count(QWebEngineHistory* theWrappedObject) const;
   QWebEngineHistoryItem  currentItem(QWebEngineHistory* theWrappedObject) const;
   int  currentItemIndex(QWebEngineHistory* theWrappedObject) const;
   void forward(QWebEngineHistory* theWrappedObject);
   QWebEngineHistoryItem  forwardItem(QWebEngineHistory* theWrappedObject) const;
   QList<QWebEngineHistoryItem >  forwardItems(QWebEngineHistory* theWrappedObject, int  maxItems) const;
   void goToItem(QWebEngineHistory* theWrappedObject, const QWebEngineHistoryItem&  item);
   QWebEngineHistoryItem  itemAt(QWebEngineHistory* theWrappedObject, int  i) const;
   QList<QWebEngineHistoryItem >  items(QWebEngineHistory* theWrappedObject) const;
   void writeTo(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
   void readFrom(QWebEngineHistory* theWrappedObject, QDataStream&  stream);
};





class PythonQtWrapper_QWebEngineHistoryItem : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineHistoryItem* new_QWebEngineHistoryItem(const QWebEngineHistoryItem&  other);
void delete_QWebEngineHistoryItem(QWebEngineHistoryItem* obj) { delete obj; }
   QUrl  iconUrl(QWebEngineHistoryItem* theWrappedObject) const;
   bool  isValid(QWebEngineHistoryItem* theWrappedObject) const;
   QDateTime  lastVisited(QWebEngineHistoryItem* theWrappedObject) const;
   QWebEngineHistoryItem*  operator_assign(QWebEngineHistoryItem* theWrappedObject, const QWebEngineHistoryItem&  other);
   QUrl  originalUrl(QWebEngineHistoryItem* theWrappedObject) const;
   void swap(QWebEngineHistoryItem* theWrappedObject, QWebEngineHistoryItem&  other);
   QString  title(QWebEngineHistoryItem* theWrappedObject) const;
   QUrl  url(QWebEngineHistoryItem* theWrappedObject) const;
    bool __nonzero__(QWebEngineHistoryItem* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QWebEngineHttpRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Method )
enum Method{
  Get = QWebEngineHttpRequest::Get,   Post = QWebEngineHttpRequest::Post};
public slots:
QWebEngineHttpRequest* new_QWebEngineHttpRequest(const QUrl&  url = QUrl(), const QWebEngineHttpRequest::Method&  method = QWebEngineHttpRequest::Get);
QWebEngineHttpRequest* new_QWebEngineHttpRequest(const QWebEngineHttpRequest&  other);
void delete_QWebEngineHttpRequest(QWebEngineHttpRequest* obj) { delete obj; }
   bool  hasHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const;
   QByteArray  header(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName) const;
   QVector<QByteArray >  headers(QWebEngineHttpRequest* theWrappedObject) const;
   QWebEngineHttpRequest::Method  method(QWebEngineHttpRequest* theWrappedObject) const;
   bool  __ne__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const;
   QWebEngineHttpRequest*  operator_assign(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other);
   bool  __eq__(QWebEngineHttpRequest* theWrappedObject, const QWebEngineHttpRequest&  other) const;
   QByteArray  postData(QWebEngineHttpRequest* theWrappedObject) const;
   QWebEngineHttpRequest  static_QWebEngineHttpRequest_postRequest(const QUrl&  url, const QMap<QString , QString >&  postData);
   void setHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setMethod(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest::Method  method);
   void setPostData(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  postData);
   void setUrl(QWebEngineHttpRequest* theWrappedObject, const QUrl&  url);
   void swap(QWebEngineHttpRequest* theWrappedObject, QWebEngineHttpRequest&  other);
   void unsetHeader(QWebEngineHttpRequest* theWrappedObject, const QByteArray&  headerName);
   QUrl  url(QWebEngineHttpRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineNotification : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineNotification(QWebEngineNotification* obj) { delete obj; }
   Qt::LayoutDirection  direction(QWebEngineNotification* theWrappedObject) const;
   QImage  icon(QWebEngineNotification* theWrappedObject) const;
   QString  language(QWebEngineNotification* theWrappedObject) const;
   bool  matches(QWebEngineNotification* theWrappedObject, const QWebEngineNotification*  other) const;
   QString  message(QWebEngineNotification* theWrappedObject) const;
   QUrl  origin(QWebEngineNotification* theWrappedObject) const;
   QString  tag(QWebEngineNotification* theWrappedObject) const;
   QString  title(QWebEngineNotification* theWrappedObject) const;
};





class PythonQtShell_QWebEnginePage : public QWebEnginePage
{
public:
    PythonQtShell_QWebEnginePage(QObject*  parent = nullptr):QWebEnginePage(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr):QWebEnginePage(profile, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEnginePage() override;

bool  acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) override;
bool  certificateError(const QWebEngineCertificateError&  certificateError) override;
void childEvent(QChildEvent*  event) override;
QStringList  chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) override;
QWebEnginePage*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) override;
bool  javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) override;
void javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) override;
bool  javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) override;
void timerEvent(QTimerEvent*  event) override;
void triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEnginePage : public QWebEnginePage
{ public:
inline bool  promoted_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return this->acceptNavigationRequest(url, type, isMainFrame); }
inline bool  promoted_certificateError(const QWebEngineCertificateError&  certificateError) { return this->certificateError(certificateError); }
inline QStringList  promoted_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return this->chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { this->javaScriptAlert(securityOrigin, msg); }
inline bool  promoted_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return this->javaScriptConfirm(securityOrigin, msg); }
inline void promoted_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { this->javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  promoted_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return this->javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline bool  py_q_acceptNavigationRequest(const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame) { return QWebEnginePage::acceptNavigationRequest(url, type, isMainFrame); }
inline bool  py_q_certificateError(const QWebEngineCertificateError&  certificateError) { return QWebEnginePage::certificateError(certificateError); }
inline QStringList  py_q_chooseFiles(QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes) { return QWebEnginePage::chooseFiles(mode, oldFiles, acceptedMimeTypes); }
inline QWebEnginePage*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEnginePage::createWindow(type); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEnginePage::event(arg__1); }
inline void py_q_javaScriptAlert(const QUrl&  securityOrigin, const QString&  msg) { QWebEnginePage::javaScriptAlert(securityOrigin, msg); }
inline bool  py_q_javaScriptConfirm(const QUrl&  securityOrigin, const QString&  msg) { return QWebEnginePage::javaScriptConfirm(securityOrigin, msg); }
inline void py_q_javaScriptConsoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID) { QWebEnginePage::javaScriptConsoleMessage(level, message, lineNumber, sourceID); }
inline bool  py_q_javaScriptPrompt(const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebEnginePage::javaScriptPrompt(securityOrigin, msg, defaultValue, result); }
inline void py_q_triggerAction(QWebEnginePage::WebAction  action, bool  checked = false) { QWebEnginePage::triggerAction(action, checked); }
};

class PythonQtWrapper_QWebEnginePage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FindFlag )
Q_FLAGS(FindFlags )
enum FindFlag{
  FindBackward = QWebEnginePage::FindBackward,   FindCaseSensitively = QWebEnginePage::FindCaseSensitively};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebEnginePage* new_QWebEnginePage(QObject*  parent = nullptr);
QWebEnginePage* new_QWebEnginePage(QWebEngineProfile*  profile, QObject*  parent = nullptr);
void delete_QWebEnginePage(QWebEnginePage* obj) { delete obj; }
   bool  acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame);
   bool  py_q_acceptNavigationRequest(QWebEnginePage* theWrappedObject, const QUrl&  url, QWebEnginePage::NavigationType  type, bool  isMainFrame){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_acceptNavigationRequest(url, type, isMainFrame));}
   QAction*  action(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action) const;
   QColor  backgroundColor(QWebEnginePage* theWrappedObject) const;
   bool  certificateError(QWebEnginePage* theWrappedObject, const QWebEngineCertificateError&  certificateError);
   bool  py_q_certificateError(QWebEnginePage* theWrappedObject, const QWebEngineCertificateError&  certificateError){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_certificateError(certificateError));}
   QStringList  chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes);
   QStringList  py_q_chooseFiles(QWebEnginePage* theWrappedObject, QWebEnginePage::FileSelectionMode  mode, const QStringList&  oldFiles, const QStringList&  acceptedMimeTypes){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_chooseFiles(mode, oldFiles, acceptedMimeTypes));}
   QSizeF  contentsSize(QWebEnginePage* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QWebEnginePage* theWrappedObject);
   QWebEnginePage*  createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEnginePage*  py_q_createWindow(QWebEnginePage* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_createWindow(type));}
   QWebEnginePage*  devToolsPage(QWebEnginePage* theWrappedObject) const;
   void download(QWebEnginePage* theWrappedObject, const QUrl&  url, const QString&  filename = QString());
   bool  py_q_event(QWebEnginePage* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_event(arg__1));}
   bool  hasSelection(QWebEnginePage* theWrappedObject) const;
   QWebEngineHistory*  history(QWebEnginePage* theWrappedObject) const;
   QIcon  icon(QWebEnginePage* theWrappedObject) const;
   QUrl  iconUrl(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage*  inspectedPage(QWebEnginePage* theWrappedObject) const;
   bool  isAudioMuted(QWebEnginePage* theWrappedObject) const;
   bool  isVisible(QWebEnginePage* theWrappedObject) const;
   void javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   void py_q_javaScriptAlert(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptAlert(securityOrigin, msg));}
   bool  javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg);
   bool  py_q_javaScriptConfirm(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConfirm(securityOrigin, msg));}
   void javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID);
   void py_q_javaScriptConsoleMessage(QWebEnginePage* theWrappedObject, QWebEnginePage::JavaScriptConsoleMessageLevel  level, const QString&  message, int  lineNumber, const QString&  sourceID){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptConsoleMessage(level, message, lineNumber, sourceID));}
   bool  javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result);
   bool  py_q_javaScriptPrompt(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, const QString&  msg, const QString&  defaultValue, QString*  result){  return (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_javaScriptPrompt(securityOrigin, msg, defaultValue, result));}
   QWebEnginePage::LifecycleState  lifecycleState(QWebEnginePage* theWrappedObject) const;
   void load(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void load(QWebEnginePage* theWrappedObject, const QWebEngineHttpRequest&  request);
   void printToPdf(QWebEnginePage* theWrappedObject, const QString&  filePath, const QPageLayout&  layout = QPageLayout(QPageSize(QPageSize::A4), QPageLayout::Portrait, QMarginsF()));
   QWebEngineProfile*  profile(QWebEnginePage* theWrappedObject) const;
   bool  recentlyAudible(QWebEnginePage* theWrappedObject) const;
   QWebEnginePage::LifecycleState  recommendedState(QWebEnginePage* theWrappedObject) const;
   qint64  renderProcessPid(QWebEnginePage* theWrappedObject) const;
   void replaceMisspelledWord(QWebEnginePage* theWrappedObject, const QString&  replacement);
   QUrl  requestedUrl(QWebEnginePage* theWrappedObject) const;
   void runJavaScript(QWebEnginePage* theWrappedObject, const QString&  scriptSource);
   void runJavaScript(QWebEnginePage* theWrappedObject, const QString&  scriptSource, unsigned int  worldId);
   void save(QWebEnginePage* theWrappedObject, const QString&  filePath, QWebEngineDownloadItem::SavePageFormat  format = QWebEngineDownloadItem::MimeHtmlSaveFormat) const;
   QWebEngineScriptCollection*  scripts(QWebEnginePage* theWrappedObject);
   QPointF  scrollPosition(QWebEnginePage* theWrappedObject) const;
   QString  selectedText(QWebEnginePage* theWrappedObject) const;
   void setAudioMuted(QWebEnginePage* theWrappedObject, bool  muted);
   void setBackgroundColor(QWebEnginePage* theWrappedObject, const QColor&  color);
   void setContent(QWebEnginePage* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setDevToolsPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setFeaturePermission(QWebEnginePage* theWrappedObject, const QUrl&  securityOrigin, QWebEnginePage::Feature  feature, QWebEnginePage::PermissionPolicy  policy);
   void setHtml(QWebEnginePage* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setInspectedPage(QWebEnginePage* theWrappedObject, QWebEnginePage*  page);
   void setLifecycleState(QWebEnginePage* theWrappedObject, QWebEnginePage::LifecycleState  state);
   void setUrl(QWebEnginePage* theWrappedObject, const QUrl&  url);
   void setUrlRequestInterceptor(QWebEnginePage* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   void setView(QWebEnginePage* theWrappedObject, QWidget*  view);
   void setVisible(QWebEnginePage* theWrappedObject, bool  visible);
   void setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1);
   void setWebChannel(QWebEnginePage* theWrappedObject, QWebChannel*  arg__1, uint  worldId);
   void setZoomFactor(QWebEnginePage* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEnginePage* theWrappedObject) const;
   QString  title(QWebEnginePage* theWrappedObject) const;
   void triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   void py_q_triggerAction(QWebEnginePage* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false){  (((PythonQtPublicPromoter_QWebEnginePage*)theWrappedObject)->py_q_triggerAction(action, checked));}
   QUrl  url(QWebEnginePage* theWrappedObject) const;
   QWidget*  view(QWebEnginePage* theWrappedObject) const;
   QWebChannel*  webChannel(QWebEnginePage* theWrappedObject) const;
   qreal  zoomFactor(QWebEnginePage* theWrappedObject) const;
};





class PythonQtShell_QWebEngineProfile : public QWebEngineProfile
{
public:
    PythonQtShell_QWebEngineProfile(QObject*  parent = nullptr):QWebEngineProfile(parent),_wrapper(nullptr) {};
    PythonQtShell_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr):QWebEngineProfile(name, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineProfile() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QWebEngineProfile : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineProfile* new_QWebEngineProfile(QObject*  parent = nullptr);
QWebEngineProfile* new_QWebEngineProfile(const QString&  name, QObject*  parent = nullptr);
void delete_QWebEngineProfile(QWebEngineProfile* obj) { delete obj; }
   QString  cachePath(QWebEngineProfile* theWrappedObject) const;
   void clearAllVisitedLinks(QWebEngineProfile* theWrappedObject);
   void clearHttpCache(QWebEngineProfile* theWrappedObject);
   void clearVisitedLinks(QWebEngineProfile* theWrappedObject, const QList<QUrl >&  urls);
   QWebEngineClientCertificateStore*  clientCertificateStore(QWebEngineProfile* theWrappedObject);
   QWebEngineCookieStore*  cookieStore(QWebEngineProfile* theWrappedObject);
   QWebEngineProfile*  static_QWebEngineProfile_defaultProfile();
   QString  downloadPath(QWebEngineProfile* theWrappedObject) const;
   QString  httpAcceptLanguage(QWebEngineProfile* theWrappedObject) const;
   int  httpCacheMaximumSize(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::HttpCacheType  httpCacheType(QWebEngineProfile* theWrappedObject) const;
   QString  httpUserAgent(QWebEngineProfile* theWrappedObject) const;
   void installUrlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme, QWebEngineUrlSchemeHandler*  arg__2);
   bool  isOffTheRecord(QWebEngineProfile* theWrappedObject) const;
   bool  isSpellCheckEnabled(QWebEngineProfile* theWrappedObject) const;
   bool  isUsedForGlobalCertificateVerification(QWebEngineProfile* theWrappedObject) const;
   QWebEngineProfile::PersistentCookiesPolicy  persistentCookiesPolicy(QWebEngineProfile* theWrappedObject) const;
   QString  persistentStoragePath(QWebEngineProfile* theWrappedObject) const;
   void removeAllUrlSchemeHandlers(QWebEngineProfile* theWrappedObject);
   void removeUrlScheme(QWebEngineProfile* theWrappedObject, const QByteArray&  scheme);
   void removeUrlSchemeHandler(QWebEngineProfile* theWrappedObject, QWebEngineUrlSchemeHandler*  arg__1);
   QWebEngineScriptCollection*  scripts(QWebEngineProfile* theWrappedObject) const;
   void setCachePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setDownloadPath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setHttpAcceptLanguage(QWebEngineProfile* theWrappedObject, const QString&  httpAcceptLanguage);
   void setHttpCacheMaximumSize(QWebEngineProfile* theWrappedObject, int  maxSize);
   void setHttpCacheType(QWebEngineProfile* theWrappedObject, QWebEngineProfile::HttpCacheType  arg__1);
   void setHttpUserAgent(QWebEngineProfile* theWrappedObject, const QString&  userAgent);
   void setPersistentCookiesPolicy(QWebEngineProfile* theWrappedObject, QWebEngineProfile::PersistentCookiesPolicy  arg__1);
   void setPersistentStoragePath(QWebEngineProfile* theWrappedObject, const QString&  path);
   void setRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   void setSpellCheckEnabled(QWebEngineProfile* theWrappedObject, bool  enabled);
   void setSpellCheckLanguages(QWebEngineProfile* theWrappedObject, const QStringList&  languages);
   void setUrlRequestInterceptor(QWebEngineProfile* theWrappedObject, QWebEngineUrlRequestInterceptor*  interceptor);
   void setUseForGlobalCertificateVerification(QWebEngineProfile* theWrappedObject, bool  enabled = true);
   QWebEngineSettings*  settings(QWebEngineProfile* theWrappedObject) const;
   QStringList  spellCheckLanguages(QWebEngineProfile* theWrappedObject) const;
   QString  storageName(QWebEngineProfile* theWrappedObject) const;
   const QWebEngineUrlSchemeHandler*  urlSchemeHandler(QWebEngineProfile* theWrappedObject, const QByteArray&  arg__1) const;
   bool  visitedLinksContainsUrl(QWebEngineProfile* theWrappedObject, const QUrl&  url) const;
};





class PythonQtWrapper_QWebEngineQuotaRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineQuotaRequest* new_QWebEngineQuotaRequest();
void delete_QWebEngineQuotaRequest(QWebEngineQuotaRequest* obj) { delete obj; }
   void accept(QWebEngineQuotaRequest* theWrappedObject);
   bool  __ne__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  that) const;
   bool  __eq__(QWebEngineQuotaRequest* theWrappedObject, const QWebEngineQuotaRequest&  that) const;
   QUrl  origin(QWebEngineQuotaRequest* theWrappedObject) const;
   void reject(QWebEngineQuotaRequest* theWrappedObject);
   qint64  requestedSize(QWebEngineQuotaRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineRegisterProtocolHandlerRequest : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineRegisterProtocolHandlerRequest* new_QWebEngineRegisterProtocolHandlerRequest();
void delete_QWebEngineRegisterProtocolHandlerRequest(QWebEngineRegisterProtocolHandlerRequest* obj) { delete obj; }
   void accept(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject);
   bool  __ne__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const;
   bool  __eq__(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject, const QWebEngineRegisterProtocolHandlerRequest&  that) const;
   QUrl  origin(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const;
   void reject(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject);
   QString  scheme(QWebEngineRegisterProtocolHandlerRequest* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineScript : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InjectionPoint ScriptWorldId )
enum InjectionPoint{
  Deferred = QWebEngineScript::Deferred,   DocumentReady = QWebEngineScript::DocumentReady,   DocumentCreation = QWebEngineScript::DocumentCreation};
enum ScriptWorldId{
  MainWorld = QWebEngineScript::MainWorld,   ApplicationWorld = QWebEngineScript::ApplicationWorld,   UserWorld = QWebEngineScript::UserWorld};
public slots:
QWebEngineScript* new_QWebEngineScript();
QWebEngineScript* new_QWebEngineScript(const QWebEngineScript&  other);
void delete_QWebEngineScript(QWebEngineScript* obj) { delete obj; }
   QWebEngineScript::InjectionPoint  injectionPoint(QWebEngineScript* theWrappedObject) const;
   bool  isNull(QWebEngineScript* theWrappedObject) const;
   QString  name(QWebEngineScript* theWrappedObject) const;
   bool  __ne__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   QWebEngineScript*  operator_assign(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other);
   bool  __eq__(QWebEngineScript* theWrappedObject, const QWebEngineScript&  other) const;
   bool  runsOnSubFrames(QWebEngineScript* theWrappedObject) const;
   void setInjectionPoint(QWebEngineScript* theWrappedObject, QWebEngineScript::InjectionPoint  arg__1);
   void setName(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setRunsOnSubFrames(QWebEngineScript* theWrappedObject, bool  on);
   void setSourceCode(QWebEngineScript* theWrappedObject, const QString&  arg__1);
   void setWorldId(QWebEngineScript* theWrappedObject, unsigned int  arg__1);
   QString  sourceCode(QWebEngineScript* theWrappedObject) const;
   void swap(QWebEngineScript* theWrappedObject, QWebEngineScript&  other);
   unsigned int  worldId(QWebEngineScript* theWrappedObject) const;
    QString py_toString(QWebEngineScript*);
    bool __nonzero__(QWebEngineScript* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QWebEngineScriptCollection : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineScriptCollection(QWebEngineScriptCollection* obj) { delete obj; }
   void clear(QWebEngineScriptCollection* theWrappedObject);
   bool  contains(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  value) const;
   int  count(QWebEngineScriptCollection* theWrappedObject) const;
   QWebEngineScript  findScript(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const;
   QList<QWebEngineScript >  findScripts(QWebEngineScriptCollection* theWrappedObject, const QString&  name) const;
   void insert(QWebEngineScriptCollection* theWrappedObject, const QList<QWebEngineScript >&  list);
   void insert(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   bool  isEmpty(QWebEngineScriptCollection* theWrappedObject) const;
   bool  remove(QWebEngineScriptCollection* theWrappedObject, const QWebEngineScript&  arg__1);
   int  size(QWebEngineScriptCollection* theWrappedObject) const;
   QList<QWebEngineScript >  toList(QWebEngineScriptCollection* theWrappedObject) const;
    bool __nonzero__(QWebEngineScriptCollection* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QWebEngineSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontFamily FontSize UnknownUrlSchemePolicy WebAttribute )
enum FontFamily{
  StandardFont = QWebEngineSettings::StandardFont,   FixedFont = QWebEngineSettings::FixedFont,   SerifFont = QWebEngineSettings::SerifFont,   SansSerifFont = QWebEngineSettings::SansSerifFont,   CursiveFont = QWebEngineSettings::CursiveFont,   FantasyFont = QWebEngineSettings::FantasyFont,   PictographFont = QWebEngineSettings::PictographFont};
enum FontSize{
  MinimumFontSize = QWebEngineSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebEngineSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebEngineSettings::DefaultFontSize,   DefaultFixedFontSize = QWebEngineSettings::DefaultFixedFontSize};
enum UnknownUrlSchemePolicy{
  DisallowUnknownUrlSchemes = QWebEngineSettings::DisallowUnknownUrlSchemes,   AllowUnknownUrlSchemesFromUserInteraction = QWebEngineSettings::AllowUnknownUrlSchemesFromUserInteraction,   AllowAllUnknownUrlSchemes = QWebEngineSettings::AllowAllUnknownUrlSchemes};
enum WebAttribute{
  AutoLoadImages = QWebEngineSettings::AutoLoadImages,   JavascriptEnabled = QWebEngineSettings::JavascriptEnabled,   JavascriptCanOpenWindows = QWebEngineSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebEngineSettings::JavascriptCanAccessClipboard,   LinksIncludedInFocusChain = QWebEngineSettings::LinksIncludedInFocusChain,   LocalStorageEnabled = QWebEngineSettings::LocalStorageEnabled,   LocalContentCanAccessRemoteUrls = QWebEngineSettings::LocalContentCanAccessRemoteUrls,   XSSAuditingEnabled = QWebEngineSettings::XSSAuditingEnabled,   SpatialNavigationEnabled = QWebEngineSettings::SpatialNavigationEnabled,   LocalContentCanAccessFileUrls = QWebEngineSettings::LocalContentCanAccessFileUrls,   HyperlinkAuditingEnabled = QWebEngineSettings::HyperlinkAuditingEnabled,   ScrollAnimatorEnabled = QWebEngineSettings::ScrollAnimatorEnabled,   ErrorPageEnabled = QWebEngineSettings::ErrorPageEnabled,   PluginsEnabled = QWebEngineSettings::PluginsEnabled,   FullScreenSupportEnabled = QWebEngineSettings::FullScreenSupportEnabled,   ScreenCaptureEnabled = QWebEngineSettings::ScreenCaptureEnabled,   WebGLEnabled = QWebEngineSettings::WebGLEnabled,   Accelerated2dCanvasEnabled = QWebEngineSettings::Accelerated2dCanvasEnabled,   AutoLoadIconsForPage = QWebEngineSettings::AutoLoadIconsForPage,   TouchIconsEnabled = QWebEngineSettings::TouchIconsEnabled,   FocusOnNavigationEnabled = QWebEngineSettings::FocusOnNavigationEnabled,   PrintElementBackgrounds = QWebEngineSettings::PrintElementBackgrounds,   AllowRunningInsecureContent = QWebEngineSettings::AllowRunningInsecureContent,   AllowGeolocationOnInsecureOrigins = QWebEngineSettings::AllowGeolocationOnInsecureOrigins,   AllowWindowActivationFromJavaScript = QWebEngineSettings::AllowWindowActivationFromJavaScript,   ShowScrollBars = QWebEngineSettings::ShowScrollBars,   PlaybackRequiresUserGesture = QWebEngineSettings::PlaybackRequiresUserGesture,   WebRTCPublicInterfacesOnly = QWebEngineSettings::WebRTCPublicInterfacesOnly,   JavascriptCanPaste = QWebEngineSettings::JavascriptCanPaste,   DnsPrefetchEnabled = QWebEngineSettings::DnsPrefetchEnabled,   PdfViewerEnabled = QWebEngineSettings::PdfViewerEnabled};
public slots:
   QWebEngineSettings*  static_QWebEngineSettings_defaultSettings();
   QString  defaultTextEncoding(QWebEngineSettings* theWrappedObject) const;
   QString  fontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which) const;
   int  fontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type) const;
   QWebEngineSettings*  static_QWebEngineSettings_globalSettings();
   void resetAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr);
   void resetFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which);
   void resetFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type);
   void resetUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject);
   void setAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr, bool  on);
   void setDefaultTextEncoding(QWebEngineSettings* theWrappedObject, const QString&  encoding);
   void setFontFamily(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontFamily  which, const QString&  family);
   void setFontSize(QWebEngineSettings* theWrappedObject, QWebEngineSettings::FontSize  type, int  size);
   void setUnknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject, QWebEngineSettings::UnknownUrlSchemePolicy  policy);
   bool  testAttribute(QWebEngineSettings* theWrappedObject, QWebEngineSettings::WebAttribute  attr) const;
   QWebEngineSettings::UnknownUrlSchemePolicy  unknownUrlSchemePolicy(QWebEngineSettings* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineUrlRequestInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NavigationType ResourceType )
enum NavigationType{
  NavigationTypeLink = QWebEngineUrlRequestInfo::NavigationTypeLink,   NavigationTypeTyped = QWebEngineUrlRequestInfo::NavigationTypeTyped,   NavigationTypeFormSubmitted = QWebEngineUrlRequestInfo::NavigationTypeFormSubmitted,   NavigationTypeBackForward = QWebEngineUrlRequestInfo::NavigationTypeBackForward,   NavigationTypeReload = QWebEngineUrlRequestInfo::NavigationTypeReload,   NavigationTypeOther = QWebEngineUrlRequestInfo::NavigationTypeOther,   NavigationTypeRedirect = QWebEngineUrlRequestInfo::NavigationTypeRedirect};
enum ResourceType{
  ResourceTypeMainFrame = QWebEngineUrlRequestInfo::ResourceTypeMainFrame,   ResourceTypeSubFrame = QWebEngineUrlRequestInfo::ResourceTypeSubFrame,   ResourceTypeStylesheet = QWebEngineUrlRequestInfo::ResourceTypeStylesheet,   ResourceTypeScript = QWebEngineUrlRequestInfo::ResourceTypeScript,   ResourceTypeImage = QWebEngineUrlRequestInfo::ResourceTypeImage,   ResourceTypeFontResource = QWebEngineUrlRequestInfo::ResourceTypeFontResource,   ResourceTypeSubResource = QWebEngineUrlRequestInfo::ResourceTypeSubResource,   ResourceTypeObject = QWebEngineUrlRequestInfo::ResourceTypeObject,   ResourceTypeMedia = QWebEngineUrlRequestInfo::ResourceTypeMedia,   ResourceTypeWorker = QWebEngineUrlRequestInfo::ResourceTypeWorker,   ResourceTypeSharedWorker = QWebEngineUrlRequestInfo::ResourceTypeSharedWorker,   ResourceTypePrefetch = QWebEngineUrlRequestInfo::ResourceTypePrefetch,   ResourceTypeFavicon = QWebEngineUrlRequestInfo::ResourceTypeFavicon,   ResourceTypeXhr = QWebEngineUrlRequestInfo::ResourceTypeXhr,   ResourceTypePing = QWebEngineUrlRequestInfo::ResourceTypePing,   ResourceTypeServiceWorker = QWebEngineUrlRequestInfo::ResourceTypeServiceWorker,   ResourceTypeCspReport = QWebEngineUrlRequestInfo::ResourceTypeCspReport,   ResourceTypePluginResource = QWebEngineUrlRequestInfo::ResourceTypePluginResource,   ResourceTypeNavigationPreloadMainFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadMainFrame,   ResourceTypeNavigationPreloadSubFrame = QWebEngineUrlRequestInfo::ResourceTypeNavigationPreloadSubFrame,   ResourceTypeLast = QWebEngineUrlRequestInfo::ResourceTypeLast,   ResourceTypeUnknown = QWebEngineUrlRequestInfo::ResourceTypeUnknown};
public slots:
   void block(QWebEngineUrlRequestInfo* theWrappedObject, bool  shouldBlock);
   bool  changed(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  firstPartyUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  initiator(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::NavigationType  navigationType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestInfo* theWrappedObject, const QUrl&  url);
   QByteArray  requestMethod(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestInfo* theWrappedObject) const;
   QWebEngineUrlRequestInfo::ResourceType  resourceType(QWebEngineUrlRequestInfo* theWrappedObject) const;
   void setHttpHeader(QWebEngineUrlRequestInfo* theWrappedObject, const QByteArray&  name, const QByteArray&  value);
};





class PythonQtShell_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{
public:
    PythonQtShell_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr):QWebEngineUrlRequestInterceptor(p),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlRequestInterceptor() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void interceptRequest(QWebEngineUrlRequestInfo&  info) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor : public QWebEngineUrlRequestInterceptor
{ public:
inline void py_q_interceptRequest(QWebEngineUrlRequestInfo&  info) { this->interceptRequest(info); }
};

class PythonQtWrapper_QWebEngineUrlRequestInterceptor : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlRequestInterceptor* new_QWebEngineUrlRequestInterceptor(QObject*  p = nullptr);
void delete_QWebEngineUrlRequestInterceptor(QWebEngineUrlRequestInterceptor* obj) { delete obj; }
   void interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info);
   void py_q_interceptRequest(QWebEngineUrlRequestInterceptor* theWrappedObject, QWebEngineUrlRequestInfo&  info){  (((PythonQtPublicPromoter_QWebEngineUrlRequestInterceptor*)theWrappedObject)->py_q_interceptRequest(info));}
};





class PythonQtWrapper_QWebEngineUrlRequestJob : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QWebEngineUrlRequestJob(QWebEngineUrlRequestJob* obj) { delete obj; }
   void fail(QWebEngineUrlRequestJob* theWrappedObject, QWebEngineUrlRequestJob::Error  error);
   QUrl  initiator(QWebEngineUrlRequestJob* theWrappedObject) const;
   void redirect(QWebEngineUrlRequestJob* theWrappedObject, const QUrl&  url);
   void reply(QWebEngineUrlRequestJob* theWrappedObject, const QByteArray&  contentType, QIODevice*  device);
   QMap<QByteArray , QByteArray >  requestHeaders(QWebEngineUrlRequestJob* theWrappedObject) const;
   QByteArray  requestMethod(QWebEngineUrlRequestJob* theWrappedObject) const;
   QUrl  requestUrl(QWebEngineUrlRequestJob* theWrappedObject) const;
};





class PythonQtWrapper_QWebEngineUrlScheme : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Flag SpecialPort Syntax )
Q_FLAGS(Flags )
enum Flag{
  SecureScheme = QWebEngineUrlScheme::SecureScheme,   LocalScheme = QWebEngineUrlScheme::LocalScheme,   LocalAccessAllowed = QWebEngineUrlScheme::LocalAccessAllowed,   NoAccessAllowed = QWebEngineUrlScheme::NoAccessAllowed,   ServiceWorkersAllowed = QWebEngineUrlScheme::ServiceWorkersAllowed,   ViewSourceAllowed = QWebEngineUrlScheme::ViewSourceAllowed,   ContentSecurityPolicyIgnored = QWebEngineUrlScheme::ContentSecurityPolicyIgnored,   CorsEnabled = QWebEngineUrlScheme::CorsEnabled};
enum SpecialPort{
  PortUnspecified = QWebEngineUrlScheme::PortUnspecified};
enum class Syntax{
  HostPortAndUserInformation = static_cast<int>(QWebEngineUrlScheme::Syntax::HostPortAndUserInformation),   HostAndPort = static_cast<int>(QWebEngineUrlScheme::Syntax::HostAndPort),   Host = static_cast<int>(QWebEngineUrlScheme::Syntax::Host),   Path = static_cast<int>(QWebEngineUrlScheme::Syntax::Path)};
Q_DECLARE_FLAGS(Flags, Flag)
public slots:
QWebEngineUrlScheme* new_QWebEngineUrlScheme();
QWebEngineUrlScheme* new_QWebEngineUrlScheme(const QByteArray&  name);
QWebEngineUrlScheme* new_QWebEngineUrlScheme(const QWebEngineUrlScheme&  that);
void delete_QWebEngineUrlScheme(QWebEngineUrlScheme* obj) { delete obj; }
   int  defaultPort(QWebEngineUrlScheme* theWrappedObject) const;
   QWebEngineUrlScheme::Flags  flags(QWebEngineUrlScheme* theWrappedObject) const;
   QByteArray  name(QWebEngineUrlScheme* theWrappedObject) const;
   bool  __ne__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const;
   QWebEngineUrlScheme*  operator_assign(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that);
   bool  __eq__(QWebEngineUrlScheme* theWrappedObject, const QWebEngineUrlScheme&  that) const;
   void static_QWebEngineUrlScheme_registerScheme(const QWebEngineUrlScheme&  scheme);
   QWebEngineUrlScheme  static_QWebEngineUrlScheme_schemeByName(const QByteArray&  name);
   void setDefaultPort(QWebEngineUrlScheme* theWrappedObject, int  newValue);
   void setFlags(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Flags  newValue);
   void setName(QWebEngineUrlScheme* theWrappedObject, const QByteArray&  newValue);
   void setSyntax(QWebEngineUrlScheme* theWrappedObject, QWebEngineUrlScheme::Syntax  newValue);
   QWebEngineUrlScheme::Syntax  syntax(QWebEngineUrlScheme* theWrappedObject) const;
};





class PythonQtShell_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{
public:
    PythonQtShell_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr):QWebEngineUrlSchemeHandler(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineUrlSchemeHandler() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void requestStarted(QWebEngineUrlRequestJob*  arg__1) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineUrlSchemeHandler : public QWebEngineUrlSchemeHandler
{ public:
inline void py_q_requestStarted(QWebEngineUrlRequestJob*  arg__1) { this->requestStarted(arg__1); }
};

class PythonQtWrapper_QWebEngineUrlSchemeHandler : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineUrlSchemeHandler* new_QWebEngineUrlSchemeHandler(QObject*  parent = nullptr);
void delete_QWebEngineUrlSchemeHandler(QWebEngineUrlSchemeHandler* obj) { delete obj; }
   void requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1);
   void py_q_requestStarted(QWebEngineUrlSchemeHandler* theWrappedObject, QWebEngineUrlRequestJob*  arg__1){  (((PythonQtPublicPromoter_QWebEngineUrlSchemeHandler*)theWrappedObject)->py_q_requestStarted(arg__1));}
};





class PythonQtShell_QWebEngineView : public QWebEngineView
{
public:
    PythonQtShell_QWebEngineView(QWidget*  parent = nullptr):QWebEngineView(parent),_wrapper(nullptr) {};

   ~PythonQtShell_QWebEngineView() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  arg__1) override;
void contextMenuEvent(QContextMenuEvent*  arg__1) override;
QWebEngineView*  createWindow(QWebEnginePage::WebWindowType  type) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  e) override;
void dragLeaveEvent(QDragLeaveEvent*  e) override;
void dragMoveEvent(QDragMoveEvent*  e) override;
void dropEvent(QDropEvent*  e) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  arg__1) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  arg__1) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  arg__1) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QWebEngineView : public QWebEngineView
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { this->closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { this->contextMenuEvent(arg__1); }
inline QWebEngineView*  promoted_createWindow(QWebEnginePage::WebWindowType  type) { return this->createWindow(type); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  e) { this->dragEnterEvent(e); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  e) { this->dragLeaveEvent(e); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  e) { this->dragMoveEvent(e); }
inline void promoted_dropEvent(QDropEvent*  e) { this->dropEvent(e); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { this->showEvent(arg__1); }
inline void py_q_closeEvent(QCloseEvent*  arg__1) { QWebEngineView::closeEvent(arg__1); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebEngineView::contextMenuEvent(arg__1); }
inline QWebEngineView*  py_q_createWindow(QWebEnginePage::WebWindowType  type) { return QWebEngineView::createWindow(type); }
inline void py_q_dragEnterEvent(QDragEnterEvent*  e) { QWebEngineView::dragEnterEvent(e); }
inline void py_q_dragLeaveEvent(QDragLeaveEvent*  e) { QWebEngineView::dragLeaveEvent(e); }
inline void py_q_dragMoveEvent(QDragMoveEvent*  e) { QWebEngineView::dragMoveEvent(e); }
inline void py_q_dropEvent(QDropEvent*  e) { QWebEngineView::dropEvent(e); }
inline bool  py_q_event(QEvent*  arg__1) { return QWebEngineView::event(arg__1); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QWebEngineView::hideEvent(arg__1); }
inline void py_q_showEvent(QShowEvent*  arg__1) { QWebEngineView::showEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QWebEngineView::sizeHint(); }
};

class PythonQtWrapper_QWebEngineView : public QObject
{ Q_OBJECT
public:
public slots:
QWebEngineView* new_QWebEngineView(QWidget*  parent = nullptr);
void delete_QWebEngineView(QWebEngineView* obj) { delete obj; }
   void py_q_closeEvent(QWebEngineView* theWrappedObject, QCloseEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_closeEvent(arg__1));}
   void py_q_contextMenuEvent(QWebEngineView* theWrappedObject, QContextMenuEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_contextMenuEvent(arg__1));}
   QWebEngineView*  createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type);
   QWebEngineView*  py_q_createWindow(QWebEngineView* theWrappedObject, QWebEnginePage::WebWindowType  type){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_createWindow(type));}
   void py_q_dragEnterEvent(QWebEngineView* theWrappedObject, QDragEnterEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragEnterEvent(e));}
   void py_q_dragLeaveEvent(QWebEngineView* theWrappedObject, QDragLeaveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragLeaveEvent(e));}
   void py_q_dragMoveEvent(QWebEngineView* theWrappedObject, QDragMoveEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dragMoveEvent(e));}
   void py_q_dropEvent(QWebEngineView* theWrappedObject, QDropEvent*  e){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_dropEvent(e));}
   bool  py_q_event(QWebEngineView* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_event(arg__1));}
   bool  hasSelection(QWebEngineView* theWrappedObject) const;
   void py_q_hideEvent(QWebEngineView* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_hideEvent(arg__1));}
   QWebEngineHistory*  history(QWebEngineView* theWrappedObject) const;
   QIcon  icon(QWebEngineView* theWrappedObject) const;
   QUrl  iconUrl(QWebEngineView* theWrappedObject) const;
   void load(QWebEngineView* theWrappedObject, const QUrl&  url);
   void load(QWebEngineView* theWrappedObject, const QWebEngineHttpRequest&  request);
   QWebEnginePage*  page(QWebEngineView* theWrappedObject) const;
   QAction*  pageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action) const;
   QString  selectedText(QWebEngineView* theWrappedObject) const;
   void setContent(QWebEngineView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void setHtml(QWebEngineView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setPage(QWebEngineView* theWrappedObject, QWebEnginePage*  page);
   void setUrl(QWebEngineView* theWrappedObject, const QUrl&  url);
   void setZoomFactor(QWebEngineView* theWrappedObject, qreal  factor);
   QWebEngineSettings*  settings(QWebEngineView* theWrappedObject) const;
   void py_q_showEvent(QWebEngineView* theWrappedObject, QShowEvent*  arg__1){  (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_showEvent(arg__1));}
   QSize  sizeHint(QWebEngineView* theWrappedObject) const;
   QSize  py_q_sizeHint(QWebEngineView* theWrappedObject) const{  return (((PythonQtPublicPromoter_QWebEngineView*)theWrappedObject)->py_q_sizeHint());}
   QString  title(QWebEngineView* theWrappedObject) const;
   void triggerPageAction(QWebEngineView* theWrappedObject, QWebEnginePage::WebAction  action, bool  checked = false);
   QUrl  url(QWebEngineView* theWrappedObject) const;
   qreal  zoomFactor(QWebEngineView* theWrappedObject) const;
};


