#include <PythonQt.h>
#include <QByteArray>
#include <QMatrix>
#include <QObject>
#include <QRectF>
#include <QSize>
#include <QSvgRenderer>
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
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
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
#include <qsvggenerator.h>
#include <qsvgrenderer.h>
#include <qsvgwidget.h>
#include <qwidget.h>



class PythonQtShell_QSvgGenerator : public QSvgGenerator
{
public:
    PythonQtShell_QSvgGenerator():QSvgGenerator(),_wrapper(NULL) {};

virtual int  devType() const;
virtual QPaintEngine*  paintEngine() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSvgGenerator : public QSvgGenerator
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QSvgGenerator::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QSvgGenerator::metric(metric); }
};

class PythonQtWrapper_QSvgGenerator : public QObject
{ Q_OBJECT
public:
public slots:
QSvgGenerator* new_QSvgGenerator();
void delete_QSvgGenerator(QSvgGenerator* obj) { delete obj; } 
   QIODevice*  outputDevice(QSvgGenerator* theWrappedObject) const;
   QString  fileName(QSvgGenerator* theWrappedObject) const;
   void setOutputDevice(QSvgGenerator* theWrappedObject, QIODevice*  outputDevice);
   void setFileName(QSvgGenerator* theWrappedObject, const QString&  fileName);
   QPaintEngine*  paintEngine(QSvgGenerator* theWrappedObject) const;
   void setSize(QSvgGenerator* theWrappedObject, const QSize&  size);
   QSize  size(QSvgGenerator* theWrappedObject) const;
   int  metric(QSvgGenerator* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   int  resolution(QSvgGenerator* theWrappedObject) const;
   void setResolution(QSvgGenerator* theWrappedObject, int  dpi);
};





class PythonQtShell_QSvgRenderer : public QSvgRenderer
{
public:
    PythonQtShell_QSvgRenderer(QObject*  parent = 0):QSvgRenderer(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0):QSvgRenderer(contents, parent),_wrapper(NULL) {};
    PythonQtShell_QSvgRenderer(const QString&  filename, QObject*  parent = 0):QSvgRenderer(filename, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSvgRenderer : public QObject
{ Q_OBJECT
public:
public slots:
QSvgRenderer* new_QSvgRenderer(QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QByteArray&  contents, QObject*  parent = 0);
QSvgRenderer* new_QSvgRenderer(const QString&  filename, QObject*  parent = 0);
void delete_QSvgRenderer(QSvgRenderer* obj) { delete obj; } 
   void setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1);
   QRect  viewBox(QSvgRenderer* theWrappedObject) const;
   QMatrix  matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
   QSize  defaultSize(QSvgRenderer* theWrappedObject) const;
   int  animationDuration(QSvgRenderer* theWrappedObject) const;
   bool  isValid(QSvgRenderer* theWrappedObject) const;
   bool  animated(QSvgRenderer* theWrappedObject) const;
   void setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num);
   bool  elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const;
   QRectF  viewBoxF(QSvgRenderer* theWrappedObject) const;
   int  framesPerSecond(QSvgRenderer* theWrappedObject) const;
   int  currentFrame(QSvgRenderer* theWrappedObject) const;
   void setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox);
   void setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox);
   QRectF  boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const;
};





class PythonQtShell_QSvgWidget : public QSvgWidget
{
public:
    PythonQtShell_QSvgWidget(QWidget*  parent = 0):QSvgWidget(parent),_wrapper(NULL) {};
    PythonQtShell_QSvgWidget(const QString&  file, QWidget*  parent = 0):QSvgWidget(file, parent),_wrapper(NULL) {};

virtual void paintEvent(QPaintEvent*  event);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void languageChange();
virtual void showEvent(QShowEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual int  devType() const;
virtual bool  event(QEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

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
   QSvgRenderer*  renderer(QSvgWidget* theWrappedObject) const;
   QSize  sizeHint(QSvgWidget* theWrappedObject) const;
   void paintEvent(QSvgWidget* theWrappedObject, QPaintEvent*  event);
};


