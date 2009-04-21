#include "PythonQtWrapper_QGraphicsLayoutItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

void PythonQtShell_QGraphicsLayoutItem::getContentsMargins(qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getContentsMargins");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsLayoutItem::staticMetaObject,
      "getContentsMargins(QGraphicsLayoutItem*,qreal* ,qreal* ,qreal* ,qreal* )");
    void* args[5] = {NULL, (void*)&left, (void*)&top, (void*)&right, (void*)&bottom};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::getContentsMargins(left, top, right, bottom);
}
void PythonQtShell_QGraphicsLayoutItem::setGeometry(const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsLayoutItem::staticMetaObject,
      "setGeometry(QGraphicsLayoutItem*,const QRectF& )");
    void* args[2] = {NULL, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::setGeometry(rect);
}
QSizeF  PythonQtShell_QGraphicsLayoutItem::sizeHint(Qt::SizeHint  which, const QSizeF&  constraint) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsLayoutItem::staticMetaObject,
      "sizeHint(QGraphicsLayoutItem*,Qt::SizeHint ,const QSizeF& )");
      QSizeF  returnValue;
    void* args[3] = {NULL, (void*)&which, (void*)&constraint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSizeF *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QSizeF  result;
return result;
}
void PythonQtShell_QGraphicsLayoutItem::updateGeometry()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsLayoutItem::staticMetaObject,
      "updateGeometry(QGraphicsLayoutItem*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsLayoutItem::updateGeometry();
}
QGraphicsLayoutItem* PythonQtWrapper_QGraphicsLayoutItem::new_QGraphicsLayoutItem(QGraphicsLayoutItem*  parent, bool  isLayout)
{ 
return new PythonQtShell_QGraphicsLayoutItem(parent, isLayout); }

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayoutItem::parentLayoutItem(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).parentLayoutItem();
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
 (*theWrappedObject).setPreferredSize(w, h);
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).minimumHeight();
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
 (*theWrappedObject).setMaximumHeight(height);
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::effectiveSizeHint(QGraphicsLayoutItem* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return  (*theWrappedObject).effectiveSizeHint(which, constraint);
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, const QSizePolicy&  policy)
{
 (*theWrappedObject).setSizePolicy(policy);
}

void PythonQtWrapper_QGraphicsLayoutItem::updateGeometry(QGraphicsLayoutItem* theWrappedObject)
{
 (*theWrappedObject).updateGeometry();
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::maximumSize(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).maximumSize();
}

void PythonQtWrapper_QGraphicsLayoutItem::setGeometry(QGraphicsLayoutItem* theWrappedObject, const QRectF&  rect)
{
 (*theWrappedObject).setGeometry(rect);
}

QRectF  PythonQtWrapper_QGraphicsLayoutItem::contentsRect(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).contentsRect();
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::preferredSize(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).preferredSize();
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
 (*theWrappedObject).setPreferredWidth(width);
}

void PythonQtWrapper_QGraphicsLayoutItem::setSizePolicy(QGraphicsLayoutItem* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
 (*theWrappedObject).setSizePolicy(hPolicy, vPolicy, controlType);
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
 (*theWrappedObject).setMinimumHeight(height);
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumHeight(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).maximumHeight();
}

QSizeF  PythonQtWrapper_QGraphicsLayoutItem::minimumSize(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).minimumSize();
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
 (*theWrappedObject).setMaximumSize(size);
}

QRectF  PythonQtWrapper_QGraphicsLayoutItem::geometry(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).geometry();
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
 (*theWrappedObject).setMaximumSize(w, h);
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
 (*theWrappedObject).setMinimumSize(size);
}

QSizePolicy  PythonQtWrapper_QGraphicsLayoutItem::sizePolicy(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).sizePolicy();
}

void PythonQtWrapper_QGraphicsLayoutItem::setParentLayoutItem(QGraphicsLayoutItem* theWrappedObject, QGraphicsLayoutItem*  parent)
{
 (*theWrappedObject).setParentLayoutItem(parent);
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumSize(QGraphicsLayoutItem* theWrappedObject, qreal  w, qreal  h)
{
 (*theWrappedObject).setMinimumSize(w, h);
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::maximumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).maximumWidth();
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredHeight(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).preferredHeight();
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredSize(QGraphicsLayoutItem* theWrappedObject, const QSizeF&  size)
{
 (*theWrappedObject).setPreferredSize(size);
}

void PythonQtWrapper_QGraphicsLayoutItem::getContentsMargins(QGraphicsLayoutItem* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
 (*theWrappedObject).getContentsMargins(left, top, right, bottom);
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::preferredWidth(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).preferredWidth();
}

void PythonQtWrapper_QGraphicsLayoutItem::setMinimumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
 (*theWrappedObject).setMinimumWidth(width);
}

void PythonQtWrapper_QGraphicsLayoutItem::setMaximumWidth(QGraphicsLayoutItem* theWrappedObject, qreal  width)
{
 (*theWrappedObject).setMaximumWidth(width);
}

qreal  PythonQtWrapper_QGraphicsLayoutItem::minimumWidth(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).minimumWidth();
}

void PythonQtWrapper_QGraphicsLayoutItem::setPreferredHeight(QGraphicsLayoutItem* theWrappedObject, qreal  height)
{
 (*theWrappedObject).setPreferredHeight(height);
}

bool  PythonQtWrapper_QGraphicsLayoutItem::isLayout(QGraphicsLayoutItem* theWrappedObject) const
{
return  (*theWrappedObject).isLayout();
}

