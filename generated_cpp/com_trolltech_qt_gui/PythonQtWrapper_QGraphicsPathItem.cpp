#include "PythonQtWrapper_QGraphicsPathItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

bool  PythonQtShell_QGraphicsPathItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsPathItem::staticMetaObject,
      "isObscuredBy(QGraphicsPathItem*,const QGraphicsItem* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&item};
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
  return QGraphicsPathItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPathItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsPathItem::staticMetaObject,
      "opaqueArea(QGraphicsPathItem*)");
      QPainterPath  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPainterPath *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsPathItem::opaqueArea();
}
QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPathItem(parent, scene); }

QGraphicsPathItem* PythonQtWrapper_QGraphicsPathItem::new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPathItem(path, parent, scene); }

bool  PythonQtWrapper_QGraphicsPathItem::isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const
{
return  (*theWrappedObject).isObscuredBy(item);
}

void PythonQtWrapper_QGraphicsPathItem::setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path)
{
 (*theWrappedObject).setPath(path);
}

bool  PythonQtWrapper_QGraphicsPathItem::contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const
{
return  (*theWrappedObject).contains(point);
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::opaqueArea(QGraphicsPathItem* theWrappedObject) const
{
return  (*theWrappedObject).opaqueArea();
}

void PythonQtWrapper_QGraphicsPathItem::paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
 (*theWrappedObject).paint(painter, option, widget);
}

int  PythonQtWrapper_QGraphicsPathItem::type(QGraphicsPathItem* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::shape(QGraphicsPathItem* theWrappedObject) const
{
return  (*theWrappedObject).shape();
}

QPainterPath  PythonQtWrapper_QGraphicsPathItem::path(QGraphicsPathItem* theWrappedObject) const
{
return  (*theWrappedObject).path();
}

QRectF  PythonQtWrapper_QGraphicsPathItem::boundingRect(QGraphicsPathItem* theWrappedObject) const
{
return  (*theWrappedObject).boundingRect();
}

