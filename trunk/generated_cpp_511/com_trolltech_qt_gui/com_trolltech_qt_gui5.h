#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractbutton.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcheckbox.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlocale.h>
#include <qmainwindow.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qmessagebox.h>
#include <qmetaobject.h>
#include <qmouseeventtransition.h>
#include <qmovie.h>
#include <qobject.h>
#include <qoffscreensurface.h>
#include <qopenglbuffer.h>
#include <qopenglcontext.h>
#include <qopenglframebufferobject.h>
#include <qopenglpaintdevice.h>
#include <qopenglshaderprogram.h>
#include <qopengltexture.h>
#include <qopengltextureblitter.h>
#include <qopengltimerquery.h>
#include <qopenglvertexarrayobject.h>
#include <qopenglwidget.h>
#include <qopenglwindow.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qregion.h>
#include <qscreen.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstatusbar.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qtoolbar.h>
#include <qtouchdevice.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QMainWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMainWindow();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QMenu*  createPopupMenu();
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { this->contextMenuEvent(event); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  py_q_createPopupMenu() { return QMainWindow::createPopupMenu(); }
inline bool  py_q_event(QEvent*  event) { return QMainWindow::event(event); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockOption )
Q_FLAGS(DockOptions )
enum DockOption{
  AnimatedDocks = QMainWindow::AnimatedDocks,   AllowNestedDocks = QMainWindow::AllowNestedDocks,   AllowTabbedDocks = QMainWindow::AllowTabbedDocks,   ForceTabbedDocks = QMainWindow::ForceTabbedDocks,   VerticalTabs = QMainWindow::VerticalTabs,   GroupedDragging = QMainWindow::GroupedDragging};
Q_DECLARE_FLAGS(DockOptions, DockOption)
public slots:
QMainWindow* new_QMainWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QMainWindow(QMainWindow* obj) { delete obj; } 
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   void py_q_contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event){  (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_contextMenuEvent(event));}
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   QMenu*  py_q_createPopupMenu(QMainWindow* theWrappedObject){  return (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_createPopupMenu());}
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   bool  documentMode(QMainWindow* theWrappedObject) const;
   bool  py_q_event(QMainWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMainWindow*)theWrappedObject)->py_q_event(event));}
   QSize  iconSize(QMainWindow* theWrappedObject) const;
   void insertToolBar(QMainWindow* theWrappedObject, QToolBar*  before, QToolBar*  toolbar);
   void insertToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   bool  isAnimated(QMainWindow* theWrappedObject) const;
   bool  isDockNestingEnabled(QMainWindow* theWrappedObject) const;
   bool  isSeparator(QMainWindow* theWrappedObject, const QPoint&  pos) const;
   QMenuBar*  menuBar(QMainWindow* theWrappedObject) const;
   QWidget*  menuWidget(QMainWindow* theWrappedObject) const;
   void removeDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   void removeToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void removeToolBarBreak(QMainWindow* theWrappedObject, QToolBar*  before);
   void resizeDocks(QMainWindow* theWrappedObject, const QList<QDockWidget* >&  docks, const QList<int >&  sizes, Qt::Orientation  orientation);
   bool  restoreDockWidget(QMainWindow* theWrappedObject, QDockWidget*  dockwidget);
   bool  restoreState(QMainWindow* theWrappedObject, const QByteArray&  state, int  version = 0);
   QByteArray  saveState(QMainWindow* theWrappedObject, int  version = 0) const;
   void setCentralWidget(QMainWindow* theWrappedObject, QWidget*  widget);
   void setCorner(QMainWindow* theWrappedObject, Qt::Corner  corner, Qt::DockWidgetArea  area);
   void setDockOptions(QMainWindow* theWrappedObject, QMainWindow::DockOptions  options);
   void setDocumentMode(QMainWindow* theWrappedObject, bool  enabled);
   void setIconSize(QMainWindow* theWrappedObject, const QSize&  iconSize);
   void setMenuBar(QMainWindow* theWrappedObject, QMenuBar*  menubar);
   void setMenuWidget(QMainWindow* theWrappedObject, QWidget*  menubar);
   void setStatusBar(QMainWindow* theWrappedObject, QStatusBar*  statusbar);
   void setTabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetAreas  areas, QTabWidget::TabPosition  tabPosition);
   void setTabShape(QMainWindow* theWrappedObject, QTabWidget::TabShape  tabShape);
   void setToolButtonStyle(QMainWindow* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const;
   QTabWidget::TabShape  tabShape(QMainWindow* theWrappedObject) const;
   QList<QDockWidget* >  tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
   QWidget*  takeCentralWidget(QMainWindow* theWrappedObject);
   Qt::ToolBarArea  toolBarArea(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   bool  toolBarBreak(QMainWindow* theWrappedObject, QToolBar*  toolbar) const;
   Qt::ToolButtonStyle  toolButtonStyle(QMainWindow* theWrappedObject) const;
   bool  unifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject) const;
};





class PythonQtWrapper_QMargins : public QObject
{ Q_OBJECT
public:
public slots:
QMargins* new_QMargins();
QMargins* new_QMargins(int  left, int  top, int  right, int  bottom);
QMargins* new_QMargins(const QMargins& other) {
QMargins* a = new QMargins();
*((QMargins*)a) = other;
return a; }
void delete_QMargins(QMargins* obj) { delete obj; } 
   int  bottom(QMargins* theWrappedObject) const;
   bool  isNull(QMargins* theWrappedObject) const;
   int  left(QMargins* theWrappedObject) const;
   QMargins  __mul__(QMargins* theWrappedObject, int  factor);
   QMargins  __mul__(QMargins* theWrappedObject, qreal  factor);
   QMargins*  __imul__(QMargins* theWrappedObject, int  arg__1);
   QMargins*  __imul__(QMargins* theWrappedObject, qreal  arg__1);
   QMargins  __add__(QMargins* theWrappedObject, const QMargins&  m2);
   QRect  __add__(QMargins* theWrappedObject, const QRect&  rectangle);
   QMargins  __add__(QMargins* theWrappedObject, int  rhs);
   QMargins*  __iadd__(QMargins* theWrappedObject, const QMargins&  margins);
   QMargins*  __iadd__(QMargins* theWrappedObject, int  arg__1);
   QMargins  __sub__(QMargins* theWrappedObject, const QMargins&  m2);
   QMargins  __sub__(QMargins* theWrappedObject, int  rhs);
   QMargins*  __isub__(QMargins* theWrappedObject, const QMargins&  margins);
   QMargins*  __isub__(QMargins* theWrappedObject, int  arg__1);
   QMargins  __div__(QMargins* theWrappedObject, int  divisor);
   QMargins  __div__(QMargins* theWrappedObject, qreal  divisor);
   QMargins*  __idiv__(QMargins* theWrappedObject, int  arg__1);
   QMargins*  __idiv__(QMargins* theWrappedObject, qreal  arg__1);
   void writeTo(QMargins* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMargins* theWrappedObject, const QMargins&  m2);
   void readFrom(QMargins* theWrappedObject, QDataStream&  arg__1);
   int  right(QMargins* theWrappedObject) const;
   void setBottom(QMargins* theWrappedObject, int  bottom);
   void setLeft(QMargins* theWrappedObject, int  left);
   void setRight(QMargins* theWrappedObject, int  right);
   void setTop(QMargins* theWrappedObject, int  top);
   int  top(QMargins* theWrappedObject) const;
    QString py_toString(QMargins*);
    bool __nonzero__(QMargins* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QMatrix4x4 : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix4x4* new_QMatrix4x4();
QMatrix4x4* new_QMatrix4x4(const QMatrix&  matrix);
QMatrix4x4* new_QMatrix4x4(const QTransform&  transform);
QMatrix4x4* new_QMatrix4x4(const float*  values);
QMatrix4x4* new_QMatrix4x4(const float*  values, int  cols, int  rows);
QMatrix4x4* new_QMatrix4x4(float  m11, float  m12, float  m13, float  m14, float  m21, float  m22, float  m23, float  m24, float  m31, float  m32, float  m33, float  m34, float  m41, float  m42, float  m43, float  m44);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; } 
   QVector4D  column(QMatrix4x4* theWrappedObject, int  index) const;
   const float*  constData(QMatrix4x4* theWrappedObject) const;
   void copyDataTo(QMatrix4x4* theWrappedObject, float*  values) const;
   float*  data(QMatrix4x4* theWrappedObject);
   double  determinant(QMatrix4x4* theWrappedObject) const;
   void fill(QMatrix4x4* theWrappedObject, float  value);
   void flipCoordinates(QMatrix4x4* theWrappedObject);
   void frustum(QMatrix4x4* theWrappedObject, float  left, float  right, float  bottom, float  top, float  nearPlane, float  farPlane);
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = nullptr) const;
   bool  isAffine(QMatrix4x4* theWrappedObject) const;
   bool  isIdentity(QMatrix4x4* theWrappedObject) const;
   void lookAt(QMatrix4x4* theWrappedObject, const QVector3D&  eye, const QVector3D&  center, const QVector3D&  up);
   QPoint  map(QMatrix4x4* theWrappedObject, const QPoint&  point) const;
   QPointF  map(QMatrix4x4* theWrappedObject, const QPointF&  point) const;
   QVector3D  map(QMatrix4x4* theWrappedObject, const QVector3D&  point) const;
   QVector4D  map(QMatrix4x4* theWrappedObject, const QVector4D&  point) const;
   QRect  mapRect(QMatrix4x4* theWrappedObject, const QRect&  rect) const;
   QRectF  mapRect(QMatrix4x4* theWrappedObject, const QRectF&  rect) const;
   QVector3D  mapVector(QMatrix4x4* theWrappedObject, const QVector3D&  vector) const;
   bool  __ne__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   float*  operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   QVector3D  __mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   QVector4D  __mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, float  factor);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, float  factor);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __div__(QMatrix4x4* theWrappedObject, float  divisor);
   QMatrix4x4*  __idiv__(QMatrix4x4* theWrappedObject, float  divisor);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   void optimize(QMatrix4x4* theWrappedObject);
   void ortho(QMatrix4x4* theWrappedObject, const QRect&  rect);
   void ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void ortho(QMatrix4x4* theWrappedObject, float  left, float  right, float  bottom, float  top, float  nearPlane, float  farPlane);
   void perspective(QMatrix4x4* theWrappedObject, float  verticalAngle, float  aspectRatio, float  nearPlane, float  farPlane);
   void rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion);
   void rotate(QMatrix4x4* theWrappedObject, float  angle, const QVector3D&  vector);
   void rotate(QMatrix4x4* theWrappedObject, float  angle, float  x, float  y, float  z = 0.0f);
   QVector4D  row(QMatrix4x4* theWrappedObject, int  index) const;
   void scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void scale(QMatrix4x4* theWrappedObject, float  factor);
   void scale(QMatrix4x4* theWrappedObject, float  x, float  y);
   void scale(QMatrix4x4* theWrappedObject, float  x, float  y, float  z);
   void setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setToIdentity(QMatrix4x4* theWrappedObject);
   QMatrix  toAffine(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject, float  distanceToPlane) const;
   void translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void translate(QMatrix4x4* theWrappedObject, float  x, float  y);
   void translate(QMatrix4x4* theWrappedObject, float  x, float  y, float  z);
   QMatrix4x4  transposed(QMatrix4x4* theWrappedObject) const;
   void viewport(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void viewport(QMatrix4x4* theWrappedObject, float  left, float  bottom, float  width, float  height, float  nearPlane = 0.0f, float  farPlane = 1.0f);
    QString py_toString(QMatrix4x4*);
};





