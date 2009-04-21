#include "PythonQtWrapper_QTabWidget.h"

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
#include <qtabwidget.h>
#include <qwidget.h>

void PythonQtShell_QTabWidget::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "actionEvent(QTabWidget*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::actionEvent(arg__1);
}
void PythonQtShell_QTabWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "changeEvent(QTabWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::changeEvent(arg__1);
}
void PythonQtShell_QTabWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "childEvent(QTabWidget*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::childEvent(arg__1);
}
void PythonQtShell_QTabWidget::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "closeEvent(QTabWidget*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::closeEvent(arg__1);
}
void PythonQtShell_QTabWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "contextMenuEvent(QTabWidget*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QTabWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "customEvent(QTabWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::customEvent(arg__1);
}
int  PythonQtShell_QTabWidget::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "devType(QTabWidget*)");
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
  return QTabWidget::devType();
}
void PythonQtShell_QTabWidget::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "dragEnterEvent(QTabWidget*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::dragEnterEvent(arg__1);
}
void PythonQtShell_QTabWidget::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "dragLeaveEvent(QTabWidget*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::dragLeaveEvent(arg__1);
}
void PythonQtShell_QTabWidget::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "dragMoveEvent(QTabWidget*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::dragMoveEvent(arg__1);
}
void PythonQtShell_QTabWidget::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "dropEvent(QTabWidget*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::dropEvent(arg__1);
}
void PythonQtShell_QTabWidget::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "enterEvent(QTabWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QTabWidget::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "event(QTabWidget*,QEvent* )");
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
  return QTabWidget::event(arg__1);
}
bool  PythonQtShell_QTabWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "eventFilter(QTabWidget*,QObject* ,QEvent* )");
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
  return QTabWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTabWidget::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "focusInEvent(QTabWidget*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::focusInEvent(arg__1);
}
bool  PythonQtShell_QTabWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "focusNextPrevChild(QTabWidget*,bool )");
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
  return QTabWidget::focusNextPrevChild(next);
}
void PythonQtShell_QTabWidget::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "focusOutEvent(QTabWidget*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::focusOutEvent(arg__1);
}
int  PythonQtShell_QTabWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "heightForWidth(QTabWidget*,int )");
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
  return QTabWidget::heightForWidth(arg__1);
}
void PythonQtShell_QTabWidget::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "hideEvent(QTabWidget*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::hideEvent(arg__1);
}
void PythonQtShell_QTabWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "inputMethodEvent(QTabWidget*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTabWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "inputMethodQuery(QTabWidget*,Qt::InputMethodQuery )");
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
  return QTabWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QTabWidget::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "keyPressEvent(QTabWidget*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::keyPressEvent(arg__1);
}
void PythonQtShell_QTabWidget::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "keyReleaseEvent(QTabWidget*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTabWidget::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "languageChange(QTabWidget*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::languageChange();
}
void PythonQtShell_QTabWidget::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "leaveEvent(QTabWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::leaveEvent(arg__1);
}
int  PythonQtShell_QTabWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "metric(QTabWidget*,QPaintDevice::PaintDeviceMetric )");
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
  return QTabWidget::metric(arg__1);
}
void PythonQtShell_QTabWidget::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "mouseDoubleClickEvent(QTabWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QTabWidget::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "mouseMoveEvent(QTabWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::mouseMoveEvent(arg__1);
}
void PythonQtShell_QTabWidget::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "mousePressEvent(QTabWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::mousePressEvent(arg__1);
}
void PythonQtShell_QTabWidget::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "mouseReleaseEvent(QTabWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QTabWidget::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "moveEvent(QTabWidget*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTabWidget::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "paintEngine(QTabWidget*)");
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
  return QTabWidget::paintEngine();
}
void PythonQtShell_QTabWidget::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "paintEvent(QTabWidget*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::paintEvent(arg__1);
}
void PythonQtShell_QTabWidget::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "resizeEvent(QTabWidget*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::resizeEvent(arg__1);
}
void PythonQtShell_QTabWidget::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "showEvent(QTabWidget*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::showEvent(arg__1);
}
void PythonQtShell_QTabWidget::tabInserted(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "tabInserted(QTabWidget*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::tabInserted(index);
}
void PythonQtShell_QTabWidget::tabRemoved(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "tabRemoved(QTabWidget*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::tabRemoved(index);
}
void PythonQtShell_QTabWidget::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "tabletEvent(QTabWidget*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::tabletEvent(arg__1);
}
void PythonQtShell_QTabWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "timerEvent(QTabWidget*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::timerEvent(arg__1);
}
void PythonQtShell_QTabWidget::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTabWidget::staticMetaObject,
      "wheelEvent(QTabWidget*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTabWidget::wheelEvent(arg__1);
}
QTabWidget* PythonQtWrapper_QTabWidget::new_QTabWidget(QWidget*  parent)
{ 
return new PythonQtShell_QTabWidget(parent); }

void PythonQtWrapper_QTabWidget::paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_paintEvent(arg__1);
}

QTabWidget::TabShape  PythonQtWrapper_QTabWidget::tabShape(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->tabShape();
}

