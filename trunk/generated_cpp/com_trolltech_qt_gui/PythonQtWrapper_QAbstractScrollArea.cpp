#include "PythonQtWrapper_QAbstractScrollArea.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractscrollarea.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

void PythonQtShell_QAbstractScrollArea::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "actionEvent(QAbstractScrollArea*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::actionEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "changeEvent(QAbstractScrollArea*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::changeEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "childEvent(QAbstractScrollArea*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::childEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "closeEvent(QAbstractScrollArea*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::closeEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "contextMenuEvent(QAbstractScrollArea*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::contextMenuEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "customEvent(QAbstractScrollArea*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::customEvent(arg__1);
}
int  PythonQtShell_QAbstractScrollArea::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "devType(QAbstractScrollArea*)");
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
  return QAbstractScrollArea::devType();
}
void PythonQtShell_QAbstractScrollArea::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "dragEnterEvent(QAbstractScrollArea*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::dragEnterEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "dragLeaveEvent(QAbstractScrollArea*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::dragLeaveEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "dragMoveEvent(QAbstractScrollArea*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::dragMoveEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "dropEvent(QAbstractScrollArea*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::dropEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "enterEvent(QAbstractScrollArea*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::enterEvent(arg__1);
}
bool  PythonQtShell_QAbstractScrollArea::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "event(QAbstractScrollArea*,QEvent* )");
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
  return QAbstractScrollArea::event(arg__1);
}
bool  PythonQtShell_QAbstractScrollArea::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "eventFilter(QAbstractScrollArea*,QObject* ,QEvent* )");
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
  return QAbstractScrollArea::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractScrollArea::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "focusInEvent(QAbstractScrollArea*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::focusInEvent(arg__1);
}
bool  PythonQtShell_QAbstractScrollArea::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "focusNextPrevChild(QAbstractScrollArea*,bool )");
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
  return QAbstractScrollArea::focusNextPrevChild(next);
}
void PythonQtShell_QAbstractScrollArea::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "focusOutEvent(QAbstractScrollArea*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::focusOutEvent(arg__1);
}
int  PythonQtShell_QAbstractScrollArea::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "heightForWidth(QAbstractScrollArea*,int )");
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
  return QAbstractScrollArea::heightForWidth(arg__1);
}
void PythonQtShell_QAbstractScrollArea::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "hideEvent(QAbstractScrollArea*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::hideEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "inputMethodEvent(QAbstractScrollArea*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QAbstractScrollArea::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "inputMethodQuery(QAbstractScrollArea*,Qt::InputMethodQuery )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QAbstractScrollArea::inputMethodQuery(arg__1);
}
void PythonQtShell_QAbstractScrollArea::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "keyPressEvent(QAbstractScrollArea*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::keyPressEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "keyReleaseEvent(QAbstractScrollArea*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::keyReleaseEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "languageChange(QAbstractScrollArea*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::languageChange();
}
void PythonQtShell_QAbstractScrollArea::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "leaveEvent(QAbstractScrollArea*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::leaveEvent(arg__1);
}
int  PythonQtShell_QAbstractScrollArea::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "metric(QAbstractScrollArea*,QPaintDevice::PaintDeviceMetric )");
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
  return QAbstractScrollArea::metric(arg__1);
}
void PythonQtShell_QAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "mouseDoubleClickEvent(QAbstractScrollArea*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "mouseMoveEvent(QAbstractScrollArea*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::mouseMoveEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "mousePressEvent(QAbstractScrollArea*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::mousePressEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "mouseReleaseEvent(QAbstractScrollArea*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "moveEvent(QAbstractScrollArea*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QAbstractScrollArea::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "paintEngine(QAbstractScrollArea*)");
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
  return QAbstractScrollArea::paintEngine();
}
void PythonQtShell_QAbstractScrollArea::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "paintEvent(QAbstractScrollArea*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::paintEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "resizeEvent(QAbstractScrollArea*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::resizeEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "scrollContentsBy(QAbstractScrollArea*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::scrollContentsBy(dx, dy);
}
void PythonQtShell_QAbstractScrollArea::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "showEvent(QAbstractScrollArea*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::showEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "tabletEvent(QAbstractScrollArea*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::tabletEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "timerEvent(QAbstractScrollArea*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::timerEvent(arg__1);
}
bool  PythonQtShell_QAbstractScrollArea::viewportEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "viewportEvent(QAbstractScrollArea*,QEvent* )");
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
  return QAbstractScrollArea::viewportEvent(arg__1);
}
void PythonQtShell_QAbstractScrollArea::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractScrollArea::staticMetaObject,
      "wheelEvent(QAbstractScrollArea*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractScrollArea::wheelEvent(arg__1);
}
QAbstractScrollArea* PythonQtWrapper_QAbstractScrollArea::new_QAbstractScrollArea(QWidget*  parent)
{ 
return new PythonQtShell_QAbstractScrollArea(parent); }

