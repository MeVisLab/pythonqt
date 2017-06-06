#include <PythonQt.h>
#include <QIcon>
#include <QMessageBox>
#include <QObject>
#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qobject.h>
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
#include <qstyle.h>
#include <qsurfaceformat.h>
#include <qwidget.h>
#include <qwidgetaction.h>
#include <qwindow.h>
#include <qwizard.h>



class PythonQtWrapper_QWhatsThisClickedEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWhatsThisClickedEvent* new_QWhatsThisClickedEvent(const QString&  href);
void delete_QWhatsThisClickedEvent(QWhatsThisClickedEvent* obj) { delete obj; } 
   QString  href(QWhatsThisClickedEvent* theWrappedObject) const;
};





class PythonQtShell_QWheelEvent : public QWheelEvent
{
public:
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase):QWheelEvent(pos, globalPos, pixelDelta, angleDelta, qt4Delta, qt4Orientation, buttons, modifiers, phase),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, globalPos, delta, buttons, modifiers, orient),_wrapper(NULL) {};
    PythonQtShell_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical):QWheelEvent(pos, delta, buttons, modifiers, orient),_wrapper(NULL) {};

   ~PythonQtShell_QWheelEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QWheelEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, QPoint  pixelDelta, QPoint  angleDelta, int  qt4Delta, Qt::Orientation  qt4Orientation, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::ScrollPhase  phase);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, const QPointF&  globalPos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
QWheelEvent* new_QWheelEvent(const QPointF&  pos, int  delta, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::Orientation  orient = Qt::Vertical);
void delete_QWheelEvent(QWheelEvent* obj) { delete obj; } 
   QPoint  angleDelta(QWheelEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QWheelEvent* theWrappedObject) const;
   int  delta(QWheelEvent* theWrappedObject) const;
   QPoint  globalPos(QWheelEvent* theWrappedObject) const;
   const QPointF*  globalPosF(QWheelEvent* theWrappedObject) const;
   int  globalX(QWheelEvent* theWrappedObject) const;
   int  globalY(QWheelEvent* theWrappedObject) const;
   Qt::Orientation  orientation(QWheelEvent* theWrappedObject) const;
   Qt::ScrollPhase  phase(QWheelEvent* theWrappedObject) const;
   QPoint  pixelDelta(QWheelEvent* theWrappedObject) const;
   QPoint  pos(QWheelEvent* theWrappedObject) const;
   const QPointF*  posF(QWheelEvent* theWrappedObject) const;
   int  x(QWheelEvent* theWrappedObject) const;
   int  y(QWheelEvent* theWrappedObject) const;
};





