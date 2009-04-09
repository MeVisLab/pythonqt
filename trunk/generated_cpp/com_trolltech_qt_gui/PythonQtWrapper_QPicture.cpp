#include "PythonQtWrapper_QPicture.h"

#include <QVariant>
#include <qdatastream.h>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpicture.h>
#include <qrect.h>

QPicture* PythonQtWrapper_QPicture::new_QPicture(const QPicture&  arg__1)
{ 
return new QPicture(arg__1); }

QPicture* PythonQtWrapper_QPicture::new_QPicture(int  formatVersion)
{ 
return new QPicture(formatVersion); }

QRect  PythonQtWrapper_QPicture::boundingRect(QPicture* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

const char*  PythonQtWrapper_QPicture::data(QPicture* theWrappedObject) const
{
return theWrappedObject->data();
}

int  PythonQtWrapper_QPicture::depth(QPicture* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QPicture::devType(QPicture* theWrappedObject) const
{
return theWrappedObject->devType();
}

int  PythonQtWrapper_QPicture::height(QPicture* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QPicture::heightMM(QPicture* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

bool  PythonQtWrapper_QPicture::isNull(QPicture* theWrappedObject) const
{
return theWrappedObject->isNull();
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
return theWrappedObject->load(dev, format);
}

bool  PythonQtWrapper_QPicture::load(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
return theWrappedObject->load(fileName, format);
}

int  PythonQtWrapper_QPicture::logicalDpiX(QPicture* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QPicture::logicalDpiY(QPicture* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

int  PythonQtWrapper_QPicture::numColors(QPicture* theWrappedObject) const
{
return theWrappedObject->numColors();
}

void PythonQtWrapper_QPicture::writeTo(QPicture* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

void PythonQtWrapper_QPicture::readFrom(QPicture* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QPaintEngine*  PythonQtWrapper_QPicture::paintEngine(QPicture* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QPicture::paintingActive(QPicture* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QPicture::physicalDpiX(QPicture* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QPicture::physicalDpiY(QPicture* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

bool  PythonQtWrapper_QPicture::play(QPicture* theWrappedObject, QPainter*  p)
{
return theWrappedObject->play(p);
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, QIODevice*  dev, const char*  format)
{
return theWrappedObject->save(dev, format);
}

bool  PythonQtWrapper_QPicture::save(QPicture* theWrappedObject, const QString&  fileName, const char*  format)
{
return theWrappedObject->save(fileName, format);
}

void PythonQtWrapper_QPicture::setBoundingRect(QPicture* theWrappedObject, const QRect&  r)
{
theWrappedObject->setBoundingRect(r);
}

uint  PythonQtWrapper_QPicture::size(QPicture* theWrappedObject) const
{
return theWrappedObject->size();
}

int  PythonQtWrapper_QPicture::width(QPicture* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QPicture::widthMM(QPicture* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

