#include "PythonQtWrapper_QGLPixelBuffer.h"

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

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(const QSize&  size, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new QGLPixelBuffer(size, format, shareWidget); }

QGLPixelBuffer* PythonQtWrapper_QGLPixelBuffer::new_QGLPixelBuffer(int  width, int  height, const QGLFormat&  format, QGLWidget*  shareWidget)
{ 
return new QGLPixelBuffer(width, height, format, shareWidget); }

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QImage&  image, unsigned int  target)
{
return theWrappedObject->bindTexture(image, target);
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QPixmap&  pixmap, unsigned int  target)
{
return theWrappedObject->bindTexture(pixmap, target);
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::bindTexture(QGLPixelBuffer* theWrappedObject, const QString&  fileName)
{
return theWrappedObject->bindTexture(fileName);
}

bool  PythonQtWrapper_QGLPixelBuffer::bindToDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture)
{
return theWrappedObject->bindToDynamicTexture(texture);
}

void PythonQtWrapper_QGLPixelBuffer::deleteTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id)
{
theWrappedObject->deleteTexture(texture_id);
}

int  PythonQtWrapper_QGLPixelBuffer::depth(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->depth();
}

bool  PythonQtWrapper_QGLPixelBuffer::doneCurrent(QGLPixelBuffer* theWrappedObject)
{
return theWrappedObject->doneCurrent();
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(point, textureId, textureTarget);
}

void PythonQtWrapper_QGLPixelBuffer::drawTexture(QGLPixelBuffer* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
theWrappedObject->drawTexture(target, textureId, textureTarget);
}

QGLFormat  PythonQtWrapper_QGLPixelBuffer::format(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->format();
}

unsigned int  PythonQtWrapper_QGLPixelBuffer::generateDynamicTexture(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->generateDynamicTexture();
}

Qt::HANDLE  PythonQtWrapper_QGLPixelBuffer::handle(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->handle();
}

bool  PythonQtWrapper_QGLPixelBuffer::static_QGLPixelBuffer_hasOpenGLPbuffers()
{
return QGLPixelBuffer::hasOpenGLPbuffers();
}

int  PythonQtWrapper_QGLPixelBuffer::height(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QGLPixelBuffer::heightMM(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

bool  PythonQtWrapper_QGLPixelBuffer::isValid(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QGLPixelBuffer::logicalDpiX(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QGLPixelBuffer::logicalDpiY(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

bool  PythonQtWrapper_QGLPixelBuffer::makeCurrent(QGLPixelBuffer* theWrappedObject)
{
return theWrappedObject->makeCurrent();
}

int  PythonQtWrapper_QGLPixelBuffer::numColors(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->numColors();
}

QPaintEngine*  PythonQtWrapper_QGLPixelBuffer::paintEngine(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QGLPixelBuffer::paintingActive(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QGLPixelBuffer::physicalDpiX(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QGLPixelBuffer::physicalDpiY(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

void PythonQtWrapper_QGLPixelBuffer::releaseFromDynamicTexture(QGLPixelBuffer* theWrappedObject)
{
theWrappedObject->releaseFromDynamicTexture();
}

QSize  PythonQtWrapper_QGLPixelBuffer::size(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->size();
}

QImage  PythonQtWrapper_QGLPixelBuffer::toImage(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->toImage();
}

void PythonQtWrapper_QGLPixelBuffer::updateDynamicTexture(QGLPixelBuffer* theWrappedObject, unsigned int  texture_id) const
{
theWrappedObject->updateDynamicTexture(texture_id);
}

int  PythonQtWrapper_QGLPixelBuffer::width(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QGLPixelBuffer::widthMM(QGLPixelBuffer* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

