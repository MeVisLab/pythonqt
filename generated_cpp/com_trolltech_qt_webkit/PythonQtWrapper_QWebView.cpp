#include "PythonQtWrapper_QWebView.h"

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
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qurl.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>

void PythonQtShell_QWebView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "actionEvent(QWebView*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::actionEvent(arg__1);
}
void PythonQtShell_QWebView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "changeEvent(QWebView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::changeEvent(arg__1);
}
void PythonQtShell_QWebView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "childEvent(QWebView*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::childEvent(arg__1);
}
void PythonQtShell_QWebView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "closeEvent(QWebView*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::closeEvent(arg__1);
}
void PythonQtShell_QWebView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "contextMenuEvent(QWebView*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::contextMenuEvent(arg__1);
}
QWebView*  PythonQtShell_QWebView::createWindow(QWebPage::WebWindowType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createWindow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "createWindow(QWebView*,QWebPage::WebWindowType )");
      QWebView*  returnValue;
    void* args[2] = {NULL, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QWebView* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QWebView::createWindow(type);
}
void PythonQtShell_QWebView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "customEvent(QWebView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::customEvent(arg__1);
}
int  PythonQtShell_QWebView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "devType(QWebView*)");
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
  return QWebView::devType();
}
void PythonQtShell_QWebView::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "dragEnterEvent(QWebView*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragEnterEvent(arg__1);
}
void PythonQtShell_QWebView::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "dragLeaveEvent(QWebView*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragLeaveEvent(arg__1);
}
void PythonQtShell_QWebView::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "dragMoveEvent(QWebView*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dragMoveEvent(arg__1);
}
void PythonQtShell_QWebView::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "dropEvent(QWebView*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::dropEvent(arg__1);
}
void PythonQtShell_QWebView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "enterEvent(QWebView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::enterEvent(arg__1);
}
bool  PythonQtShell_QWebView::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "event(QWebView*,QEvent* )");
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
  return QWebView::event(arg__1);
}
bool  PythonQtShell_QWebView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "eventFilter(QWebView*,QObject* ,QEvent* )");
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
  return QWebView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QWebView::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "focusInEvent(QWebView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::focusInEvent(arg__1);
}
bool  PythonQtShell_QWebView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "focusNextPrevChild(QWebView*,bool )");
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
  return QWebView::focusNextPrevChild(next);
}
void PythonQtShell_QWebView::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "focusOutEvent(QWebView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::focusOutEvent(arg__1);
}
int  PythonQtShell_QWebView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "heightForWidth(QWebView*,int )");
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
  return QWebView::heightForWidth(arg__1);
}
void PythonQtShell_QWebView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "hideEvent(QWebView*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::hideEvent(arg__1);
}
void PythonQtShell_QWebView::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "inputMethodEvent(QWebView*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QWebView::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "inputMethodQuery(QWebView*,Qt::InputMethodQuery )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&property};
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
  return QWebView::inputMethodQuery(property);
}
void PythonQtShell_QWebView::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "keyPressEvent(QWebView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::keyPressEvent(arg__1);
}
void PythonQtShell_QWebView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "keyReleaseEvent(QWebView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "languageChange(QWebView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::languageChange();
}
void PythonQtShell_QWebView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "leaveEvent(QWebView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::leaveEvent(arg__1);
}
int  PythonQtShell_QWebView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "metric(QWebView*,QPaintDevice::PaintDeviceMetric )");
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
  return QWebView::metric(arg__1);
}
QSize  PythonQtShell_QWebView::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "getMinimumSizeHint(QWebView*)");
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
  return QWebView::minimumSizeHint();
}
void PythonQtShell_QWebView::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "mouseDoubleClickEvent(QWebView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QWebView::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "mouseMoveEvent(QWebView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseMoveEvent(arg__1);
}
void PythonQtShell_QWebView::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "mousePressEvent(QWebView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mousePressEvent(arg__1);
}
void PythonQtShell_QWebView::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "mouseReleaseEvent(QWebView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QWebView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "moveEvent(QWebView*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QWebView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "paintEngine(QWebView*)");
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
  return QWebView::paintEngine();
}
void PythonQtShell_QWebView::paintEvent(QPaintEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "paintEvent(QWebView*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::paintEvent(ev);
}
void PythonQtShell_QWebView::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "resizeEvent(QWebView*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::resizeEvent(e);
}
void PythonQtShell_QWebView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "showEvent(QWebView*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::showEvent(arg__1);
}
void PythonQtShell_QWebView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "tabletEvent(QWebView*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::tabletEvent(arg__1);
}
void PythonQtShell_QWebView::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "timerEvent(QWebView*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::timerEvent(arg__1);
}
void PythonQtShell_QWebView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QWebView::staticMetaObject,
      "wheelEvent(QWebView*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QWebView::wheelEvent(arg__1);
}
QWebView* PythonQtWrapper_QWebView::new_QWebView(QWidget*  parent)
{ 
return new PythonQtShell_QWebView(parent); }

void PythonQtWrapper_QWebView::dropEvent(QWebView* theWrappedObject, QDropEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dropEvent(arg__1);
}

QIcon  PythonQtWrapper_QWebView::icon(QWebView* theWrappedObject) const
{
return  theWrappedObject->icon();
}

void PythonQtWrapper_QWebView::setPage(QWebView* theWrappedObject, QWebPage*  page)
{
 theWrappedObject->setPage(page);
}

void PythonQtWrapper_QWebView::paintEvent(QWebView* theWrappedObject, QPaintEvent*  ev)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_paintEvent(ev);
}

void PythonQtWrapper_QWebView::focusInEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusInEvent(arg__1);
}