class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = nullptr):QMdiArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMdiArea();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setVisible(bool  visible);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_childEvent(QChildEvent*  childEvent) { this->childEvent(childEvent); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { this->paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { this->resizeEvent(resizeEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { this->scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  viewport) { this->setupViewport(viewport); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { this->timerEvent(timerEvent); }
inline bool  promoted_viewportEvent(QEvent*  event) { return this->viewportEvent(event); }
inline void py_q_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  py_q_event(QEvent*  event) { return QMdiArea::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline QSize  py_q_minimumSizeHint() const { return QMdiArea::minimumSizeHint(); }
inline void py_q_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void py_q_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline void py_q_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void py_q_setupViewport(QWidget*  viewport) { QMdiArea::setupViewport(viewport); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QMdiArea::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline bool  py_q_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
};

class PythonQtWrapper_QMdiArea : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AreaOption )
Q_FLAGS(AreaOptions )
enum AreaOption{
  DontMaximizeSubWindowOnActivation = QMdiArea::DontMaximizeSubWindowOnActivation};
Q_DECLARE_FLAGS(AreaOptions, AreaOption)
public slots:
QMdiArea* new_QMdiArea(QWidget*  parent = nullptr);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = Qt::WindowFlags());
   QBrush  background(QMdiArea* theWrappedObject) const;
   void py_q_childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_childEvent(childEvent));}
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   bool  documentMode(QMdiArea* theWrappedObject) const;
   bool  py_q_event(QMdiArea* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_eventFilter(object, event));}
   QSize  py_q_minimumSizeHint(QMdiArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_paintEvent(paintEvent));}
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   void py_q_resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_resizeEvent(resizeEvent));}
   void py_q_scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_scrollContentsBy(dx, dy));}
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void setDocumentMode(QMdiArea* theWrappedObject, bool  enabled);
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   void setTabsClosable(QMdiArea* theWrappedObject, bool  closable);
   void setTabsMovable(QMdiArea* theWrappedObject, bool  movable);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   void py_q_setupViewport(QMdiArea* theWrappedObject, QWidget*  viewport){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_setupViewport(viewport));}
   void py_q_showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  py_q_sizeHint(QMdiArea* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_sizeHint());}
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   bool  tabsClosable(QMdiArea* theWrappedObject) const;
   bool  tabsMovable(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void py_q_timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent){  (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_timerEvent(timerEvent));}
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   bool  py_q_viewportEvent(QMdiArea* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiArea*)theWrappedObject)->py_q_viewportEvent(event));}
};





class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags()):QMdiSubWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMdiSubWindow();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  changeEvent);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  closeEvent);
virtual void contextMenuEvent(QContextMenuEvent*  contextMenuEvent);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  focusInEvent);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  focusOutEvent);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  keyEvent);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  leaveEvent);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  mouseEvent);
virtual void mouseMoveEvent(QMouseEvent*  mouseEvent);
virtual void mousePressEvent(QMouseEvent*  mouseEvent);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline void promoted_changeEvent(QEvent*  changeEvent) { this->changeEvent(changeEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { this->childEvent(childEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { this->closeEvent(closeEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { this->contextMenuEvent(contextMenuEvent); }
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return this->eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { this->focusInEvent(focusInEvent); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { this->focusOutEvent(focusOutEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { this->hideEvent(hideEvent); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { this->keyPressEvent(keyEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { this->leaveEvent(leaveEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { this->mouseDoubleClickEvent(mouseEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { this->mouseMoveEvent(mouseEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { this->mousePressEvent(mouseEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { this->mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { this->moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { this->paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { this->resizeEvent(resizeEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { this->showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { this->timerEvent(timerEvent); }
inline void py_q_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void py_q_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void py_q_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void py_q_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline bool  py_q_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline bool  py_q_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void py_q_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void py_q_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void py_q_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void py_q_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void py_q_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline QSize  py_q_minimumSizeHint() const { return QMdiSubWindow::minimumSizeHint(); }
inline void py_q_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void py_q_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void py_q_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline void py_q_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline void py_q_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void py_q_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
inline void py_q_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline QSize  py_q_sizeHint() const { return QMdiSubWindow::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
};

class PythonQtWrapper_QMdiSubWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SubWindowOption )
Q_FLAGS(SubWindowOptions )
enum SubWindowOption{
  AllowOutsideAreaHorizontally = QMdiSubWindow::AllowOutsideAreaHorizontally,   AllowOutsideAreaVertically = QMdiSubWindow::AllowOutsideAreaVertically,   RubberBandResize = QMdiSubWindow::RubberBandResize,   RubberBandMove = QMdiSubWindow::RubberBandMove};
Q_DECLARE_FLAGS(SubWindowOptions, SubWindowOption)
public slots:
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::WindowFlags());
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   void py_q_changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_changeEvent(changeEvent));}
   void py_q_childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_childEvent(childEvent));}
   void py_q_closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_closeEvent(closeEvent));}
   void py_q_contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_contextMenuEvent(contextMenuEvent));}
   bool  py_q_event(QMdiSubWindow* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_event(event));}
   bool  py_q_eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event){  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_eventFilter(object, event));}
   void py_q_focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_focusInEvent(focusInEvent));}
   void py_q_focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_focusOutEvent(focusOutEvent));}
   void py_q_hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_hideEvent(hideEvent));}
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   void py_q_keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_keyPressEvent(keyEvent));}
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void py_q_leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_leaveEvent(leaveEvent));}
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QMdiSubWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseDoubleClickEvent(mouseEvent));}
   void py_q_mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseMoveEvent(mouseEvent));}
   void py_q_mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mousePressEvent(mouseEvent));}
   void py_q_mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_mouseReleaseEvent(mouseEvent));}
   void py_q_moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_moveEvent(moveEvent));}
   void py_q_paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_paintEvent(paintEvent));}
   void py_q_resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_resizeEvent(resizeEvent));}
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void py_q_showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_showEvent(showEvent));}
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   QSize  py_q_sizeHint(QMdiSubWindow* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_sizeHint());}
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   void py_q_timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent){  (((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->py_q_timerEvent(timerEvent));}
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
};





class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = nullptr):QMenu(parent),_wrapper(NULL) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = nullptr):QMenu(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenu();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline int  promoted_columnCount() const { return this->columnCount(); }
inline void promoted_enterEvent(QEvent*  arg__1) { this->enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return this->focusNextPrevChild(next); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { this->hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { this->initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { this->wheelEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline void py_q_enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline bool  py_q_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void py_q_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline QSize  py_q_sizeHint() const { return QMenu::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void py_q_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = nullptr);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = nullptr);
void delete_QMenu(QMenu* obj) { delete obj; } 
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   void py_q_actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_actionEvent(arg__1));}
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenu* theWrappedObject) const;
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addAction(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut = 0);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text);
   QAction*  addAction(QMenu* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member, const QKeySequence&  shortcut = 0);
   QAction*  addMenu(QMenu* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenu* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenu* theWrappedObject, const QString&  title);
   QAction*  addSection(QMenu* theWrappedObject, const QIcon&  icon, const QString&  text);
   QAction*  addSection(QMenu* theWrappedObject, const QString&  text);
   QAction*  addSeparator(QMenu* theWrappedObject);
   void py_q_changeEvent(QMenu* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QMenu* theWrappedObject);
   int  columnCount(QMenu* theWrappedObject) const;
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void py_q_enterEvent(QMenu* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_enterEvent(arg__1));}
   bool  py_q_event(QMenu* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_event(arg__1));}
   QAction*  exec(QMenu* theWrappedObject);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = nullptr, QWidget*  parent = nullptr);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = nullptr);
   bool  py_q_focusNextPrevChild(QMenu* theWrappedObject, bool  next){  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_focusNextPrevChild(next));}
   void py_q_hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_hideEvent(arg__1));}
   void hideTearOffMenu(QMenu* theWrappedObject);
   QIcon  icon(QMenu* theWrappedObject) const;
   void initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSection(QMenu* theWrappedObject, QAction*  before, const QIcon&  icon, const QString&  text);
   QAction*  insertSection(QMenu* theWrappedObject, QAction*  before, const QString&  text);
   QAction*  insertSeparator(QMenu* theWrappedObject, QAction*  before);
   bool  isEmpty(QMenu* theWrappedObject) const;
   bool  isTearOffEnabled(QMenu* theWrappedObject) const;
   bool  isTearOffMenuVisible(QMenu* theWrappedObject) const;
   void py_q_keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void py_q_mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = nullptr);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   void setToolTipsVisible(QMenu* theWrappedObject, bool  visible);
   void showTearOffMenu(QMenu* theWrappedObject);
   void showTearOffMenu(QMenu* theWrappedObject, const QPoint&  pos);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   QSize  py_q_sizeHint(QMenu* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_timerEvent(arg__1));}
   QString  title(QMenu* theWrappedObject) const;
   bool  toolTipsVisible(QMenu* theWrappedObject) const;
   void py_q_wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1){  (((PythonQtPublicPromoter_QMenu*)theWrappedObject)->py_q_wheelEvent(arg__1));}
    bool __nonzero__(QMenu* obj) { return !obj->isEmpty(); }

  QAction* addAction (QMenu* menu, const QString & text, PyObject* callable, const QKeySequence & shortcut = 0) {
    QAction* a = menu->addAction(text);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
  QAction* addAction (QMenu* menu, const QIcon& icon, const QString& text, PyObject* callable, const QKeySequence& shortcut = 0)
  {
    QAction* a = menu->addAction(text);
    a->setIcon(icon);
    a->setShortcut(shortcut);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMenuBar : public QMenuBar
{
public:
    PythonQtShell_QMenuBar(QWidget*  parent = nullptr):QMenuBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenuBar();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenuBar : public QMenuBar
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { this->actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { this->changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return this->event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return this->eventFilter(arg__1, arg__2); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { this->focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { this->focusOutEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { this->initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { this->keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { this->leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { this->mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { this->mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { this->mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { this->paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { this->resizeEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { this->timerEvent(arg__1); }
inline void py_q_actionEvent(QActionEvent*  arg__1) { QMenuBar::actionEvent(arg__1); }
inline void py_q_changeEvent(QEvent*  arg__1) { QMenuBar::changeEvent(arg__1); }
inline bool  py_q_event(QEvent*  arg__1) { return QMenuBar::event(arg__1); }
inline bool  py_q_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QMenuBar::eventFilter(arg__1, arg__2); }
inline void py_q_focusInEvent(QFocusEvent*  arg__1) { QMenuBar::focusInEvent(arg__1); }
inline void py_q_focusOutEvent(QFocusEvent*  arg__1) { QMenuBar::focusOutEvent(arg__1); }
inline int  py_q_heightForWidth(int  arg__1) const { return QMenuBar::heightForWidth(arg__1); }
inline void py_q_keyPressEvent(QKeyEvent*  arg__1) { QMenuBar::keyPressEvent(arg__1); }
inline void py_q_leaveEvent(QEvent*  arg__1) { QMenuBar::leaveEvent(arg__1); }
inline QSize  py_q_minimumSizeHint() const { return QMenuBar::minimumSizeHint(); }
inline void py_q_mouseMoveEvent(QMouseEvent*  arg__1) { QMenuBar::mouseMoveEvent(arg__1); }
inline void py_q_mousePressEvent(QMouseEvent*  arg__1) { QMenuBar::mousePressEvent(arg__1); }
inline void py_q_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenuBar::mouseReleaseEvent(arg__1); }
inline void py_q_paintEvent(QPaintEvent*  arg__1) { QMenuBar::paintEvent(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  arg__1) { QMenuBar::resizeEvent(arg__1); }
inline void py_q_setVisible(bool  visible) { QMenuBar::setVisible(visible); }
inline QSize  py_q_sizeHint() const { return QMenuBar::sizeHint(); }
inline void py_q_timerEvent(QTimerEvent*  arg__1) { QMenuBar::timerEvent(arg__1); }
};

class PythonQtWrapper_QMenuBar : public QObject
{ Q_OBJECT
public:
public slots:
QMenuBar* new_QMenuBar(QWidget*  parent = nullptr);
void delete_QMenuBar(QMenuBar* obj) { delete obj; } 
   QAction*  actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const;
   void py_q_actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_actionEvent(arg__1));}
   QRect  actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenuBar* theWrappedObject) const;
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addMenu(QMenuBar* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QString&  title);
   QAction*  addSeparator(QMenuBar* theWrappedObject);
   void py_q_changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_changeEvent(arg__1));}
   void clear(QMenuBar* theWrappedObject);
   QWidget*  cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   bool  py_q_event(QMenuBar* theWrappedObject, QEvent*  arg__1){  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_event(arg__1));}
   bool  py_q_eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2){  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_eventFilter(arg__1, arg__2));}
   void py_q_focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_focusInEvent(arg__1));}
   void py_q_focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_focusOutEvent(arg__1));}
   int  py_q_heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_heightForWidth(arg__1));}
   void initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   QAction*  insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSeparator(QMenuBar* theWrappedObject, QAction*  before);
   bool  isDefaultUp(QMenuBar* theWrappedObject) const;
   bool  isNativeMenuBar(QMenuBar* theWrappedObject) const;
   void py_q_keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_keyPressEvent(arg__1));}
   void py_q_leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_leaveEvent(arg__1));}
   QSize  minimumSizeHint(QMenuBar* theWrappedObject) const;
   QSize  py_q_minimumSizeHint(QMenuBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_minimumSizeHint());}
   void py_q_mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mouseMoveEvent(arg__1));}
   void py_q_mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mousePressEvent(arg__1));}
   void py_q_mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_mouseReleaseEvent(arg__1));}
   void py_q_paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_paintEvent(arg__1));}
   void py_q_resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_resizeEvent(arg__1));}
   void setActiveAction(QMenuBar* theWrappedObject, QAction*  action);
   void setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1);
   void setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar);
   void py_q_setVisible(QMenuBar* theWrappedObject, bool  visible){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_setVisible(visible));}
   QSize  sizeHint(QMenuBar* theWrappedObject) const;
   QSize  py_q_sizeHint(QMenuBar* theWrappedObject) const{  return (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_sizeHint());}
   void py_q_timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1){  (((PythonQtPublicPromoter_QMenuBar*)theWrappedObject)->py_q_timerEvent(arg__1));}

  QAction* addAction (QMenuBar* menu, const QString & text, PyObject* callable)
  {
    QAction* a = menu->addAction(text);
    PythonQt::self()->addSignalHandler(a, SIGNAL(triggered(bool)), callable);
    return a;
  }
  
};





