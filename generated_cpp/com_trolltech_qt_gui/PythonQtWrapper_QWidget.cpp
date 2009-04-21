#include "PythonQtWrapper_QWidget.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QIcon>
#include <QMessageBox>
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
#include <qwidget.h>

void PythonQtShell_QWidget::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "actionEvent(QWidget*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::actionEvent(arg__1);
}
void PythonQtShell_QWidget::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "changeEvent(QWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::changeEvent(arg__1);
}
void PythonQtShell_QWidget::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "childEvent(QWidget*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::childEvent(arg__1);
}
void PythonQtShell_QWidget::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "closeEvent(QWidget*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::closeEvent(arg__1);
}
void PythonQtShell_QWidget::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "contextMenuEvent(QWidget*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::contextMenuEvent(arg__1);
}
void PythonQtShell_QWidget::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "customEvent(QWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::customEvent(arg__1);
}
int  PythonQtShell_QWidget::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "devType(QWidget*)");
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
  return QWidget::devType();
}
void PythonQtShell_QWidget::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "dragEnterEvent(QWidget*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::dragEnterEvent(arg__1);
}
void PythonQtShell_QWidget::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "dragLeaveEvent(QWidget*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::dragLeaveEvent(arg__1);
}
void PythonQtShell_QWidget::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "dragMoveEvent(QWidget*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::dragMoveEvent(arg__1);
}
void PythonQtShell_QWidget::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "dropEvent(QWidget*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::dropEvent(arg__1);
}
void PythonQtShell_QWidget::enabledChange(bool  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enabledChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "enabledChange(QWidget*,bool )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::enabledChange(arg__1);
}
void PythonQtShell_QWidget::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "enterEvent(QWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::enterEvent(arg__1);
}
bool  PythonQtShell_QWidget::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "event(QWidget*,QEvent* )");
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
  return QWidget::event(arg__1);
}
bool  PythonQtShell_QWidget::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "eventFilter(QWidget*,QObject* ,QEvent* )");
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
  return QWidget::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWidget::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "focusInEvent(QWidget*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::focusInEvent(arg__1);
}
bool  PythonQtShell_QWidget::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "focusNextPrevChild(QWidget*,bool )");
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
  return QWidget::focusNextPrevChild(next);
}
void PythonQtShell_QWidget::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "focusOutEvent(QWidget*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::focusOutEvent(arg__1);
}
void PythonQtShell_QWidget::fontChange(const QFont&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fontChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "fontChange(QWidget*,const QFont& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::fontChange(arg__1);
}
int  PythonQtShell_QWidget::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "heightForWidth(QWidget*,int )");
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
  return QWidget::heightForWidth(arg__1);
}
void PythonQtShell_QWidget::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "hideEvent(QWidget*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::hideEvent(arg__1);
}
void PythonQtShell_QWidget::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "inputMethodEvent(QWidget*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWidget::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "inputMethodQuery(QWidget*,Qt::InputMethodQuery )");
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
  return QWidget::inputMethodQuery(arg__1);
}
void PythonQtShell_QWidget::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "keyPressEvent(QWidget*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::keyPressEvent(arg__1);
}
void PythonQtShell_QWidget::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "keyReleaseEvent(QWidget*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWidget::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "languageChange(QWidget*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::languageChange();
}
void PythonQtShell_QWidget::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "leaveEvent(QWidget*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::leaveEvent(arg__1);
}
int  PythonQtShell_QWidget::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "metric(QWidget*,QPaintDevice::PaintDeviceMetric )");
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
  return QWidget::metric(arg__1);
}
QSize  PythonQtShell_QWidget::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "getMinimumSizeHint(QWidget*)");
      QSize  returnValue;
    void* args[1] = {NULL};
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
  return QWidget::minimumSizeHint();
}
void PythonQtShell_QWidget::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "mouseDoubleClickEvent(QWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWidget::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "mouseMoveEvent(QWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::mouseMoveEvent(arg__1);
}
void PythonQtShell_QWidget::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "mousePressEvent(QWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::mousePressEvent(arg__1);
}
void PythonQtShell_QWidget::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "mouseReleaseEvent(QWidget*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWidget::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "moveEvent(QWidget*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QWidget::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "paintEngine(QWidget*)");
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
  return QWidget::paintEngine();
}
void PythonQtShell_QWidget::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "paintEvent(QWidget*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::paintEvent(arg__1);
}
void PythonQtShell_QWidget::paletteChange(const QPalette&  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paletteChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "paletteChange(QWidget*,const QPalette& )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::paletteChange(arg__1);
}
void PythonQtShell_QWidget::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "resizeEvent(QWidget*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::resizeEvent(arg__1);
}
void PythonQtShell_QWidget::setVisible(bool  visible)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setVisible");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "setVisible(QWidget*,bool )");
    void* args[2] = {NULL, (void*)&visible};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::setVisible(visible);
}
void PythonQtShell_QWidget::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "showEvent(QWidget*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::showEvent(arg__1);
}
QSize  PythonQtShell_QWidget::sizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "getSizeHint(QWidget*)");
      QSize  returnValue;
    void* args[1] = {NULL};
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
  return QWidget::sizeHint();
}
void PythonQtShell_QWidget::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "tabletEvent(QWidget*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::tabletEvent(arg__1);
}
void PythonQtShell_QWidget::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "timerEvent(QWidget*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::timerEvent(arg__1);
}
void PythonQtShell_QWidget::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "wheelEvent(QWidget*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::wheelEvent(arg__1);
}
void PythonQtShell_QWidget::windowActivationChange(bool  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "windowActivationChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWidget::staticMetaObject,
      "windowActivationChange(QWidget*,bool )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWidget::windowActivationChange(arg__1);
}
QWidget* PythonQtWrapper_QWidget::new_QWidget(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QWidget(parent, f); }

