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
#include <qdialog.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
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
#include <qopenglfunctions.h>
#include <qopenglpaintdevice.h>
#include <qopenglshaderprogram.h>
#include <qopengltexture.h>
#include <qopengltimerquery.h>
#include <qopenglvertexarrayobject.h>
#include <qpagelayout.h>
#include <qpagesetupdialog.h>
#include <qpagesize.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qprinter.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>
#include <qwindow.h>



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
   QMatrix4x4  inverted(QMatrix4x4* theWrappedObject, bool*  invertible = 0) const;
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
    QString py_toString(QMatrix4x4*);
};





class PythonQtShell_QMdiArea : public QMdiArea
{
public:
    PythonQtShell_QMdiArea(QWidget*  parent = 0):QMdiArea(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMdiArea();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
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
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiArea : public QMdiArea
{ public:
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiArea::childEvent(childEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiArea::event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiArea::eventFilter(object, event); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiArea::paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiArea::resizeEvent(resizeEvent); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QMdiArea::scrollContentsBy(dx, dy); }
inline void promoted_setupViewport(QWidget*  viewport) { QMdiArea::setupViewport(viewport); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiArea::showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiArea::timerEvent(timerEvent); }
inline bool  promoted_viewportEvent(QEvent*  event) { return QMdiArea::viewportEvent(event); }
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
QMdiArea* new_QMdiArea(QWidget*  parent = 0);
void delete_QMdiArea(QMdiArea* obj) { delete obj; } 
   QMdiArea::WindowOrder  activationOrder(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  activeSubWindow(QMdiArea* theWrappedObject) const;
   QMdiSubWindow*  addSubWindow(QMdiArea* theWrappedObject, QWidget*  widget, Qt::WindowFlags  flags = 0);
   QBrush  background(QMdiArea* theWrappedObject) const;
   void childEvent(QMdiArea* theWrappedObject, QChildEvent*  childEvent);
   QMdiSubWindow*  currentSubWindow(QMdiArea* theWrappedObject) const;
   bool  documentMode(QMdiArea* theWrappedObject) const;
   bool  event(QMdiArea* theWrappedObject, QEvent*  event);
   bool  eventFilter(QMdiArea* theWrappedObject, QObject*  object, QEvent*  event);
   QSize  minimumSizeHint(QMdiArea* theWrappedObject) const;
   void paintEvent(QMdiArea* theWrappedObject, QPaintEvent*  paintEvent);
   void removeSubWindow(QMdiArea* theWrappedObject, QWidget*  widget);
   void resizeEvent(QMdiArea* theWrappedObject, QResizeEvent*  resizeEvent);
   void scrollContentsBy(QMdiArea* theWrappedObject, int  dx, int  dy);
   void setActivationOrder(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order);
   void setBackground(QMdiArea* theWrappedObject, const QBrush&  background);
   void setDocumentMode(QMdiArea* theWrappedObject, bool  enabled);
   void setOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  option, bool  on = true);
   void setTabPosition(QMdiArea* theWrappedObject, QTabWidget::TabPosition  position);
   void setTabShape(QMdiArea* theWrappedObject, QTabWidget::TabShape  shape);
   void setTabsClosable(QMdiArea* theWrappedObject, bool  closable);
   void setTabsMovable(QMdiArea* theWrappedObject, bool  movable);
   void setViewMode(QMdiArea* theWrappedObject, QMdiArea::ViewMode  mode);
   void setupViewport(QMdiArea* theWrappedObject, QWidget*  viewport);
   void showEvent(QMdiArea* theWrappedObject, QShowEvent*  showEvent);
   QSize  sizeHint(QMdiArea* theWrappedObject) const;
   QList<QMdiSubWindow* >  subWindowList(QMdiArea* theWrappedObject, QMdiArea::WindowOrder  order = QMdiArea::CreationOrder) const;
   QTabWidget::TabPosition  tabPosition(QMdiArea* theWrappedObject) const;
   QTabWidget::TabShape  tabShape(QMdiArea* theWrappedObject) const;
   bool  tabsClosable(QMdiArea* theWrappedObject) const;
   bool  tabsMovable(QMdiArea* theWrappedObject) const;
   bool  testOption(QMdiArea* theWrappedObject, QMdiArea::AreaOption  opton) const;
   void timerEvent(QMdiArea* theWrappedObject, QTimerEvent*  timerEvent);
   QMdiArea::ViewMode  viewMode(QMdiArea* theWrappedObject) const;
   bool  viewportEvent(QMdiArea* theWrappedObject, QEvent*  event);
};





class PythonQtShell_QMdiSubWindow : public QMdiSubWindow
{
public:
    PythonQtShell_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMdiSubWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMdiSubWindow();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  changeEvent);
virtual void childEvent(QChildEvent*  childEvent);
virtual void closeEvent(QCloseEvent*  closeEvent);
virtual void contextMenuEvent(QContextMenuEvent*  contextMenuEvent);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
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
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  leaveEvent);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
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
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMdiSubWindow : public QMdiSubWindow
{ public:
inline void promoted_changeEvent(QEvent*  changeEvent) { QMdiSubWindow::changeEvent(changeEvent); }
inline void promoted_childEvent(QChildEvent*  childEvent) { QMdiSubWindow::childEvent(childEvent); }
inline void promoted_closeEvent(QCloseEvent*  closeEvent) { QMdiSubWindow::closeEvent(closeEvent); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  contextMenuEvent) { QMdiSubWindow::contextMenuEvent(contextMenuEvent); }
inline bool  promoted_event(QEvent*  event) { return QMdiSubWindow::event(event); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QMdiSubWindow::eventFilter(object, event); }
inline void promoted_focusInEvent(QFocusEvent*  focusInEvent) { QMdiSubWindow::focusInEvent(focusInEvent); }
inline void promoted_focusOutEvent(QFocusEvent*  focusOutEvent) { QMdiSubWindow::focusOutEvent(focusOutEvent); }
inline void promoted_hideEvent(QHideEvent*  hideEvent) { QMdiSubWindow::hideEvent(hideEvent); }
inline void promoted_keyPressEvent(QKeyEvent*  keyEvent) { QMdiSubWindow::keyPressEvent(keyEvent); }
inline void promoted_leaveEvent(QEvent*  leaveEvent) { QMdiSubWindow::leaveEvent(leaveEvent); }
inline void promoted_mouseDoubleClickEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseDoubleClickEvent(mouseEvent); }
inline void promoted_mouseMoveEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseMoveEvent(mouseEvent); }
inline void promoted_mousePressEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mousePressEvent(mouseEvent); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  mouseEvent) { QMdiSubWindow::mouseReleaseEvent(mouseEvent); }
inline void promoted_moveEvent(QMoveEvent*  moveEvent) { QMdiSubWindow::moveEvent(moveEvent); }
inline void promoted_paintEvent(QPaintEvent*  paintEvent) { QMdiSubWindow::paintEvent(paintEvent); }
inline void promoted_resizeEvent(QResizeEvent*  resizeEvent) { QMdiSubWindow::resizeEvent(resizeEvent); }
inline void promoted_showEvent(QShowEvent*  showEvent) { QMdiSubWindow::showEvent(showEvent); }
inline void promoted_timerEvent(QTimerEvent*  timerEvent) { QMdiSubWindow::timerEvent(timerEvent); }
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
QMdiSubWindow* new_QMdiSubWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMdiSubWindow(QMdiSubWindow* obj) { delete obj; } 
   void changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent);
   void childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent);
   void closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent);
   void contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent);
   bool  event(QMdiSubWindow* theWrappedObject, QEvent*  event);
   bool  eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event);
   void focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent);
   void focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent);
   void hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent);
   bool  isShaded(QMdiSubWindow* theWrappedObject) const;
   void keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent);
   int  keyboardPageStep(QMdiSubWindow* theWrappedObject) const;
   int  keyboardSingleStep(QMdiSubWindow* theWrappedObject) const;
   void leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent);
   QWidget*  maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const;
   QWidget*  maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const;
   QMdiArea*  mdiArea(QMdiSubWindow* theWrappedObject) const;
   QSize  minimumSizeHint(QMdiSubWindow* theWrappedObject) const;
   void mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent);
   void moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent);
   void paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent);
   void resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent);
   void setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step);
   void setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step);
   void setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on = true);
   void setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu);
   void setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget);
   void showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent);
   QSize  sizeHint(QMdiSubWindow* theWrappedObject) const;
   QMenu*  systemMenu(QMdiSubWindow* theWrappedObject) const;
   bool  testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const;
   void timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent);
   QWidget*  widget(QMdiSubWindow* theWrappedObject) const;
};