class PythonQtShell_QMessageBox : public QMessageBox
{
public:
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = nullptr):QMessageBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMessageBox();

virtual void accept();
virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { this->changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { this->closeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { this->keyPressEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline void py_q_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void py_q_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline bool  py_q_event(QEvent*  e) { return QMessageBox::event(e); }
inline void py_q_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
};

class PythonQtWrapper_QMessageBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonRole{
  InvalidRole = QMessageBox::InvalidRole,   AcceptRole = QMessageBox::AcceptRole,   RejectRole = QMessageBox::RejectRole,   DestructiveRole = QMessageBox::DestructiveRole,   ActionRole = QMessageBox::ActionRole,   HelpRole = QMessageBox::HelpRole,   YesRole = QMessageBox::YesRole,   NoRole = QMessageBox::NoRole,   ResetRole = QMessageBox::ResetRole,   ApplyRole = QMessageBox::ApplyRole,   NRoles = QMessageBox::NRoles};
enum StandardButton{
  NoButton = QMessageBox::NoButton,   Ok = QMessageBox::Ok,   Save = QMessageBox::Save,   SaveAll = QMessageBox::SaveAll,   Open = QMessageBox::Open,   Yes = QMessageBox::Yes,   YesToAll = QMessageBox::YesToAll,   No = QMessageBox::No,   NoToAll = QMessageBox::NoToAll,   Abort = QMessageBox::Abort,   Retry = QMessageBox::Retry,   Ignore = QMessageBox::Ignore,   Close = QMessageBox::Close,   Cancel = QMessageBox::Cancel,   Discard = QMessageBox::Discard,   Help = QMessageBox::Help,   Apply = QMessageBox::Apply,   Reset = QMessageBox::Reset,   RestoreDefaults = QMessageBox::RestoreDefaults,   FirstButton = QMessageBox::FirstButton,   LastButton = QMessageBox::LastButton,   YesAll = QMessageBox::YesAll,   NoAll = QMessageBox::NoAll,   Default = QMessageBox::Default,   Escape = QMessageBox::Escape,   FlagMask = QMessageBox::FlagMask,   ButtonMask = QMessageBox::ButtonMask};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = nullptr, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = nullptr);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void py_q_changeEvent(QMessageBox* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_changeEvent(event));}
   QCheckBox*  checkBox(QMessageBox* theWrappedObject) const;
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void py_q_closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_closeEvent(event));}
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   bool  py_q_event(QMessageBox* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_event(e));}
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QString  informativeText(QMessageBox* theWrappedObject) const;
   void py_q_keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_keyPressEvent(event));}
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::StandardButtons(Yes | No), QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void py_q_resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_resizeEvent(event));}
   void setCheckBox(QMessageBox* theWrappedObject, QCheckBox*  cb);
   void setDefaultButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setDefaultButton(QMessageBox* theWrappedObject, QPushButton*  button);
   void setDetailedText(QMessageBox* theWrappedObject, const QString&  text);
   void setEscapeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void setEscapeButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   void setIcon(QMessageBox* theWrappedObject, QMessageBox::Icon  arg__1);
   void setIconPixmap(QMessageBox* theWrappedObject, const QPixmap&  pixmap);
   void setInformativeText(QMessageBox* theWrappedObject, const QString&  text);
   void setStandardButtons(QMessageBox* theWrappedObject, QMessageBox::StandardButtons  buttons);
   void setText(QMessageBox* theWrappedObject, const QString&  text);
   void setTextFormat(QMessageBox* theWrappedObject, Qt::TextFormat  format);
   void setTextInteractionFlags(QMessageBox* theWrappedObject, Qt::TextInteractionFlags  flags);
   void py_q_showEvent(QMessageBox* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QMessageBox*)theWrappedObject)->py_q_showEvent(event));}
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   QString  text(QMessageBox* theWrappedObject) const;
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, screenPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source):QMouseEvent(type, localPos, windowPos, screenPos, button, buttons, modifiers, source),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, Qt::MouseEventSource  source);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QMouseEvent* theWrappedObject) const;
   Qt::MouseEventFlags  flags(QMouseEvent* theWrappedObject) const;
   QPoint  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   const QPointF*  localPos(QMouseEvent* theWrappedObject) const;
   QPoint  pos(QMouseEvent* theWrappedObject) const;
   const QPointF*  screenPos(QMouseEvent* theWrappedObject) const;
   void setLocalPos(QMouseEvent* theWrappedObject, const QPointF&  localPosition);
   Qt::MouseEventSource  source(QMouseEvent* theWrappedObject) const;
   const QPointF*  windowPos(QMouseEvent* theWrappedObject) const;
   int  x(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMouseEventTransition : public QMouseEventTransition
{
public:
    PythonQtShell_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = nullptr):QMouseEventTransition(object, type, button, sourceState),_wrapper(NULL) {};
    PythonQtShell_QMouseEventTransition(QState*  sourceState = nullptr):QMouseEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEventTransition();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMouseEventTransition : public QMouseEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return this->eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { this->onTransition(event); }
inline bool  py_q_eventTest(QEvent*  event) { return QMouseEventTransition::eventTest(event); }
inline void py_q_onTransition(QEvent*  event) { QMouseEventTransition::onTransition(event); }
};

class PythonQtWrapper_QMouseEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEventTransition* new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = nullptr);
QMouseEventTransition* new_QMouseEventTransition(QState*  sourceState = nullptr);
void delete_QMouseEventTransition(QMouseEventTransition* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEventTransition* theWrappedObject) const;
   bool  py_q_eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->py_q_eventTest(event));}
   QPainterPath  hitTestPath(QMouseEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QMouseEventTransition* theWrappedObject) const;
   void py_q_onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event){  (((PythonQtPublicPromoter_QMouseEventTransition*)theWrappedObject)->py_q_onTransition(event));}
   void setButton(QMouseEventTransition* theWrappedObject, Qt::MouseButton  button);
   void setHitTestPath(QMouseEventTransition* theWrappedObject, const QPainterPath&  path);
   void setModifierMask(QMouseEventTransition* theWrappedObject, Qt::KeyboardModifiers  modifiers);
};





class PythonQtShell_QMoveEvent : public QMoveEvent
{
public:
    PythonQtShell_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos):QMoveEvent(pos, oldPos),_wrapper(NULL) {};

   ~PythonQtShell_QMoveEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMoveEvent* new_QMoveEvent(const QPoint&  pos, const QPoint&  oldPos);
void delete_QMoveEvent(QMoveEvent* obj) { delete obj; } 
   const QPoint*  oldPos(QMoveEvent* theWrappedObject) const;
   const QPoint*  pos(QMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QMovie : public QMovie
{
public:
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = nullptr):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr):QMovie(fileName, format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMovie();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
QMovie* new_QMovie(QObject*  parent = nullptr);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = nullptr);
void delete_QMovie(QMovie* obj) { delete obj; } 
   QColor  backgroundColor(QMovie* theWrappedObject) const;
   QMovie::CacheMode  cacheMode(QMovie* theWrappedObject) const;
   int  currentFrameNumber(QMovie* theWrappedObject) const;
   QImage  currentImage(QMovie* theWrappedObject) const;
   QPixmap  currentPixmap(QMovie* theWrappedObject) const;
   QIODevice*  device(QMovie* theWrappedObject) const;
   QString  fileName(QMovie* theWrappedObject) const;
   QByteArray  format(QMovie* theWrappedObject) const;
   int  frameCount(QMovie* theWrappedObject) const;
   QRect  frameRect(QMovie* theWrappedObject) const;
   bool  isValid(QMovie* theWrappedObject) const;
   bool  jumpToFrame(QMovie* theWrappedObject, int  frameNumber);
   QImageReader::ImageReaderError  lastError(QMovie* theWrappedObject) const;
   QString  lastErrorString(QMovie* theWrappedObject) const;
   int  loopCount(QMovie* theWrappedObject) const;
   int  nextFrameDelay(QMovie* theWrappedObject) const;
   QSize  scaledSize(QMovie* theWrappedObject);
   void setBackgroundColor(QMovie* theWrappedObject, const QColor&  color);
   void setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode);
   void setDevice(QMovie* theWrappedObject, QIODevice*  device);
   void setFileName(QMovie* theWrappedObject, const QString&  fileName);
   void setFormat(QMovie* theWrappedObject, const QByteArray&  format);
   void setScaledSize(QMovie* theWrappedObject, const QSize&  size);
   int  speed(QMovie* theWrappedObject) const;
   QMovie::MovieState  state(QMovie* theWrappedObject) const;
   QList<QByteArray >  static_QMovie_supportedFormats();
    bool __nonzero__(QMovie* obj) { return obj->isValid(); }
};