void PythonQtWrapper_QWidget::keyPressEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_keyPressEvent(arg__1);
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, int  w, int  h)
{
 theWrappedObject->setFixedSize(w, h);
}

QPoint  PythonQtWrapper_QWidget::pos(QWidget* theWrappedObject) const
{
return  theWrappedObject->pos();
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
 theWrappedObject->setGeometry(x, y, w, h);
}

void PythonQtWrapper_QWidget::setFixedWidth(QWidget* theWrappedObject, int  w)
{
 theWrappedObject->setFixedWidth(w);
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, int  maxw, int  maxh)
{
 theWrappedObject->setMaximumSize(maxw, maxh);
}

void PythonQtWrapper_QWidget::dragMoveEvent(QWidget* theWrappedObject, QDragMoveEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragMoveEvent(arg__1);
}

QRegion  PythonQtWrapper_QWidget::visibleRegion(QWidget* theWrappedObject) const
{
return  theWrappedObject->visibleRegion();
}

bool  PythonQtWrapper_QWidget::event(QWidget* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_event(arg__1);
}

void PythonQtWrapper_QWidget::getContentsMargins(QWidget* theWrappedObject, int*  left, int*  top, int*  right, int*  bottom) const
{
 theWrappedObject->getContentsMargins(left, top, right, bottom);
}

QSize  PythonQtWrapper_QWidget::baseSize(QWidget* theWrappedObject) const
{
return  theWrappedObject->baseSize();
}

QPoint  PythonQtWrapper_QWidget::mapTo(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const
{
return  theWrappedObject->mapTo(arg__1, arg__2);
}

void PythonQtWrapper_QWidget::dropEvent(QWidget* theWrappedObject, QDropEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dropEvent(arg__1);
}

bool  PythonQtWrapper_QWidget::autoFillBackground(QWidget* theWrappedObject) const
{
return  theWrappedObject->autoFillBackground();
}

void PythonQtWrapper_QWidget::mouseReleaseEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1);
}

void PythonQtWrapper_QWidget::adjustSize(QWidget* theWrappedObject)
{
 theWrappedObject->adjustSize();
}

QPoint  PythonQtWrapper_QWidget::mapFromGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return  theWrappedObject->mapFromGlobal(arg__1);
}

QPoint  PythonQtWrapper_QWidget::mapFromParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return  theWrappedObject->mapFromParent(arg__1);
}

void PythonQtWrapper_QWidget::stackUnder(QWidget* theWrappedObject, QWidget*  arg__1)
{
 theWrappedObject->stackUnder(arg__1);
}

void PythonQtWrapper_QWidget::setAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1, bool  on)
{
 theWrappedObject->setAttribute(arg__1, on);
}

QSize  PythonQtWrapper_QWidget::sizeIncrement(QWidget* theWrappedObject) const
{
return  theWrappedObject->sizeIncrement();
}

void PythonQtWrapper_QWidget::setFixedSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->setFixedSize(arg__1);
}

void PythonQtWrapper_QWidget::setGeometry(QWidget* theWrappedObject, const QRect&  arg__1)
{
 theWrappedObject->setGeometry(arg__1);
}

Qt::ContextMenuPolicy  PythonQtWrapper_QWidget::contextMenuPolicy(QWidget* theWrappedObject) const
{
return  theWrappedObject->contextMenuPolicy();
}

void PythonQtWrapper_QWidget::moveEvent(QWidget* theWrappedObject, QMoveEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_moveEvent(arg__1);
}

void PythonQtWrapper_QWidget::setMinimumHeight(QWidget* theWrappedObject, int  minh)
{
 theWrappedObject->setMinimumHeight(minh);
}

QWidget*  PythonQtWrapper_QWidget::nativeParentWidget(QWidget* theWrappedObject) const
{
return  theWrappedObject->nativeParentWidget();
}

void PythonQtWrapper_QWidget::setFocus(QWidget* theWrappedObject, Qt::FocusReason  reason)
{
 theWrappedObject->setFocus(reason);
}

