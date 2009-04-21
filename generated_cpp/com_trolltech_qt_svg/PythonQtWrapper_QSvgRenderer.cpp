#include "PythonQtWrapper_QSvgRenderer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QByteArray>
#include <QMatrix>
#include <QRectF>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpainter.h>
#include <qrect.h>
#include <qsize.h>

void PythonQtShell_QSvgRenderer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgRenderer::staticMetaObject,
      "childEvent(QSvgRenderer*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSvgRenderer::childEvent(arg__1);
}
void PythonQtShell_QSvgRenderer::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgRenderer::staticMetaObject,
      "customEvent(QSvgRenderer*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSvgRenderer::customEvent(arg__1);
}
bool  PythonQtShell_QSvgRenderer::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgRenderer::staticMetaObject,
      "event(QSvgRenderer*,QEvent* )");
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
  return QSvgRenderer::event(arg__1);
}
bool  PythonQtShell_QSvgRenderer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgRenderer::staticMetaObject,
      "eventFilter(QSvgRenderer*,QObject* ,QEvent* )");
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
  return QSvgRenderer::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSvgRenderer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSvgRenderer::staticMetaObject,
      "timerEvent(QSvgRenderer*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSvgRenderer::timerEvent(arg__1);
}
QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(QObject*  parent)
{ 
return new PythonQtShell_QSvgRenderer(parent); }

QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(const QByteArray&  contents, QObject*  parent)
{ 
return new PythonQtShell_QSvgRenderer(contents, parent); }

QSvgRenderer* PythonQtWrapper_QSvgRenderer::new_QSvgRenderer(const QString&  filename, QObject*  parent)
{ 
return new PythonQtShell_QSvgRenderer(filename, parent); }

bool  PythonQtWrapper_QSvgRenderer::animated(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).animated();
}

QSize  PythonQtWrapper_QSvgRenderer::defaultSize(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).defaultSize();
}

void PythonQtWrapper_QSvgRenderer::setFramesPerSecond(QSvgRenderer* theWrappedObject, int  num)
{
 (*theWrappedObject).setFramesPerSecond(num);
}

bool  PythonQtWrapper_QSvgRenderer::elementExists(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return  (*theWrappedObject).elementExists(id);
}

QRectF  PythonQtWrapper_QSvgRenderer::boundsOnElement(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return  (*theWrappedObject).boundsOnElement(id);
}

bool  PythonQtWrapper_QSvgRenderer::isValid(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

QMatrix  PythonQtWrapper_QSvgRenderer::matrixForElement(QSvgRenderer* theWrappedObject, const QString&  id) const
{
return  (*theWrappedObject).matrixForElement(id);
}

QRectF  PythonQtWrapper_QSvgRenderer::viewBoxF(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).viewBoxF();
}

void PythonQtWrapper_QSvgRenderer::setViewBox(QSvgRenderer* theWrappedObject, const QRect&  viewbox)
{
 (*theWrappedObject).setViewBox(viewbox);
}

int  PythonQtWrapper_QSvgRenderer::currentFrame(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).currentFrame();
}

QRect  PythonQtWrapper_QSvgRenderer::viewBox(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).viewBox();
}

int  PythonQtWrapper_QSvgRenderer::framesPerSecond(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).framesPerSecond();
}

void PythonQtWrapper_QSvgRenderer::setViewBox(QSvgRenderer* theWrappedObject, const QRectF&  viewbox)
{
 (*theWrappedObject).setViewBox(viewbox);
}

void PythonQtWrapper_QSvgRenderer::setCurrentFrame(QSvgRenderer* theWrappedObject, int  arg__1)
{
 (*theWrappedObject).setCurrentFrame(arg__1);
}

int  PythonQtWrapper_QSvgRenderer::animationDuration(QSvgRenderer* theWrappedObject) const
{
return  (*theWrappedObject).animationDuration();
}