class PythonQtShell_QNativeGestureEvent : public QNativeGestureEvent
{
public:
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument):QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument),_wrapper(NULL) {};
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QTouchDevice*  dev, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument):QNativeGestureEvent(type, dev, localPos, windowPos, screenPos, value, sequenceId, intArgument),_wrapper(NULL) {};

   ~PythonQtShell_QNativeGestureEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNativeGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument);
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QTouchDevice*  dev, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument);
void delete_QNativeGestureEvent(QNativeGestureEvent* obj) { delete obj; } 
   const QTouchDevice*  device(QNativeGestureEvent* theWrappedObject) const;
   Qt::NativeGestureType  gestureType(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  globalPos(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  localPos(QNativeGestureEvent* theWrappedObject) const;
   const QPoint  pos(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  screenPos(QNativeGestureEvent* theWrappedObject) const;
   qreal  value(QNativeGestureEvent* theWrappedObject) const;
   const QPointF*  windowPos(QNativeGestureEvent* theWrappedObject) const;
};





class PythonQtShell_QOffscreenSurface : public QOffscreenSurface
{
public:
    PythonQtShell_QOffscreenSurface(QScreen*  screen = nullptr):QOffscreenSurface(screen),_wrapper(NULL) {};
    PythonQtShell_QOffscreenSurface(QScreen*  screen, QObject*  parent):QOffscreenSurface(screen, parent),_wrapper(NULL) {};

   ~PythonQtShell_QOffscreenSurface();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QSurfaceFormat  format() const;
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOffscreenSurface : public QOffscreenSurface
{ public:
inline QSurfaceFormat  py_q_format() const { return QOffscreenSurface::format(); }
inline QSize  py_q_size() const { return QOffscreenSurface::size(); }
inline QSurface::SurfaceType  py_q_surfaceType() const { return QOffscreenSurface::surfaceType(); }
};

class PythonQtWrapper_QOffscreenSurface : public QObject
{ Q_OBJECT
public:
public slots:
QOffscreenSurface* new_QOffscreenSurface(QScreen*  screen = nullptr);
QOffscreenSurface* new_QOffscreenSurface(QScreen*  screen, QObject*  parent);
void delete_QOffscreenSurface(QOffscreenSurface* obj) { delete obj; } 
   void create(QOffscreenSurface* theWrappedObject);
   void destroy(QOffscreenSurface* theWrappedObject);
   QSurfaceFormat  py_q_format(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_format());}
   bool  isValid(QOffscreenSurface* theWrappedObject) const;
   void*  nativeHandle(QOffscreenSurface* theWrappedObject) const;
   QSurfaceFormat  requestedFormat(QOffscreenSurface* theWrappedObject) const;
   QScreen*  screen(QOffscreenSurface* theWrappedObject) const;
   void setFormat(QOffscreenSurface* theWrappedObject, const QSurfaceFormat&  format);
   void setNativeHandle(QOffscreenSurface* theWrappedObject, void*  handle);
   void setScreen(QOffscreenSurface* theWrappedObject, QScreen*  screen);
   QSize  py_q_size(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_size());}
   QSurface::SurfaceType  py_q_surfaceType(QOffscreenSurface* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOffscreenSurface*)theWrappedObject)->py_q_surfaceType());}
    bool __nonzero__(QOffscreenSurface* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access RangeAccessFlag Type UsagePattern )
enum Access{
  ReadOnly = QOpenGLBuffer::ReadOnly,   WriteOnly = QOpenGLBuffer::WriteOnly,   ReadWrite = QOpenGLBuffer::ReadWrite};
enum RangeAccessFlag{
  RangeRead = QOpenGLBuffer::RangeRead,   RangeWrite = QOpenGLBuffer::RangeWrite,   RangeInvalidate = QOpenGLBuffer::RangeInvalidate,   RangeInvalidateBuffer = QOpenGLBuffer::RangeInvalidateBuffer,   RangeFlushExplicit = QOpenGLBuffer::RangeFlushExplicit,   RangeUnsynchronized = QOpenGLBuffer::RangeUnsynchronized};
enum Type{
  VertexBuffer = QOpenGLBuffer::VertexBuffer,   IndexBuffer = QOpenGLBuffer::IndexBuffer,   PixelPackBuffer = QOpenGLBuffer::PixelPackBuffer,   PixelUnpackBuffer = QOpenGLBuffer::PixelUnpackBuffer};
enum UsagePattern{
  StreamDraw = QOpenGLBuffer::StreamDraw,   StreamRead = QOpenGLBuffer::StreamRead,   StreamCopy = QOpenGLBuffer::StreamCopy,   StaticDraw = QOpenGLBuffer::StaticDraw,   StaticRead = QOpenGLBuffer::StaticRead,   StaticCopy = QOpenGLBuffer::StaticCopy,   DynamicDraw = QOpenGLBuffer::DynamicDraw,   DynamicRead = QOpenGLBuffer::DynamicRead,   DynamicCopy = QOpenGLBuffer::DynamicCopy};
public slots:
QOpenGLBuffer* new_QOpenGLBuffer();
QOpenGLBuffer* new_QOpenGLBuffer(QOpenGLBuffer::Type  type);
QOpenGLBuffer* new_QOpenGLBuffer(const QOpenGLBuffer&  other);
void delete_QOpenGLBuffer(QOpenGLBuffer* obj) { delete obj; } 
   void allocate(QOpenGLBuffer* theWrappedObject, const void*  data, int  count);
   void allocate(QOpenGLBuffer* theWrappedObject, int  count);
   bool  bind(QOpenGLBuffer* theWrappedObject);
   GLuint  bufferId(QOpenGLBuffer* theWrappedObject) const;
   bool  create(QOpenGLBuffer* theWrappedObject);
   void destroy(QOpenGLBuffer* theWrappedObject);
   bool  isCreated(QOpenGLBuffer* theWrappedObject) const;
   void*  map(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::Access  access);
   QOpenGLBuffer*  operator_assign(QOpenGLBuffer* theWrappedObject, const QOpenGLBuffer&  other);
   bool  read(QOpenGLBuffer* theWrappedObject, int  offset, void*  data, int  count);
   void release(QOpenGLBuffer* theWrappedObject);
   void static_QOpenGLBuffer_release(QOpenGLBuffer::Type  type);
   void setUsagePattern(QOpenGLBuffer* theWrappedObject, QOpenGLBuffer::UsagePattern  value);
   int  size(QOpenGLBuffer* theWrappedObject) const;
   QOpenGLBuffer::Type  type(QOpenGLBuffer* theWrappedObject) const;
   bool  unmap(QOpenGLBuffer* theWrappedObject);
   QOpenGLBuffer::UsagePattern  usagePattern(QOpenGLBuffer* theWrappedObject) const;
   void write(QOpenGLBuffer* theWrappedObject, int  offset, const void*  data, int  count);
};





