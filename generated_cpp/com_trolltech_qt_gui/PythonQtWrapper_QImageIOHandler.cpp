#include "PythonQtWrapper_QImageIOHandler.h"

#include <QRect>
#include <QVariant>
#include <qbytearray.h>
#include <qimage.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qrect.h>

bool  PythonQtWrapper_QImageIOHandler::canRead(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->canRead();
}

int  PythonQtWrapper_QImageIOHandler::currentImageNumber(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->currentImageNumber();
}

QRect  PythonQtWrapper_QImageIOHandler::currentImageRect(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->currentImageRect();
}

QIODevice*  PythonQtWrapper_QImageIOHandler::device(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->device();
}

QByteArray  PythonQtWrapper_QImageIOHandler::format(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->format();
}

int  PythonQtWrapper_QImageIOHandler::imageCount(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->imageCount();
}

bool  PythonQtWrapper_QImageIOHandler::jumpToImage(QImageIOHandler* theWrappedObject, int  imageNumber)
{
return theWrappedObject->jumpToImage(imageNumber);
}

bool  PythonQtWrapper_QImageIOHandler::jumpToNextImage(QImageIOHandler* theWrappedObject)
{
return theWrappedObject->jumpToNextImage();
}

int  PythonQtWrapper_QImageIOHandler::loopCount(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->loopCount();
}

int  PythonQtWrapper_QImageIOHandler::nextImageDelay(QImageIOHandler* theWrappedObject) const
{
return theWrappedObject->nextImageDelay();
}

QVariant  PythonQtWrapper_QImageIOHandler::option(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return theWrappedObject->option(option);
}

bool  PythonQtWrapper_QImageIOHandler::read(QImageIOHandler* theWrappedObject, QImage*  image)
{
return theWrappedObject->read(image);
}

void PythonQtWrapper_QImageIOHandler::setDevice(QImageIOHandler* theWrappedObject, QIODevice*  device)
{
theWrappedObject->setDevice(device);
}

void PythonQtWrapper_QImageIOHandler::setFormat(QImageIOHandler* theWrappedObject, const QByteArray&  format)
{
theWrappedObject->setFormat(format);
}

void PythonQtWrapper_QImageIOHandler::setOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option, const QVariant&  value)
{
theWrappedObject->setOption(option, value);
}

bool  PythonQtWrapper_QImageIOHandler::supportsOption(QImageIOHandler* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return theWrappedObject->supportsOption(option);
}

bool  PythonQtWrapper_QImageIOHandler::write(QImageIOHandler* theWrappedObject, const QImage&  image)
{
return theWrappedObject->write(image);
}

