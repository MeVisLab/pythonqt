#include "PythonQtWrapper_QComboBox.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qwidget.h>

void PythonQtShell_QComboBox::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "actionEvent(QComboBox*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::actionEvent(arg__1);
}
void PythonQtShell_QComboBox::changeEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "changeEvent(QComboBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::changeEvent(e);
}
void PythonQtShell_QComboBox::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "childEvent(QComboBox*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::childEvent(arg__1);
}
void PythonQtShell_QComboBox::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "closeEvent(QComboBox*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::closeEvent(arg__1);
}
void PythonQtShell_QComboBox::contextMenuEvent(QContextMenuEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "contextMenuEvent(QComboBox*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::contextMenuEvent(e);
}
void PythonQtShell_QComboBox::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "customEvent(QComboBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::customEvent(arg__1);
}
int  PythonQtShell_QComboBox::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "devType(QComboBox*)");
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
  return QComboBox::devType();
}
void PythonQtShell_QComboBox::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "dragEnterEvent(QComboBox*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QComboBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "dragLeaveEvent(QComboBox*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QComboBox::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "dragMoveEvent(QComboBox*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QComboBox::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "dropEvent(QComboBox*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::dropEvent(arg__1);
}
void PythonQtShell_QComboBox::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "enterEvent(QComboBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::enterEvent(arg__1);
}
bool  PythonQtShell_QComboBox::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "event(QComboBox*,QEvent* )");
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
  return QComboBox::event(event);
}
bool  PythonQtShell_QComboBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "eventFilter(QComboBox*,QObject* ,QEvent* )");
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
  return QComboBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QComboBox::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "focusInEvent(QComboBox*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::focusInEvent(e);
}
bool  PythonQtShell_QComboBox::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "focusNextPrevChild(QComboBox*,bool )");
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
  return QComboBox::focusNextPrevChild(next);
}
void PythonQtShell_QComboBox::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "focusOutEvent(QComboBox*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::focusOutEvent(e);
}
int  PythonQtShell_QComboBox::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "heightForWidth(QComboBox*,int )");
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
  return QComboBox::heightForWidth(arg__1);
}
void PythonQtShell_QComboBox::hideEvent(QHideEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "hideEvent(QComboBox*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::hideEvent(e);
}
void PythonQtShell_QComboBox::hidePopup()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hidePopup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "hidePopup(QComboBox*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::hidePopup();
}
void PythonQtShell_QComboBox::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "inputMethodEvent(QComboBox*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QComboBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "inputMethodQuery(QComboBox*,Qt::InputMethodQuery )");
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
  return QComboBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QComboBox::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "keyPressEvent(QComboBox*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::keyPressEvent(e);
}
void PythonQtShell_QComboBox::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "keyReleaseEvent(QComboBox*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::keyReleaseEvent(e);
}
void PythonQtShell_QComboBox::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "languageChange(QComboBox*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::languageChange();
}
void PythonQtShell_QComboBox::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "leaveEvent(QComboBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::leaveEvent(arg__1);
}
int  PythonQtShell_QComboBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "metric(QComboBox*,QPaintDevice::PaintDeviceMetric )");
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
  return QComboBox::metric(arg__1);
}
void PythonQtShell_QComboBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "mouseDoubleClickEvent(QComboBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QComboBox::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "mouseMoveEvent(QComboBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::mouseMoveEvent(arg__1);
}
void PythonQtShell_QComboBox::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "mousePressEvent(QComboBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::mousePressEvent(e);
}
void PythonQtShell_QComboBox::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "mouseReleaseEvent(QComboBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::mouseReleaseEvent(e);
}
void PythonQtShell_QComboBox::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "moveEvent(QComboBox*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QComboBox::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "paintEngine(QComboBox*)");
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
  return QComboBox::paintEngine();
}
void PythonQtShell_QComboBox::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "paintEvent(QComboBox*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::paintEvent(e);
}
void PythonQtShell_QComboBox::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "resizeEvent(QComboBox*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::resizeEvent(e);
}
void PythonQtShell_QComboBox::showEvent(QShowEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "showEvent(QComboBox*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::showEvent(e);
}
void PythonQtShell_QComboBox::showPopup()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showPopup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "showPopup(QComboBox*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::showPopup();
}
void PythonQtShell_QComboBox::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "tabletEvent(QComboBox*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::tabletEvent(arg__1);
}
void PythonQtShell_QComboBox::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "timerEvent(QComboBox*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::timerEvent(arg__1);
}
void PythonQtShell_QComboBox::wheelEvent(QWheelEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QComboBox::staticMetaObject,
      "wheelEvent(QComboBox*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QComboBox::wheelEvent(e);
}
QComboBox* PythonQtWrapper_QComboBox::new_QComboBox(QWidget*  parent)
{ 
return new PythonQtShell_QComboBox(parent); }

