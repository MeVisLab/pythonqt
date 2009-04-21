#include "PythonQtWrapper_QGraphicsScene.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVarLengthArray>
#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qline.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtShell_QGraphicsScene::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "childEvent(QGraphicsScene*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::childEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "contextMenuEvent(QGraphicsScene*,QGraphicsSceneContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsScene::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "customEvent(QGraphicsScene*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::customEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::dragEnterEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "dragEnterEvent(QGraphicsScene*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsScene::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "dragLeaveEvent(QGraphicsScene*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsScene::dragMoveEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "dragMoveEvent(QGraphicsScene*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::drawBackground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBackground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "drawBackground(QGraphicsScene*,QPainter* ,const QRectF& )");
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawForeground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawForeground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "drawForeground(QGraphicsScene*,QPainter* ,const QRectF& )");
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsScene::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "drawItems(QGraphicsScene*,QPainter* ,int ,QGraphicsItem** ,const QStyleOptionGraphicsItem* ,QWidget* )");
    void* args[6] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options, (void*)&widget};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::drawItems(painter, numItems, items, options, widget);
}
void PythonQtShell_QGraphicsScene::dropEvent(QGraphicsSceneDragDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "dropEvent(QGraphicsScene*,QGraphicsSceneDragDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::dropEvent(event);
}
bool  PythonQtShell_QGraphicsScene::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "event(QGraphicsScene*,QEvent* )");
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
  return QGraphicsScene::event(event);
}
bool  PythonQtShell_QGraphicsScene::eventFilter(QObject*  watched, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "eventFilter(QGraphicsScene*,QObject* ,QEvent* )");
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
  return QGraphicsScene::eventFilter(watched, event);
}
void PythonQtShell_QGraphicsScene::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "focusInEvent(QGraphicsScene*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusInEvent(event);
}
void PythonQtShell_QGraphicsScene::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "focusOutEvent(QGraphicsScene*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::focusOutEvent(event);
}
void PythonQtShell_QGraphicsScene::helpEvent(QGraphicsSceneHelpEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "helpEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "helpEvent(QGraphicsScene*,QGraphicsSceneHelpEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::helpEvent(event);
}
void PythonQtShell_QGraphicsScene::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "inputMethodEvent(QGraphicsScene*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsScene::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "inputMethodQuery(QGraphicsScene*,Qt::InputMethodQuery )");
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
  return QGraphicsScene::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsScene::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "keyPressEvent(QGraphicsScene*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyPressEvent(event);
}
void PythonQtShell_QGraphicsScene::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "keyReleaseEvent(QGraphicsScene*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "mouseDoubleClickEvent(QGraphicsScene*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "mouseMoveEvent(QGraphicsScene*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "mousePressEvent(QGraphicsScene*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mousePressEvent(event);
}
void PythonQtShell_QGraphicsScene::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "mouseReleaseEvent(QGraphicsScene*,QGraphicsSceneMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsScene::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "timerEvent(QGraphicsScene*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::timerEvent(arg__1);
}
void PythonQtShell_QGraphicsScene::wheelEvent(QGraphicsSceneWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsScene::staticMetaObject,
      "wheelEvent(QGraphicsScene*,QGraphicsSceneWheelEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsScene::wheelEvent(event);
}
QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(const QRectF&  sceneRect, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(sceneRect, parent); }

QGraphicsScene* PythonQtWrapper_QGraphicsScene::new_QGraphicsScene(qreal  x, qreal  y, qreal  width, qreal  height, QObject*  parent)
{ 
return new PythonQtShell_QGraphicsScene(x, y, width, height, parent); }

void PythonQtWrapper_QGraphicsScene::update(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
 (*theWrappedObject).update(x, y, w, h);
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, const QRectF&  rect)
{
 (*theWrappedObject).setSceneRect(rect);
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2, const QPen&  pen)
{
return  (*theWrappedObject).addLine(x1, y1, x2, y2, pen);
}

void PythonQtWrapper_QGraphicsScene::setBackgroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setBackgroundBrush(brush);
}

bool  PythonQtWrapper_QGraphicsScene::eventFilter(QGraphicsScene* theWrappedObject, QObject*  watched, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).eventFilter(watched, event);
}

QGraphicsSimpleTextItem*  PythonQtWrapper_QGraphicsScene::addSimpleText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
return  (*theWrappedObject).addSimpleText(text, font);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsScene::activeWindow(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).activeWindow();
}

void PythonQtWrapper_QGraphicsScene::mouseMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).mouseMoveEvent(event);
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  arg__2)
{
 (*theWrappedObject).setSelectionArea(path, arg__2);
}

void PythonQtWrapper_QGraphicsScene::mouseDoubleClickEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).mouseDoubleClickEvent(event);
}

void PythonQtWrapper_QGraphicsScene::helpEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneHelpEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).helpEvent(event);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(x, y, w, h, mode);
}

