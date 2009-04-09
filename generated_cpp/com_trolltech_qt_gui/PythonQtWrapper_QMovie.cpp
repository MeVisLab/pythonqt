#include "PythonQtWrapper_QMovie.h"

#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>

QMovie* PythonQtWrapper_QMovie::new_QMovie(QIODevice*  device, const QByteArray&  format, QObject*  parent)
{ 
return new QMovie(device, format, parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(QObject*  parent)
{ 
return new QMovie(parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(const QString&  fileName, const QByteArray&  format, QObject*  parent)
{ 
return new QMovie(fileName, format, parent); }

QColor  PythonQtWrapper_QMovie::backgroundColor(QMovie* theWrappedObject) const
{
return theWrappedObject->backgroundColor();
}

QMovie::CacheMode  PythonQtWrapper_QMovie::cacheMode(QMovie* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

int  PythonQtWrapper_QMovie::currentFrameNumber(QMovie* theWrappedObject) const
{
return theWrappedObject->currentFrameNumber();
}

QImage  PythonQtWrapper_QMovie::currentImage(QMovie* theWrappedObject) const
{
return theWrappedObject->currentImage();
}

QPixmap  PythonQtWrapper_QMovie::currentPixmap(QMovie* theWrappedObject) const
{
return theWrappedObject->currentPixmap();
}

QIODevice*  PythonQtWrapper_QMovie::device(QMovie* theWrappedObject) const
{
return theWrappedObject->device();
}

QString  PythonQtWrapper_QMovie::fileName(QMovie* theWrappedObject) const
{
return theWrappedObject->fileName();
}

QByteArray  PythonQtWrapper_QMovie::format(QMovie* theWrappedObject) const
{
return theWrappedObject->format();
}

int  PythonQtWrapper_QMovie::frameCount(QMovie* theWrappedObject) const
{
return theWrappedObject->frameCount();
}

QRect  PythonQtWrapper_QMovie::frameRect(QMovie* theWrappedObject) const
{
return theWrappedObject->frameRect();
}

bool  PythonQtWrapper_QMovie::isValid(QMovie* theWrappedObject) const
{
return theWrappedObject->isValid();
}

bool  PythonQtWrapper_QMovie::jumpToFrame(QMovie* theWrappedObject, int  frameNumber)
{
return theWrappedObject->jumpToFrame(frameNumber);
}

int  PythonQtWrapper_QMovie::loopCount(QMovie* theWrappedObject) const
{
return theWrappedObject->loopCount();
}

int  PythonQtWrapper_QMovie::nextFrameDelay(QMovie* theWrappedObject) const
{
return theWrappedObject->nextFrameDelay();
}

QSize  PythonQtWrapper_QMovie::scaledSize(QMovie* theWrappedObject)
{
return theWrappedObject->scaledSize();
}

void PythonQtWrapper_QMovie::setBackgroundColor(QMovie* theWrappedObject, const QColor&  color)
{
theWrappedObject->setBackgroundColor(color);
}

void PythonQtWrapper_QMovie::setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode)
{
theWrappedObject->setCacheMode(mode);
}

void PythonQtWrapper_QMovie::setDevice(QMovie* theWrappedObject, QIODevice*  device)
{
theWrappedObject->setDevice(device);
}

void PythonQtWrapper_QMovie::setFileName(QMovie* theWrappedObject, const QString&  fileName)
{
theWrappedObject->setFileName(fileName);
}

void PythonQtWrapper_QMovie::setFormat(QMovie* theWrappedObject, const QByteArray&  format)
{
theWrappedObject->setFormat(format);
}

void PythonQtWrapper_QMovie::setScaledSize(QMovie* theWrappedObject, const QSize&  size)
{
theWrappedObject->setScaledSize(size);
}

int  PythonQtWrapper_QMovie::speed(QMovie* theWrappedObject) const
{
return theWrappedObject->speed();
}

QMovie::MovieState  PythonQtWrapper_QMovie::state(QMovie* theWrappedObject) const
{
return theWrappedObject->state();
}

QList<QByteArray >  PythonQtWrapper_QMovie::static_QMovie_supportedFormats()
{
return QMovie::supportedFormats();
}

