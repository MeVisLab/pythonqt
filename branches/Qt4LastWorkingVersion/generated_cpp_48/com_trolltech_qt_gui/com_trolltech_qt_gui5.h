#include <PythonQt.h>
#include <QColor>
#include <QImage>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVarLengthArray>
#include <QVariant>
#include <QWidget>
#include <qabstractanimation.h>
#include <qabstractbutton.h>
#include <qabstractstate.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qdialog.h>
#include <qdockwidget.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlistwidget.h>
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
#include <qmotifstyle.h>
#include <qmouseeventtransition.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpagesetupdialog.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpictureformatplugin.h>
#include <qpixmap.h>
#include <qpixmapcache.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qprinter.h>
#include <qpushbutton.h>
#include <qquaternion.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstatictext.h>
#include <qstatusbar.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextoption.h>
#include <qtoolbar.h>
#include <qtransform.h>
#include <qvector.h>
#include <qvector3d.h>
#include <qvector4d.h>
#include <qwidget.h>



class PythonQtShell_QListWidgetItem : public QListWidgetItem
{
public:
    PythonQtShell_QListWidgetItem(QListWidget*  view = 0, int  type = Type):QListWidgetItem(view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(icon, text, view, type),_wrapper(NULL) {};
    PythonQtShell_QListWidgetItem(const QString&  text, QListWidget*  view = 0, int  type = Type):QListWidgetItem(text, view, type),_wrapper(NULL) {};

   ~PythonQtShell_QListWidgetItem();

virtual QListWidgetItem*  clone() const;
virtual QVariant  data(int  role) const;
virtual bool  __lt__(const QListWidgetItem&  other) const;
virtual void read(QDataStream&  in);
virtual void setBackgroundColor(const QColor&  color);
virtual void setData(int  role, const QVariant&  value);
virtual void write(QDataStream&  out) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QListWidgetItem : public QListWidgetItem
{ public:
inline QListWidgetItem*  promoted_clone() const { return QListWidgetItem::clone(); }
inline QVariant  promoted_data(int  role) const { return QListWidgetItem::data(role); }
inline void promoted_setData(int  role, const QVariant&  value) { QListWidgetItem::setData(role, value); }
};

class PythonQtWrapper_QListWidgetItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ItemType )
enum ItemType{
  Type = QListWidgetItem::Type,   UserType = QListWidgetItem::UserType};
public slots:
QListWidgetItem* new_QListWidgetItem(PythonQtNewOwnerOfThis<QListWidget* >  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QIcon&  icon, const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view = 0, int  type = Type);
QListWidgetItem* new_QListWidgetItem(const QString&  text, PythonQtNewOwnerOfThis<QListWidget* >  view = 0, int  type = Type);
void delete_QListWidgetItem(QListWidgetItem* obj) { delete obj; } 
   QBrush  background(QListWidgetItem* theWrappedObject) const;
   Qt::CheckState  checkState(QListWidgetItem* theWrappedObject) const;
   QListWidgetItem*  clone(QListWidgetItem* theWrappedObject) const;
   QVariant  data(QListWidgetItem* theWrappedObject, int  role) const;
   Qt::ItemFlags  flags(QListWidgetItem* theWrappedObject) const;
   QFont  font(QListWidgetItem* theWrappedObject) const;
   QBrush  foreground(QListWidgetItem* theWrappedObject) const;
   QIcon  icon(QListWidgetItem* theWrappedObject) const;
   bool  isHidden(QListWidgetItem* theWrappedObject) const;
   bool  isSelected(QListWidgetItem* theWrappedObject) const;
   QListWidget*  listWidget(QListWidgetItem* theWrappedObject) const;
   void writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out);
   void readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in);
   void setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state);
   void setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value);
   void setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags);
   void setFont(QListWidgetItem* theWrappedObject, const QFont&  font);
   void setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush);
   void setHidden(QListWidgetItem* theWrappedObject, bool  hide);
   void setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon);
   void setSelected(QListWidgetItem* theWrappedObject, bool  select);
   void setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size);
   void setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip);
   void setText(QListWidgetItem* theWrappedObject, const QString&  text);
   void setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment);
   void setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip);
   void setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis);
   QSize  sizeHint(QListWidgetItem* theWrappedObject) const;
   QString  statusTip(QListWidgetItem* theWrappedObject) const;
   QString  text(QListWidgetItem* theWrappedObject) const;
   int  textAlignment(QListWidgetItem* theWrappedObject) const;
   QString  toolTip(QListWidgetItem* theWrappedObject) const;
   int  type(QListWidgetItem* theWrappedObject) const;
   QString  whatsThis(QListWidgetItem* theWrappedObject) const;
};





class PythonQtShell_QMainWindow : public QMainWindow
{
public:
    PythonQtShell_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QMainWindow(parent, flags),_wrapper(NULL) {};