class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_destroy(bool  destroyWindow = true, bool  destroySubWindows = true) { QWidget::destroy(destroyWindow, destroySubWindows); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline bool  promoted_focusNextChild() { return QWidget::focusNextChild(); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline bool  promoted_focusPreviousChild() { return QWidget::focusPreviousChild(); }
inline bool  promoted_hasHeightForWidth() const { return QWidget::hasHeightForWidth(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void promoted_initPainter(QPainter*  painter) const { QWidget::initPainter(painter); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return QWidget::nativeEvent(eventType, message, result); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline QPaintDevice*  promoted_redirected(QPoint*  offset) const { return QWidget::redirected(offset); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline QPainter*  promoted_sharedPainter() const { return QWidget::sharedPainter(); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_updateMicroFocus() { QWidget::updateMicroFocus(); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
Q_FLAGS(RenderFlags )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
Q_DECLARE_FLAGS(RenderFlags, RenderFlag)
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QBackingStore*  backingStore(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   QMargins  contentsMargins(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   QWidget*  static_QWidget_createWindowContainer(QWindow*  window, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
   QCursor  cursor(QWidget* theWrappedObject) const;
   void destroy(QWidget* theWrappedObject, bool  destroyWindow = true, bool  destroySubWindows = true);
   int  devType(QWidget* theWrappedObject) const;
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   bool  focusNextChild(QWidget* theWrappedObject);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   bool  focusPreviousChild(QWidget* theWrappedObject);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QSize  frameSize(QWidget* theWrappedObject) const;
   const QRect*  geometry(QWidget* theWrappedObject) const;
   QPixmap  grab(QWidget* theWrappedObject, const QRect&  rectangle = QRect(QPoint(0, 0), QSize(-1, -1)));
   void grabGesture(QWidget* theWrappedObject, Qt::GestureType  type, Qt::GestureFlags  flags = Qt::GestureFlags());
   void grabKeyboard(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QGraphicsEffect*  graphicsEffect(QWidget* theWrappedObject) const;
   QGraphicsProxyWidget*  graphicsProxyWidget(QWidget* theWrappedObject) const;
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  hasHeightForWidth(QWidget* theWrappedObject) const;
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   void initPainter(QWidget* theWrappedObject, QPainter*  painter) const;
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   Qt::InputMethodHints  inputMethodHints(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isFullScreen(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, const QWidget*  arg__1) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QWidget*  static_QWidget_keyboardGrabber();
   QLayout*  layout(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   QLocale  locale(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, const QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QWidget*  static_QWidget_mouseGrabber();
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   bool  nativeEvent(QWidget* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   const QPalette*  palette(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QWidget*  previousInFocusChain(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   QPaintDevice*  redirected(QWidget* theWrappedObject, QPoint*  offset) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   void releaseMouse(QWidget* theWrappedObject);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setContentsMargins(QWidget* theWrappedObject, const QMargins&  margins);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setGraphicsEffect(QWidget* theWrappedObject, QGraphicsEffect*  effect);
   void setInputMethodHints(QWidget* theWrappedObject, Qt::InputMethodHints  hints);
   void setLayout(QWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QLayout* >  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent);
   void setParent(QWidget* theWrappedObject, PythonQtNewOwnerOfThis<QWidget* >  parent, Qt::WindowFlags  f);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   void setToolTipDuration(QWidget* theWrappedObject, int  msec);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPainter*  sharedPainter(QWidget* theWrappedObject) const;
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   QSize  size(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QString  statusTip(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   int  toolTipDuration(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   void ungrabGesture(QWidget* theWrappedObject, Qt::GestureType  type);
   void unsetCursor(QWidget* theWrappedObject);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void unsetLocale(QWidget* theWrappedObject);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void updateGeometry(QWidget* theWrappedObject);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   QString  whatsThis(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   int  width(QWidget* theWrappedObject) const;
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   QWindow*  windowHandle(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   QString  windowIconText(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QString  windowRole(QWidget* theWrappedObject) const;
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   int  x(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
};





class PythonQtShell_QWidgetAction : public QWidgetAction
{
public:
    PythonQtShell_QWidgetAction(QObject*  parent):QWidgetAction(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetAction();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createWidget(QWidget*  parent);
virtual void customEvent(QEvent*  arg__1);
virtual void deleteWidget(QWidget*  widget);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetAction : public QWidgetAction
{ public:
inline QWidget*  promoted_createWidget(QWidget*  parent) { return QWidgetAction::createWidget(parent); }
inline QList<QWidget* >  promoted_createdWidgets() const { return QWidgetAction::createdWidgets(); }
inline void promoted_deleteWidget(QWidget*  widget) { QWidgetAction::deleteWidget(widget); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidgetAction::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QWidgetAction::eventFilter(arg__1, arg__2); }
};

class PythonQtWrapper_QWidgetAction : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetAction* new_QWidgetAction(QObject*  parent);
void delete_QWidgetAction(QWidgetAction* obj) { delete obj; } 
   QWidget*  createWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   QList<QWidget* >  createdWidgets(QWidgetAction* theWrappedObject) const;
   QWidget*  defaultWidget(QWidgetAction* theWrappedObject) const;
   void deleteWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   bool  event(QWidgetAction* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QWidgetAction* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void releaseWidget(QWidgetAction* theWrappedObject, QWidget*  widget);
   QWidget*  requestWidget(QWidgetAction* theWrappedObject, QWidget*  parent);
   void setDefaultWidget(QWidgetAction* theWrappedObject, QWidget*  w);
};





class PythonQtShell_QWidgetItem : public QWidgetItem
{
public:
    PythonQtShell_QWidgetItem(QWidget*  w):QWidgetItem(w),_wrapper(NULL) {};

   ~PythonQtShell_QWidgetItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidgetItem : public QWidgetItem
{ public:
inline QSizePolicy::ControlTypes  promoted_controlTypes() const { return QWidgetItem::controlTypes(); }
inline Qt::Orientations  promoted_expandingDirections() const { return QWidgetItem::expandingDirections(); }
inline QRect  promoted_geometry() const { return QWidgetItem::geometry(); }
inline bool  promoted_hasHeightForWidth() const { return QWidgetItem::hasHeightForWidth(); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidgetItem::heightForWidth(arg__1); }
inline bool  promoted_isEmpty() const { return QWidgetItem::isEmpty(); }
inline QSize  promoted_maximumSize() const { return QWidgetItem::maximumSize(); }
inline QSize  promoted_minimumSize() const { return QWidgetItem::minimumSize(); }
inline void promoted_setGeometry(const QRect&  arg__1) { QWidgetItem::setGeometry(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidgetItem::sizeHint(); }
inline QWidget*  promoted_widget() { return QWidgetItem::widget(); }
};

class PythonQtWrapper_QWidgetItem : public QObject
{ Q_OBJECT
public:
public slots:
QWidgetItem* new_QWidgetItem(QWidget*  w);
void delete_QWidgetItem(QWidgetItem* obj) { delete obj; } 
   QSizePolicy::ControlTypes  controlTypes(QWidgetItem* theWrappedObject) const;
   Qt::Orientations  expandingDirections(QWidgetItem* theWrappedObject) const;
   QRect  geometry(QWidgetItem* theWrappedObject) const;
   bool  hasHeightForWidth(QWidgetItem* theWrappedObject) const;
   int  heightForWidth(QWidgetItem* theWrappedObject, int  arg__1) const;
   bool  isEmpty(QWidgetItem* theWrappedObject) const;
   QSize  maximumSize(QWidgetItem* theWrappedObject) const;
   QSize  minimumSize(QWidgetItem* theWrappedObject) const;
   void setGeometry(QWidgetItem* theWrappedObject, const QRect&  arg__1);
   QSize  sizeHint(QWidgetItem* theWrappedObject) const;
   QWidget*  widget(QWidgetItem* theWrappedObject);
};





class PythonQtShell_QWindow : public QWindow
{
public:
    PythonQtShell_QWindow(QScreen*  screen = 0):QWindow(screen),_wrapper(NULL) {};
    PythonQtShell_QWindow(QWindow*  parent):QWindow(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWindow();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void exposeEvent(QExposeEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QObject*  focusObject() const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QSurfaceFormat  format() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void touchEvent(QTouchEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWindow : public QWindow
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QWindow::event(arg__1); }
inline void promoted_exposeEvent(QExposeEvent*  arg__1) { QWindow::exposeEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWindow::focusInEvent(arg__1); }
inline QObject*  promoted_focusObject() const { return QWindow::focusObject(); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWindow::focusOutEvent(arg__1); }
inline QSurfaceFormat  promoted_format() const { return QWindow::format(); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWindow::hideEvent(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWindow::keyPressEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWindow::keyReleaseEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWindow::mouseDoubleClickEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWindow::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWindow::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWindow::mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWindow::moveEvent(arg__1); }
inline bool  promoted_nativeEvent(const QByteArray&  eventType, void*  message, long*  result) { return QWindow::nativeEvent(eventType, message, result); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWindow::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWindow::showEvent(arg__1); }
inline QSize  promoted_size() const { return QWindow::size(); }
inline QSurface::SurfaceType  promoted_surfaceType() const { return QWindow::surfaceType(); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWindow::tabletEvent(arg__1); }
inline void promoted_touchEvent(QTouchEvent*  arg__1) { QWindow::touchEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWindow::wheelEvent(arg__1); }
};

class PythonQtWrapper_QWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AncestorMode )
enum AncestorMode{
  ExcludeTransients = QWindow::ExcludeTransients,   IncludeTransients = QWindow::IncludeTransients};
public slots:
QWindow* new_QWindow(QScreen*  screen = 0);
QWindow* new_QWindow(QWindow*  parent);
void delete_QWindow(QWindow* obj) { delete obj; } 
   QSize  baseSize(QWindow* theWrappedObject) const;
   Qt::ScreenOrientation  contentOrientation(QWindow* theWrappedObject) const;
   void create(QWindow* theWrappedObject);
   QCursor  cursor(QWindow* theWrappedObject) const;
   void destroy(QWindow* theWrappedObject);
   qreal  devicePixelRatio(QWindow* theWrappedObject) const;
   bool  event(QWindow* theWrappedObject, QEvent*  arg__1);
   void exposeEvent(QWindow* theWrappedObject, QExposeEvent*  arg__1);
   QString  filePath(QWindow* theWrappedObject) const;
   Qt::WindowFlags  flags(QWindow* theWrappedObject) const;
   void focusInEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   QObject*  focusObject(QWindow* theWrappedObject) const;
   void focusOutEvent(QWindow* theWrappedObject, QFocusEvent*  arg__1);
   QSurfaceFormat  format(QWindow* theWrappedObject) const;
   QRect  frameGeometry(QWindow* theWrappedObject) const;
   QMargins  frameMargins(QWindow* theWrappedObject) const;
   QPoint  framePosition(QWindow* theWrappedObject) const;
   QWindow*  static_QWindow_fromWinId(WId  id);
   QRect  geometry(QWindow* theWrappedObject) const;
   int  height(QWindow* theWrappedObject) const;
   void hideEvent(QWindow* theWrappedObject, QHideEvent*  arg__1);
   QIcon  icon(QWindow* theWrappedObject) const;
   bool  isActive(QWindow* theWrappedObject) const;
   bool  isAncestorOf(QWindow* theWrappedObject, const QWindow*  child, QWindow::AncestorMode  mode = QWindow::IncludeTransients) const;
   bool  isExposed(QWindow* theWrappedObject) const;
   bool  isModal(QWindow* theWrappedObject) const;
   bool  isTopLevel(QWindow* theWrappedObject) const;
   bool  isVisible(QWindow* theWrappedObject) const;
   void keyPressEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   void keyReleaseEvent(QWindow* theWrappedObject, QKeyEvent*  arg__1);
   QPoint  mapFromGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QPoint  mapToGlobal(QWindow* theWrappedObject, const QPoint&  pos) const;
   QRegion  mask(QWindow* theWrappedObject) const;
   int  maximumHeight(QWindow* theWrappedObject) const;
   QSize  maximumSize(QWindow* theWrappedObject) const;
   int  maximumWidth(QWindow* theWrappedObject) const;
   int  minimumHeight(QWindow* theWrappedObject) const;
   QSize  minimumSize(QWindow* theWrappedObject) const;
   int  minimumWidth(QWindow* theWrappedObject) const;
   Qt::WindowModality  modality(QWindow* theWrappedObject) const;
   void mouseDoubleClickEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void mouseMoveEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QWindow* theWrappedObject, QMouseEvent*  arg__1);
   void moveEvent(QWindow* theWrappedObject, QMoveEvent*  arg__1);
   bool  nativeEvent(QWindow* theWrappedObject, const QByteArray&  eventType, void*  message, long*  result);
   qreal  opacity(QWindow* theWrappedObject) const;
   QWindow*  parent(QWindow* theWrappedObject) const;
   QPoint  position(QWindow* theWrappedObject) const;
   void reportContentOrientationChange(QWindow* theWrappedObject, Qt::ScreenOrientation  orientation);
   QSurfaceFormat  requestedFormat(QWindow* theWrappedObject) const;
   void resize(QWindow* theWrappedObject, const QSize&  newSize);
   void resize(QWindow* theWrappedObject, int  w, int  h);
   void resizeEvent(QWindow* theWrappedObject, QResizeEvent*  arg__1);
   QScreen*  screen(QWindow* theWrappedObject) const;
   void setBaseSize(QWindow* theWrappedObject, const QSize&  size);
   void setCursor(QWindow* theWrappedObject, const QCursor&  arg__1);
   void setFilePath(QWindow* theWrappedObject, const QString&  filePath);
   void setFlags(QWindow* theWrappedObject, Qt::WindowFlags  flags);
   void setFormat(QWindow* theWrappedObject, const QSurfaceFormat&  format);
   void setFramePosition(QWindow* theWrappedObject, const QPoint&  point);
   void setGeometry(QWindow* theWrappedObject, const QRect&  rect);
   void setGeometry(QWindow* theWrappedObject, int  posx, int  posy, int  w, int  h);
   void setIcon(QWindow* theWrappedObject, const QIcon&  icon);
   bool  setKeyboardGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setMask(QWindow* theWrappedObject, const QRegion&  region);
   void setMaximumSize(QWindow* theWrappedObject, const QSize&  size);
   void setMinimumSize(QWindow* theWrappedObject, const QSize&  size);
   void setModality(QWindow* theWrappedObject, Qt::WindowModality  modality);
   bool  setMouseGrabEnabled(QWindow* theWrappedObject, bool  grab);
   void setOpacity(QWindow* theWrappedObject, qreal  level);
   void setParent(QWindow* theWrappedObject, QWindow*  parent);
   void setPosition(QWindow* theWrappedObject, const QPoint&  pt);
   void setPosition(QWindow* theWrappedObject, int  posx, int  posy);
   void setScreen(QWindow* theWrappedObject, QScreen*  screen);
   void setSizeIncrement(QWindow* theWrappedObject, const QSize&  size);
   void setSurfaceType(QWindow* theWrappedObject, QSurface::SurfaceType  surfaceType);
   void setTransientParent(QWindow* theWrappedObject, QWindow*  parent);
   void setVisibility(QWindow* theWrappedObject, QWindow::Visibility  v);
   void setWindowState(QWindow* theWrappedObject, Qt::WindowState  state);
   void showEvent(QWindow* theWrappedObject, QShowEvent*  arg__1);
   QSize  size(QWindow* theWrappedObject) const;
   QSize  sizeIncrement(QWindow* theWrappedObject) const;
   QSurface::SurfaceType  surfaceType(QWindow* theWrappedObject) const;
   void tabletEvent(QWindow* theWrappedObject, QTabletEvent*  arg__1);
   QString  title(QWindow* theWrappedObject) const;
   void touchEvent(QWindow* theWrappedObject, QTouchEvent*  arg__1);
   QWindow*  transientParent(QWindow* theWrappedObject) const;
   Qt::WindowType  type(QWindow* theWrappedObject) const;
   void unsetCursor(QWindow* theWrappedObject);
   QWindow::Visibility  visibility(QWindow* theWrappedObject) const;
   void wheelEvent(QWindow* theWrappedObject, QWheelEvent*  arg__1);
   int  width(QWindow* theWrappedObject) const;
   WId  winId(QWindow* theWrappedObject) const;
   Qt::WindowState  windowState(QWindow* theWrappedObject) const;
   int  x(QWindow* theWrappedObject) const;
   int  y(QWindow* theWrappedObject) const;
};





class PythonQtWrapper_QWindowStateChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QWindowStateChangeEvent* new_QWindowStateChangeEvent(Qt::WindowStates  aOldState, bool  isOverride = false);
void delete_QWindowStateChangeEvent(QWindowStateChangeEvent* obj) { delete obj; } 
   bool  isOverride(QWindowStateChangeEvent* theWrappedObject) const;
   Qt::WindowStates  oldState(QWindowStateChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QWizard : public QWizard
{
public:
    PythonQtShell_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QWizard(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QWizard();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage(int  id);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  result);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void initializePage(int  id);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual int  nextId() const;
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validateCurrentPage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizard : public QWizard
{ public:
inline void promoted_cleanupPage(int  id) { QWizard::cleanupPage(id); }
inline void promoted_done(int  result) { QWizard::done(result); }
inline bool  promoted_event(QEvent*  event) { return QWizard::event(event); }
inline void promoted_initializePage(int  id) { QWizard::initializePage(id); }
inline int  promoted_nextId() const { return QWizard::nextId(); }
inline void promoted_paintEvent(QPaintEvent*  event) { QWizard::paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QWizard::resizeEvent(event); }
inline bool  promoted_validateCurrentPage() { return QWizard::validateCurrentPage(); }
};

class PythonQtWrapper_QWizard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(WizardButton WizardPixmap )
enum WizardButton{
  BackButton = QWizard::BackButton,   NextButton = QWizard::NextButton,   CommitButton = QWizard::CommitButton,   FinishButton = QWizard::FinishButton,   CancelButton = QWizard::CancelButton,   HelpButton = QWizard::HelpButton,   CustomButton1 = QWizard::CustomButton1,   CustomButton2 = QWizard::CustomButton2,   CustomButton3 = QWizard::CustomButton3,   Stretch = QWizard::Stretch,   NoButton = QWizard::NoButton,   NStandardButtons = QWizard::NStandardButtons,   NButtons = QWizard::NButtons};
enum WizardPixmap{
  WatermarkPixmap = QWizard::WatermarkPixmap,   LogoPixmap = QWizard::LogoPixmap,   BannerPixmap = QWizard::BannerPixmap,   BackgroundPixmap = QWizard::BackgroundPixmap,   NPixmaps = QWizard::NPixmaps};
public slots:
QWizard* new_QWizard(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QWizard(QWizard* obj) { delete obj; } 
   int  addPage(QWizard* theWrappedObject, QWizardPage*  page);
   QAbstractButton*  button(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   QString  buttonText(QWizard* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizard* theWrappedObject, int  id);
   int  currentId(QWizard* theWrappedObject) const;
   QWizardPage*  currentPage(QWizard* theWrappedObject) const;
   void done(QWizard* theWrappedObject, int  result);
   bool  event(QWizard* theWrappedObject, QEvent*  event);
   QVariant  field(QWizard* theWrappedObject, const QString&  name) const;
   bool  hasVisitedPage(QWizard* theWrappedObject, int  id) const;
   void initializePage(QWizard* theWrappedObject, int  id);
   int  nextId(QWizard* theWrappedObject) const;
   QWizard::WizardOptions  options(QWizard* theWrappedObject) const;
   QWizardPage*  page(QWizard* theWrappedObject, int  id) const;
   QList<int >  pageIds(QWizard* theWrappedObject) const;
   void paintEvent(QWizard* theWrappedObject, QPaintEvent*  event);
   QPixmap  pixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which) const;
   void removePage(QWizard* theWrappedObject, int  id);
   void resizeEvent(QWizard* theWrappedObject, QResizeEvent*  event);
   void setButton(QWizard* theWrappedObject, QWizard::WizardButton  which, QAbstractButton*  button);
   void setButtonLayout(QWizard* theWrappedObject, const QList<QWizard::WizardButton >&  layout);
   void setButtonText(QWizard* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setField(QWizard* theWrappedObject, const QString&  name, const QVariant&  value);
   void setOption(QWizard* theWrappedObject, QWizard::WizardOption  option, bool  on = true);
   void setOptions(QWizard* theWrappedObject, QWizard::WizardOptions  options);
   void setPage(QWizard* theWrappedObject, int  id, QWizardPage*  page);
   void setPixmap(QWizard* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSideWidget(QWizard* theWrappedObject, QWidget*  widget);
   void setStartId(QWizard* theWrappedObject, int  id);
   void setSubTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setTitleFormat(QWizard* theWrappedObject, Qt::TextFormat  format);
   void setVisible(QWizard* theWrappedObject, bool  visible);
   void setWizardStyle(QWizard* theWrappedObject, QWizard::WizardStyle  style);
   QWidget*  sideWidget(QWizard* theWrappedObject) const;
   QSize  sizeHint(QWizard* theWrappedObject) const;
   int  startId(QWizard* theWrappedObject) const;
   Qt::TextFormat  subTitleFormat(QWizard* theWrappedObject) const;
   bool  testOption(QWizard* theWrappedObject, QWizard::WizardOption  option) const;
   Qt::TextFormat  titleFormat(QWizard* theWrappedObject) const;
   bool  validateCurrentPage(QWizard* theWrappedObject);
   QList<int >  visitedPages(QWizard* theWrappedObject) const;
   QWizard::WizardStyle  wizardStyle(QWizard* theWrappedObject) const;
};





class PythonQtShell_QWizardPage : public QWizardPage
{
public:
    PythonQtShell_QWizardPage(QWidget*  parent = 0):QWizardPage(parent),_wrapper(NULL) {};

   ~PythonQtShell_QWizardPage();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void cleanupPage();
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void initializePage();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  isComplete() const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual int  nextId() const;
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  validatePage();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWizardPage : public QWizardPage
{ public:
inline void promoted_cleanupPage() { QWizardPage::cleanupPage(); }
inline QVariant  promoted_field(const QString&  name) const { return QWizardPage::field(name); }
inline void promoted_initializePage() { QWizardPage::initializePage(); }
inline bool  promoted_isComplete() const { return QWizardPage::isComplete(); }
inline int  promoted_nextId() const { return QWizardPage::nextId(); }
inline void promoted_registerField(const QString&  name, QWidget*  widget, const char*  property = 0, const char*  changedSignal = 0) { QWizardPage::registerField(name, widget, property, changedSignal); }
inline void promoted_setField(const QString&  name, const QVariant&  value) { QWizardPage::setField(name, value); }
inline bool  promoted_validatePage() { return QWizardPage::validatePage(); }
inline QWizard*  promoted_wizard() const { return QWizardPage::wizard(); }
};

class PythonQtWrapper_QWizardPage : public QObject
{ Q_OBJECT
public:
public slots:
QWizardPage* new_QWizardPage(QWidget*  parent = 0);
void delete_QWizardPage(QWizardPage* obj) { delete obj; } 
   QString  buttonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which) const;
   void cleanupPage(QWizardPage* theWrappedObject);
   QVariant  field(QWizardPage* theWrappedObject, const QString&  name) const;
   void initializePage(QWizardPage* theWrappedObject);
   bool  isCommitPage(QWizardPage* theWrappedObject) const;
   bool  isComplete(QWizardPage* theWrappedObject) const;
   bool  isFinalPage(QWizardPage* theWrappedObject) const;
   int  nextId(QWizardPage* theWrappedObject) const;
   QPixmap  pixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which) const;
   void registerField(QWizardPage* theWrappedObject, const QString&  name, QWidget*  widget, const char*  property = 0, const char*  changedSignal = 0);
   void setButtonText(QWizardPage* theWrappedObject, QWizard::WizardButton  which, const QString&  text);
   void setCommitPage(QWizardPage* theWrappedObject, bool  commitPage);
   void setField(QWizardPage* theWrappedObject, const QString&  name, const QVariant&  value);
   void setFinalPage(QWizardPage* theWrappedObject, bool  finalPage);
   void setPixmap(QWizardPage* theWrappedObject, QWizard::WizardPixmap  which, const QPixmap&  pixmap);
   void setSubTitle(QWizardPage* theWrappedObject, const QString&  subTitle);
   void setTitle(QWizardPage* theWrappedObject, const QString&  title);
   QString  subTitle(QWizardPage* theWrappedObject) const;
   QString  title(QWizardPage* theWrappedObject) const;
   bool  validatePage(QWizardPage* theWrappedObject);
   QWizard*  wizard(QWizardPage* theWrappedObject) const;
};


