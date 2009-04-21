#include "PythonQtWrapper_QDateTimeEdit.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
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

void PythonQtShell_QDateTimeEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "actionEvent(QDateTimeEdit*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::actionEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "changeEvent(QDateTimeEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::changeEvent(event);
}
void PythonQtShell_QDateTimeEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "childEvent(QDateTimeEdit*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::childEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "clear(QDateTimeEdit*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::clear();
}
void PythonQtShell_QDateTimeEdit::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "closeEvent(QDateTimeEdit*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::closeEvent(event);
}
void PythonQtShell_QDateTimeEdit::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "contextMenuEvent(QDateTimeEdit*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::contextMenuEvent(event);
}
void PythonQtShell_QDateTimeEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "customEvent(QDateTimeEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::customEvent(arg__1);
}
QDateTime  PythonQtShell_QDateTimeEdit::dateTimeFromText(const QString&  text) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dateTimeFromText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "dateTimeFromText(QDateTimeEdit*,const QString& )");
      QDateTime  returnValue;
    void* args[2] = {NULL, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QDateTime *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QDateTimeEdit::dateTimeFromText(text);
}
int  PythonQtShell_QDateTimeEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "devType(QDateTimeEdit*)");
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
  return QDateTimeEdit::devType();
}
void PythonQtShell_QDateTimeEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "dragEnterEvent(QDateTimeEdit*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "dragLeaveEvent(QDateTimeEdit*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::dragLeaveEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "dragMoveEvent(QDateTimeEdit*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::dragMoveEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "dropEvent(QDateTimeEdit*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::dropEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "enterEvent(QDateTimeEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QDateTimeEdit::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "event(QDateTimeEdit*,QEvent* )");
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
  return QDateTimeEdit::event(event);
}
bool  PythonQtShell_QDateTimeEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "eventFilter(QDateTimeEdit*,QObject* ,QEvent* )");
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
  return QDateTimeEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QDateTimeEdit::fixup(QString&  input) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fixup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "fixup(QDateTimeEdit*,QString& )");
    void* args[2] = {NULL, (void*)&input};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::fixup(input);
}
void PythonQtShell_QDateTimeEdit::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "focusInEvent(QDateTimeEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::focusInEvent(event);
}
bool  PythonQtShell_QDateTimeEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "focusNextPrevChild(QDateTimeEdit*,bool )");
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
  return QDateTimeEdit::focusNextPrevChild(next);
}
void PythonQtShell_QDateTimeEdit::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "focusOutEvent(QDateTimeEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::focusOutEvent(event);
}
int  PythonQtShell_QDateTimeEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "heightForWidth(QDateTimeEdit*,int )");
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
  return QDateTimeEdit::heightForWidth(arg__1);
}
void PythonQtShell_QDateTimeEdit::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "hideEvent(QDateTimeEdit*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::hideEvent(event);
}
void PythonQtShell_QDateTimeEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "inputMethodEvent(QDateTimeEdit*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QDateTimeEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "inputMethodQuery(QDateTimeEdit*,Qt::InputMethodQuery )");
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
  return QDateTimeEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QDateTimeEdit::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "keyPressEvent(QDateTimeEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::keyPressEvent(event);
}
void PythonQtShell_QDateTimeEdit::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "keyReleaseEvent(QDateTimeEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::keyReleaseEvent(event);
}
void PythonQtShell_QDateTimeEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "languageChange(QDateTimeEdit*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::languageChange();
}
void PythonQtShell_QDateTimeEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "leaveEvent(QDateTimeEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::leaveEvent(arg__1);
}
int  PythonQtShell_QDateTimeEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "metric(QDateTimeEdit*,QPaintDevice::PaintDeviceMetric )");
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
  return QDateTimeEdit::metric(arg__1);
}
void PythonQtShell_QDateTimeEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "mouseDoubleClickEvent(QDateTimeEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QDateTimeEdit::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "mouseMoveEvent(QDateTimeEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::mouseMoveEvent(event);
}
void PythonQtShell_QDateTimeEdit::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "mousePressEvent(QDateTimeEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::mousePressEvent(event);
}
void PythonQtShell_QDateTimeEdit::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "mouseReleaseEvent(QDateTimeEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::mouseReleaseEvent(event);
}
void PythonQtShell_QDateTimeEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "moveEvent(QDateTimeEdit*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QDateTimeEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "paintEngine(QDateTimeEdit*)");
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
  return QDateTimeEdit::paintEngine();
}
void PythonQtShell_QDateTimeEdit::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "paintEvent(QDateTimeEdit*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::paintEvent(event);
}
void PythonQtShell_QDateTimeEdit::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "resizeEvent(QDateTimeEdit*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::resizeEvent(event);
}
void PythonQtShell_QDateTimeEdit::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "showEvent(QDateTimeEdit*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::showEvent(event);
}
void PythonQtShell_QDateTimeEdit::stepBy(int  steps)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "stepBy(QDateTimeEdit*,int )");
    void* args[2] = {NULL, (void*)&steps};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::stepBy(steps);
}
QAbstractSpinBox::StepEnabled  PythonQtShell_QDateTimeEdit::stepEnabled() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepEnabled");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "stepEnabled(QDateTimeEdit*)");
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
  return QDateTimeEdit::stepEnabled();
}
void PythonQtShell_QDateTimeEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "tabletEvent(QDateTimeEdit*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::tabletEvent(arg__1);
}
QString  PythonQtShell_QDateTimeEdit::textFromDateTime(const QDateTime&  dt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "textFromDateTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "textFromDateTime(QDateTimeEdit*,const QDateTime& )");
      QString  returnValue;
    void* args[2] = {NULL, (void*)&dt};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QDateTimeEdit::textFromDateTime(dt);
}
void PythonQtShell_QDateTimeEdit::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "timerEvent(QDateTimeEdit*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::timerEvent(event);
}
QValidator::State  PythonQtShell_QDateTimeEdit::validate(QString&  input, int&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "validate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "validate(QDateTimeEdit*,QString& ,int& )");
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
  return QDateTimeEdit::validate(input, pos);
}
void PythonQtShell_QDateTimeEdit::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDateTimeEdit::staticMetaObject,
      "wheelEvent(QDateTimeEdit*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDateTimeEdit::wheelEvent(event);
}
QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(QWidget*  parent)
{ 
return new PythonQtShell_QDateTimeEdit(parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QDate&  d, QWidget*  parent)
{ 
return new PythonQtShell_QDateTimeEdit(d, parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent)
{ 
return new PythonQtShell_QDateTimeEdit(dt, parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QTime&  t, QWidget*  parent)
{ 
return new PythonQtShell_QDateTimeEdit(t, parent); }

void PythonQtWrapper_QDateTimeEdit::clearMaximumDateTime(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMaximumDateTime();
}

void PythonQtWrapper_QDateTimeEdit::wheelEvent(QDateTimeEdit* theWrappedObject, QWheelEvent*  event)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_wheelEvent(event);
}

QDateTime  PythonQtWrapper_QDateTimeEdit::maximumDateTime(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->maximumDateTime();
}

bool  PythonQtWrapper_QDateTimeEdit::calendarPopup(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->calendarPopup();
}

void PythonQtWrapper_QDateTimeEdit::focusInEvent(QDateTimeEdit* theWrappedObject, QFocusEvent*  event)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_focusInEvent(event);
}

void PythonQtWrapper_QDateTimeEdit::clearMaximumDate(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMaximumDate();
}

QDate  PythonQtWrapper_QDateTimeEdit::maximumDate(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->maximumDate();
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumDateTime(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMinimumDateTime();
}

QTime  PythonQtWrapper_QDateTimeEdit::time(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->time();
}

QDateTime  PythonQtWrapper_QDateTimeEdit::dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_dateTimeFromText(text);
}

void PythonQtWrapper_QDateTimeEdit::setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format)
{
 theWrappedObject->setDisplayFormat(format);
}

