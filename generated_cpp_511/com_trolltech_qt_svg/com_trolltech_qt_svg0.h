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
#include <qgraphicssvgitem.h>
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
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qsvggenerator.h>
#include <qsvgrenderer.h>
#include <qsvgwidget.h>
#include <qwidget.h>
#include <qwindow.h>
#include <qxmlstream.h>



class PythonQtShell_QGraphicsSvgItem : public QGraphicsSvgItem
{
public:
    PythonQtShell_QGraphicsSvgItem(QGraphicsItem*  parentItem = nullptr):QGraphicsSvgItem(parentItem),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSvgItem(const QString&  fileName, QGraphicsItem*  parentItem = nullptr):QGraphicsSvgItem(fileName, parentItem),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsSvgItem();

virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
virtual void timerEvent(QTimerEvent*  event);
virtual int  type() const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
   QRectF  boundingRect(QGraphicsSvgItem* theWrappedObject) const;
   QRectF  py_q_boundingRect(QGraphicsSvgItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_boundingRect());}
   QString  elementId(QGraphicsSvgItem* theWrappedObject) const;
   bool  isCachingEnabled(QGraphicsSvgItem* theWrappedObject) const;
   QSize  maximumCacheSize(QGraphicsSvgItem* theWrappedObject) const;
   void paint(QGraphicsSvgItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr);
   void py_q_paint(QGraphicsSvgItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = nullptr){  (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_paint(painter, option, widget));}
   QSvgRenderer*  renderer(QGraphicsSvgItem* theWrappedObject) const;
   void setCachingEnabled(QGraphicsSvgItem* theWrappedObject, bool  arg__1);
   void setElementId(QGraphicsSvgItem* theWrappedObject, const QString&  id);
   void setMaximumCacheSize(QGraphicsSvgItem* theWrappedObject, const QSize&  size);
   void setSharedRenderer(QGraphicsSvgItem* theWrappedObject, QSvgRenderer*  renderer);
   int  type(QGraphicsSvgItem* theWrappedObject) const;
   int  py_q_type(QGraphicsSvgItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QGraphicsSvgItem*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QSvgGenerator : public QSvgGenerator
{
public:
    PythonQtShell_QSvgGenerator():QSvgGenerator(),_wrapper(NULL) {};

   ~PythonQtShell_QSvgGenerator();

virtual int  devType() const;
virtual void initPainter(QPainter*  painter) const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual QPainter*  sharedPainter() const;

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
    PythonQtShell_QSvgRenderer(QObject*  parent = nullptr):QSvgRenderer(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = nullptr):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = nullptr):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = nullptr):QSvgRenderer(filename, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSvgRenderer();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
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
    PythonQtShell_QSvgWidget(QWidget*  parent = nullptr):QSvgWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgWidget(const QString&  file, QWidget*  parent = nullptr):QSvgWidget(file, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSvgWidget();

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


