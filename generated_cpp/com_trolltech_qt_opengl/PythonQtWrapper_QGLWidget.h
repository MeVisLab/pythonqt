#ifndef PYTHONQTWRAPPER_QGLWIDGET_H
#define PYTHONQTWRAPPER_QGLWIDGET_H

#include <qgl.h>
#include <QObject>

#include <PythonQt.h>

#include <QImage>
#include <QPixmap>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgl.h>
#include <qglcolormap.h>
#include <qicon.h>
#include <qimage.h>
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
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

class PythonQtShell_QGLWidget : public QGLWidget
{
public:
    PythonQtShell_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(context, parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(parent, shareWidget, f),_wrapper(NULL) {};
    PythonQtShell_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0):QGLWidget(format, parent, shareWidget, f),_wrapper(NULL) {};

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
virtual void glDraw();
virtual void glInit();
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initializeGL();
virtual void initializeOverlayGL();
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
virtual void paintGL();
virtual void paintOverlayGL();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void resizeGL(int  w, int  h);
virtual void resizeOverlayGL(int  w, int  h);
virtual void showEvent(QShowEvent*  arg__1);
virtual QSize  sizeHint() const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateGL();
virtual void updateOverlayGL();
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLWidget : public QGLWidget
{ public:
inline void promoted_resizeGL(int  w, int  h) { QGLWidget::resizeGL(w, h); }
inline void promoted_initializeOverlayGL() { QGLWidget::initializeOverlayGL(); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QGLWidget::resizeEvent(arg__1); }
inline void promoted_paintGL() { QGLWidget::paintGL(); }
inline void promoted_updateOverlayGL() { QGLWidget::updateOverlayGL(); }
inline void promoted_glDraw() { QGLWidget::glDraw(); }
inline bool  promoted_event(QEvent*  arg__1) { return QGLWidget::event(arg__1); }
inline QPaintEngine*  promoted_paintEngine() const { return QGLWidget::paintEngine(); }
inline void promoted_resizeOverlayGL(int  w, int  h) { QGLWidget::resizeOverlayGL(w, h); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QGLWidget::paintEvent(arg__1); }
inline void promoted_updateGL() { QGLWidget::updateGL(); }
inline void promoted_glInit() { QGLWidget::glInit(); }
inline void promoted_initializeGL() { QGLWidget::initializeGL(); }
inline void promoted_paintOverlayGL() { QGLWidget::paintOverlayGL(); }
};

class PythonQtWrapper_QGLWidget : public QObject
{ Q_OBJECT
public:
public slots:
QGLWidget* new_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
void delete_QGLWidget(QGLWidget* obj) { delete obj; } 
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void resizeGL(QGLWidget* theWrappedObject, int  w, int  h);
   void initializeOverlayGL(QGLWidget* theWrappedObject);
   void swapBuffers(QGLWidget* theWrappedObject);
   void resizeEvent(QGLWidget* theWrappedObject, QResizeEvent*  arg__1);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void paintGL(QGLWidget* theWrappedObject);
   const QGLColormap&  colormap(QGLWidget* theWrappedObject) const;
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QString&  fileName);
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void glDraw(QGLWidget* theWrappedObject);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   bool  isValid(QGLWidget* theWrappedObject) const;
   void drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   bool  event(QGLWidget* theWrappedObject, QEvent*  arg__1);
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   void resizeOverlayGL(QGLWidget* theWrappedObject, int  w, int  h);
   void drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   bool  isSharing(QGLWidget* theWrappedObject) const;
   void paintEvent(QGLWidget* theWrappedObject, QPaintEvent*  arg__1);
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void doneCurrent(QGLWidget* theWrappedObject);
   void glInit(QGLWidget* theWrappedObject);
   void makeCurrent(QGLWidget* theWrappedObject);
   void initializeGL(QGLWidget* theWrappedObject);
   void paintOverlayGL(QGLWidget* theWrappedObject);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   void deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id);
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QGLWIDGET_H