class PythonQtShell_QMenu : public QMenu
{
public:
    PythonQtShell_QMenu(QWidget*  parent = 0):QMenu(parent),_wrapper(NULL) {};
    PythonQtShell_QMenu(const QString&  title, QWidget*  parent = 0):QMenu(title, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenu();

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
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenu : public QMenu
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenu::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenu::changeEvent(arg__1); }
inline int  promoted_columnCount() const { return QMenu::columnCount(); }
inline void promoted_enterEvent(QEvent*  arg__1) { QMenu::enterEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenu::event(arg__1); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QMenu::focusNextPrevChild(next); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QMenu::hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { QMenu::initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenu::keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenu::leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenu::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenu::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenu::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenu::paintEvent(arg__1); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenu::timerEvent(arg__1); }
inline void promoted_wheelEvent(QWheelEvent*  arg__1) { QMenu::wheelEvent(arg__1); }
};

class PythonQtWrapper_QMenu : public QObject
{ Q_OBJECT
public:
public slots:
QMenu* new_QMenu(QWidget*  parent = 0);
QMenu* new_QMenu(const QString&  title, QWidget*  parent = 0);
void delete_QMenu(QMenu* obj) { delete obj; } 
   QAction*  actionAt(QMenu* theWrappedObject, const QPoint&  arg__1) const;
   void actionEvent(QMenu* theWrappedObject, QActionEvent*  arg__1);
   QRect  actionGeometry(QMenu* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenu* theWrappedObject) const;
   void addAction(QMenu* theWrappedObject, QAction*  action);
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
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void clear(QMenu* theWrappedObject);
   int  columnCount(QMenu* theWrappedObject) const;
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  exec(QMenu* theWrappedObject);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0, QWidget*  parent = 0);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
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
   void keyPressEvent(QMenu* theWrappedObject, QKeyEvent*  arg__1);
   void leaveEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  menuAction(QMenu* theWrappedObject) const;
   void mouseMoveEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QMenu* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QMenu* theWrappedObject, QPaintEvent*  arg__1);
   void popup(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  separatorsCollapsible(QMenu* theWrappedObject) const;
   void setActiveAction(QMenu* theWrappedObject, QAction*  act);
   void setDefaultAction(QMenu* theWrappedObject, QAction*  arg__1);
   void setIcon(QMenu* theWrappedObject, const QIcon&  icon);
   void setSeparatorsCollapsible(QMenu* theWrappedObject, bool  collapse);
   void setTearOffEnabled(QMenu* theWrappedObject, bool  arg__1);
   void setTitle(QMenu* theWrappedObject, const QString&  title);
   void setToolTipsVisible(QMenu* theWrappedObject, bool  visible);
   QSize  sizeHint(QMenu* theWrappedObject) const;
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   QString  title(QMenu* theWrappedObject) const;
   bool  toolTipsVisible(QMenu* theWrappedObject) const;
   void wheelEvent(QMenu* theWrappedObject, QWheelEvent*  arg__1);

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
    PythonQtShell_QMenuBar(QWidget*  parent = 0):QMenuBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMenuBar();

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
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMenuBar : public QMenuBar
{ public:
inline void promoted_actionEvent(QActionEvent*  arg__1) { QMenuBar::actionEvent(arg__1); }
inline void promoted_changeEvent(QEvent*  arg__1) { QMenuBar::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QMenuBar::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QMenuBar::eventFilter(arg__1, arg__2); }
inline void promoted_focusInEvent(QFocusEvent*  arg__1) { QMenuBar::focusInEvent(arg__1); }
inline void promoted_focusOutEvent(QFocusEvent*  arg__1) { QMenuBar::focusOutEvent(arg__1); }
inline int  promoted_heightForWidth(int  arg__1) const { return QMenuBar::heightForWidth(arg__1); }
inline void promoted_initStyleOption(QStyleOptionMenuItem*  option, const QAction*  action) const { QMenuBar::initStyleOption(option, action); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QMenuBar::keyPressEvent(arg__1); }
inline void promoted_leaveEvent(QEvent*  arg__1) { QMenuBar::leaveEvent(arg__1); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QMenuBar::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QMenuBar::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QMenuBar::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QMenuBar::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QMenuBar::resizeEvent(arg__1); }
inline void promoted_setVisible(bool  visible) { QMenuBar::setVisible(visible); }
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QMenuBar::timerEvent(arg__1); }
};