QSize  PythonQtWrapper_QTabWidget::sizeHint(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QTabWidget::tabText(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->tabText(index);
}

int  PythonQtWrapper_QTabWidget::insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  label)
{
return  theWrappedObject->insertTab(index, widget, icon, label);
}

QTabWidget::TabPosition  PythonQtWrapper_QTabWidget::tabPosition(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->tabPosition();
}

void PythonQtWrapper_QTabWidget::keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_keyPressEvent(arg__1);
}

bool  PythonQtWrapper_QTabWidget::isTabEnabled(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->isTabEnabled(index);
}

bool  PythonQtWrapper_QTabWidget::event(QTabWidget* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_event(arg__1);
}

int  PythonQtWrapper_QTabWidget::indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const
{
return  theWrappedObject->indexOf(widget);
}

QWidget*  PythonQtWrapper_QTabWidget::cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner) const
{
return  theWrappedObject->cornerWidget(corner);
}

void PythonQtWrapper_QTabWidget::tabRemoved(QTabWidget* theWrappedObject, int  index)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_tabRemoved(index);
}

int  PythonQtWrapper_QTabWidget::addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  label)
{
return  theWrappedObject->addTab(widget, icon, label);
}

void PythonQtWrapper_QTabWidget::clear(QTabWidget* theWrappedObject)
{
 theWrappedObject->clear();
}

QIcon  PythonQtWrapper_QTabWidget::tabIcon(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->tabIcon(index);
}

QSize  PythonQtWrapper_QTabWidget::minimumSizeHint(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

QString  PythonQtWrapper_QTabWidget::tabWhatsThis(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->tabWhatsThis(index);
}

void PythonQtWrapper_QTabWidget::setCornerWidget(QTabWidget* theWrappedObject, QWidget*  w, Qt::Corner  corner)
{
 theWrappedObject->setCornerWidget(w, corner);
}

void PythonQtWrapper_QTabWidget::setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s)
{
 theWrappedObject->setTabShape(s);
}

void PythonQtWrapper_QTabWidget::setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons)
{
 theWrappedObject->setUsesScrollButtons(useButtons);
}

QString  PythonQtWrapper_QTabWidget::tabToolTip(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->tabToolTip(index);
}

void PythonQtWrapper_QTabWidget::setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2)
{
 theWrappedObject->setTabEnabled(index, arg__2);
}

void PythonQtWrapper_QTabWidget::setIconSize(QTabWidget* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setIconSize(size);
}

QSize  PythonQtWrapper_QTabWidget::iconSize(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->iconSize();
}

void PythonQtWrapper_QTabWidget::setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text)
{
 theWrappedObject->setTabWhatsThis(index, text);
}

void PythonQtWrapper_QTabWidget::resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_resizeEvent(arg__1);
}

void PythonQtWrapper_QTabWidget::showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_showEvent(arg__1);
}

QWidget*  PythonQtWrapper_QTabWidget::widget(QTabWidget* theWrappedObject, int  index) const
{
return  theWrappedObject->widget(index);
}

void PythonQtWrapper_QTabWidget::setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip)
{
 theWrappedObject->setTabToolTip(index, tip);
}

void PythonQtWrapper_QTabWidget::setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2)
{
 theWrappedObject->setTabText(index, arg__2);
}

int  PythonQtWrapper_QTabWidget::insertTab(QTabWidget* theWrappedObject, int  index, QWidget*  widget, const QString&  arg__3)
{
return  theWrappedObject->insertTab(index, widget, arg__3);
}

bool  PythonQtWrapper_QTabWidget::usesScrollButtons(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->usesScrollButtons();
}

int  PythonQtWrapper_QTabWidget::currentIndex(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->currentIndex();
}

Qt::TextElideMode  PythonQtWrapper_QTabWidget::elideMode(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->elideMode();
}

void PythonQtWrapper_QTabWidget::changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_changeEvent(arg__1);
}

void PythonQtWrapper_QTabWidget::removeTab(QTabWidget* theWrappedObject, int  index)
{
 theWrappedObject->removeTab(index);
}

void PythonQtWrapper_QTabWidget::tabInserted(QTabWidget* theWrappedObject, int  index)
{
 ((PythonQtPublicPromoter_QTabWidget*)theWrappedObject)->promoted_tabInserted(index);
}

QWidget*  PythonQtWrapper_QTabWidget::currentWidget(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->currentWidget();
}

void PythonQtWrapper_QTabWidget::setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1)
{
 theWrappedObject->setElideMode(arg__1);
}

int  PythonQtWrapper_QTabWidget::addTab(QTabWidget* theWrappedObject, QWidget*  widget, const QString&  arg__2)
{
return  theWrappedObject->addTab(widget, arg__2);
}

void PythonQtWrapper_QTabWidget::setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon)
{
 theWrappedObject->setTabIcon(index, icon);
}

void PythonQtWrapper_QTabWidget::setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1)
{
 theWrappedObject->setTabPosition(arg__1);
}

int  PythonQtWrapper_QTabWidget::count(QTabWidget* theWrappedObject) const
{
return  theWrappedObject->count();
}

