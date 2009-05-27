#ifndef PYTHONQTWRAPPER_QWIDGET_H
#define PYTHONQTWRAPPER_QWIDGET_H

#include <qwidget.h>
#include <QObject>

#include <PythonQt.h>

#include <QIcon>
#include <QMessageBox>
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
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QWidget : public QWidget
{
public:
    PythonQtShell_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QWidget(parent, f),_wrapper(NULL) {};

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
virtual void enabledChange(bool  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void fontChange(const QFont&  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void paletteChange(const QPalette&  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void windowActivationChange(bool  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QWidget : public QWidget
{ public:
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
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
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   bool  hasFocus(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   void grabMouse(QWidget* theWrappedObject);
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   QString  statusTip(QWidget* theWrappedObject) const;
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   QLocale  locale(QWidget* theWrappedObject) const;
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void languageChange(QWidget* theWrappedObject);
   const QRect*  geometry(QWidget* theWrappedObject) const;
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   int  height(QWidget* theWrappedObject) const;
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   QString  toolTip(QWidget* theWrappedObject) const;
   int  devType(QWidget* theWrappedObject) const;
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   QLayout*  layout(QWidget* theWrappedObject) const;
   bool  acceptDrops(QWidget* theWrappedObject) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   bool  isWindowModified(QWidget* theWrappedObject) const;
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   bool  isWindow(QWidget* theWrappedObject) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   QPoint  pos(QWidget* theWrappedObject) const;
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void unsetCursor(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   bool  isVisible(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   QCursor  cursor(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   void clearFocus(QWidget* theWrappedObject);
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QSize  size(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   QSize  minimumSize(QWidget* theWrappedObject) const;
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   WId  winId(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   const QPalette*  palette(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void adjustSize(QWidget* theWrappedObject);
   void releaseMouse(QWidget* theWrappedObject);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   QString  windowIconText(QWidget* theWrappedObject) const;
   int  width(QWidget* theWrappedObject) const;
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QRect  childrenRect(QWidget* theWrappedObject) const;
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   void updateGeometry(QWidget* theWrappedObject);
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QWidget*  static_QWidget_mouseGrabber();
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   QSize  frameSize(QWidget* theWrappedObject) const;
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   void grabKeyboard(QWidget* theWrappedObject);
   bool  isHidden(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   QString  whatsThis(QWidget* theWrappedObject) const;
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   const QFont*  font(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   bool  underMouse(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, int  x, int  y);
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   bool  isMaximized(QWidget* theWrappedObject) const;
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void unsetLocale(QWidget* theWrappedObject);
   void activateWindow(QWidget* theWrappedObject);
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   QString  windowRole(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   int  x(QWidget* theWrappedObject) const;
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   QString  styleSheet(QWidget* theWrappedObject) const;
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   QSize  baseSize(QWidget* theWrappedObject) const;
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_keyboardGrabber();
   int  minimumWidth(QWidget* theWrappedObject) const;
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   QRect  rect(QWidget* theWrappedObject) const;
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   bool  isEnabled(QWidget* theWrappedObject) const;
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QWIDGET_H