bool  PythonQtWrapper_QComboBox::hasFrame(QComboBox* theWrappedObject) const
{
return  theWrappedObject->hasFrame();
}

void PythonQtWrapper_QComboBox::setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index)
{
 theWrappedObject->setRootModelIndex(index);
}

void PythonQtWrapper_QComboBox::focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_focusInEvent(e);
}

bool  PythonQtWrapper_QComboBox::duplicatesEnabled(QComboBox* theWrappedObject) const
{
return  theWrappedObject->duplicatesEnabled();
}

void PythonQtWrapper_QComboBox::mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_mouseReleaseEvent(e);
}

void PythonQtWrapper_QComboBox::keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_keyReleaseEvent(e);
}

void PythonQtWrapper_QComboBox::setValidator(QComboBox* theWrappedObject, const QValidator*  v)
{
 theWrappedObject->setValidator(v);
}

QString  PythonQtWrapper_QComboBox::currentText(QComboBox* theWrappedObject) const
{
return  theWrappedObject->currentText();
}

void PythonQtWrapper_QComboBox::setIconSize(QComboBox* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QComboBox::focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_focusOutEvent(e);
}

QSize  PythonQtWrapper_QComboBox::sizeHint(QComboBox* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QComboBox::maxCount(QComboBox* theWrappedObject) const
{
return  theWrappedObject->maxCount();
}

int  PythonQtWrapper_QComboBox::findData(QComboBox* theWrappedObject, const QVariant&  data, int  role, Qt::MatchFlags  flags) const
{
return  theWrappedObject->findData(data, role, flags);
}

int  PythonQtWrapper_QComboBox::minimumContentsLength(QComboBox* theWrappedObject) const
{
return  theWrappedObject->minimumContentsLength();
}

QCompleter*  PythonQtWrapper_QComboBox::completer(QComboBox* theWrappedObject) const
{
return  theWrappedObject->completer();
}

void PythonQtWrapper_QComboBox::wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_wheelEvent(e);
}

void PythonQtWrapper_QComboBox::setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role)
{
 theWrappedObject->setItemData(index, value, role);
}

int  PythonQtWrapper_QComboBox::maxVisibleItems(QComboBox* theWrappedObject) const
{
return  theWrappedObject->maxVisibleItems();
}

QComboBox::SizeAdjustPolicy  PythonQtWrapper_QComboBox::sizeAdjustPolicy(QComboBox* theWrappedObject) const
{
return  theWrappedObject->sizeAdjustPolicy();
}

void PythonQtWrapper_QComboBox::addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData)
{
 theWrappedObject->addItem(text, userData);
}

void PythonQtWrapper_QComboBox::setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model)
{
 theWrappedObject->setModel(model);
}

QString  PythonQtWrapper_QComboBox::itemText(QComboBox* theWrappedObject, int  index) const
{
return  theWrappedObject->itemText(index);
}

QLineEdit*  PythonQtWrapper_QComboBox::lineEdit(QComboBox* theWrappedObject) const
{
return  theWrappedObject->lineEdit();
}

void PythonQtWrapper_QComboBox::insertSeparator(QComboBox* theWrappedObject, int  index)
{
 theWrappedObject->insertSeparator(index);
}

void PythonQtWrapper_QComboBox::setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon)
{
 theWrappedObject->setItemIcon(index, icon);
}

void PythonQtWrapper_QComboBox::addItems(QComboBox* theWrappedObject, const QStringList&  texts)
{
 theWrappedObject->addItems(texts);
}

int  PythonQtWrapper_QComboBox::findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
return  theWrappedObject->findText(text, flags);
}

void PythonQtWrapper_QComboBox::insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts)
{
 theWrappedObject->insertItems(index, texts);
}

void PythonQtWrapper_QComboBox::keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_keyPressEvent(e);
}

void PythonQtWrapper_QComboBox::inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

void PythonQtWrapper_QComboBox::setItemText(QComboBox* theWrappedObject, int  index, const QString&  text)
{
 theWrappedObject->setItemText(index, text);
}

int  PythonQtWrapper_QComboBox::count(QComboBox* theWrappedObject) const
{
return  theWrappedObject->count();
}

void PythonQtWrapper_QComboBox::setMaxCount(QComboBox* theWrappedObject, int  max)
{
 theWrappedObject->setMaxCount(max);
}

void PythonQtWrapper_QComboBox::showPopup(QComboBox* theWrappedObject)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_showPopup();
}

QSize  PythonQtWrapper_QComboBox::iconSize(QComboBox* theWrappedObject) const
{
return  theWrappedObject->iconSize();
}

void PythonQtWrapper_QComboBox::setEditable(QComboBox* theWrappedObject, bool  editable)
{
 theWrappedObject->setEditable(editable);
}

void PythonQtWrapper_QComboBox::setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy)
{
 theWrappedObject->setInsertPolicy(policy);
}