   ~PythonQtShell_QMainWindow();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual QMenu*  createPopupMenu();
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
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
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMainWindow : public QMainWindow
{ public:
inline void promoted_contextMenuEvent(QContextMenuEvent*  event) { QMainWindow::contextMenuEvent(event); }
inline QMenu*  promoted_createPopupMenu() { return QMainWindow::createPopupMenu(); }
inline bool  promoted_event(QEvent*  event) { return QMainWindow::event(event); }
};

class PythonQtWrapper_QMainWindow : public QObject
{ Q_OBJECT
public:
public slots:
QMainWindow* new_QMainWindow(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QMainWindow(QMainWindow* obj) { delete obj; } 
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget);
   void addDockWidget(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   void addToolBar(QMainWindow* theWrappedObject, QToolBar*  toolbar);
   void addToolBar(QMainWindow* theWrappedObject, Qt::ToolBarArea  area, QToolBar*  toolbar);
   QToolBar*  addToolBar(QMainWindow* theWrappedObject, const QString&  title);
   void addToolBarBreak(QMainWindow* theWrappedObject, Qt::ToolBarArea  area = Qt::TopToolBarArea);
   QWidget*  centralWidget(QMainWindow* theWrappedObject) const;
   void contextMenuEvent(QMainWindow* theWrappedObject, QContextMenuEvent*  event);
   Qt::DockWidgetArea  corner(QMainWindow* theWrappedObject, Qt::Corner  corner) const;
   QMenu*  createPopupMenu(QMainWindow* theWrappedObject);
   QMainWindow::DockOptions  dockOptions(QMainWindow* theWrappedObject) const;
   Qt::DockWidgetArea  dockWidgetArea(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   bool  documentMode(QMainWindow* theWrappedObject) const;
   bool  event(QMainWindow* theWrappedObject, QEvent*  event);
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
   void setUnifiedTitleAndToolBarOnMac(QMainWindow* theWrappedObject, bool  set);
   void splitDockWidget(QMainWindow* theWrappedObject, QDockWidget*  after, QDockWidget*  dockwidget, Qt::Orientation  orientation);
   QStatusBar*  statusBar(QMainWindow* theWrappedObject) const;
   QTabWidget::TabPosition  tabPosition(QMainWindow* theWrappedObject, Qt::DockWidgetArea  area) const;
   QTabWidget::TabShape  tabShape(QMainWindow* theWrappedObject) const;
   QList<QDockWidget* >  tabifiedDockWidgets(QMainWindow* theWrappedObject, QDockWidget*  dockwidget) const;
   void tabifyDockWidget(QMainWindow* theWrappedObject, QDockWidget*  first, QDockWidget*  second);
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
   bool  __eq__(QMargins* theWrappedObject, const QMargins&  m2);
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
QMatrix4x4* new_QMatrix4x4(const qreal*  values);
QMatrix4x4* new_QMatrix4x4(const qreal*  values, int  cols, int  rows);
QMatrix4x4* new_QMatrix4x4(qreal  m11, qreal  m12, qreal  m13, qreal  m14, qreal  m21, qreal  m22, qreal  m23, qreal  m24, qreal  m31, qreal  m32, qreal  m33, qreal  m34, qreal  m41, qreal  m42, qreal  m43, qreal  m44);
QMatrix4x4* new_QMatrix4x4(const QMatrix4x4& other) {
QMatrix4x4* a = new QMatrix4x4();
*((QMatrix4x4*)a) = other;
return a; }
void delete_QMatrix4x4(QMatrix4x4* obj) { delete obj; } 
   QVector4D  column(QMatrix4x4* theWrappedObject, int  index) const;
   const qreal*  constData(QMatrix4x4* theWrappedObject) const;
   void copyDataTo(QMatrix4x4* theWrappedObject, qreal*  values) const;
   qreal*  data(QMatrix4x4* theWrappedObject);
   qreal  determinant(QMatrix4x4* theWrappedObject) const;
   void fill(QMatrix4x4* theWrappedObject, qreal  value);
   void flipCoordinates(QMatrix4x4* theWrappedObject);
   void frustum(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
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
   qreal*  operator_cast_(QMatrix4x4* theWrappedObject, int  row, int  column);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QPoint  __mul__(QMatrix4x4* theWrappedObject, const QPoint&  point);
   QPointF  __mul__(QMatrix4x4* theWrappedObject, const QPointF&  point);
   QVector3D  __mul__(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   QVector4D  __mul__(QMatrix4x4* theWrappedObject, const QVector4D&  vector);
   QMatrix4x4  __mul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4*  __imul__(QMatrix4x4* theWrappedObject, qreal  factor);
   QMatrix4x4  __add__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __iadd__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __sub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  m2);
   QMatrix4x4*  __isub__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other);
   QMatrix4x4  __div__(QMatrix4x4* theWrappedObject, qreal  divisor);
   QMatrix4x4*  __idiv__(QMatrix4x4* theWrappedObject, qreal  divisor);
   void writeTo(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QMatrix4x4* theWrappedObject, const QMatrix4x4&  other) const;
   void readFrom(QMatrix4x4* theWrappedObject, QDataStream&  arg__1);
   void optimize(QMatrix4x4* theWrappedObject);
   void ortho(QMatrix4x4* theWrappedObject, const QRect&  rect);
   void ortho(QMatrix4x4* theWrappedObject, const QRectF&  rect);
   void ortho(QMatrix4x4* theWrappedObject, qreal  left, qreal  right, qreal  bottom, qreal  top, qreal  nearPlane, qreal  farPlane);
   void perspective(QMatrix4x4* theWrappedObject, qreal  angle, qreal  aspect, qreal  nearPlane, qreal  farPlane);
   void rotate(QMatrix4x4* theWrappedObject, const QQuaternion&  quaternion);
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, const QVector3D&  vector);
   void rotate(QMatrix4x4* theWrappedObject, qreal  angle, qreal  x, qreal  y, qreal  z = 0.0f);
   QVector4D  row(QMatrix4x4* theWrappedObject, int  index) const;
   void scale(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void scale(QMatrix4x4* theWrappedObject, qreal  factor);
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void scale(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
   void setColumn(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setRow(QMatrix4x4* theWrappedObject, int  index, const QVector4D&  value);
   void setToIdentity(QMatrix4x4* theWrappedObject);
   QMatrix  toAffine(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject) const;
   QTransform  toTransform(QMatrix4x4* theWrappedObject, qreal  distanceToPlane) const;
   void translate(QMatrix4x4* theWrappedObject, const QVector3D&  vector);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y);
   void translate(QMatrix4x4* theWrappedObject, qreal  x, qreal  y, qreal  z);
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
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void showEvent(QShowEvent*  showEvent);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  timerEvent);
virtual bool  viewportEvent(QEvent*  event);
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
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  hideEvent);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  keyEvent);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  leaveEvent);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  mouseEvent);
virtual void mouseMoveEvent(QMouseEvent*  mouseEvent);
virtual void mousePressEvent(QMouseEvent*  mouseEvent);
virtual void mouseReleaseEvent(QMouseEvent*  mouseEvent);
virtual void moveEvent(QMoveEvent*  moveEvent);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  paintEvent);
virtual void resizeEvent(QResizeEvent*  resizeEvent);
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
virtual void resizeEvent(QResizeEvent*  arg__1);
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
   QAction*  addSeparator(QMenu* theWrappedObject);
   void changeEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   void clear(QMenu* theWrappedObject);
   int  columnCount(QMenu* theWrappedObject) const;
   QAction*  defaultAction(QMenu* theWrappedObject) const;
   void enterEvent(QMenu* theWrappedObject, QEvent*  arg__1);
   bool  event(QMenu* theWrappedObject, QEvent*  arg__1);
   QAction*  exec(QMenu* theWrappedObject);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at = 0);
   QAction*  static_QMenu_exec(QList<QAction* >  actions, const QPoint&  pos, QAction*  at, QWidget*  parent);
   QAction*  exec(QMenu* theWrappedObject, const QPoint&  pos, QAction*  at = 0);
   bool  focusNextPrevChild(QMenu* theWrappedObject, bool  next);
   void hideEvent(QMenu* theWrappedObject, QHideEvent*  arg__1);
   void hideTearOffMenu(QMenu* theWrappedObject);
   QIcon  icon(QMenu* theWrappedObject) const;
   void initStyleOption(QMenu* theWrappedObject, QStyleOptionMenuItem*  option, const QAction*  action) const;
   QAction*  insertMenu(QMenu* theWrappedObject, QAction*  before, QMenu*  menu);
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
   QSize  sizeHint(QMenu* theWrappedObject) const;
   void timerEvent(QMenu* theWrappedObject, QTimerEvent*  arg__1);
   QString  title(QMenu* theWrappedObject) const;
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
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void setVisible(bool  visible);
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
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  event);
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
   QMessageBox::StandardButton  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_question(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
   void removeButton(QMessageBox* theWrappedObject, QAbstractButton*  button);
   void resizeEvent(QMessageBox* theWrappedObject, QResizeEvent*  event);
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
   void showEvent(QMessageBox* theWrappedObject, QShowEvent*  event);
   QSize  sizeHint(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  standardButton(QMessageBox* theWrappedObject, QAbstractButton*  button) const;
   QMessageBox::StandardButtons  standardButtons(QMessageBox* theWrappedObject) const;
   QString  text(QMessageBox* theWrappedObject) const;
   Qt::TextFormat  textFormat(QMessageBox* theWrappedObject) const;
   QMessageBox::StandardButton  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButtons  buttons = QMessageBox::Ok, QMessageBox::StandardButton  defaultButton = QMessageBox::NoButton);
   int  static_QMessageBox_warning(QWidget*  parent, const QString&  title, const QString&  text, QMessageBox::StandardButton  button0, QMessageBox::StandardButton  button1);
};





class PythonQtShell_QMotifStyle : public QMotifStyle
{
public:
    PythonQtShell_QMotifStyle(bool  useHighlightCols = false):QMotifStyle(useHighlightCols),_wrapper(NULL) {};

