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
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicssvgitem.h>
#include <qicon.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
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
    PythonQtShell_QGraphicsSvgItem(QGraphicsItem*  parentItem = 0):QGraphicsSvgItem(parentItem),_wrapper(NULL) {};
    PythonQtShell_QGraphicsSvgItem(const QString&  fileName, QGraphicsItem*  parentItem = 0):QGraphicsSvgItem(fileName, parentItem),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsSvgItem();

virtual QRectF  boundingRect() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual int  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsSvgItem : public QGraphicsSvgItem
{ public:
inline QRectF  promoted_boundingRect() const { return QGraphicsSvgItem::boundingRect(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsSvgItem::paint(painter, option, widget); }
inline int  promoted_type() const { return QGraphicsSvgItem::type(); }
};

class PythonQtWrapper_QGraphicsSvgItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsSvgItem::Type};
public slots:
QGraphicsSvgItem* new_QGraphicsSvgItem(QGraphicsItem*  parentItem = 0);
QGraphicsSvgItem* new_QGraphicsSvgItem(const QString&  fileName, QGraphicsItem*  parentItem = 0);
void delete_QGraphicsSvgItem(QGraphicsSvgItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsSvgItem* theWrappedObject) const;
   QString  elementId(QGraphicsSvgItem* theWrappedObject) const;
   bool  isCachingEnabled(QGraphicsSvgItem* theWrappedObject) const;
   QSize  maximumCacheSize(QGraphicsSvgItem* theWrappedObject) const;
   void paint(QGraphicsSvgItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QSvgRenderer*  renderer(QGraphicsSvgItem* theWrappedObject) const;
   void setCachingEnabled(QGraphicsSvgItem* theWrappedObject, bool  arg__1);
   void setElementId(QGraphicsSvgItem* theWrappedObject, const QString&  id);
   void setMaximumCacheSize(QGraphicsSvgItem* theWrappedObject, const QSize&  size);
   void setSharedRenderer(QGraphicsSvgItem* theWrappedObject, QSvgRenderer*  renderer);
   int  type(QGraphicsSvgItem* theWrappedObject) const;
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
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
inline QPaintEngine*  promoted_paintEngine() const { return QSvgGenerator::paintEngine(); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   QString  description(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   int  metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   QPaintEngine*  paintEngine(QSvgGenerator* theWrappedObject) const;
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
    PythonQtShell_QSvgRenderer(QObject*  parent = 0):QSvgRenderer(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = 0):QSvgRenderer(filename, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSvgRenderer();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(QXmlStreamReader*  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = 0);
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
};





class PythonQtShell_QSvgWidget : public QSvgWidget
{
public:
    PythonQtShell_QSvgWidget(QWidget*  parent = 0):QSvgWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgWidget(const QString&  file, QWidget*  parent = 0):QSvgWidget(file, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSvgWidget();

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
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSvgWidget : public QSvgWidget
{ public:
inline void promoted_paintEvent(QPaintEvent*  event) { QSvgWidget::paintEvent(event); }
};

class PythonQtWrapper_QSvgWidget : public QObject
{ Q_OBJECT
public:
public slots:
QSvgWidget* new_QSvgWidget(QWidget*  parent = 0);
QSvgWidget* new_QSvgWidget(const QString&  file, QWidget*  parent = 0);
void delete_QSvgWidget(QSvgWidget* obj) { delete obj; } 
   void paintEvent(QSvgWidget* theWrappedObject, QPaintEvent*  event);
   QSvgRenderer*  renderer(QSvgWidget* theWrappedObject) const;
   QSize  sizeHint(QSvgWidget* theWrappedObject) const;
};


