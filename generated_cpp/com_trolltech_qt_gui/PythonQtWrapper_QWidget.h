#ifndef PYTHONQTWRAPPER_QWIDGET_H
#define PYTHONQTWRAPPER_QWIDGET_H

#include <qwidget.h>
#include <QObject>

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

class PythonQtWrapper_QWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RenderFlag )
enum RenderFlag{
  DrawWindowBackground = QWidget::DrawWindowBackground,   DrawChildren = QWidget::DrawChildren,   IgnoreMask = QWidget::IgnoreMask};
public slots:
QWidget* new_QWidget(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QWidget(QWidget* obj) { delete obj; } 
   bool  acceptDrops(QWidget* theWrappedObject) const;
   QString  accessibleDescription(QWidget* theWrappedObject) const;
   QString  accessibleName(QWidget* theWrappedObject) const;
   QList<QAction* >  actions(QWidget* theWrappedObject) const;
   void activateWindow(QWidget* theWrappedObject);
   void addAction(QWidget* theWrappedObject, QAction*  action);
   void addActions(QWidget* theWrappedObject, QList<QAction* >  actions);
   void adjustSize(QWidget* theWrappedObject);
   bool  autoFillBackground(QWidget* theWrappedObject) const;
   QPalette::ColorRole  backgroundRole(QWidget* theWrappedObject) const;
   QSize  baseSize(QWidget* theWrappedObject) const;
   QWidget*  childAt(QWidget* theWrappedObject, const QPoint&  p) const;
   QWidget*  childAt(QWidget* theWrappedObject, int  x, int  y) const;
   QRect  childrenRect(QWidget* theWrappedObject) const;
   QRegion  childrenRegion(QWidget* theWrappedObject) const;
   void clearFocus(QWidget* theWrappedObject);
   void clearMask(QWidget* theWrappedObject);
   QRect  contentsRect(QWidget* theWrappedObject) const;
   Qt::ContextMenuPolicy  contextMenuPolicy(QWidget* theWrappedObject) const;
   void createWinId(QWidget* theWrappedObject);
   QCursor  cursor(QWidget* theWrappedObject) const;
   int  depth(QWidget* theWrappedObject) const;
   int  devType(QWidget* theWrappedObject) const;
   WId  effectiveWinId(QWidget* theWrappedObject) const;
   void ensurePolished(QWidget* theWrappedObject) const;
   Qt::FocusPolicy  focusPolicy(QWidget* theWrappedObject) const;
   QWidget*  focusProxy(QWidget* theWrappedObject) const;
   QWidget*  focusWidget(QWidget* theWrappedObject) const;
   const QFont&  font(QWidget* theWrappedObject) const;
   QPalette::ColorRole  foregroundRole(QWidget* theWrappedObject) const;
   QRect  frameGeometry(QWidget* theWrappedObject) const;
   QSize  frameSize(QWidget* theWrappedObject) const;
   const QRect&  geometry(QWidget* theWrappedObject) const;
   void getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const;
   void grabKeyboard(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject);
   void grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1);
   int  grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context = Qt::WindowShortcut);
   bool  hasFocus(QWidget* theWrappedObject) const;
   bool  hasMouseTracking(QWidget* theWrappedObject) const;
   int  height(QWidget* theWrappedObject) const;
   int  heightForWidth(QWidget* theWrappedObject, int  arg__1) const;
   int  heightMM(QWidget* theWrappedObject) const;
   QInputContext*  inputContext(QWidget* theWrappedObject);
   QVariant  inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action);
   void insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions);
   bool  isActiveWindow(QWidget* theWrappedObject) const;
   bool  isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const;
   bool  isEnabled(QWidget* theWrappedObject) const;
   bool  isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   bool  isFullScreen(QWidget* theWrappedObject) const;
   bool  isHidden(QWidget* theWrappedObject) const;
   bool  isLeftToRight(QWidget* theWrappedObject) const;
   bool  isMaximized(QWidget* theWrappedObject) const;
   bool  isMinimized(QWidget* theWrappedObject) const;
   bool  isModal(QWidget* theWrappedObject) const;
   bool  isRightToLeft(QWidget* theWrappedObject) const;
   bool  isVisible(QWidget* theWrappedObject) const;
   bool  isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const;
   bool  isWindow(QWidget* theWrappedObject) const;
   bool  isWindowModified(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_keyboardGrabber();
   QLayout*  layout(QWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QWidget* theWrappedObject) const;
   QLocale  locale(QWidget* theWrappedObject) const;
   int  logicalDpiX(QWidget* theWrappedObject) const;
   int  logicalDpiY(QWidget* theWrappedObject) const;
   QPoint  mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const;
   QPoint  mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QPoint  mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const;
   QRegion  mask(QWidget* theWrappedObject) const;
   int  maximumHeight(QWidget* theWrappedObject) const;
   QSize  maximumSize(QWidget* theWrappedObject) const;
   int  maximumWidth(QWidget* theWrappedObject) const;
   int  minimumHeight(QWidget* theWrappedObject) const;
   QSize  minimumSize(QWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QWidget* theWrappedObject) const;
   int  minimumWidth(QWidget* theWrappedObject) const;
   QWidget*  static_QWidget_mouseGrabber();
   void move(QWidget* theWrappedObject, const QPoint&  arg__1);
   void move(QWidget* theWrappedObject, int  x, int  y);
   QWidget*  nativeParentWidget(QWidget* theWrappedObject) const;
   QWidget*  nextInFocusChain(QWidget* theWrappedObject) const;
   QRect  normalGeometry(QWidget* theWrappedObject) const;
   int  numColors(QWidget* theWrappedObject) const;
   void overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type);
   void overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state);
   QPaintEngine*  paintEngine(QWidget* theWrappedObject) const;
   bool  paintingActive(QWidget* theWrappedObject) const;
   const QPalette&  palette(QWidget* theWrappedObject) const;
   QWidget*  parentWidget(QWidget* theWrappedObject) const;
   int  physicalDpiX(QWidget* theWrappedObject) const;
   int  physicalDpiY(QWidget* theWrappedObject) const;
   QPoint  pos(QWidget* theWrappedObject) const;
   QRect  rect(QWidget* theWrappedObject) const;
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
   void setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1);
   void setLayout(QWidget* theWrappedObject, QLayout*  arg__1);
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
   void setParent(QWidget* theWrappedObject, QWidget*  parent);
   void setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f);
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
   QSize  size(QWidget* theWrappedObject) const;
   QSize  sizeHint(QWidget* theWrappedObject) const;
   QSize  sizeIncrement(QWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QWidget* theWrappedObject) const;
   void stackUnder(QWidget* theWrappedObject, QWidget*  arg__1);
   QString  statusTip(QWidget* theWrappedObject) const;
   QStyle*  style(QWidget* theWrappedObject) const;
   QString  styleSheet(QWidget* theWrappedObject) const;
   bool  testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const;
   QString  toolTip(QWidget* theWrappedObject) const;
   bool  underMouse(QWidget* theWrappedObject) const;
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
   int  width(QWidget* theWrappedObject) const;
   int  widthMM(QWidget* theWrappedObject) const;
   WId  winId(QWidget* theWrappedObject) const;
   QWidget*  window(QWidget* theWrappedObject) const;
   QString  windowFilePath(QWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QWidget* theWrappedObject) const;
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

#endif // PYTHONQTWRAPPER_QWIDGET_H
