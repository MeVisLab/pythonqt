#include "PythonQtWrapper_QTabBar.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QIcon>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtabbar.h>
#include <qwidget.h>

void PythonQtShell_QTabBar::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "actionEvent(QTabBar*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::actionEvent(arg__1);
}
void PythonQtShell_QTabBar::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "changeEvent(QTabBar*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::changeEvent(arg__1);
}
void PythonQtShell_QTabBar::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "childEvent(QTabBar*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::childEvent(arg__1);
}
void PythonQtShell_QTabBar::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "closeEvent(QTabBar*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::closeEvent(arg__1);
}
void PythonQtShell_QTabBar::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "contextMenuEvent(QTabBar*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QTabBar::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "customEvent(QTabBar*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::customEvent(arg__1);
}
int  PythonQtShell_QTabBar::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "devType(QTabBar*)");
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
  return QTabBar::devType();
}
void PythonQtShell_QTabBar::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "dragEnterEvent(QTabBar*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QTabBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "dragLeaveEvent(QTabBar*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QTabBar::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "dragMoveEvent(QTabBar*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QTabBar::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "dropEvent(QTabBar*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::dropEvent(arg__1);
}
void PythonQtShell_QTabBar::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "enterEvent(QTabBar*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::enterEvent(arg__1);
}
bool  PythonQtShell_QTabBar::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "event(QTabBar*,QEvent* )");
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
  return QTabBar::event(arg__1);
}
bool  PythonQtShell_QTabBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "eventFilter(QTabBar*,QObject* ,QEvent* )");
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
  return QTabBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTabBar::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "focusInEvent(QTabBar*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QTabBar::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "focusNextPrevChild(QTabBar*,bool )");
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
  return QTabBar::focusNextPrevChild(next);
}
void PythonQtShell_QTabBar::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "focusOutEvent(QTabBar*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QTabBar::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "heightForWidth(QTabBar*,int )");
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
  return QTabBar::heightForWidth(arg__1);
}
void PythonQtShell_QTabBar::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "hideEvent(QTabBar*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::hideEvent(arg__1);
}
void PythonQtShell_QTabBar::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "inputMethodEvent(QTabBar*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTabBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "inputMethodQuery(QTabBar*,Qt::InputMethodQuery )");
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
  return QTabBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QTabBar::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "keyPressEvent(QTabBar*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::keyPressEvent(arg__1);
}
void PythonQtShell_QTabBar::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "keyReleaseEvent(QTabBar*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTabBar::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "languageChange(QTabBar*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::languageChange();
}
void PythonQtShell_QTabBar::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "leaveEvent(QTabBar*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::leaveEvent(arg__1);
}
int  PythonQtShell_QTabBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "metric(QTabBar*,QPaintDevice::PaintDeviceMetric )");
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
  return QTabBar::metric(arg__1);
}
void PythonQtShell_QTabBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "mouseDoubleClickEvent(QTabBar*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QTabBar::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "mouseMoveEvent(QTabBar*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QTabBar::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "mousePressEvent(QTabBar*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::mousePressEvent(arg__1);
}
void PythonQtShell_QTabBar::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "mouseReleaseEvent(QTabBar*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QTabBar::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "moveEvent(QTabBar*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTabBar::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "paintEngine(QTabBar*)");
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
  return QTabBar::paintEngine();
}
void PythonQtShell_QTabBar::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "paintEvent(QTabBar*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::paintEvent(arg__1);
}
void PythonQtShell_QTabBar::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "resizeEvent(QTabBar*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::resizeEvent(arg__1);
}
void PythonQtShell_QTabBar::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "showEvent(QTabBar*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::showEvent(arg__1);
}
void PythonQtShell_QTabBar::tabInserted(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "tabInserted(QTabBar*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::tabInserted(index);
}
void PythonQtShell_QTabBar::tabLayoutChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabLayoutChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "tabLayoutChange(QTabBar*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::tabLayoutChange();
}
void PythonQtShell_QTabBar::tabRemoved(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "tabRemoved(QTabBar*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::tabRemoved(index);
}
QSize  PythonQtShell_QTabBar::tabSizeHint(int  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "tabSizeHint(QTabBar*,int )");
      QSize  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSize *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTabBar::tabSizeHint(index);
}
void PythonQtShell_QTabBar::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "tabletEvent(QTabBar*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::tabletEvent(arg__1);
}
void PythonQtShell_QTabBar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "timerEvent(QTabBar*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::timerEvent(arg__1);
}
void PythonQtShell_QTabBar::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabBar::staticMetaObject,
      "wheelEvent(QTabBar*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabBar::wheelEvent(arg__1);
}
QTabBar* PythonQtWrapper_QTabBar::new_QTabBar(QWidget*  parent)
{ 
return new PythonQtShell_QTabBar(parent); }

void PythonQtWrapper_QTabBar::setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  arg__1)
{
 theWrappedObject->setElideMode(arg__1);
}

void PythonQtWrapper_QTabBar::mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_mouseMoveEvent(arg__1);
}

void PythonQtWrapper_QTabBar::tabInserted(QTabBar* theWrappedObject, int  index)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_tabInserted(index);
}

int  PythonQtWrapper_QTabBar::tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const
{
return  theWrappedObject->tabAt(pos);
}

bool  PythonQtWrapper_QTabBar::drawBase(QTabBar* theWrappedObject) const
{
return  theWrappedObject->drawBase();
}

