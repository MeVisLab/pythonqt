#ifndef PYTHONQTWRAPPER_QGLPIXELBUFFER_H
#define PYTHONQTWRAPPER_QGLPIXELBUFFER_H

#include <qglpixelbuffer.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QGLPixelBuffer : public QGLPixelBuffer
{
public:
    PythonQtShell_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(size, format, shareWidget),_wrapper(NULL) {};
    PythonQtShell_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0):QGLPixelBuffer(width, height, format, shareWidget),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLPixelBuffer : public QGLPixelBuffer
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QGLPixelBuffer::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLPixelBuffer::metric(metric); }
inline int  promoted_devType() const { return QGLPixelBuffer::devType(); }
};

class PythonQtWrapper_QGLPixelBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QGLPixelBuffer* new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
QGLPixelBuffer* new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format = QGLFormat::defaultFormat(), QGLWidget*  shareWidget = 0);
void delete_QGLPixelBuffer(QGLPixelBuffer* obj) { delete obj; } 
   bool  static_QGLPixelBuffer_hasOpenGLPbuffers();
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QGLFormat  format(QGLPixelBuffer* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1);
   bool  bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture);
   bool  isValid(QGLPixelBuffer* theWrappedObject) const;
   int  metric(QGLPixelBuffer* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   void updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const;
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1);
   void deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id);
   bool  doneCurrent(QGLPixelBuffer* theWrappedObject);
   Qt::HANDLE  handle(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const;
   bool  makeCurrent(QGLPixelBuffer* theWrappedObject);
   QSize  size(QGLPixelBuffer* theWrappedObject) const;
   void drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QImage  toImage(QGLPixelBuffer* theWrappedObject) const;
   void releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject);
   int  devType(QGLPixelBuffer* theWrappedObject) const;
   unsigned int  bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName);
};

#endif // PYTHONQTWRAPPER_QGLPIXELBUFFER_H
