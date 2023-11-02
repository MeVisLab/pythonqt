#include <PythonQt.h>
#include <QByteArray>
#include <QGraphicsItem>
#include <QMatrix>
#include <QObject>
#include <QRectF>
#include <QSize>
#include <QSvgRenderer>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssvgitem.h>
#include <qgraphicstransform.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsvggenerator.h>
#include <qsvgrenderer.h>
#include <qsvgwidget.h>
#include <qthread.h>
#include <qtransform.h>
#include <qwidget.h>
#include <qwindow.h>
#include <qxmlstream.h>



class PythonQtShell_QGraphicsSvgItem : public QGraphicsSvgItem
{
public:
    PythonQtShell_QGraphicsSvgItem(QGraphicsItem*  parentItem = nullptr):QGraphicsSvgItem(parentItem),_wrapper(nullptr) {};
    PythonQtShell_QGraphicsSvgItem(const QString&  fileName, QGraphicsItem*  parentItem = nullptr):QGraphicsSvgItem(fileName, parentItem),_wrapper(nullptr) {};

   ~PythonQtShell_QGraphicsSvgItem() override;

void advance(int  phase) override;
QRectF  boundingRect() const override;
void childEvent(QChildEvent*  event) override;
bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const override;
bool  contains(const QPointF&  point) const override;
void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
void dragEnterEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dragMoveEvent(QGraphicsSceneDragDropEvent*  event) override;
void dropEvent(QGraphicsSceneDragDropEvent*  event) override;
bool  event(QEvent*  ev) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
QVariant  extension(const QVariant&  variant) const override;
void focusInEvent(QFocusEvent*  event) override;
void focusOutEvent(QFocusEvent*  event) override;
void hoverEnterEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) override;
void hoverMoveEvent(QGraphicsSceneHoverEvent*  event) override;
void inputMethodEvent(QInputMethodEvent*  event) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const override;
bool  isObscuredBy(const QGraphicsItem*  item) const override;
QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseMoveEvent(QGraphicsSceneMouseEvent*  event) override;
void mousePressEvent(QGraphicsSceneMouseEvent*  event) override;
void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) override;
QPainterPath  opaqueArea() const override;
void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) override;
bool  sceneEvent(QEvent*  event) override;
bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) override;
void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant) override;
QPainterPath  shape() const override;
bool  supportsExtension(QGraphicsItem::Extension  extension) const override;
void timerEvent(QTimerEvent*  event) override;
int  type() const override;
void wheelEvent(QGraphicsSceneWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QGraphicsSvgItem : public QGraphicsSvgItem
{ public:
inline QRectF  py_q_boundingRect() const { return QGraphicsSvgItem::boundingRect(); }
inline void py_q_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr) { QGraphicsSvgItem::paint(painter, option, widget); }
inline int  py_q_type() const { return QGraphicsSvgItem::type(); }
};

class PythonQtWrapper_QGraphicsSvgItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSvgItem::Type};
public slots:
QGraphicsSvgItem* new_QGraphicsSvgItem(QGraphicsItem*  parentItem = nullptr);
QGraphicsSvgItem* new_QGraphicsSvgItem(const QString&  fileName, QGraphicsItem*  parentItem = nullptr);
void delete_QGraphicsSvgItem(QGraphicsSvgItem* obj) { delete obj; }
   QRectF  py_q_boundingRect(QGraphicsSvgItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_boundingRect());}
   QString  elementId(QGraphicsSvgItem* theWrappedObject) const;
   bool  isCachingEnabled(QGraphicsSvgItem* theWrappedObject) const;
   QSize  maximumCacheSize(QGraphicsSvgItem* theWrappedObject) const;
   void py_q_paint(QGraphicsSvgItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QSvgRenderer*  renderer(QGraphicsSvgItem* theWrappedObject) const;
   void setCachingEnabled(QGraphicsSvgItem* theWrappedObject, bool  arg__1);
   void setElementId(QGraphicsSvgItem* theWrappedObject, const QString&  id);
   void setMaximumCacheSize(QGraphicsSvgItem* theWrappedObject, const QSize&  size);
   void setSharedRenderer(QGraphicsSvgItem* theWrappedObject, QSvgRenderer*  renderer);
   int  py_q_type(QGraphicsSvgItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QSvgGenerator : public QSvgGenerator
{
public:
    PythonQtShell_QSvgGenerator():QSvgGenerator(),_wrapper(nullptr) {};

   ~PythonQtShell_QSvgGenerator() override;

int  devType() const override;
void initPainter(QPainter*  painter) const override;
int  metric(QPaintDevice::PaintDeviceMetric  metric) const override;
QPaintEngine*  paintEngine() const override;
QPaintDevice*  redirected(QPoint*  offset) const override;
QPainter*  sharedPainter() const override;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSvgGenerator : public QSvgGenerator
{ public:
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return this->metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return this->paintEngine(); }
inline int  py_q_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
inline QPaintEngine*  py_q_paintEngine() const { return QSvgGenerator::paintEngine(); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; }
   QString  description(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   int  py_q_metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const{  return (((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)->py_q_metric(metric));}
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   QPaintEngine*  py_q_paintEngine(QSvgGenerator* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSvgGenerator*)theWrappedObject)->py_q_paintEngine());}
   int  resolution(QSvgGenerator* theWrappedObject) const;
   void setDescription(QSvgGenerator* theWrappedObject, const QString&  description);
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
   void setTitle(QSvgGenerator* theWrappedObject, const QString&  title);
   void setViewBox(QSvgGenerator* theWrappedObject, const QRect&  viewBox);
   void setViewBox(QSvgGenerator* theWrappedObject, const QRectF&  viewBox);
   QSize  size(QSvgGenerator* theWrappedObject) const;
   QString  title(QSvgGenerator* theWrappedObject) const;
   QRect  viewBox(QSvgGenerator* theWrappedObject) const;
   QRectF  viewBoxF(QSvgGenerator* theWrappedObject) const;
};





class PythonQtShell_QSvgRenderer : public QSvgRenderer
{
public:
    PythonQtShell_QSvgRenderer(QObject*  parent = nullptr):QSvgRenderer(parent),_wrapper(nullptr) {};
    PythonQtShell_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = nullptr):QSvgRenderer(contents, parent),_wrapper(nullptr) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = nullptr):QSvgRenderer(contents, parent),_wrapper(nullptr) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = nullptr):QSvgRenderer(filename, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSvgRenderer() override;

void childEvent(QChildEvent*  event) override;
void customEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = nullptr);
QSvgRenderer* new_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = nullptr);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = nullptr);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = nullptr);
void delete_QSvgRenderer(QSvgRenderer* obj) { delete obj; }
   bool  animated(QSvgRenderer* theWrappedObject) const;
   int  animationDuration(QSvgRenderer* theWrappedObject) const;
   QRectF  boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   int  currentFrame(QSvgRenderer* theWrappedObject) const;
   QSize  defaultSize(QSvgRenderer* theWrappedObject) const;
   bool  elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const;
   int  framesPerSecond(QSvgRenderer* theWrappedObject) const;
   bool  isValid(QSvgRenderer* theWrappedObject) const;
   QMatrix  matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   void setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1);
   void setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num);
   void setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox);
   void setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox);
   QRect  viewBox(QSvgRenderer* theWrappedObject) const;
   QRectF  viewBoxF(QSvgRenderer* theWrappedObject) const;
    bool __nonzero__(QSvgRenderer* obj) { return obj->isValid(); }
};