bool  PythonQtWrapper_QWidget::isMaximized(QWidget* theWrappedObject) const
{
return  theWrappedObject->isMaximized();
}

void PythonQtWrapper_QWidget::setWindowIcon(QWidget* theWrappedObject, const QIcon&  icon)
{
 theWrappedObject->setWindowIcon(icon);
}

bool  PythonQtWrapper_QWidget::underMouse(QWidget* theWrappedObject) const
{
return  theWrappedObject->underMouse();
}

void PythonQtWrapper_QWidget::createWinId(QWidget* theWrappedObject)
{
 theWrappedObject->createWinId();
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
 theWrappedObject->repaint(x, y, w, h);
}

void PythonQtWrapper_QWidget::setInputContext(QWidget* theWrappedObject, QInputContext*  arg__1)
{
 theWrappedObject->setInputContext(arg__1);
}

bool  PythonQtWrapper_QWidget::isHidden(QWidget* theWrappedObject) const
{
return  theWrappedObject->isHidden();
}

QSize  PythonQtWrapper_QWidget::minimumSize(QWidget* theWrappedObject) const
{
return  theWrappedObject->minimumSize();
}

void PythonQtWrapper_QWidget::actionEvent(QWidget* theWrappedObject, QActionEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_actionEvent(arg__1);
}

QCursor  PythonQtWrapper_QWidget::cursor(QWidget* theWrappedObject) const
{
return  theWrappedObject->cursor();
}

int  PythonQtWrapper_QWidget::minimumHeight(QWidget* theWrappedObject) const
{
return  theWrappedObject->minimumHeight();
}