void PythonQtWrapper_QComboBox::setMinimumContentsLength(QComboBox* theWrappedObject, int  characters)
{
 theWrappedObject->setMinimumContentsLength(characters);
}

void PythonQtWrapper_QComboBox::hideEvent(QComboBox* theWrappedObject, QHideEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_hideEvent(e);
}

QAbstractItemDelegate*  PythonQtWrapper_QComboBox::itemDelegate(QComboBox* theWrappedObject) const
{
return  theWrappedObject->itemDelegate();
}

int  PythonQtWrapper_QComboBox::currentIndex(QComboBox* theWrappedObject) const
{
return  theWrappedObject->currentIndex();
}

void PythonQtWrapper_QComboBox::setModelColumn(QComboBox* theWrappedObject, int  visibleColumn)
{
 theWrappedObject->setModelColumn(visibleColumn);
}

QAbstractItemView*  PythonQtWrapper_QComboBox::view(QComboBox* theWrappedObject) const
{
return  theWrappedObject->view();
}

QVariant  PythonQtWrapper_QComboBox::inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const
{
return  ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_inputMethodQuery(arg__1);
}

void PythonQtWrapper_QComboBox::paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_paintEvent(e);
}

bool  PythonQtWrapper_QComboBox::isEditable(QComboBox* theWrappedObject) const
{
return  theWrappedObject->isEditable();
}

void PythonQtWrapper_QComboBox::setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems)
{
 theWrappedObject->setMaxVisibleItems(maxItems);
}

QAbstractItemModel*  PythonQtWrapper_QComboBox::model(QComboBox* theWrappedObject) const
{
return  theWrappedObject->model();
}

QVariant  PythonQtWrapper_QComboBox::itemData(QComboBox* theWrappedObject, int  index, int  role) const
{
return  theWrappedObject->itemData(index, role);
}

const QValidator*  PythonQtWrapper_QComboBox::validator(QComboBox* theWrappedObject) const
{
return  theWrappedObject->validator();
}

void PythonQtWrapper_QComboBox::setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate)
{
 theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QComboBox::setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit)
{
 theWrappedObject->setLineEdit(edit);
}

void PythonQtWrapper_QComboBox::setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView)
{
 theWrappedObject->setView(itemView);
}

void PythonQtWrapper_QComboBox::removeItem(QComboBox* theWrappedObject, int  index)
{
 theWrappedObject->removeItem(index);
}

QModelIndex  PythonQtWrapper_QComboBox::rootModelIndex(QComboBox* theWrappedObject) const
{
return  theWrappedObject->rootModelIndex();
}

void PythonQtWrapper_QComboBox::mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_mousePressEvent(e);
}

void PythonQtWrapper_QComboBox::addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData)
{
 theWrappedObject->addItem(icon, text, userData);
}

void PythonQtWrapper_QComboBox::hidePopup(QComboBox* theWrappedObject)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_hidePopup();
}

void PythonQtWrapper_QComboBox::setCompleter(QComboBox* theWrappedObject, QCompleter*  c)
{
 theWrappedObject->setCompleter(c);
}

void PythonQtWrapper_QComboBox::setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy)
{
 theWrappedObject->setSizeAdjustPolicy(policy);
}

void PythonQtWrapper_QComboBox::changeEvent(QComboBox* theWrappedObject, QEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_changeEvent(e);
}

QIcon  PythonQtWrapper_QComboBox::itemIcon(QComboBox* theWrappedObject, int  index) const
{
return  theWrappedObject->itemIcon(index);
}

void PythonQtWrapper_QComboBox::showEvent(QComboBox* theWrappedObject, QShowEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_showEvent(e);
}

void PythonQtWrapper_QComboBox::setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable)
{
 theWrappedObject->setDuplicatesEnabled(enable);
}

void PythonQtWrapper_QComboBox::resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_resizeEvent(e);
}

void PythonQtWrapper_QComboBox::setFrame(QComboBox* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setFrame(arg__1);
}

QComboBox::InsertPolicy  PythonQtWrapper_QComboBox::insertPolicy(QComboBox* theWrappedObject) const
{
return  theWrappedObject->insertPolicy();
}

QSize  PythonQtWrapper_QComboBox::minimumSizeHint(QComboBox* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

int  PythonQtWrapper_QComboBox::modelColumn(QComboBox* theWrappedObject) const
{
return  theWrappedObject->modelColumn();
}

bool  PythonQtWrapper_QComboBox::event(QComboBox* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_event(event);
}

void PythonQtWrapper_QComboBox::contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e)
{
 ((PythonQtPublicPromoter_QComboBox*)theWrappedObject)->promoted_contextMenuEvent(e);
}

void PythonQtWrapper_QComboBox::insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData)
{
 theWrappedObject->insertItem(index, text, userData);
}

void PythonQtWrapper_QComboBox::insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData)
{
 theWrappedObject->insertItem(index, icon, text, userData);
}

