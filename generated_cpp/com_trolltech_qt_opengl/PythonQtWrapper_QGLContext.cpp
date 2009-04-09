#include "PythonQtWrapper_QGLContext.h"

#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format)
{ 
return new QGLContext(format); }

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format, QPaintDevice*  device)
{ 
return new QGLContext(format, device); }

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target, int  format)
{
return theWrappedObject->bindTexture(image, target, format);
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format)
{
return theWrappedObject->bindTexture(pixmap, target, format);
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QString&  fileName)
{
return theWrappedObject->bindTexture(fileName);
}

bool  PythonQtWrapper_QGLContext::create(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
return theWrappedObject->create(shareContext);
}

const QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_currentContext()
{
return QGLContext::currentContext();
}

void PythonQtWrapper_QGLContext::deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id)
{
theWrappedObject->deleteTexture(tx_id);
}

QPaintDevice*  PythonQtWrapper_QGLContext::device(QGLContext* theWrappedObject) const
{
return theWrappedObject->device();
}

void PythonQtWrapper_QGLContext::doneCurrent(QGLContext* theWrappedObject)
{
theWrappedObject->doneCurrent();
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(point, textureId, textureTarget);
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(target, textureId, textureTarget);
}

QGLFormat  PythonQtWrapper_QGLContext::format(QGLContext* theWrappedObject) const
{
return theWrappedObject->format();
}

bool  PythonQtWrapper_QGLContext::isSharing(QGLContext* theWrappedObject) const
{
return theWrappedObject->isSharing();
}

bool  PythonQtWrapper_QGLContext::isValid(QGLContext* theWrappedObject) const
{
return theWrappedObject->isValid();
}

void PythonQtWrapper_QGLContext::makeCurrent(QGLContext* theWrappedObject)
{
theWrappedObject->makeCurrent();
}

QColor  PythonQtWrapper_QGLContext::overlayTransparentColor(QGLContext* theWrappedObject) const
{
return theWrappedObject->overlayTransparentColor();
}

QGLFormat  PythonQtWrapper_QGLContext::requestedFormat(QGLContext* theWrappedObject) const
{
return theWrappedObject->requestedFormat();
}

void PythonQtWrapper_QGLContext::reset(QGLContext* theWrappedObject)
{
theWrappedObject->reset();
}

void PythonQtWrapper_QGLContext::setFormat(QGLContext* theWrappedObject, const QGLFormat&  format)
{
theWrappedObject->setFormat(format);
}

void PythonQtWrapper_QGLContext::static_QGLContext_setTextureCacheLimit(int  size)
{
QGLContext::setTextureCacheLimit(size);
}

void PythonQtWrapper_QGLContext::swapBuffers(QGLContext* theWrappedObject) const
{
theWrappedObject->swapBuffers();
}

int  PythonQtWrapper_QGLContext::static_QGLContext_textureCacheLimit()
{
return QGLContext::textureCacheLimit();
}