void PythonQtWrapper_QAbstractScrollArea::setViewport(QAbstractScrollArea* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).setViewport(widget);
}

QWidget*  PythonQtWrapper_QAbstractScrollArea::viewport(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).viewport();
}

void PythonQtWrapper_QAbstractScrollArea::wheelEvent(QAbstractScrollArea* theWrappedObject, QWheelEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).wheelEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::addScrollBarWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget, Qt::Alignment  alignment)
{
 (*theWrappedObject).addScrollBarWidget(widget, alignment);
}

QWidget*  PythonQtWrapper_QAbstractScrollArea::cornerWidget(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).cornerWidget();
}

Qt::ScrollBarPolicy  PythonQtWrapper_QAbstractScrollArea::horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).horizontalScrollBarPolicy();
}

void PythonQtWrapper_QAbstractScrollArea::keyPressEvent(QAbstractScrollArea* theWrappedObject, QKeyEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).keyPressEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::dragMoveEvent(QAbstractScrollArea* theWrappedObject, QDragMoveEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).dragMoveEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::contextMenuEvent(QAbstractScrollArea* theWrappedObject, QContextMenuEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).contextMenuEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::dragLeaveEvent(QAbstractScrollArea* theWrappedObject, QDragLeaveEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).dragLeaveEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::mousePressEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).mousePressEvent(arg__1);
}

bool  PythonQtWrapper_QAbstractScrollArea::event(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1)
{
return  (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).event(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::paintEvent(QAbstractScrollArea* theWrappedObject, QPaintEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).paintEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::mouseMoveEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).mouseMoveEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::resizeEvent(QAbstractScrollArea* theWrappedObject, QResizeEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).resizeEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setCornerWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget)
{
 (*theWrappedObject).setCornerWidget(widget);
}

QScrollBar*  PythonQtWrapper_QAbstractScrollArea::verticalScrollBar(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).verticalScrollBar();
}

QSize  PythonQtWrapper_QAbstractScrollArea::minimumSizeHint(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).minimumSizeHint();
}

void PythonQtWrapper_QAbstractScrollArea::setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1)
{
 (*theWrappedObject).setHorizontalScrollBarPolicy(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::mouseDoubleClickEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).mouseDoubleClickEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1)
{
 (*theWrappedObject).setVerticalScrollBarPolicy(arg__1);
}

QSize  PythonQtWrapper_QAbstractScrollArea::sizeHint(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

QSize  PythonQtWrapper_QAbstractScrollArea::maximumViewportSize(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).maximumViewportSize();
}

Qt::ScrollBarPolicy  PythonQtWrapper_QAbstractScrollArea::verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).verticalScrollBarPolicy();
}

void PythonQtWrapper_QAbstractScrollArea::dropEvent(QAbstractScrollArea* theWrappedObject, QDropEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).dropEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar)
{
 (*theWrappedObject).setHorizontalScrollBar(scrollbar);
}

QList<QWidget* >  PythonQtWrapper_QAbstractScrollArea::scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment)
{
return  (*theWrappedObject).scrollBarWidgets(alignment);
}

void PythonQtWrapper_QAbstractScrollArea::dragEnterEvent(QAbstractScrollArea* theWrappedObject, QDragEnterEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).dragEnterEvent(arg__1);
}

bool  PythonQtWrapper_QAbstractScrollArea::viewportEvent(QAbstractScrollArea* theWrappedObject, QEvent*  arg__1)
{
return  (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).viewportEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar)
{
 (*theWrappedObject).setVerticalScrollBar(scrollbar);
}

void PythonQtWrapper_QAbstractScrollArea::mouseReleaseEvent(QAbstractScrollArea* theWrappedObject, QMouseEvent*  arg__1)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).mouseReleaseEvent(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::scrollContentsBy(QAbstractScrollArea* theWrappedObject, int  dx, int  dy)
{
 (*((PythonQtPublicPromoter_QAbstractScrollArea*)theWrappedObject)).scrollContentsBy(dx, dy);
}

QScrollBar*  PythonQtWrapper_QAbstractScrollArea::horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const
{
return  (*theWrappedObject).horizontalScrollBar();
}

