#ifndef PYTHONQTWRAPPER_QGLCONTEXT_H
#define PYTHONQTWRAPPER_QGLCONTEXT_H

#include <qgl.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

class PythonQtShell_QGLContext : public QGLContext
{
public:
    PythonQtShell_QGLContext(const QGLFormat&  format):QGLContext(format),_wrapper(NULL) {};
    PythonQtShell_QGLContext(const QGLFormat&  format, QPaintDevice*  device):QGLContext(format, device),_wrapper(NULL) {};

virtual bool  chooseContext(const QGLContext*  shareContext = 0);
virtual bool  create(const QGLContext*  shareContext = 0);
virtual void doneCurrent();
virtual void makeCurrent();
virtual void swapBuffers() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGLContext : public QGLContext
{ public:
inline bool  promoted_create(const QGLContext*  shareContext = 0) { return QGLContext::create(shareContext); }
inline void promoted_makeCurrent() { QGLContext::makeCurrent(); }
inline void promoted_swapBuffers() const { QGLContext::swapBuffers(); }
inline void promoted_doneCurrent() { QGLContext::doneCurrent(); }
inline bool  promoted_chooseContext(const QGLContext*  shareContext = 0) { return QGLContext::chooseContext(shareContext); }
};

class PythonQtWrapper_QGLContext : public QObject
{ Q_OBJECT
public:
public slots:
QGLContext* new_QGLContext(const QGLFormat&  format);
QGLContext* new_QGLContext(const QGLFormat&  format, QPaintDevice*  device);
void delete_QGLContext(QGLContext* obj) { delete obj; } 
   void setFormat(QGLContext* theWrappedObject, const QGLFormat&  format);
   bool  create(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
   void makeCurrent(QGLContext* theWrappedObject);
   void reset(QGLContext* theWrappedObject);
   void deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id);
   QPaintDevice*  device(QGLContext* theWrappedObject) const;
   void drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target = 0x0DE1, int  format = 0x1908);
   void swapBuffers(QGLContext* theWrappedObject) const;
   bool  isSharing(QGLContext* theWrappedObject) const;
   void drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget = 0x0DE1);
   QGLFormat  requestedFormat(QGLContext* theWrappedObject) const;
   QGLFormat  format(QGLContext* theWrappedObject) const;
   QColor  overlayTransparentColor(QGLContext* theWrappedObject) const;
   void static_QGLContext_setTextureCacheLimit(int  size);
   const QGLContext*  static_QGLContext_currentContext();
   void doneCurrent(QGLContext* theWrappedObject);
   int  static_QGLContext_textureCacheLimit();
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QString&  fileName);
   bool  isValid(QGLContext* theWrappedObject) const;
   unsigned int  bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target = 0x0DE1, int  format = 0x1908);
   bool  chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext = 0);
};

#endif // PYTHONQTWRAPPER_QGLCONTEXT_H
