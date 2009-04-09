#include "PythonQtWrapper_QGLFramebufferObject.h"

#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, QGLFramebufferObject::Attachment  attachment, unsigned int  target, unsigned int  internal_format)
{ 
return new QGLFramebufferObject(size, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(const QSize&  size, unsigned int  target)
{ 
return new QGLFramebufferObject(size, target); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, QGLFramebufferObject::Attachment  attachment, unsigned int  target, unsigned int  internal_format)
{ 
return new QGLFramebufferObject(width, height, attachment, target, internal_format); }

QGLFramebufferObject* PythonQtWrapper_QGLFramebufferObject::new_QGLFramebufferObject(int  width, int  height, unsigned int  target)
{ 
return new QGLFramebufferObject(width, height, target); }

QGLFramebufferObject::Attachment  PythonQtWrapper_QGLFramebufferObject::attachment(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->attachment();
}

bool  PythonQtWrapper_QGLFramebufferObject::bind(QGLFramebufferObject* theWrappedObject)
{
return theWrappedObject->bind();
}

int  PythonQtWrapper_QGLFramebufferObject::depth(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->depth();
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(point, textureId, textureTarget);
}

void PythonQtWrapper_QGLFramebufferObject::drawTexture(QGLFramebufferObject* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(target, textureId, textureTarget);
}

unsigned int  PythonQtWrapper_QGLFramebufferObject::handle(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->handle();
}

bool  PythonQtWrapper_QGLFramebufferObject::static_QGLFramebufferObject_hasOpenGLFramebufferObjects()
{
return QGLFramebufferObject::hasOpenGLFramebufferObjects();
}

int  PythonQtWrapper_QGLFramebufferObject::height(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QGLFramebufferObject::heightMM(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

bool  PythonQtWrapper_QGLFramebufferObject::isValid(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QGLFramebufferObject::logicalDpiX(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QGLFramebufferObject::logicalDpiY(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

int  PythonQtWrapper_QGLFramebufferObject::numColors(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->numColors();
}

QPaintEngine*  PythonQtWrapper_QGLFramebufferObject::paintEngine(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QGLFramebufferObject::paintingActive(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QGLFramebufferObject::physicalDpiX(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QGLFramebufferObject::physicalDpiY(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

bool  PythonQtWrapper_QGLFramebufferObject::release(QGLFramebufferObject* theWrappedObject)
{
return theWrappedObject->release();
}

QSize  PythonQtWrapper_QGLFramebufferObject::size(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->size();
}

unsigned int  PythonQtWrapper_QGLFramebufferObject::texture(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->texture();
}

QImage  PythonQtWrapper_QGLFramebufferObject::toImage(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->toImage();
}

int  PythonQtWrapper_QGLFramebufferObject::width(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QGLFramebufferObject::widthMM(QGLFramebufferObject* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