QGraphicsPolygonItem*  PythonQtWrapper_QGraphicsScene::addPolygon(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addPolygon(polygon, pen, brush);
}

QPalette  PythonQtWrapper_QGraphicsScene::palette(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).palette();
}

void PythonQtWrapper_QGraphicsScene::drawBackground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).drawBackground(painter, rect);
}

QRectF  PythonQtWrapper_QGraphicsScene::sceneRect(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).sceneRect();
}

void PythonQtWrapper_QGraphicsScene::keyReleaseEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).keyReleaseEvent(event);
}

void PythonQtWrapper_QGraphicsScene::setFocusItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item, Qt::FocusReason  focusReason)
{
 (*theWrappedObject).setFocusItem(item, focusReason);
}

void PythonQtWrapper_QGraphicsScene::focusOutEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).focusOutEvent(event);
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addRect(x, y, w, h, pen, brush);
}

void PythonQtWrapper_QGraphicsScene::dragLeaveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).dragLeaveEvent(event);
}

void PythonQtWrapper_QGraphicsScene::drawItems(QGraphicsScene* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options, QWidget*  widget)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).drawItems(painter, numItems, items, options, widget);
}

qreal  PythonQtWrapper_QGraphicsScene::width(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).width();
}

void PythonQtWrapper_QGraphicsScene::contextMenuEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneContextMenuEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).contextMenuEvent(event);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::selectedItems(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).selectedItems();
}

QGraphicsScene::ItemIndexMethod  PythonQtWrapper_QGraphicsScene::itemIndexMethod(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).itemIndexMethod();
}

QBrush  PythonQtWrapper_QGraphicsScene::backgroundBrush(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).backgroundBrush();
}

QGraphicsPixmapItem*  PythonQtWrapper_QGraphicsScene::addPixmap(QGraphicsScene* theWrappedObject, const QPixmap&  pixmap)
{
return  (*theWrappedObject).addPixmap(pixmap);
}

void PythonQtWrapper_QGraphicsScene::setItemIndexMethod(QGraphicsScene* theWrappedObject, QGraphicsScene::ItemIndexMethod  method)
{
 (*theWrappedObject).setItemIndexMethod(method);
}

void PythonQtWrapper_QGraphicsScene::setForegroundBrush(QGraphicsScene* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setForegroundBrush(brush);
}

void PythonQtWrapper_QGraphicsScene::setActiveWindow(QGraphicsScene* theWrappedObject, QGraphicsWidget*  widget)
{
 (*theWrappedObject).setActiveWindow(widget);
}

int  PythonQtWrapper_QGraphicsScene::bspTreeDepth(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).bspTreeDepth();
}

void PythonQtWrapper_QGraphicsScene::removeItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
 (*theWrappedObject).removeItem(item);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::collidingItems(QGraphicsScene* theWrappedObject, const QGraphicsItem*  item, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).collidingItems(item, mode);
}

void PythonQtWrapper_QGraphicsScene::dragMoveEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).dragMoveEvent(event);
}

void PythonQtWrapper_QGraphicsScene::setStyle(QGraphicsScene* theWrappedObject, QStyle*  style)
{
 (*theWrappedObject).setStyle(style);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPointF&  pos) const
{
return  (*theWrappedObject).items(pos);
}

void PythonQtWrapper_QGraphicsScene::setSceneRect(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
 (*theWrappedObject).setSceneRect(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsScene::selectionArea(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).selectionArea();
}

QRectF  PythonQtWrapper_QGraphicsScene::itemsBoundingRect(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).itemsBoundingRect();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, const QPointF&  pos) const
{
return  (*theWrappedObject).itemAt(pos);
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsScene::createItemGroup(QGraphicsScene* theWrappedObject, const QList<QGraphicsItem* >&  items)
{
return  (*theWrappedObject).createItemGroup(items);
}

QStyle*  PythonQtWrapper_QGraphicsScene::style(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).style();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::itemAt(QGraphicsScene* theWrappedObject, qreal  x, qreal  y) const
{
return  (*theWrappedObject).itemAt(x, y);
}

void PythonQtWrapper_QGraphicsScene::setFocus(QGraphicsScene* theWrappedObject, Qt::FocusReason  focusReason)
{
 (*theWrappedObject).setFocus(focusReason);
}

QGraphicsRectItem*  PythonQtWrapper_QGraphicsScene::addRect(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addRect(rect, pen, brush);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::focusItem(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).focusItem();
}

void PythonQtWrapper_QGraphicsScene::drawForeground(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).drawForeground(painter, rect);
}

QBrush  PythonQtWrapper_QGraphicsScene::foregroundBrush(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).foregroundBrush();
}

QGraphicsProxyWidget*  PythonQtWrapper_QGraphicsScene::addWidget(QGraphicsScene* theWrappedObject, QWidget*  widget, Qt::WindowFlags  wFlags)
{
return  (*theWrappedObject).addWidget(widget, wFlags);
}

QGraphicsPathItem*  PythonQtWrapper_QGraphicsScene::addPath(QGraphicsScene* theWrappedObject, const QPainterPath&  path, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addPath(path, pen, brush);
}

qreal  PythonQtWrapper_QGraphicsScene::height(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).height();
}

void PythonQtWrapper_QGraphicsScene::setFont(QGraphicsScene* theWrappedObject, const QFont&  font)
{
 (*theWrappedObject).setFont(font);
}

void PythonQtWrapper_QGraphicsScene::destroyItemGroup(QGraphicsScene* theWrappedObject, QGraphicsItemGroup*  group)
{
 (*theWrappedObject).destroyItemGroup(group);
}

bool  PythonQtWrapper_QGraphicsScene::event(QGraphicsScene* theWrappedObject, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).event(event);
}

void PythonQtWrapper_QGraphicsScene::inputMethodEvent(QGraphicsScene* theWrappedObject, QInputMethodEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).inputMethodEvent(event);
}

void PythonQtWrapper_QGraphicsScene::setSelectionArea(QGraphicsScene* theWrappedObject, const QPainterPath&  path)
{
 (*theWrappedObject).setSelectionArea(path);
}

QList<QGraphicsView* >  PythonQtWrapper_QGraphicsScene::views(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).views();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QRectF&  rect, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(rect, mode);
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, const QRectF&  rect, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addEllipse(rect, pen, brush);
}

void PythonQtWrapper_QGraphicsScene::keyPressEvent(QGraphicsScene* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).keyPressEvent(event);
}

void PythonQtWrapper_QGraphicsScene::setPalette(QGraphicsScene* theWrappedObject, const QPalette&  palette)
{
 (*theWrappedObject).setPalette(palette);
}

QGraphicsTextItem*  PythonQtWrapper_QGraphicsScene::addText(QGraphicsScene* theWrappedObject, const QString&  text, const QFont&  font)
{
return  (*theWrappedObject).addText(text, font);
}

void PythonQtWrapper_QGraphicsScene::mousePressEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).mousePressEvent(event);
}

bool  PythonQtWrapper_QGraphicsScene::hasFocus(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).hasFocus();
}

void PythonQtWrapper_QGraphicsScene::addItem(QGraphicsScene* theWrappedObject, QGraphicsItem*  item)
{
 (*theWrappedObject).addItem(item);
}

void PythonQtWrapper_QGraphicsScene::render(QGraphicsScene* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRectF&  source, Qt::AspectRatioMode  aspectRatioMode)
{
 (*theWrappedObject).render(painter, target, source, aspectRatioMode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject, const QPolygonF&  polygon, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(polygon, mode);
}

void PythonQtWrapper_QGraphicsScene::mouseReleaseEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).mouseReleaseEvent(event);
}

void PythonQtWrapper_QGraphicsScene::focusInEvent(QGraphicsScene* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).focusInEvent(event);
}

QGraphicsEllipseItem*  PythonQtWrapper_QGraphicsScene::addEllipse(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, const QPen&  pen, const QBrush&  brush)
{
return  (*theWrappedObject).addEllipse(x, y, w, h, pen, brush);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsScene::mouseGrabberItem(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).mouseGrabberItem();
}

void PythonQtWrapper_QGraphicsScene::dropEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).dropEvent(event);
}

void PythonQtWrapper_QGraphicsScene::wheelEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneWheelEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).wheelEvent(event);
}

QGraphicsLineItem*  PythonQtWrapper_QGraphicsScene::addLine(QGraphicsScene* theWrappedObject, const QLineF&  line, const QPen&  pen)
{
return  (*theWrappedObject).addLine(line, pen);
}

void PythonQtWrapper_QGraphicsScene::clearFocus(QGraphicsScene* theWrappedObject)
{
 (*theWrappedObject).clearFocus();
}

void PythonQtWrapper_QGraphicsScene::setBspTreeDepth(QGraphicsScene* theWrappedObject, int  depth)
{
 (*theWrappedObject).setBspTreeDepth(depth);
}

QFont  PythonQtWrapper_QGraphicsScene::font(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).font();
}

void PythonQtWrapper_QGraphicsScene::dragEnterEvent(QGraphicsScene* theWrappedObject, QGraphicsSceneDragDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsScene*)theWrappedObject)).dragEnterEvent(event);
}

QVariant  PythonQtWrapper_QGraphicsScene::inputMethodQuery(QGraphicsScene* theWrappedObject, Qt::InputMethodQuery  query) const
{
return  (*theWrappedObject).inputMethodQuery(query);
}

void PythonQtWrapper_QGraphicsScene::invalidate(QGraphicsScene* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsScene::SceneLayers  layers)
{
 (*theWrappedObject).invalidate(x, y, w, h, layers);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsScene::items(QGraphicsScene* theWrappedObject) const
{
return  (*theWrappedObject).items();
}

