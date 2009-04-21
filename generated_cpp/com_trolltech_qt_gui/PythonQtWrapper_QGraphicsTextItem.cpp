#include "PythonQtWrapper_QGraphicsTextItem.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextCursor>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qwidget.h>

void PythonQtShell_QGraphicsTextItem::advance(int  phase)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "advance");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "advance(QGraphicsTextItem*,int )");
    void* args[2] = {NULL, (void*)&phase};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::advance(phase);
}
QRectF  PythonQtShell_QGraphicsTextItem::boundingRect() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "boundingRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "boundingRect(QGraphicsTextItem*)");
      QRectF  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QRectF *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::boundingRect();
}
void PythonQtShell_QGraphicsTextItem::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "childEvent(QGraphicsTextItem*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::childEvent(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "collidesWithItem(QGraphicsTextItem*,const QGraphicsItem* ,Qt::ItemSelectionMode )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&other, (void*)&mode};
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
  return QGraphicsTextItem::collidesWithItem(other, mode);
}
bool  PythonQtShell_QGraphicsTextItem::collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "collidesWithPath");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "collidesWithPath(QGraphicsTextItem*,const QPainterPath& ,Qt::ItemSelectionMode )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&path, (void*)&mode};
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
  return QGraphicsTextItem::collidesWithPath(path, mode);
}
bool  PythonQtShell_QGraphicsTextItem::contains(const QPointF&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contains");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "contains(QGraphicsTextItem*,const QPointF& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&point};
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
  return QGraphicsTextItem::contains(point);
}
void PythonQtShell_QGraphicsTextItem::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "contextMenuEvent(QGraphicsTextItem*,QGraphicsSceneContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsTextItem::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "customEvent(QGraphicsTextItem*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::customEvent(arg__1);
}
void PythonQtShell_QGraphicsTextItem::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "dragEnterEvent(QGraphicsTextItem*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsTextItem::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "dragLeaveEvent(QGraphicsTextItem*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsTextItem::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "dragMoveEvent(QGraphicsTextItem*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsTextItem::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "dropEvent(QGraphicsTextItem*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::dropEvent(event);
}
bool  PythonQtShell_QGraphicsTextItem::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "event(QGraphicsTextItem*,QEvent* )");
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
  return QGraphicsTextItem::event(arg__1);
}
bool  PythonQtShell_QGraphicsTextItem::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "eventFilter(QGraphicsTextItem*,QObject* ,QEvent* )");
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
  return QGraphicsTextItem::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QGraphicsTextItem::extension(const QVariant&  variant) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "extension");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "extension(QGraphicsTextItem*,const QVariant& )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&variant};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::extension(variant);
}
void PythonQtShell_QGraphicsTextItem::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "focusInEvent(QGraphicsTextItem*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::focusInEvent(event);
}
void PythonQtShell_QGraphicsTextItem::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "focusOutEvent(QGraphicsTextItem*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::focusOutEvent(event);
}
void PythonQtShell_QGraphicsTextItem::hoverEnterEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "hoverEnterEvent(QGraphicsTextItem*,QGraphicsSceneHoverEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::hoverEnterEvent(event);
}
void PythonQtShell_QGraphicsTextItem::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "hoverLeaveEvent(QGraphicsTextItem*,QGraphicsSceneHoverEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::hoverLeaveEvent(event);
}
void PythonQtShell_QGraphicsTextItem::hoverMoveEvent(QGraphicsSceneHoverEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hoverMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "hoverMoveEvent(QGraphicsTextItem*,QGraphicsSceneHoverEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::hoverMoveEvent(event);
}
void PythonQtShell_QGraphicsTextItem::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "inputMethodEvent(QGraphicsTextItem*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsTextItem::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "inputMethodQuery(QGraphicsTextItem*,Qt::InputMethodQuery )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::inputMethodQuery(query);
}
bool  PythonQtShell_QGraphicsTextItem::isObscuredBy(const QGraphicsItem*  item) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isObscuredBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "isObscuredBy(QGraphicsTextItem*,const QGraphicsItem* )");
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
  return QGraphicsTextItem::isObscuredBy(item);
}
QVariant  PythonQtShell_QGraphicsTextItem::itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "itemChange(QGraphicsTextItem*,QGraphicsItem::GraphicsItemChange ,const QVariant& )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&change, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsTextItem::itemChange(change, value);
}
void PythonQtShell_QGraphicsTextItem::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "keyPressEvent(QGraphicsTextItem*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::keyPressEvent(event);
}
void PythonQtShell_QGraphicsTextItem::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "keyReleaseEvent(QGraphicsTextItem*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "mouseDoubleClickEvent(QGraphicsTextItem*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsTextItem::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "mouseMoveEvent(QGraphicsTextItem*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsTextItem::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "mousePressEvent(QGraphicsTextItem*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::mousePressEvent(event);
}
void PythonQtShell_QGraphicsTextItem::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "mouseReleaseEvent(QGraphicsTextItem*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::mouseReleaseEvent(event);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::opaqueArea() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "opaqueArea");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "opaqueArea(QGraphicsTextItem*)");
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
  return QGraphicsTextItem::opaqueArea();
}
void PythonQtShell_QGraphicsTextItem::paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "paint(QGraphicsTextItem*,QPainter* ,const QStyleOptionGraphicsItem* ,QWidget* )");
    void* args[4] = {NULL, (void*)&painter, (void*)&option, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::paint(painter, option, widget);
}
bool  PythonQtShell_QGraphicsTextItem::sceneEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "sceneEvent(QGraphicsTextItem*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&event};
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
  return QGraphicsTextItem::sceneEvent(event);
}
bool  PythonQtShell_QGraphicsTextItem::sceneEventFilter(QGraphicsItem*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sceneEventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "sceneEventFilter(QGraphicsTextItem*,QGraphicsItem* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&watched, (void*)&event};
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
  return QGraphicsTextItem::sceneEventFilter(watched, event);
}
QPainterPath  PythonQtShell_QGraphicsTextItem::shape() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "shape");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "shape(QGraphicsTextItem*)");
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
  return QGraphicsTextItem::shape();
}
void PythonQtShell_QGraphicsTextItem::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "timerEvent(QGraphicsTextItem*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::timerEvent(arg__1);
}
int  PythonQtShell_QGraphicsTextItem::type() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "type");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "type(QGraphicsTextItem*)");
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
  return QGraphicsTextItem::type();
}
void PythonQtShell_QGraphicsTextItem::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsTextItem::staticMetaObject,
      "wheelEvent(QGraphicsTextItem*,QGraphicsSceneWheelEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsTextItem::wheelEvent(event);
}
QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(parent, scene); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new PythonQtShell_QGraphicsTextItem(text, parent, scene); }

