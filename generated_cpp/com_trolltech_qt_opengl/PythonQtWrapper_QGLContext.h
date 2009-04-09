#ifndef PYTHONQTWRAPPER_QGLCONTEXT_H
#define PYTHONQTWRAPPER_QGLCONTEXT_H

#include <qgl.h>
#include <QObject>

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   const QGLContext*  static_QGLContext_currentContext();
   void deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id);
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void doneCurrent(QGLContext* theWrappedObject);
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QGLFormat  format(QGLContext* theWrappedObject) const;
   bool  isSharing(QGLContext* theWrappedObject) const;
   bool  isValid(QGLContext* theWrappedObject) const;
   void makeCurrent(QGLContext* theWrappedObject);
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   void reset(QGLContext* theWrappedObject);
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   void static_QGLContext_setTextureCacheLimit(int  size);
   void swapBuffers(QGLContext* theWrappedObject) const;
   int  static_QGLContext_textureCacheLimit();
};

#endif // PYTHONQTWRAPPER_QGLCONTEXT_H
