#include "PythonQtWrapper_QAbstractSpinBox.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractspinbox.h>
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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtShell_QAbstractSpinBox::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "actionEvent(QAbstractSpinBox*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::actionEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "changeEvent(QAbstractSpinBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::changeEvent(event);
}
void PythonQtShell_QAbstractSpinBox::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "childEvent(QAbstractSpinBox*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::childEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "clear(QAbstractSpinBox*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::clear();
}
void PythonQtShell_QAbstractSpinBox::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "closeEvent(QAbstractSpinBox*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::closeEvent(event);
}
void PythonQtShell_QAbstractSpinBox::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "contextMenuEvent(QAbstractSpinBox*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::contextMenuEvent(event);
}
void PythonQtShell_QAbstractSpinBox::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "customEvent(QAbstractSpinBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::customEvent(arg__1);
}
int  PythonQtShell_QAbstractSpinBox::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "devType(QAbstractSpinBox*)");
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
  return QAbstractSpinBox::devType();
}
void PythonQtShell_QAbstractSpinBox::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "dragEnterEvent(QAbstractSpinBox*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "dragLeaveEvent(QAbstractSpinBox*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "dragMoveEvent(QAbstractSpinBox*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "dropEvent(QAbstractSpinBox*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::dropEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "enterEvent(QAbstractSpinBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::enterEvent(arg__1);
}
bool  PythonQtShell_QAbstractSpinBox::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "event(QAbstractSpinBox*,QEvent* )");
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
  return QAbstractSpinBox::event(event);
}
bool  PythonQtShell_QAbstractSpinBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "eventFilter(QAbstractSpinBox*,QObject* ,QEvent* )");
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
  return QAbstractSpinBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractSpinBox::fixup(QString&  input) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fixup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "fixup(QAbstractSpinBox*,QString& )");
    void* args[2] = {NULL, (void*)&input};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::fixup(input);
}
void PythonQtShell_QAbstractSpinBox::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "focusInEvent(QAbstractSpinBox*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::focusInEvent(event);
}
bool  PythonQtShell_QAbstractSpinBox::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "focusNextPrevChild(QAbstractSpinBox*,bool )");
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
  return QAbstractSpinBox::focusNextPrevChild(next);
}
void PythonQtShell_QAbstractSpinBox::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "focusOutEvent(QAbstractSpinBox*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::focusOutEvent(event);
}
int  PythonQtShell_QAbstractSpinBox::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "heightForWidth(QAbstractSpinBox*,int )");
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
  return QAbstractSpinBox::heightForWidth(arg__1);
}
void PythonQtShell_QAbstractSpinBox::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "hideEvent(QAbstractSpinBox*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::hideEvent(event);
}
void PythonQtShell_QAbstractSpinBox::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "inputMethodEvent(QAbstractSpinBox*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QAbstractSpinBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "inputMethodQuery(QAbstractSpinBox*,Qt::InputMethodQuery )");
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
  return QAbstractSpinBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QAbstractSpinBox::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "keyPressEvent(QAbstractSpinBox*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::keyPressEvent(event);
}
void PythonQtShell_QAbstractSpinBox::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "keyReleaseEvent(QAbstractSpinBox*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::keyReleaseEvent(event);
}
void PythonQtShell_QAbstractSpinBox::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "languageChange(QAbstractSpinBox*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::languageChange();
}
void PythonQtShell_QAbstractSpinBox::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "leaveEvent(QAbstractSpinBox*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::leaveEvent(arg__1);
}
int  PythonQtShell_QAbstractSpinBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "metric(QAbstractSpinBox*,QPaintDevice::PaintDeviceMetric )");
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
  return QAbstractSpinBox::metric(arg__1);
}
void PythonQtShell_QAbstractSpinBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "mouseDoubleClickEvent(QAbstractSpinBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "mouseMoveEvent(QAbstractSpinBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::mouseMoveEvent(event);
}
void PythonQtShell_QAbstractSpinBox::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "mousePressEvent(QAbstractSpinBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::mousePressEvent(event);
}
void PythonQtShell_QAbstractSpinBox::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "mouseReleaseEvent(QAbstractSpinBox*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::mouseReleaseEvent(event);
}
void PythonQtShell_QAbstractSpinBox::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "moveEvent(QAbstractSpinBox*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QAbstractSpinBox::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "paintEngine(QAbstractSpinBox*)");
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
  return QAbstractSpinBox::paintEngine();
}
void PythonQtShell_QAbstractSpinBox::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "paintEvent(QAbstractSpinBox*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::paintEvent(event);
}
void PythonQtShell_QAbstractSpinBox::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "resizeEvent(QAbstractSpinBox*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::resizeEvent(event);
}
void PythonQtShell_QAbstractSpinBox::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "showEvent(QAbstractSpinBox*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::showEvent(event);
}
void PythonQtShell_QAbstractSpinBox::stepBy(int  steps)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "stepBy(QAbstractSpinBox*,int )");
    void* args[2] = {NULL, (void*)&steps};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::stepBy(steps);
}
QAbstractSpinBox::StepEnabled  PythonQtShell_QAbstractSpinBox::stepEnabled() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepEnabled");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "stepEnabled(QAbstractSpinBox*)");
      QAbstractSpinBox::StepEnabled  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QAbstractSpinBox::StepEnabled *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAbstractSpinBox::stepEnabled();
}
void PythonQtShell_QAbstractSpinBox::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "tabletEvent(QAbstractSpinBox*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::tabletEvent(arg__1);
}
void PythonQtShell_QAbstractSpinBox::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "timerEvent(QAbstractSpinBox*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::timerEvent(event);
}
QValidator::State  PythonQtShell_QAbstractSpinBox::validate(QString&  input, int&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "validate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "validate(QAbstractSpinBox*,QString& ,int& )");
      QValidator::State  returnValue;
    void* args[3] = {NULL, (void*)&input, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QValidator::State *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QAbstractSpinBox::validate(input, pos);
}
void PythonQtShell_QAbstractSpinBox::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractSpinBox::staticMetaObject,
      "wheelEvent(QAbstractSpinBox*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSpinBox::wheelEvent(event);
}
QAbstractSpinBox* PythonQtWrapper_QAbstractSpinBox::new_QAbstractSpinBox(QWidget*  parent)
{ 
return new PythonQtShell_QAbstractSpinBox(parent); }

bool  PythonQtWrapper_QAbstractSpinBox::wrapping(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->wrapping();
}

void PythonQtWrapper_QAbstractSpinBox::setFrame(QAbstractSpinBox* theWrappedObject, bool  arg__1)
{
 theWrappedObject->setFrame(arg__1);
}

void PythonQtWrapper_QAbstractSpinBox::interpretText(QAbstractSpinBox* theWrappedObject)
{
 theWrappedObject->interpretText();
}

QValidator::State  PythonQtWrapper_QAbstractSpinBox::validate(QAbstractSpinBox* theWrappedObject, QString&  input, int&  pos) const
{
return  ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_validate(input, pos);
}

void PythonQtWrapper_QAbstractSpinBox::setKeyboardTracking(QAbstractSpinBox* theWrappedObject, bool  kt)
{
 theWrappedObject->setKeyboardTracking(kt);
}

void PythonQtWrapper_QAbstractSpinBox::keyReleaseEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_keyReleaseEvent(event);
}

Qt::Alignment  PythonQtWrapper_QAbstractSpinBox::alignment(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->alignment();
}

void PythonQtWrapper_QAbstractSpinBox::setReadOnly(QAbstractSpinBox* theWrappedObject, bool  r)
{
 theWrappedObject->setReadOnly(r);
}

void PythonQtWrapper_QAbstractSpinBox::hideEvent(QAbstractSpinBox* theWrappedObject, QHideEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_hideEvent(event);
}

bool  PythonQtWrapper_QAbstractSpinBox::keyboardTracking(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->keyboardTracking();
}