void PythonQtWrapper_QWidget::grabKeyboard(QWidget* theWrappedObject)
{
 theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QWidget::removeAction(QWidget* theWrappedObject, QAction*  action)
{
 theWrappedObject->removeAction(action);
}

bool  PythonQtWrapper_QWidget::hasMouseTracking(QWidget* theWrappedObject) const
{
return  theWrappedObject->hasMouseTracking();
}

QRegion  PythonQtWrapper_QWidget::mask(QWidget* theWrappedObject) const
{
return  theWrappedObject->mask();
}

bool  PythonQtWrapper_QWidget::isVisibleTo(QWidget* theWrappedObject, QWidget*  arg__1) const
{
return  theWrappedObject->isVisibleTo(arg__1);
}

QSize  PythonQtWrapper_QWidget::sizeHint(QWidget* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_sizeHint();
}

void PythonQtWrapper_QWidget::hideEvent(QWidget* theWrappedObject, QHideEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_hideEvent(arg__1);
}

QPaintEngine*  PythonQtWrapper_QWidget::paintEngine(QWidget* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_paintEngine();
}

QWidget*  PythonQtWrapper_QWidget::parentWidget(QWidget* theWrappedObject) const
{
return  theWrappedObject->parentWidget();
}

int  PythonQtWrapper_QWidget::metric(QWidget* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_metric(arg__1);
}

void PythonQtWrapper_QWidget::activateWindow(QWidget* theWrappedObject)
{
 theWrappedObject->activateWindow();
}

bool  PythonQtWrapper_QWidget::isVisible(QWidget* theWrappedObject) const
{
return  theWrappedObject->isVisible();
}

const QFont&  PythonQtWrapper_QWidget::font(QWidget* theWrappedObject) const
{
return  theWrappedObject->font();
}

QString  PythonQtWrapper_QWidget::statusTip(QWidget* theWrappedObject) const
{
return  theWrappedObject->statusTip();
}

QRegion  PythonQtWrapper_QWidget::childrenRegion(QWidget* theWrappedObject) const
{
return  theWrappedObject->childrenRegion();
}

void PythonQtWrapper_QWidget::setWindowIconText(QWidget* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setWindowIconText(arg__1);
}

QSize  PythonQtWrapper_QWidget::maximumSize(QWidget* theWrappedObject) const
{
return  theWrappedObject->maximumSize();
}

void PythonQtWrapper_QWidget::releaseKeyboard(QWidget* theWrappedObject)
{
 theWrappedObject->releaseKeyboard();
}

QWidget*  PythonQtWrapper_QWidget::focusWidget(QWidget* theWrappedObject) const
{
return  theWrappedObject->focusWidget();
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy, const QRect&  arg__3)
{
 theWrappedObject->scroll(dx, dy, arg__3);
}

QString  PythonQtWrapper_QWidget::windowFilePath(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowFilePath();
}

QLayout*  PythonQtWrapper_QWidget::layout(QWidget* theWrappedObject) const
{
return  theWrappedObject->layout();
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, int  w, int  h)
{
 theWrappedObject->resize(w, h);
}

void PythonQtWrapper_QWidget::releaseMouse(QWidget* theWrappedObject)
{
 theWrappedObject->releaseMouse();
}

QString  PythonQtWrapper_QWidget::accessibleDescription(QWidget* theWrappedObject) const
{
return  theWrappedObject->accessibleDescription();
}

bool  PythonQtWrapper_QWidget::isLeftToRight(QWidget* theWrappedObject) const
{
return  theWrappedObject->isLeftToRight();
}

bool  PythonQtWrapper_QWidget::isMinimized(QWidget* theWrappedObject) const
{
return  theWrappedObject->isMinimized();
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, QWidget*  parent)
{
 theWrappedObject->setParent(parent);
}

void PythonQtWrapper_QWidget::addAction(QWidget* theWrappedObject, QAction*  action)
{
 theWrappedObject->addAction(action);
}

QLocale  PythonQtWrapper_QWidget::locale(QWidget* theWrappedObject) const
{
return  theWrappedObject->locale();
}

bool  PythonQtWrapper_QWidget::restoreGeometry(QWidget* theWrappedObject, const QByteArray&  geometry)
{
return  theWrappedObject->restoreGeometry(geometry);
}

void PythonQtWrapper_QWidget::unsetLayoutDirection(QWidget* theWrappedObject)
{
 theWrappedObject->unsetLayoutDirection();
}

QVariant  PythonQtWrapper_QWidget::inputMethodQuery(QWidget* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_inputMethodQuery(arg__1);
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRect&  arg__1)
{
 theWrappedObject->repaint(arg__1);
}

QList<QAction* >  PythonQtWrapper_QWidget::actions(QWidget* theWrappedObject) const
{
return  theWrappedObject->actions();
}

QWidget*  PythonQtWrapper_QWidget::window(QWidget* theWrappedObject) const
{
return  theWrappedObject->window();
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, const QPoint&  p) const
{
return  theWrappedObject->childAt(p);
}

QPoint  PythonQtWrapper_QWidget::mapToParent(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return  theWrappedObject->mapToParent(arg__1);
}

void PythonQtWrapper_QWidget::setContentsMargins(QWidget* theWrappedObject, int  left, int  top, int  right, int  bottom)
{
 theWrappedObject->setContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QWidget::setMouseTracking(QWidget* theWrappedObject, bool  enable)
{
 theWrappedObject->setMouseTracking(enable);
}

void PythonQtWrapper_QWidget::setWindowOpacity(QWidget* theWrappedObject, qreal  level)
{
 theWrappedObject->setWindowOpacity(level);
}

void PythonQtWrapper_QWidget::clearMask(QWidget* theWrappedObject)
{
 theWrappedObject->clearMask();
}

bool  PythonQtWrapper_QWidget::isActiveWindow(QWidget* theWrappedObject) const
{
return  theWrappedObject->isActiveWindow();
}

void PythonQtWrapper_QWidget::unsetCursor(QWidget* theWrappedObject)
{
 theWrappedObject->unsetCursor();
}

int  PythonQtWrapper_QWidget::width(QWidget* theWrappedObject) const
{
return  theWrappedObject->width();
}

void PythonQtWrapper_QWidget::resizeEvent(QWidget* theWrappedObject, QResizeEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_resizeEvent(arg__1);
}

QInputContext*  PythonQtWrapper_QWidget::inputContext(QWidget* theWrappedObject)
{
return  theWrappedObject->inputContext();
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy  arg__1)
{
 theWrappedObject->setSizePolicy(arg__1);
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPainter*  painter, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
 theWrappedObject->render(painter, targetOffset, sourceRegion, renderFlags);
}

void PythonQtWrapper_QWidget::repaint(QWidget* theWrappedObject, const QRegion&  arg__1)
{
 theWrappedObject->repaint(arg__1);
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, int  minw, int  minh)
{
 theWrappedObject->setMinimumSize(minw, minh);
}

void PythonQtWrapper_QWidget::scroll(QWidget* theWrappedObject, int  dx, int  dy)
{
 theWrappedObject->scroll(dx, dy);
}

QString  PythonQtWrapper_QWidget::styleSheet(QWidget* theWrappedObject) const
{
return  theWrappedObject->styleSheet();
}

QString  PythonQtWrapper_QWidget::windowRole(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowRole();
}

void PythonQtWrapper_QWidget::addActions(QWidget* theWrappedObject, QList<QAction* >  actions)
{
 theWrappedObject->addActions(actions);
}

Qt::WindowFlags  PythonQtWrapper_QWidget::windowFlags(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowFlags();
}

void PythonQtWrapper_QWidget::setCursor(QWidget* theWrappedObject, const QCursor&  arg__1)
{
 theWrappedObject->setCursor(arg__1);
}

void PythonQtWrapper_QWidget::enterEvent(QWidget* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_enterEvent(arg__1);
}

const QRect&  PythonQtWrapper_QWidget::geometry(QWidget* theWrappedObject) const
{
return  theWrappedObject->geometry();
}

void PythonQtWrapper_QWidget::showEvent(QWidget* theWrappedObject, QShowEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_showEvent(arg__1);
}

void PythonQtWrapper_QWidget::setPalette(QWidget* theWrappedObject, const QPalette&  arg__1)
{
 theWrappedObject->setPalette(arg__1);
}

bool  PythonQtWrapper_QWidget::updatesEnabled(QWidget* theWrappedObject) const
{
return  theWrappedObject->updatesEnabled();
}

QSizePolicy  PythonQtWrapper_QWidget::sizePolicy(QWidget* theWrappedObject) const
{
return  theWrappedObject->sizePolicy();
}

void PythonQtWrapper_QWidget::mouseMoveEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseMoveEvent(arg__1);
}

QPalette::ColorRole  PythonQtWrapper_QWidget::backgroundRole(QWidget* theWrappedObject) const
{
return  theWrappedObject->backgroundRole();
}

void PythonQtWrapper_QWidget::wheelEvent(QWidget* theWrappedObject, QWheelEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_wheelEvent(arg__1);
}

qreal  PythonQtWrapper_QWidget::windowOpacity(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowOpacity();
}

bool  PythonQtWrapper_QWidget::isWindow(QWidget* theWrappedObject) const
{
return  theWrappedObject->isWindow();
}

void PythonQtWrapper_QWidget::setWindowRole(QWidget* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setWindowRole(arg__1);
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->setSizeIncrement(arg__1);
}

void PythonQtWrapper_QWidget::mouseDoubleClickEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1);
}