class PythonQtShell_QOpenGLContext : public QOpenGLContext
{
public:
    PythonQtShell_QOpenGLContext(QObject*  parent = nullptr):QOpenGLContext(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLContext();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLModuleType )
enum OpenGLModuleType{
  LibGL = QOpenGLContext::LibGL,   LibGLES = QOpenGLContext::LibGLES};
public slots:
QOpenGLContext* new_QOpenGLContext(QObject*  parent = nullptr);
void delete_QOpenGLContext(QOpenGLContext* obj) { delete obj; } 
   bool  static_QOpenGLContext_areSharing(QOpenGLContext*  first, QOpenGLContext*  second);
   bool  create(QOpenGLContext* theWrappedObject);
   QOpenGLContext*  static_QOpenGLContext_currentContext();
   GLuint  defaultFramebufferObject(QOpenGLContext* theWrappedObject) const;
   void doneCurrent(QOpenGLContext* theWrappedObject);
   QSet<QByteArray >  extensions(QOpenGLContext* theWrappedObject) const;
   QSurfaceFormat  format(QOpenGLContext* theWrappedObject) const;
   QOpenGLFunctions*  functions(QOpenGLContext* theWrappedObject) const;
   QOpenGLContext*  static_QOpenGLContext_globalShareContext();
   bool  hasExtension(QOpenGLContext* theWrappedObject, const QByteArray&  extension) const;
   bool  isOpenGLES(QOpenGLContext* theWrappedObject) const;
   bool  isValid(QOpenGLContext* theWrappedObject) const;
   bool  makeCurrent(QOpenGLContext* theWrappedObject, QSurface*  surface);
   QVariant  nativeHandle(QOpenGLContext* theWrappedObject) const;
   void*  static_QOpenGLContext_openGLModuleHandle();
   QOpenGLContext::OpenGLModuleType  static_QOpenGLContext_openGLModuleType();
   QScreen*  screen(QOpenGLContext* theWrappedObject) const;
   void setFormat(QOpenGLContext* theWrappedObject, const QSurfaceFormat&  format);
   void setNativeHandle(QOpenGLContext* theWrappedObject, const QVariant&  handle);
   void setScreen(QOpenGLContext* theWrappedObject, QScreen*  screen);
   void setShareContext(QOpenGLContext* theWrappedObject, QOpenGLContext*  shareContext);
   QOpenGLContext*  shareContext(QOpenGLContext* theWrappedObject) const;
   QOpenGLContextGroup*  shareGroup(QOpenGLContext* theWrappedObject) const;
   bool  static_QOpenGLContext_supportsThreadedOpenGL();
   QSurface*  surface(QOpenGLContext* theWrappedObject) const;
   void swapBuffers(QOpenGLContext* theWrappedObject, QSurface*  surface);
    QString py_toString(QOpenGLContext*);
    bool __nonzero__(QOpenGLContext* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLContextGroup : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLContextGroup(QOpenGLContextGroup* obj) { delete obj; } 
   QOpenGLContextGroup*  static_QOpenGLContextGroup_currentContextGroup();
   QList<QOpenGLContext* >  shares(QOpenGLContextGroup* theWrappedObject) const;
    QString py_toString(QOpenGLContextGroup*);
};





class PythonQtShell_QOpenGLFramebufferObject : public QOpenGLFramebufferObject
{
public:
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(size, attachment, target, internalFormat),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(width, height, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0):QOpenGLFramebufferObject(width, height, attachment, target, internalFormat),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(width, height, format),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLFramebufferObject();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment FramebufferRestorePolicy )
enum Attachment{
  NoAttachment = QOpenGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QOpenGLFramebufferObject::CombinedDepthStencil,   Depth = QOpenGLFramebufferObject::Depth};
enum FramebufferRestorePolicy{
  DontRestoreFramebufferBinding = QOpenGLFramebufferObject::DontRestoreFramebufferBinding,   RestoreFramebufferBindingToDefault = QOpenGLFramebufferObject::RestoreFramebufferBindingToDefault,   RestoreFrameBufferBinding = QOpenGLFramebufferObject::RestoreFrameBufferBinding};
public slots:
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internalFormat = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format);
void delete_QOpenGLFramebufferObject(QOpenGLFramebufferObject* obj) { delete obj; } 
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, const QSize&  size, GLenum  internalFormat = 0);
   void addColorAttachment(QOpenGLFramebufferObject* theWrappedObject, int  width, int  height, GLenum  internalFormat = 0);
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  bind(QOpenGLFramebufferObject* theWrappedObject);
   bool  static_QOpenGLFramebufferObject_bindDefault();
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, QOpenGLFramebufferObject*  source, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers, GLenum  filter, int  readColorAttachmentIndex, int  drawColorAttachmentIndex, QOpenGLFramebufferObject::FramebufferRestorePolicy  restorePolicy);
   QOpenGLFramebufferObjectFormat  format(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  handle(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferBlit();
   bool  static_QOpenGLFramebufferObject_hasOpenGLFramebufferObjects();
   int  height(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isBound(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  release(QOpenGLFramebufferObject* theWrappedObject);
   void setAttachment(QOpenGLFramebufferObject* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   QSize  size(QOpenGLFramebufferObject* theWrappedObject) const;
   QVector<QSize >  sizes(QOpenGLFramebufferObject* theWrappedObject) const;
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject);
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject, int  colorAttachmentIndex);
   GLuint  texture(QOpenGLFramebufferObject* theWrappedObject) const;
   QVector<GLuint >  textures(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject, bool  flipped, int  colorAttachmentIndex) const;
   int  width(QOpenGLFramebufferObject* theWrappedObject) const;
    bool __nonzero__(QOpenGLFramebufferObject* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QOpenGLFramebufferObjectFormat : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat();
QOpenGLFramebufferObjectFormat* new_QOpenGLFramebufferObjectFormat(const QOpenGLFramebufferObjectFormat&  other);
void delete_QOpenGLFramebufferObjectFormat(QOpenGLFramebufferObjectFormat* obj) { delete obj; } 
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   GLenum  internalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  mipmap(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   bool  __ne__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   QOpenGLFramebufferObjectFormat*  operator_assign(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other);
   bool  __eq__(QOpenGLFramebufferObjectFormat* theWrappedObject, const QOpenGLFramebufferObjectFormat&  other) const;
   int  samples(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
   void setAttachment(QOpenGLFramebufferObjectFormat* theWrappedObject, QOpenGLFramebufferObject::Attachment  attachment);
   void setInternalTextureFormat(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  internalTextureFormat);
   void setMipmap(QOpenGLFramebufferObjectFormat* theWrappedObject, bool  enabled);
   void setSamples(QOpenGLFramebufferObjectFormat* theWrappedObject, int  samples);
   void setTextureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject, GLenum  target);
   GLenum  textureTarget(QOpenGLFramebufferObjectFormat* theWrappedObject) const;
};





class PythonQtShell_QOpenGLPaintDevice : public QOpenGLPaintDevice
{
public:
    PythonQtShell_QOpenGLPaintDevice():QOpenGLPaintDevice(),_wrapper(NULL) {};
    PythonQtShell_QOpenGLPaintDevice(const QSize&  size):QOpenGLPaintDevice(size),_wrapper(NULL) {};
    PythonQtShell_QOpenGLPaintDevice(int  width, int  height):QOpenGLPaintDevice(width, height),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLPaintDevice();

virtual int  devType() const;
virtual void ensureActiveTarget();
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLPaintDevice : public QOpenGLPaintDevice
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline int  py_q_devType() const { return QOpenGLPaintDevice::devType(); }
inline void py_q_ensureActiveTarget() { QOpenGLPaintDevice::ensureActiveTarget(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLPaintDevice::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLPaintDevice::paintEngine(); }
};

class PythonQtWrapper_QOpenGLPaintDevice : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLPaintDevice* new_QOpenGLPaintDevice();
QOpenGLPaintDevice* new_QOpenGLPaintDevice(const QSize&  size);
QOpenGLPaintDevice* new_QOpenGLPaintDevice(int  width, int  height);
void delete_QOpenGLPaintDevice(QOpenGLPaintDevice* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLPaintDevice* theWrappedObject) const;
   int  py_q_devType(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_devType());}
   qreal  dotsPerMeterX(QOpenGLPaintDevice* theWrappedObject) const;
   qreal  dotsPerMeterY(QOpenGLPaintDevice* theWrappedObject) const;
   void ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject);
   void py_q_ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_ensureActiveTarget());}
   int  py_q_metric(QOpenGLPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLPaintDevice* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLPaintDevice*)theWrappedObject)->py_q_paintEngine());}
   bool  paintFlipped(QOpenGLPaintDevice* theWrappedObject) const;
   void setDevicePixelRatio(QOpenGLPaintDevice* theWrappedObject, qreal  devicePixelRatio);
   void setDotsPerMeterX(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setDotsPerMeterY(QOpenGLPaintDevice* theWrappedObject, qreal  arg__1);
   void setPaintFlipped(QOpenGLPaintDevice* theWrappedObject, bool  flipped);
   void setSize(QOpenGLPaintDevice* theWrappedObject, const QSize&  size);
   QSize  size(QOpenGLPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShader : public QOpenGLShader
{
public:
    PythonQtShell_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = nullptr):QOpenGLShader(type, parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLShader();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLShader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShaderTypeBit )
Q_FLAGS(ShaderType )
enum ShaderTypeBit{
  Vertex = QOpenGLShader::Vertex,   Fragment = QOpenGLShader::Fragment,   Geometry = QOpenGLShader::Geometry,   TessellationControl = QOpenGLShader::TessellationControl,   TessellationEvaluation = QOpenGLShader::TessellationEvaluation,   Compute = QOpenGLShader::Compute};
Q_DECLARE_FLAGS(ShaderType, ShaderTypeBit)
public slots:
QOpenGLShader* new_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = nullptr);
void delete_QOpenGLShader(QOpenGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QByteArray&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const char*  source);
   bool  compileSourceFile(QOpenGLShader* theWrappedObject, const QString&  fileName);
   bool  static_QOpenGLShader_hasOpenGLShaders(QOpenGLShader::ShaderType  type, QOpenGLContext*  context = nullptr);
   bool  isCompiled(QOpenGLShader* theWrappedObject) const;
   QString  log(QOpenGLShader* theWrappedObject) const;
   GLuint  shaderId(QOpenGLShader* theWrappedObject) const;
   QOpenGLShader::ShaderType  shaderType(QOpenGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QOpenGLShader* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShaderProgram : public QOpenGLShaderProgram
{
public:
    PythonQtShell_QOpenGLShaderProgram(QObject*  parent = nullptr):QOpenGLShaderProgram(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLShaderProgram();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  link();
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLShaderProgram : public QOpenGLShaderProgram
{ public:
inline bool  py_q_link() { return QOpenGLShaderProgram::link(); }
};

class PythonQtWrapper_QOpenGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLShaderProgram* new_QOpenGLShaderProgram(QObject*  parent = nullptr);
void delete_QOpenGLShaderProgram(QOpenGLShaderProgram* obj) { delete obj; } 
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addCacheableShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addCacheableShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   bool  addShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QByteArray&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  source);
   bool  addShaderFromSourceCode(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const char*  source);
   bool  addShaderFromSourceFile(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader::ShaderType  type, const QString&  fileName);
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  attributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
   bool  bind(QOpenGLShaderProgram* theWrappedObject);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name, int  location);
   void bindAttributeLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name, int  location);
   bool  create(QOpenGLShaderProgram* theWrappedObject);
   QVector<float >  defaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   QVector<float >  defaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject) const;
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void disableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name);
   void enableAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location);
   bool  static_QOpenGLShaderProgram_hasOpenGLShaderPrograms(QOpenGLContext*  context = nullptr);
   bool  isLinked(QOpenGLShaderProgram* theWrappedObject) const;
   bool  link(QOpenGLShaderProgram* theWrappedObject);
   bool  py_q_link(QOpenGLShaderProgram* theWrappedObject){  return (((PythonQtPublicPromoter_QOpenGLShaderProgram*)theWrappedObject)->py_q_link());}
   QString  log(QOpenGLShaderProgram* theWrappedObject) const;
   int  maxGeometryOutputVertices(QOpenGLShaderProgram* theWrappedObject) const;
   int  patchVertexCount(QOpenGLShaderProgram* theWrappedObject) const;
   GLuint  programId(QOpenGLShaderProgram* theWrappedObject) const;
   void release(QOpenGLShaderProgram* theWrappedObject);
   void removeAllShaders(QOpenGLShaderProgram* theWrappedObject);
   void removeShader(QOpenGLShaderProgram* theWrappedObject, QOpenGLShader*  shader);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, const void*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  tupleSize, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  stride = 0);
   void setAttributeArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeBuffer(QOpenGLShaderProgram* theWrappedObject, int  location, GLenum  type, int  offset, int  tupleSize, int  stride = 0);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  columns, int  rows);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setAttributeValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setDefaultInnerTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QVector<float >&  levels);
   void setDefaultOuterTessellationLevels(QOpenGLShaderProgram* theWrappedObject, const QVector<float >&  levels);
   void setPatchVertexCount(QOpenGLShaderProgram* theWrappedObject, int  count);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, GLuint  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QColor&  color);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPoint&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QPointF&  point);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSize&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QSizeF&  size);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QTransform&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D&  value);
   void setUniformValue(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D&  value);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, const char*  name, const QVector4D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLfloat*  values, int  count, int  tupleSize);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const GLuint*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QMatrix4x4*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector2D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector3D*  values, int  count);
   void setUniformValueArray(QOpenGLShaderProgram* theWrappedObject, int  location, const QVector4D*  values, int  count);
   QList<QOpenGLShader* >  shaders(QOpenGLShaderProgram* theWrappedObject) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QByteArray&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const QString&  name) const;
   int  uniformLocation(QOpenGLShaderProgram* theWrappedObject, const char*  name) const;
};





class PythonQtWrapper_QOpenGLTexture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindingTarget ComparisonFunction ComparisonMode CoordinateDirection CubeMapFace DepthStencilMode Feature Filter MipMapGeneration PixelFormat PixelType SwizzleComponent SwizzleValue Target TextureFormat TextureFormatClass TextureUnitReset WrapMode )
Q_FLAGS(Features )
enum BindingTarget{
  BindingTarget1D = QOpenGLTexture::BindingTarget1D,   BindingTarget1DArray = QOpenGLTexture::BindingTarget1DArray,   BindingTarget2D = QOpenGLTexture::BindingTarget2D,   BindingTarget2DArray = QOpenGLTexture::BindingTarget2DArray,   BindingTarget3D = QOpenGLTexture::BindingTarget3D,   BindingTargetCubeMap = QOpenGLTexture::BindingTargetCubeMap,   BindingTargetCubeMapArray = QOpenGLTexture::BindingTargetCubeMapArray,   BindingTarget2DMultisample = QOpenGLTexture::BindingTarget2DMultisample,   BindingTarget2DMultisampleArray = QOpenGLTexture::BindingTarget2DMultisampleArray,   BindingTargetRectangle = QOpenGLTexture::BindingTargetRectangle,   BindingTargetBuffer = QOpenGLTexture::BindingTargetBuffer};
enum ComparisonFunction{
  CompareLessEqual = QOpenGLTexture::CompareLessEqual,   CompareGreaterEqual = QOpenGLTexture::CompareGreaterEqual,   CompareLess = QOpenGLTexture::CompareLess,   CompareGreater = QOpenGLTexture::CompareGreater,   CompareEqual = QOpenGLTexture::CompareEqual,   CommpareNotEqual = QOpenGLTexture::CommpareNotEqual,   CompareAlways = QOpenGLTexture::CompareAlways,   CompareNever = QOpenGLTexture::CompareNever};
enum ComparisonMode{
  CompareRefToTexture = QOpenGLTexture::CompareRefToTexture,   CompareNone = QOpenGLTexture::CompareNone};
enum CoordinateDirection{
  DirectionS = QOpenGLTexture::DirectionS,   DirectionT = QOpenGLTexture::DirectionT,   DirectionR = QOpenGLTexture::DirectionR};
enum CubeMapFace{
  CubeMapPositiveX = QOpenGLTexture::CubeMapPositiveX,   CubeMapNegativeX = QOpenGLTexture::CubeMapNegativeX,   CubeMapPositiveY = QOpenGLTexture::CubeMapPositiveY,   CubeMapNegativeY = QOpenGLTexture::CubeMapNegativeY,   CubeMapPositiveZ = QOpenGLTexture::CubeMapPositiveZ,   CubeMapNegativeZ = QOpenGLTexture::CubeMapNegativeZ};
enum DepthStencilMode{
  DepthMode = QOpenGLTexture::DepthMode,   StencilMode = QOpenGLTexture::StencilMode};
enum Feature{
  ImmutableStorage = QOpenGLTexture::ImmutableStorage,   ImmutableMultisampleStorage = QOpenGLTexture::ImmutableMultisampleStorage,   TextureRectangle = QOpenGLTexture::TextureRectangle,   TextureArrays = QOpenGLTexture::TextureArrays,   Texture3D = QOpenGLTexture::Texture3D,   TextureMultisample = QOpenGLTexture::TextureMultisample,   TextureBuffer = QOpenGLTexture::TextureBuffer,   TextureCubeMapArrays = QOpenGLTexture::TextureCubeMapArrays,   Swizzle = QOpenGLTexture::Swizzle,   StencilTexturing = QOpenGLTexture::StencilTexturing,   AnisotropicFiltering = QOpenGLTexture::AnisotropicFiltering,   NPOTTextures = QOpenGLTexture::NPOTTextures,   NPOTTextureRepeat = QOpenGLTexture::NPOTTextureRepeat,   Texture1D = QOpenGLTexture::Texture1D,   TextureComparisonOperators = QOpenGLTexture::TextureComparisonOperators,   TextureMipMapLevel = QOpenGLTexture::TextureMipMapLevel,   MaxFeatureFlag = QOpenGLTexture::MaxFeatureFlag};
enum Filter{
  Nearest = QOpenGLTexture::Nearest,   Linear = QOpenGLTexture::Linear,   NearestMipMapNearest = QOpenGLTexture::NearestMipMapNearest,   NearestMipMapLinear = QOpenGLTexture::NearestMipMapLinear,   LinearMipMapNearest = QOpenGLTexture::LinearMipMapNearest,   LinearMipMapLinear = QOpenGLTexture::LinearMipMapLinear};
enum MipMapGeneration{
  GenerateMipMaps = QOpenGLTexture::GenerateMipMaps,   DontGenerateMipMaps = QOpenGLTexture::DontGenerateMipMaps};