void PythonQtWrapper_QAbstractSpinBox::paintEvent(QAbstractSpinBox* theWrappedObject, QPaintEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_paintEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::resizeEvent(QAbstractSpinBox* theWrappedObject, QResizeEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_resizeEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::setSpecialValueText(QAbstractSpinBox* theWrappedObject, const QString&  txt)
{
 theWrappedObject->setSpecialValueText(txt);
}

void PythonQtWrapper_QAbstractSpinBox::setAlignment(QAbstractSpinBox* theWrappedObject, Qt::Alignment  flag)
{
 theWrappedObject->setAlignment(flag);
}

QSize  PythonQtWrapper_QAbstractSpinBox::minimumSizeHint(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QAbstractSpinBox::timerEvent(QAbstractSpinBox* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_timerEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::focusOutEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_focusOutEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::focusInEvent(QAbstractSpinBox* theWrappedObject, QFocusEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_focusInEvent(event);
}

QString  PythonQtWrapper_QAbstractSpinBox::text(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->text();
}

QString  PythonQtWrapper_QAbstractSpinBox::specialValueText(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->specialValueText();
}

void PythonQtWrapper_QAbstractSpinBox::fixup(QAbstractSpinBox* theWrappedObject, QString&  input) const
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_fixup(input);
}

void PythonQtWrapper_QAbstractSpinBox::setAccelerated(QAbstractSpinBox* theWrappedObject, bool  on)
{
 theWrappedObject->setAccelerated(on);
}

void PythonQtWrapper_QAbstractSpinBox::mouseReleaseEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_mouseReleaseEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::contextMenuEvent(QAbstractSpinBox* theWrappedObject, QContextMenuEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_contextMenuEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::setWrapping(QAbstractSpinBox* theWrappedObject, bool  w)
{
 theWrappedObject->setWrapping(w);
}

void PythonQtWrapper_QAbstractSpinBox::mouseMoveEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_mouseMoveEvent(event);
}

QSize  PythonQtWrapper_QAbstractSpinBox::sizeHint(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

void PythonQtWrapper_QAbstractSpinBox::showEvent(QAbstractSpinBox* theWrappedObject, QShowEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_showEvent(event);
}

bool  PythonQtWrapper_QAbstractSpinBox::isAccelerated(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->isAccelerated();
}

void PythonQtWrapper_QAbstractSpinBox::stepBy(QAbstractSpinBox* theWrappedObject, int  steps)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_stepBy(steps);
}

void PythonQtWrapper_QAbstractSpinBox::wheelEvent(QAbstractSpinBox* theWrappedObject, QWheelEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_wheelEvent(event);
}

QAbstractSpinBox::StepEnabled  PythonQtWrapper_QAbstractSpinBox::stepEnabled(QAbstractSpinBox* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_stepEnabled();
}

void PythonQtWrapper_QAbstractSpinBox::keyPressEvent(QAbstractSpinBox* theWrappedObject, QKeyEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_keyPressEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::closeEvent(QAbstractSpinBox* theWrappedObject, QCloseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_closeEvent(event);
}

void PythonQtWrapper_QAbstractSpinBox::setCorrectionMode(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::CorrectionMode  cm)
{
 theWrappedObject->setCorrectionMode(cm);
}

void PythonQtWrapper_QAbstractSpinBox::setButtonSymbols(QAbstractSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  bs)
{
 theWrappedObject->setButtonSymbols(bs);
}

void PythonQtWrapper_QAbstractSpinBox::changeEvent(QAbstractSpinBox* theWrappedObject, QEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_changeEvent(event);
}

bool  PythonQtWrapper_QAbstractSpinBox::hasAcceptableInput(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->hasAcceptableInput();
}

bool  PythonQtWrapper_QAbstractSpinBox::isReadOnly(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->isReadOnly();
}

QAbstractSpinBox::ButtonSymbols  PythonQtWrapper_QAbstractSpinBox::buttonSymbols(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->buttonSymbols();
}

bool  PythonQtWrapper_QAbstractSpinBox::event(QAbstractSpinBox* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_event(event);
}

void PythonQtWrapper_QAbstractSpinBox::mousePressEvent(QAbstractSpinBox* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractSpinBox*)theWrappedObject)->promoted_mousePressEvent(event);
}

QAbstractSpinBox::CorrectionMode  PythonQtWrapper_QAbstractSpinBox::correctionMode(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->correctionMode();
}

bool  PythonQtWrapper_QAbstractSpinBox::hasFrame(QAbstractSpinBox* theWrappedObject) const
{
return  theWrappedObject->hasFrame();
}