void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
 (*theWrappedObject).adjustSize();
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).openExternalLinks();
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).toPlainText();
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).type();
}

void PythonQtWrapper_QGraphicsTextItem::keyReleaseEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).keyReleaseEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::hoverLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).hoverLeaveEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::hoverMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).hoverMoveEvent(event);
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).textCursor();
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
 (*theWrappedObject).setTextInteractionFlags(flags);
}

void PythonQtWrapper_QGraphicsTextItem::dropEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).dropEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
 (*theWrappedObject).setDocument(document);
}

void PythonQtWrapper_QGraphicsTextItem::inputMethodEvent(QGraphicsTextItem* theWrappedObject, QInputMethodEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).inputMethodEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::contextMenuEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).contextMenuEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::keyPressEvent(QGraphicsTextItem* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).keyPressEvent(event);
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return  (*theWrappedObject).contains(point);
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
 (*theWrappedObject).setDefaultTextColor(c);
}

void PythonQtWrapper_QGraphicsTextItem::focusOutEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).focusOutEvent(event);
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).font();
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).boundingRect();
}

void PythonQtWrapper_QGraphicsTextItem::hoverEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneHoverEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).hoverEnterEvent(event);
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).textInteractionFlags();
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).opaqueArea();
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
 (*theWrappedObject).setPlainText(text);
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
 (*theWrappedObject).setTextCursor(cursor);
}

void PythonQtWrapper_QGraphicsTextItem::dragLeaveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).dragLeaveEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
 (*theWrappedObject).setOpenExternalLinks(open);
}

void PythonQtWrapper_QGraphicsTextItem::dragMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).dragMoveEvent(event);
}

QVariant  PythonQtWrapper_QGraphicsTextItem::inputMethodQuery(QGraphicsTextItem* theWrappedObject, Qt::InputMethodQuery  query) const
{
return  (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).inputMethodQuery(query);
}

void PythonQtWrapper_QGraphicsTextItem::focusInEvent(QGraphicsTextItem* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).focusInEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
 (*theWrappedObject).paint(painter, option, widget);
}

QVariant  PythonQtWrapper_QGraphicsTextItem::extension(QGraphicsTextItem* theWrappedObject, const QVariant&  variant) const
{
return  (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).extension(variant);
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).defaultTextColor();
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
return  (*theWrappedObject).isObscuredBy(item);
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).toHtml();
}

void PythonQtWrapper_QGraphicsTextItem::mouseReleaseEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).mouseReleaseEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::dragEnterEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).dragEnterEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
 (*theWrappedObject).setTextWidth(width);
}

void PythonQtWrapper_QGraphicsTextItem::mousePressEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).mousePressEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::mouseDoubleClickEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).mouseDoubleClickEvent(event);
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).textWidth();
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
 (*theWrappedObject).setFont(font);
}

void PythonQtWrapper_QGraphicsTextItem::mouseMoveEvent(QGraphicsTextItem* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).mouseMoveEvent(event);
}

bool  PythonQtWrapper_QGraphicsTextItem::sceneEvent(QGraphicsTextItem* theWrappedObject, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QGraphicsTextItem*)theWrappedObject)).sceneEvent(event);
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
 (*theWrappedObject).setHtml(html);
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).document();
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
return  (*theWrappedObject).shape();
}

