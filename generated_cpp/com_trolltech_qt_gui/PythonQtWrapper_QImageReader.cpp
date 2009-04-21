#include "PythonQtWrapper_QImageReader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

void PythonQtWrapper_QImageReader::setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
 theWrappedObject->setScaledClipRect(rect);
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(QIODevice*  device)
{
return QImageReader::imageFormat(device);
}

QSize  PythonQtWrapper_QImageReader::size(QImageReader* theWrappedObject) const
{
return  theWrappedObject->size();
}

void PythonQtWrapper_QImageReader::setScaledSize(QImageReader* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setScaledSize(size);
}

QRect  PythonQtWrapper_QImageReader::currentImageRect(QImageReader* theWrappedObject) const
{
return  theWrappedObject->currentImageRect();
}

QSize  PythonQtWrapper_QImageReader::scaledSize(QImageReader* theWrappedObject) const
{
return  theWrappedObject->scaledSize();
}

QStringList  PythonQtWrapper_QImageReader::textKeys(QImageReader* theWrappedObject) const
{
return  theWrappedObject->textKeys();
}

int  PythonQtWrapper_QImageReader::loopCount(QImageReader* theWrappedObject) const
{
return  theWrappedObject->loopCount();
}

int  PythonQtWrapper_QImageReader::quality(QImageReader* theWrappedObject) const
{
return  theWrappedObject->quality();
}

bool  PythonQtWrapper_QImageReader::jumpToImage(QImageReader* theWrappedObject, int  imageNumber)
{
return  theWrappedObject->jumpToImage(imageNumber);
}

void PythonQtWrapper_QImageReader::setFormat(QImageReader* theWrappedObject, const QByteArray&  format)
{
 theWrappedObject->setFormat(format);
}

QIODevice*  PythonQtWrapper_QImageReader::device(QImageReader* theWrappedObject) const
{
return  theWrappedObject->device();
}

int  PythonQtWrapper_QImageReader::imageCount(QImageReader* theWrappedObject) const
{
return  theWrappedObject->imageCount();
}

int  PythonQtWrapper_QImageReader::nextImageDelay(QImageReader* theWrappedObject) const
{
return  theWrappedObject->nextImageDelay();
}

void PythonQtWrapper_QImageReader::setClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
 theWrappedObject->setClipRect(rect);
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedImageFormats()
{
return QImageReader::supportedImageFormats();
}

QString  PythonQtWrapper_QImageReader::text(QImageReader* theWrappedObject, const QString&  key) const
{
return  theWrappedObject->text(key);
}

QByteArray  PythonQtWrapper_QImageReader::format(QImageReader* theWrappedObject) const
{
return  theWrappedObject->format();
}

QImageReader::ImageReaderError  PythonQtWrapper_QImageReader::error(QImageReader* theWrappedObject) const
{
return  theWrappedObject->error();
}

void PythonQtWrapper_QImageReader::setFileName(QImageReader* theWrappedObject, const QString&  fileName)
{
 theWrappedObject->setFileName(fileName);
}

bool  PythonQtWrapper_QImageReader::supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return  theWrappedObject->supportsOption(option);
}

QByteArray  PythonQtWrapper_QImageReader::static_QImageReader_imageFormat(const QString&  fileName)
{
return QImageReader::imageFormat(fileName);
}

QColor  PythonQtWrapper_QImageReader::backgroundColor(QImageReader* theWrappedObject) const
{
return  theWrappedObject->backgroundColor();
}

QString  PythonQtWrapper_QImageReader::fileName(QImageReader* theWrappedObject) const
{
return  theWrappedObject->fileName();
}

QImage  PythonQtWrapper_QImageReader::read(QImageReader* theWrappedObject)
{
return  theWrappedObject->read();
}

bool  PythonQtWrapper_QImageReader::supportsAnimation(QImageReader* theWrappedObject) const
{
return  theWrappedObject->supportsAnimation();
}

bool  PythonQtWrapper_QImageReader::canRead(QImageReader* theWrappedObject) const
{
return  theWrappedObject->canRead();
}

QRect  PythonQtWrapper_QImageReader::clipRect(QImageReader* theWrappedObject) const
{
return  theWrappedObject->clipRect();
}

void PythonQtWrapper_QImageReader::setQuality(QImageReader* theWrappedObject, int  quality)
{
 theWrappedObject->setQuality(quality);
}

QRect  PythonQtWrapper_QImageReader::scaledClipRect(QImageReader* theWrappedObject) const
{
return  theWrappedObject->scaledClipRect();
}

int  PythonQtWrapper_QImageReader::currentImageNumber(QImageReader* theWrappedObject) const
{
return  theWrappedObject->currentImageNumber();
}

void PythonQtWrapper_QImageReader::setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color)
{
 theWrappedObject->setBackgroundColor(color);
}

void PythonQtWrapper_QImageReader::setDevice(QImageReader* theWrappedObject, QIODevice*  device)
{
 theWrappedObject->setDevice(device);
}

QString  PythonQtWrapper_QImageReader::errorString(QImageReader* theWrappedObject) const
{
return  theWrappedObject->errorString();
}

bool  PythonQtWrapper_QImageReader::jumpToNextImage(QImageReader* theWrappedObject)
{
return  theWrappedObject->jumpToNextImage();
}

