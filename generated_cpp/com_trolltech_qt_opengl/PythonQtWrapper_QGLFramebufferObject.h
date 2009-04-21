#ifndef PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
#define PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H

#include <qglframebufferobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtShell_QGLFramebufferObject : public QGLFramebufferObject
{
public:
    PythonQtShell_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(size, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(const QSize&  size, unsigned int  target = 0x0DE1):QGLFramebufferObject(size, target),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target = 0x0DE1, unsigned int  internal_format = 0x8058):QGLFramebufferObject(width, height, attachment, target, internal_format),_wrapper(NULL) {};
    PythonQtShell_QGLFramebufferObject(int  width, int  height, unsigned int  target = 0x0DE1):QGLFramebufferObject(width, height, target),_wrapper(NULL) {};

virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual QPaintEngine*  paintEngine() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLFramebufferObject : public QGLFramebufferObject
{ public:
inline int  devType() const { return QGLFramebufferObject::devType(); }
inline int  metric(QPaintDevice::PaintDeviceMetric  metric) const { return QGLFramebufferObject::metric(metric); }
};

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
   unsigned int  handle(QGLFramebufferObject* theWrappedObject) const;
   bool  bind(QGLFramebufferObject* theWrappedObject);
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  release(QGLFramebufferObject* theWrappedObject);
   int  devType(QGLFramebufferObject* theWrappedObject) const;
   bool  isValid(QGLFramebufferObject* theWrappedObject) const;
   QImage  toImage(QGLFramebufferObject* theWrappedObject) const;
   int  metric(QGLFramebufferObject* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QPaintEngine*  paintEngine(QGLFramebufferObject* theWrappedObject) const;
   QGLFramebufferObject::Attachment  attachment(QGLFramebufferObject* theWrappedObject) const;
   void drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   bool  static_QGLFramebufferObject_hasOpenGLFramebufferObjects();
   QSize  size(QGLFramebufferObject* theWrappedObject) const;
   unsigned int  texture(QGLFramebufferObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGLFRAMEBUFFEROBJECT_H
