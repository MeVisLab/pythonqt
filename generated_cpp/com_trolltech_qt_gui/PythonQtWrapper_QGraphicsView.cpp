#include "PythonQtWrapper_QGraphicsView.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QPainterPath>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

void PythonQtShell_QGraphicsView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "actionEvent(QGraphicsView*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::actionEvent(arg__1);
}
void PythonQtShell_QGraphicsView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "changeEvent(QGraphicsView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::changeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "childEvent(QGraphicsView*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::childEvent(arg__1);
}
void PythonQtShell_QGraphicsView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "closeEvent(QGraphicsView*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::closeEvent(arg__1);
}
void PythonQtShell_QGraphicsView::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "contextMenuEvent(QGraphicsView*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::contextMenuEvent(event);
}
void PythonQtShell_QGraphicsView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "customEvent(QGraphicsView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::customEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "devType(QGraphicsView*)");
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
  return QGraphicsView::devType();
}
void PythonQtShell_QGraphicsView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "dragEnterEvent(QGraphicsView*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragEnterEvent(event);
}
void PythonQtShell_QGraphicsView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "dragLeaveEvent(QGraphicsView*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragLeaveEvent(event);
}
void PythonQtShell_QGraphicsView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "dragMoveEvent(QGraphicsView*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dragMoveEvent(event);
}
void PythonQtShell_QGraphicsView::drawBackground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBackground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "drawBackground(QGraphicsView*,QPainter* ,const QRectF& )");
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawBackground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawForeground(QPainter*  painter, const QRectF&  rect)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawForeground");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "drawForeground(QGraphicsView*,QPainter* ,const QRectF& )");
    void* args[3] = {NULL, (void*)&painter, (void*)&rect};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawForeground(painter, rect);
}
void PythonQtShell_QGraphicsView::drawItems(QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawItems");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "drawItems(QGraphicsView*,QPainter* ,int ,QGraphicsItem** ,const QStyleOptionGraphicsItem* )");
    void* args[5] = {NULL, (void*)&painter, (void*)&numItems, (void*)&items, (void*)&options};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::drawItems(painter, numItems, items, options);
}
void PythonQtShell_QGraphicsView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "dropEvent(QGraphicsView*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::dropEvent(event);
}
void PythonQtShell_QGraphicsView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "enterEvent(QGraphicsView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::enterEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "event(QGraphicsView*,QEvent* )");
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
  return QGraphicsView::event(event);
}
bool  PythonQtShell_QGraphicsView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "eventFilter(QGraphicsView*,QObject* ,QEvent* )");
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
  return QGraphicsView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QGraphicsView::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "focusInEvent(QGraphicsView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::focusInEvent(event);
}
bool  PythonQtShell_QGraphicsView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "focusNextPrevChild(QGraphicsView*,bool )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&next};
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
  return QGraphicsView::focusNextPrevChild(next);
}
void PythonQtShell_QGraphicsView::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "focusOutEvent(QGraphicsView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::focusOutEvent(event);
}
int  PythonQtShell_QGraphicsView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "heightForWidth(QGraphicsView*,int )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QGraphicsView::heightForWidth(arg__1);
}
void PythonQtShell_QGraphicsView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "hideEvent(QGraphicsView*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::hideEvent(arg__1);
}
void PythonQtShell_QGraphicsView::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "inputMethodEvent(QGraphicsView*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QGraphicsView::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "inputMethodQuery(QGraphicsView*,Qt::InputMethodQuery )");
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
  return QGraphicsView::inputMethodQuery(query);
}
void PythonQtShell_QGraphicsView::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "keyPressEvent(QGraphicsView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::keyPressEvent(event);
}
void PythonQtShell_QGraphicsView::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "keyReleaseEvent(QGraphicsView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::keyReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "languageChange(QGraphicsView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::languageChange();
}
void PythonQtShell_QGraphicsView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "leaveEvent(QGraphicsView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::leaveEvent(arg__1);
}
int  PythonQtShell_QGraphicsView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "metric(QGraphicsView*,QPaintDevice::PaintDeviceMetric )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QGraphicsView::metric(arg__1);
}
void PythonQtShell_QGraphicsView::mouseDoubleClickEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "mouseDoubleClickEvent(QGraphicsView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QGraphicsView::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "mouseMoveEvent(QGraphicsView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseMoveEvent(event);
}
void PythonQtShell_QGraphicsView::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "mousePressEvent(QGraphicsView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mousePressEvent(event);
}
void PythonQtShell_QGraphicsView::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "mouseReleaseEvent(QGraphicsView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::mouseReleaseEvent(event);
}
void PythonQtShell_QGraphicsView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "moveEvent(QGraphicsView*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QGraphicsView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "paintEngine(QGraphicsView*)");
      QPaintEngine*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QPaintEngine* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGraphicsView::paintEngine();
}
void PythonQtShell_QGraphicsView::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "paintEvent(QGraphicsView*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::paintEvent(event);
}
void PythonQtShell_QGraphicsView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "resizeEvent(QGraphicsView*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::resizeEvent(event);
}
void PythonQtShell_QGraphicsView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "scrollContentsBy(QGraphicsView*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QGraphicsView::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "showEvent(QGraphicsView*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::showEvent(event);
}
void PythonQtShell_QGraphicsView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "tabletEvent(QGraphicsView*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::tabletEvent(arg__1);
}
void PythonQtShell_QGraphicsView::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "timerEvent(QGraphicsView*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::timerEvent(arg__1);
}
bool  PythonQtShell_QGraphicsView::viewportEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "viewportEvent(QGraphicsView*,QEvent* )");
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
  return QGraphicsView::viewportEvent(event);
}
void PythonQtShell_QGraphicsView::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGraphicsView::staticMetaObject,
      "wheelEvent(QGraphicsView*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGraphicsView::wheelEvent(event);
}
QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QGraphicsScene*  scene, QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(scene, parent); }

QGraphicsView* PythonQtWrapper_QGraphicsView::new_QGraphicsView(QWidget*  parent)
{ 
return new PythonQtShell_QGraphicsView(parent); }

bool  PythonQtWrapper_QGraphicsView::viewportEvent(QGraphicsView* theWrappedObject, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).viewportEvent(event);
}

void PythonQtWrapper_QGraphicsView::wheelEvent(QGraphicsView* theWrappedObject, QWheelEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).wheelEvent(event);
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, Qt::AspectRatioMode  aspectRadioMode)
{
 (*theWrappedObject).fitInView(item, aspectRadioMode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).items();
}

void PythonQtWrapper_QGraphicsView::setBackgroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setBackgroundBrush(brush);
}

void PythonQtWrapper_QGraphicsView::resetMatrix(QGraphicsView* theWrappedObject)
{
 (*theWrappedObject).resetMatrix();
}

void PythonQtWrapper_QGraphicsView::setTransformationAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
 (*theWrappedObject).setTransformationAnchor(anchor);
}

QTransform  PythonQtWrapper_QGraphicsView::transform(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).transform();
}

void PythonQtWrapper_QGraphicsView::drawItems(QGraphicsView* theWrappedObject, QPainter*  painter, int  numItems, QGraphicsItem**  items, const QStyleOptionGraphicsItem*  options)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).drawItems(painter, numItems, items, options);
}

void PythonQtWrapper_QGraphicsView::keyReleaseEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).keyReleaseEvent(event);
}

void PythonQtWrapper_QGraphicsView::setRenderHints(QGraphicsView* theWrappedObject, QPainter::RenderHints  hints)
{
 (*theWrappedObject).setRenderHints(hints);
}

void PythonQtWrapper_QGraphicsView::shear(QGraphicsView* theWrappedObject, qreal  sh, qreal  sv)
{
 (*theWrappedObject).shear(sh, sv);
}

QVariant  PythonQtWrapper_QGraphicsView::inputMethodQuery(QGraphicsView* theWrappedObject, Qt::InputMethodQuery  query) const
{
return  (*theWrappedObject).inputMethodQuery(query);
}

void PythonQtWrapper_QGraphicsView::dragLeaveEvent(QGraphicsView* theWrappedObject, QDragLeaveEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).dragLeaveEvent(event);
}

QGraphicsView::ViewportUpdateMode  PythonQtWrapper_QGraphicsView::viewportUpdateMode(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).viewportUpdateMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y) const
{
return  (*theWrappedObject).items(x, y);
}

void PythonQtWrapper_QGraphicsView::render(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  target, const QRect&  source, Qt::AspectRatioMode  aspectRatioMode)
{
 (*theWrappedObject).render(painter, target, source, aspectRatioMode);
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
 (*theWrappedObject).ensureVisible(x, y, w, h, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlag(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlag  flag, bool  enabled)
{
 (*theWrappedObject).setOptimizationFlag(flag, enabled);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
return  (*theWrappedObject).itemAt(pos);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QRect&  rect, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(rect, mode);
}

void PythonQtWrapper_QGraphicsView::setCacheMode(QGraphicsView* theWrappedObject, QGraphicsView::CacheMode  mode)
{
 (*theWrappedObject).setCacheMode(mode);
}

void PythonQtWrapper_QGraphicsView::translate(QGraphicsView* theWrappedObject, qreal  dx, qreal  dy)
{
 (*theWrappedObject).translate(dx, dy);
}

bool  PythonQtWrapper_QGraphicsView::event(QGraphicsView* theWrappedObject, QEvent*  event)
{
return  (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).event(event);
}

void PythonQtWrapper_QGraphicsView::focusInEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).focusInEvent(event);
}

void PythonQtWrapper_QGraphicsView::setTransform(QGraphicsView* theWrappedObject, const QTransform&  matrix, bool  combine)
{
 (*theWrappedObject).setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsView::focusOutEvent(QGraphicsView* theWrappedObject, QFocusEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).focusOutEvent(event);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(x, y, w, h, mode);
}

void PythonQtWrapper_QGraphicsView::setInteractive(QGraphicsView* theWrappedObject, bool  allowed)
{
 (*theWrappedObject).setInteractive(allowed);
}

void PythonQtWrapper_QGraphicsView::setViewportUpdateMode(QGraphicsView* theWrappedObject, QGraphicsView::ViewportUpdateMode  mode)
{
 (*theWrappedObject).setViewportUpdateMode(mode);
}

QTransform  PythonQtWrapper_QGraphicsView::viewportTransform(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).viewportTransform();
}

void PythonQtWrapper_QGraphicsView::mouseDoubleClickEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).mouseDoubleClickEvent(event);
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, const QRectF&  rect, Qt::AspectRatioMode  aspectRadioMode)
{
 (*theWrappedObject).fitInView(rect, aspectRadioMode);
}

Qt::ItemSelectionMode  PythonQtWrapper_QGraphicsView::rubberBandSelectionMode(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).rubberBandSelectionMode();
}

void PythonQtWrapper_QGraphicsView::drawForeground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).drawForeground(painter, rect);
}

void PythonQtWrapper_QGraphicsView::mouseMoveEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).mouseMoveEvent(event);
}

QBrush  PythonQtWrapper_QGraphicsView::foregroundBrush(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).foregroundBrush();
}

QSize  PythonQtWrapper_QGraphicsView::sizeHint(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(path, mode);
}

bool  PythonQtWrapper_QGraphicsView::focusNextPrevChild(QGraphicsView* theWrappedObject, bool  next)
{
return  (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).focusNextPrevChild(next);
}

void PythonQtWrapper_QGraphicsView::dragMoveEvent(QGraphicsView* theWrappedObject, QDragMoveEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).dragMoveEvent(event);
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, qreal  x, qreal  y)
{
 (*theWrappedObject).centerOn(x, y);
}

void PythonQtWrapper_QGraphicsView::setRenderHint(QGraphicsView* theWrappedObject, QPainter::RenderHint  hint, bool  enabled)
{
 (*theWrappedObject).setRenderHint(hint, enabled);
}

void PythonQtWrapper_QGraphicsView::setRubberBandSelectionMode(QGraphicsView* theWrappedObject, Qt::ItemSelectionMode  mode)
{
 (*theWrappedObject).setRubberBandSelectionMode(mode);
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
 (*theWrappedObject).ensureVisible(rect, xmargin, ymargin);
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::transformationAnchor(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).transformationAnchor();
}

void PythonQtWrapper_QGraphicsView::ensureVisible(QGraphicsView* theWrappedObject, const QGraphicsItem*  item, int  xmargin, int  ymargin)
{
 (*theWrappedObject).ensureVisible(item, xmargin, ymargin);
}

QMatrix  PythonQtWrapper_QGraphicsView::matrix(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).matrix();
}

void PythonQtWrapper_QGraphicsView::setOptimizationFlags(QGraphicsView* theWrappedObject, QGraphicsView::OptimizationFlags  flags)
{
 (*theWrappedObject).setOptimizationFlags(flags);
}

void PythonQtWrapper_QGraphicsView::showEvent(QGraphicsView* theWrappedObject, QShowEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).showEvent(event);
}

Qt::Alignment  PythonQtWrapper_QGraphicsView::alignment(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).alignment();
}

QGraphicsScene*  PythonQtWrapper_QGraphicsView::scene(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).scene();
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, const QRectF&  rect)
{
 (*theWrappedObject).setSceneRect(rect);
}

void PythonQtWrapper_QGraphicsView::contextMenuEvent(QGraphicsView* theWrappedObject, QContextMenuEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).contextMenuEvent(event);
}

void PythonQtWrapper_QGraphicsView::resizeEvent(QGraphicsView* theWrappedObject, QResizeEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).resizeEvent(event);
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y) const
{
return  (*theWrappedObject).mapFromScene(x, y);
}

void PythonQtWrapper_QGraphicsView::dropEvent(QGraphicsView* theWrappedObject, QDropEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).dropEvent(event);
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return  (*theWrappedObject).mapFromScene(x, y, w, h);
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y, int  w, int  h) const
{
return  (*theWrappedObject).mapToScene(x, y, w, h);
}

QGraphicsView::ViewportAnchor  PythonQtWrapper_QGraphicsView::resizeAnchor(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).resizeAnchor();
}

QGraphicsView::DragMode  PythonQtWrapper_QGraphicsView::dragMode(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).dragMode();
}

void PythonQtWrapper_QGraphicsView::scrollContentsBy(QGraphicsView* theWrappedObject, int  dx, int  dy)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).scrollContentsBy(dx, dy);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPolygon&  polygon, Qt::ItemSelectionMode  mode) const
{
return  (*theWrappedObject).items(polygon, mode);
}

void PythonQtWrapper_QGraphicsView::rotate(QGraphicsView* theWrappedObject, qreal  angle)
{
 (*theWrappedObject).rotate(angle);
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
return  (*theWrappedObject).mapFromScene(path);
}

void PythonQtWrapper_QGraphicsView::setAlignment(QGraphicsView* theWrappedObject, Qt::Alignment  alignment)
{
 (*theWrappedObject).setAlignment(alignment);
}

void PythonQtWrapper_QGraphicsView::drawBackground(QGraphicsView* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).drawBackground(painter, rect);
}

void PythonQtWrapper_QGraphicsView::mousePressEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).mousePressEvent(event);
}

void PythonQtWrapper_QGraphicsView::mouseReleaseEvent(QGraphicsView* theWrappedObject, QMouseEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).mouseReleaseEvent(event);
}

QGraphicsView::CacheMode  PythonQtWrapper_QGraphicsView::cacheMode(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).cacheMode();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsView::itemAt(QGraphicsView* theWrappedObject, int  x, int  y) const
{
return  (*theWrappedObject).itemAt(x, y);
}

void PythonQtWrapper_QGraphicsView::setMatrix(QGraphicsView* theWrappedObject, const QMatrix&  matrix, bool  combine)
{
 (*theWrappedObject).setMatrix(matrix, combine);
}

QBrush  PythonQtWrapper_QGraphicsView::backgroundBrush(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).backgroundBrush();
}

QGraphicsView::OptimizationFlags  PythonQtWrapper_QGraphicsView::optimizationFlags(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).optimizationFlags();
}

void PythonQtWrapper_QGraphicsView::setScene(QGraphicsView* theWrappedObject, QGraphicsScene*  scene)
{
 (*theWrappedObject).setScene(scene);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsView::items(QGraphicsView* theWrappedObject, const QPoint&  pos) const
{
return  (*theWrappedObject).items(pos);
}

void PythonQtWrapper_QGraphicsView::setDragMode(QGraphicsView* theWrappedObject, QGraphicsView::DragMode  mode)
{
 (*theWrappedObject).setDragMode(mode);
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPoint&  point) const
{
return  (*theWrappedObject).mapToScene(point);
}

void PythonQtWrapper_QGraphicsView::setResizeAnchor(QGraphicsView* theWrappedObject, QGraphicsView::ViewportAnchor  anchor)
{
 (*theWrappedObject).setResizeAnchor(anchor);
}

void PythonQtWrapper_QGraphicsView::resetCachedContent(QGraphicsView* theWrappedObject)
{
 (*theWrappedObject).resetCachedContent();
}

void PythonQtWrapper_QGraphicsView::resetTransform(QGraphicsView* theWrappedObject)
{
 (*theWrappedObject).resetTransform();
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QPointF&  pos)
{
 (*theWrappedObject).centerOn(pos);
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPolygon&  polygon) const
{
return  (*theWrappedObject).mapToScene(polygon);
}

void PythonQtWrapper_QGraphicsView::scale(QGraphicsView* theWrappedObject, qreal  sx, qreal  sy)
{
 (*theWrappedObject).scale(sx, sy);
}

void PythonQtWrapper_QGraphicsView::setForegroundBrush(QGraphicsView* theWrappedObject, const QBrush&  brush)
{
 (*theWrappedObject).setForegroundBrush(brush);
}

bool  PythonQtWrapper_QGraphicsView::isInteractive(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).isInteractive();
}

QPolygonF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QRect&  rect) const
{
return  (*theWrappedObject).mapToScene(rect);
}

void PythonQtWrapper_QGraphicsView::paintEvent(QGraphicsView* theWrappedObject, QPaintEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).paintEvent(event);
}

QRectF  PythonQtWrapper_QGraphicsView::sceneRect(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).sceneRect();
}

void PythonQtWrapper_QGraphicsView::inputMethodEvent(QGraphicsView* theWrappedObject, QInputMethodEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).inputMethodEvent(event);
}

QPointF  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, int  x, int  y) const
{
return  (*theWrappedObject).mapToScene(x, y);
}

QPoint  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPointF&  point) const
{
return  (*theWrappedObject).mapFromScene(point);
}

void PythonQtWrapper_QGraphicsView::dragEnterEvent(QGraphicsView* theWrappedObject, QDragEnterEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).dragEnterEvent(event);
}

void PythonQtWrapper_QGraphicsView::keyPressEvent(QGraphicsView* theWrappedObject, QKeyEvent*  event)
{
 (*((PythonQtPublicPromoter_QGraphicsView*)theWrappedObject)).keyPressEvent(event);
}

void PythonQtWrapper_QGraphicsView::setSceneRect(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
 (*theWrappedObject).setSceneRect(x, y, w, h);
}

void PythonQtWrapper_QGraphicsView::fitInView(QGraphicsView* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, Qt::AspectRatioMode  aspectRadioMode)
{
 (*theWrappedObject).fitInView(x, y, w, h, aspectRadioMode);
}

QPainter::RenderHints  PythonQtWrapper_QGraphicsView::renderHints(QGraphicsView* theWrappedObject) const
{
return  (*theWrappedObject).renderHints();
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QPolygonF&  polygon) const
{
return  (*theWrappedObject).mapFromScene(polygon);
}

QPolygon  PythonQtWrapper_QGraphicsView::mapFromScene(QGraphicsView* theWrappedObject, const QRectF&  rect) const
{
return  (*theWrappedObject).mapFromScene(rect);
}

void PythonQtWrapper_QGraphicsView::centerOn(QGraphicsView* theWrappedObject, const QGraphicsItem*  item)
{
 (*theWrappedObject).centerOn(item);
}

QPainterPath  PythonQtWrapper_QGraphicsView::mapToScene(QGraphicsView* theWrappedObject, const QPainterPath&  path) const
{
return  (*theWrappedObject).mapToScene(path);
}

