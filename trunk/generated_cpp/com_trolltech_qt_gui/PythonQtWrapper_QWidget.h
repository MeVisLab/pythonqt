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
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void promoted_dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void promoted_dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void promoted_moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void promoted_actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline QSize  promoted_sizeHint() const { return QWidget::sizeHint(); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QWidget::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QWidget::inputMethodQuery(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void promoted_enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline QSize  promoted_minimumSizeHint() const { return QWidget::minimumSizeHint(); }
inline void promoted_dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void promoted_dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline int  promoted_devType() const { return QWidget::devType(); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void promoted_keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline int  promoted_heightForWidth(int  arg__1) const { return QWidget::heightForWidth(arg__1); }
inline void promoted_tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void promoted_languageChange() { QWidget::languageChange(); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
};

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   void keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   QPoint  pos(QWidget* theWrappedObject) const;
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void adjustSize(QWidget* theWrappedObject);
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   bool  isMaximized(QWidget* theWrappedObject) const;
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   bool  underMouse(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   bool  isHidden(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   QCursor  cursor(QWidget* theWrappedObject) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   void grabKeyboard(QWidget* theWrappedObject);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   void activateWindow(QWidget* theWrappedObject);
   bool  isVisible(QWidget* theWrappedObject) const;
   const QFont&  font(QWidget* theWrappedObject) const;
   QString  statusTip(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   QSize  maximumSize(QWidget* theWrappedObject) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   QString  windowFilePath(QWidget* theWrappedObject) const;
   QLayout*  layout(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, int  w, int  h);
   void releaseMouse(QWidget* theWrappedObject);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   QLocale  locale(QWidget* theWrappedObject) const;
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   void clearMask(QWidget* theWrappedObject);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   void unsetCursor(QWidget* theWrappedObject);
   int  width(QWidget* theWrappedObject) const;
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   QInputContext*  inputContext(QWidget* theWrappedObject);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   QString  styleSheet(QWidget* theWrappedObject) const;
   QString  windowRole(QWidget* theWrappedObject) const;
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   const QRect&  geometry(QWidget* theWrappedObject) const;
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   WId  winId(QWidget* theWrappedObject) const;
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   QWidget*  static_QWidget_mouseGrabber();
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
   int  maximumWidth(QWidget* theWrappedObject) const;
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   QStyle*  style(QWidget* theWrappedObject) const;
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   int  x(QWidget* theWrappedObject) const;
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   bool  hasFocus(QWidget* theWrappedObject) const;
   void unsetLocale(QWidget* theWrappedObject);
   QRect  contentsRect(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   void move(QWidget* theWrappedObject, int  x, int  y);
   void grabMouse(QWidget* theWrappedObject);
   QString  windowIconText(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   const QPalette&  palette(QWidget* theWrappedObject) const;
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   int  devType(QWidget* theWrappedObject) const;
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   int  maximumHeight(QWidget* theWrappedObject) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   bool  isModal(QWidget* theWrappedObject) const;
   void updateGeometry(QWidget* theWrappedObject);
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   void clearFocus(QWidget* theWrappedObject);
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   QSize  frameSize(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   QString  whatsThis(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   bool  isWindowModified(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   QString  windowTitle(QWidget* theWrappedObject) const;
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   QSize  size(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_keyboardGrabber();
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   void languageChange(QWidget* theWrappedObject);
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
};

#endif // PYTHONQTWRAPPER_QWIDGET_H