void PythonQtWrapper_QWidget::insertAction(QWidget* theWrappedObject, QAction*  before, QAction*  action)
{
 theWrappedObject->insertAction(before, action);
}

void PythonQtWrapper_QWidget::setFont(QWidget* theWrappedObject, const QFont&  arg__1)
{
 theWrappedObject->setFont(arg__1);
}

WId  PythonQtWrapper_QWidget::winId(QWidget* theWrappedObject) const
{
return  theWrappedObject->winId();
}

void PythonQtWrapper_QWidget::setMaximumWidth(QWidget* theWrappedObject, int  maxw)
{
 theWrappedObject->setMaximumWidth(maxw);
}

bool  PythonQtWrapper_QWidget::testAttribute(QWidget* theWrappedObject, Qt::WidgetAttribute  arg__1) const
{
return  theWrappedObject->testAttribute(arg__1);
}

void PythonQtWrapper_QWidget::closeEvent(QWidget* theWrappedObject, QCloseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_closeEvent(arg__1);
}

void PythonQtWrapper_QWidget::setFocusPolicy(QWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
 theWrappedObject->setFocusPolicy(policy);
}

void PythonQtWrapper_QWidget::overrideWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
 theWrappedObject->overrideWindowFlags(type);
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QRegion&  arg__1)
{
 theWrappedObject->setMask(arg__1);
}

void PythonQtWrapper_QWidget::setWhatsThis(QWidget* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setWhatsThis(arg__1);
}

void PythonQtWrapper_QWidget::setStatusTip(QWidget* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setStatusTip(arg__1);
}

void PythonQtWrapper_QWidget::contextMenuEvent(QWidget* theWrappedObject, QContextMenuEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_contextMenuEvent(arg__1);
}

void PythonQtWrapper_QWidget::insertActions(QWidget* theWrappedObject, QAction*  before, QList<QAction* >  actions)
{
 theWrappedObject->insertActions(before, actions);
}

void PythonQtWrapper_QWidget::setShortcutAutoRepeat(QWidget* theWrappedObject, int  id, bool  enable)
{
 theWrappedObject->setShortcutAutoRepeat(id, enable);
}

void PythonQtWrapper_QWidget::paintEvent(QWidget* theWrappedObject, QPaintEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_paintEvent(arg__1);
}

void PythonQtWrapper_QWidget::static_QWidget_setTabOrder(QWidget*  arg__1, QWidget*  arg__2)
{
QWidget::setTabOrder(arg__1, arg__2);
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_mouseGrabber()
{
return QWidget::mouseGrabber();
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRect&  arg__1)
{
 theWrappedObject->update(arg__1);
}

int  PythonQtWrapper_QWidget::maximumWidth(QWidget* theWrappedObject) const
{
return  theWrappedObject->maximumWidth();
}

void PythonQtWrapper_QWidget::setUpdatesEnabled(QWidget* theWrappedObject, bool  enable)
{
 theWrappedObject->setUpdatesEnabled(enable);
}

QStyle*  PythonQtWrapper_QWidget::style(QWidget* theWrappedObject) const
{
return  theWrappedObject->style();
}

Qt::WindowModality  PythonQtWrapper_QWidget::windowModality(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowModality();
}

void PythonQtWrapper_QWidget::resize(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->resize(arg__1);
}

int  PythonQtWrapper_QWidget::x(QWidget* theWrappedObject) const
{
return  theWrappedObject->x();
}

void PythonQtWrapper_QWidget::setForegroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
 theWrappedObject->setForegroundRole(arg__1);
}

void PythonQtWrapper_QWidget::setParent(QWidget* theWrappedObject, QWidget*  parent, Qt::WindowFlags  f)
{
 theWrappedObject->setParent(parent, f);
}

bool  PythonQtWrapper_QWidget::hasFocus(QWidget* theWrappedObject) const
{
return  theWrappedObject->hasFocus();
}

void PythonQtWrapper_QWidget::unsetLocale(QWidget* theWrappedObject)
{
 theWrappedObject->unsetLocale();
}

QRect  PythonQtWrapper_QWidget::contentsRect(QWidget* theWrappedObject) const
{
return  theWrappedObject->contentsRect();
}

bool  PythonQtWrapper_QWidget::isEnabledTo(QWidget* theWrappedObject, QWidget*  arg__1) const
{
return  theWrappedObject->isEnabledTo(arg__1);
}

QWidget*  PythonQtWrapper_QWidget::focusProxy(QWidget* theWrappedObject) const
{
return  theWrappedObject->focusProxy();
}

int  PythonQtWrapper_QWidget::grabShortcut(QWidget* theWrappedObject, const QKeySequence&  key, Qt::ShortcutContext  context)
{
return  theWrappedObject->grabShortcut(key, context);
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, int  x, int  y)
{
 theWrappedObject->move(x, y);
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject)
{
 theWrappedObject->grabMouse();
}

QString  PythonQtWrapper_QWidget::windowIconText(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowIconText();
}

QSize  PythonQtWrapper_QWidget::minimumSizeHint(QWidget* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_minimumSizeHint();
}

void PythonQtWrapper_QWidget::setContextMenuPolicy(QWidget* theWrappedObject, Qt::ContextMenuPolicy  policy)
{
 theWrappedObject->setContextMenuPolicy(policy);
}

void PythonQtWrapper_QWidget::setSizePolicy(QWidget* theWrappedObject, QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical)
{
 theWrappedObject->setSizePolicy(horizontal, vertical);
}

void PythonQtWrapper_QWidget::setBackgroundRole(QWidget* theWrappedObject, QPalette::ColorRole  arg__1)
{
 theWrappedObject->setBackgroundRole(arg__1);
}

QRect  PythonQtWrapper_QWidget::frameGeometry(QWidget* theWrappedObject) const
{
return  theWrappedObject->frameGeometry();
}

void PythonQtWrapper_QWidget::setAccessibleDescription(QWidget* theWrappedObject, const QString&  description)
{
 theWrappedObject->setAccessibleDescription(description);
}

QByteArray  PythonQtWrapper_QWidget::saveGeometry(QWidget* theWrappedObject) const
{
return  theWrappedObject->saveGeometry();
}

void PythonQtWrapper_QWidget::dragEnterEvent(QWidget* theWrappedObject, QDragEnterEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragEnterEvent(arg__1);
}

Qt::FocusPolicy  PythonQtWrapper_QWidget::focusPolicy(QWidget* theWrappedObject) const
{
return  theWrappedObject->focusPolicy();
}

void PythonQtWrapper_QWidget::setShortcutEnabled(QWidget* theWrappedObject, int  id, bool  enable)
{
 theWrappedObject->setShortcutEnabled(id, enable);
}

void PythonQtWrapper_QWidget::grabMouse(QWidget* theWrappedObject, const QCursor&  arg__1)
{
 theWrappedObject->grabMouse(arg__1);
}

void PythonQtWrapper_QWidget::setMaximumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->setMaximumSize(arg__1);
}

QPalette::ColorRole  PythonQtWrapper_QWidget::foregroundRole(QWidget* theWrappedObject) const
{
return  theWrappedObject->foregroundRole();
}

void PythonQtWrapper_QWidget::dragLeaveEvent(QWidget* theWrappedObject, QDragLeaveEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_dragLeaveEvent(arg__1);
}

Qt::WindowType  PythonQtWrapper_QWidget::windowType(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowType();
}

void PythonQtWrapper_QWidget::setMinimumSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->setMinimumSize(arg__1);
}

void PythonQtWrapper_QWidget::setAccessibleName(QWidget* theWrappedObject, const QString&  name)
{
 theWrappedObject->setAccessibleName(name);
}

void PythonQtWrapper_QWidget::setWindowModality(QWidget* theWrappedObject, Qt::WindowModality  windowModality)
{
 theWrappedObject->setWindowModality(windowModality);
}

const QPalette&  PythonQtWrapper_QWidget::palette(QWidget* theWrappedObject) const
{
return  theWrappedObject->palette();
}

void PythonQtWrapper_QWidget::focusOutEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusOutEvent(arg__1);
}

void PythonQtWrapper_QWidget::setLocale(QWidget* theWrappedObject, const QLocale&  locale)
{
 theWrappedObject->setLocale(locale);
}

void PythonQtWrapper_QWidget::setMaximumHeight(QWidget* theWrappedObject, int  maxh)
{
 theWrappedObject->setMaximumHeight(maxh);
}

