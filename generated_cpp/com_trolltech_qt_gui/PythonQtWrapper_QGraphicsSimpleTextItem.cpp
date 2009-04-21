#include "PythonQtWrapper_QGraphicsSimpleTextItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

bool  PythonQtShell_QGraphicsSimpleTextItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsSimpleTextItem::staticMetaObject,
      "isObscuredBy(QGraphicsSimpleTextItem*,const QGraphicsItem* )");
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
  return QGraphicsSimpleTextItem::isObscuredBy(item);
}
QPainterPath  PythonQtShell_QGraphicsSimpleTextItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsSimpleTextItem::staticMetaObject,
      "opaqueArea(QGraphicsSimpleTextItem*)");
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
  return QGraphicsSimpleTextItem::opaqueArea();
}
QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(parent, scene); }

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsSimpleTextItem(text, parent, scene); }

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::shape(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  theWrappedObject->shape();
}

QFont  PythonQtWrapper_QGraphicsSimpleTextItem::font(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  theWrappedObject->font();
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
return  ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_isObscuredBy(item);
}

void PythonQtWrapper_QGraphicsSimpleTextItem::paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
 theWrappedObject->paint(painter, option, widget);
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text)
{
 theWrappedObject->setText(text);
}

int  PythonQtWrapper_QGraphicsSimpleTextItem::type(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font)
{
 theWrappedObject->setFont(font);
}

QString  PythonQtWrapper_QGraphicsSimpleTextItem::text(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  theWrappedObject->text();
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const
{
return  theWrappedObject->contains(point);
}

QRectF  PythonQtWrapper_QGraphicsSimpleTextItem::boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  theWrappedObject->boundingRect();
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QGraphicsSimpleTextItem*)theWrappedObject)->promoted_opaqueArea();
}