class PythonQtWrapper_QMenuBar : public QObject
{ Q_OBJECT
public:
public slots:
QMenuBar* new_QMenuBar(QWidget*  parent = 0);
void delete_QMenuBar(QMenuBar* obj) { delete obj; } 
   QAction*  actionAt(QMenuBar* theWrappedObject, const QPoint&  arg__1) const;
   void actionEvent(QMenuBar* theWrappedObject, QActionEvent*  arg__1);
   QRect  actionGeometry(QMenuBar* theWrappedObject, QAction*  arg__1) const;
   QAction*  activeAction(QMenuBar* theWrappedObject) const;
   void addAction(QMenuBar* theWrappedObject, QAction*  action);
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text);
   QAction*  addAction(QMenuBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member);
   QAction*  addMenu(QMenuBar* theWrappedObject, QMenu*  menu);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QIcon&  icon, const QString&  title);
   QMenu*  addMenu(QMenuBar* theWrappedObject, const QString&  title);
   QAction*  addSeparator(QMenuBar* theWrappedObject);
   void changeEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   void clear(QMenuBar* theWrappedObject);
   QWidget*  cornerWidget(QMenuBar* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   bool  event(QMenuBar* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QMenuBar* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void focusInEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   void focusOutEvent(QMenuBar* theWrappedObject, QFocusEvent*  arg__1);
   int  heightForWidth(QMenuBar* theWrappedObject, int  arg__1) const;
   void initStyleOption(QMenuBar* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   QAction*  insertMenu(QMenuBar* theWrappedObject, QAction*  before, QMenu*  menu);
   QAction*  insertSeparator(QMenuBar* theWrappedObject, QAction*  before);
   bool  isDefaultUp(QMenuBar* theWrappedObject) const;
   bool  isNativeMenuBar(QMenuBar* theWrappedObject) const;
   void keyPressEvent(QMenuBar* theWrappedObject, QKeyEvent*  arg__1);
   void leaveEvent(QMenuBar* theWrappedObject, QEvent*  arg__1);
   QSize  minimumSizeHint(QMenuBar* theWrappedObject) const;
   void mouseMoveEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QMenuBar* theWrappedObject, QMouseEvent*  arg__1);
   void paintEvent(QMenuBar* theWrappedObject, QPaintEvent*  arg__1);
   void resizeEvent(QMenuBar* theWrappedObject, QResizeEvent*  arg__1);
   void setActiveAction(QMenuBar* theWrappedObject, QAction*  action);
   void setCornerWidget(QMenuBar* theWrappedObject, QWidget*  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDefaultUp(QMenuBar* theWrappedObject, bool  arg__1);
   void setNativeMenuBar(QMenuBar* theWrappedObject, bool  nativeMenuBar);
   void setVisible(QMenuBar* theWrappedObject, bool  visible);
   QSize  sizeHint(QMenuBar* theWrappedObject) const;
   void timerEvent(QMenuBar* theWrappedObject, QTimerEvent*  arg__1);

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
    PythonQtShell_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint):QMessageBox(icon, title, text, buttons, parent, flags),_wrapper(NULL) {};
    PythonQtShell_QMessageBox(QWidget*  parent = 0):QMessageBox(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMessageBox();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  event);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void done(int  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMessageBox : public QMessageBox
{ public:
inline void promoted_changeEvent(QEvent*  event) { QMessageBox::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QMessageBox::closeEvent(event); }
inline bool  promoted_event(QEvent*  e) { return QMessageBox::event(e); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QMessageBox::keyPressEvent(event); }
inline void promoted_open() { QMessageBox::open(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QMessageBox::resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { QMessageBox::showEvent(event); }
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
QMessageBox* new_QMessageBox(QMessageBox::Icon  icon, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::NoButton, QWidget*  parent = 0, Qt::WindowFlags  flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
QMessageBox* new_QMessageBox(QWidget*  parent = 0);
void delete_QMessageBox(QMessageBox* obj) { delete obj; } 
   void static_QMessageBox_about(QWidget*  parent, const QString&  title, const QString&  text);
   void static_QMessageBox_aboutQt(QWidget*  parent, const QString&  title = QString());
   void addButton(QMessageBox* theWrappedObject, QAbstractButton*  button, QMessageBox::ButtonRole  role);
   QPushButton*  addButton(QMessageBox* theWrappedObject, QMessageBox::StandardButton  button);
   QPushButton*  addButton(QMessageBox* theWrappedObject, const QString&  text, QMessageBox::ButtonRole  role);
   QAbstractButton*  button(QMessageBox* theWrappedObject, QMessageBox::StandardButton  which) const;
   QMessageBox::ButtonRole  buttonRole(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QList<QAbstractButton* >  buttons(QMessageBox* theWrappedObject) const;
   void changeEvent(QMessageBox* theWrappedObject, QEvent*  event);
   QCheckBox*  checkBox(QMessageBox* theWrappedObject) const;
   QAbstractButton*  clickedButton(QMessageBox* theWrappedObject) const;
   void closeEvent(QMessageBox* theWrappedObject, QCloseEvent*  event);
   QMessageBox::StandardButton  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_critical(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   QPushButton*  defaultButton(QMessageBox* theWrappedObject) const;
   QString  detailedText(QMessageBox* theWrappedObject) const;
   QAbstractButton*  escapeButton(QMessageBox* theWrappedObject) const;
   bool  event(QMessageBox* theWrappedObject, QEvent*  e);
   QMessageBox::Icon  icon(QMessageBox* theWrappedObject) const;
   QPixmap  iconPixmap(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   QMessageBox::StandardButton  static_QMessageBox_information(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1 = QMessageBox::NoButton);
   QString  informativeText(QMessageBox* theWrappedObject) const;
   void keyPressEvent(QMessageBox* theWrappedObject, QKeyEvent*  event);
   void open(QMessageBox* theWrappedObject);
   void open(QMessageBox* theWrappedObject, QObject*  receiver, const char*  member);
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::StandardButtons(Yes | No), QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event);
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
   void showEvent(QMessageBox* theWrappedObject, QShowEvent*  event);
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
   Qt::MouseEventSource  source(QMouseEvent* theWrappedObject) const;
   const QPointF*  windowPos(QMouseEvent* theWrappedObject) const;
   int  x(QMouseEvent* theWrappedObject) const;
   int  y(QMouseEvent* theWrappedObject) const;
};





class PythonQtShell_QMouseEventTransition : public QMouseEventTransition
{
public:
    PythonQtShell_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0):QMouseEventTransition(object, type, button, sourceState),_wrapper(NULL) {};
    PythonQtShell_QMouseEventTransition(QState*  sourceState = 0):QMouseEventTransition(sourceState),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEventTransition();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  eventTest(QEvent*  event);
virtual void onTransition(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMouseEventTransition : public QMouseEventTransition
{ public:
inline bool  promoted_eventTest(QEvent*  event) { return QMouseEventTransition::eventTest(event); }
inline void promoted_onTransition(QEvent*  event) { QMouseEventTransition::onTransition(event); }
};

class PythonQtWrapper_QMouseEventTransition : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEventTransition* new_QMouseEventTransition(QObject*  object, QEvent::Type  type, Qt::MouseButton  button, QState*  sourceState = 0);
QMouseEventTransition* new_QMouseEventTransition(QState*  sourceState = 0);
void delete_QMouseEventTransition(QMouseEventTransition* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEventTransition* theWrappedObject) const;
   bool  eventTest(QMouseEventTransition* theWrappedObject, QEvent*  event);
   QPainterPath  hitTestPath(QMouseEventTransition* theWrappedObject) const;
   Qt::KeyboardModifiers  modifierMask(QMouseEventTransition* theWrappedObject) const;
   void onTransition(QMouseEventTransition* theWrappedObject, QEvent*  event);
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
    PythonQtShell_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(device, format, parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(QObject*  parent = 0):QMovie(parent),_wrapper(NULL) {};
    PythonQtShell_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0):QMovie(fileName, format, parent),_wrapper(NULL) {};

   ~PythonQtShell_QMovie();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMovie : public QObject
{ Q_OBJECT
public:
public slots:
QMovie* new_QMovie(QIODevice*  device, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
QMovie* new_QMovie(QObject*  parent = 0);
QMovie* new_QMovie(const QString&  fileName, const QByteArray&  format = QByteArray(), QObject*  parent = 0);
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
};





class PythonQtShell_QNativeGestureEvent : public QNativeGestureEvent
{
public:
    PythonQtShell_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument):QNativeGestureEvent(type, localPos, windowPos, screenPos, value, sequenceId, intArgument),_wrapper(NULL) {};

   ~PythonQtShell_QNativeGestureEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QNativeGestureEvent : public QObject
{ Q_OBJECT
public:
public slots:
QNativeGestureEvent* new_QNativeGestureEvent(Qt::NativeGestureType  type, const QPointF&  localPos, const QPointF&  windowPos, const QPointF&  screenPos, qreal  value, ulong  sequenceId, quint64  intArgument);
void delete_QNativeGestureEvent(QNativeGestureEvent* obj) { delete obj; } 
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
    PythonQtShell_QOffscreenSurface(QScreen*  screen = 0):QOffscreenSurface(screen),_wrapper(NULL) {};

   ~PythonQtShell_QOffscreenSurface();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual QSurfaceFormat  format() const;
virtual QSize  size() const;
virtual QSurface::SurfaceType  surfaceType() const;
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOffscreenSurface : public QOffscreenSurface
{ public:
inline QSurfaceFormat  promoted_format() const { return QOffscreenSurface::format(); }
inline QSize  promoted_size() const { return QOffscreenSurface::size(); }
inline QSurface::SurfaceType  promoted_surfaceType() const { return QOffscreenSurface::surfaceType(); }
};

class PythonQtWrapper_QOffscreenSurface : public QObject
{ Q_OBJECT
public:
public slots:
QOffscreenSurface* new_QOffscreenSurface(QScreen*  screen = 0);
void delete_QOffscreenSurface(QOffscreenSurface* obj) { delete obj; } 
   void create(QOffscreenSurface* theWrappedObject);
   void destroy(QOffscreenSurface* theWrappedObject);
   QSurfaceFormat  format(QOffscreenSurface* theWrappedObject) const;
   bool  isValid(QOffscreenSurface* theWrappedObject) const;
   QSurfaceFormat  requestedFormat(QOffscreenSurface* theWrappedObject) const;
   QScreen*  screen(QOffscreenSurface* theWrappedObject) const;
   void setFormat(QOffscreenSurface* theWrappedObject, const QSurfaceFormat&  format);
   void setScreen(QOffscreenSurface* theWrappedObject, QScreen*  screen);
   QSize  size(QOffscreenSurface* theWrappedObject) const;
   QSurface::SurfaceType  surfaceType(QOffscreenSurface* theWrappedObject) const;
};





class PythonQtWrapper_QOpenGLBuffer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Access Type UsagePattern )
enum Access{
  ReadOnly = QOpenGLBuffer::ReadOnly,   WriteOnly = QOpenGLBuffer::WriteOnly,   ReadWrite = QOpenGLBuffer::ReadWrite};
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
    PythonQtShell_QOpenGLContext(QObject*  parent = 0):QOpenGLContext(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLContext();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLContext : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLModuleType )
enum OpenGLModuleType{
  LibGL = QOpenGLContext::LibGL,   LibGLES = QOpenGLContext::LibGLES};
public slots:
QOpenGLContext* new_QOpenGLContext(QObject*  parent = 0);
void delete_QOpenGLContext(QOpenGLContext* obj) { delete obj; } 
   bool  static_QOpenGLContext_areSharing(QOpenGLContext*  first, QOpenGLContext*  second);
   bool  create(QOpenGLContext* theWrappedObject);
   QOpenGLContext*  static_QOpenGLContext_currentContext();
   GLuint  defaultFramebufferObject(QOpenGLContext* theWrappedObject) const;
   void doneCurrent(QOpenGLContext* theWrappedObject);
   QSet<QByteArray >  extensions(QOpenGLContext* theWrappedObject) const;
   QSurfaceFormat  format(QOpenGLContext* theWrappedObject) const;
   QOpenGLFunctions*  functions(QOpenGLContext* theWrappedObject) const;
   bool  hasExtension(QOpenGLContext* theWrappedObject, const QByteArray&  extension) const;
   bool  isOpenGLES(QOpenGLContext* theWrappedObject) const;
   bool  isValid(QOpenGLContext* theWrappedObject) const;
   bool  makeCurrent(QOpenGLContext* theWrappedObject, QSurface*  surface);
   void*  static_QOpenGLContext_openGLModuleHandle();
   QOpenGLContext::OpenGLModuleType  static_QOpenGLContext_openGLModuleType();
   QScreen*  screen(QOpenGLContext* theWrappedObject) const;
   void setFormat(QOpenGLContext* theWrappedObject, const QSurfaceFormat&  format);
   void setScreen(QOpenGLContext* theWrappedObject, QScreen*  screen);
   void setShareContext(QOpenGLContext* theWrappedObject, QOpenGLContext*  shareContext);
   QOpenGLContext*  shareContext(QOpenGLContext* theWrappedObject) const;
   QOpenGLContextGroup*  shareGroup(QOpenGLContext* theWrappedObject) const;
   QSurface*  surface(QOpenGLContext* theWrappedObject) const;
   void swapBuffers(QOpenGLContext* theWrappedObject, QSurface*  surface);
};





class PythonQtWrapper_QOpenGLContextGroup : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QOpenGLContextGroup(QOpenGLContextGroup* obj) { delete obj; } 
   QOpenGLContextGroup*  static_QOpenGLContextGroup_currentContextGroup();
   QList<QOpenGLContext* >  shares(QOpenGLContextGroup* theWrappedObject) const;
};





class PythonQtShell_QOpenGLFramebufferObject : public QOpenGLFramebufferObject
{
public:
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internal_format = 0):QOpenGLFramebufferObject(size, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(size, format),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D):QOpenGLFramebufferObject(width, height, target),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internal_format = 0):QOpenGLFramebufferObject(width, height, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format):QOpenGLFramebufferObject(width, height, format),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLFramebufferObject();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment )
enum Attachment{
  NoAttachment = QOpenGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QOpenGLFramebufferObject::CombinedDepthStencil,   Depth = QOpenGLFramebufferObject::Depth};
public slots:
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internal_format = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(const QSize&  size, const QOpenGLFramebufferObjectFormat&  format);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, GLenum  target = GL_TEXTURE_2D);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, QOpenGLFramebufferObject::Attachment  attachment, GLenum  target = GL_TEXTURE_2D, GLenum  internal_format = 0);
QOpenGLFramebufferObject* new_QOpenGLFramebufferObject(int  width, int  height, const QOpenGLFramebufferObjectFormat&  format);
void delete_QOpenGLFramebufferObject(QOpenGLFramebufferObject* obj) { delete obj; } 
   QOpenGLFramebufferObject::Attachment  attachment(QOpenGLFramebufferObject* theWrappedObject) const;
   bool  bind(QOpenGLFramebufferObject* theWrappedObject);
   bool  static_QOpenGLFramebufferObject_bindDefault();
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, QOpenGLFramebufferObject*  source, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
   void static_QOpenGLFramebufferObject_blitFramebuffer(QOpenGLFramebufferObject*  target, const QRect&  targetRect, QOpenGLFramebufferObject*  source, const QRect&  sourceRect, GLbitfield  buffers = GL_COLOR_BUFFER_BIT, GLenum  filter = GL_NEAREST);
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
   GLuint  takeTexture(QOpenGLFramebufferObject* theWrappedObject);
   GLuint  texture(QOpenGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QOpenGLFramebufferObject* theWrappedObject) const;
   int  width(QOpenGLFramebufferObject* theWrappedObject) const;
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





class PythonQtWrapper_QOpenGLFunctions : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenGLFeature )
Q_FLAGS(OpenGLFeatures )
enum OpenGLFeature{
  Multitexture = QOpenGLFunctions::Multitexture,   Shaders = QOpenGLFunctions::Shaders,   Buffers = QOpenGLFunctions::Buffers,   Framebuffers = QOpenGLFunctions::Framebuffers,   BlendColor = QOpenGLFunctions::BlendColor,   BlendEquation = QOpenGLFunctions::BlendEquation,   BlendEquationSeparate = QOpenGLFunctions::BlendEquationSeparate,   BlendFuncSeparate = QOpenGLFunctions::BlendFuncSeparate,   BlendSubtract = QOpenGLFunctions::BlendSubtract,   CompressedTextures = QOpenGLFunctions::CompressedTextures,   Multisample = QOpenGLFunctions::Multisample,   StencilSeparate = QOpenGLFunctions::StencilSeparate,   NPOTTextures = QOpenGLFunctions::NPOTTextures,   NPOTTextureRepeat = QOpenGLFunctions::NPOTTextureRepeat,   FixedFunctionPipeline = QOpenGLFunctions::FixedFunctionPipeline};
Q_DECLARE_FLAGS(OpenGLFeatures, OpenGLFeature)
public slots:
QOpenGLFunctions* new_QOpenGLFunctions();
QOpenGLFunctions* new_QOpenGLFunctions(QOpenGLContext*  context);
void delete_QOpenGLFunctions(QOpenGLFunctions* obj) { delete obj; } 
   void glActiveTexture(QOpenGLFunctions* theWrappedObject, GLenum  texture);
   void glAttachShader(QOpenGLFunctions* theWrappedObject, GLuint  program, GLuint  shader);
   void glBindAttribLocation(QOpenGLFunctions* theWrappedObject, GLuint  program, GLuint  index, const char*  name);
   void glBindBuffer(QOpenGLFunctions* theWrappedObject, GLenum  target, GLuint  buffer);
   void glBindFramebuffer(QOpenGLFunctions* theWrappedObject, GLenum  target, GLuint  framebuffer);
   void glBindRenderbuffer(QOpenGLFunctions* theWrappedObject, GLenum  target, GLuint  renderbuffer);
   void glBindTexture(QOpenGLFunctions* theWrappedObject, GLenum  target, GLuint  texture);
   void glBlendColor(QOpenGLFunctions* theWrappedObject, GLclampf  red, GLclampf  green, GLclampf  blue, GLclampf  alpha);
   void glBlendEquation(QOpenGLFunctions* theWrappedObject, GLenum  mode);
   void glBlendEquationSeparate(QOpenGLFunctions* theWrappedObject, GLenum  modeRGB, GLenum  modeAlpha);
   void glBlendFunc(QOpenGLFunctions* theWrappedObject, GLenum  sfactor, GLenum  dfactor);
   void glBlendFuncSeparate(QOpenGLFunctions* theWrappedObject, GLenum  srcRGB, GLenum  dstRGB, GLenum  srcAlpha, GLenum  dstAlpha);
   GLenum  glCheckFramebufferStatus(QOpenGLFunctions* theWrappedObject, GLenum  target);
   void glClear(QOpenGLFunctions* theWrappedObject, GLbitfield  mask);
   void glClearColor(QOpenGLFunctions* theWrappedObject, GLclampf  red, GLclampf  green, GLclampf  blue, GLclampf  alpha);
   void glClearDepthf(QOpenGLFunctions* theWrappedObject, GLclampf  depth);
   void glClearStencil(QOpenGLFunctions* theWrappedObject, GLint  s);
   void glColorMask(QOpenGLFunctions* theWrappedObject, GLboolean  red, GLboolean  green, GLboolean  blue, GLboolean  alpha);
   void glCompileShader(QOpenGLFunctions* theWrappedObject, GLuint  shader);
   void glCompressedTexImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLenum  internalformat, GLsizei  width, GLsizei  height, GLint  border, GLsizei  imageSize, const void*  data);
   void glCompressedTexSubImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  xoffset, GLint  yoffset, GLsizei  width, GLsizei  height, GLenum  format, GLsizei  imageSize, const void*  data);
   void glCopyTexImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLenum  internalformat, GLint  x, GLint  y, GLsizei  width, GLsizei  height, GLint  border);
   void glCopyTexSubImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  xoffset, GLint  yoffset, GLint  x, GLint  y, GLsizei  width, GLsizei  height);
   GLuint  glCreateProgram(QOpenGLFunctions* theWrappedObject);
   GLuint  glCreateShader(QOpenGLFunctions* theWrappedObject, GLenum  type);
   void glCullFace(QOpenGLFunctions* theWrappedObject, GLenum  mode);
   void glDeleteBuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  buffers);
   void glDeleteFramebuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  framebuffers);
   void glDeleteProgram(QOpenGLFunctions* theWrappedObject, GLuint  program);
   void glDeleteRenderbuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  renderbuffers);
   void glDeleteShader(QOpenGLFunctions* theWrappedObject, GLuint  shader);
   void glDeleteTextures(QOpenGLFunctions* theWrappedObject, GLsizei  n, const GLuint*  textures);
   void glDepthFunc(QOpenGLFunctions* theWrappedObject, GLenum  func);
   void glDepthMask(QOpenGLFunctions* theWrappedObject, GLboolean  flag);
   void glDepthRangef(QOpenGLFunctions* theWrappedObject, GLclampf  zNear, GLclampf  zFar);
   void glDetachShader(QOpenGLFunctions* theWrappedObject, GLuint  program, GLuint  shader);
   void glDisable(QOpenGLFunctions* theWrappedObject, GLenum  cap);
   void glDisableVertexAttribArray(QOpenGLFunctions* theWrappedObject, GLuint  index);
   void glDrawArrays(QOpenGLFunctions* theWrappedObject, GLenum  mode, GLint  first, GLsizei  count);
   void glDrawElements(QOpenGLFunctions* theWrappedObject, GLenum  mode, GLsizei  count, GLenum  type, const GLvoid*  indices);
   void glEnable(QOpenGLFunctions* theWrappedObject, GLenum  cap);
   void glEnableVertexAttribArray(QOpenGLFunctions* theWrappedObject, GLuint  index);
   void glFinish(QOpenGLFunctions* theWrappedObject);
   void glFlush(QOpenGLFunctions* theWrappedObject);
   void glFramebufferRenderbuffer(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  renderbuffertarget, GLuint  renderbuffer);
   void glFramebufferTexture2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  textarget, GLuint  texture, GLint  level);
   void glFrontFace(QOpenGLFunctions* theWrappedObject, GLenum  mode);
   void glGenBuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, GLuint*  buffers);
   void glGenFramebuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, GLuint*  framebuffers);
   void glGenRenderbuffers(QOpenGLFunctions* theWrappedObject, GLsizei  n, GLuint*  renderbuffers);
   void glGenTextures(QOpenGLFunctions* theWrappedObject, GLsizei  n, GLuint*  textures);
   void glGenerateMipmap(QOpenGLFunctions* theWrappedObject, GLenum  target);
   void glGetActiveAttrib(QOpenGLFunctions* theWrappedObject, GLuint  program, GLuint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name);
   void glGetActiveUniform(QOpenGLFunctions* theWrappedObject, GLuint  program, GLuint  index, GLsizei  bufsize, GLsizei*  length, GLint*  size, GLenum*  type, char*  name);
   void glGetAttachedShaders(QOpenGLFunctions* theWrappedObject, GLuint  program, GLsizei  maxcount, GLsizei*  count, GLuint*  shaders);
   GLint  glGetAttribLocation(QOpenGLFunctions* theWrappedObject, GLuint  program, const char*  name);
   void glGetBooleanv(QOpenGLFunctions* theWrappedObject, GLenum  pname, GLboolean*  params);
   void glGetBufferParameteriv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params);
   GLenum  glGetError(QOpenGLFunctions* theWrappedObject);
   void glGetFloatv(QOpenGLFunctions* theWrappedObject, GLenum  pname, GLfloat*  params);
   void glGetFramebufferAttachmentParameteriv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  attachment, GLenum  pname, GLint*  params);
   void glGetIntegerv(QOpenGLFunctions* theWrappedObject, GLenum  pname, GLint*  params);
   void glGetProgramInfoLog(QOpenGLFunctions* theWrappedObject, GLuint  program, GLsizei  bufsize, GLsizei*  length, char*  infolog);
   void glGetProgramiv(QOpenGLFunctions* theWrappedObject, GLuint  program, GLenum  pname, GLint*  params);
   void glGetRenderbufferParameteriv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params);
   void glGetShaderInfoLog(QOpenGLFunctions* theWrappedObject, GLuint  shader, GLsizei  bufsize, GLsizei*  length, char*  infolog);
   void glGetShaderPrecisionFormat(QOpenGLFunctions* theWrappedObject, GLenum  shadertype, GLenum  precisiontype, GLint*  range, GLint*  precision);
   void glGetShaderSource(QOpenGLFunctions* theWrappedObject, GLuint  shader, GLsizei  bufsize, GLsizei*  length, char*  source);
   void glGetShaderiv(QOpenGLFunctions* theWrappedObject, GLuint  shader, GLenum  pname, GLint*  params);
   const GLubyte*  glGetString(QOpenGLFunctions* theWrappedObject, GLenum  name);
   void glGetTexParameterfv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLfloat*  params);
   void glGetTexParameteriv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint*  params);
   GLint  glGetUniformLocation(QOpenGLFunctions* theWrappedObject, GLuint  program, const char*  name);
   void glGetUniformfv(QOpenGLFunctions* theWrappedObject, GLuint  program, GLint  location, GLfloat*  params);
   void glGetUniformiv(QOpenGLFunctions* theWrappedObject, GLuint  program, GLint  location, GLint*  params);
   void glGetVertexAttribPointerv(QOpenGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, void**  pointer);
   void glGetVertexAttribfv(QOpenGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, GLfloat*  params);
   void glGetVertexAttribiv(QOpenGLFunctions* theWrappedObject, GLuint  index, GLenum  pname, GLint*  params);
   void glHint(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  mode);
   GLboolean  glIsBuffer(QOpenGLFunctions* theWrappedObject, GLuint  buffer);
   GLboolean  glIsEnabled(QOpenGLFunctions* theWrappedObject, GLenum  cap);
   GLboolean  glIsFramebuffer(QOpenGLFunctions* theWrappedObject, GLuint  framebuffer);
   GLboolean  glIsProgram(QOpenGLFunctions* theWrappedObject, GLuint  program);
   GLboolean  glIsRenderbuffer(QOpenGLFunctions* theWrappedObject, GLuint  renderbuffer);
   GLboolean  glIsShader(QOpenGLFunctions* theWrappedObject, GLuint  shader);
   GLboolean  glIsTexture(QOpenGLFunctions* theWrappedObject, GLuint  texture);
   void glLineWidth(QOpenGLFunctions* theWrappedObject, GLfloat  width);
   void glLinkProgram(QOpenGLFunctions* theWrappedObject, GLuint  program);
   void glPixelStorei(QOpenGLFunctions* theWrappedObject, GLenum  pname, GLint  param);
   void glPolygonOffset(QOpenGLFunctions* theWrappedObject, GLfloat  factor, GLfloat  units);
   void glReadPixels(QOpenGLFunctions* theWrappedObject, GLint  x, GLint  y, GLsizei  width, GLsizei  height, GLenum  format, GLenum  type, GLvoid*  pixels);
   void glReleaseShaderCompiler(QOpenGLFunctions* theWrappedObject);
   void glRenderbufferStorage(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  internalformat, GLsizei  width, GLsizei  height);
   void glSampleCoverage(QOpenGLFunctions* theWrappedObject, GLclampf  value, GLboolean  invert);
   void glScissor(QOpenGLFunctions* theWrappedObject, GLint  x, GLint  y, GLsizei  width, GLsizei  height);
   void glShaderBinary(QOpenGLFunctions* theWrappedObject, GLint  n, const GLuint*  shaders, GLenum  binaryformat, const void*  binary, GLint  length);
   void glShaderSource(QOpenGLFunctions* theWrappedObject, GLuint  shader, GLsizei  count, const char**  string, const GLint*  length);
   void glStencilFunc(QOpenGLFunctions* theWrappedObject, GLenum  func, GLint  ref, GLuint  mask);
   void glStencilFuncSeparate(QOpenGLFunctions* theWrappedObject, GLenum  face, GLenum  func, GLint  ref, GLuint  mask);
   void glStencilMask(QOpenGLFunctions* theWrappedObject, GLuint  mask);
   void glStencilMaskSeparate(QOpenGLFunctions* theWrappedObject, GLenum  face, GLuint  mask);
   void glStencilOp(QOpenGLFunctions* theWrappedObject, GLenum  fail, GLenum  zfail, GLenum  zpass);
   void glStencilOpSeparate(QOpenGLFunctions* theWrappedObject, GLenum  face, GLenum  fail, GLenum  zfail, GLenum  zpass);
   void glTexImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  internalformat, GLsizei  width, GLsizei  height, GLint  border, GLenum  format, GLenum  type, const GLvoid*  pixels);
   void glTexParameterf(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLfloat  param);
   void glTexParameterfv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, const GLfloat*  params);
   void glTexParameteri(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, GLint  param);
   void glTexParameteriv(QOpenGLFunctions* theWrappedObject, GLenum  target, GLenum  pname, const GLint*  params);
   void glTexSubImage2D(QOpenGLFunctions* theWrappedObject, GLenum  target, GLint  level, GLint  xoffset, GLint  yoffset, GLsizei  width, GLsizei  height, GLenum  format, GLenum  type, const GLvoid*  pixels);
   void glUniform1f(QOpenGLFunctions* theWrappedObject, GLint  location, GLfloat  x);
   void glUniform1fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform1i(QOpenGLFunctions* theWrappedObject, GLint  location, GLint  x);
   void glUniform1iv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform2f(QOpenGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y);
   void glUniform2fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform2i(QOpenGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y);
   void glUniform2iv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform3f(QOpenGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z);
   void glUniform3fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform3i(QOpenGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z);
   void glUniform3iv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniform4f(QOpenGLFunctions* theWrappedObject, GLint  location, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void glUniform4fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLfloat*  v);
   void glUniform4i(QOpenGLFunctions* theWrappedObject, GLint  location, GLint  x, GLint  y, GLint  z, GLint  w);
   void glUniform4iv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, const GLint*  v);
   void glUniformMatrix2fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUniformMatrix3fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUniformMatrix4fv(QOpenGLFunctions* theWrappedObject, GLint  location, GLsizei  count, GLboolean  transpose, const GLfloat*  value);
   void glUseProgram(QOpenGLFunctions* theWrappedObject, GLuint  program);
   void glValidateProgram(QOpenGLFunctions* theWrappedObject, GLuint  program);
   void glVertexAttrib1f(QOpenGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x);
   void glVertexAttrib1fv(QOpenGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib2f(QOpenGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y);
   void glVertexAttrib2fv(QOpenGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib3f(QOpenGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y, GLfloat  z);
   void glVertexAttrib3fv(QOpenGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttrib4f(QOpenGLFunctions* theWrappedObject, GLuint  indx, GLfloat  x, GLfloat  y, GLfloat  z, GLfloat  w);
   void glVertexAttrib4fv(QOpenGLFunctions* theWrappedObject, GLuint  indx, const GLfloat*  values);
   void glVertexAttribPointer(QOpenGLFunctions* theWrappedObject, GLuint  indx, GLint  size, GLenum  type, GLboolean  normalized, GLsizei  stride, const void*  ptr);
   void glViewport(QOpenGLFunctions* theWrappedObject, GLint  x, GLint  y, GLsizei  width, GLsizei  height);
   bool  hasOpenGLFeature(QOpenGLFunctions* theWrappedObject, QOpenGLFunctions::OpenGLFeature  feature) const;
   void initializeOpenGLFunctions(QOpenGLFunctions* theWrappedObject);
   QOpenGLFunctions::OpenGLFeatures  openGLFeatures(QOpenGLFunctions* theWrappedObject) const;
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
inline int  promoted_devType() const { return QOpenGLPaintDevice::devType(); }
inline void promoted_ensureActiveTarget() { QOpenGLPaintDevice::ensureActiveTarget(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QOpenGLPaintDevice::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QOpenGLPaintDevice::paintEngine(); }
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
   int  devType(QOpenGLPaintDevice* theWrappedObject) const;
   qreal  dotsPerMeterX(QOpenGLPaintDevice* theWrappedObject) const;
   qreal  dotsPerMeterY(QOpenGLPaintDevice* theWrappedObject) const;
   void ensureActiveTarget(QOpenGLPaintDevice* theWrappedObject);
   int  metric(QOpenGLPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QOpenGLPaintDevice* theWrappedObject) const;
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
    PythonQtShell_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = 0):QOpenGLShader(type, parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLShader();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

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
QOpenGLShader* new_QOpenGLShader(QOpenGLShader::ShaderType  type, QObject*  parent = 0);
void delete_QOpenGLShader(QOpenGLShader* obj) { delete obj; } 
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QByteArray&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const QString&  source);
   bool  compileSourceCode(QOpenGLShader* theWrappedObject, const char*  source);
   bool  compileSourceFile(QOpenGLShader* theWrappedObject, const QString&  fileName);
   bool  static_QOpenGLShader_hasOpenGLShaders(QOpenGLShader::ShaderType  type, QOpenGLContext*  context = 0);
   bool  isCompiled(QOpenGLShader* theWrappedObject) const;
   QString  log(QOpenGLShader* theWrappedObject) const;
   GLuint  shaderId(QOpenGLShader* theWrappedObject) const;
   QOpenGLShader::ShaderType  shaderType(QOpenGLShader* theWrappedObject) const;
   QByteArray  sourceCode(QOpenGLShader* theWrappedObject) const;
};





class PythonQtShell_QOpenGLShaderProgram : public QOpenGLShaderProgram
{
public:
    PythonQtShell_QOpenGLShaderProgram(QObject*  parent = 0):QOpenGLShaderProgram(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLShaderProgram();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  link();
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QOpenGLShaderProgram : public QOpenGLShaderProgram
{ public:
inline bool  promoted_link() { return QOpenGLShaderProgram::link(); }
};

class PythonQtWrapper_QOpenGLShaderProgram : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLShaderProgram* new_QOpenGLShaderProgram(QObject*  parent = 0);
void delete_QOpenGLShaderProgram(QOpenGLShaderProgram* obj) { delete obj; } 
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
   bool  static_QOpenGLShaderProgram_hasOpenGLShaderPrograms(QOpenGLContext*  context = 0);
   bool  isLinked(QOpenGLShaderProgram* theWrappedObject) const;
   bool  link(QOpenGLShaderProgram* theWrappedObject);
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
Q_ENUMS(BindingTarget CoordinateDirection CubeMapFace DepthStencilMode Feature Filter MipMapGeneration PixelFormat PixelType SwizzleComponent SwizzleValue Target TextureFormat TextureFormatClass TextureUnitReset WrapMode )
Q_FLAGS(Features )
enum BindingTarget{
  BindingTarget1D = QOpenGLTexture::BindingTarget1D,   BindingTarget1DArray = QOpenGLTexture::BindingTarget1DArray,   BindingTarget2D = QOpenGLTexture::BindingTarget2D,   BindingTarget2DArray = QOpenGLTexture::BindingTarget2DArray,   BindingTarget3D = QOpenGLTexture::BindingTarget3D,   BindingTargetCubeMap = QOpenGLTexture::BindingTargetCubeMap,   BindingTargetCubeMapArray = QOpenGLTexture::BindingTargetCubeMapArray,   BindingTarget2DMultisample = QOpenGLTexture::BindingTarget2DMultisample,   BindingTarget2DMultisampleArray = QOpenGLTexture::BindingTarget2DMultisampleArray,   BindingTargetRectangle = QOpenGLTexture::BindingTargetRectangle,   BindingTargetBuffer = QOpenGLTexture::BindingTargetBuffer};
enum CoordinateDirection{
  DirectionS = QOpenGLTexture::DirectionS,   DirectionT = QOpenGLTexture::DirectionT,   DirectionR = QOpenGLTexture::DirectionR};
enum CubeMapFace{
  CubeMapPositiveX = QOpenGLTexture::CubeMapPositiveX,   CubeMapNegativeX = QOpenGLTexture::CubeMapNegativeX,   CubeMapPositiveY = QOpenGLTexture::CubeMapPositiveY,   CubeMapNegativeY = QOpenGLTexture::CubeMapNegativeY,   CubeMapPositiveZ = QOpenGLTexture::CubeMapPositiveZ,   CubeMapNegativeZ = QOpenGLTexture::CubeMapNegativeZ};
enum DepthStencilMode{
  DepthMode = QOpenGLTexture::DepthMode,   StencilMode = QOpenGLTexture::StencilMode};
enum Feature{
  ImmutableStorage = QOpenGLTexture::ImmutableStorage,   ImmutableMultisampleStorage = QOpenGLTexture::ImmutableMultisampleStorage,   TextureRectangle = QOpenGLTexture::TextureRectangle,   TextureArrays = QOpenGLTexture::TextureArrays,   Texture3D = QOpenGLTexture::Texture3D,   TextureMultisample = QOpenGLTexture::TextureMultisample,   TextureBuffer = QOpenGLTexture::TextureBuffer,   TextureCubeMapArrays = QOpenGLTexture::TextureCubeMapArrays,   Swizzle = QOpenGLTexture::Swizzle,   StencilTexturing = QOpenGLTexture::StencilTexturing,   AnisotropicFiltering = QOpenGLTexture::AnisotropicFiltering,   NPOTTextures = QOpenGLTexture::NPOTTextures,   NPOTTextureRepeat = QOpenGLTexture::NPOTTextureRepeat,   Texture1D = QOpenGLTexture::Texture1D,   MaxFeatureFlag = QOpenGLTexture::MaxFeatureFlag};
enum Filter{
  Nearest = QOpenGLTexture::Nearest,   Linear = QOpenGLTexture::Linear,   NearestMipMapNearest = QOpenGLTexture::NearestMipMapNearest,   NearestMipMapLinear = QOpenGLTexture::NearestMipMapLinear,   LinearMipMapNearest = QOpenGLTexture::LinearMipMapNearest,   LinearMipMapLinear = QOpenGLTexture::LinearMipMapLinear};
enum MipMapGeneration{
  GenerateMipMaps = QOpenGLTexture::GenerateMipMaps,   DontGenerateMipMaps = QOpenGLTexture::DontGenerateMipMaps};
enum PixelFormat{
  NoSourceFormat = QOpenGLTexture::NoSourceFormat,   Red = QOpenGLTexture::Red,   RG = QOpenGLTexture::RG,   RGB = QOpenGLTexture::RGB,   BGR = QOpenGLTexture::BGR,   RGBA = QOpenGLTexture::RGBA,   BGRA = QOpenGLTexture::BGRA,   Red_Integer = QOpenGLTexture::Red_Integer,   RG_Integer = QOpenGLTexture::RG_Integer,   RGB_Integer = QOpenGLTexture::RGB_Integer,   BGR_Integer = QOpenGLTexture::BGR_Integer,   RGBA_Integer = QOpenGLTexture::RGBA_Integer,   BGRA_Integer = QOpenGLTexture::BGRA_Integer,   Depth = QOpenGLTexture::Depth,   DepthStencil = QOpenGLTexture::DepthStencil,   Alpha = QOpenGLTexture::Alpha,   Luminance = QOpenGLTexture::Luminance,   LuminanceAlpha = QOpenGLTexture::LuminanceAlpha};
enum PixelType{
  NoPixelType = QOpenGLTexture::NoPixelType,   Int8 = QOpenGLTexture::Int8,   UInt8 = QOpenGLTexture::UInt8,   Int16 = QOpenGLTexture::Int16,   UInt16 = QOpenGLTexture::UInt16,   Int32 = QOpenGLTexture::Int32,   UInt32 = QOpenGLTexture::UInt32,   Float16 = QOpenGLTexture::Float16,   Float16OES = QOpenGLTexture::Float16OES,   Float32 = QOpenGLTexture::Float32,   UInt32_RGB9_E5 = QOpenGLTexture::UInt32_RGB9_E5,   UInt32_RG11B10F = QOpenGLTexture::UInt32_RG11B10F,   UInt8_RG3B2 = QOpenGLTexture::UInt8_RG3B2,   UInt8_RG3B2_Rev = QOpenGLTexture::UInt8_RG3B2_Rev,   UInt16_RGB5A1 = QOpenGLTexture::UInt16_RGB5A1,   UInt16_RGB5A1_Rev = QOpenGLTexture::UInt16_RGB5A1_Rev,   UInt16_R5G6B5 = QOpenGLTexture::UInt16_R5G6B5,   UInt16_R5G6B5_Rev = QOpenGLTexture::UInt16_R5G6B5_Rev,   UInt16_RGBA4 = QOpenGLTexture::UInt16_RGBA4,   UInt16_RGBA4_Rev = QOpenGLTexture::UInt16_RGBA4_Rev,   UInt32_RGB10A2 = QOpenGLTexture::UInt32_RGB10A2,   UInt32_RGB10A2_Rev = QOpenGLTexture::UInt32_RGB10A2_Rev};
enum SwizzleComponent{
  SwizzleRed = QOpenGLTexture::SwizzleRed,   SwizzleGreen = QOpenGLTexture::SwizzleGreen,   SwizzleBlue = QOpenGLTexture::SwizzleBlue,   SwizzleAlpha = QOpenGLTexture::SwizzleAlpha};
enum SwizzleValue{
  RedValue = QOpenGLTexture::RedValue,   GreenValue = QOpenGLTexture::GreenValue,   BlueValue = QOpenGLTexture::BlueValue,   AlphaValue = QOpenGLTexture::AlphaValue,   ZeroValue = QOpenGLTexture::ZeroValue,   OneValue = QOpenGLTexture::OneValue};
enum Target{
  Target1D = QOpenGLTexture::Target1D,   Target1DArray = QOpenGLTexture::Target1DArray,   Target2D = QOpenGLTexture::Target2D,   Target2DArray = QOpenGLTexture::Target2DArray,   Target3D = QOpenGLTexture::Target3D,   TargetCubeMap = QOpenGLTexture::TargetCubeMap,   TargetCubeMapArray = QOpenGLTexture::TargetCubeMapArray,   Target2DMultisample = QOpenGLTexture::Target2DMultisample,   Target2DMultisampleArray = QOpenGLTexture::Target2DMultisampleArray,   TargetRectangle = QOpenGLTexture::TargetRectangle,   TargetBuffer = QOpenGLTexture::TargetBuffer};
enum TextureFormat{
  NoFormat = QOpenGLTexture::NoFormat,   R8_UNorm = QOpenGLTexture::R8_UNorm,   RG8_UNorm = QOpenGLTexture::RG8_UNorm,   RGB8_UNorm = QOpenGLTexture::RGB8_UNorm,   RGBA8_UNorm = QOpenGLTexture::RGBA8_UNorm,   R16_UNorm = QOpenGLTexture::R16_UNorm,   RG16_UNorm = QOpenGLTexture::RG16_UNorm,   RGB16_UNorm = QOpenGLTexture::RGB16_UNorm,   RGBA16_UNorm = QOpenGLTexture::RGBA16_UNorm,   R8_SNorm = QOpenGLTexture::R8_SNorm,   RG8_SNorm = QOpenGLTexture::RG8_SNorm,   RGB8_SNorm = QOpenGLTexture::RGB8_SNorm,   RGBA8_SNorm = QOpenGLTexture::RGBA8_SNorm,   R16_SNorm = QOpenGLTexture::R16_SNorm,   RG16_SNorm = QOpenGLTexture::RG16_SNorm,   RGB16_SNorm = QOpenGLTexture::RGB16_SNorm,   RGBA16_SNorm = QOpenGLTexture::RGBA16_SNorm,   R8U = QOpenGLTexture::R8U,   RG8U = QOpenGLTexture::RG8U,   RGB8U = QOpenGLTexture::RGB8U,   RGBA8U = QOpenGLTexture::RGBA8U,   R16U = QOpenGLTexture::R16U,   RG16U = QOpenGLTexture::RG16U,   RGB16U = QOpenGLTexture::RGB16U,   RGBA16U = QOpenGLTexture::RGBA16U,   R32U = QOpenGLTexture::R32U,   RG32U = QOpenGLTexture::RG32U,   RGB32U = QOpenGLTexture::RGB32U,   RGBA32U = QOpenGLTexture::RGBA32U,   R8I = QOpenGLTexture::R8I,   RG8I = QOpenGLTexture::RG8I,   RGB8I = QOpenGLTexture::RGB8I,   RGBA8I = QOpenGLTexture::RGBA8I,   R16I = QOpenGLTexture::R16I,   RG16I = QOpenGLTexture::RG16I,   RGB16I = QOpenGLTexture::RGB16I,   RGBA16I = QOpenGLTexture::RGBA16I,   R32I = QOpenGLTexture::R32I,   RG32I = QOpenGLTexture::RG32I,   RGB32I = QOpenGLTexture::RGB32I,   RGBA32I = QOpenGLTexture::RGBA32I,   R16F = QOpenGLTexture::R16F,   RG16F = QOpenGLTexture::RG16F,   RGB16F = QOpenGLTexture::RGB16F,   RGBA16F = QOpenGLTexture::RGBA16F,   R32F = QOpenGLTexture::R32F,   RG32F = QOpenGLTexture::RG32F,   RGB32F = QOpenGLTexture::RGB32F,   RGBA32F = QOpenGLTexture::RGBA32F,   RGB9E5 = QOpenGLTexture::RGB9E5,   RG11B10F = QOpenGLTexture::RG11B10F,   RG3B2 = QOpenGLTexture::RG3B2,   R5G6B5 = QOpenGLTexture::R5G6B5,   RGB5A1 = QOpenGLTexture::RGB5A1,   RGBA4 = QOpenGLTexture::RGBA4,   RGB10A2 = QOpenGLTexture::RGB10A2,   D16 = QOpenGLTexture::D16,   D24 = QOpenGLTexture::D24,   D24S8 = QOpenGLTexture::D24S8,   D32 = QOpenGLTexture::D32,   D32F = QOpenGLTexture::D32F,   D32FS8X24 = QOpenGLTexture::D32FS8X24,   RGB_DXT1 = QOpenGLTexture::RGB_DXT1,   RGBA_DXT1 = QOpenGLTexture::RGBA_DXT1,   RGBA_DXT3 = QOpenGLTexture::RGBA_DXT3,   RGBA_DXT5 = QOpenGLTexture::RGBA_DXT5,   R_ATI1N_UNorm = QOpenGLTexture::R_ATI1N_UNorm,   R_ATI1N_SNorm = QOpenGLTexture::R_ATI1N_SNorm,   RG_ATI2N_UNorm = QOpenGLTexture::RG_ATI2N_UNorm,   RG_ATI2N_SNorm = QOpenGLTexture::RG_ATI2N_SNorm,   RGB_BP_UNSIGNED_FLOAT = QOpenGLTexture::RGB_BP_UNSIGNED_FLOAT,   RGB_BP_SIGNED_FLOAT = QOpenGLTexture::RGB_BP_SIGNED_FLOAT,   RGB_BP_UNorm = QOpenGLTexture::RGB_BP_UNorm,   SRGB8 = QOpenGLTexture::SRGB8,   SRGB8_Alpha8 = QOpenGLTexture::SRGB8_Alpha8,   SRGB_DXT1 = QOpenGLTexture::SRGB_DXT1,   SRGB_Alpha_DXT1 = QOpenGLTexture::SRGB_Alpha_DXT1,   SRGB_Alpha_DXT3 = QOpenGLTexture::SRGB_Alpha_DXT3,   SRGB_Alpha_DXT5 = QOpenGLTexture::SRGB_Alpha_DXT5,   SRGB_BP_UNorm = QOpenGLTexture::SRGB_BP_UNorm,   DepthFormat = QOpenGLTexture::DepthFormat,   AlphaFormat = QOpenGLTexture::AlphaFormat,   RGBFormat = QOpenGLTexture::RGBFormat,   RGBAFormat = QOpenGLTexture::RGBAFormat,   LuminanceFormat = QOpenGLTexture::LuminanceFormat,   LuminanceAlphaFormat = QOpenGLTexture::LuminanceAlphaFormat};
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
   void bind(QOpenGLTexture* theWrappedObject);
   void bind(QOpenGLTexture* theWrappedObject, uint  unit, QOpenGLTexture::TextureUnitReset  reset = QOpenGLTexture::DontResetTextureUnit);
   QColor  borderColor(QOpenGLTexture* theWrappedObject) const;
   void borderColor(QOpenGLTexture* theWrappedObject, float*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, int*  border) const;
   void borderColor(QOpenGLTexture* theWrappedObject, unsigned int*  border) const;
   GLuint  static_QOpenGLTexture_boundTextureId(QOpenGLTexture::BindingTarget  target);
   GLuint  static_QOpenGLTexture_boundTextureId(uint  unit, QOpenGLTexture::BindingTarget  target);
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
   void setAutoMipMapGenerationEnabled(QOpenGLTexture* theWrappedObject, bool  enabled);
   void setBorderColor(QOpenGLTexture* theWrappedObject, QColor  color);
   void setBorderColor(QOpenGLTexture* theWrappedObject, float  r, float  g, float  b, float  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, int  r, int  g, int  b, int  a);
   void setBorderColor(QOpenGLTexture* theWrappedObject, uint  r, uint  g, uint  b, uint  a);
   void setData(QOpenGLTexture* theWrappedObject, const QImage&  image, QOpenGLTexture::MipMapGeneration  genMipMaps = QOpenGLTexture::GenerateMipMaps);
   void setDepthStencilMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::DepthStencilMode  mode);
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
   void setSize(QOpenGLTexture* theWrappedObject, int  width, int  height = 1, int  depth = 1);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component, QOpenGLTexture::SwizzleValue  value);
   void setSwizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleValue  r, QOpenGLTexture::SwizzleValue  g, QOpenGLTexture::SwizzleValue  b, QOpenGLTexture::SwizzleValue  a);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction, QOpenGLTexture::WrapMode  mode);
   void setWrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::WrapMode  mode);
   QOpenGLTexture::SwizzleValue  swizzleMask(QOpenGLTexture* theWrappedObject, QOpenGLTexture::SwizzleComponent  component) const;
   GLuint  textureId(QOpenGLTexture* theWrappedObject) const;
   int  width(QOpenGLTexture* theWrappedObject) const;
   QOpenGLTexture::WrapMode  wrapMode(QOpenGLTexture* theWrappedObject, QOpenGLTexture::CoordinateDirection  direction) const;
};





