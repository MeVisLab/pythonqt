#include "PythonQtWrapper_QGraphicsItemAnimation.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPair>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpair.h>
#include <qpoint.h>
#include <qtimeline.h>

void PythonQtShell_QGraphicsItemAnimation::afterAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "afterAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "afterAnimationStep(QGraphicsItemAnimation*,qreal )");
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::afterAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::beforeAnimationStep(qreal  step)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beforeAnimationStep");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "beforeAnimationStep(QGraphicsItemAnimation*,qreal )");
    void* args[2] = {NULL, (void*)&step};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::beforeAnimationStep(step);
}
void PythonQtShell_QGraphicsItemAnimation::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "childEvent(QGraphicsItemAnimation*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::childEvent(arg__1);
}
void PythonQtShell_QGraphicsItemAnimation::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "customEvent(QGraphicsItemAnimation*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::customEvent(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "event(QGraphicsItemAnimation*,QEvent* )");
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
  return QGraphicsItemAnimation::event(arg__1);
}
bool  PythonQtShell_QGraphicsItemAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "eventFilter(QGraphicsItemAnimation*,QObject* ,QEvent* )");
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
  return QGraphicsItemAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsItemAnimation::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsItemAnimation::staticMetaObject,
      "timerEvent(QGraphicsItemAnimation*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsItemAnimation::timerEvent(arg__1);
}
QGraphicsItemAnimation* PythonQtWrapper_QGraphicsItemAnimation::new_QGraphicsItemAnimation(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsItemAnimation(parent); }

void PythonQtWrapper_QGraphicsItemAnimation::setPosAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, const QPointF&  pos)
{
 theWrappedObject->setPosAt(step, pos);
}

void PythonQtWrapper_QGraphicsItemAnimation::setTimeLine(QGraphicsItemAnimation* theWrappedObject, QTimeLine*  timeLine)
{
 theWrappedObject->setTimeLine(timeLine);
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::posList(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->posList();
}

void PythonQtWrapper_QGraphicsItemAnimation::setScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sx, qreal  sy)
{
 theWrappedObject->setScaleAt(step, sx, sy);
}

QTimeLine*  PythonQtWrapper_QGraphicsItemAnimation::timeLine(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->timeLine();
}

void PythonQtWrapper_QGraphicsItemAnimation::setItem(QGraphicsItemAnimation* theWrappedObject, QGraphicsItem*  item)
{
 theWrappedObject->setItem(item);
}

QList<QPair<qreal , qreal >  >  PythonQtWrapper_QGraphicsItemAnimation::rotationList(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->rotationList();
}

QMatrix  PythonQtWrapper_QGraphicsItemAnimation::matrixAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->matrixAt(step);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemAnimation::item(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->item();
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::rotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->rotationAt(step);
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::translationList(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->translationList();
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->horizontalScaleAt(step);
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::horizontalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->horizontalShearAt(step);
}

QPointF  PythonQtWrapper_QGraphicsItemAnimation::posAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->posAt(step);
}

void PythonQtWrapper_QGraphicsItemAnimation::setShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  sh, qreal  sv)
{
 theWrappedObject->setShearAt(step, sh, sv);
}

void PythonQtWrapper_QGraphicsItemAnimation::afterAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
 ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_afterAnimationStep(step);
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalScaleAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->verticalScaleAt(step);
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::scaleList(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->scaleList();
}

QList<QPair<qreal , QPointF >  >  PythonQtWrapper_QGraphicsItemAnimation::shearList(QGraphicsItemAnimation* theWrappedObject) const
{
return  theWrappedObject->shearList();
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::yTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->yTranslationAt(step);
}

void PythonQtWrapper_QGraphicsItemAnimation::clear(QGraphicsItemAnimation* theWrappedObject)
{
 theWrappedObject->clear();
}

void PythonQtWrapper_QGraphicsItemAnimation::setTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  dx, qreal  dy)
{
 theWrappedObject->setTranslationAt(step, dx, dy);
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::xTranslationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->xTranslationAt(step);
}

void PythonQtWrapper_QGraphicsItemAnimation::setRotationAt(QGraphicsItemAnimation* theWrappedObject, qreal  step, qreal  angle)
{
 theWrappedObject->setRotationAt(step, angle);
}

void PythonQtWrapper_QGraphicsItemAnimation::beforeAnimationStep(QGraphicsItemAnimation* theWrappedObject, qreal  step)
{
 ((PythonQtPublicPromoter_QGraphicsItemAnimation*)theWrappedObject)->promoted_beforeAnimationStep(step);
}

qreal  PythonQtWrapper_QGraphicsItemAnimation::verticalShearAt(QGraphicsItemAnimation* theWrappedObject, qreal  step) const
{
return  theWrappedObject->verticalShearAt(step);
}

