#ifndef PYTHONQTWRAPPER_QGLPIXELBUFFER_H
#define PYTHONQTWRAPPER_QGLPIXELBUFFER_H

#include <qglpixelbuffer.h>
#include <QObject>

#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QGLPixelBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QGLPixelBuffer* new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
QGLPixelBuffer* new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
void delete_QGLPixelBuffer(QGLPixelBuffer* obj) { delete obj; } 
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1);
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName);
   bool  bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture);
   void deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id);
   int  depth(QGLPixelBuffer* theWrappedObject) const;
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const;
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   int  height(QGLPixelBuffer* theWrappedObject) const;
   int  heightMM(QGLPixelBuffer* theWrappedObject) const;
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
   int  logicalDpiX(QGLPixelBuffer* theWrappedObject) const;
   int  logicalDpiY(QGLPixelBuffer* theWrappedObject) const;
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   int  numColors(QGLPixelBuffer* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   bool  paintingActive(QGLPixelBuffer* theWrappedObject) const;
   int  physicalDpiX(QGLPixelBuffer* theWrappedObject) const;
   int  physicalDpiY(QGLPixelBuffer* theWrappedObject) const;
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   void updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const;
   int  width(QGLPixelBuffer* theWrappedObject) const;
   int  widthMM(QGLPixelBuffer* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLPIXELBUFFER_H