void PythonQtWrapper_QDateTimeEdit::setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section)
{
 theWrappedObject->setSelectedSection(section);
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumDate(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMinimumDate();
}

void PythonQtWrapper_QDateTimeEdit::setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max)
{
 theWrappedObject->setMaximumTime(max);
}

void PythonQtWrapper_QDateTimeEdit::setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max)
{
 theWrappedObject->setTimeRange(min, max);
}

int  PythonQtWrapper_QDateTimeEdit::sectionCount(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->sectionCount();
}

void PythonQtWrapper_QDateTimeEdit::setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt)
{
 theWrappedObject->setMinimumDateTime(dt);
}

int  PythonQtWrapper_QDateTimeEdit::currentSectionIndex(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->currentSectionIndex();
}

QTime  PythonQtWrapper_QDateTimeEdit::maximumTime(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->maximumTime();
}

void PythonQtWrapper_QDateTimeEdit::setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max)
{
 theWrappedObject->setMaximumDate(max);
}

void PythonQtWrapper_QDateTimeEdit::setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min)
{
 theWrappedObject->setMinimumTime(min);
}

void PythonQtWrapper_QDateTimeEdit::stepBy(QDateTimeEdit* theWrappedObject, int  steps)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_stepBy(steps);
}

bool  PythonQtWrapper_QDateTimeEdit::event(QDateTimeEdit* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_event(event);
}

