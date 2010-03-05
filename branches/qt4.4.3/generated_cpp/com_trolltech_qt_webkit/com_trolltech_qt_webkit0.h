#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebframe.h>
#include <qwebhistoryinterface.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>



class PythonQtPublicPromoter_QWebFrame : public QWebFrame
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebFrame::event(arg__1); }
};

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
public slots:
   void render(QWebFrame* theWrappedObject, QPainter*  painter);
   void render(QWebFrame* theWrappedObject, QPainter*  painter, const QRegion&  clip);
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   QString  toHtml(QWebFrame* theWrappedObject) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   QString  title(QWebFrame* theWrappedObject) const;
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   QUrl  url(QWebFrame* theWrappedObject) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   QString  frameName(QWebFrame* theWrappedObject) const;
   QRect  geometry(QWebFrame* theWrappedObject) const;
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   QString  toPlainText(QWebFrame* theWrappedObject) const;
};





class PythonQtShell_QWebHistoryInterface : public QWebHistoryInterface
{
public:
    PythonQtShell_QWebHistoryInterface(QObject*  parent = 0):QWebHistoryInterface(parent),_wrapper(NULL) {};

virtual bool  historyContains(const QString&  url) const;
virtual void addHistoryEntry(const QString&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebHistoryInterface : public QObject
{ Q_OBJECT
public:
public slots:
QWebHistoryInterface* new_QWebHistoryInterface(QObject*  parent = 0);
void delete_QWebHistoryInterface(QWebHistoryInterface* obj) { delete obj; } 
   void static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface);
   QWebHistoryInterface*  static_QWebHistoryInterface_defaultInterface();
};





class PythonQtWrapper_QWebHitTestResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebHitTestResult* new_QWebHitTestResult();
QWebHitTestResult* new_QWebHitTestResult(const QWebHitTestResult&  other);
void delete_QWebHitTestResult(QWebHitTestResult* obj) { delete obj; } 
   QString  title(QWebHitTestResult* theWrappedObject) const;
   QString  alternateText(QWebHitTestResult* theWrappedObject) const;
   QPoint  pos(QWebHitTestResult* theWrappedObject) const;
   bool  isContentSelected(QWebHitTestResult* theWrappedObject) const;
   QString  linkText(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  linkTargetFrame(QWebHitTestResult* theWrappedObject) const;
   bool  isNull(QWebHitTestResult* theWrappedObject) const;
   QPixmap  pixmap(QWebHitTestResult* theWrappedObject) const;
   bool  isContentEditable(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkTitle(QWebHitTestResult* theWrappedObject) const;
   QUrl  imageUrl(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkUrl(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  frame(QWebHitTestResult* theWrappedObject) const;
};





class PythonQtShell_QWebPage : public QWebPage
{
public:
    PythonQtShell_QWebPage(QObject*  parent = 0):QWebPage(parent),_wrapper(NULL) {};

virtual QString  userAgentForUrl(const QUrl&  url) const;
virtual bool  acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
virtual void triggerAction(QWebPage::WebAction  action, bool  checked = false);
virtual QWebPage*  createWindow(QWebPage::WebWindowType  type);
virtual void javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID);
virtual QString  chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile);
virtual bool  javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
virtual bool  event(QEvent*  arg__1);
virtual bool  supportsExtension(QWebPage::Extension  extension) const;
virtual QObject*  createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
virtual bool  javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg);
virtual void javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPage : public QWebPage
{ public:
inline QString  promoted_userAgentForUrl(const QUrl&  url) const { return QWebPage::userAgentForUrl(url); }
inline bool  promoted_acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type) { return QWebPage::acceptNavigationRequest(frame, request, type); }
inline void promoted_triggerAction(QWebPage::WebAction  action, bool  checked = false) { QWebPage::triggerAction(action, checked); }
inline QWebPage*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebPage::createWindow(type); }
inline void promoted_javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID) { QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID); }
inline QString  promoted_chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile) { return QWebPage::chooseFile(originatingFrame, oldFile); }
inline bool  promoted_javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebPage::event(arg__1); }
inline bool  promoted_supportsExtension(QWebPage::Extension  extension) const { return QWebPage::supportsExtension(extension); }
inline QObject*  promoted_createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues) { return QWebPage::createPlugin(classid, url, paramNames, paramValues); }
inline bool  promoted_javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg) { return QWebPage::javaScriptConfirm(originatingFrame, msg); }
inline void promoted_javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg) { QWebPage::javaScriptAlert(originatingFrame, msg); }
};

