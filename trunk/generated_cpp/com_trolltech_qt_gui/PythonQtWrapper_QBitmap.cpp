#include "PythonQtWrapper_QBitmap.h"

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap()
{ 
return new QBitmap(); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QPixmap&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QSize&  arg__1)
{ 
return new QBitmap(arg__1); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(const QString&  fileName, const char*  format)
{ 
return new QBitmap(fileName, format); }

QBitmap* PythonQtWrapper_QBitmap::new_QBitmap(int  w, int  h)
{ 
return new QBitmap(w, h); }

void PythonQtWrapper_QBitmap::clear(QBitmap* theWrappedObject)
{
theWrappedObject->clear();
}

QBitmap  PythonQtWrapper_QBitmap::static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags)
{
return QBitmap::fromImage(image, flags);
}

QBitmap  PythonQtWrapper_QBitmap::transformed(QBitmap* theWrappedObject, const QMatrix&  arg__1) const
{
return theWrappedObject->transformed(arg__1);
}

QBitmap  PythonQtWrapper_QBitmap::transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const
{
return theWrappedObject->transformed(matrix);
}

