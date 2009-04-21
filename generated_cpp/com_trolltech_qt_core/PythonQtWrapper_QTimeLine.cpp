#include "PythonQtWrapper_QTimeLine.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimeline.h>

void PythonQtShell_QTimeLine::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "childEvent(QTimeLine*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeLine::childEvent(arg__1);
}
void PythonQtShell_QTimeLine::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "customEvent(QTimeLine*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeLine::customEvent(arg__1);
}
bool  PythonQtShell_QTimeLine::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "event(QTimeLine*,QEvent* )");
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
  return QTimeLine::event(arg__1);
}
bool  PythonQtShell_QTimeLine::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "eventFilter(QTimeLine*,QObject* ,QEvent* )");
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
  return QTimeLine::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimeLine::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "timerEvent(QTimeLine*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeLine::timerEvent(event);
}
qreal  PythonQtShell_QTimeLine::valueForTime(int  msec) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "valueForTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTimeLine::staticMetaObject,
      "valueForTime(QTimeLine*,int )");
      qreal  returnValue;
    void* args[2] = {NULL, (void*)&msec};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qreal *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeLine::valueForTime(msec);
}
QTimeLine* PythonQtWrapper_QTimeLine::new_QTimeLine(int  duration, QObject*  parent)
{ 
return new PythonQtShell_QTimeLine(duration, parent); }

void PythonQtWrapper_QTimeLine::setEndFrame(QTimeLine* theWrappedObject, int  frame)
{
 theWrappedObject->setEndFrame(frame);
}

void PythonQtWrapper_QTimeLine::setStartFrame(QTimeLine* theWrappedObject, int  frame)
{
 theWrappedObject->setStartFrame(frame);
}

void PythonQtWrapper_QTimeLine::timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_timerEvent(event);
}

void PythonQtWrapper_QTimeLine::setUpdateInterval(QTimeLine* theWrappedObject, int  interval)
{
 theWrappedObject->setUpdateInterval(interval);
}

int  PythonQtWrapper_QTimeLine::updateInterval(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->updateInterval();
}

int  PythonQtWrapper_QTimeLine::duration(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->duration();
}

QTimeLine::Direction  PythonQtWrapper_QTimeLine::direction(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->direction();
}

qreal  PythonQtWrapper_QTimeLine::currentValue(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->currentValue();
}

int  PythonQtWrapper_QTimeLine::loopCount(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->loopCount();
}

void PythonQtWrapper_QTimeLine::setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction)
{
 theWrappedObject->setDirection(direction);
}

int  PythonQtWrapper_QTimeLine::endFrame(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->endFrame();
}

void PythonQtWrapper_QTimeLine::setDuration(QTimeLine* theWrappedObject, int  duration)
{
 theWrappedObject->setDuration(duration);
}

QTimeLine::CurveShape  PythonQtWrapper_QTimeLine::curveShape(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->curveShape();
}

QTimeLine::State  PythonQtWrapper_QTimeLine::state(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->state();
}

qreal  PythonQtWrapper_QTimeLine::valueForTime(QTimeLine* theWrappedObject, int  msec) const
{
return  ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_valueForTime(msec);
}

void PythonQtWrapper_QTimeLine::setLoopCount(QTimeLine* theWrappedObject, int  count)
{
 theWrappedObject->setLoopCount(count);
}

int  PythonQtWrapper_QTimeLine::frameForTime(QTimeLine* theWrappedObject, int  msec) const
{
return  theWrappedObject->frameForTime(msec);
}

void PythonQtWrapper_QTimeLine::setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape)
{
 theWrappedObject->setCurveShape(shape);
}

void PythonQtWrapper_QTimeLine::setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame)
{
 theWrappedObject->setFrameRange(startFrame, endFrame);
}

int  PythonQtWrapper_QTimeLine::startFrame(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->startFrame();
}

int  PythonQtWrapper_QTimeLine::currentTime(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->currentTime();
}

int  PythonQtWrapper_QTimeLine::currentFrame(QTimeLine* theWrappedObject) const
{
return  theWrappedObject->currentFrame();
}