class PythonQtShell_QSvgWidget : public QSvgWidget
{
public:
    PythonQtShell_QSvgWidget(QWidget*  parent = nullptr):QSvgWidget(parent),_wrapper(nullptr) {};
    PythonQtShell_QSvgWidget(const QString&  file, QWidget*  parent = nullptr):QSvgWidget(file, parent),_wrapper(nullptr) {};

   ~PythonQtShell_QSvgWidget() override;

void actionEvent(QActionEvent*  event) override;
void changeEvent(QEvent*  arg__1) override;
void childEvent(QChildEvent*  event) override;
void closeEvent(QCloseEvent*  event) override;
void contextMenuEvent(QContextMenuEvent*  event) override;
void customEvent(QEvent*  event) override;
int  devType() const override;
void dragEnterEvent(QDragEnterEvent*  event) override;
void dragLeaveEvent(QDragLeaveEvent*  event) override;
void dragMoveEvent(QDragMoveEvent*  event) override;
void dropEvent(QDropEvent*  event) override;
void enterEvent(QEvent*  event) override;
bool  event(QEvent*  event) override;
bool  eventFilter(QObject*  watched, QEvent*  event) override;
void focusInEvent(QFocusEvent*  event) override;
bool  focusNextPrevChild(bool  next) override;
void focusOutEvent(QFocusEvent*  event) override;
bool  hasHeightForWidth() const override;
int  heightForWidth(int  arg__1) const override;
void hideEvent(QHideEvent*  event) override;
void initPainter(QPainter*  painter) const override;
void inputMethodEvent(QInputMethodEvent*  arg__1) override;
QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const override;
void keyPressEvent(QKeyEvent*  event) override;
void keyReleaseEvent(QKeyEvent*  event) override;
void leaveEvent(QEvent*  event) override;
int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const override;
QSize  minimumSizeHint() const override;
void mouseDoubleClickEvent(QMouseEvent*  event) override;
void mouseMoveEvent(QMouseEvent*  event) override;
void mousePressEvent(QMouseEvent*  event) override;
void mouseReleaseEvent(QMouseEvent*  event) override;
void moveEvent(QMoveEvent*  event) override;
bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result) override;
QPaintEngine*  paintEngine() const override;
void paintEvent(QPaintEvent*  event) override;
QPaintDevice*  redirected(QPoint*  offset) const override;
void resizeEvent(QResizeEvent*  event) override;
void setVisible(bool  visible) override;
QPainter*  sharedPainter() const override;
void showEvent(QShowEvent*  event) override;
QSize  sizeHint() const override;
void tabletEvent(QTabletEvent*  event) override;
void timerEvent(QTimerEvent*  event) override;
void wheelEvent(QWheelEvent*  event) override;

  const QMetaObject* metaObject() const override;
  int qt_metacall(QMetaObject::Call call, int id, void** args) override;
  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSvgWidget : public QSvgWidget
{ public:
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QSvgWidget::paintEvent(event); }
inline QSize  py_q_sizeHint() const { return QSvgWidget::sizeHint(); }
};

class PythonQtWrapper_QSvgWidget : public QObject
{ Q_OBJECT
public:
public slots:
QSvgWidget* new_QSvgWidget(QWidget*  parent = nullptr);
QSvgWidget* new_QSvgWidget(const QString&  file, QWidget*  parent = nullptr);
void delete_QSvgWidget(QSvgWidget* obj) { delete obj; }
   void py_q_paintEvent(QSvgWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QSvgWidget*)theWrappedObject)->py_q_paintEvent(event));}
   QSvgRenderer*  renderer(QSvgWidget* theWrappedObject) const;
   QSize  sizeHint(QSvgWidget* theWrappedObject) const;
   QSize  py_q_sizeHint(QSvgWidget* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSvgWidget*)theWrappedObject)->py_q_sizeHint());}
};


