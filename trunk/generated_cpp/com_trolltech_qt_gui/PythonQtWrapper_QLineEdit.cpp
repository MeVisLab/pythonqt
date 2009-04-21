#include "PythonQtWrapper_QLineEdit.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
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
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

void PythonQtShell_QLineEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "actionEvent(QLineEdit*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::actionEvent(arg__1);
}
void PythonQtShell_QLineEdit::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "changeEvent(QLineEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::changeEvent(arg__1);
}
void PythonQtShell_QLineEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "childEvent(QLineEdit*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::childEvent(arg__1);
}
void PythonQtShell_QLineEdit::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "closeEvent(QLineEdit*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::closeEvent(arg__1);
}
void PythonQtShell_QLineEdit::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "contextMenuEvent(QLineEdit*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::contextMenuEvent(arg__1);
}
void PythonQtShell_QLineEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "customEvent(QLineEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::customEvent(arg__1);
}
int  PythonQtShell_QLineEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "devType(QLineEdit*)");
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
  return QLineEdit::devType();
}
void PythonQtShell_QLineEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "dragEnterEvent(QLineEdit*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QLineEdit::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "dragLeaveEvent(QLineEdit*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::dragLeaveEvent(e);
}
void PythonQtShell_QLineEdit::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "dragMoveEvent(QLineEdit*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::dragMoveEvent(e);
}
void PythonQtShell_QLineEdit::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "dropEvent(QLineEdit*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::dropEvent(arg__1);
}
void PythonQtShell_QLineEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "enterEvent(QLineEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QLineEdit::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "event(QLineEdit*,QEvent* )");
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
  return QLineEdit::event(arg__1);
}
bool  PythonQtShell_QLineEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "eventFilter(QLineEdit*,QObject* ,QEvent* )");
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
  return QLineEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QLineEdit::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "focusInEvent(QLineEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::focusInEvent(arg__1);
}
bool  PythonQtShell_QLineEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "focusNextPrevChild(QLineEdit*,bool )");
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
  return QLineEdit::focusNextPrevChild(next);
}
void PythonQtShell_QLineEdit::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "focusOutEvent(QLineEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::focusOutEvent(arg__1);
}
int  PythonQtShell_QLineEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "heightForWidth(QLineEdit*,int )");
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
  return QLineEdit::heightForWidth(arg__1);
}
void PythonQtShell_QLineEdit::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "hideEvent(QLineEdit*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::hideEvent(arg__1);
}
void PythonQtShell_QLineEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "inputMethodEvent(QLineEdit*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QLineEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "inputMethodQuery(QLineEdit*,Qt::InputMethodQuery )");
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
  return QLineEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QLineEdit::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "keyPressEvent(QLineEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::keyPressEvent(arg__1);
}
void PythonQtShell_QLineEdit::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "keyReleaseEvent(QLineEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::keyReleaseEvent(arg__1);
}
void PythonQtShell_QLineEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "languageChange(QLineEdit*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::languageChange();
}
void PythonQtShell_QLineEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "leaveEvent(QLineEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::leaveEvent(arg__1);
}
int  PythonQtShell_QLineEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "metric(QLineEdit*,QPaintDevice::PaintDeviceMetric )");
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
  return QLineEdit::metric(arg__1);
}
void PythonQtShell_QLineEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "mouseDoubleClickEvent(QLineEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QLineEdit::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "mouseMoveEvent(QLineEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::mouseMoveEvent(arg__1);
}
void PythonQtShell_QLineEdit::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "mousePressEvent(QLineEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::mousePressEvent(arg__1);
}
void PythonQtShell_QLineEdit::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "mouseReleaseEvent(QLineEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QLineEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "moveEvent(QLineEdit*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QLineEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "paintEngine(QLineEdit*)");
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
  return QLineEdit::paintEngine();
}
void PythonQtShell_QLineEdit::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "paintEvent(QLineEdit*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::paintEvent(arg__1);
}
void PythonQtShell_QLineEdit::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "resizeEvent(QLineEdit*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::resizeEvent(arg__1);
}
void PythonQtShell_QLineEdit::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "showEvent(QLineEdit*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::showEvent(arg__1);
}
void PythonQtShell_QLineEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "tabletEvent(QLineEdit*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::tabletEvent(arg__1);
}
void PythonQtShell_QLineEdit::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "timerEvent(QLineEdit*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::timerEvent(arg__1);
}
void PythonQtShell_QLineEdit::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLineEdit::staticMetaObject,
      "wheelEvent(QLineEdit*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLineEdit::wheelEvent(arg__1);
}
QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(QWidget*  parent)
{ 
return new PythonQtShell_QLineEdit(parent); }

