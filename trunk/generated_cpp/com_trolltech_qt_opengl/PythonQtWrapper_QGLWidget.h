#ifndef PYTHONQTWRAPPER_QGLWIDGET_H
#define PYTHONQTWRAPPER_QGLWIDGET_H

#include <qgl.h>
#include <QObject>

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

class PythonQtWrapper_QGLWidget : public QObject
{ Q_OBJECT
public:
public slots:
QGLWidget* new_QGLWidget(QGLContext*  context, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
QGLWidget* new_QGLWidget(const QGLFormat&  format, QWidget*  parent = 0, const QGLWidget*  shareWidget = 0, Qt::WindowFlags  f = 0);
void delete_QGLWidget(QGLWidget* obj) { delete obj; } 
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLWidget* theWrappedObject, const QString&  fileName);
   const QGLColormap&  colormap(QGLWidget* theWrappedObject) const;
   const QGLContext*  context(QGLWidget* theWrappedObject) const;
   QImage  static_QGLWidget_convertToGLFormat(const QImage&  img);
   void deleteTexture(QGLWidget* theWrappedObject, unsigned int  tx_id);
   void doneCurrent(QGLWidget* theWrappedObject);
   bool  doubleBuffer(QGLWidget* theWrappedObject) const;
   void drawTexture(QGLWidget* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void drawTexture(QGLWidget* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QGLFormat  format(QGLWidget* theWrappedObject) const;
   QImage  grabFrameBuffer(QGLWidget* theWrappedObject, bool  withAlpha = false);
   bool  isSharing(QGLWidget* theWrappedObject) const;
   bool  isValid(QGLWidget* theWrappedObject) const;
   void makeCurrent(QGLWidget* theWrappedObject);
   void makeOverlayCurrent(QGLWidget* theWrappedObject);
   const QGLContext*  overlayContext(QGLWidget* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLWidget* theWrappedObject) const;
   void qglClearColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   void qglColor(QGLWidget* theWrappedObject, const QColor&  c) const;
   QPixmap  renderPixmap(QGLWidget* theWrappedObject, int  w = 0, int  h = 0, bool  useContext = false);
   void renderText(QGLWidget* theWrappedObject, double  x, double  y, double  z, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void renderText(QGLWidget* theWrappedObject, int  x, int  y, const QString&  str, const QFont&  fnt = QFont(), int  listBase = 2000);
   void setColormap(QGLWidget* theWrappedObject, const QGLColormap&  map);
   void swapBuffers(QGLWidget* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QGLWIDGET_H
