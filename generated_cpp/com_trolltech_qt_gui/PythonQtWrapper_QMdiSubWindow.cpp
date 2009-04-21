#include "PythonQtWrapper_QMdiSubWindow.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qmenu.h>
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
#include <qwidget.h>

void PythonQtShell_QMdiSubWindow::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "actionEvent(QMdiSubWindow*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::actionEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::changeEvent(QEvent*  changeEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "changeEvent(QMdiSubWindow*,QEvent* )");
    void* args[2] = {NULL, (void*)&changeEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::changeEvent(changeEvent);
}
void PythonQtShell_QMdiSubWindow::childEvent(QChildEvent*  childEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "childEvent(QMdiSubWindow*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&childEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::childEvent(childEvent);
}
void PythonQtShell_QMdiSubWindow::closeEvent(QCloseEvent*  closeEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "closeEvent(QMdiSubWindow*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&closeEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::closeEvent(closeEvent);
}
void PythonQtShell_QMdiSubWindow::contextMenuEvent(QContextMenuEvent*  contextMenuEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "contextMenuEvent(QMdiSubWindow*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&contextMenuEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::contextMenuEvent(contextMenuEvent);
}
void PythonQtShell_QMdiSubWindow::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "customEvent(QMdiSubWindow*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::customEvent(arg__1);
}
int  PythonQtShell_QMdiSubWindow::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "devType(QMdiSubWindow*)");
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
  return QMdiSubWindow::devType();
}
void PythonQtShell_QMdiSubWindow::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "dragEnterEvent(QMdiSubWindow*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::dragEnterEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "dragLeaveEvent(QMdiSubWindow*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::dragLeaveEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "dragMoveEvent(QMdiSubWindow*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::dragMoveEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "dropEvent(QMdiSubWindow*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::dropEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "enterEvent(QMdiSubWindow*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::enterEvent(arg__1);
}
bool  PythonQtShell_QMdiSubWindow::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "event(QMdiSubWindow*,QEvent* )");
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
  return QMdiSubWindow::event(event);
}
bool  PythonQtShell_QMdiSubWindow::eventFilter(QObject*  object, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "eventFilter(QMdiSubWindow*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&object, (void*)&event};
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
  return QMdiSubWindow::eventFilter(object, event);
}
void PythonQtShell_QMdiSubWindow::focusInEvent(QFocusEvent*  focusInEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "focusInEvent(QMdiSubWindow*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&focusInEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::focusInEvent(focusInEvent);
}
bool  PythonQtShell_QMdiSubWindow::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "focusNextPrevChild(QMdiSubWindow*,bool )");
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
  return QMdiSubWindow::focusNextPrevChild(next);
}
void PythonQtShell_QMdiSubWindow::focusOutEvent(QFocusEvent*  focusOutEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "focusOutEvent(QMdiSubWindow*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&focusOutEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::focusOutEvent(focusOutEvent);
}
int  PythonQtShell_QMdiSubWindow::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "heightForWidth(QMdiSubWindow*,int )");
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
  return QMdiSubWindow::heightForWidth(arg__1);
}
void PythonQtShell_QMdiSubWindow::hideEvent(QHideEvent*  hideEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "hideEvent(QMdiSubWindow*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&hideEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::hideEvent(hideEvent);
}
void PythonQtShell_QMdiSubWindow::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "inputMethodEvent(QMdiSubWindow*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QMdiSubWindow::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "inputMethodQuery(QMdiSubWindow*,Qt::InputMethodQuery )");
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
  return QMdiSubWindow::inputMethodQuery(arg__1);
}
void PythonQtShell_QMdiSubWindow::keyPressEvent(QKeyEvent*  keyEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "keyPressEvent(QMdiSubWindow*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&keyEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::keyPressEvent(keyEvent);
}
void PythonQtShell_QMdiSubWindow::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "keyReleaseEvent(QMdiSubWindow*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::keyReleaseEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "languageChange(QMdiSubWindow*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::languageChange();
}
void PythonQtShell_QMdiSubWindow::leaveEvent(QEvent*  leaveEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "leaveEvent(QMdiSubWindow*,QEvent* )");
    void* args[2] = {NULL, (void*)&leaveEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::leaveEvent(leaveEvent);
}
int  PythonQtShell_QMdiSubWindow::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "metric(QMdiSubWindow*,QPaintDevice::PaintDeviceMetric )");
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
  return QMdiSubWindow::metric(arg__1);
}
void PythonQtShell_QMdiSubWindow::mouseDoubleClickEvent(QMouseEvent*  mouseEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "mouseDoubleClickEvent(QMdiSubWindow*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&mouseEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
}
void PythonQtShell_QMdiSubWindow::mouseMoveEvent(QMouseEvent*  mouseEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "mouseMoveEvent(QMdiSubWindow*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&mouseEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::mouseMoveEvent(mouseEvent);
}
void PythonQtShell_QMdiSubWindow::mousePressEvent(QMouseEvent*  mouseEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "mousePressEvent(QMdiSubWindow*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&mouseEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::mousePressEvent(mouseEvent);
}
void PythonQtShell_QMdiSubWindow::mouseReleaseEvent(QMouseEvent*  mouseEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "mouseReleaseEvent(QMdiSubWindow*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&mouseEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::mouseReleaseEvent(mouseEvent);
}
void PythonQtShell_QMdiSubWindow::moveEvent(QMoveEvent*  moveEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "moveEvent(QMdiSubWindow*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&moveEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::moveEvent(moveEvent);
}
QPaintEngine*  PythonQtShell_QMdiSubWindow::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "paintEngine(QMdiSubWindow*)");
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
  return QMdiSubWindow::paintEngine();
}
void PythonQtShell_QMdiSubWindow::paintEvent(QPaintEvent*  paintEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "paintEvent(QMdiSubWindow*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&paintEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::paintEvent(paintEvent);
}
void PythonQtShell_QMdiSubWindow::resizeEvent(QResizeEvent*  resizeEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "resizeEvent(QMdiSubWindow*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&resizeEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::resizeEvent(resizeEvent);
}
void PythonQtShell_QMdiSubWindow::showEvent(QShowEvent*  showEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "showEvent(QMdiSubWindow*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&showEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::showEvent(showEvent);
}
void PythonQtShell_QMdiSubWindow::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "tabletEvent(QMdiSubWindow*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::tabletEvent(arg__1);
}
void PythonQtShell_QMdiSubWindow::timerEvent(QTimerEvent*  timerEvent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "timerEvent(QMdiSubWindow*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&timerEvent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::timerEvent(timerEvent);
}
void PythonQtShell_QMdiSubWindow::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QMdiSubWindow::staticMetaObject,
      "wheelEvent(QMdiSubWindow*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QMdiSubWindow::wheelEvent(arg__1);
}
QMdiSubWindow* PythonQtWrapper_QMdiSubWindow::new_QMdiSubWindow(QWidget*  parent, Qt::WindowFlags  flags)
{ 
return new PythonQtShell_QMdiSubWindow(parent, flags); }