enum PixelFormat{
  NoSourceFormat = QOpenGLTexture::NoSourceFormat,   Red = QOpenGLTexture::Red,   RG = QOpenGLTexture::RG,   RGB = QOpenGLTexture::RGB,   BGR = QOpenGLTexture::BGR,   RGBA = QOpenGLTexture::RGBA,   BGRA = QOpenGLTexture::BGRA,   Red_Integer = QOpenGLTexture::Red_Integer,   RG_Integer = QOpenGLTexture::RG_Integer,   RGB_Integer = QOpenGLTexture::RGB_Integer,   BGR_Integer = QOpenGLTexture::BGR_Integer,   RGBA_Integer = QOpenGLTexture::RGBA_Integer,   BGRA_Integer = QOpenGLTexture::BGRA_Integer,   Stencil = QOpenGLTexture::Stencil,   Depth = QOpenGLTexture::Depth,   DepthStencil = QOpenGLTexture::DepthStencil,   Alpha = QOpenGLTexture::Alpha,   Luminance = QOpenGLTexture::Luminance,   LuminanceAlpha = QOpenGLTexture::LuminanceAlpha};
enum PixelType{
  NoPixelType = QOpenGLTexture::NoPixelType,   Int8 = QOpenGLTexture::Int8,   UInt8 = QOpenGLTexture::UInt8,   Int16 = QOpenGLTexture::Int16,   UInt16 = QOpenGLTexture::UInt16,   Int32 = QOpenGLTexture::Int32,   UInt32 = QOpenGLTexture::UInt32,   Float16 = QOpenGLTexture::Float16,   Float16OES = QOpenGLTexture::Float16OES,   Float32 = QOpenGLTexture::Float32,   UInt32_RGB9_E5 = QOpenGLTexture::UInt32_RGB9_E5,   UInt32_RG11B10F = QOpenGLTexture::UInt32_RG11B10F,   UInt8_RG3B2 = QOpenGLTexture::UInt8_RG3B2,   UInt8_RG3B2_Rev = QOpenGLTexture::UInt8_RG3B2_Rev,   UInt16_RGB5A1 = QOpenGLTexture::UInt16_RGB5A1,   UInt16_RGB5A1_Rev = QOpenGLTexture::UInt16_RGB5A1_Rev,   UInt16_R5G6B5 = QOpenGLTexture::UInt16_R5G6B5,   UInt16_R5G6B5_Rev = QOpenGLTexture::UInt16_R5G6B5_Rev,   UInt16_RGBA4 = QOpenGLTexture::UInt16_RGBA4,   UInt16_RGBA4_Rev = QOpenGLTexture::UInt16_RGBA4_Rev,   UInt32_RGBA8 = QOpenGLTexture::UInt32_RGBA8,   UInt32_RGBA8_Rev = QOpenGLTexture::UInt32_RGBA8_Rev,   UInt32_RGB10A2 = QOpenGLTexture::UInt32_RGB10A2,   UInt32_RGB10A2_Rev = QOpenGLTexture::UInt32_RGB10A2_Rev,   UInt32_D24S8 = QOpenGLTexture::UInt32_D24S8,   Float32_D32_UInt32_S8_X24 = QOpenGLTexture::Float32_D32_UInt32_S8_X24};
enum SwizzleComponent{
  SwizzleRed = QOpenGLTexture::SwizzleRed,   SwizzleGreen = QOpenGLTexture::SwizzleGreen,   SwizzleBlue = QOpenGLTexture::SwizzleBlue,   SwizzleAlpha = QOpenGLTexture::SwizzleAlpha};
enum SwizzleValue{
  RedValue = QOpenGLTexture::RedValue,   GreenValue = QOpenGLTexture::GreenValue,   BlueValue = QOpenGLTexture::BlueValue,   AlphaValue = QOpenGLTexture::AlphaValue,   ZeroValue = QOpenGLTexture::ZeroValue,   OneValue = QOpenGLTexture::OneValue};
enum Target{
  Target1D = QOpenGLTexture::Target1D,   Target1DArray = QOpenGLTexture::Target1DArray,   Target2D = QOpenGLTexture::Target2D,   Target2DArray = QOpenGLTexture::Target2DArray,   Target3D = QOpenGLTexture::Target3D,   TargetCubeMap = QOpenGLTexture::TargetCubeMap,   TargetCubeMapArray = QOpenGLTexture::TargetCubeMapArray,   Target2DMultisample = QOpenGLTexture::Target2DMultisample,   Target2DMultisampleArray = QOpenGLTexture::Target2DMultisampleArray,   TargetRectangle = QOpenGLTexture::TargetRectangle,   TargetBuffer = QOpenGLTexture::TargetBuffer};
enum TextureFormat{
  NoFormat = QOpenGLTexture::NoFormat,   R8_UNorm = QOpenGLTexture::R8_UNorm,   RG8_UNorm = QOpenGLTexture::RG8_UNorm,   RGB8_UNorm = QOpenGLTexture::RGB8_UNorm,   RGBA8_UNorm = QOpenGLTexture::RGBA8_UNorm,   R16_UNorm = QOpenGLTexture::R16_UNorm,   RG16_UNorm = QOpenGLTexture::RG16_UNorm,   RGB16_UNorm = QOpenGLTexture::RGB16_UNorm,   RGBA16_UNorm = QOpenGLTexture::RGBA16_UNorm,   R8_SNorm = QOpenGLTexture::R8_SNorm,   RG8_SNorm = QOpenGLTexture::RG8_SNorm,   RGB8_SNorm = QOpenGLTexture::RGB8_SNorm,   RGBA8_SNorm = QOpenGLTexture::RGBA8_SNorm,   R16_SNorm = QOpenGLTexture::R16_SNorm,   RG16_SNorm = QOpenGLTexture::RG16_SNorm,   RGB16_SNorm = QOpenGLTexture::RGB16_SNorm,   RGBA16_SNorm = QOpenGLTexture::RGBA16_SNorm,   R8U = QOpenGLTexture::R8U,   RG8U = QOpenGLTexture::RG8U,   RGB8U = QOpenGLTexture::RGB8U,   RGBA8U = QOpenGLTexture::RGBA8U,   R16U = QOpenGLTexture::R16U,   RG16U = QOpenGLTexture::RG16U,   RGB16U = QOpenGLTexture::RGB16U,   RGBA16U = QOpenGLTexture::RGBA16U,   R32U = QOpenGLTexture::R32U,   RG32U = QOpenGLTexture::RG32U,   RGB32U = QOpenGLTexture::RGB32U,   RGBA32U = QOpenGLTexture::RGBA32U,   R8I = QOpenGLTexture::R8I,   RG8I = QOpenGLTexture::RG8I,   RGB8I = QOpenGLTexture::RGB8I,   RGBA8I = QOpenGLTexture::RGBA8I,   R16I = QOpenGLTexture::R16I,   RG16I = QOpenGLTexture::RG16I,   RGB16I = QOpenGLTexture::RGB16I,   RGBA16I = QOpenGLTexture::RGBA16I,   R32I = QOpenGLTexture::R32I,   RG32I = QOpenGLTexture::RG32I,   RGB32I = QOpenGLTexture::RGB32I,   RGBA32I = QOpenGLTexture::RGBA32I,   R16F = QOpenGLTexture::R16F,   RG16F = QOpenGLTexture::RG16F,   RGB16F = QOpenGLTexture::RGB16F,   RGBA16F = QOpenGLTexture::RGBA16F,   R32F = QOpenGLTexture::R32F,   RG32F = QOpenGLTexture::RG32F,   RGB32F = QOpenGLTexture::RGB32F,   RGBA32F = QOpenGLTexture::RGBA32F,   RGB9E5 = QOpenGLTexture::RGB9E5,   RG11B10F = QOpenGLTexture::RG11B10F,   RG3B2 = QOpenGLTexture::RG3B2,   R5G6B5 = QOpenGLTexture::R5G6B5,   RGB5A1 = QOpenGLTexture::RGB5A1,   RGBA4 = QOpenGLTexture::RGBA4,   RGB10A2 = QOpenGLTexture::RGB10A2,   D16 = QOpenGLTexture::D16,   D24 = QOpenGLTexture::D24,   D24S8 = QOpenGLTexture::D24S8,   D32 = QOpenGLTexture::D32,   D32F = QOpenGLTexture::D32F,   D32FS8X24 = QOpenGLTexture::D32FS8X24,   S8 = QOpenGLTexture::S8,   RGB_DXT1 = QOpenGLTexture::RGB_DXT1,   RGBA_DXT1 = QOpenGLTexture::RGBA_DXT1,   RGBA_DXT3 = QOpenGLTexture::RGBA_DXT3,   RGBA_DXT5 = QOpenGLTexture::RGBA_DXT5,   R_ATI1N_UNorm = QOpenGLTexture::R_ATI1N_UNorm,   R_ATI1N_SNorm = QOpenGLTexture::R_ATI1N_SNorm,   RG_ATI2N_UNorm = QOpenGLTexture::RG_ATI2N_UNorm,   RG_ATI2N_SNorm = QOpenGLTexture::RG_ATI2N_SNorm,   RGB_BP_UNSIGNED_FLOAT = QOpenGLTexture::RGB_BP_UNSIGNED_FLOAT,   RGB_BP_SIGNED_FLOAT = QOpenGLTexture::RGB_BP_SIGNED_FLOAT,   RGB_BP_UNorm = QOpenGLTexture::RGB_BP_UNorm,   R11_EAC_UNorm = QOpenGLTexture::R11_EAC_UNorm,   R11_EAC_SNorm = QOpenGLTexture::R11_EAC_SNorm,   RG11_EAC_UNorm = QOpenGLTexture::RG11_EAC_UNorm,   RG11_EAC_SNorm = QOpenGLTexture::RG11_EAC_SNorm,   RGB8_ETC2 = QOpenGLTexture::RGB8_ETC2,   SRGB8_ETC2 = QOpenGLTexture::SRGB8_ETC2,   RGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::RGB8_PunchThrough_Alpha1_ETC2,   SRGB8_PunchThrough_Alpha1_ETC2 = QOpenGLTexture::SRGB8_PunchThrough_Alpha1_ETC2,   RGBA8_ETC2_EAC = QOpenGLTexture::RGBA8_ETC2_EAC,   SRGB8_Alpha8_ETC2_EAC = QOpenGLTexture::SRGB8_Alpha8_ETC2_EAC,   RGB8_ETC1 = QOpenGLTexture::RGB8_ETC1,   RGBA_ASTC_4x4 = QOpenGLTexture::RGBA_ASTC_4x4,   RGBA_ASTC_5x4 = QOpenGLTexture::RGBA_ASTC_5x4,   RGBA_ASTC_5x5 = QOpenGLTexture::RGBA_ASTC_5x5,   RGBA_ASTC_6x5 = QOpenGLTexture::RGBA_ASTC_6x5,   RGBA_ASTC_6x6 = QOpenGLTexture::RGBA_ASTC_6x6,   RGBA_ASTC_8x5 = QOpenGLTexture::RGBA_ASTC_8x5,   RGBA_ASTC_8x6 = QOpenGLTexture::RGBA_ASTC_8x6,   RGBA_ASTC_8x8 = QOpenGLTexture::RGBA_ASTC_8x8,   RGBA_ASTC_10x5 = QOpenGLTexture::RGBA_ASTC_10x5,   RGBA_ASTC_10x6 = QOpenGLTexture::RGBA_ASTC_10x6,   RGBA_ASTC_10x8 = QOpenGLTexture::RGBA_ASTC_10x8,   RGBA_ASTC_10x10 = QOpenGLTexture::RGBA_ASTC_10x10,   RGBA_ASTC_12x10 = QOpenGLTexture::RGBA_ASTC_12x10,   RGBA_ASTC_12x12 = QOpenGLTexture::RGBA_ASTC_12x12,   SRGB8_Alpha8_ASTC_4x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_4x4,   SRGB8_Alpha8_ASTC_5x4 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x4,   SRGB8_Alpha8_ASTC_5x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_5x5,   SRGB8_Alpha8_ASTC_6x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x5,   SRGB8_Alpha8_ASTC_6x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_6x6,   SRGB8_Alpha8_ASTC_8x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x5,   SRGB8_Alpha8_ASTC_8x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x6,   SRGB8_Alpha8_ASTC_8x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_8x8,   SRGB8_Alpha8_ASTC_10x5 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x5,   SRGB8_Alpha8_ASTC_10x6 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x6,   SRGB8_Alpha8_ASTC_10x8 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x8,   SRGB8_Alpha8_ASTC_10x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_10x10,   SRGB8_Alpha8_ASTC_12x10 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x10,   SRGB8_Alpha8_ASTC_12x12 = QOpenGLTexture::SRGB8_Alpha8_ASTC_12x12,   SRGB8 = QOpenGLTexture::SRGB8,   SRGB8_Alpha8 = QOpenGLTexture::SRGB8_Alpha8,   SRGB_DXT1 = QOpenGLTexture::SRGB_DXT1,   SRGB_Alpha_DXT1 = QOpenGLTexture::SRGB_Alpha_DXT1,   SRGB_Alpha_DXT3 = QOpenGLTexture::SRGB_Alpha_DXT3,   SRGB_Alpha_DXT5 = QOpenGLTexture::SRGB_Alpha_DXT5,   SRGB_BP_UNorm = QOpenGLTexture::SRGB_BP_UNorm,   DepthFormat = QOpenGLTexture::DepthFormat,   AlphaFormat = QOpenGLTexture::AlphaFormat,   RGBFormat = QOpenGLTexture::RGBFormat,   RGBAFormat = QOpenGLTexture::RGBAFormat,   LuminanceFormat = QOpenGLTexture::LuminanceFormat,   LuminanceAlphaFormat = QOpenGLTexture::LuminanceAlphaFormat};
