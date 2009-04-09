#include "PythonQtWrapper_QPixmap.h"

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qtransform.h>
#include <qwidget.h>

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap()
{ 
return new QPixmap(); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QPixmap&  arg__1)
{ 
return new QPixmap(arg__1); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QSize&  arg__1)
{ 
return new QPixmap(arg__1); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QString&  fileName, const char*  format, Qt::ImageConversionFlags  flags)
{ 
return new QPixmap(fileName, format, flags); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const char**  xpm)
{ 
return new QPixmap(xpm); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(int  w, int  h)
{ 
return new QPixmap(w, h); }

QPixmap  PythonQtWrapper_QPixmap::alphaChannel(QPixmap* theWrappedObject) const
{
return theWrappedObject->alphaChannel();
}

qint64  PythonQtWrapper_QPixmap::cacheKey(QPixmap* theWrappedObject) const
{
return theWrappedObject->cacheKey();
}

QPixmap  PythonQtWrapper_QPixmap::copy(QPixmap* theWrappedObject, const QRect&  rect) const
{
return theWrappedObject->copy(rect);
}

QPixmap  PythonQtWrapper_QPixmap::copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const
{
return theWrappedObject->copy(x, y, width, height);
}

QBitmap  PythonQtWrapper_QPixmap::createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight) const
{
return theWrappedObject->createHeuristicMask(clipTight);
}

QBitmap  PythonQtWrapper_QPixmap::createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const
{
return theWrappedObject->createMaskFromColor(maskColor);
}

QBitmap  PythonQtWrapper_QPixmap::createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const
{
return theWrappedObject->createMaskFromColor(maskColor, mode);
}

int  PythonQtWrapper_QPixmap::static_QPixmap_defaultDepth()
{
return QPixmap::defaultDepth();
}

int  PythonQtWrapper_QPixmap::depth(QPixmap* theWrappedObject) const
{
return theWrappedObject->depth();
}

int  PythonQtWrapper_QPixmap::devType(QPixmap* theWrappedObject) const
{
return theWrappedObject->devType();
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QColor&  fillColor)
{
theWrappedObject->fill(fillColor);
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs)
{
theWrappedObject->fill(widget, ofs);
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs)
{
theWrappedObject->fill(widget, xofs, yofs);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags)
{
return QPixmap::fromImage(image, flags);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect)
{
return QPixmap::grabWidget(widget, rect);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWidget(QWidget*  widget, int  x, int  y, int  w, int  h)
{
return QPixmap::grabWidget(widget, x, y, w, h);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWindow(WId  arg__1, int  x, int  y, int  w, int  h)
{
return QPixmap::grabWindow(arg__1, x, y, w, h);
}

bool  PythonQtWrapper_QPixmap::hasAlpha(QPixmap* theWrappedObject) const
{
return theWrappedObject->hasAlpha();
}

bool  PythonQtWrapper_QPixmap::hasAlphaChannel(QPixmap* theWrappedObject) const
{
return theWrappedObject->hasAlphaChannel();
}

int  PythonQtWrapper_QPixmap::height(QPixmap* theWrappedObject) const
{
return theWrappedObject->height();
}

int  PythonQtWrapper_QPixmap::heightMM(QPixmap* theWrappedObject) const
{
return theWrappedObject->heightMM();
}

bool  PythonQtWrapper_QPixmap::isNull(QPixmap* theWrappedObject) const
{
return theWrappedObject->isNull();
}

bool  PythonQtWrapper_QPixmap::isQBitmap(QPixmap* theWrappedObject) const
{
return theWrappedObject->isQBitmap();
}

bool  PythonQtWrapper_QPixmap::load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format, Qt::ImageConversionFlags  flags)
{
return theWrappedObject->load(fileName, format, flags);
}

bool  PythonQtWrapper_QPixmap::loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format, Qt::ImageConversionFlags  flags)
{
return theWrappedObject->loadFromData(data, format, flags);
}

int  PythonQtWrapper_QPixmap::logicalDpiX(QPixmap* theWrappedObject) const
{
return theWrappedObject->logicalDpiX();
}

int  PythonQtWrapper_QPixmap::logicalDpiY(QPixmap* theWrappedObject) const
{
return theWrappedObject->logicalDpiY();
}

QBitmap  PythonQtWrapper_QPixmap::mask(QPixmap* theWrappedObject) const
{
return theWrappedObject->mask();
}

int  PythonQtWrapper_QPixmap::numColors(QPixmap* theWrappedObject) const
{
return theWrappedObject->numColors();
}

void PythonQtWrapper_QPixmap::writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

void PythonQtWrapper_QPixmap::readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QPaintEngine*  PythonQtWrapper_QPixmap::paintEngine(QPixmap* theWrappedObject) const
{
return theWrappedObject->paintEngine();
}

bool  PythonQtWrapper_QPixmap::paintingActive(QPixmap* theWrappedObject) const
{
return theWrappedObject->paintingActive();
}

int  PythonQtWrapper_QPixmap::physicalDpiX(QPixmap* theWrappedObject) const
{
return theWrappedObject->physicalDpiX();
}

int  PythonQtWrapper_QPixmap::physicalDpiY(QPixmap* theWrappedObject) const
{
return theWrappedObject->physicalDpiY();
}

QRect  PythonQtWrapper_QPixmap::rect(QPixmap* theWrappedObject) const
{
return theWrappedObject->rect();
}

bool  PythonQtWrapper_QPixmap::save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format, int  quality) const
{
return theWrappedObject->save(device, format, quality);
}

bool  PythonQtWrapper_QPixmap::save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format, int  quality) const
{
return theWrappedObject->save(fileName, format, quality);
}

QPixmap  PythonQtWrapper_QPixmap::scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
return theWrappedObject->scaled(s, aspectMode, mode);
}

QPixmap  PythonQtWrapper_QPixmap::scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
return theWrappedObject->scaled(w, h, aspectMode, mode);
}

QPixmap  PythonQtWrapper_QPixmap::scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode) const
{
return theWrappedObject->scaledToHeight(h, mode);
}

QPixmap  PythonQtWrapper_QPixmap::scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode) const
{
return theWrappedObject->scaledToWidth(w, mode);
}

void PythonQtWrapper_QPixmap::setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1)
{
theWrappedObject->setAlphaChannel(arg__1);
}

void PythonQtWrapper_QPixmap::setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1)
{
theWrappedObject->setMask(arg__1);
}

QSize  PythonQtWrapper_QPixmap::size(QPixmap* theWrappedObject) const
{
return theWrappedObject->size();
}

QImage  PythonQtWrapper_QPixmap::toImage(QPixmap* theWrappedObject) const
{
return theWrappedObject->toImage();
}

QPixmap  PythonQtWrapper_QPixmap::transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode) const
{
return theWrappedObject->transformed(arg__1, mode);
}

QPixmap  PythonQtWrapper_QPixmap::transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode) const
{
return theWrappedObject->transformed(arg__1, mode);
}

QMatrix  PythonQtWrapper_QPixmap::static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h)
{
return QPixmap::trueMatrix(m, w, h);
}

QTransform  PythonQtWrapper_QPixmap::static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h)
{
return QPixmap::trueMatrix(m, w, h);
}

int  PythonQtWrapper_QPixmap::width(QPixmap* theWrappedObject) const
{
return theWrappedObject->width();
}

int  PythonQtWrapper_QPixmap::widthMM(QPixmap* theWrappedObject) const
{
return theWrappedObject->widthMM();
}