QLineEdit* PythonQtWrapper_QLineEdit::new_QLineEdit(const QString&  arg__1, QWidget*  parent)
{ 
return new PythonQtShell_QLineEdit(arg__1, parent); }

bool  PythonQtWrapper_QLineEdit::isReadOnly(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->isReadOnly();
}

QCompleter*  PythonQtWrapper_QLineEdit::completer(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->completer();
}

void PythonQtWrapper_QLineEdit::dragMoveEvent(QLineEdit* theWrappedObject, QDragMoveEvent*  e)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_dragMoveEvent(e);
}

bool  PythonQtWrapper_QLineEdit::isUndoAvailable(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->isUndoAvailable();
}

bool  PythonQtWrapper_QLineEdit::dragEnabled(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->dragEnabled();
}

void PythonQtWrapper_QLineEdit::paintEvent(QLineEdit* theWrappedObject, QPaintEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_paintEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::mousePressEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_mousePressEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::setCompleter(QLineEdit* theWrappedObject, QCompleter*  completer)
{
 theWrappedObject->setCompleter(completer);
}

void PythonQtWrapper_QLineEdit::setModified(QLineEdit* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setModified(arg__1);
}

void PythonQtWrapper_QLineEdit::mouseDoubleClickEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::backspace(QLineEdit* theWrappedObject)
{
 theWrappedObject->backspace();
}

int  PythonQtWrapper_QLineEdit::selectionStart(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->selectionStart();
}

void PythonQtWrapper_QLineEdit::home(QLineEdit* theWrappedObject, bool  mark)
{
 theWrappedObject->home(mark);
}

void PythonQtWrapper_QLineEdit::inputMethodEvent(QLineEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::cursorWordForward(QLineEdit* theWrappedObject, bool  mark)
{
 theWrappedObject->cursorWordForward(mark);
}

void PythonQtWrapper_QLineEdit::setDragEnabled(QLineEdit* theWrappedObject, bool  b)
{
 theWrappedObject->setDragEnabled(b);
}

QSize  PythonQtWrapper_QLineEdit::sizeHint(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

const QValidator*  PythonQtWrapper_QLineEdit::validator(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->validator();
}

QSize  PythonQtWrapper_QLineEdit::minimumSizeHint(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

bool  PythonQtWrapper_QLineEdit::isModified(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->isModified();
}

void PythonQtWrapper_QLineEdit::changeEvent(QLineEdit* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_changeEvent(arg__1);
}

bool  PythonQtWrapper_QLineEdit::hasAcceptableInput(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->hasAcceptableInput();
}

QMenu*  PythonQtWrapper_QLineEdit::createStandardContextMenu(QLineEdit* theWrappedObject)
{
return  theWrappedObject->createStandardContextMenu();
}

void PythonQtWrapper_QLineEdit::setEchoMode(QLineEdit* theWrappedObject, QLineEdit::EchoMode  arg__1)
{
 theWrappedObject->setEchoMode(arg__1);
}

void PythonQtWrapper_QLineEdit::setReadOnly(QLineEdit* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setReadOnly(arg__1);
}

QVariant  PythonQtWrapper_QLineEdit::inputMethodQuery(QLineEdit* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
return  ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_inputMethodQuery(arg__1);
}

QLineEdit::EchoMode  PythonQtWrapper_QLineEdit::echoMode(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->echoMode();
}

QString  PythonQtWrapper_QLineEdit::inputMask(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->inputMask();
}

void PythonQtWrapper_QLineEdit::end(QLineEdit* theWrappedObject, bool  mark)
{
 theWrappedObject->end(mark);
}

bool  PythonQtWrapper_QLineEdit::isRedoAvailable(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->isRedoAvailable();
}

void PythonQtWrapper_QLineEdit::mouseMoveEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_mouseMoveEvent(arg__1);
}

Qt::Alignment  PythonQtWrapper_QLineEdit::alignment(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->alignment();
}

QString  PythonQtWrapper_QLineEdit::selectedText(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->selectedText();
}

void PythonQtWrapper_QLineEdit::deselect(QLineEdit* theWrappedObject)
{
 theWrappedObject->deselect();
}

bool  PythonQtWrapper_QLineEdit::hasSelectedText(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->hasSelectedText();
}

void PythonQtWrapper_QLineEdit::keyPressEvent(QLineEdit* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_keyPressEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::del(QLineEdit* theWrappedObject)
{
 theWrappedObject->del();
}

QString  PythonQtWrapper_QLineEdit::text(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->text();
}

void PythonQtWrapper_QLineEdit::cursorBackward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
 theWrappedObject->cursorBackward(mark, steps);
}

int  PythonQtWrapper_QLineEdit::maxLength(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->maxLength();
}

void PythonQtWrapper_QLineEdit::cursorForward(QLineEdit* theWrappedObject, bool  mark, int  steps)
{
 theWrappedObject->cursorForward(mark, steps);
}

void PythonQtWrapper_QLineEdit::setValidator(QLineEdit* theWrappedObject, const QValidator*  arg__1)
{
 theWrappedObject->setValidator(arg__1);
}

void PythonQtWrapper_QLineEdit::setMaxLength(QLineEdit* theWrappedObject, int  arg__1)
{
 theWrappedObject->setMaxLength(arg__1);
}

void PythonQtWrapper_QLineEdit::dragLeaveEvent(QLineEdit* theWrappedObject, QDragLeaveEvent*  e)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_dragLeaveEvent(e);
}

void PythonQtWrapper_QLineEdit::setSelection(QLineEdit* theWrappedObject, int  arg__1, int  arg__2)
{
 theWrappedObject->setSelection(arg__1, arg__2);
}

bool  PythonQtWrapper_QLineEdit::event(QLineEdit* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_event(arg__1);
}

void PythonQtWrapper_QLineEdit::setCursorPosition(QLineEdit* theWrappedObject, int  arg__1)
{
 theWrappedObject->setCursorPosition(arg__1);
}

int  PythonQtWrapper_QLineEdit::cursorPositionAt(QLineEdit* theWrappedObject, const QPoint&  pos)
{
return  theWrappedObject->cursorPositionAt(pos);
}

void PythonQtWrapper_QLineEdit::setAlignment(QLineEdit* theWrappedObject, Qt::Alignment  flag)
{
 theWrappedObject->setAlignment(flag);
}

void PythonQtWrapper_QLineEdit::dropEvent(QLineEdit* theWrappedObject, QDropEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_dropEvent(arg__1);
}

bool  PythonQtWrapper_QLineEdit::hasFrame(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->hasFrame();
}

void PythonQtWrapper_QLineEdit::focusOutEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_focusOutEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::mouseReleaseEvent(QLineEdit* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1);
}

QString  PythonQtWrapper_QLineEdit::displayText(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->displayText();
}

void PythonQtWrapper_QLineEdit::setInputMask(QLineEdit* theWrappedObject, const QString&  inputMask)
{
 theWrappedObject->setInputMask(inputMask);
}

void PythonQtWrapper_QLineEdit::insert(QLineEdit* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->insert(arg__1);
}

int  PythonQtWrapper_QLineEdit::cursorPosition(QLineEdit* theWrappedObject) const
{
return  theWrappedObject->cursorPosition();
}

void PythonQtWrapper_QLineEdit::focusInEvent(QLineEdit* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_focusInEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::cursorWordBackward(QLineEdit* theWrappedObject, bool  mark)
{
 theWrappedObject->cursorWordBackward(mark);
}

void PythonQtWrapper_QLineEdit::dragEnterEvent(QLineEdit* theWrappedObject, QDragEnterEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_dragEnterEvent(arg__1);
}

void PythonQtWrapper_QLineEdit::setFrame(QLineEdit* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setFrame(arg__1);
}

void PythonQtWrapper_QLineEdit::contextMenuEvent(QLineEdit* theWrappedObject, QContextMenuEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QLineEdit*)theWrappedObject)->promoted_contextMenuEvent(arg__1);
}