QSize  PythonQtWrapper_QWebView::sizeHint(QWebView* theWrappedObject) const
{
return  theWrappedObject->sizeHint();
}

QAction*  PythonQtWrapper_QWebView::pageAction(QWebView* theWrappedObject, QWebPage::WebAction  action) const
{
return  theWrappedObject->pageAction(action);
}

void PythonQtWrapper_QWebView::mouseReleaseEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1);
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QNetworkRequest&  request, QNetworkAccessManager::Operation  operation, const QByteArray&  body)
{
 theWrappedObject->load(request, operation, body);
}

bool  PythonQtWrapper_QWebView::focusNextPrevChild(QWebView* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

void PythonQtWrapper_QWebView::contextMenuEvent(QWebView* theWrappedObject, QContextMenuEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_contextMenuEvent(arg__1);
}

void PythonQtWrapper_QWebView::mousePressEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mousePressEvent(arg__1);
}

void PythonQtWrapper_QWebView::setUrl(QWebView* theWrappedObject, const QUrl&  url)
{
 theWrappedObject->setUrl(url);
}

void PythonQtWrapper_QWebView::setTextSizeMultiplier(QWebView* theWrappedObject, qreal  factor)
{
 theWrappedObject->setTextSizeMultiplier(factor);
}

QVariant  PythonQtWrapper_QWebView::inputMethodQuery(QWebView* theWrappedObject, Qt::InputMethodQuery  property) const
{
return  ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodQuery(property);
}

QWebHistory*  PythonQtWrapper_QWebView::history(QWebView* theWrappedObject) const
{
return  theWrappedObject->history();
}

void PythonQtWrapper_QWebView::dragMoveEvent(QWebView* theWrappedObject, QDragMoveEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragMoveEvent(arg__1);
}

void PythonQtWrapper_QWebView::wheelEvent(QWebView* theWrappedObject, QWheelEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_wheelEvent(arg__1);
}

bool  PythonQtWrapper_QWebView::isModified(QWebView* theWrappedObject) const
{
return  theWrappedObject->isModified();
}

void PythonQtWrapper_QWebView::mouseMoveEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseMoveEvent(arg__1);
}

QWebSettings*  PythonQtWrapper_QWebView::settings(QWebView* theWrappedObject) const
{
return  theWrappedObject->settings();
}

qreal  PythonQtWrapper_QWebView::textSizeMultiplier(QWebView* theWrappedObject) const
{
return  theWrappedObject->textSizeMultiplier();
}

void PythonQtWrapper_QWebView::setContent(QWebView* theWrappedObject, const QByteArray&  data, const QString&  mimeType, const QUrl&  baseUrl)
{
 theWrappedObject->setContent(data, mimeType, baseUrl);
}

void PythonQtWrapper_QWebView::dragLeaveEvent(QWebView* theWrappedObject, QDragLeaveEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragLeaveEvent(arg__1);
}

bool  PythonQtWrapper_QWebView::event(QWebView* theWrappedObject, QEvent*  arg__1)
{
return  ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_event(arg__1);
}

void PythonQtWrapper_QWebView::triggerPageAction(QWebView* theWrappedObject, QWebPage::WebAction  action, bool  checked)
{
 theWrappedObject->triggerPageAction(action, checked);
}

void PythonQtWrapper_QWebView::changeEvent(QWebView* theWrappedObject, QEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_changeEvent(arg__1);
}

void PythonQtWrapper_QWebView::setHtml(QWebView* theWrappedObject, const QString&  html, const QUrl&  baseUrl)
{
 theWrappedObject->setHtml(html, baseUrl);
}

QWebPage*  PythonQtWrapper_QWebView::page(QWebView* theWrappedObject) const
{
return  theWrappedObject->page();
}

void PythonQtWrapper_QWebView::load(QWebView* theWrappedObject, const QUrl&  url)
{
 theWrappedObject->load(url);
}

QWebView*  PythonQtWrapper_QWebView::createWindow(QWebView* theWrappedObject, QWebPage::WebWindowType  type)
{
return  ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_createWindow(type);
}

void PythonQtWrapper_QWebView::keyPressEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyPressEvent(arg__1);
}

void PythonQtWrapper_QWebView::resizeEvent(QWebView* theWrappedObject, QResizeEvent*  e)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_resizeEvent(e);
}

void PythonQtWrapper_QWebView::mouseDoubleClickEvent(QWebView* theWrappedObject, QMouseEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_mouseDoubleClickEvent(arg__1);
}

void PythonQtWrapper_QWebView::dragEnterEvent(QWebView* theWrappedObject, QDragEnterEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_dragEnterEvent(arg__1);
}

bool  PythonQtWrapper_QWebView::findText(QWebView* theWrappedObject, const QString&  subString, QWebPage::FindFlags  options)
{
return  theWrappedObject->findText(subString, options);
}

QString  PythonQtWrapper_QWebView::selectedText(QWebView* theWrappedObject) const
{
return  theWrappedObject->selectedText();
}

void PythonQtWrapper_QWebView::inputMethodEvent(QWebView* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

void PythonQtWrapper_QWebView::keyReleaseEvent(QWebView* theWrappedObject, QKeyEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_keyReleaseEvent(arg__1);
}

QUrl  PythonQtWrapper_QWebView::url(QWebView* theWrappedObject) const
{
return  theWrappedObject->url();
}

void PythonQtWrapper_QWebView::focusOutEvent(QWebView* theWrappedObject, QFocusEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QWebView*)theWrappedObject)->promoted_focusOutEvent(arg__1);
}

QString  PythonQtWrapper_QWebView::title(QWebView* theWrappedObject) const
{
return  theWrappedObject->title();
}