void PythonQtWrapper_QDateTimeEdit::setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index)
{
 theWrappedObject->setCurrentSectionIndex(index);
}

bool  PythonQtWrapper_QDateTimeEdit::focusNextPrevChild(QDateTimeEdit* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

void PythonQtWrapper_QDateTimeEdit::paintEvent(QDateTimeEdit* theWrappedObject, QPaintEvent*  event)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_paintEvent(event);
}

void PythonQtWrapper_QDateTimeEdit::setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section)
{
 theWrappedObject->setCurrentSection(section);
}

void PythonQtWrapper_QDateTimeEdit::setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min)
{
 theWrappedObject->setMinimumDate(min);
}

QValidator::State  PythonQtWrapper_QDateTimeEdit::validate(QDateTimeEdit* theWrappedObject, QString&  input, int&  pos) const
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_validate(input, pos);
}

QDate  PythonQtWrapper_QDateTimeEdit::minimumDate(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->minimumDate();
}

QCalendarWidget*  PythonQtWrapper_QDateTimeEdit::calendarWidget(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->calendarWidget();
}

void PythonQtWrapper_QDateTimeEdit::setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget)
{
 theWrappedObject->setCalendarWidget(calendarWidget);
}

QAbstractSpinBox::StepEnabled  PythonQtWrapper_QDateTimeEdit::stepEnabled(QDateTimeEdit* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_stepEnabled();
}

QDateTimeEdit::Sections  PythonQtWrapper_QDateTimeEdit::displayedSections(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->displayedSections();
}

QString  PythonQtWrapper_QDateTimeEdit::textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const
{
return  ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_textFromDateTime(dt);
}

QDateTimeEdit::Section  PythonQtWrapper_QDateTimeEdit::currentSection(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->currentSection();
}

QString  PythonQtWrapper_QDateTimeEdit::displayFormat(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->displayFormat();
}

QDateTime  PythonQtWrapper_QDateTimeEdit::minimumDateTime(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->minimumDateTime();
}

void PythonQtWrapper_QDateTimeEdit::fixup(QDateTimeEdit* theWrappedObject, QString&  input) const
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_fixup(input);
}

QString  PythonQtWrapper_QDateTimeEdit::sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const
{
return  theWrappedObject->sectionText(section);
}

void PythonQtWrapper_QDateTimeEdit::clear(QDateTimeEdit* theWrappedObject)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_clear();
}

void PythonQtWrapper_QDateTimeEdit::setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max)
{
 theWrappedObject->setDateTimeRange(min, max);
}

Qt::TimeSpec  PythonQtWrapper_QDateTimeEdit::timeSpec(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->timeSpec();
}

void PythonQtWrapper_QDateTimeEdit::setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec)
{
 theWrappedObject->setTimeSpec(spec);
}

void PythonQtWrapper_QDateTimeEdit::clearMaximumTime(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMaximumTime();
}

void PythonQtWrapper_QDateTimeEdit::setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable)
{
 theWrappedObject->setCalendarPopup(enable);
}

QTime  PythonQtWrapper_QDateTimeEdit::minimumTime(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->minimumTime();
}

QSize  PythonQtWrapper_QDateTimeEdit::sizeHint(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

void PythonQtWrapper_QDateTimeEdit::keyPressEvent(QDateTimeEdit* theWrappedObject, QKeyEvent*  event)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_keyPressEvent(event);
}

QDate  PythonQtWrapper_QDateTimeEdit::date(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->date();
}

void PythonQtWrapper_QDateTimeEdit::setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max)
{
 theWrappedObject->setDateRange(min, max);
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumTime(QDateTimeEdit* theWrappedObject)
{
 theWrappedObject->clearMinimumTime();
}

void PythonQtWrapper_QDateTimeEdit::setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt)
{
 theWrappedObject->setMaximumDateTime(dt);
}

QDateTime  PythonQtWrapper_QDateTimeEdit::dateTime(QDateTimeEdit* theWrappedObject) const
{
return  theWrappedObject->dateTime();
}

QDateTimeEdit::Section  PythonQtWrapper_QDateTimeEdit::sectionAt(QDateTimeEdit* theWrappedObject, int  index) const
{
return  theWrappedObject->sectionAt(index);
}

void PythonQtWrapper_QDateTimeEdit::mousePressEvent(QDateTimeEdit* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QDateTimeEdit*)theWrappedObject)->promoted_mousePressEvent(event);
}