class PythonQtShell_QOpenGLTimeMonitor : public QOpenGLTimeMonitor
{
public:
    PythonQtShell_QOpenGLTimeMonitor(QObject*  parent = 0):QOpenGLTimeMonitor(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLTimeMonitor();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLTimeMonitor : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLTimeMonitor* new_QOpenGLTimeMonitor(QObject*  parent = 0);
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
    PythonQtShell_QOpenGLTimerQuery(QObject*  parent = 0):QOpenGLTimerQuery(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLTimerQuery();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLTimerQuery : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLTimerQuery* new_QOpenGLTimerQuery(QObject*  parent = 0);
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
};





class PythonQtShell_QOpenGLVertexArrayObject : public QOpenGLVertexArrayObject
{
public:
    PythonQtShell_QOpenGLVertexArrayObject(QObject*  parent = 0):QOpenGLVertexArrayObject(parent),_wrapper(NULL) {};

   ~PythonQtShell_QOpenGLVertexArrayObject();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QOpenGLVertexArrayObject : public QObject
{ Q_OBJECT
public:
public slots:
QOpenGLVertexArrayObject* new_QOpenGLVertexArrayObject(QObject*  parent = 0);
void delete_QOpenGLVertexArrayObject(QOpenGLVertexArrayObject* obj) { delete obj; } 
   void bind(QOpenGLVertexArrayObject* theWrappedObject);
   bool  create(QOpenGLVertexArrayObject* theWrappedObject);
   void destroy(QOpenGLVertexArrayObject* theWrappedObject);
   bool  isCreated(QOpenGLVertexArrayObject* theWrappedObject) const;
   GLuint  objectId(QOpenGLVertexArrayObject* theWrappedObject) const;
   void release(QOpenGLVertexArrayObject* theWrappedObject);
};





class PythonQtWrapper_QPageLayout : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode Orientation Unit )
enum Mode{
  StandardMode = QPageLayout::StandardMode,   FullPageMode = QPageLayout::FullPageMode};
enum Orientation{
  Portrait = QPageLayout::Portrait,   Landscape = QPageLayout::Landscape};
enum Unit{
  Millimeter = QPageLayout::Millimeter,   Point = QPageLayout::Point,   Inch = QPageLayout::Inch,   Pica = QPageLayout::Pica,   Didot = QPageLayout::Didot,   Cicero = QPageLayout::Cicero};
public slots:
QPageLayout* new_QPageLayout();
QPageLayout* new_QPageLayout(const QPageLayout&  other);
QPageLayout* new_QPageLayout(const QPageSize&  pageSize, QPageLayout::Orientation  orientation, const QMarginsF&  margins, QPageLayout::Unit  units = QPageLayout::Point, const QMarginsF&  minMargins = QMarginsF(0, 0, 0, 0));
void delete_QPageLayout(QPageLayout* obj) { delete obj; } 
   QRectF  fullRect(QPageLayout* theWrappedObject) const;
   QRectF  fullRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  fullRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  fullRectPoints(QPageLayout* theWrappedObject) const;
   bool  isEquivalentTo(QPageLayout* theWrappedObject, const QPageLayout&  other) const;
   bool  isValid(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject) const;
   QMarginsF  margins(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QMargins  marginsPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QMargins  marginsPoints(QPageLayout* theWrappedObject) const;
   QMarginsF  maximumMargins(QPageLayout* theWrappedObject) const;
   QMarginsF  minimumMargins(QPageLayout* theWrappedObject) const;
   QPageLayout::Mode  mode(QPageLayout* theWrappedObject) const;
   QPageLayout*  operator_assign(QPageLayout* theWrappedObject, const QPageLayout&  other);
   bool  __eq__(QPageLayout* theWrappedObject, const QPageLayout&  rhs);
   QPageLayout::Orientation  orientation(QPageLayout* theWrappedObject) const;
   QPageSize  pageSize(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject) const;
   QRectF  paintRect(QPageLayout* theWrappedObject, QPageLayout::Unit  units) const;
   QRect  paintRectPixels(QPageLayout* theWrappedObject, int  resolution) const;
   QRect  paintRectPoints(QPageLayout* theWrappedObject) const;
   bool  setBottomMargin(QPageLayout* theWrappedObject, qreal  bottomMargin);
   bool  setLeftMargin(QPageLayout* theWrappedObject, qreal  leftMargin);
   bool  setMargins(QPageLayout* theWrappedObject, const QMarginsF&  margins);
   void setMinimumMargins(QPageLayout* theWrappedObject, const QMarginsF&  minMargins);
   void setMode(QPageLayout* theWrappedObject, QPageLayout::Mode  mode);
   void setOrientation(QPageLayout* theWrappedObject, QPageLayout::Orientation  orientation);
   void setPageSize(QPageLayout* theWrappedObject, const QPageSize&  pageSize, const QMarginsF&  minMargins = QMarginsF(0, 0, 0, 0));
   bool  setRightMargin(QPageLayout* theWrappedObject, qreal  rightMargin);
   bool  setTopMargin(QPageLayout* theWrappedObject, qreal  topMargin);
   void setUnits(QPageLayout* theWrappedObject, QPageLayout::Unit  units);
   void swap(QPageLayout* theWrappedObject, QPageLayout&  other);
   QPageLayout::Unit  units(QPageLayout* theWrappedObject) const;
    QString py_toString(QPageLayout*);
};





class PythonQtShell_QPageSetupDialog : public QPageSetupDialog
{
public:
    PythonQtShell_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0):QPageSetupDialog(printer, parent),_wrapper(NULL) {};
    PythonQtShell_QPageSetupDialog(QWidget*  parent = 0):QPageSetupDialog(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPageSetupDialog();

virtual void accept();
virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
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
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual int  exec();
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
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual void open();
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline void promoted_done(int  result) { QPageSetupDialog::done(result); }
inline int  promoted_exec() { return QPageSetupDialog::exec(); }
inline void promoted_open() { QPageSetupDialog::open(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = 0);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void done(QPageSetupDialog* theWrappedObject, int  result);
   int  exec(QPageSetupDialog* theWrappedObject);
   void open(QPageSetupDialog* theWrappedObject);
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPrinter*  printer(QPageSetupDialog* theWrappedObject);
};





class PythonQtWrapper_QPageSize : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PageSizeId SizeMatchPolicy Unit )
enum PageSizeId{
  A4 = QPageSize::A4,   B5 = QPageSize::B5,   Letter = QPageSize::Letter,   Legal = QPageSize::Legal,   Executive = QPageSize::Executive,   A0 = QPageSize::A0,   A1 = QPageSize::A1,   A2 = QPageSize::A2,   A3 = QPageSize::A3,   A5 = QPageSize::A5,   A6 = QPageSize::A6,   A7 = QPageSize::A7,   A8 = QPageSize::A8,   A9 = QPageSize::A9,   B0 = QPageSize::B0,   B1 = QPageSize::B1,   B10 = QPageSize::B10,   B2 = QPageSize::B2,   B3 = QPageSize::B3,   B4 = QPageSize::B4,   B6 = QPageSize::B6,   B7 = QPageSize::B7,   B8 = QPageSize::B8,   B9 = QPageSize::B9,   C5E = QPageSize::C5E,   Comm10E = QPageSize::Comm10E,   DLE = QPageSize::DLE,   Folio = QPageSize::Folio,   Ledger = QPageSize::Ledger,   Tabloid = QPageSize::Tabloid,   Custom = QPageSize::Custom,   A10 = QPageSize::A10,   A3Extra = QPageSize::A3Extra,   A4Extra = QPageSize::A4Extra,   A4Plus = QPageSize::A4Plus,   A4Small = QPageSize::A4Small,   A5Extra = QPageSize::A5Extra,   B5Extra = QPageSize::B5Extra,   JisB0 = QPageSize::JisB0,   JisB1 = QPageSize::JisB1,   JisB2 = QPageSize::JisB2,   JisB3 = QPageSize::JisB3,   JisB4 = QPageSize::JisB4,   JisB5 = QPageSize::JisB5,   JisB6 = QPageSize::JisB6,   JisB7 = QPageSize::JisB7,   JisB8 = QPageSize::JisB8,   JisB9 = QPageSize::JisB9,   JisB10 = QPageSize::JisB10,   AnsiC = QPageSize::AnsiC,   AnsiD = QPageSize::AnsiD,   AnsiE = QPageSize::AnsiE,   LegalExtra = QPageSize::LegalExtra,   LetterExtra = QPageSize::LetterExtra,   LetterPlus = QPageSize::LetterPlus,   LetterSmall = QPageSize::LetterSmall,   TabloidExtra = QPageSize::TabloidExtra,   ArchA = QPageSize::ArchA,   ArchB = QPageSize::ArchB,   ArchC = QPageSize::ArchC,   ArchD = QPageSize::ArchD,   ArchE = QPageSize::ArchE,   Imperial7x9 = QPageSize::Imperial7x9,   Imperial8x10 = QPageSize::Imperial8x10,   Imperial9x11 = QPageSize::Imperial9x11,   Imperial9x12 = QPageSize::Imperial9x12,   Imperial10x11 = QPageSize::Imperial10x11,   Imperial10x13 = QPageSize::Imperial10x13,   Imperial10x14 = QPageSize::Imperial10x14,   Imperial12x11 = QPageSize::Imperial12x11,   Imperial15x11 = QPageSize::Imperial15x11,   ExecutiveStandard = QPageSize::ExecutiveStandard,   Note = QPageSize::Note,   Quarto = QPageSize::Quarto,   Statement = QPageSize::Statement,   SuperA = QPageSize::SuperA,   SuperB = QPageSize::SuperB,   Postcard = QPageSize::Postcard,   DoublePostcard = QPageSize::DoublePostcard,   Prc16K = QPageSize::Prc16K,   Prc32K = QPageSize::Prc32K,   Prc32KBig = QPageSize::Prc32KBig,   FanFoldUS = QPageSize::FanFoldUS,   FanFoldGerman = QPageSize::FanFoldGerman,   FanFoldGermanLegal = QPageSize::FanFoldGermanLegal,   EnvelopeB4 = QPageSize::EnvelopeB4,   EnvelopeB5 = QPageSize::EnvelopeB5,   EnvelopeB6 = QPageSize::EnvelopeB6,   EnvelopeC0 = QPageSize::EnvelopeC0,   EnvelopeC1 = QPageSize::EnvelopeC1,   EnvelopeC2 = QPageSize::EnvelopeC2,   EnvelopeC3 = QPageSize::EnvelopeC3,   EnvelopeC4 = QPageSize::EnvelopeC4,   EnvelopeC6 = QPageSize::EnvelopeC6,   EnvelopeC65 = QPageSize::EnvelopeC65,   EnvelopeC7 = QPageSize::EnvelopeC7,   Envelope9 = QPageSize::Envelope9,   Envelope11 = QPageSize::Envelope11,   Envelope12 = QPageSize::Envelope12,   Envelope14 = QPageSize::Envelope14,   EnvelopeMonarch = QPageSize::EnvelopeMonarch,   EnvelopePersonal = QPageSize::EnvelopePersonal,   EnvelopeChou3 = QPageSize::EnvelopeChou3,   EnvelopeChou4 = QPageSize::EnvelopeChou4,   EnvelopeInvite = QPageSize::EnvelopeInvite,   EnvelopeItalian = QPageSize::EnvelopeItalian,   EnvelopeKaku2 = QPageSize::EnvelopeKaku2,   EnvelopeKaku3 = QPageSize::EnvelopeKaku3,   EnvelopePrc1 = QPageSize::EnvelopePrc1,   EnvelopePrc2 = QPageSize::EnvelopePrc2,   EnvelopePrc3 = QPageSize::EnvelopePrc3,   EnvelopePrc4 = QPageSize::EnvelopePrc4,   EnvelopePrc5 = QPageSize::EnvelopePrc5,   EnvelopePrc6 = QPageSize::EnvelopePrc6,   EnvelopePrc7 = QPageSize::EnvelopePrc7,   EnvelopePrc8 = QPageSize::EnvelopePrc8,   EnvelopePrc9 = QPageSize::EnvelopePrc9,   EnvelopePrc10 = QPageSize::EnvelopePrc10,   EnvelopeYou4 = QPageSize::EnvelopeYou4,   LastPageSize = QPageSize::LastPageSize,   NPageSize = QPageSize::NPageSize,   NPaperSize = QPageSize::NPaperSize,   AnsiA = QPageSize::AnsiA,   AnsiB = QPageSize::AnsiB,   EnvelopeC5 = QPageSize::EnvelopeC5,   EnvelopeDL = QPageSize::EnvelopeDL,   Envelope10 = QPageSize::Envelope10};
enum SizeMatchPolicy{
  FuzzyMatch = QPageSize::FuzzyMatch,   FuzzyOrientationMatch = QPageSize::FuzzyOrientationMatch,   ExactMatch = QPageSize::ExactMatch};
enum Unit{
  Millimeter = QPageSize::Millimeter,   Point = QPageSize::Point,   Inch = QPageSize::Inch,   Pica = QPageSize::Pica,   Didot = QPageSize::Didot,   Cicero = QPageSize::Cicero};
public slots:
QPageSize* new_QPageSize();
QPageSize* new_QPageSize(QPageSize::PageSizeId  pageSizeId);
QPageSize* new_QPageSize(const QPageSize&  other);
QPageSize* new_QPageSize(const QSize&  pointSize, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
QPageSize* new_QPageSize(const QSizeF&  size, QPageSize::Unit  units, const QString&  name = QString(), QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
void delete_QPageSize(QPageSize* obj) { delete obj; } 
   QSizeF  definitionSize(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_definitionSize(QPageSize::PageSizeId  pageSizeId);
   QPageSize::Unit  definitionUnits(QPageSize* theWrappedObject) const;
   QPageSize::Unit  static_QPageSize_definitionUnits(QPageSize::PageSizeId  pageSizeId);
   QPageSize::PageSizeId  id(QPageSize* theWrappedObject) const;
   QPageSize::PageSizeId  static_QPageSize_id(const QSize&  pointSize, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(const QSizeF&  size, QPageSize::Unit  units, QPageSize::SizeMatchPolicy  matchPolicy = QPageSize::FuzzyMatch);
   QPageSize::PageSizeId  static_QPageSize_id(int  windowsId);
   bool  isEquivalentTo(QPageSize* theWrappedObject, const QPageSize&  other) const;
   bool  isValid(QPageSize* theWrappedObject) const;
   QString  key(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_key(QPageSize::PageSizeId  pageSizeId);
   QString  name(QPageSize* theWrappedObject) const;
   QString  static_QPageSize_name(QPageSize::PageSizeId  pageSizeId);
   QPageSize*  operator_assign(QPageSize* theWrappedObject, const QPageSize&  other);
   bool  __eq__(QPageSize* theWrappedObject, const QPageSize&  rhs);
   QRectF  rect(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QRect  rectPixels(QPageSize* theWrappedObject, int  resolution) const;
   QRect  rectPoints(QPageSize* theWrappedObject) const;
   QSizeF  static_QPageSize_size(QPageSize::PageSizeId  pageSizeId, QPageSize::Unit  units);
   QSizeF  size(QPageSize* theWrappedObject, QPageSize::Unit  units) const;
   QSize  static_QPageSize_sizePixels(QPageSize::PageSizeId  pageSizeId, int  resolution);
   QSize  sizePixels(QPageSize* theWrappedObject, int  resolution) const;
   QSize  sizePoints(QPageSize* theWrappedObject) const;
   QSize  static_QPageSize_sizePoints(QPageSize::PageSizeId  pageSizeId);
   void swap(QPageSize* theWrappedObject, QPageSize&  other);
   int  windowsId(QPageSize* theWrappedObject) const;
   int  static_QPageSize_windowsId(QPageSize::PageSizeId  pageSizeId);
    QString py_toString(QPageSize*);
};


