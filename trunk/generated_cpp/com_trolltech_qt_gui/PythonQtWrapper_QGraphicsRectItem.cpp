#include "PythonQtWrapper_QGraphicsRectItem.h"

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

bool  PythonQtShell_QGraphicsRectItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsRectItem::staticMetaObject,
      "isObscuredBy(QGraphicsRectItem*,const QGraphicsItem* )");
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
  return QGraphicsRectItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsRectItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsRectItem::staticMetaObject,
      "opaqueArea(QGraphicsRectItem*)");
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
  return QGraphicsRectItem::opaqueArea();
}
QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(rect, parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsRectItem(x, y, w, h, parent, scene); }

void PythonQtWrapper_QGraphicsRectItem::paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
 (*theWrappedObject).paint(painter, option, widget);
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::shape(QGraphicsRectItem* theWrappedObject) const
{
return  (*theWrappedObject).shape();
}

int  PythonQtWrapper_QGraphicsRectItem::type(QGraphicsRectItem* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

QRectF  PythonQtWrapper_QGraphicsRectItem::boundingRect(QGraphicsRectItem* theWrappedObject) const
{
return  (*theWrappedObject).boundingRect();
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
 (*theWrappedObject).setRect(x, y, w, h);
}

QRectF  PythonQtWrapper_QGraphicsRectItem::rect(QGraphicsRectItem* theWrappedObject) const
{
return  (*theWrappedObject).rect();
}

bool  PythonQtWrapper_QGraphicsRectItem::contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const
{
return  (*theWrappedObject).contains(point);
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::opaqueArea(QGraphicsRectItem* theWrappedObject) const
{
return  (*theWrappedObject).opaqueArea();
}

bool  PythonQtWrapper_QGraphicsRectItem::isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const
{
return  (*theWrappedObject).isObscuredBy(item);
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect)
{
 (*theWrappedObject).setRect(rect);
}

