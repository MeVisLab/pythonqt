#ifndef PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
#define PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H

#include <qglframebufferobject.h>
#include <QObject>

#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QGLFramebufferObject : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attachment )
enum Attachment{
  NoAttachment = QGLFramebufferObject::NoAttachment,   CombinedDepthStencil = QGLFramebufferObject::CombinedDepthStencil,   Depth = QGLFramebufferObject::Depth};
public slots:
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058);
QGLFramebufferObject* new_QGLFramebufferObject(int  width, int  height, unsigned int  target = 0x0DE1);
void delete_QGLFramebufferObject(QGLFramebufferObject* obj) { delete obj; } 
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   bool  bind(QGLFramebufferObject* theWrappedObject);
   int  depth(QGLFramebufferObject* theWrappedObject) const;
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   unsigned int  handle(QGLFramebufferObject* theWrappedObject) const;
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   int  height(QGLFramebufferObject* theWrappedObject) const;
   int  heightMM(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   int  logicalDpiX(QGLFramebufferObject* theWrappedObject) const;
   int  logicalDpiY(QGLFramebufferObject* theWrappedObject) const;
   int  numColors(QGLFramebufferObject* theWrappedObject) const;
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   bool  paintingActive(QGLFramebufferObject* theWrappedObject) const;
   int  physicalDpiX(QGLFramebufferObject* theWrappedObject) const;
   int  physicalDpiY(QGLFramebufferObject* theWrappedObject) const;
   bool  release(QGLFramebufferObject* theWrappedObject);
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   unsigned int  texture(QGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
   int  width(QGLFramebufferObject* theWrappedObject) const;
   int  widthMM(QGLFramebufferObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
