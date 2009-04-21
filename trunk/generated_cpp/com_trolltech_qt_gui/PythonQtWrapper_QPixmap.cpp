#include "PythonQtWrapper_QPixmap.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

int  PythonQtShell_QPixmap::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPixmap::staticMetaObject,
      "devType(QPixmap*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPixmap::devType();
}
int  PythonQtShell_QPixmap::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPixmap::staticMetaObject,
      "metric(QPixmap*,QPaintDevice::PaintDeviceMetric )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPixmap::metric(arg__1);
}
QPaintEngine*  PythonQtShell_QPixmap::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPixmap::staticMetaObject,
      "paintEngine(QPixmap*)");
      QPaintEngine*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPaintEngine* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPixmap::paintEngine();
}
QPixmap* PythonQtWrapper_QPixmap::new_QPixmap()
{ 
return new PythonQtShell_QPixmap(); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QPixmap&  arg__1)
{ 
return new PythonQtShell_QPixmap(arg__1); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QSize&  arg__1)
{ 
return new PythonQtShell_QPixmap(arg__1); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const QString&  fileName, const char*  format, Qt::ImageConversionFlags  flags)
{ 
return new PythonQtShell_QPixmap(fileName, format, flags); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(const char**  xpm)
{ 
return new PythonQtShell_QPixmap(xpm); }

QPixmap* PythonQtWrapper_QPixmap::new_QPixmap(int  w, int  h)
{ 
return new PythonQtShell_QPixmap(w, h); }

int  PythonQtWrapper_QPixmap::height(QPixmap* theWrappedObject) const
{
return  theWrappedObject->height();
}

QBitmap  PythonQtWrapper_QPixmap::mask(QPixmap* theWrappedObject) const
{
return  theWrappedObject->mask();
}

QPixmap  PythonQtWrapper_QPixmap::copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const
{
return  theWrappedObject->copy(x, y, width, height);
}

QRect  PythonQtWrapper_QPixmap::rect(QPixmap* theWrappedObject) const
{
return  theWrappedObject->rect();
}

bool  PythonQtWrapper_QPixmap::hasAlpha(QPixmap* theWrappedObject) const
{
return  theWrappedObject->hasAlpha();
}

bool  PythonQtWrapper_QPixmap::save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format, int  quality) const
{
return  theWrappedObject->save(fileName, format, quality);
}

bool  PythonQtWrapper_QPixmap::isQBitmap(QPixmap* theWrappedObject) const
{
return  theWrappedObject->isQBitmap();
}

QPixmap  PythonQtWrapper_QPixmap::scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
return  theWrappedObject->scaled(w, h, aspectMode, mode);
}

void PythonQtWrapper_QPixmap::readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QPixmap::setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1)
{
 theWrappedObject->setMask(arg__1);
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs)
{
 theWrappedObject->fill(widget, ofs);
}

QPixmap  PythonQtWrapper_QPixmap::copy(QPixmap* theWrappedObject, const QRect&  rect) const
{
return  theWrappedObject->copy(rect);
}

QBitmap  PythonQtWrapper_QPixmap::createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight) const
{
return  theWrappedObject->createHeuristicMask(clipTight);
}

QImage  PythonQtWrapper_QPixmap::toImage(QPixmap* theWrappedObject) const
{
return  theWrappedObject->toImage();
}

bool  PythonQtWrapper_QPixmap::load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format, Qt::ImageConversionFlags  flags)
{
return  theWrappedObject->load(fileName, format, flags);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags)
{
return QPixmap::fromImage(image, flags);
}

int  PythonQtWrapper_QPixmap::static_QPixmap_defaultDepth()
{
return QPixmap::defaultDepth();
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect)
{
return QPixmap::grabWidget(widget, rect);
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QColor&  fillColor)
{
 theWrappedObject->fill(fillColor);
}

QSize  PythonQtWrapper_QPixmap::size(QPixmap* theWrappedObject) const
{
return  theWrappedObject->size();
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWindow(WId  arg__1, int  x, int  y, int  w, int  h)
{
return QPixmap::grabWindow(arg__1, x, y, w, h);
}

bool  PythonQtWrapper_QPixmap::save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format, int  quality) const
{
return  theWrappedObject->save(device, format, quality);
}

int  PythonQtWrapper_QPixmap::width(QPixmap* theWrappedObject) const
{
return  theWrappedObject->width();
}

QBitmap  PythonQtWrapper_QPixmap::createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const
{
return  theWrappedObject->createMaskFromColor(maskColor, mode);
}

QPixmap  PythonQtWrapper_QPixmap::scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode, Qt::TransformationMode  mode) const
{
return  theWrappedObject->scaled(s, aspectMode, mode);
}

QMatrix  PythonQtWrapper_QPixmap::static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h)
{
return QPixmap::trueMatrix(m, w, h);
}

QTransform  PythonQtWrapper_QPixmap::static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h)
{
return QPixmap::trueMatrix(m, w, h);
}

QPixmap  PythonQtWrapper_QPixmap::static_QPixmap_grabWidget(QWidget*  widget, int  x, int  y, int  w, int  h)
{
return QPixmap::grabWidget(widget, x, y, w, h);
}

void PythonQtWrapper_QPixmap::writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QBitmap  PythonQtWrapper_QPixmap::createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const
{
return  theWrappedObject->createMaskFromColor(maskColor);
}

bool  PythonQtWrapper_QPixmap::hasAlphaChannel(QPixmap* theWrappedObject) const
{
return  theWrappedObject->hasAlphaChannel();
}

bool  PythonQtWrapper_QPixmap::loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format, Qt::ImageConversionFlags  flags)
{
return  theWrappedObject->loadFromData(data, format, flags);
}

void PythonQtWrapper_QPixmap::setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1)
{
 theWrappedObject->setAlphaChannel(arg__1);
}

QPixmap  PythonQtWrapper_QPixmap::transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode) const
{
return  theWrappedObject->transformed(arg__1, mode);
}

int  PythonQtWrapper_QPixmap::depth(QPixmap* theWrappedObject) const
{
return  theWrappedObject->depth();
}

QPixmap  PythonQtWrapper_QPixmap::scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode) const
{
return  theWrappedObject->scaledToHeight(h, mode);
}

int  PythonQtWrapper_QPixmap::metric(QPixmap* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
return  ((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->promoted_metric(arg__1);
}

qint64  PythonQtWrapper_QPixmap::cacheKey(QPixmap* theWrappedObject) const
{
return  theWrappedObject->cacheKey();
}

QPaintEngine*  PythonQtWrapper_QPixmap::paintEngine(QPixmap* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->promoted_paintEngine();
}

QPixmap  PythonQtWrapper_QPixmap::transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode) const
{
return  theWrappedObject->transformed(arg__1, mode);
}

QPixmap  PythonQtWrapper_QPixmap::alphaChannel(QPixmap* theWrappedObject) const
{
return  theWrappedObject->alphaChannel();
}

bool  PythonQtWrapper_QPixmap::isNull(QPixmap* theWrappedObject) const
{
return  theWrappedObject->isNull();
}

void PythonQtWrapper_QPixmap::fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs)
{
 theWrappedObject->fill(widget, xofs, yofs);
}

QPixmap  PythonQtWrapper_QPixmap::scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode) const
{
return  theWrappedObject->scaledToWidth(w, mode);
}

int  PythonQtWrapper_QPixmap::devType(QPixmap* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPixmap*)theWrappedObject)->promoted_devType();
}