enum TextureFormatClass{
  NoFormatClass = QOpenGLTexture::NoFormatClass,   FormatClass_128Bit = QOpenGLTexture::FormatClass_128Bit,   FormatClass_96Bit = QOpenGLTexture::FormatClass_96Bit,   FormatClass_64Bit = QOpenGLTexture::FormatClass_64Bit,   FormatClass_48Bit = QOpenGLTexture::FormatClass_48Bit,   FormatClass_32Bit = QOpenGLTexture::FormatClass_32Bit,   FormatClass_24Bit = QOpenGLTexture::FormatClass_24Bit,   FormatClass_16Bit = QOpenGLTexture::FormatClass_16Bit,   FormatClass_8Bit = QOpenGLTexture::FormatClass_8Bit,   FormatClass_RGTC1_R = QOpenGLTexture::FormatClass_RGTC1_R,   FormatClass_RGTC2_RG = QOpenGLTexture::FormatClass_RGTC2_RG,   FormatClass_BPTC_Unorm = QOpenGLTexture::FormatClass_BPTC_Unorm,   FormatClass_BPTC_Float = QOpenGLTexture::FormatClass_BPTC_Float,   FormatClass_S3TC_DXT1_RGB = QOpenGLTexture::FormatClass_S3TC_DXT1_RGB,   FormatClass_S3TC_DXT1_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT1_RGBA,   FormatClass_S3TC_DXT3_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT3_RGBA,   FormatClass_S3TC_DXT5_RGBA = QOpenGLTexture::FormatClass_S3TC_DXT5_RGBA,   FormatClass_Unique = QOpenGLTexture::FormatClass_Unique};
enum TextureUnitReset{
  ResetTextureUnit = QOpenGLTexture::ResetTextureUnit,   DontResetTextureUnit = QOpenGLTexture::DontResetTextureUnit};
enum WrapMode{
  Repeat = QOpenGLTexture::Repeat,   MirroredRepeat = QOpenGLTexture::MirroredRepeat,   ClampToEdge = QOpenGLTexture::ClampToEdge,   ClampToBorder = QOpenGLTexture::ClampToBorder};
Q_DECLARE_FLAGS(Features, Feature)
public slots:
QOpenGLTexture* new_QOpenGLTexture(QOpenGLTexture::Target  target);
QOpenGLTexture* new_QOpenGLTexture(const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
void delete_QOpenGLTexture(QOpenGLTexture* obj) { delete obj; } 
   void allocateStorage(QOpenGLTexture* theWrappedObject);
   void allocateStorage(QOpenGLTexture* theWrappedObject, QOpenGLTexture::PixelFormat  pixelFormat, QOpenGLTexture::PixelType  pixelType);
   void bind(QOpenGLTexture* theWrappedObject);
   void bind(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   QColor  borderColor(QOpenGLTexture* theWrappedObject) const;
   void borderColor(QOpenGLTexture* theWrappedObject, float*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, int*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, unsigned int*  border) const;
   GLuint  static_QOpenGLTexture_boundTextureId(QOpenGLTexture::BindingTarget  target);
   GLuint  static_QOpenGLTexture_boundTextureId(uint  unit, QOpenGLTexture::BindingTarget  target);
   QOpenGLTexture::ComparisonFunction  comparisonFunction(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::ComparisonMode  comparisonMode(QOpenGLTexture* theWrappedObject) const;
   bool  create(QOpenGLTexture* theWrappedObject);
   QOpenGLTexture*  createTextureView(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Target  target, QOpenGLTexture::TextureFormat  viewFormat, int  minimumMipmapLevel, int  maximumMipmapLevel, int  minimumLayer, int  maximumLayer) const;
   int  depth(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::DepthStencilMode  depthStencilMode(QOpenGLTexture* theWrappedObject) const;
   void destroy(QOpenGLTexture* theWrappedObject);
   int  faces(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::TextureFormat  format(QOpenGLTexture* theWrappedObject) const;
   void generateMipMaps(QOpenGLTexture* theWrappedObject);
   void generateMipMaps(QOpenGLTexture* theWrappedObject, int  baseLevel, bool  resetBaseLevel = true);
   bool  static_QOpenGLTexture_hasFeature(QOpenGLTexture::Feature  feature);
   int  height(QOpenGLTexture* theWrappedObject) const;
   bool  isAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject) const;
   bool  isBound(QOpenGLTexture* theWrappedObject, uint  unit);
   bool  isCreated(QOpenGLTexture* theWrappedObject) const;
   bool  isFixedSamplePositions(QOpenGLTexture* theWrappedObject) const;
   bool  isStorageAllocated(QOpenGLTexture* theWrappedObject) const;
   bool  isTextureView(QOpenGLTexture* theWrappedObject) const;
   int  layers(QOpenGLTexture* theWrappedObject) const;
   QPair<float , float >  levelOfDetailRange(QOpenGLTexture* theWrappedObject) const;
   float  levelofDetailBias(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  magnificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  maximumAnisotropy(QOpenGLTexture* theWrappedObject) const;
   float  maximumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  maximumMipLevels(QOpenGLTexture* theWrappedObject) const;
   QPair<QOpenGLTexture::Filter , QOpenGLTexture::Filter >  minMagFilters(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::Filter  minificationFilter(QOpenGLTexture* theWrappedObject) const;
   float  minimumLevelOfDetail(QOpenGLTexture* theWrappedObject) const;
   int  mipBaseLevel(QOpenGLTexture* theWrappedObject) const;
   QPair<int , int >  mipLevelRange(QOpenGLTexture* theWrappedObject) const;
   int  mipLevels(QOpenGLTexture* theWrappedObject) const;
   int  mipMaxLevel(QOpenGLTexture* theWrappedObject) const;
   void release(QOpenGLTexture* theWrappedObject);
   void release(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   int  samples(QOpenGLTexture* theWrappedObject) const;
   void setAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject, bool  enabled);
   void setBorderColor(QOpenGLTexture* theWrappedObject, QColor  color);
   void setBorderColor(QOpenGLTexture* theWrappedObject, float  r, float  g, float  b, float  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, int  r, int  g, int  b, int  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, uint  r, uint  g, uint  b, uint  a);
   void setComparisonFunction(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonFunction  function);
   void setComparisonMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::ComparisonMode  mode);
   void setData(QOpenGLTexture* theWrappedObject, const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
   void setDepthStencilMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::DepthStencilMode  mode);
   void setFixedSamplePositions(QOpenGLTexture* theWrappedObject, bool  fixed);
   void setFormat(QOpenGLTexture* theWrappedObject, QOpenGLTexture::TextureFormat  format);
   void setLayers(QOpenGLTexture* theWrappedObject, int  layers);
   void setLevelOfDetailRange(QOpenGLTexture* theWrappedObject, float  min, float  max);
   void setLevelofDetailBias(QOpenGLTexture* theWrappedObject, float  bias);
   void setMagnificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMaximumAnisotropy(QOpenGLTexture* theWrappedObject, float  anisotropy);
   void setMaximumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMinMagFilters(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  minificationFilter, QOpenGLTexture::Filter  magnificationFilter);
   void setMinificationFilter(QOpenGLTexture* theWrappedObject, QOpenGLTexture::Filter  filter);
   void setMinimumLevelOfDetail(QOpenGLTexture* theWrappedObject, float  value);
   void setMipBaseLevel(QOpenGLTexture* theWrappedObject, int  baseLevel);
   void setMipLevelRange(QOpenGLTexture* theWrappedObject, int  baseLevel, int  maxLevel);
   void setMipLevels(QOpenGLTexture* theWrappedObject, int  levels);
   void setMipMaxLevel(QOpenGLTexture* theWrappedObject, int  maxLevel);
   void setSamples(QOpenGLTexture* theWrappedObject, int  samples);
   void setSize(QOpenGLTexture* theWrappedObject, int  width, int  height = 1, int  depth = 1);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component, QOpenGLTexture::SwizzleValue  value);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleValue  r, QOpenGLTexture::SwizzleValue  g, QOpenGLTexture::SwizzleValue  b, QOpenGLTexture::SwizzleValue  a);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction, QOpenGLTexture::WrapMode  mode);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::WrapMode  mode);
   QOpenGLTexture::SwizzleValue  swizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component) const;
   QOpenGLTexture::Target  target(QOpenGLTexture* theWrappedObject) const;
   GLuint  textureId(QOpenGLTexture* theWrappedObject) const;
   int  width(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::WrapMode  wrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction) const;
    QString py_toString(QOpenGLTexture*);
};





class PythonQtWrapper_QOpenGLTextureBlitter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Origin )
enum Origin{
  OriginBottomLeft = QOpenGLTextureBlitter::OriginBottomLeft,   OriginTopLeft = QOpenGLTextureBlitter::OriginTopLeft};
public slots:
QOpenGLTextureBlitter* new_QOpenGLTextureBlitter();
void delete_QOpenGLTextureBlitter(QOpenGLTextureBlitter* obj) { delete obj; } 
   void bind(QOpenGLTextureBlitter* theWrappedObject, GLenum  target = GL_TEXTURE_2D);
   void blit(QOpenGLTextureBlitter* theWrappedObject, GLuint  texture, const QMatrix4x4&  targetTransform, QOpenGLTextureBlitter::Origin  sourceOrigin);
   bool  create(QOpenGLTextureBlitter* theWrappedObject);
   void destroy(QOpenGLTextureBlitter* theWrappedObject);
   bool  isCreated(QOpenGLTextureBlitter* theWrappedObject) const;
   void release(QOpenGLTextureBlitter* theWrappedObject);
   void setOpacity(QOpenGLTextureBlitter* theWrappedObject, float  opacity);
   void setRedBlueSwizzle(QOpenGLTextureBlitter* theWrappedObject, bool  swizzle);
   bool  supportsExternalOESTarget(QOpenGLTextureBlitter* theWrappedObject) const;
   QMatrix4x4  static_QOpenGLTextureBlitter_targetTransform(const QRectF&  target, const QRect&  viewport);
};