class PythonQtWrapper_QWebPage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WebWindowType FindFlag Extension )
Q_FLAGS(FindFlags )
enum WebWindowType{
  WebBrowserWindow = QWebPage::WebBrowserWindow,   WebModalDialog = QWebPage::WebModalDialog};
enum FindFlag{
  FindBackward = QWebPage::FindBackward,   FindCaseSensitively = QWebPage::FindCaseSensitively,   FindWrapsAroundDocument = QWebPage::FindWrapsAroundDocument};
enum Extension{
};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebPage* new_QWebPage(QObject*  parent = 0);
void delete_QWebPage(QWebPage* obj) { delete obj; } 
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   QString  selectedText(QWebPage* theWrappedObject) const;
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   QString  userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const;
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   bool  acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   QSize  viewportSize(QWebPage* theWrappedObject) const;
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QWebPage*  createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type);
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   QPalette  palette(QWebPage* theWrappedObject) const;
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   void javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID);
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   QString  chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile);
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   bool  javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   QObject*  createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
   bool  javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
   QWidget*  view(QWebPage* theWrappedObject) const;
   bool  isModified(QWebPage* theWrappedObject) const;
   void javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
};





class PythonQtShell_QWebPluginFactory : public QWebPluginFactory
{
public:
    PythonQtShell_QWebPluginFactory(QObject*  parent = 0):QWebPluginFactory(parent),_wrapper(NULL) {};

virtual void refreshPlugins();
virtual QList<QWebPluginFactory::Plugin >  plugins() const;
virtual bool  supportsExtension(QWebPluginFactory::Extension  extension) const;
virtual QObject*  create(const QString&  mimeType, const QUrl&  url, const QStringList&  argumentNames, const QStringList&  argumentValues) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPluginFactory : public QWebPluginFactory
{ public:
inline void promoted_refreshPlugins() { QWebPluginFactory::refreshPlugins(); }
inline bool  promoted_supportsExtension(QWebPluginFactory::Extension  extension) const { return QWebPluginFactory::supportsExtension(extension); }
};

class PythonQtWrapper_QWebPluginFactory : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Extension )
enum Extension{
};
public slots:
QWebPluginFactory* new_QWebPluginFactory(QObject*  parent = 0);
void delete_QWebPluginFactory(QWebPluginFactory* obj) { delete obj; } 
   void refreshPlugins(QWebPluginFactory* theWrappedObject);
   bool  supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const;
};





class PythonQtWrapper_QWebSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FontSize WebGraphic FontFamily WebAttribute )
enum FontSize{
  MinimumFontSize = QWebSettings::MinimumFontSize,   MinimumLogicalFontSize = QWebSettings::MinimumLogicalFontSize,   DefaultFontSize = QWebSettings::DefaultFontSize,   DefaultFixedFontSize = QWebSettings::DefaultFixedFontSize};
enum WebGraphic{
  MissingImageGraphic = QWebSettings::MissingImageGraphic,   MissingPluginGraphic = QWebSettings::MissingPluginGraphic,   DefaultFrameIconGraphic = QWebSettings::DefaultFrameIconGraphic,   TextAreaSizeGripCornerGraphic = QWebSettings::TextAreaSizeGripCornerGraphic};
enum FontFamily{
  StandardFont = QWebSettings::StandardFont,   FixedFont = QWebSettings::FixedFont,   SerifFont = QWebSettings::SerifFont,   SansSerifFont = QWebSettings::SansSerifFont,   CursiveFont = QWebSettings::CursiveFont,   FantasyFont = QWebSettings::FantasyFont};