QTabBar::Shape  PythonQtWrapper_QTabBar::shape(QTabBar* theWrappedObject) const
{
return  theWrappedObject->shape();
}

void PythonQtWrapper_QTabBar::paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_paintEvent(arg__1);
}

void PythonQtWrapper_QTabBar::setIconSize(QTabBar* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setIconSize(size);
}

int  PythonQtWrapper_QTabBar::count(QTabBar* theWrappedObject) const
{
return  theWrappedObject->count();
}

void PythonQtWrapper_QTabBar::setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape)
{
 theWrappedObject->setShape(shape);
}

bool  PythonQtWrapper_QTabBar::event(QTabBar* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_event(arg__1);
}

void PythonQtWrapper_QTabBar::setTabText(QTabBar* theWrappedObject, int  index, const QString&  text)
{
 theWrappedObject->setTabText(index, text);
}

void PythonQtWrapper_QTabBar::keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_keyPressEvent(arg__1);
}

void PythonQtWrapper_QTabBar::mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_mousePressEvent(arg__1);
}

void PythonQtWrapper_QTabBar::setTabEnabled(QTabBar* theWrappedObject, int  index, bool  arg__2)
{
 theWrappedObject->setTabEnabled(index, arg__2);
}

QString  PythonQtWrapper_QTabBar::tabWhatsThis(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabWhatsThis(index);
}

QSize  PythonQtWrapper_QTabBar::iconSize(QTabBar* theWrappedObject) const
{
return  theWrappedObject->iconSize();
}

void PythonQtWrapper_QTabBar::tabLayoutChange(QTabBar* theWrappedObject)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_tabLayoutChange();
}

int  PythonQtWrapper_QTabBar::insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text)
{
return  theWrappedObject->insertTab(index, icon, text);
}

QIcon  PythonQtWrapper_QTabBar::tabIcon(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabIcon(index);
}

void PythonQtWrapper_QTabBar::showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_showEvent(arg__1);
}

QColor  PythonQtWrapper_QTabBar::tabTextColor(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabTextColor(index);
}

Qt::TextElideMode  PythonQtWrapper_QTabBar::elideMode(QTabBar* theWrappedObject) const
{
return  theWrappedObject->elideMode();
}

void PythonQtWrapper_QTabBar::removeTab(QTabBar* theWrappedObject, int  index)
{
 theWrappedObject->removeTab(index);
}

QSize  PythonQtWrapper_QTabBar::minimumSizeHint(QTabBar* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QTabBar::setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip)
{
 theWrappedObject->setTabToolTip(index, tip);
}

QString  PythonQtWrapper_QTabBar::tabToolTip(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabToolTip(index);
}

void PythonQtWrapper_QTabBar::resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_resizeEvent(arg__1);
}

void PythonQtWrapper_QTabBar::tabRemoved(QTabBar* theWrappedObject, int  index)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_tabRemoved(index);
}

void PythonQtWrapper_QTabBar::setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons)
{
 theWrappedObject->setUsesScrollButtons(useButtons);
}

void PythonQtWrapper_QTabBar::changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_changeEvent(arg__1);
}

QVariant  PythonQtWrapper_QTabBar::tabData(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabData(index);
}

QRect  PythonQtWrapper_QTabBar::tabRect(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabRect(index);
}

bool  PythonQtWrapper_QTabBar::isTabEnabled(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->isTabEnabled(index);
}

int  PythonQtWrapper_QTabBar::addTab(QTabBar* theWrappedObject, const QString&  text)
{
return  theWrappedObject->addTab(text);
}

QSize  PythonQtWrapper_QTabBar::sizeHint(QTabBar* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QTabBar::addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
return  theWrappedObject->addTab(icon, text);
}

void PythonQtWrapper_QTabBar::mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1);
}

QSize  PythonQtWrapper_QTabBar::tabSizeHint(QTabBar* theWrappedObject, int  index) const
{
return  ((PythonQtPublicPromoter_QTabBar*)theWrappedObject)->promoted_tabSizeHint(index);
}

bool  PythonQtWrapper_QTabBar::usesScrollButtons(QTabBar* theWrappedObject) const
{
return  theWrappedObject->usesScrollButtons();
}

void PythonQtWrapper_QTabBar::setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon)
{
 theWrappedObject->setTabIcon(index, icon);
}

int  PythonQtWrapper_QTabBar::insertTab(QTabBar* theWrappedObject, int  index, const QString&  text)
{
return  theWrappedObject->insertTab(index, text);
}

QString  PythonQtWrapper_QTabBar::tabText(QTabBar* theWrappedObject, int  index) const
{
return  theWrappedObject->tabText(index);
}

void PythonQtWrapper_QTabBar::setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase)
{
 theWrappedObject->setDrawBase(drawTheBase);
}

void PythonQtWrapper_QTabBar::setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color)
{
 theWrappedObject->setTabTextColor(index, color);
}

void PythonQtWrapper_QTabBar::setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data)
{
 theWrappedObject->setTabData(index, data);
}

void PythonQtWrapper_QTabBar::setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text)
{
 theWrappedObject->setTabWhatsThis(index, text);
}

int  PythonQtWrapper_QTabBar::currentIndex(QTabBar* theWrappedObject) const
{
return  theWrappedObject->currentIndex();
}