WId  PythonQtWrapper_QWidget::effectiveWinId(QWidget* theWrappedObject) const
{
return  theWrappedObject->effectiveWinId();
}

void PythonQtWrapper_QWidget::setWindowFilePath(QWidget* theWrappedObject, const QString&  filePath)
{
 theWrappedObject->setWindowFilePath(filePath);
}

bool  PythonQtWrapper_QWidget::isAncestorOf(QWidget* theWrappedObject, const QWidget*  child) const
{
return  theWrappedObject->isAncestorOf(child);
}

void PythonQtWrapper_QWidget::setSizeIncrement(QWidget* theWrappedObject, int  w, int  h)
{
 theWrappedObject->setSizeIncrement(w, h);
}

void PythonQtWrapper_QWidget::setStyle(QWidget* theWrappedObject, QStyle*  arg__1)
{
 theWrappedObject->setStyle(arg__1);
}

void PythonQtWrapper_QWidget::changeEvent(QWidget* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_changeEvent(arg__1);
}

bool  PythonQtWrapper_QWidget::isRightToLeft(QWidget* theWrappedObject) const
{
return  theWrappedObject->isRightToLeft();
}

QPoint  PythonQtWrapper_QWidget::mapFrom(QWidget* theWrappedObject, QWidget*  arg__1, const QPoint&  arg__2) const
{
return  theWrappedObject->mapFrom(arg__1, arg__2);
}

QString  PythonQtWrapper_QWidget::accessibleName(QWidget* theWrappedObject) const
{
return  theWrappedObject->accessibleName();
}

void PythonQtWrapper_QWidget::releaseShortcut(QWidget* theWrappedObject, int  id)
{
 theWrappedObject->releaseShortcut(id);
}

bool  PythonQtWrapper_QWidget::acceptDrops(QWidget* theWrappedObject) const
{
return  theWrappedObject->acceptDrops();
}

QWidget*  PythonQtWrapper_QWidget::childAt(QWidget* theWrappedObject, int  x, int  y) const
{
return  theWrappedObject->childAt(x, y);
}

int  PythonQtWrapper_QWidget::devType(QWidget* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_devType();
}

void PythonQtWrapper_QWidget::setAcceptDrops(QWidget* theWrappedObject, bool  on)
{
 theWrappedObject->setAcceptDrops(on);
}

int  PythonQtWrapper_QWidget::maximumHeight(QWidget* theWrappedObject) const
{
return  theWrappedObject->maximumHeight();
}

bool  PythonQtWrapper_QWidget::isEnabled(QWidget* theWrappedObject) const
{
return  theWrappedObject->isEnabled();
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, const QRegion&  arg__1)
{
 theWrappedObject->update(arg__1);
}

QPoint  PythonQtWrapper_QWidget::mapToGlobal(QWidget* theWrappedObject, const QPoint&  arg__1) const
{
return  theWrappedObject->mapToGlobal(arg__1);
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, int  basew, int  baseh)
{
 theWrappedObject->setBaseSize(basew, baseh);
}

void PythonQtWrapper_QWidget::setBaseSize(QWidget* theWrappedObject, const QSize&  arg__1)
{
 theWrappedObject->setBaseSize(arg__1);
}

void PythonQtWrapper_QWidget::setMask(QWidget* theWrappedObject, const QBitmap&  arg__1)
{
 theWrappedObject->setMask(arg__1);
}