enum WebAttribute{
  AutoLoadImages = QWebSettings::AutoLoadImages,   JavascriptEnabled = QWebSettings::JavascriptEnabled,   JavaEnabled = QWebSettings::JavaEnabled,   PluginsEnabled = QWebSettings::PluginsEnabled,   PrivateBrowsingEnabled = QWebSettings::PrivateBrowsingEnabled,   JavascriptCanOpenWindows = QWebSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebSettings::JavascriptCanAccessClipboard,   DeveloperExtrasEnabled = QWebSettings::DeveloperExtrasEnabled,   LinksIncludedInFocusChain = QWebSettings::LinksIncludedInFocusChain};
public slots:
   QUrl  userStyleSheetUrl(QWebSettings* theWrappedObject) const;
   void resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which);
   void static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic);
   void resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr);
   QString  fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const;
   QWebSettings*  static_QWebSettings_globalSettings();
   void setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on);
   int  static_QWebSettings_maximumPagesInCache();
   void static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity);
   QPixmap  static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type);
   void static_QWebSettings_clearIconDatabase();
   QString  static_QWebSettings_iconDatabasePath();
   void setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size);
   void static_QWebSettings_setMaximumPagesInCache(int  pages);
   void setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location);
   bool  testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const;
   int  fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const;
   QIcon  static_QWebSettings_iconForUrl(const QUrl&  url);
   void setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family);
   void static_QWebSettings_setIconDatabasePath(const QString&  location);
   void resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type);
};





class PythonQtShell_QWebView : public QWebView
{
public:
    PythonQtShell_QWebView(QWidget*  parent = 0):QWebView(parent),_wrapper(NULL) {};

virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual bool  focusNextPrevChild(bool  next);
virtual QWebView*  createWindow(QWebPage::WebWindowType  type);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  ev);
virtual bool  event(QEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  e);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebView : public QWebView
{ public:
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWebView::keyPressEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWebView::wheelEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWebView::mouseMoveEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QWebView::inputMethodQuery(property); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWebView::focusNextPrevChild(next); }
inline QWebView*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebView::createWindow(type); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWebView::mouseDoubleClickEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWebView::dragEnterEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWebView::focusInEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebView::contextMenuEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWebView::inputMethodEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWebView::mouseReleaseEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWebView::changeEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWebView::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWebView::dragMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  ev) { QWebView::paintEvent(ev); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebView::event(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWebView::dropEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QWebView::resizeEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWebView::focusOutEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWebView::keyReleaseEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWebView::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QWebView : public QObject
{ Q_OBJECT
public:
public slots:
QWebView* new_QWebView(QWidget*  parent = 0);
void delete_QWebView(QWebView* obj) { delete obj; } 
   QString  selectedText(QWebView* theWrappedObject) const;
   void keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   void setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1);
   QSize  sizeHint(QWebView* theWrappedObject) const;
   void setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor);
   void setPage(QWebView* theWrappedObject, QWebPage*  page);
   void load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   QAction*  pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QString  title(QWebView* theWrappedObject) const;
   void load(QWebView* theWrappedObject, const QUrl&  url);
   bool  isModified(QWebView* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const;
   bool  focusNextPrevChild(QWebView* theWrappedObject, bool  next);
   QWebView*  createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type);
   bool  findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QWebSettings*  settings(QWebView* theWrappedObject) const;
   void dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1);
   QWebHistory*  history(QWebView* theWrappedObject) const;
   void focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   void contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1);
   void inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   qreal  textSizeMultiplier(QWebView* theWrappedObject) const;
   void mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   QIcon  icon(QWebView* theWrappedObject) const;
   void changeEvent(QWebView* theWrappedObject, QEvent*  arg__1);
   void triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1);
   QWebPage*  page(QWebView* theWrappedObject) const;
   void paintEvent(QWebView* theWrappedObject, QPaintEvent*  ev);
   bool  event(QWebView* theWrappedObject, QEvent*  arg__1);
   void dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1);
   void resizeEvent(QWebView* theWrappedObject, QResizeEvent*  e);
   QUrl  url(QWebView* theWrappedObject) const;
   void focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   void setUrl(QWebView* theWrappedObject, const QUrl&  url);
   void keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   void mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
};


