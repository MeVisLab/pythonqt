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
inline void keyPressEvent(QKeyEvent*  arg__1) { QWidget::keyPressEvent(arg__1); }
inline void tabletEvent(QTabletEvent*  arg__1) { QWidget::tabletEvent(arg__1); }
inline void inputMethodEvent(QInputMethodEvent*  arg__1) { QWidget::inputMethodEvent(arg__1); }
inline void dragMoveEvent(QDragMoveEvent*  arg__1) { QWidget::dragMoveEvent(arg__1); }
inline void mouseDoubleClickEvent(QMouseEvent*  arg__1) { QWidget::mouseDoubleClickEvent(arg__1); }
inline void leaveEvent(QEvent*  arg__1) { QWidget::leaveEvent(arg__1); }
inline void mouseMoveEvent(QMouseEvent*  arg__1) { QWidget::mouseMoveEvent(arg__1); }
inline void hideEvent(QHideEvent*  arg__1) { QWidget::hideEvent(arg__1); }
inline void dropEvent(QDropEvent*  arg__1) { QWidget::dropEvent(arg__1); }
inline bool  focusNextPrevChild(bool  next) { return QWidget::focusNextPrevChild(next); }
inline void resizeEvent(QResizeEvent*  arg__1) { QWidget::resizeEvent(arg__1); }
inline void mousePressEvent(QMouseEvent*  arg__1) { QWidget::mousePressEvent(arg__1); }
inline void paintEvent(QPaintEvent*  arg__1) { QWidget::paintEvent(arg__1); }
inline void focusOutEvent(QFocusEvent*  arg__1) { QWidget::focusOutEvent(arg__1); }
inline void focusInEvent(QFocusEvent*  arg__1) { QWidget::focusInEvent(arg__1); }
inline void dragEnterEvent(QDragEnterEvent*  arg__1) { QWidget::dragEnterEvent(arg__1); }
inline void keyReleaseEvent(QKeyEvent*  arg__1) { QWidget::keyReleaseEvent(arg__1); }
inline bool  event(QEvent*  arg__1) { return QWidget::event(arg__1); }
inline void mouseReleaseEvent(QMouseEvent*  arg__1) { QWidget::mouseReleaseEvent(arg__1); }
inline void dragLeaveEvent(QDragLeaveEvent*  arg__1) { QWidget::dragLeaveEvent(arg__1); }
inline void languageChange() { QWidget::languageChange(); }
inline void closeEvent(QCloseEvent*  arg__1) { QWidget::closeEvent(arg__1); }
inline void enterEvent(QEvent*  arg__1) { QWidget::enterEvent(arg__1); }
inline void changeEvent(QEvent*  arg__1) { QWidget::changeEvent(arg__1); }
inline void contextMenuEvent(QContextMenuEvent*  arg__1) { QWidget::contextMenuEvent(arg__1); }
inline void actionEvent(QActionEvent*  arg__1) { QWidget::actionEvent(arg__1); }
inline void moveEvent(QMoveEvent*  arg__1) { QWidget::moveEvent(arg__1); }
inline void showEvent(QShowEvent*  arg__1) { QWidget::showEvent(arg__1); }
inline void wheelEvent(QWheelEvent*  arg__1) { QWidget::wheelEvent(arg__1); }
inline int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QWidget::metric(arg__1); }
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
   void tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
   void inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1);
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   QSize  size(QWidget* theWrappedObject) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   void setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1);
   void dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1);
   void setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setFixedWidth(QWidget* theWrappedObject, int  w);
   void mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, int  w, int  h);
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, int  x, int  y);
   QString  windowRole(QWidget* theWrappedObject) const;
   QString  windowTitle(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   QInputContext*  inputContext(QWidget* theWrappedObject);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   void setFixedHeight(QWidget* theWrappedObject, int  h);
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setAccessibleDescription(QWidget* theWrappedObject, const QString&  description);
   QWidget*  window(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   void activateWindow(QWidget* theWrappedObject);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
   void setToolTip(QWidget* theWrappedObject, const QString&  arg__1);
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
   void setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh);
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   void setAutoFillBackground(QWidget* theWrappedObject, bool  enabled);
   QString  windowIconText(QWidget* theWrappedObject) const;
   void mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void createWinId(QWidget* theWrappedObject);
   void setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason);
   void hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1);
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1);
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   void resize(QWidget* theWrappedObject, int  w, int  h);
   const QFont&  font(QWidget* theWrappedObject) const;
   int  y(QWidget* theWrappedObject) const;
   void setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
   int  devType(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QIcon  windowIcon(QWidget* theWrappedObject) const;
   void setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QStyle*  style(QWidget* theWrappedObject) const;
   bool  focusNextPrevChild(QWidget* theWrappedObject, bool  next);
   void unsetLocale(QWidget* theWrappedObject);
   void resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1);
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   void mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void repaint(QWidget* theWrappedObject, const QRect&  arg__1);
   void scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3);
   void update(QWidget* theWrappedObject, const QRegion&  arg__1);
   void releaseMouse(QWidget* theWrappedObject);
   QString  whatsThis(QWidget* theWrappedObject) const;
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void setAcceptDrops(QWidget* theWrappedObject, bool  on);
   QString  windowFilePath(QWidget* theWrappedObject) const;
   QRect  contentsRect(QWidget* theWrappedObject) const;
   void setMinimumHeight(QWidget* theWrappedObject, int  minh);
   void setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   void setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   QString  accessibleName(QWidget* theWrappedObject) const;
   void addAction(QWidget* theWrappedObject, QAction*  action);
   QRegion  visibleRegion(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
   void unsetCursor(QWidget* theWrappedObject);
   void setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom);
   void setAccessibleName(QWidget* theWrappedObject, const QString&  name);
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   void setWindowRole(QWidget* theWrappedObject, const QString&  arg__1);
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   void paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1);
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   void setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on = true);
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   bool  isModal(QWidget* theWrappedObject) const;
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setStyle(QWidget* theWrappedObject, QStyle*  arg__1);
   void focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   bool  restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry);
   bool  updatesEnabled(QWidget* theWrappedObject) const;
   void focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1);
   void grabKeyboard(QWidget* theWrappedObject);
   void dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1);
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   void releaseShortcut(QWidget* theWrappedObject, int  id);
   void resize(QWidget* theWrappedObject, const QSize&  arg__1);
   QString  toolTip(QWidget* theWrappedObject) const;
   void scroll(QWidget* theWrappedObject, int  dx, int  dy);
   int  x(QWidget* theWrappedObject) const;
   void setStatusTip(QWidget* theWrappedObject, const QString&  arg__1);
   void unsetLayoutDirection(QWidget* theWrappedObject);
   void setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy);
   void setPalette(QWidget* theWrappedObject, const QPalette&  arg__1);
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   void keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1);
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void setWindowOpacity(QWidget* theWrappedObject, qreal  level);
   int  width(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_keyboardGrabber();
   WId  winId(QWidget* theWrappedObject) const;
   void releaseKeyboard(QWidget* theWrappedObject);
   bool  event(QWidget* theWrappedObject, QEvent*  arg__1);
   void removeAction(QWidget* theWrappedObject, QAction*  action);
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   void setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1);
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QString  statusTip(QWidget* theWrappedObject) const;
   void mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1);
   void setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1);
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   void dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1);
   void setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1);
   Qt::WindowModality  windowModality(QWidget* theWrappedObject) const;
   void static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2);
   void grabMouse(QWidget* theWrappedObject);
   const QPalette&  palette(QWidget* theWrappedObject) const;
   void setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   void repaint(QWidget* theWrappedObject, const QRegion&  arg__1);
   Qt::WindowType  windowType(QWidget* theWrappedObject) const;
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   QSize  frameSize(QWidget* theWrappedObject) const;
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
   void setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1);
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   void languageChange(QWidget* theWrappedObject);
   void update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1);
   void setLocale(QWidget* theWrappedObject, const QLocale&  locale);
   void setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon);
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   void setFont(QWidget* theWrappedObject, const QFont&  arg__1);
   void enterEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   Qt::WindowStates  windowState(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void setGeometry(QWidget* theWrappedObject, const QRect&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   void changeEvent(QWidget* theWrappedObject, QEvent*  arg__1);
   void setMask(QWidget* theWrappedObject, const QRegion&  arg__1);
   void setMask(QWidget* theWrappedObject, const QBitmap&  arg__1);
   void setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1);
   QSize  minimumSize(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   void setMouseTracking(QWidget* theWrappedObject, bool  enable);
   QByteArray  saveGeometry(QWidget* theWrappedObject) const;
   QLayout*  layout(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void setMaximumWidth(QWidget* theWrappedObject, int  maxw);
   const QRect&  geometry(QWidget* theWrappedObject) const;
   void render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh);
   bool  isFullScreen(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_mouseGrabber();
   bool  isMinimized(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   void contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1);
   QLocale  locale(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   void actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1);
   void setCursor(QWidget* theWrappedObject, const QCursor&  arg__1);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void clearMask(QWidget* theWrappedObject);
   int  maximumWidth(QWidget* theWrappedObject) const;
   void setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath);
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   void setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1);
   bool  isMaximized(QWidget* theWrappedObject) const;
   void moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1);
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   qreal  windowOpacity(QWidget* theWrappedObject) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   void setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1);
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   QCursor  cursor(QWidget* theWrappedObject) const;
   void setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void updateGeometry(QWidget* theWrappedObject);
   QPoint  pos(QWidget* theWrappedObject) const;
   void showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1);
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   void setFixedSize(QWidget* theWrappedObject, int  w, int  h);
   void render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset = QPoint(), const QRegion&  sourceRegion = QRegion(), QWidget::RenderFlags  renderFlags = QWidget::RenderFlags(DrawWindowBackground | DrawChildren));
   void setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   void setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh);
   void setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable = true);
   void wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1);
   void setMinimumWidth(QWidget* theWrappedObject, int  minw);
   int  metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   void adjustSize(QWidget* theWrappedObject);
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void setMaximumHeight(QWidget* theWrappedObject, int  maxh);
   void setUpdatesEnabled(QWidget* theWrappedObject, bool  enable);
   void setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable = true);
   void update(QWidget* theWrappedObject, const QRect&  arg__1);
};

#endif // PYTHONQTWRAPPER_QWIDGET_H