void PythonQtWrapper_QWidget::inputMethodEvent(QWidget* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

bool  PythonQtWrapper_QWidget::isFullScreen(QWidget* theWrappedObject) const
{
return  theWrappedObject->isFullScreen();
}

void PythonQtWrapper_QWidget::update(QWidget* theWrappedObject, int  x, int  y, int  w, int  h)
{
 theWrappedObject->update(x, y, w, h);
}

void PythonQtWrapper_QWidget::setLayout(QWidget* theWrappedObject, QLayout*  arg__1)
{
 theWrappedObject->setLayout(arg__1);
}

void PythonQtWrapper_QWidget::leaveEvent(QWidget* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_leaveEvent(arg__1);
}

bool  PythonQtWrapper_QWidget::isModal(QWidget* theWrappedObject) const
{
return  theWrappedObject->isModal();
}

void PythonQtWrapper_QWidget::updateGeometry(QWidget* theWrappedObject)
{
 theWrappedObject->updateGeometry();
}

Qt::WindowStates  PythonQtWrapper_QWidget::windowState(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowState();
}

void PythonQtWrapper_QWidget::ensurePolished(QWidget* theWrappedObject) const
{
 theWrappedObject->ensurePolished();
}

int  PythonQtWrapper_QWidget::minimumWidth(QWidget* theWrappedObject) const
{
return  theWrappedObject->minimumWidth();
}

void PythonQtWrapper_QWidget::setFixedHeight(QWidget* theWrappedObject, int  h)
{
 theWrappedObject->setFixedHeight(h);
}

void PythonQtWrapper_QWidget::clearFocus(QWidget* theWrappedObject)
{
 theWrappedObject->clearFocus();
}

void PythonQtWrapper_QWidget::setFocusProxy(QWidget* theWrappedObject, QWidget*  arg__1)
{
 theWrappedObject->setFocusProxy(arg__1);
}

void PythonQtWrapper_QWidget::setToolTip(QWidget* theWrappedObject, const QString&  arg__1)
{
 theWrappedObject->setToolTip(arg__1);
}

QRect  PythonQtWrapper_QWidget::childrenRect(QWidget* theWrappedObject) const
{
return  theWrappedObject->childrenRect();
}

QString  PythonQtWrapper_QWidget::toolTip(QWidget* theWrappedObject) const
{
return  theWrappedObject->toolTip();
}

void PythonQtWrapper_QWidget::move(QWidget* theWrappedObject, const QPoint&  arg__1)
{
 theWrappedObject->move(arg__1);
}

void PythonQtWrapper_QWidget::focusInEvent(QWidget* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusInEvent(arg__1);
}

void PythonQtWrapper_QWidget::keyReleaseEvent(QWidget* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_keyReleaseEvent(arg__1);
}

QWidget*  PythonQtWrapper_QWidget::nextInFocusChain(QWidget* theWrappedObject) const
{
return  theWrappedObject->nextInFocusChain();
}

bool  PythonQtWrapper_QWidget::focusNextPrevChild(QWidget* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

QSize  PythonQtWrapper_QWidget::frameSize(QWidget* theWrappedObject) const
{
return  theWrappedObject->frameSize();
}

QRect  PythonQtWrapper_QWidget::rect(QWidget* theWrappedObject) const
{
return  theWrappedObject->rect();
}

int  PythonQtWrapper_QWidget::heightForWidth(QWidget* theWrappedObject, int  arg__1) const
{
return  ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_heightForWidth(arg__1);
}

QString  PythonQtWrapper_QWidget::whatsThis(QWidget* theWrappedObject) const
{
return  theWrappedObject->whatsThis();
}

Qt::LayoutDirection  PythonQtWrapper_QWidget::layoutDirection(QWidget* theWrappedObject) const
{
return  theWrappedObject->layoutDirection();
}

void PythonQtWrapper_QWidget::overrideWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
 theWrappedObject->overrideWindowState(state);
}

void PythonQtWrapper_QWidget::tabletEvent(QWidget* theWrappedObject, QTabletEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_tabletEvent(arg__1);
}

bool  PythonQtWrapper_QWidget::isWindowModified(QWidget* theWrappedObject) const
{
return  theWrappedObject->isWindowModified();
}

QIcon  PythonQtWrapper_QWidget::windowIcon(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowIcon();
}

int  PythonQtWrapper_QWidget::height(QWidget* theWrappedObject) const
{
return  theWrappedObject->height();
}

void PythonQtWrapper_QWidget::setLayoutDirection(QWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
 theWrappedObject->setLayoutDirection(direction);
}

QString  PythonQtWrapper_QWidget::windowTitle(QWidget* theWrappedObject) const
{
return  theWrappedObject->windowTitle();
}

void PythonQtWrapper_QWidget::setAutoFillBackground(QWidget* theWrappedObject, bool  enabled)
{
 theWrappedObject->setAutoFillBackground(enabled);
}

void PythonQtWrapper_QWidget::setWindowFlags(QWidget* theWrappedObject, Qt::WindowFlags  type)
{
 theWrappedObject->setWindowFlags(type);
}

void PythonQtWrapper_QWidget::setMinimumWidth(QWidget* theWrappedObject, int  minw)
{
 theWrappedObject->setMinimumWidth(minw);
}

QSize  PythonQtWrapper_QWidget::size(QWidget* theWrappedObject) const
{
return  theWrappedObject->size();
}

int  PythonQtWrapper_QWidget::y(QWidget* theWrappedObject) const
{
return  theWrappedObject->y();
}

QWidget*  PythonQtWrapper_QWidget::static_QWidget_keyboardGrabber()
{
return QWidget::keyboardGrabber();
}

void PythonQtWrapper_QWidget::render(QWidget* theWrappedObject, QPaintDevice*  target, const QPoint&  targetOffset, const QRegion&  sourceRegion, QWidget::RenderFlags  renderFlags)
{
 theWrappedObject->render(target, targetOffset, sourceRegion, renderFlags);
}

void PythonQtWrapper_QWidget::setWindowState(QWidget* theWrappedObject, Qt::WindowStates  state)
{
 theWrappedObject->setWindowState(state);
}

QRect  PythonQtWrapper_QWidget::normalGeometry(QWidget* theWrappedObject) const
{
return  theWrappedObject->normalGeometry();
}

void PythonQtWrapper_QWidget::languageChange(QWidget* theWrappedObject)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_languageChange();
}

void PythonQtWrapper_QWidget::mousePressEvent(QWidget* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWidget*)theWrappedObject)->promoted_mousePressEvent(arg__1);
}

