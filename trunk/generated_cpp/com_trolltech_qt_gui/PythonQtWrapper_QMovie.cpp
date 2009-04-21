#include "PythonQtWrapper_QMovie.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

void PythonQtShell_QMovie::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMovie::staticMetaObject,
      "childEvent(QMovie*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMovie::childEvent(arg__1);
}
void PythonQtShell_QMovie::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMovie::staticMetaObject,
      "customEvent(QMovie*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMovie::customEvent(arg__1);
}
bool  PythonQtShell_QMovie::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMovie::staticMetaObject,
      "event(QMovie*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMovie::event(arg__1);
}
bool  PythonQtShell_QMovie::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMovie::staticMetaObject,
      "eventFilter(QMovie*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QMovie::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMovie::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMovie::staticMetaObject,
      "timerEvent(QMovie*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMovie::timerEvent(arg__1);
}
QMovie* PythonQtWrapper_QMovie::new_QMovie(QIODevice*  device, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(device, format, parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(QObject*  parent)
{ 
return new PythonQtShell_QMovie(parent); }

QMovie* PythonQtWrapper_QMovie::new_QMovie(const QString&  fileName, const QByteArray&  format, QObject*  parent)
{ 
return new PythonQtShell_QMovie(fileName, format, parent); }

void PythonQtWrapper_QMovie::setDevice(QMovie* theWrappedObject, QIODevice*  device)
{
 (*theWrappedObject).setDevice(device);
}

int  PythonQtWrapper_QMovie::loopCount(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).loopCount();
}

void PythonQtWrapper_QMovie::setFormat(QMovie* theWrappedObject, const QByteArray&  format)
{
 (*theWrappedObject).setFormat(format);
}

QMovie::CacheMode  PythonQtWrapper_QMovie::cacheMode(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).cacheMode();
}

bool  PythonQtWrapper_QMovie::jumpToFrame(QMovie* theWrappedObject, int  frameNumber)
{
return  (*theWrappedObject).jumpToFrame(frameNumber);
}

QList<QByteArray >  PythonQtWrapper_QMovie::static_QMovie_supportedFormats()
{
return QMovie::supportedFormats();
}

int  PythonQtWrapper_QMovie::frameCount(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).frameCount();
}

void PythonQtWrapper_QMovie::setBackgroundColor(QMovie* theWrappedObject, const QColor&  color)
{
 (*theWrappedObject).setBackgroundColor(color);
}

QMovie::MovieState  PythonQtWrapper_QMovie::state(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).state();
}

int  PythonQtWrapper_QMovie::speed(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).speed();
}

void PythonQtWrapper_QMovie::setFileName(QMovie* theWrappedObject, const QString&  fileName)
{
 (*theWrappedObject).setFileName(fileName);
}

QImage  PythonQtWrapper_QMovie::currentImage(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).currentImage();
}

void PythonQtWrapper_QMovie::setCacheMode(QMovie* theWrappedObject, QMovie::CacheMode  mode)
{
 (*theWrappedObject).setCacheMode(mode);
}

QSize  PythonQtWrapper_QMovie::scaledSize(QMovie* theWrappedObject)
{
return  (*theWrappedObject).scaledSize();
}

void PythonQtWrapper_QMovie::setScaledSize(QMovie* theWrappedObject, const QSize&  size)
{
 (*theWrappedObject).setScaledSize(size);
}

int  PythonQtWrapper_QMovie::currentFrameNumber(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).currentFrameNumber();
}

int  PythonQtWrapper_QMovie::nextFrameDelay(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).nextFrameDelay();
}

QColor  PythonQtWrapper_QMovie::backgroundColor(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).backgroundColor();
}

QString  PythonQtWrapper_QMovie::fileName(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).fileName();
}

bool  PythonQtWrapper_QMovie::isValid(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

QIODevice*  PythonQtWrapper_QMovie::device(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).device();
}

QRect  PythonQtWrapper_QMovie::frameRect(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).frameRect();
}

QPixmap  PythonQtWrapper_QMovie::currentPixmap(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).currentPixmap();
}

QByteArray  PythonQtWrapper_QMovie::format(QMovie* theWrappedObject) const
{
return  (*theWrappedObject).format();
}

