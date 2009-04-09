#include "PythonQtWrapper_QImageReader.h"

#include <QColor>
#include <QImage>
#include <QRect>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qrect.h>
#include <qsize.h>
#include <qstringlist.h>

QImageReader* PythonQtWrapper_QImageReader::new_QImageReader()
{ 
return new QImageReader(); }

QImageReader* PythonQtWrapper_QImageReader::new_QImageReader(QIODevice*  device, const QByteArray&  format)
{ 
return new QImageReader(device, format); }

QImageReader* PythonQtWrapper_QImageReader::new_QImageReader(const QString&  fileName, const QByteArray&  format)
{ 
return new QImageReader(fileName, format); }

QColor  PythonQtWrapper_QImageReader::backgroundColor(QImageReader* theWrappedObject) const
{
return theWrappedObject->backgroundColor();
}

bool  PythonQtWrapper_QImageReader::canRead(QImageReader* theWrappedObject) const
{
return theWrappedObject->canRead();
}

QRect  PythonQtWrapper_QImageReader::clipRect(QImageReader* theWrappedObject) const
{
return theWrappedObject->clipRect();
}

int  PythonQtWrapper_QImageReader::currentImageNumber(QImageReader* theWrappedObject) const
{
return theWrappedObject->currentImageNumber();
}

QRect  PythonQtWrapper_QImageReader::currentImageRect(QImageReader* theWrappedObject) const
{
return theWrappedObject->currentImageRect();
}

QIODevice*  PythonQtWrapper_QImageReader::device(QImageReader* theWrappedObject) const
{
return theWrappedObject->device();
}

QImageReader::ImageReaderError  PythonQtWrapper_QImageReader::error(QImageReader* theWrappedObject) const
{
return theWrappedObject->error();
}

QString  PythonQtWrapper_QImageReader::errorString(QImageReader* theWrappedObject) const
{
return theWrappedObject->errorString();
}

QString  PythonQtWrapper_QImageReader::fileName(QImageReader* theWrappedObject) const
{
return theWrappedObject->fileName();
}

QByteArray  PythonQtWrapper_QImageReader::format(QImageReader* theWrappedObject) const
{
return theWrappedObject->format();
}

int  PythonQtWrapper_QImageReader::imageCount(QImageReader* theWrappedObject) const
{
return theWrappedObject->imageCount();
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(QIODevice*  device)
{
return QImageReader::imageFormat(device);
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(const QString&  fileName)
{
return QImageReader::imageFormat(fileName);
}

bool  PythonQtWrapper_QImageReader::jumpToImage(QImageReader* theWrappedObject, int  imageNumber)
{
return theWrappedObject->jumpToImage(imageNumber);
}

bool  PythonQtWrapper_QImageReader::jumpToNextImage(QImageReader* theWrappedObject)
{
return theWrappedObject->jumpToNextImage();
}

int  PythonQtWrapper_QImageReader::loopCount(QImageReader* theWrappedObject) const
{
return theWrappedObject->loopCount();
}

int  PythonQtWrapper_QImageReader::nextImageDelay(QImageReader* theWrappedObject) const
{
return theWrappedObject->nextImageDelay();
}

int  PythonQtWrapper_QImageReader::quality(QImageReader* theWrappedObject) const
{
return theWrappedObject->quality();
}

QImage  PythonQtWrapper_QImageReader::read(QImageReader* theWrappedObject)
{
return theWrappedObject->read();
}

QRect  PythonQtWrapper_QImageReader::scaledClipRect(QImageReader* theWrappedObject) const
{
return theWrappedObject->scaledClipRect();
}

QSize  PythonQtWrapper_QImageReader::scaledSize(QImageReader* theWrappedObject) const
{
return theWrappedObject->scaledSize();
}

void PythonQtWrapper_QImageReader::setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color)
{
theWrappedObject->setBackgroundColor(color);
}

void PythonQtWrapper_QImageReader::setClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
theWrappedObject->setClipRect(rect);
}

void PythonQtWrapper_QImageReader::setDevice(QImageReader* theWrappedObject, QIODevice*  device)
{
theWrappedObject->setDevice(device);
}

void PythonQtWrapper_QImageReader::setFileName(QImageReader* theWrappedObject, const QString&  fileName)
{
theWrappedObject->setFileName(fileName);
}

void PythonQtWrapper_QImageReader::setFormat(QImageReader* theWrappedObject, const QByteArray&  format)
{
theWrappedObject->setFormat(format);
}

void PythonQtWrapper_QImageReader::setQuality(QImageReader* theWrappedObject, int  quality)
{
theWrappedObject->setQuality(quality);
}

void PythonQtWrapper_QImageReader::setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
theWrappedObject->setScaledClipRect(rect);
}

void PythonQtWrapper_QImageReader::setScaledSize(QImageReader* theWrappedObject, const QSize&  size)
{
theWrappedObject->setScaledSize(size);
}

QSize  PythonQtWrapper_QImageReader::size(QImageReader* theWrappedObject) const
{
return theWrappedObject->size();
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedImageFormats()
{
return QImageReader::supportedImageFormats();
}

bool  PythonQtWrapper_QImageReader::supportsAnimation(QImageReader* theWrappedObject) const
{
return theWrappedObject->supportsAnimation();
}

bool  PythonQtWrapper_QImageReader::supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return theWrappedObject->supportsOption(option);
}

QString  PythonQtWrapper_QImageReader::text(QImageReader* theWrappedObject, const QString&  key) const
{
return theWrappedObject->text(key);
}

QStringList  PythonQtWrapper_QImageReader::textKeys(QImageReader* theWrappedObject) const
{
return theWrappedObject->textKeys();
}