void PythonQtWrapper_QMdiSubWindow::showEvent(QMdiSubWindow* theWrappedObject, QShowEvent*  showEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_showEvent(showEvent);
}

void PythonQtWrapper_QMdiSubWindow::setOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  option, bool  on)
{
 theWrappedObject->setOption(option, on);
}

QMenu*  PythonQtWrapper_QMdiSubWindow::systemMenu(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->systemMenu();
}

void PythonQtWrapper_QMdiSubWindow::setWidget(QMdiSubWindow* theWrappedObject, QWidget*  widget)
{
 theWrappedObject->setWidget(widget);
}

void PythonQtWrapper_QMdiSubWindow::moveEvent(QMdiSubWindow* theWrappedObject, QMoveEvent*  moveEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_moveEvent(moveEvent);
}

void PythonQtWrapper_QMdiSubWindow::mouseReleaseEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseReleaseEvent(mouseEvent);
}

QMdiArea*  PythonQtWrapper_QMdiSubWindow::mdiArea(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->mdiArea();
}

void PythonQtWrapper_QMdiSubWindow::paintEvent(QMdiSubWindow* theWrappedObject, QPaintEvent*  paintEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_paintEvent(paintEvent);
}

void PythonQtWrapper_QMdiSubWindow::childEvent(QMdiSubWindow* theWrappedObject, QChildEvent*  childEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_childEvent(childEvent);
}

bool  PythonQtWrapper_QMdiSubWindow::event(QMdiSubWindow* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_event(event);
}