class PythonQtShell_QOpenGLTimeMonitor : public QOpenGLTimeMonitor
{
public:
    PythonQtShell_QOpenGLTimeMonitor(QObject*  parent = nullptr):QOpenGLTimeMonitor(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLTimeMonitor();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLTimeMonitor : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLTimeMonitor* new_QOpenGLTimeMonitor(QObject*  parent = nullptr);
void delete_QOpenGLTimeMonitor(QOpenGLTimeMonitor* obj) { delete obj; } 
   bool  create(QOpenGLTimeMonitor* theWrappedObject);
   void destroy(QOpenGLTimeMonitor* theWrappedObject);
   bool  isCreated(QOpenGLTimeMonitor* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimeMonitor* theWrappedObject) const;
   QVector<GLuint >  objectIds(QOpenGLTimeMonitor* theWrappedObject) const;
   int  recordSample(QOpenGLTimeMonitor* theWrappedObject);
   void reset(QOpenGLTimeMonitor* theWrappedObject);
   int  sampleCount(QOpenGLTimeMonitor* theWrappedObject) const;
   void setSampleCount(QOpenGLTimeMonitor* theWrappedObject, int  sampleCount);
   QVector<GLuint64 >  waitForIntervals(QOpenGLTimeMonitor* theWrappedObject) const;
   QVector<GLuint64 >  waitForSamples(QOpenGLTimeMonitor* theWrappedObject) const;
};





class PythonQtShell_QOpenGLTimerQuery : public QOpenGLTimerQuery
{
public:
    PythonQtShell_QOpenGLTimerQuery(QObject*  parent = nullptr):QOpenGLTimerQuery(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLTimerQuery();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLTimerQuery : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLTimerQuery* new_QOpenGLTimerQuery(QObject*  parent = nullptr);
void delete_QOpenGLTimerQuery(QOpenGLTimerQuery* obj) { delete obj; } 
   void begin(QOpenGLTimerQuery* theWrappedObject);
   bool  create(QOpenGLTimerQuery* theWrappedObject);
   void destroy(QOpenGLTimerQuery* theWrappedObject);
   void end(QOpenGLTimerQuery* theWrappedObject);
   bool  isCreated(QOpenGLTimerQuery* theWrappedObject) const;
   bool  isResultAvailable(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint  objectId(QOpenGLTimerQuery* theWrappedObject) const;
   void recordTimestamp(QOpenGLTimerQuery* theWrappedObject);
   GLuint64  waitForResult(QOpenGLTimerQuery* theWrappedObject) const;
   GLuint64  waitForTimestamp(QOpenGLTimerQuery* theWrappedObject) const;
};





class PythonQtWrapper_QOpenGLVersionProfile : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLVersionProfile* new_QOpenGLVersionProfile();
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QOpenGLVersionProfile&  other);
QOpenGLVersionProfile* new_QOpenGLVersionProfile(const QSurfaceFormat&  format);
void delete_QOpenGLVersionProfile(QOpenGLVersionProfile* obj) { delete obj; } 
   bool  hasProfiles(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isLegacyVersion(QOpenGLVersionProfile* theWrappedObject) const;
   bool  isValid(QOpenGLVersionProfile* theWrappedObject) const;
   QOpenGLVersionProfile*  operator_assign(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   bool  __eq__(QOpenGLVersionProfile* theWrappedObject, const QOpenGLVersionProfile&  rhs);
   QSurfaceFormat::OpenGLContextProfile  profile(QOpenGLVersionProfile* theWrappedObject) const;
   void setProfile(QOpenGLVersionProfile* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setVersion(QOpenGLVersionProfile* theWrappedObject, int  majorVersion, int  minorVersion);
   QPair<int , int >  version(QOpenGLVersionProfile* theWrappedObject) const;
    QString py_toString(QOpenGLVersionProfile*);
    bool __nonzero__(QOpenGLVersionProfile* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLVertexArrayObject : public QOpenGLVertexArrayObject
{
public:
    PythonQtShell_QOpenGLVertexArrayObject(QObject*  parent = nullptr):QOpenGLVertexArrayObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLVertexArrayObject();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLVertexArrayObject : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLVertexArrayObject* new_QOpenGLVertexArrayObject(QObject*  parent = nullptr);
void delete_QOpenGLVertexArrayObject(QOpenGLVertexArrayObject* obj) { delete obj; } 
   void bind(QOpenGLVertexArrayObject* theWrappedObject);
   bool  create(QOpenGLVertexArrayObject* theWrappedObject);
   void destroy(QOpenGLVertexArrayObject* theWrappedObject);
   bool  isCreated(QOpenGLVertexArrayObject* theWrappedObject) const;
   GLuint  objectId(QOpenGLVertexArrayObject* theWrappedObject) const;
   void release(QOpenGLVertexArrayObject* theWrappedObject);
};





class PythonQtShell_QOpenGLWidget : public QOpenGLWidget
{
public:
    PythonQtShell_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags()):QOpenGLWidget(parent, f),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEvent*  event);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void initializeGL();
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual void paintGL();
virtual QPaintDevice*  redirected(QPoint*  p) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void resizeGL(int  w, int  h);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLWidget : public QOpenGLWidget
{ public:
inline bool  promoted_event(QEvent*  e) { return this->event(e); }
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline void promoted_paintEvent(QPaintEvent*  e) { this->paintEvent(e); }
inline void promoted_paintGL() { this->paintGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  p) const { return this->redirected(p); }
inline void promoted_resizeEvent(QResizeEvent*  e) { this->resizeEvent(e); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline bool  py_q_event(QEvent*  e) { return QOpenGLWidget::event(e); }
inline void py_q_initializeGL() { QOpenGLWidget::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWidget::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QOpenGLWidget::paintEngine(); }
inline void py_q_paintEvent(QPaintEvent*  e) { QOpenGLWidget::paintEvent(e); }
inline void py_q_paintGL() { QOpenGLWidget::paintGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  p) const { return QOpenGLWidget::redirected(p); }
inline void py_q_resizeEvent(QResizeEvent*  e) { QOpenGLWidget::resizeEvent(e); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWidget::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWidget::NoPartialUpdate,   PartialUpdate = QOpenGLWidget::PartialUpdate};
public slots:
QOpenGLWidget* new_QOpenGLWidget(QWidget*  parent = nullptr, Qt::WindowFlags  f = Qt::WindowFlags());
void delete_QOpenGLWidget(QOpenGLWidget* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLWidget* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWidget* theWrappedObject) const;
   void doneCurrent(QOpenGLWidget* theWrappedObject);
   bool  py_q_event(QOpenGLWidget* theWrappedObject, QEvent*  e){  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_event(e));}
   QSurfaceFormat  format(QOpenGLWidget* theWrappedObject) const;
   QImage  grabFramebuffer(QOpenGLWidget* theWrappedObject);
   void initializeGL(QOpenGLWidget* theWrappedObject);
   void py_q_initializeGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWidget* theWrappedObject) const;
   void makeCurrent(QOpenGLWidget* theWrappedObject);
   int  py_q_metric(QOpenGLWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_metric(metric));}
   QPaintEngine*  py_q_paintEngine(QOpenGLWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEngine());}
   void py_q_paintEvent(QOpenGLWidget* theWrappedObject, QPaintEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintEvent(e));}
   void paintGL(QOpenGLWidget* theWrappedObject);
   void py_q_paintGL(QOpenGLWidget* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_paintGL());}
   QPaintDevice*  py_q_redirected(QOpenGLWidget* theWrappedObject, QPoint*  p) const{  return (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_redirected(p));}
   void py_q_resizeEvent(QOpenGLWidget* theWrappedObject, QResizeEvent*  e){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeEvent(e));}
   void resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWidget* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWidget*)theWrappedObject)->py_q_resizeGL(w, h));}
   void setFormat(QOpenGLWidget* theWrappedObject, const QSurfaceFormat&  format);
   void setTextureFormat(QOpenGLWidget* theWrappedObject, GLenum  texFormat);
   void setUpdateBehavior(QOpenGLWidget* theWrappedObject, QOpenGLWidget::UpdateBehavior  updateBehavior);
   GLenum  textureFormat(QOpenGLWidget* theWrappedObject) const;
   QOpenGLWidget::UpdateBehavior  updateBehavior(QOpenGLWidget* theWrappedObject) const;
    bool __nonzero__(QOpenGLWidget* obj) { return obj->isValid(); }
};





class PythonQtShell_QOpenGLWindow : public QOpenGLWindow
{
public:
    PythonQtShell_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(shareContext, updateBehavior, parent),_wrapper(NULL) {};
    PythonQtShell_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr):QOpenGLWindow(updateBehavior, parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLWindow();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void exposeEvent(QExposeEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QObject*  focusObject() const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual QSurfaceFormat  format() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializeGL();
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void paintEvent(QPaintEvent*  event);
virtual void paintGL();
virtual void paintOverGL();
virtual void paintUnderGL();
virtual QPaintDevice*  redirected(QPoint*  arg__1) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void resizeGL(int  w, int  h);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void touchEvent(QTouchEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLWindow : public QOpenGLWindow
{ public:
inline void promoted_initializeGL() { this->initializeGL(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_paintGL() { this->paintGL(); }
inline void promoted_paintOverGL() { this->paintOverGL(); }
inline void promoted_paintUnderGL() { this->paintUnderGL(); }
inline QPaintDevice*  promoted_redirected(QPoint*  arg__1) const { return this->redirected(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_resizeGL(int  w, int  h) { this->resizeGL(w, h); }
inline void py_q_initializeGL() { QOpenGLWindow::initializeGL(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLWindow::metric(metric); }
inline void py_q_paintEvent(QPaintEvent*  event) { QOpenGLWindow::paintEvent(event); }
inline void py_q_paintGL() { QOpenGLWindow::paintGL(); }
inline void py_q_paintOverGL() { QOpenGLWindow::paintOverGL(); }
inline void py_q_paintUnderGL() { QOpenGLWindow::paintUnderGL(); }
inline QPaintDevice*  py_q_redirected(QPoint*  arg__1) const { return QOpenGLWindow::redirected(arg__1); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QOpenGLWindow::resizeEvent(event); }
inline void py_q_resizeGL(int  w, int  h) { QOpenGLWindow::resizeGL(w, h); }
};

class PythonQtWrapper_QOpenGLWindow : public QObject
{ Q_OBJECT
public:
Q_ENUMS(UpdateBehavior )
enum UpdateBehavior{
  NoPartialUpdate = QOpenGLWindow::NoPartialUpdate,   PartialUpdateBlit = QOpenGLWindow::PartialUpdateBlit,   PartialUpdateBlend = QOpenGLWindow::PartialUpdateBlend};
public slots:
QOpenGLWindow* new_QOpenGLWindow(QOpenGLContext*  shareContext, QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
QOpenGLWindow* new_QOpenGLWindow(QOpenGLWindow::UpdateBehavior  updateBehavior = QOpenGLWindow::NoPartialUpdate, QWindow*  parent = nullptr);
void delete_QOpenGLWindow(QOpenGLWindow* obj) { delete obj; } 
   QOpenGLContext*  context(QOpenGLWindow* theWrappedObject) const;
   GLuint  defaultFramebufferObject(QOpenGLWindow* theWrappedObject) const;
   void doneCurrent(QOpenGLWindow* theWrappedObject);
   QImage  grabFramebuffer(QOpenGLWindow* theWrappedObject);
   void initializeGL(QOpenGLWindow* theWrappedObject);
   void py_q_initializeGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_initializeGL());}
   bool  isValid(QOpenGLWindow* theWrappedObject) const;
   void makeCurrent(QOpenGLWindow* theWrappedObject);
   int  py_q_metric(QOpenGLWindow* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_metric(metric));}
   void py_q_paintEvent(QOpenGLWindow* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintEvent(event));}
   void paintGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintGL());}
   void paintOverGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintOverGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintOverGL());}
   void paintUnderGL(QOpenGLWindow* theWrappedObject);
   void py_q_paintUnderGL(QOpenGLWindow* theWrappedObject){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_paintUnderGL());}
   QPaintDevice*  redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const;
   QPaintDevice*  py_q_redirected(QOpenGLWindow* theWrappedObject, QPoint*  arg__1) const{  return (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_redirected(arg__1));}
   void py_q_resizeEvent(QOpenGLWindow* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeEvent(event));}
   void resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h);
   void py_q_resizeGL(QOpenGLWindow* theWrappedObject, int  w, int  h){  (((PythonQtPublicPromoter_QOpenGLWindow*)theWrappedObject)->py_q_resizeGL(w, h));}
   QOpenGLContext*  shareContext(QOpenGLWindow* theWrappedObject) const;
   QOpenGLWindow::UpdateBehavior  updateBehavior(QOpenGLWindow* theWrappedObject) const;
    bool __nonzero__(QOpenGLWindow* obj) { return obj->isValid(); }
};


