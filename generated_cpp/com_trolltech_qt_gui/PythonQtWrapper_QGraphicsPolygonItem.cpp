#include "PythonQtWrapper_QGraphicsPolygonItem.h"

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
#include <qpolygon.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

bool  PythonQtShell_QGraphicsPolygonItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsPolygonItem::staticMetaObject,
      "isObscuredBy(QGraphicsPolygonItem*,const QGraphicsItem* )");
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
  return QGraphicsPolygonItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsPolygonItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsPolygonItem::staticMetaObject,
      "opaqueArea(QGraphicsPolygonItem*)");
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
  return QGraphicsPolygonItem::opaqueArea();
}
QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPolygonItem(parent, scene); }

QGraphicsPolygonItem* PythonQtWrapper_QGraphicsPolygonItem::new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsPolygonItem(polygon, parent, scene); }

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::opaqueArea(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).opaqueArea();
}

void PythonQtWrapper_QGraphicsPolygonItem::paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
 (*theWrappedObject).paint(painter, option, widget);
}

QRectF  PythonQtWrapper_QGraphicsPolygonItem::boundingRect(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).boundingRect();
}

Qt::FillRule  PythonQtWrapper_QGraphicsPolygonItem::fillRule(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).fillRule();
}

QPolygonF  PythonQtWrapper_QGraphicsPolygonItem::polygon(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).polygon();
}

void PythonQtWrapper_QGraphicsPolygonItem::setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon)
{
 (*theWrappedObject).setPolygon(polygon);
}

int  PythonQtWrapper_QGraphicsPolygonItem::type(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

bool  PythonQtWrapper_QGraphicsPolygonItem::isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const
{
return  (*theWrappedObject).isObscuredBy(item);
}

void PythonQtWrapper_QGraphicsPolygonItem::setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule)
{
 (*theWrappedObject).setFillRule(rule);
}

bool  PythonQtWrapper_QGraphicsPolygonItem::contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const
{
return  (*theWrappedObject).contains(point);
}

QPainterPath  PythonQtWrapper_QGraphicsPolygonItem::shape(QGraphicsPolygonItem* theWrappedObject) const
{
return  (*theWrappedObject).shape();
}