void PythonQtWrapper_QMdiSubWindow::mouseDoubleClickEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseDoubleClickEvent(mouseEvent);
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedButtonsWidget(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->maximizedButtonsWidget();
}

void PythonQtWrapper_QMdiSubWindow::setSystemMenu(QMdiSubWindow* theWrappedObject, QMenu*  systemMenu)
{
 theWrappedObject->setSystemMenu(systemMenu);
}

void PythonQtWrapper_QMdiSubWindow::closeEvent(QMdiSubWindow* theWrappedObject, QCloseEvent*  closeEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_closeEvent(closeEvent);
}

int  PythonQtWrapper_QMdiSubWindow::keyboardSingleStep(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->keyboardSingleStep();
}

void PythonQtWrapper_QMdiSubWindow::contextMenuEvent(QMdiSubWindow* theWrappedObject, QContextMenuEvent*  contextMenuEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_contextMenuEvent(contextMenuEvent);
}

QWidget*  PythonQtWrapper_QMdiSubWindow::widget(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->widget();
}

bool  PythonQtWrapper_QMdiSubWindow::testOption(QMdiSubWindow* theWrappedObject, QMdiSubWindow::SubWindowOption  arg__1) const
{
return  theWrappedObject->testOption(arg__1);
}

QWidget*  PythonQtWrapper_QMdiSubWindow::maximizedSystemMenuIconWidget(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->maximizedSystemMenuIconWidget();
}

void PythonQtWrapper_QMdiSubWindow::timerEvent(QMdiSubWindow* theWrappedObject, QTimerEvent*  timerEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_timerEvent(timerEvent);
}

int  PythonQtWrapper_QMdiSubWindow::keyboardPageStep(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->keyboardPageStep();
}

void PythonQtWrapper_QMdiSubWindow::keyPressEvent(QMdiSubWindow* theWrappedObject, QKeyEvent*  keyEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_keyPressEvent(keyEvent);
}

void PythonQtWrapper_QMdiSubWindow::mouseMoveEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mouseMoveEvent(mouseEvent);
}

QSize  PythonQtWrapper_QMdiSubWindow::minimumSizeHint(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QMdiSubWindow::changeEvent(QMdiSubWindow* theWrappedObject, QEvent*  changeEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_changeEvent(changeEvent);
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardPageStep(QMdiSubWindow* theWrappedObject, int  step)
{
 theWrappedObject->setKeyboardPageStep(step);
}

void PythonQtWrapper_QMdiSubWindow::resizeEvent(QMdiSubWindow* theWrappedObject, QResizeEvent*  resizeEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_resizeEvent(resizeEvent);
}

void PythonQtWrapper_QMdiSubWindow::hideEvent(QMdiSubWindow* theWrappedObject, QHideEvent*  hideEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_hideEvent(hideEvent);
}

bool  PythonQtWrapper_QMdiSubWindow::eventFilter(QMdiSubWindow* theWrappedObject, QObject*  object, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_eventFilter(object, event);
}

QSize  PythonQtWrapper_QMdiSubWindow::sizeHint(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

void PythonQtWrapper_QMdiSubWindow::setKeyboardSingleStep(QMdiSubWindow* theWrappedObject, int  step)
{
 theWrappedObject->setKeyboardSingleStep(step);
}

bool  PythonQtWrapper_QMdiSubWindow::isShaded(QMdiSubWindow* theWrappedObject) const
{
return  theWrappedObject->isShaded();
}

void PythonQtWrapper_QMdiSubWindow::focusOutEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusOutEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_focusOutEvent(focusOutEvent);
}

void PythonQtWrapper_QMdiSubWindow::mousePressEvent(QMdiSubWindow* theWrappedObject, QMouseEvent*  mouseEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_mousePressEvent(mouseEvent);
}

void PythonQtWrapper_QMdiSubWindow::leaveEvent(QMdiSubWindow* theWrappedObject, QEvent*  leaveEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_leaveEvent(leaveEvent);
}

void PythonQtWrapper_QMdiSubWindow::focusInEvent(QMdiSubWindow* theWrappedObject, QFocusEvent*  focusInEvent)
{
 ((PythonQtPublicPromoter_QMdiSubWindow*)theWrappedObject)->promoted_focusInEvent(focusInEvent);
}

