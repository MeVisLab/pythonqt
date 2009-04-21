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

QString  PythonQtWrapper_QImageReader::fileName(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).fileName();
}

void PythonQtWrapper_QImageReader::setDevice(QImageReader* theWrappedObject, QIODevice*  device)
{
 (*theWrappedObject).setDevice(device);
}

int  PythonQtWrapper_QImageReader::loopCount(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).loopCount();
}

bool  PythonQtWrapper_QImageReader::jumpToNextImage(QImageReader* theWrappedObject)
{
return  (*theWrappedObject).jumpToNextImage();
}

QSize  PythonQtWrapper_QImageReader::scaledSize(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).scaledSize();
}

QStringList  PythonQtWrapper_QImageReader::textKeys(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).textKeys();
}

QList<QByteArray >  PythonQtWrapper_QImageReader::static_QImageReader_supportedImageFormats()
{
return QImageReader::supportedImageFormats();
}

int  PythonQtWrapper_QImageReader::imageCount(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).imageCount();
}

QString  PythonQtWrapper_QImageReader::errorString(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).errorString();
}

QIODevice*  PythonQtWrapper_QImageReader::device(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

QImageReader::ImageReaderError  PythonQtWrapper_QImageReader::error(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).error();
}

int  PythonQtWrapper_QImageReader::nextImageDelay(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).nextImageDelay();
}

QRect  PythonQtWrapper_QImageReader::scaledClipRect(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).scaledClipRect();
}

void PythonQtWrapper_QImageReader::setClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
 (*theWrappedObject).setClipRect(rect);
}

QRect  PythonQtWrapper_QImageReader::clipRect(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).clipRect();
}

QSize  PythonQtWrapper_QImageReader::size(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

QByteArray  PythonQtWrapper_QImageReader::format(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).format();
}

bool  PythonQtWrapper_QImageReader::supportsOption(QImageReader* theWrappedObject, QImageIOHandler::ImageOption  option) const
{
return  (*theWrappedObject).supportsOption(option);
}

bool  PythonQtWrapper_QImageReader::canRead(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).canRead();
}

int  PythonQtWrapper_QImageReader::quality(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).quality();
}

void PythonQtWrapper_QImageReader::setQuality(QImageReader* theWrappedObject, int  quality)
{
 (*theWrappedObject).setQuality(quality);
}

QString  PythonQtWrapper_QImageReader::text(QImageReader* theWrappedObject, const QString&  key) const
{
return  (*theWrappedObject).text(key);
}

QColor  PythonQtWrapper_QImageReader::backgroundColor(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).backgroundColor();
}

void PythonQtWrapper_QImageReader::setBackgroundColor(QImageReader* theWrappedObject, const QColor&  color)
{
 (*theWrappedObject).setBackgroundColor(color);
}

QImage  PythonQtWrapper_QImageReader::read(QImageReader* theWrappedObject)
{
return  (*theWrappedObject).read();
}

void PythonQtWrapper_QImageReader::setFileName(QImageReader* theWrappedObject, const QString&  fileName)
{
 (*theWrappedObject).setFileName(fileName);
}

QRect  PythonQtWrapper_QImageReader::currentImageRect(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).currentImageRect();
}

void PythonQtWrapper_QImageReader::setFormat(QImageReader* theWrappedObject, const QByteArray&  format)
{
 (*theWrappedObject).setFormat(format);
}

void PythonQtWrapper_QImageReader::setScaledClipRect(QImageReader* theWrappedObject, const QRect&  rect)
{
 (*theWrappedObject).setScaledClipRect(rect);
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
return  (*theWrappedObject).jumpToImage(imageNumber);
}

bool  PythonQtWrapper_QImageReader::supportsAnimation(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).supportsAnimation();
}

void PythonQtWrapper_QImageReader::setScaledSize(QImageReader* theWrappedObject, const QSize&  size)
{
 (*theWrappedObject).setScaledSize(size);
}

int  PythonQtWrapper_QImageReader::currentImageNumber(QImageReader* theWrappedObject) const
{
return  (*theWrappedObject).currentImageNumber();
}