   ~PythonQtShell_QMotifStyle();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual void polish(QApplication*  arg__1);
virtual void polish(QPalette&  arg__1);
virtual void polish(QWidget*  arg__1);
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPalette  standardPalette() const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void timerEvent(QTimerEvent*  event);
virtual void unpolish(QApplication*  arg__1);
virtual void unpolish(QWidget*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMotifStyle : public QMotifStyle
{ public:
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawControl(element, opt, p, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QMotifStyle::drawPrimitive(pe, opt, p, w); }
inline bool  promoted_event(QEvent*  arg__1) { return QMotifStyle::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QMotifStyle::eventFilter(o, e); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QMotifStyle::pixelMetric(metric, option, widget); }
inline void promoted_polish(QApplication*  arg__1) { QMotifStyle::polish(arg__1); }
inline void promoted_polish(QPalette&  arg__1) { QMotifStyle::polish(arg__1); }
inline void promoted_polish(QWidget*  arg__1) { QMotifStyle::polish(arg__1); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QMotifStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QIcon  promoted_standardIconImplementation(QStyle::StandardPixmap  standardIcon, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const { return QMotifStyle::standardIconImplementation(standardIcon, opt, widget); }
inline QPalette  promoted_standardPalette() const { return QMotifStyle::standardPalette(); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QMotifStyle::styleHint(hint, opt, widget, returnData); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const { return QMotifStyle::subControlRect(cc, opt, sc, widget); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QMotifStyle::subElementRect(r, opt, widget); }
inline void promoted_timerEvent(QTimerEvent*  event) { QMotifStyle::timerEvent(event); }
inline void promoted_unpolish(QApplication*  arg__1) { QMotifStyle::unpolish(arg__1); }
inline void promoted_unpolish(QWidget*  arg__1) { QMotifStyle::unpolish(arg__1); }
};

class PythonQtWrapper_QMotifStyle : public QObject
{ Q_OBJECT
public:
public slots:
QMotifStyle* new_QMotifStyle(bool  useHighlightCols = false);
void delete_QMotifStyle(QMotifStyle* obj) { delete obj; } 
   void drawComplexControl(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawControl(QMotifStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void drawPrimitive(QMotifStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   bool  event(QMotifStyle* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QMotifStyle* theWrappedObject, QObject*  o, QEvent*  e);
   int  pixelMetric(QMotifStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   void polish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void polish(QMotifStyle* theWrappedObject, QPalette&  arg__1);
   void polish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   void setUseHighlightColors(QMotifStyle* theWrappedObject, bool  arg__1);
   QSize  sizeFromContents(QMotifStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   QPalette  standardPalette(QMotifStyle* theWrappedObject) const;
   int  styleHint(QMotifStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  opt = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QRect  subControlRect(QMotifStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget = 0) const;
   QRect  subElementRect(QMotifStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
   void timerEvent(QMotifStyle* theWrappedObject, QTimerEvent*  event);
   void unpolish(QMotifStyle* theWrappedObject, QApplication*  arg__1);
   void unpolish(QMotifStyle* theWrappedObject, QWidget*  arg__1);
   bool  useHighlightColors(QMotifStyle* theWrappedObject) const;
};





class PythonQtShell_QMouseEvent : public QMouseEvent
{
public:
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, button, buttons, modifiers),_wrapper(NULL) {};
    PythonQtShell_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers):QMouseEvent(type, pos, globalPos, button, buttons, modifiers),_wrapper(NULL) {};

   ~PythonQtShell_QMouseEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMouseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
QMouseEvent* new_QMouseEvent(QEvent::Type  type, const QPoint&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QMouseEvent(QMouseEvent* obj) { delete obj; } 
   Qt::MouseButton  button(QMouseEvent* theWrappedObject) const;
   Qt::MouseButtons  buttons(QMouseEvent* theWrappedObject) const;
   QMouseEvent*  static_QMouseEvent_createExtendedMouseEvent(QEvent::Type  type, const QPointF&  pos, const QPoint&  globalPos, Qt::MouseButton  button, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
   const QPoint*  globalPos(QMouseEvent* theWrappedObject) const;
   int  globalX(QMouseEvent* theWrappedObject) const;
   int  globalY(QMouseEvent* theWrappedObject) const;
   bool  hasExtendedInfo(QMouseEvent* theWrappedObject) const;
   const QPoint*  pos(QMouseEvent* theWrappedObject) const;
   QPointF  posF(QMouseEvent* theWrappedObject) const;
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
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPageSetupDialog : public QPageSetupDialog
{ public:
inline int  promoted_exec() { return QPageSetupDialog::exec(); }
};

class PythonQtWrapper_QPageSetupDialog : public QObject
{ Q_OBJECT
public:
public slots:
QPageSetupDialog* new_QPageSetupDialog(QPrinter*  printer, QWidget*  parent = 0);
QPageSetupDialog* new_QPageSetupDialog(QWidget*  parent = 0);
void delete_QPageSetupDialog(QPageSetupDialog* obj) { delete obj; } 
   void addEnabledOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option);
   QPageSetupDialog::PageSetupDialogOptions  enabledOptions(QPageSetupDialog* theWrappedObject) const;
   int  exec(QPageSetupDialog* theWrappedObject);
   bool  isOptionEnabled(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
   void open(QPageSetupDialog* theWrappedObject);
   void open(QPageSetupDialog* theWrappedObject, QObject*  receiver, const char*  member);
   QPageSetupDialog::PageSetupDialogOptions  options(QPageSetupDialog* theWrappedObject) const;
   void setEnabledOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
   void setOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option, bool  on = true);
   void setOptions(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOptions  options);
   bool  testOption(QPageSetupDialog* theWrappedObject, QPageSetupDialog::PageSetupDialogOption  option) const;
};





class PythonQtShell_QPaintDevice : public QPaintDevice
{
public:
    PythonQtShell_QPaintDevice():QPaintDevice(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintDevice();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintDevice : public QPaintDevice
{ public:
inline int  promoted_devType() const { return QPaintDevice::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QPaintDevice::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
};

class PythonQtWrapper_QPaintDevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PaintDeviceMetric )
enum PaintDeviceMetric{
  PdmWidth = QPaintDevice::PdmWidth,   PdmHeight = QPaintDevice::PdmHeight,   PdmWidthMM = QPaintDevice::PdmWidthMM,   PdmHeightMM = QPaintDevice::PdmHeightMM,   PdmNumColors = QPaintDevice::PdmNumColors,   PdmDepth = QPaintDevice::PdmDepth,   PdmDpiX = QPaintDevice::PdmDpiX,   PdmDpiY = QPaintDevice::PdmDpiY,   PdmPhysicalDpiX = QPaintDevice::PdmPhysicalDpiX,   PdmPhysicalDpiY = QPaintDevice::PdmPhysicalDpiY};
public slots:
QPaintDevice* new_QPaintDevice();
void delete_QPaintDevice(QPaintDevice* obj) { delete obj; } 
   int  colorCount(QPaintDevice* theWrappedObject) const;
   int  depth(QPaintDevice* theWrappedObject) const;
   int  devType(QPaintDevice* theWrappedObject) const;
   int  height(QPaintDevice* theWrappedObject) const;
   int  heightMM(QPaintDevice* theWrappedObject) const;
   int  logicalDpiX(QPaintDevice* theWrappedObject) const;
   int  logicalDpiY(QPaintDevice* theWrappedObject) const;
   int  metric(QPaintDevice* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  numColors(QPaintDevice* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPaintDevice* theWrappedObject) const;
   bool  paintingActive(QPaintDevice* theWrappedObject) const;
   int  physicalDpiX(QPaintDevice* theWrappedObject) const;
   int  physicalDpiY(QPaintDevice* theWrappedObject) const;
   int  width(QPaintDevice* theWrappedObject) const;
   int  widthMM(QPaintDevice* theWrappedObject) const;
};





class PythonQtShell_QPaintEngine : public QPaintEngine
{
public:
    PythonQtShell_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0):QPaintEngine(features),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngine();

virtual bool  begin(QPaintDevice*  pdev);
virtual QPoint  coordinateOffset() const;
virtual void drawEllipse(const QRect&  r);
virtual void drawEllipse(const QRectF&  r);
virtual void drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
virtual void drawLines(const QLine*  lines, int  lineCount);
virtual void drawLines(const QLineF*  lines, int  lineCount);
virtual void drawPath(const QPainterPath&  path);
virtual void drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
virtual void drawPoints(const QPoint*  points, int  pointCount);
virtual void drawPoints(const QPointF*  points, int  pointCount);
virtual void drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
virtual void drawRects(const QRect*  rects, int  rectCount);
virtual void drawRects(const QRectF*  rects, int  rectCount);
virtual void drawTextItem(const QPointF&  p, const QTextItem&  textItem);
virtual void drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
virtual bool  end();
virtual QPaintEngine::Type  type() const;
virtual void updateState(const QPaintEngineState&  state);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPaintEngine : public QPaintEngine
{ public:
inline bool  promoted_begin(QPaintDevice*  pdev) { return this->begin(pdev); }
inline QPoint  promoted_coordinateOffset() const { return QPaintEngine::coordinateOffset(); }
inline void promoted_drawEllipse(const QRect&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawEllipse(const QRectF&  r) { QPaintEngine::drawEllipse(r); }
inline void promoted_drawImage(const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor) { QPaintEngine::drawImage(r, pm, sr, flags); }
inline void promoted_drawLines(const QLine*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawLines(const QLineF*  lines, int  lineCount) { QPaintEngine::drawLines(lines, lineCount); }
inline void promoted_drawPath(const QPainterPath&  path) { QPaintEngine::drawPath(path); }
inline void promoted_drawPixmap(const QRectF&  r, const QPixmap&  pm, const QRectF&  sr) { this->drawPixmap(r, pm, sr); }
inline void promoted_drawPoints(const QPoint*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPoints(const QPointF*  points, int  pointCount) { QPaintEngine::drawPoints(points, pointCount); }
inline void promoted_drawPolygon(const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawPolygon(const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode) { QPaintEngine::drawPolygon(points, pointCount, mode); }
inline void promoted_drawRects(const QRect*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawRects(const QRectF*  rects, int  rectCount) { QPaintEngine::drawRects(rects, rectCount); }
inline void promoted_drawTextItem(const QPointF&  p, const QTextItem&  textItem) { QPaintEngine::drawTextItem(p, textItem); }
inline void promoted_drawTiledPixmap(const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s) { QPaintEngine::drawTiledPixmap(r, pixmap, s); }
inline bool  promoted_end() { return this->end(); }
inline QPaintEngine::Type  promoted_type() const { return this->type(); }
inline void promoted_updateState(const QPaintEngineState&  state) { this->updateState(state); }
};

class PythonQtWrapper_QPaintEngine : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DirtyFlag PaintEngineFeature PolygonDrawMode Type )
Q_FLAGS(DirtyFlags PaintEngineFeatures )
enum DirtyFlag{
  DirtyPen = QPaintEngine::DirtyPen,   DirtyBrush = QPaintEngine::DirtyBrush,   DirtyBrushOrigin = QPaintEngine::DirtyBrushOrigin,   DirtyFont = QPaintEngine::DirtyFont,   DirtyBackground = QPaintEngine::DirtyBackground,   DirtyBackgroundMode = QPaintEngine::DirtyBackgroundMode,   DirtyTransform = QPaintEngine::DirtyTransform,   DirtyClipRegion = QPaintEngine::DirtyClipRegion,   DirtyClipPath = QPaintEngine::DirtyClipPath,   DirtyHints = QPaintEngine::DirtyHints,   DirtyCompositionMode = QPaintEngine::DirtyCompositionMode,   DirtyClipEnabled = QPaintEngine::DirtyClipEnabled,   DirtyOpacity = QPaintEngine::DirtyOpacity,   AllDirty = QPaintEngine::AllDirty};
enum PaintEngineFeature{
  PrimitiveTransform = QPaintEngine::PrimitiveTransform,   PatternTransform = QPaintEngine::PatternTransform,   PixmapTransform = QPaintEngine::PixmapTransform,   PatternBrush = QPaintEngine::PatternBrush,   LinearGradientFill = QPaintEngine::LinearGradientFill,   RadialGradientFill = QPaintEngine::RadialGradientFill,   ConicalGradientFill = QPaintEngine::ConicalGradientFill,   AlphaBlend = QPaintEngine::AlphaBlend,   PorterDuff = QPaintEngine::PorterDuff,   PainterPaths = QPaintEngine::PainterPaths,   Antialiasing = QPaintEngine::Antialiasing,   BrushStroke = QPaintEngine::BrushStroke,   ConstantOpacity = QPaintEngine::ConstantOpacity,   MaskedBrush = QPaintEngine::MaskedBrush,   PerspectiveTransform = QPaintEngine::PerspectiveTransform,   BlendModes = QPaintEngine::BlendModes,   ObjectBoundingModeGradients = QPaintEngine::ObjectBoundingModeGradients,   RasterOpModes = QPaintEngine::RasterOpModes,   PaintOutsidePaintEvent = QPaintEngine::PaintOutsidePaintEvent,   AllFeatures = QPaintEngine::AllFeatures};
enum PolygonDrawMode{
  OddEvenMode = QPaintEngine::OddEvenMode,   WindingMode = QPaintEngine::WindingMode,   ConvexMode = QPaintEngine::ConvexMode,   PolylineMode = QPaintEngine::PolylineMode};
enum Type{
  X11 = QPaintEngine::X11,   Windows = QPaintEngine::Windows,   QuickDraw = QPaintEngine::QuickDraw,   CoreGraphics = QPaintEngine::CoreGraphics,   MacPrinter = QPaintEngine::MacPrinter,   QWindowSystem = QPaintEngine::QWindowSystem,   PostScript = QPaintEngine::PostScript,   OpenGL = QPaintEngine::OpenGL,   Picture = QPaintEngine::Picture,   SVG = QPaintEngine::SVG,   Raster = QPaintEngine::Raster,   Direct3D = QPaintEngine::Direct3D,   Pdf = QPaintEngine::Pdf,   OpenVG = QPaintEngine::OpenVG,   OpenGL2 = QPaintEngine::OpenGL2,   PaintBuffer = QPaintEngine::PaintBuffer,   Blitter = QPaintEngine::Blitter,   User = QPaintEngine::User,   MaxUser = QPaintEngine::MaxUser};
Q_DECLARE_FLAGS(DirtyFlags, DirtyFlag)
Q_DECLARE_FLAGS(PaintEngineFeatures, PaintEngineFeature)
public slots:
QPaintEngine* new_QPaintEngine(QPaintEngine::PaintEngineFeatures  features = 0);
void delete_QPaintEngine(QPaintEngine* obj) { delete obj; } 
   bool  begin(QPaintEngine* theWrappedObject, QPaintDevice*  pdev);
   void clearDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPoint  coordinateOffset(QPaintEngine* theWrappedObject) const;
   void drawEllipse(QPaintEngine* theWrappedObject, const QRect&  r);
   void drawEllipse(QPaintEngine* theWrappedObject, const QRectF&  r);
   void drawImage(QPaintEngine* theWrappedObject, const QRectF&  r, const QImage&  pm, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLines(QPaintEngine* theWrappedObject, const QLine*  lines, int  lineCount);
   void drawLines(QPaintEngine* theWrappedObject, const QLineF*  lines, int  lineCount);
   void drawPath(QPaintEngine* theWrappedObject, const QPainterPath&  path);
   void drawPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pm, const QRectF&  sr);
   void drawPoints(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount);
   void drawPoints(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPoint*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawPolygon(QPaintEngine* theWrappedObject, const QPointF*  points, int  pointCount, QPaintEngine::PolygonDrawMode  mode);
   void drawRects(QPaintEngine* theWrappedObject, const QRect*  rects, int  rectCount);
   void drawRects(QPaintEngine* theWrappedObject, const QRectF*  rects, int  rectCount);
   void drawTextItem(QPaintEngine* theWrappedObject, const QPointF&  p, const QTextItem&  textItem);
   void drawTiledPixmap(QPaintEngine* theWrappedObject, const QRectF&  r, const QPixmap&  pixmap, const QPointF&  s);
   bool  end(QPaintEngine* theWrappedObject);
   bool  hasFeature(QPaintEngine* theWrappedObject, QPaintEngine::PaintEngineFeatures  feature) const;
   bool  isActive(QPaintEngine* theWrappedObject) const;
   bool  isExtended(QPaintEngine* theWrappedObject) const;
   QPaintDevice*  paintDevice(QPaintEngine* theWrappedObject) const;
   QPainter*  painter(QPaintEngine* theWrappedObject) const;
   void setActive(QPaintEngine* theWrappedObject, bool  newState);
   void setDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   void setSystemClip(QPaintEngine* theWrappedObject, const QRegion&  baseClip);
   void setSystemRect(QPaintEngine* theWrappedObject, const QRect&  rect);
   void syncState(QPaintEngine* theWrappedObject);
   QRegion  systemClip(QPaintEngine* theWrappedObject) const;
   QRect  systemRect(QPaintEngine* theWrappedObject) const;
   bool  testDirty(QPaintEngine* theWrappedObject, QPaintEngine::DirtyFlags  df);
   QPaintEngine::Type  type(QPaintEngine* theWrappedObject) const;
   void updateState(QPaintEngine* theWrappedObject, const QPaintEngineState&  state);
};





class PythonQtShell_QPaintEngineState : public QPaintEngineState
{
public:
    PythonQtShell_QPaintEngineState():QPaintEngineState(),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEngineState();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEngineState : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEngineState* new_QPaintEngineState();
void delete_QPaintEngineState(QPaintEngineState* obj) { delete obj; } 
   QBrush  backgroundBrush(QPaintEngineState* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPaintEngineState* theWrappedObject) const;
   QBrush  brush(QPaintEngineState* theWrappedObject) const;
   bool  brushNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPointF  brushOrigin(QPaintEngineState* theWrappedObject) const;
   Qt::ClipOperation  clipOperation(QPaintEngineState* theWrappedObject) const;
   QPainterPath  clipPath(QPaintEngineState* theWrappedObject) const;
   QRegion  clipRegion(QPaintEngineState* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPaintEngineState* theWrappedObject) const;
   QFont  font(QPaintEngineState* theWrappedObject) const;
   bool  isClipEnabled(QPaintEngineState* theWrappedObject) const;
   QMatrix  matrix(QPaintEngineState* theWrappedObject) const;
   qreal  opacity(QPaintEngineState* theWrappedObject) const;
   QPainter*  painter(QPaintEngineState* theWrappedObject) const;
   QPen  pen(QPaintEngineState* theWrappedObject) const;
   bool  penNeedsResolving(QPaintEngineState* theWrappedObject) const;
   QPainter::RenderHints  renderHints(QPaintEngineState* theWrappedObject) const;
   QPaintEngine::DirtyFlags  state(QPaintEngineState* theWrappedObject) const;
   QTransform  transform(QPaintEngineState* theWrappedObject) const;
};





class PythonQtShell_QPaintEvent : public QPaintEvent
{
public:
    PythonQtShell_QPaintEvent(const QRect&  paintRect):QPaintEvent(paintRect),_wrapper(NULL) {};
    PythonQtShell_QPaintEvent(const QRegion&  paintRegion):QPaintEvent(paintRegion),_wrapper(NULL) {};

   ~PythonQtShell_QPaintEvent();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPaintEvent : public QObject
{ Q_OBJECT
public:
public slots:
QPaintEvent* new_QPaintEvent(const QRect&  paintRect);
QPaintEvent* new_QPaintEvent(const QRegion&  paintRegion);
void delete_QPaintEvent(QPaintEvent* obj) { delete obj; } 
   const QRect*  rect(QPaintEvent* theWrappedObject) const;
   const QRegion*  region(QPaintEvent* theWrappedObject) const;
};





class PythonQtWrapper_QPainter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CompositionMode PixmapFragmentHint RenderHint )
Q_FLAGS(PixmapFragmentHints RenderHints )
enum CompositionMode{
  CompositionMode_SourceOver = QPainter::CompositionMode_SourceOver,   CompositionMode_DestinationOver = QPainter::CompositionMode_DestinationOver,   CompositionMode_Clear = QPainter::CompositionMode_Clear,   CompositionMode_Source = QPainter::CompositionMode_Source,   CompositionMode_Destination = QPainter::CompositionMode_Destination,   CompositionMode_SourceIn = QPainter::CompositionMode_SourceIn,   CompositionMode_DestinationIn = QPainter::CompositionMode_DestinationIn,   CompositionMode_SourceOut = QPainter::CompositionMode_SourceOut,   CompositionMode_DestinationOut = QPainter::CompositionMode_DestinationOut,   CompositionMode_SourceAtop = QPainter::CompositionMode_SourceAtop,   CompositionMode_DestinationAtop = QPainter::CompositionMode_DestinationAtop,   CompositionMode_Xor = QPainter::CompositionMode_Xor,   CompositionMode_Plus = QPainter::CompositionMode_Plus,   CompositionMode_Multiply = QPainter::CompositionMode_Multiply,   CompositionMode_Screen = QPainter::CompositionMode_Screen,   CompositionMode_Overlay = QPainter::CompositionMode_Overlay,   CompositionMode_Darken = QPainter::CompositionMode_Darken,   CompositionMode_Lighten = QPainter::CompositionMode_Lighten,   CompositionMode_ColorDodge = QPainter::CompositionMode_ColorDodge,   CompositionMode_ColorBurn = QPainter::CompositionMode_ColorBurn,   CompositionMode_HardLight = QPainter::CompositionMode_HardLight,   CompositionMode_SoftLight = QPainter::CompositionMode_SoftLight,   CompositionMode_Difference = QPainter::CompositionMode_Difference,   CompositionMode_Exclusion = QPainter::CompositionMode_Exclusion,   RasterOp_SourceOrDestination = QPainter::RasterOp_SourceOrDestination,   RasterOp_SourceAndDestination = QPainter::RasterOp_SourceAndDestination,   RasterOp_SourceXorDestination = QPainter::RasterOp_SourceXorDestination,   RasterOp_NotSourceAndNotDestination = QPainter::RasterOp_NotSourceAndNotDestination,   RasterOp_NotSourceOrNotDestination = QPainter::RasterOp_NotSourceOrNotDestination,   RasterOp_NotSourceXorDestination = QPainter::RasterOp_NotSourceXorDestination,   RasterOp_NotSource = QPainter::RasterOp_NotSource,   RasterOp_NotSourceAndDestination = QPainter::RasterOp_NotSourceAndDestination,   RasterOp_SourceAndNotDestination = QPainter::RasterOp_SourceAndNotDestination};
enum PixmapFragmentHint{
  OpaqueHint = QPainter::OpaqueHint};
enum RenderHint{
  Antialiasing = QPainter::Antialiasing,   TextAntialiasing = QPainter::TextAntialiasing,   SmoothPixmapTransform = QPainter::SmoothPixmapTransform,   HighQualityAntialiasing = QPainter::HighQualityAntialiasing,   NonCosmeticDefaultPen = QPainter::NonCosmeticDefaultPen};
Q_DECLARE_FLAGS(PixmapFragmentHints, PixmapFragmentHint)
Q_DECLARE_FLAGS(RenderHints, RenderHint)
public slots:
QPainter* new_QPainter();
QPainter* new_QPainter(QPaintDevice*  arg__1);
void delete_QPainter(QPainter* obj) { delete obj; } 
   const QBrush*  background(QPainter* theWrappedObject) const;
   Qt::BGMode  backgroundMode(QPainter* theWrappedObject) const;
   bool  begin(QPainter* theWrappedObject, QPaintDevice*  arg__1);
   void beginNativePainting(QPainter* theWrappedObject);
   QRect  boundingRect(QPainter* theWrappedObject, const QRect&  rect, int  flags, const QString&  text);
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, const QString&  text, const QTextOption&  o = QTextOption());
   QRectF  boundingRect(QPainter* theWrappedObject, const QRectF&  rect, int  flags, const QString&  text);
   QRect  boundingRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text);
   const QBrush*  brush(QPainter* theWrappedObject) const;
   QPoint  brushOrigin(QPainter* theWrappedObject) const;
   QRectF  clipBoundingRect(QPainter* theWrappedObject) const;
   QPainterPath  clipPath(QPainter* theWrappedObject) const;
   QRegion  clipRegion(QPainter* theWrappedObject) const;
   QMatrix  combinedMatrix(QPainter* theWrappedObject) const;
   QTransform  combinedTransform(QPainter* theWrappedObject) const;
   QPainter::CompositionMode  compositionMode(QPainter* theWrappedObject) const;
   QPaintDevice*  device(QPainter* theWrappedObject) const;
   const QMatrix*  deviceMatrix(QPainter* theWrappedObject) const;
   const QTransform*  deviceTransform(QPainter* theWrappedObject) const;
   void drawArc(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawArc(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawChord(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawConvexPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon);
   void drawEllipse(QPainter* theWrappedObject, const QPoint&  center, int  rx, int  ry);
   void drawEllipse(QPainter* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void drawEllipse(QPainter* theWrappedObject, const QRect&  r);
   void drawEllipse(QPainter* theWrappedObject, const QRectF&  r);
   void drawEllipse(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPoint&  p, const QImage&  image, const QRect&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QPointF&  p, const QImage&  image, const QRectF&  sr, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRect&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRect&  targetRect, const QImage&  image, const QRect&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, const QRectF&  r, const QImage&  image);
   void drawImage(QPainter* theWrappedObject, const QRectF&  targetRect, const QImage&  image, const QRectF&  sourceRect, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawImage(QPainter* theWrappedObject, int  x, int  y, const QImage&  image, int  sx = 0, int  sy = 0, int  sw = -1, int  sh = -1, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   void drawLine(QPainter* theWrappedObject, const QLine&  line);
   void drawLine(QPainter* theWrappedObject, const QLineF&  line);
   void drawLine(QPainter* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void drawLine(QPainter* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   void drawLine(QPainter* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void drawLines(QPainter* theWrappedObject, const QVector<QLine >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QLineF >&  lines);
   void drawLines(QPainter* theWrappedObject, const QVector<QPoint >&  pointPairs);
   void drawLines(QPainter* theWrappedObject, const QVector<QPointF >&  pointPairs);
   void drawPath(QPainter* theWrappedObject, const QPainterPath&  path);
   void drawPicture(QPainter* theWrappedObject, const QPoint&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, const QPointF&  p, const QPicture&  picture);
   void drawPicture(QPainter* theWrappedObject, int  x, int  y, const QPicture&  picture);
   void drawPie(QPainter* theWrappedObject, const QRect&  arg__1, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, const QRectF&  rect, int  a, int  alen);
   void drawPie(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  a, int  alen);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPoint&  p, const QPixmap&  pm, const QRect&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QPointF&  p, const QPixmap&  pm, const QRectF&  sr);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  r, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, const QRect&  targetRect, const QPixmap&  pixmap, const QRect&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, const QRectF&  targetRect, const QPixmap&  pixmap, const QRectF&  sourceRect);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm);
   void drawPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  pm, int  sx, int  sy, int  sw, int  sh);
   void drawPixmapFragments(QPainter* theWrappedObject, const QPainter::PixmapFragment*  fragments, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints = 0);
   void drawPixmapFragments(QPainter* theWrappedObject, const QRectF*  targetRects, const QRectF*  sourceRects, int  fragmentCount, const QPixmap&  pixmap, QPainter::PixmapFragmentHints  hints = 0);
   void drawPoint(QPainter* theWrappedObject, const QPoint&  p);
   void drawPoint(QPainter* theWrappedObject, const QPointF&  pt);
   void drawPoint(QPainter* theWrappedObject, int  x, int  y);
   void drawPoints(QPainter* theWrappedObject, const QPolygon&  points);
   void drawPoints(QPainter* theWrappedObject, const QPolygonF&  points);
   void drawPolygon(QPainter* theWrappedObject, const QPolygon&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolygon(QPainter* theWrappedObject, const QPolygonF&  polygon, Qt::FillRule  fillRule = Qt::OddEvenFill);
   void drawPolyline(QPainter* theWrappedObject, const QPolygon&  polygon);
   void drawPolyline(QPainter* theWrappedObject, const QPolygonF&  polyline);
   void drawRect(QPainter* theWrappedObject, const QRect&  rect);
   void drawRect(QPainter* theWrappedObject, const QRectF&  rect);
   void drawRect(QPainter* theWrappedObject, int  x1, int  y1, int  w, int  h);
   void drawRects(QPainter* theWrappedObject, const QVector<QRect >&  rectangles);
   void drawRects(QPainter* theWrappedObject, const QVector<QRectF >&  rectangles);
   void drawRoundRect(QPainter* theWrappedObject, const QRect&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, const QRectF&  r, int  xround = 25, int  yround = 25);
   void drawRoundRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  arg__5 = 25, int  arg__6 = 25);
   void drawRoundedRect(QPainter* theWrappedObject, const QRect&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawRoundedRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void drawStaticText(QPainter* theWrappedObject, const QPoint&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, const QPointF&  topLeftPosition, const QStaticText&  staticText);
   void drawStaticText(QPainter* theWrappedObject, int  left, int  top, const QStaticText&  staticText);
   void drawText(QPainter* theWrappedObject, const QPoint&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QPointF&  p, const QString&  s);
   void drawText(QPainter* theWrappedObject, const QRect&  r, int  flags, const QString&  text, QRect*  br = 0);
   void drawText(QPainter* theWrappedObject, const QRectF&  r, const QString&  text, const QTextOption&  o = QTextOption());
   void drawText(QPainter* theWrappedObject, const QRectF&  r, int  flags, const QString&  text, QRectF*  br = 0);
   void drawText(QPainter* theWrappedObject, int  x, int  y, const QString&  s);
   void drawText(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, int  flags, const QString&  text, QRect*  br = 0);
   void drawTextItem(QPainter* theWrappedObject, const QPoint&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, const QPointF&  p, const QTextItem&  ti);
   void drawTextItem(QPainter* theWrappedObject, int  x, int  y, const QTextItem&  ti);
   void drawTiledPixmap(QPainter* theWrappedObject, const QRect&  arg__1, const QPixmap&  arg__2, const QPoint&  arg__3 = QPoint());
   void drawTiledPixmap(QPainter* theWrappedObject, const QRectF&  rect, const QPixmap&  pm, const QPointF&  offset = QPointF());
   void drawTiledPixmap(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QPixmap&  arg__5, int  sx = 0, int  sy = 0);
   bool  end(QPainter* theWrappedObject);
   void endNativePainting(QPainter* theWrappedObject);
   void eraseRect(QPainter* theWrappedObject, const QRect&  arg__1);
   void eraseRect(QPainter* theWrappedObject, const QRectF&  arg__1);
   void eraseRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void fillPath(QPainter* theWrappedObject, const QPainterPath&  path, const QBrush&  brush);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRect&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRect&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QBrush&  arg__2);
   void fillRect(QPainter* theWrappedObject, const QRectF&  arg__1, const QColor&  color);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, const QRectF&  r, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::BrushStyle  style);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::GlobalColor  c);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QBrush&  arg__5);
   void fillRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, const QColor&  color);
   const QFont*  font(QPainter* theWrappedObject) const;
   QFontInfo  fontInfo(QPainter* theWrappedObject) const;
   QFontMetrics  fontMetrics(QPainter* theWrappedObject) const;
   bool  hasClipping(QPainter* theWrappedObject) const;
   void initFrom(QPainter* theWrappedObject, const QWidget*  widget);
   bool  isActive(QPainter* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QPainter* theWrappedObject) const;
   qreal  opacity(QPainter* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPainter* theWrappedObject) const;
   const QPen*  pen(QPainter* theWrappedObject) const;
   QPaintDevice*  static_QPainter_redirected(const QPaintDevice*  device, QPoint*  offset = 0);
   QPainter::RenderHints  renderHints(QPainter* theWrappedObject) const;
   void resetMatrix(QPainter* theWrappedObject);
   void resetTransform(QPainter* theWrappedObject);
   void restore(QPainter* theWrappedObject);
   void static_QPainter_restoreRedirected(const QPaintDevice*  device);
   void rotate(QPainter* theWrappedObject, qreal  a);
   void save(QPainter* theWrappedObject);
   void scale(QPainter* theWrappedObject, qreal  sx, qreal  sy);
   void setBackground(QPainter* theWrappedObject, const QBrush&  bg);
   void setBackgroundMode(QPainter* theWrappedObject, Qt::BGMode  mode);
   void setBrush(QPainter* theWrappedObject, const QBrush&  brush);
   void setBrushOrigin(QPainter* theWrappedObject, const QPoint&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, const QPointF&  arg__1);
   void setBrushOrigin(QPainter* theWrappedObject, int  x, int  y);
   void setClipPath(QPainter* theWrappedObject, const QPainterPath&  path, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRect&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, const QRectF&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRect(QPainter* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipRegion(QPainter* theWrappedObject, const QRegion&  arg__1, Qt::ClipOperation  op = Qt::ReplaceClip);
   void setClipping(QPainter* theWrappedObject, bool  enable);
   void setCompositionMode(QPainter* theWrappedObject, QPainter::CompositionMode  mode);
   void setFont(QPainter* theWrappedObject, const QFont&  f);
   void setLayoutDirection(QPainter* theWrappedObject, Qt::LayoutDirection  direction);
   void setOpacity(QPainter* theWrappedObject, qreal  opacity);
   void setPen(QPainter* theWrappedObject, Qt::PenStyle  style);
   void setPen(QPainter* theWrappedObject, const QColor&  color);
   void setPen(QPainter* theWrappedObject, const QPen&  pen);
   void static_QPainter_setRedirected(const QPaintDevice*  device, QPaintDevice*  replacement, const QPoint&  offset = QPoint());
   void setRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint, bool  on = true);
   void setRenderHints(QPainter* theWrappedObject, QPainter::RenderHints  hints, bool  on = true);
   void setTransform(QPainter* theWrappedObject, const QTransform&  transform, bool  combine = false);
   void setViewTransformEnabled(QPainter* theWrappedObject, bool  enable);
   void setViewport(QPainter* theWrappedObject, const QRect&  viewport);
   void setViewport(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWindow(QPainter* theWrappedObject, const QRect&  window);
   void setWindow(QPainter* theWrappedObject, int  x, int  y, int  w, int  h);
   void setWorldMatrix(QPainter* theWrappedObject, const QMatrix&  matrix, bool  combine = false);
   void setWorldMatrixEnabled(QPainter* theWrappedObject, bool  enabled);
   void setWorldTransform(QPainter* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   void shear(QPainter* theWrappedObject, qreal  sh, qreal  sv);
   void strokePath(QPainter* theWrappedObject, const QPainterPath&  path, const QPen&  pen);
   bool  testRenderHint(QPainter* theWrappedObject, QPainter::RenderHint  hint) const;
   const QTransform*  transform(QPainter* theWrappedObject) const;
   void translate(QPainter* theWrappedObject, const QPoint&  offset);
   void translate(QPainter* theWrappedObject, const QPointF&  offset);
   void translate(QPainter* theWrappedObject, qreal  dx, qreal  dy);
   bool  viewTransformEnabled(QPainter* theWrappedObject) const;
   QRect  viewport(QPainter* theWrappedObject) const;
   QRect  window(QPainter* theWrappedObject) const;
   const QMatrix*  worldMatrix(QPainter* theWrappedObject) const;
   bool  worldMatrixEnabled(QPainter* theWrappedObject) const;
   const QTransform*  worldTransform(QPainter* theWrappedObject) const;
};





class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; } 
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   void closeSubpath(QPainterPath* theWrappedObject);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   const QPainterPath::Element*  elementAt(QPainterPath* theWrappedObject, int  i) const;
   int  elementCount(QPainterPath* theWrappedObject) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   bool  __ne__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath  __and__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iand__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QMatrix&  m);
   QPainterPath  __mul__(QPainterPath* theWrappedObject, const QTransform&  m);
   QPainterPath  __add__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __iadd__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   QPainterPath  __sub__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __isub__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPainterPath  __or__(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QPainterPath*  __ior__(QPainterPath* theWrappedObject, const QPainterPath&  other);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void swap(QPainterPath* theWrappedObject, QPainterPath&  other);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void translate(QPainterPath* theWrappedObject, const QPointF&  offset);
   void translate(QPainterPath* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  translated(QPainterPath* theWrappedObject, const QPointF&  offset) const;
   QPainterPath  translated(QPainterPath* theWrappedObject, qreal  dx, qreal  dy) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
    QString py_toString(QPainterPath*);
};





class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};





class PythonQtShell_QPainterPath__Element : public QPainterPath::Element
{
public:
    PythonQtShell_QPainterPath__Element():QPainterPath::Element(),_wrapper(NULL) {};

   ~PythonQtShell_QPainterPath__Element();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPainterPath__Element : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPath::Element* new_QPainterPath__Element();
QPainterPath::Element* new_QPainterPath__Element(const QPainterPath::Element& other) {
PythonQtShell_QPainterPath__Element* a = new PythonQtShell_QPainterPath__Element();
*((QPainterPath::Element*)a) = other;
return a; }
void delete_QPainterPath__Element(QPainterPath::Element* obj) { delete obj; } 
   bool  isCurveTo(QPainterPath::Element* theWrappedObject) const;
   bool  isLineTo(QPainterPath::Element* theWrappedObject) const;
   bool  isMoveTo(QPainterPath::Element* theWrappedObject) const;
   QPointF  operator_cast_QPointF(QPainterPath::Element* theWrappedObject) const;
   bool  __ne__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
   bool  __eq__(QPainterPath::Element* theWrappedObject, const QPainterPath::Element&  e) const;
void py_set_type(QPainterPath::Element* theWrappedObject, QPainterPath::ElementType  type){ theWrappedObject->type = type; }
QPainterPath::ElementType  py_get_type(QPainterPath::Element* theWrappedObject){ return theWrappedObject->type; }
void py_set_x(QPainterPath::Element* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainterPath::Element* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainterPath::Element* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainterPath::Element* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPainter__PixmapFragment : public QPainter::PixmapFragment
{
public:
    PythonQtShell_QPainter__PixmapFragment():QPainter::PixmapFragment(),_wrapper(NULL) {};

   ~PythonQtShell_QPainter__PixmapFragment();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPainter__PixmapFragment : public QObject
{ Q_OBJECT
public:
public slots:
QPainter::PixmapFragment* new_QPainter__PixmapFragment();
QPainter::PixmapFragment* new_QPainter__PixmapFragment(const QPainter::PixmapFragment& other) {
PythonQtShell_QPainter__PixmapFragment* a = new PythonQtShell_QPainter__PixmapFragment();
*((QPainter::PixmapFragment*)a) = other;
return a; }
void delete_QPainter__PixmapFragment(QPainter::PixmapFragment* obj) { delete obj; } 
   QPainter::PixmapFragment  static_QPainter__PixmapFragment_create(const QPointF&  pos, const QRectF&  sourceRect, qreal  scaleX = 1, qreal  scaleY = 1, qreal  rotation = 0, qreal  opacity = 1);
void py_set_height(QPainter::PixmapFragment* theWrappedObject, qreal  height){ theWrappedObject->height = height; }
qreal  py_get_height(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->height; }
void py_set_opacity(QPainter::PixmapFragment* theWrappedObject, qreal  opacity){ theWrappedObject->opacity = opacity; }
qreal  py_get_opacity(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->opacity; }
void py_set_rotation(QPainter::PixmapFragment* theWrappedObject, qreal  rotation){ theWrappedObject->rotation = rotation; }
qreal  py_get_rotation(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->rotation; }
void py_set_scaleX(QPainter::PixmapFragment* theWrappedObject, qreal  scaleX){ theWrappedObject->scaleX = scaleX; }
qreal  py_get_scaleX(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleX; }
void py_set_scaleY(QPainter::PixmapFragment* theWrappedObject, qreal  scaleY){ theWrappedObject->scaleY = scaleY; }
qreal  py_get_scaleY(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->scaleY; }
void py_set_sourceLeft(QPainter::PixmapFragment* theWrappedObject, qreal  sourceLeft){ theWrappedObject->sourceLeft = sourceLeft; }
qreal  py_get_sourceLeft(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceLeft; }
void py_set_sourceTop(QPainter::PixmapFragment* theWrappedObject, qreal  sourceTop){ theWrappedObject->sourceTop = sourceTop; }
qreal  py_get_sourceTop(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->sourceTop; }
void py_set_width(QPainter::PixmapFragment* theWrappedObject, qreal  width){ theWrappedObject->width = width; }
qreal  py_get_width(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->width; }
void py_set_x(QPainter::PixmapFragment* theWrappedObject, qreal  x){ theWrappedObject->x = x; }
qreal  py_get_x(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->x; }
void py_set_y(QPainter::PixmapFragment* theWrappedObject, qreal  y){ theWrappedObject->y = y; }
qreal  py_get_y(QPainter::PixmapFragment* theWrappedObject){ return theWrappedObject->y; }
};





class PythonQtShell_QPanGesture : public QPanGesture
{
public:
    PythonQtShell_QPanGesture(QObject*  parent = 0):QPanGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPanGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPanGesture : public QObject
{ Q_OBJECT
public:
public slots:
QPanGesture* new_QPanGesture(QObject*  parent = 0);
void delete_QPanGesture(QPanGesture* obj) { delete obj; } 
   qreal  acceleration(QPanGesture* theWrappedObject) const;
   QPointF  delta(QPanGesture* theWrappedObject) const;
   QPointF  lastOffset(QPanGesture* theWrappedObject) const;
   QPointF  offset(QPanGesture* theWrappedObject) const;
   void setAcceleration(QPanGesture* theWrappedObject, qreal  value);
   void setLastOffset(QPanGesture* theWrappedObject, const QPointF&  value);
   void setOffset(QPanGesture* theWrappedObject, const QPointF&  value);
};





class PythonQtShell_QPicture : public QPicture
{
public:
    PythonQtShell_QPicture(const QPicture&  arg__1):QPicture(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPicture(int  formatVersion = -1):QPicture(formatVersion),_wrapper(NULL) {};

   ~PythonQtShell_QPicture();

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  m) const;
virtual QPaintEngine*  paintEngine() const;
virtual void setData(const char*  data, uint  size);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPicture : public QPicture
{ public:
inline int  promoted_devType() const { return QPicture::devType(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  m) const { return QPicture::metric(m); }
inline QPaintEngine*  promoted_paintEngine() const { return QPicture::paintEngine(); }
};

class PythonQtWrapper_QPicture : public QObject
{ Q_OBJECT
public:
public slots:
QPicture* new_QPicture(const QPicture&  arg__1);
QPicture* new_QPicture(int  formatVersion = -1);
void delete_QPicture(QPicture* obj) { delete obj; } 
   QRect  boundingRect(QPicture* theWrappedObject) const;
   const char*  data(QPicture* theWrappedObject) const;
   int  devType(QPicture* theWrappedObject) const;
   bool  isNull(QPicture* theWrappedObject) const;
   bool  load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  load(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   int  metric(QPicture* theWrappedObject, QPaintDevice::PaintDeviceMetric  m) const;
   void writeTo(QPicture* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPicture* theWrappedObject, QDataStream&  arg__1);
   QPaintEngine*  paintEngine(QPicture* theWrappedObject) const;
   bool  play(QPicture* theWrappedObject, QPainter*  p);
   bool  save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format = 0);
   bool  save(QPicture* theWrappedObject, const QString&  fileName, const char*  format = 0);
   void setBoundingRect(QPicture* theWrappedObject, const QRect&  r);
   uint  size(QPicture* theWrappedObject) const;
   void swap(QPicture* theWrappedObject, QPicture&  other);
    bool __nonzero__(QPicture* obj) { return !obj->isNull(); }
};





class PythonQtShell_QPictureFormatPlugin : public QPictureFormatPlugin
{
public:
    PythonQtShell_QPictureFormatPlugin(QObject*  parent = 0):QPictureFormatPlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPictureFormatPlugin();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual bool  installIOHandler(const QString&  format);
virtual QStringList  keys() const;
virtual bool  loadPicture(const QString&  format, const QString&  filename, QPicture*  pic);
virtual bool  savePicture(const QString&  format, const QString&  filename, const QPicture&  pic);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPictureFormatPlugin : public QPictureFormatPlugin
{ public:
inline bool  promoted_installIOHandler(const QString&  format) { return this->installIOHandler(format); }
inline QStringList  promoted_keys() const { return this->keys(); }
inline bool  promoted_loadPicture(const QString&  format, const QString&  filename, QPicture*  pic) { return QPictureFormatPlugin::loadPicture(format, filename, pic); }
inline bool  promoted_savePicture(const QString&  format, const QString&  filename, const QPicture&  pic) { return QPictureFormatPlugin::savePicture(format, filename, pic); }
};

class PythonQtWrapper_QPictureFormatPlugin : public QObject
{ Q_OBJECT
public:
public slots:
QPictureFormatPlugin* new_QPictureFormatPlugin(QObject*  parent = 0);
void delete_QPictureFormatPlugin(QPictureFormatPlugin* obj) { delete obj; } 
   bool  installIOHandler(QPictureFormatPlugin* theWrappedObject, const QString&  format);
   QStringList  keys(QPictureFormatPlugin* theWrappedObject) const;
   bool  loadPicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, QPicture*  pic);
   bool  savePicture(QPictureFormatPlugin* theWrappedObject, const QString&  format, const QString&  filename, const QPicture&  pic);
};





class PythonQtWrapper_QPictureIO : public QObject
{ Q_OBJECT
public:
public slots:
QPictureIO* new_QPictureIO();
QPictureIO* new_QPictureIO(QIODevice*  ioDevice, const char*  format);
QPictureIO* new_QPictureIO(const QString&  fileName, const char*  format);
void delete_QPictureIO(QPictureIO* obj) { delete obj; } 
   QString  description(QPictureIO* theWrappedObject) const;
   QString  fileName(QPictureIO* theWrappedObject) const;
   const char*  format(QPictureIO* theWrappedObject) const;
   float  gamma(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_inputFormats();
   QIODevice*  ioDevice(QPictureIO* theWrappedObject) const;
   QList<QByteArray >  static_QPictureIO_outputFormats();
   const char*  parameters(QPictureIO* theWrappedObject) const;
   const QPicture*  picture(QPictureIO* theWrappedObject) const;
   QByteArray  static_QPictureIO_pictureFormat(QIODevice*  arg__1);
   QByteArray  static_QPictureIO_pictureFormat(const QString&  fileName);
   int  quality(QPictureIO* theWrappedObject) const;
   bool  read(QPictureIO* theWrappedObject);
   void setDescription(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFileName(QPictureIO* theWrappedObject, const QString&  arg__1);
   void setFormat(QPictureIO* theWrappedObject, const char*  arg__1);
   void setGamma(QPictureIO* theWrappedObject, float  arg__1);
   void setIODevice(QPictureIO* theWrappedObject, QIODevice*  arg__1);
   void setParameters(QPictureIO* theWrappedObject, const char*  arg__1);
   void setPicture(QPictureIO* theWrappedObject, const QPicture&  arg__1);
   void setQuality(QPictureIO* theWrappedObject, int  arg__1);
   void setStatus(QPictureIO* theWrappedObject, int  arg__1);
   int  status(QPictureIO* theWrappedObject) const;
   bool  write(QPictureIO* theWrappedObject);
};





class PythonQtShell_QPinchGesture : public QPinchGesture
{
public:
    PythonQtShell_QPinchGesture(QObject*  parent = 0):QPinchGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QPinchGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPinchGesture : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ChangeFlag )
Q_FLAGS(ChangeFlags )
enum ChangeFlag{
  ScaleFactorChanged = QPinchGesture::ScaleFactorChanged,   RotationAngleChanged = QPinchGesture::RotationAngleChanged,   CenterPointChanged = QPinchGesture::CenterPointChanged};
Q_DECLARE_FLAGS(ChangeFlags, ChangeFlag)
public slots:
QPinchGesture* new_QPinchGesture(QObject*  parent = 0);
void delete_QPinchGesture(QPinchGesture* obj) { delete obj; } 
   QPointF  centerPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  changeFlags(QPinchGesture* theWrappedObject) const;
   QPointF  lastCenterPoint(QPinchGesture* theWrappedObject) const;
   qreal  lastRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  lastScaleFactor(QPinchGesture* theWrappedObject) const;
   qreal  rotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  scaleFactor(QPinchGesture* theWrappedObject) const;
   void setCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setLastCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setLastRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setLastScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   void setStartCenterPoint(QPinchGesture* theWrappedObject, const QPointF&  value);
   void setTotalChangeFlags(QPinchGesture* theWrappedObject, QPinchGesture::ChangeFlags  value);
   void setTotalRotationAngle(QPinchGesture* theWrappedObject, qreal  value);
   void setTotalScaleFactor(QPinchGesture* theWrappedObject, qreal  value);
   QPointF  startCenterPoint(QPinchGesture* theWrappedObject) const;
   QPinchGesture::ChangeFlags  totalChangeFlags(QPinchGesture* theWrappedObject) const;
   qreal  totalRotationAngle(QPinchGesture* theWrappedObject) const;
   qreal  totalScaleFactor(QPinchGesture* theWrappedObject) const;
};





class PythonQtShell_QPixmapCache : public QPixmapCache
{
public:
    PythonQtShell_QPixmapCache():QPixmapCache(),_wrapper(NULL) {};

   ~PythonQtShell_QPixmapCache();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QPixmapCache : public QObject
{ Q_OBJECT
public:
public slots:
QPixmapCache* new_QPixmapCache();
void delete_QPixmapCache(QPixmapCache* obj) { delete obj; } 
   int  static_QPixmapCache_cacheLimit();
   void static_QPixmapCache_clear();
   bool  static_QPixmapCache_find(const QPixmapCache::Key&  key, QPixmap*  pixmap);
   bool  static_QPixmapCache_find(const QString&  key, QPixmap&  pixmap);
   QPixmapCache::Key  static_QPixmapCache_insert(const QPixmap&  pixmap);
   bool  static_QPixmapCache_insert(const QString&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_remove(const QPixmapCache::Key&  key);
   void static_QPixmapCache_remove(const QString&  key);
   bool  static_QPixmapCache_replace(const QPixmapCache::Key&  key, const QPixmap&  pixmap);
   void static_QPixmapCache_setCacheLimit(int  arg__1);
};


