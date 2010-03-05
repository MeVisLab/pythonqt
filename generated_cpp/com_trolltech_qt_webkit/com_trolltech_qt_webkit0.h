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
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswebview.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
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
#include <qstyleoption.h>
#include <qundostack.h>
#include <qurl.h>
#include <qwebdatabase.h>
#include <qwebelement.h>
#include <qwebframe.h>
#include <qwebhistoryinterface.h>
#include <qwebinspector.h>
#include <qwebpage.h>
#include <qwebpluginfactory.h>
#include <qwebsecurityorigin.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>



class PythonQtShell_QGraphicsWebView : public QGraphicsWebView
{
public:
    PythonQtShell_QGraphicsWebView(QGraphicsItem*  parent = 0):QGraphicsWebView(parent),_wrapper(NULL) {};

virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void updateGeometry();
virtual void wheelEvent(QGraphicsSceneWheelEvent*  arg__1);
virtual QSizeF  sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const;
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void setGeometry(const QRectF&  rect);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  arg__1);
virtual bool  sceneEvent(QEvent*  arg__1);
virtual QVariant  propertyChange(const QString&  propertyName, const QVariant&  value);
virtual void polishEvent();
virtual void ungrabMouseEvent(QEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual bool  windowFrameEvent(QEvent*  e);
virtual void moveEvent(QGraphicsSceneMoveEvent*  event);
virtual void grabKeyboardEvent(QEvent*  event);
virtual void grabMouseEvent(QEvent*  event);
virtual void paintWindowFrame(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual Qt::WindowFrameSection  windowFrameSectionAt(const QPointF&  pos) const;
virtual void ungrabKeyboardEvent(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
virtual void initStyleOption(QStyleOption*  option) const;
virtual void resizeEvent(QGraphicsSceneResizeEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsWebView : public QGraphicsWebView
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsWebView::itemChange(change, value); }
inline void promoted_updateGeometry() { QGraphicsWebView::updateGeometry(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  arg__1) { QGraphicsWebView::wheelEvent(arg__1); }
inline QSizeF  promoted_sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const { return QGraphicsWebView::sizeHint(which, constraint); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseMoveEvent(arg__1); }
inline void promoted_setGeometry(const QRectF&  rect) { QGraphicsWebView::setGeometry(rect); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseDoubleClickEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QGraphicsWebView::focusNextPrevChild(next); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsWebView::inputMethodQuery(query); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusInEvent(arg__1); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  arg__1) { QGraphicsWebView::contextMenuEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mouseReleaseEvent(arg__1); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverLeaveEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QGraphicsWebView::inputMethodEvent(arg__1); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragLeaveEvent(arg__1); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragEnterEvent(arg__1); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  arg__1) { QGraphicsWebView::dropEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QGraphicsWebView::event(arg__1); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  arg__1) { QGraphicsWebView::hoverMoveEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyPressEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QGraphicsWebView::focusOutEvent(arg__1); }
inline void promoted_paint(QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0) { QGraphicsWebView::paint(arg__1, options, widget); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QGraphicsWebView::keyReleaseEvent(arg__1); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  arg__1) { QGraphicsWebView::mousePressEvent(arg__1); }
inline bool  promoted_sceneEvent(QEvent*  arg__1) { return QGraphicsWebView::sceneEvent(arg__1); }
};

class PythonQtWrapper_QGraphicsWebView : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsWebView* new_QGraphicsWebView(QGraphicsItem*  parent = 0);
void delete_QGraphicsWebView(QGraphicsWebView* obj) { delete obj; } 
   QVariant  itemChange(QGraphicsWebView* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void updateGeometry(QGraphicsWebView* theWrappedObject);
   void setHtml(QGraphicsWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void wheelEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneWheelEvent*  arg__1);
   QSizeF  sizeHint(QGraphicsWebView* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const;
   void setPage(QGraphicsWebView* theWrappedObject, QWebPage*  arg__1);
   void load(QGraphicsWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   QAction*  pageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void mouseMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void setGeometry(QGraphicsWebView* theWrappedObject, const QRectF&  rect);
   qreal  zoomFactor(QGraphicsWebView* theWrappedObject) const;
   void load(QGraphicsWebView* theWrappedObject, const QUrl&  url);
   bool  findText(QGraphicsWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void mouseDoubleClickEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   QWebSettings*  settings(QGraphicsWebView* theWrappedObject) const;
   QWebHistory*  history(QGraphicsWebView* theWrappedObject) const;
   bool  focusNextPrevChild(QGraphicsWebView* theWrappedObject, bool  next);
   QVariant  inputMethodQuery(QGraphicsWebView* theWrappedObject, Qt::InputMethodQuery  query) const;
   void focusInEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   void contextMenuEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneContextMenuEvent*  arg__1);
   void mouseReleaseEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   void hoverLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   void inputMethodEvent(QGraphicsWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   void setContent(QGraphicsWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   QIcon  icon(QGraphicsWebView* theWrappedObject) const;
   void dragLeaveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void dragEnterEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void dragMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   void triggerPageAction(QGraphicsWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void setZoomFactor(QGraphicsWebView* theWrappedObject, qreal  arg__1);
   QWebPage*  page(QGraphicsWebView* theWrappedObject) const;
   void dropEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneDragDropEvent*  arg__1);
   bool  event(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
   void hoverMoveEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneHoverEvent*  arg__1);
   void keyPressEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   QUrl  url(QGraphicsWebView* theWrappedObject) const;
   void focusOutEvent(QGraphicsWebView* theWrappedObject, QFocusEvent*  arg__1);
   void setUrl(QGraphicsWebView* theWrappedObject, const QUrl&  arg__1);
   QString  title(QGraphicsWebView* theWrappedObject) const;
   bool  isModified(QGraphicsWebView* theWrappedObject) const;
   void paint(QGraphicsWebView* theWrappedObject, QPainter*  arg__1, const QStyleOptionGraphicsItem*  options, QWidget*  widget = 0);
   void keyReleaseEvent(QGraphicsWebView* theWrappedObject, QKeyEvent*  arg__1);
   void mousePressEvent(QGraphicsWebView* theWrappedObject, QGraphicsSceneMouseEvent*  arg__1);
   bool  sceneEvent(QGraphicsWebView* theWrappedObject, QEvent*  arg__1);
};





class PythonQtWrapper_QWebDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QWebDatabase* new_QWebDatabase(const QWebDatabase&  other);
void delete_QWebDatabase(QWebDatabase* obj) { delete obj; } 
   QString  displayName(QWebDatabase* theWrappedObject) const;
   qint64  size(QWebDatabase* theWrappedObject) const;
   void static_QWebDatabase_removeDatabase(const QWebDatabase&  arg__1);
   QWebDatabase*  operator_assign(QWebDatabase* theWrappedObject, const QWebDatabase&  other);
   QWebSecurityOrigin  origin(QWebDatabase* theWrappedObject) const;
   QString  name(QWebDatabase* theWrappedObject) const;
   void static_QWebDatabase_removeAllDatabases();
   qint64  expectedSize(QWebDatabase* theWrappedObject) const;
   QString  fileName(QWebDatabase* theWrappedObject) const;
};





class PythonQtWrapper_QWebElement : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleResolveStrategy )
enum StyleResolveStrategy{
  InlineStyle = QWebElement::InlineStyle,   CascadedStyle = QWebElement::CascadedStyle,   ComputedStyle = QWebElement::ComputedStyle};
public slots:
QWebElement* new_QWebElement();
QWebElement* new_QWebElement(const QWebElement&  arg__1);
void delete_QWebElement(QWebElement* obj) { delete obj; } 
   QWebElement  previousSibling(QWebElement* theWrappedObject) const;
   void render(QWebElement* theWrappedObject, QPainter*  painter);
   void removeClass(QWebElement* theWrappedObject, const QString&  name);
   QWebElement  firstChild(QWebElement* theWrappedObject) const;
   QString  attribute(QWebElement* theWrappedObject, const QString&  name, const QString&  defaultValue = QString()) const;
   QWebElement  nextSibling(QWebElement* theWrappedObject) const;
   void appendInside(QWebElement* theWrappedObject, const QWebElement&  element);
   void appendInside(QWebElement* theWrappedObject, const QString&  markup);
   bool  hasAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   QWebElement  clone(QWebElement* theWrappedObject) const;
   bool  hasFocus(QWebElement* theWrappedObject) const;
   QWebElement  parent(QWebElement* theWrappedObject) const;
   QString  attributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  defaultValue = QString()) const;
   void addClass(QWebElement* theWrappedObject, const QString&  name);
   QVariant  evaluateJavaScript(QWebElement* theWrappedObject, const QString&  scriptSource);
   bool  hasAttributes(QWebElement* theWrappedObject) const;
   void prependInside(QWebElement* theWrappedObject, const QWebElement&  element);
   void prependInside(QWebElement* theWrappedObject, const QString&  markup);
   QString  localName(QWebElement* theWrappedObject) const;
   void setOuterXml(QWebElement* theWrappedObject, const QString&  markup);
   bool  hasClass(QWebElement* theWrappedObject, const QString&  name) const;
   void encloseWith(QWebElement* theWrappedObject, const QWebElement&  element);
   void encloseWith(QWebElement* theWrappedObject, const QString&  markup);
   void setAttribute(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   void removeAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void toggleClass(QWebElement* theWrappedObject, const QString&  name);
   QString  tagName(QWebElement* theWrappedObject) const;
   void setPlainText(QWebElement* theWrappedObject, const QString&  text);
   void setAttributeNS(QWebElement* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void removeFromDocument(QWebElement* theWrappedObject);
   QWebFrame*  webFrame(QWebElement* theWrappedObject) const;
   QString  toInnerXml(QWebElement* theWrappedObject) const;
   bool  operator_equal(QWebElement* theWrappedObject, const QWebElement&  o) const;
   void replace(QWebElement* theWrappedObject, const QWebElement&  element);
   void replace(QWebElement* theWrappedObject, const QString&  markup);
   QString  namespaceUri(QWebElement* theWrappedObject) const;
   QStringList  attributeNames(QWebElement* theWrappedObject, const QString&  namespaceUri = QString()) const;
   QWebElement*  operator_assign(QWebElement* theWrappedObject, const QWebElement&  arg__1);
   void removeAllChildren(QWebElement* theWrappedObject);
   QString  styleProperty(QWebElement* theWrappedObject, const QString&  name, QWebElement::StyleResolveStrategy  strategy) const;
   void setStyleProperty(QWebElement* theWrappedObject, const QString&  name, const QString&  value);
   bool  hasAttribute(QWebElement* theWrappedObject, const QString&  name) const;
   QWebElement  findFirst(QWebElement* theWrappedObject, const QString&  selectorQuery) const;
   void appendOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   void appendOutside(QWebElement* theWrappedObject, const QString&  markup);
   QWebElement*  takeFromDocument(QWebElement* theWrappedObject);
   bool  isNull(QWebElement* theWrappedObject) const;
   QRect  geometry(QWebElement* theWrappedObject) const;
   QStringList  classes(QWebElement* theWrappedObject) const;
   void setFocus(QWebElement* theWrappedObject);
   QWebElement  document(QWebElement* theWrappedObject) const;
   QString  prefix(QWebElement* theWrappedObject) const;
   QWebElement  lastChild(QWebElement* theWrappedObject) const;
   QString  toPlainText(QWebElement* theWrappedObject) const;
   void setInnerXml(QWebElement* theWrappedObject, const QString&  markup);
   void encloseContentsWith(QWebElement* theWrappedObject, const QString&  markup);
   void encloseContentsWith(QWebElement* theWrappedObject, const QWebElement&  element);
   QString  toOuterXml(QWebElement* theWrappedObject) const;
   void removeAttribute(QWebElement* theWrappedObject, const QString&  name);
   void prependOutside(QWebElement* theWrappedObject, const QWebElement&  element);
   void prependOutside(QWebElement* theWrappedObject, const QString&  markup);
};





class PythonQtPublicPromoter_QWebFrame : public QWebFrame
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebFrame::event(arg__1); }
};

class PythonQtWrapper_QWebFrame : public QObject
{ Q_OBJECT
public:
public slots:
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1, const QRegion&  clip);
   void render(QWebFrame* theWrappedObject, QPainter*  arg__1);
   QSize  contentsSize(QWebFrame* theWrappedObject) const;
   QWebSecurityOrigin  securityOrigin(QWebFrame* theWrappedObject) const;
   void setHtml(QWebFrame* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   QList<QWebFrame* >  childFrames(QWebFrame* theWrappedObject) const;
   int  scrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QPoint  pos(QWebFrame* theWrappedObject) const;
   QString  toHtml(QWebFrame* theWrappedObject) const;
   QWebElement  documentElement(QWebFrame* theWrappedObject) const;
   void setTextSizeMultiplier(QWebFrame* theWrappedObject, qreal  factor);
   QWebHitTestResult  hitTestContent(QWebFrame* theWrappedObject, const QPoint&  pos) const;
   void scroll(QWebFrame* theWrappedObject, int  arg__1, int  arg__2);
   QMultiMap<QString , QString >  metaData(QWebFrame* theWrappedObject) const;
   void load(QWebFrame* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   void load(QWebFrame* theWrappedObject, const QUrl&  url);
   QPoint  scrollPosition(QWebFrame* theWrappedObject) const;
   qreal  textSizeMultiplier(QWebFrame* theWrappedObject) const;
   QUrl  baseUrl(QWebFrame* theWrappedObject) const;
   int  scrollBarMinimum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   void setContent(QWebFrame* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   QString  renderTreeDump(QWebFrame* theWrappedObject) const;
   int  scrollBarMaximum(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   Qt::ScrollBarPolicy  scrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   QIcon  icon(QWebFrame* theWrappedObject) const;
   qreal  zoomFactor(QWebFrame* theWrappedObject) const;
   void setScrollBarValue(QWebFrame* theWrappedObject, Qt::Orientation  orientation, int  value);
   void setScrollPosition(QWebFrame* theWrappedObject, const QPoint&  pos);
   QString  frameName(QWebFrame* theWrappedObject) const;
   void addToJavaScriptWindowObject(QWebFrame* theWrappedObject, const QString&  name, QObject*  object);
   QWebFrame*  parentFrame(QWebFrame* theWrappedObject) const;
   QRect  geometry(QWebFrame* theWrappedObject) const;
   void setZoomFactor(QWebFrame* theWrappedObject, qreal  factor);
   void setFocus(QWebFrame* theWrappedObject);
   QWebPage*  page(QWebFrame* theWrappedObject) const;
   void setScrollBarPolicy(QWebFrame* theWrappedObject, Qt::Orientation  orientation, Qt::ScrollBarPolicy  policy);
   bool  hasFocus(QWebFrame* theWrappedObject) const;
   QRect  scrollBarGeometry(QWebFrame* theWrappedObject, Qt::Orientation  orientation) const;
   bool  event(QWebFrame* theWrappedObject, QEvent*  arg__1);
   QUrl  url(QWebFrame* theWrappedObject) const;
   QUrl  requestedUrl(QWebFrame* theWrappedObject) const;
   void setUrl(QWebFrame* theWrappedObject, const QUrl&  url);
   QWebElement  findFirstElement(QWebFrame* theWrappedObject, const QString&  selectorQuery) const;
   QString  title(QWebFrame* theWrappedObject) const;
   QString  toPlainText(QWebFrame* theWrappedObject) const;
};





class PythonQtShell_QWebHistoryInterface : public QWebHistoryInterface
{
public:
    PythonQtShell_QWebHistoryInterface(QObject*  parent = 0):QWebHistoryInterface(parent),_wrapper(NULL) {};

virtual bool  historyContains(const QString&  url) const;
virtual void addHistoryEntry(const QString&  url);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
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
   QWebHistoryInterface*  static_QWebHistoryInterface_defaultInterface();
   void static_QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface*  defaultInterface);
};





class PythonQtWrapper_QWebHitTestResult : public QObject
{ Q_OBJECT
public:
public slots:
QWebHitTestResult* new_QWebHitTestResult();
QWebHitTestResult* new_QWebHitTestResult(const QWebHitTestResult&  other);
void delete_QWebHitTestResult(QWebHitTestResult* obj) { delete obj; } 
   QString  alternateText(QWebHitTestResult* theWrappedObject) const;
   QPoint  pos(QWebHitTestResult* theWrappedObject) const;
   QString  title(QWebHitTestResult* theWrappedObject) const;
   QWebElement  element(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  linkTargetFrame(QWebHitTestResult* theWrappedObject) const;
   QUrl  imageUrl(QWebHitTestResult* theWrappedObject) const;
   QString  linkText(QWebHitTestResult* theWrappedObject) const;
   bool  isNull(QWebHitTestResult* theWrappedObject) const;
   bool  isContentEditable(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkTitle(QWebHitTestResult* theWrappedObject) const;
   QPixmap  pixmap(QWebHitTestResult* theWrappedObject) const;
   QWebElement  linkElement(QWebHitTestResult* theWrappedObject) const;
   bool  isContentSelected(QWebHitTestResult* theWrappedObject) const;
   QWebFrame*  frame(QWebHitTestResult* theWrappedObject) const;
   QRect  boundingRect(QWebHitTestResult* theWrappedObject) const;
   QUrl  linkUrl(QWebHitTestResult* theWrappedObject) const;
   QWebElement  enclosingBlockElement(QWebHitTestResult* theWrappedObject) const;
};





class PythonQtShell_QWebInspector : public QWebInspector
{
public:
    PythonQtShell_QWebInspector(QWidget*  parent = 0):QWebInspector(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void changeEvent(QEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebInspector : public QWebInspector
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWebInspector::event(arg__1); }
inline void promoted_showEvent(QShowEvent*  event) { QWebInspector::showEvent(event); }
inline void promoted_hideEvent(QHideEvent*  event) { QWebInspector::hideEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWebInspector::resizeEvent(event); }
};

class PythonQtWrapper_QWebInspector : public QObject
{ Q_OBJECT
public:
public slots:
QWebInspector* new_QWebInspector(QWidget*  parent = 0);
void delete_QWebInspector(QWebInspector* obj) { delete obj; } 
   QWebPage*  page(QWebInspector* theWrappedObject) const;
   QSize  sizeHint(QWebInspector* theWrappedObject) const;
   bool  event(QWebInspector* theWrappedObject, QEvent*  arg__1);
   void showEvent(QWebInspector* theWrappedObject, QShowEvent*  event);
   void setPage(QWebInspector* theWrappedObject, QWebPage*  page);
   void hideEvent(QWebInspector* theWrappedObject, QHideEvent*  event);
   void resizeEvent(QWebInspector* theWrappedObject, QResizeEvent*  event);
};





class PythonQtShell_QWebPage : public QWebPage
{
public:
    PythonQtShell_QWebPage(QObject*  parent = 0):QWebPage(parent),_wrapper(NULL) {};

virtual bool  acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
virtual bool  supportsExtension(QWebPage::Extension  extension) const;
virtual QString  chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile);
virtual void triggerAction(QWebPage::WebAction  action, bool  checked = false);
virtual void javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg);
virtual QString  userAgentForUrl(const QUrl&  url) const;
virtual bool  javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg);
virtual bool  extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
virtual void javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID);
virtual bool  javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
virtual QObject*  createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
virtual QWebPage*  createWindow(QWebPage::WebWindowType  type);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPage : public QWebPage
{ public:
inline bool  promoted_acceptNavigationRequest(QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type) { return QWebPage::acceptNavigationRequest(frame, request, type); }
inline bool  promoted_supportsExtension(QWebPage::Extension  extension) const { return QWebPage::supportsExtension(extension); }
inline QString  promoted_chooseFile(QWebFrame*  originatingFrame, const QString&  oldFile) { return QWebPage::chooseFile(originatingFrame, oldFile); }
inline void promoted_triggerAction(QWebPage::WebAction  action, bool  checked = false) { QWebPage::triggerAction(action, checked); }
inline void promoted_javaScriptAlert(QWebFrame*  originatingFrame, const QString&  msg) { QWebPage::javaScriptAlert(originatingFrame, msg); }
inline QString  promoted_userAgentForUrl(const QUrl&  url) const { return QWebPage::userAgentForUrl(url); }
inline bool  promoted_javaScriptConfirm(QWebFrame*  originatingFrame, const QString&  msg) { return QWebPage::javaScriptConfirm(originatingFrame, msg); }
inline bool  promoted_extension(QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0) { return QWebPage::extension(extension, option, output); }
inline void promoted_javaScriptConsoleMessage(const QString&  message, int  lineNumber, const QString&  sourceID) { QWebPage::javaScriptConsoleMessage(message, lineNumber, sourceID); }
inline bool  promoted_javaScriptPrompt(QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result) { return QWebPage::javaScriptPrompt(originatingFrame, msg, defaultValue, result); }
inline QObject*  promoted_createPlugin(const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues) { return QWebPage::createPlugin(classid, url, paramNames, paramValues); }
inline QWebPage*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebPage::createWindow(type); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebPage::event(arg__1); }
};

class PythonQtWrapper_QWebPage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ErrorDomain WebWindowType FindFlag Extension )
Q_FLAGS(FindFlags )
enum ErrorDomain{
  QtNetwork = QWebPage::QtNetwork,   Http = QWebPage::Http,   WebKit = QWebPage::WebKit};
enum WebWindowType{
  WebBrowserWindow = QWebPage::WebBrowserWindow,   WebModalDialog = QWebPage::WebModalDialog};
enum FindFlag{
  FindBackward = QWebPage::FindBackward,   FindCaseSensitively = QWebPage::FindCaseSensitively,   FindWrapsAroundDocument = QWebPage::FindWrapsAroundDocument,   HighlightAllOccurrences = QWebPage::HighlightAllOccurrences};
enum Extension{
  ChooseMultipleFilesExtension = QWebPage::ChooseMultipleFilesExtension,   ErrorPageExtension = QWebPage::ErrorPageExtension};
Q_DECLARE_FLAGS(FindFlags, FindFlag)
public slots:
QWebPage* new_QWebPage(QObject*  parent = 0);
void delete_QWebPage(QWebPage* obj) { delete obj; } 
   QWebPluginFactory*  pluginFactory(QWebPage* theWrappedObject) const;
   QUndoStack*  undoStack(QWebPage* theWrappedObject) const;
   QPalette  palette(QWebPage* theWrappedObject) const;
   bool  acceptNavigationRequest(QWebPage* theWrappedObject, QWebFrame*  frame, const QNetworkRequest&  request, QWebPage::NavigationType  type);
   QString  selectedText(QWebPage* theWrappedObject) const;
   quint64  bytesReceived(QWebPage* theWrappedObject) const;
   bool  supportsExtension(QWebPage* theWrappedObject, QWebPage::Extension  extension) const;
   QNetworkAccessManager*  networkAccessManager(QWebPage* theWrappedObject) const;
   void setContentEditable(QWebPage* theWrappedObject, bool  editable);
   bool  swallowContextMenuEvent(QWebPage* theWrappedObject, QContextMenuEvent*  event);
   bool  isModified(QWebPage* theWrappedObject) const;
   void setView(QWebPage* theWrappedObject, QWidget*  view);
   QWebFrame*  mainFrame(QWebPage* theWrappedObject) const;
   void setViewportSize(QWebPage* theWrappedObject, const QSize&  size) const;
   void updatePositionDependentActions(QWebPage* theWrappedObject, const QPoint&  pos);
   QAction*  action(QWebPage* theWrappedObject, QWebPage::WebAction  action) const;
   bool  findText(QWebPage* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   QWebPage::LinkDelegationPolicy  linkDelegationPolicy(QWebPage* theWrappedObject) const;
   QWebHistory*  history(QWebPage* theWrappedObject) const;
   QVariant  inputMethodQuery(QWebPage* theWrappedObject, Qt::InputMethodQuery  property) const;
   void setLinkDelegationPolicy(QWebPage* theWrappedObject, QWebPage::LinkDelegationPolicy  policy);
   QString  chooseFile(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  oldFile);
   bool  forwardUnsupportedContent(QWebPage* theWrappedObject) const;
   void setNetworkAccessManager(QWebPage* theWrappedObject, QNetworkAccessManager*  manager);
   void setPluginFactory(QWebPage* theWrappedObject, QWebPluginFactory*  factory);
   quint64  totalBytes(QWebPage* theWrappedObject) const;
   void triggerAction(QWebPage* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   QWebSettings*  settings(QWebPage* theWrappedObject) const;
   QMenu*  createStandardContextMenu(QWebPage* theWrappedObject);
   void javaScriptAlert(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   QString  userAgentForUrl(QWebPage* theWrappedObject, const QUrl&  url) const;
   bool  javaScriptConfirm(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg);
   void setForwardUnsupportedContent(QWebPage* theWrappedObject, bool  forward);
   bool  isContentEditable(QWebPage* theWrappedObject) const;
   void setPreferredContentsSize(QWebPage* theWrappedObject, const QSize&  size) const;
   bool  extension(QWebPage* theWrappedObject, QWebPage::Extension  extension, const QWebPage::ExtensionOption*  option = 0, QWebPage::ExtensionReturn*  output = 0);
   QSize  viewportSize(QWebPage* theWrappedObject) const;
   void javaScriptConsoleMessage(QWebPage* theWrappedObject, const QString&  message, int  lineNumber, const QString&  sourceID);
   void setPalette(QWebPage* theWrappedObject, const QPalette&  palette);
   bool  javaScriptPrompt(QWebPage* theWrappedObject, QWebFrame*  originatingFrame, const QString&  msg, const QString&  defaultValue, QString*  result);
   QWebFrame*  frameAt(QWebPage* theWrappedObject, const QPoint&  pos) const;
   QObject*  createPlugin(QWebPage* theWrappedObject, const QString&  classid, const QUrl&  url, const QStringList&  paramNames, const QStringList&  paramValues);
   QSize  preferredContentsSize(QWebPage* theWrappedObject) const;
   bool  focusNextPrevChild(QWebPage* theWrappedObject, bool  next);
   QWebPage*  createWindow(QWebPage* theWrappedObject, QWebPage::WebWindowType  type);
   QWidget*  view(QWebPage* theWrappedObject) const;
   bool  event(QWebPage* theWrappedObject, QEvent*  arg__1);
   QWebFrame*  currentFrame(QWebPage* theWrappedObject) const;
};





class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption : public QWebPage::ChooseMultipleFilesExtensionOption
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionOption():QWebPage::ChooseMultipleFilesExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionOption* new_QWebPage_ChooseMultipleFilesExtensionOption();
void delete_QWebPage_ChooseMultipleFilesExtensionOption(QWebPage::ChooseMultipleFilesExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn : public QWebPage::ChooseMultipleFilesExtensionReturn
{
public:
    PythonQtShell_QWebPage_ChooseMultipleFilesExtensionReturn():QWebPage::ChooseMultipleFilesExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ChooseMultipleFilesExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ChooseMultipleFilesExtensionReturn* new_QWebPage_ChooseMultipleFilesExtensionReturn();
void delete_QWebPage_ChooseMultipleFilesExtensionReturn(QWebPage::ChooseMultipleFilesExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ErrorPageExtensionOption : public QWebPage::ErrorPageExtensionOption
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionOption():QWebPage::ErrorPageExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionOption* new_QWebPage_ErrorPageExtensionOption();
void delete_QWebPage_ErrorPageExtensionOption(QWebPage::ErrorPageExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ErrorPageExtensionReturn : public QWebPage::ErrorPageExtensionReturn
{
public:
    PythonQtShell_QWebPage_ErrorPageExtensionReturn():QWebPage::ErrorPageExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ErrorPageExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ErrorPageExtensionReturn* new_QWebPage_ErrorPageExtensionReturn();
void delete_QWebPage_ErrorPageExtensionReturn(QWebPage::ErrorPageExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ExtensionOption : public QWebPage::ExtensionOption
{
public:
    PythonQtShell_QWebPage_ExtensionOption():QWebPage::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionOption* new_QWebPage_ExtensionOption();
void delete_QWebPage_ExtensionOption(QWebPage::ExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPage_ExtensionReturn : public QWebPage::ExtensionReturn
{
public:
    PythonQtShell_QWebPage_ExtensionReturn():QWebPage::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPage_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPage::ExtensionReturn* new_QWebPage_ExtensionReturn();
void delete_QWebPage_ExtensionReturn(QWebPage::ExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory : public QWebPluginFactory
{
public:
    PythonQtShell_QWebPluginFactory(QObject*  parent = 0):QWebPluginFactory(parent),_wrapper(NULL) {};

virtual bool  supportsExtension(QWebPluginFactory::Extension  extension) const;
virtual void refreshPlugins();
virtual QList<QWebPluginFactory::Plugin >  plugins() const;
virtual bool  extension(QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0);
virtual QObject*  create(const QString&  mimeType, const QUrl&  arg__2, const QStringList&  argumentNames, const QStringList&  argumentValues) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebPluginFactory : public QWebPluginFactory
{ public:
inline bool  promoted_supportsExtension(QWebPluginFactory::Extension  extension) const { return QWebPluginFactory::supportsExtension(extension); }
inline void promoted_refreshPlugins() { QWebPluginFactory::refreshPlugins(); }
inline bool  promoted_extension(QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0) { return QWebPluginFactory::extension(extension, option, output); }
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
   bool  supportsExtension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension) const;
   void refreshPlugins(QWebPluginFactory* theWrappedObject);
   bool  extension(QWebPluginFactory* theWrappedObject, QWebPluginFactory::Extension  extension, const QWebPluginFactory::ExtensionOption*  option = 0, QWebPluginFactory::ExtensionReturn*  output = 0);
};





class PythonQtShell_QWebPluginFactory_ExtensionOption : public QWebPluginFactory::ExtensionOption
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionOption():QWebPluginFactory::ExtensionOption(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionOption : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionOption* new_QWebPluginFactory_ExtensionOption();
void delete_QWebPluginFactory_ExtensionOption(QWebPluginFactory::ExtensionOption* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory_ExtensionReturn : public QWebPluginFactory::ExtensionReturn
{
public:
    PythonQtShell_QWebPluginFactory_ExtensionReturn():QWebPluginFactory::ExtensionReturn(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_ExtensionReturn : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::ExtensionReturn* new_QWebPluginFactory_ExtensionReturn();
void delete_QWebPluginFactory_ExtensionReturn(QWebPluginFactory::ExtensionReturn* obj) { delete obj; } 
};





class PythonQtShell_QWebPluginFactory_MimeType : public QWebPluginFactory::MimeType
{
public:
    PythonQtShell_QWebPluginFactory_MimeType():QWebPluginFactory::MimeType(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_MimeType : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType();
QWebPluginFactory::MimeType* new_QWebPluginFactory_MimeType(const QWebPluginFactory::MimeType& other) {
PythonQtShell_QWebPluginFactory_MimeType* a = new PythonQtShell_QWebPluginFactory_MimeType();
*((QWebPluginFactory::MimeType*)a) = other;
return a; }
void delete_QWebPluginFactory_MimeType(QWebPluginFactory::MimeType* obj) { delete obj; } 
   bool  operator_equal(QWebPluginFactory::MimeType* theWrappedObject, const QWebPluginFactory::MimeType&  other) const;
};





class PythonQtShell_QWebPluginFactory_Plugin : public QWebPluginFactory::Plugin
{
public:
    PythonQtShell_QWebPluginFactory_Plugin():QWebPluginFactory::Plugin(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWebPluginFactory_Plugin : public QObject
{ Q_OBJECT
public:
public slots:
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin();
QWebPluginFactory::Plugin* new_QWebPluginFactory_Plugin(const QWebPluginFactory::Plugin& other) {
PythonQtShell_QWebPluginFactory_Plugin* a = new PythonQtShell_QWebPluginFactory_Plugin();
*((QWebPluginFactory::Plugin*)a) = other;
return a; }
void delete_QWebPluginFactory_Plugin(QWebPluginFactory::Plugin* obj) { delete obj; } 
};





class PythonQtWrapper_QWebSecurityOrigin : public QObject
{ Q_OBJECT
public:
public slots:
QWebSecurityOrigin* new_QWebSecurityOrigin(const QWebSecurityOrigin&  other);
void delete_QWebSecurityOrigin(QWebSecurityOrigin* obj) { delete obj; } 
   int  port(QWebSecurityOrigin* theWrappedObject) const;
   QWebSecurityOrigin*  operator_assign(QWebSecurityOrigin* theWrappedObject, const QWebSecurityOrigin&  other);
   void static_QWebSecurityOrigin_addLocalScheme(const QString&  scheme);
   QString  scheme(QWebSecurityOrigin* theWrappedObject) const;
   QString  host(QWebSecurityOrigin* theWrappedObject) const;
   qint64  databaseUsage(QWebSecurityOrigin* theWrappedObject) const;
   QList<QWebDatabase >  databases(QWebSecurityOrigin* theWrappedObject) const;
   void setDatabaseQuota(QWebSecurityOrigin* theWrappedObject, qint64  quota);
   QList<QWebSecurityOrigin >  static_QWebSecurityOrigin_allOrigins();
   void static_QWebSecurityOrigin_removeLocalScheme(const QString&  scheme);
   qint64  databaseQuota(QWebSecurityOrigin* theWrappedObject) const;
   QStringList  static_QWebSecurityOrigin_localSchemes();
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
  AutoLoadImages = QWebSettings::AutoLoadImages,   JavascriptEnabled = QWebSettings::JavascriptEnabled,   JavaEnabled = QWebSettings::JavaEnabled,   PluginsEnabled = QWebSettings::PluginsEnabled,   PrivateBrowsingEnabled = QWebSettings::PrivateBrowsingEnabled,   JavascriptCanOpenWindows = QWebSettings::JavascriptCanOpenWindows,   JavascriptCanAccessClipboard = QWebSettings::JavascriptCanAccessClipboard,   DeveloperExtrasEnabled = QWebSettings::DeveloperExtrasEnabled,   LinksIncludedInFocusChain = QWebSettings::LinksIncludedInFocusChain,   ZoomTextOnly = QWebSettings::ZoomTextOnly,   PrintElementBackgrounds = QWebSettings::PrintElementBackgrounds,   OfflineStorageDatabaseEnabled = QWebSettings::OfflineStorageDatabaseEnabled,   OfflineWebApplicationCacheEnabled = QWebSettings::OfflineWebApplicationCacheEnabled,   LocalStorageEnabled = QWebSettings::LocalStorageEnabled,   LocalStorageDatabaseEnabled = QWebSettings::LocalStorageDatabaseEnabled,   LocalContentCanAccessRemoteUrls = QWebSettings::LocalContentCanAccessRemoteUrls,   DnsPrefetchEnabled = QWebSettings::DnsPrefetchEnabled};
public slots:
   void setDefaultTextEncoding(QWebSettings* theWrappedObject, const QString&  encoding);
   QString  defaultTextEncoding(QWebSettings* theWrappedObject) const;
   void static_QWebSettings_setWebGraphic(QWebSettings::WebGraphic  type, const QPixmap&  graphic);
   QString  fontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which) const;
   QUrl  userStyleSheetUrl(QWebSettings* theWrappedObject) const;
   void static_QWebSettings_setOfflineStorageDefaultQuota(qint64  maximumSize);
   QPixmap  static_QWebSettings_webGraphic(QWebSettings::WebGraphic  type);
   bool  testAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr) const;
   QString  static_QWebSettings_offlineStoragePath();
   void setLocalStoragePath(QWebSettings* theWrappedObject, const QString&  path);
   int  fontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type) const;
   void static_QWebSettings_setObjectCacheCapacities(int  cacheMinDeadCapacity, int  cacheMaxDead, int  totalCapacity);
   qint64  static_QWebSettings_offlineStorageDefaultQuota();
   void static_QWebSettings_setOfflineStoragePath(const QString&  path);
   void static_QWebSettings_setOfflineWebApplicationCachePath(const QString&  path);
   QString  static_QWebSettings_iconDatabasePath();
   void setFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type, int  size);
   void static_QWebSettings_setOfflineWebApplicationCacheQuota(qint64  maximumSize);
   void resetFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which);
   int  static_QWebSettings_maximumPagesInCache();
   void static_QWebSettings_clearMemoryCaches();
   void static_QWebSettings_setIconDatabasePath(const QString&  location);
   void resetAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr);
   void setFontFamily(QWebSettings* theWrappedObject, QWebSettings::FontFamily  which, const QString&  family);
   void setAttribute(QWebSettings* theWrappedObject, QWebSettings::WebAttribute  attr, bool  on);
   void setUserStyleSheetUrl(QWebSettings* theWrappedObject, const QUrl&  location);
   void static_QWebSettings_clearIconDatabase();
   void static_QWebSettings_enablePersistentStorage(const QString&  path = QString());
   QString  static_QWebSettings_offlineWebApplicationCachePath();
   qint64  static_QWebSettings_offlineWebApplicationCacheQuota();
   QWebSettings*  static_QWebSettings_globalSettings();
   void resetFontSize(QWebSettings* theWrappedObject, QWebSettings::FontSize  type);
   QIcon  static_QWebSettings_iconForUrl(const QUrl&  url);
   QString  localStoragePath(QWebSettings* theWrappedObject) const;
   void static_QWebSettings_setMaximumPagesInCache(int  pages);
};





class PythonQtShell_QWebView : public QWebView
{
public:
    PythonQtShell_QWebView(QWidget*  parent = 0):QWebView(parent),_wrapper(NULL) {};

virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual QWebView*  createWindow(QWebPage::WebWindowType  type);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  property) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void languageChange();
virtual int  devType() const;
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWebView : public QWebView
{ public:
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWebView::wheelEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWebView::mouseMoveEvent(arg__1); }
inline QWebView*  promoted_createWindow(QWebPage::WebWindowType  type) { return QWebView::createWindow(type); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWebView::mouseDoubleClickEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWebView::focusNextPrevChild(next); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  property) const { return QWebView::inputMethodQuery(property); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWebView::contextMenuEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWebView::focusInEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWebView::mouseReleaseEvent(arg__1); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWebView::inputMethodEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWebView::mousePressEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWebView::dragLeaveEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWebView::dragEnterEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWebView::changeEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWebView::dragMoveEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWebView::paintEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWebView::dropEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWebView::resizeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWebView::event(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWebView::keyPressEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWebView::focusOutEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWebView::keyReleaseEvent(arg__1); }
};

class PythonQtWrapper_QWebView : public QObject
{ Q_OBJECT
public:
public slots:
QWebView* new_QWebView(QWidget*  parent = 0);
void delete_QWebView(QWebView* obj) { delete obj; } 
   QString  selectedText(QWebView* theWrappedObject) const;
   void setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl = QUrl());
   void setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor);
   void wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1);
   QSize  sizeHint(QWebView* theWrappedObject) const;
   void setPage(QWebView* theWrappedObject, QWebPage*  page);
   void setRenderHints(QWebView* theWrappedObject, QPainter::RenderHints  hints);
   QAction*  pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const;
   void mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   void load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation = QNetworkAccessManager::GetOperation, const QByteArray&  body = QByteArray());
   QWebView*  createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type);
   bool  findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options = 0);
   void load(QWebView* theWrappedObject, const QUrl&  url);
   QWebSettings*  settings(QWebView* theWrappedObject) const;
   void mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QWebHistory*  history(QWebView* theWrappedObject) const;
   bool  focusNextPrevChild(QWebView* theWrappedObject, bool  next);
   QVariant  inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const;
   void contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1);
   void focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   void mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   qreal  textSizeMultiplier(QWebView* theWrappedObject) const;
   void inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1);
   void setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType = QString(), const QUrl&  baseUrl = QUrl());
   void mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1);
   QIcon  icon(QWebView* theWrappedObject) const;
   qreal  zoomFactor(QWebView* theWrappedObject) const;
   void dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1);
   void changeEvent(QWebView* theWrappedObject, QEvent*  arg__1);
   void dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1);
   void triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked = false);
   void paintEvent(QWebView* theWrappedObject, QPaintEvent*  arg__1);
   void setZoomFactor(QWebView* theWrappedObject, qreal  factor);
   void setRenderHint(QWebView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled = true);
   QWebPage*  page(QWebView* theWrappedObject) const;
   void dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1);
   QPainter::RenderHints  renderHints(QWebView* theWrappedObject) const;
   void resizeEvent(QWebView* theWrappedObject, QResizeEvent*  arg__1);
   bool  event(QWebView* theWrappedObject, QEvent*  arg__1);
   void keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
   QString  title(QWebView* theWrappedObject) const;
   QUrl  url(QWebView* theWrappedObject) const;
   void focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1);
   void setUrl(QWebView* theWrappedObject, const QUrl&  url);
   bool  isModified(QWebView* theWrappedObject) const;
   void keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1);
};


