#include "PythonQtWrapper_QPlainTextEdit.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QAbstractTextDocumentLayout>
#include <QTextEdit>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qwidget.h>

void PythonQtShell_QPlainTextEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "actionEvent(QPlainTextEdit*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::canInsertFromMimeData(const QMimeData*  source) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canInsertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "canInsertFromMimeData(QPlainTextEdit*,const QMimeData* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&source};
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
  return QPlainTextEdit::canInsertFromMimeData(source);
}
void PythonQtShell_QPlainTextEdit::changeEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "changeEvent(QPlainTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::changeEvent(e);
}
void PythonQtShell_QPlainTextEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "childEvent(QPlainTextEdit*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::childEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "closeEvent(QPlainTextEdit*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::contextMenuEvent(QContextMenuEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "contextMenuEvent(QPlainTextEdit*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::contextMenuEvent(e);
}
QMimeData*  PythonQtShell_QPlainTextEdit::createMimeDataFromSelection() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createMimeDataFromSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "createMimeDataFromSelection(QPlainTextEdit*)");
      QMimeData*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QMimeData* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QPlainTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QPlainTextEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "customEvent(QPlainTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QPlainTextEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "devType(QPlainTextEdit*)");
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
  return QPlainTextEdit::devType();
}
void PythonQtShell_QPlainTextEdit::dragEnterEvent(QDragEnterEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "dragEnterEvent(QPlainTextEdit*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::dragEnterEvent(e);
}
void PythonQtShell_QPlainTextEdit::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "dragLeaveEvent(QPlainTextEdit*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::dragLeaveEvent(e);
}
void PythonQtShell_QPlainTextEdit::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "dragMoveEvent(QPlainTextEdit*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::dragMoveEvent(e);
}
void PythonQtShell_QPlainTextEdit::dropEvent(QDropEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "dropEvent(QPlainTextEdit*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::dropEvent(e);
}
void PythonQtShell_QPlainTextEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "enterEvent(QPlainTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QPlainTextEdit::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "event(QPlainTextEdit*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QPlainTextEdit::event(e);
}
bool  PythonQtShell_QPlainTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "eventFilter(QPlainTextEdit*,QObject* ,QEvent* )");
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
  return QPlainTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPlainTextEdit::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "focusInEvent(QPlainTextEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::focusInEvent(e);
}
bool  PythonQtShell_QPlainTextEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "focusNextPrevChild(QPlainTextEdit*,bool )");
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
  return QPlainTextEdit::focusNextPrevChild(next);
}
void PythonQtShell_QPlainTextEdit::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "focusOutEvent(QPlainTextEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::focusOutEvent(e);
}
int  PythonQtShell_QPlainTextEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "heightForWidth(QPlainTextEdit*,int )");
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
  return QPlainTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QPlainTextEdit::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "hideEvent(QPlainTextEdit*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "inputMethodEvent(QPlainTextEdit*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "inputMethodQuery(QPlainTextEdit*,Qt::InputMethodQuery )");
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
  return QPlainTextEdit::inputMethodQuery(property);
}
void PythonQtShell_QPlainTextEdit::insertFromMimeData(const QMimeData*  source)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "insertFromMimeData(QPlainTextEdit*,const QMimeData* )");
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::insertFromMimeData(source);
}
void PythonQtShell_QPlainTextEdit::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "keyPressEvent(QPlainTextEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::keyPressEvent(e);
}
void PythonQtShell_QPlainTextEdit::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "keyReleaseEvent(QPlainTextEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::keyReleaseEvent(e);
}
void PythonQtShell_QPlainTextEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "languageChange(QPlainTextEdit*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::languageChange();
}
void PythonQtShell_QPlainTextEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "leaveEvent(QPlainTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QPlainTextEdit::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "loadResource(QPlainTextEdit*,int ,const QUrl& )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&name};
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
  return QPlainTextEdit::loadResource(type, name);
}
int  PythonQtShell_QPlainTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "metric(QPlainTextEdit*,QPaintDevice::PaintDeviceMetric )");
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
  return QPlainTextEdit::metric(arg__1);
}
void PythonQtShell_QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "mouseDoubleClickEvent(QPlainTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::mouseDoubleClickEvent(e);
}
void PythonQtShell_QPlainTextEdit::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "mouseMoveEvent(QPlainTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::mouseMoveEvent(e);
}
void PythonQtShell_QPlainTextEdit::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "mousePressEvent(QPlainTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::mousePressEvent(e);
}
void PythonQtShell_QPlainTextEdit::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "mouseReleaseEvent(QPlainTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::mouseReleaseEvent(e);
}
void PythonQtShell_QPlainTextEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "moveEvent(QPlainTextEdit*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QPlainTextEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "paintEngine(QPlainTextEdit*)");
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
  return QPlainTextEdit::paintEngine();
}
void PythonQtShell_QPlainTextEdit::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "paintEvent(QPlainTextEdit*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::paintEvent(e);
}
void PythonQtShell_QPlainTextEdit::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "resizeEvent(QPlainTextEdit*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::resizeEvent(e);
}
void PythonQtShell_QPlainTextEdit::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "scrollContentsBy(QPlainTextEdit*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::scrollContentsBy(dx, dy);
}
void PythonQtShell_QPlainTextEdit::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "showEvent(QPlainTextEdit*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::showEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "tabletEvent(QPlainTextEdit*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::timerEvent(QTimerEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "timerEvent(QPlainTextEdit*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::timerEvent(e);
}
bool  PythonQtShell_QPlainTextEdit::viewportEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "viewportEvent(QPlainTextEdit*,QEvent* )");
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
  return QPlainTextEdit::viewportEvent(arg__1);
}
void PythonQtShell_QPlainTextEdit::wheelEvent(QWheelEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QPlainTextEdit::staticMetaObject,
      "wheelEvent(QPlainTextEdit*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QPlainTextEdit::wheelEvent(e);
}
QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(parent); }

QPlainTextEdit* PythonQtWrapper_QPlainTextEdit::new_QPlainTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QPlainTextEdit(text, parent); }

void PythonQtWrapper_QPlainTextEdit::keyReleaseEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e);
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::textCursor(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->textCursor();
}

void PythonQtWrapper_QPlainTextEdit::print(QPlainTextEdit* theWrappedObject, QPrinter*  printer) const
{
 theWrappedObject->print(printer);
}

void PythonQtWrapper_QPlainTextEdit::mergeCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
 theWrappedObject->mergeCurrentCharFormat(modifier);
}

void PythonQtWrapper_QPlainTextEdit::changeEvent(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_changeEvent(e);
}

QTextCursor  PythonQtWrapper_QPlainTextEdit::cursorForPosition(QPlainTextEdit* theWrappedObject, const QPoint&  pos) const
{
return  theWrappedObject->cursorForPosition(pos);
}

int  PythonQtWrapper_QPlainTextEdit::blockCount(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->blockCount();
}

bool  PythonQtWrapper_QPlainTextEdit::find(QPlainTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
return  theWrappedObject->find(exp, options);
}

QMimeData*  PythonQtWrapper_QPlainTextEdit::createMimeDataFromSelection(QPlainTextEdit* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection();
}

void PythonQtWrapper_QPlainTextEdit::setWordWrapMode(QPlainTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
 theWrappedObject->setWordWrapMode(policy);
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QPlainTextEdit::extraSelections(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->extraSelections();
}

int  PythonQtWrapper_QPlainTextEdit::tabStopWidth(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->tabStopWidth();
}

void PythonQtWrapper_QPlainTextEdit::setCenterOnScroll(QPlainTextEdit* theWrappedObject, bool  enabled)
{
 theWrappedObject->setCenterOnScroll(enabled);
}

void PythonQtWrapper_QPlainTextEdit::timerEvent(QPlainTextEdit* theWrappedObject, QTimerEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_timerEvent(e);
}

QVariant  PythonQtWrapper_QPlainTextEdit::loadResource(QPlainTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_loadResource(type, name);
}

void PythonQtWrapper_QPlainTextEdit::setBackgroundVisible(QPlainTextEdit* theWrappedObject, bool  visible)
{
 theWrappedObject->setBackgroundVisible(visible);
}

bool  PythonQtWrapper_QPlainTextEdit::isUndoRedoEnabled(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->isUndoRedoEnabled();
}

void PythonQtWrapper_QPlainTextEdit::focusOutEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusOutEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::resizeEvent(QPlainTextEdit* theWrappedObject, QResizeEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_resizeEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::showEvent(QPlainTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_showEvent(arg__1);
}

void PythonQtWrapper_QPlainTextEdit::dragEnterEvent(QPlainTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::contextMenuEvent(QPlainTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::dragMoveEvent(QPlainTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e);
}

bool  PythonQtWrapper_QPlainTextEdit::overwriteMode(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->overwriteMode();
}

bool  PythonQtWrapper_QPlainTextEdit::focusNextPrevChild(QPlainTextEdit* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

void PythonQtWrapper_QPlainTextEdit::wheelEvent(QPlainTextEdit* theWrappedObject, QWheelEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_wheelEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::setMaximumBlockCount(QPlainTextEdit* theWrappedObject, int  maximum)
{
 theWrappedObject->setMaximumBlockCount(maximum);
}

QPlainTextEdit::LineWrapMode  PythonQtWrapper_QPlainTextEdit::lineWrapMode(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->lineWrapMode();
}

QMenu*  PythonQtWrapper_QPlainTextEdit::createStandardContextMenu(QPlainTextEdit* theWrappedObject)
{
return  theWrappedObject->createStandardContextMenu();
}

bool  PythonQtWrapper_QPlainTextEdit::backgroundVisible(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->backgroundVisible();
}

void PythonQtWrapper_QPlainTextEdit::setCursorWidth(QPlainTextEdit* theWrappedObject, int  width)
{
 theWrappedObject->setCursorWidth(width);
}

QTextCharFormat  PythonQtWrapper_QPlainTextEdit::currentCharFormat(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->currentCharFormat();
}

void PythonQtWrapper_QPlainTextEdit::setUndoRedoEnabled(QPlainTextEdit* theWrappedObject, bool  enable)
{
 theWrappedObject->setUndoRedoEnabled(enable);
}

void PythonQtWrapper_QPlainTextEdit::setDocument(QPlainTextEdit* theWrappedObject, QTextDocument*  document)
{
 theWrappedObject->setDocument(document);
}

bool  PythonQtWrapper_QPlainTextEdit::canPaste(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->canPaste();
}

int  PythonQtWrapper_QPlainTextEdit::cursorWidth(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->cursorWidth();
}

void PythonQtWrapper_QPlainTextEdit::mouseMoveEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::scrollContentsBy(QPlainTextEdit* theWrappedObject, int  dx, int  dy)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy);
}

bool  PythonQtWrapper_QPlainTextEdit::centerOnScroll(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->centerOnScroll();
}

void PythonQtWrapper_QPlainTextEdit::setOverwriteMode(QPlainTextEdit* theWrappedObject, bool  overwrite)
{
 theWrappedObject->setOverwriteMode(overwrite);
}

Qt::TextInteractionFlags  PythonQtWrapper_QPlainTextEdit::textInteractionFlags(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->textInteractionFlags();
}

int  PythonQtWrapper_QPlainTextEdit::maximumBlockCount(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->maximumBlockCount();
}

void PythonQtWrapper_QPlainTextEdit::insertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source);
}

void PythonQtWrapper_QPlainTextEdit::setTextCursor(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
 theWrappedObject->setTextCursor(cursor);
}

void PythonQtWrapper_QPlainTextEdit::dragLeaveEvent(QPlainTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::mouseReleaseEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::moveCursor(QPlainTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
 theWrappedObject->moveCursor(operation, mode);
}

bool  PythonQtWrapper_QPlainTextEdit::event(QPlainTextEdit* theWrappedObject, QEvent*  e)
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_event(e);
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->cursorRect();
}

void PythonQtWrapper_QPlainTextEdit::dropEvent(QPlainTextEdit* theWrappedObject, QDropEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_dropEvent(e);
}

QTextDocument*  PythonQtWrapper_QPlainTextEdit::document(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->document();
}

void PythonQtWrapper_QPlainTextEdit::mousePressEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mousePressEvent(e);
}

bool  PythonQtWrapper_QPlainTextEdit::isReadOnly(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->isReadOnly();
}

void PythonQtWrapper_QPlainTextEdit::setTabChangesFocus(QPlainTextEdit* theWrappedObject, bool  b)
{
 theWrappedObject->setTabChangesFocus(b);
}

void PythonQtWrapper_QPlainTextEdit::setTabStopWidth(QPlainTextEdit* theWrappedObject, int  width)
{
 theWrappedObject->setTabStopWidth(width);
}

void PythonQtWrapper_QPlainTextEdit::setExtraSelections(QPlainTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
 theWrappedObject->setExtraSelections(selections);
}

void PythonQtWrapper_QPlainTextEdit::ensureCursorVisible(QPlainTextEdit* theWrappedObject)
{
 theWrappedObject->ensureCursorVisible();
}

void PythonQtWrapper_QPlainTextEdit::keyPressEvent(QPlainTextEdit* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_keyPressEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::setTextInteractionFlags(QPlainTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
 theWrappedObject->setTextInteractionFlags(flags);
}

QRect  PythonQtWrapper_QPlainTextEdit::cursorRect(QPlainTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
return  theWrappedObject->cursorRect(cursor);
}

bool  PythonQtWrapper_QPlainTextEdit::canInsertFromMimeData(QPlainTextEdit* theWrappedObject, const QMimeData*  source) const
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source);
}

QTextOption::WrapMode  PythonQtWrapper_QPlainTextEdit::wordWrapMode(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->wordWrapMode();
}

bool  PythonQtWrapper_QPlainTextEdit::tabChangesFocus(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->tabChangesFocus();
}

void PythonQtWrapper_QPlainTextEdit::focusInEvent(QPlainTextEdit* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_focusInEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::paintEvent(QPlainTextEdit* theWrappedObject, QPaintEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_paintEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::mouseDoubleClickEvent(QPlainTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e);
}

void PythonQtWrapper_QPlainTextEdit::setLineWrapMode(QPlainTextEdit* theWrappedObject, QPlainTextEdit::LineWrapMode  mode)
{
 theWrappedObject->setLineWrapMode(mode);
}

QString  PythonQtWrapper_QPlainTextEdit::toPlainText(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->toPlainText();
}

QString  PythonQtWrapper_QPlainTextEdit::documentTitle(QPlainTextEdit* theWrappedObject) const
{
return  theWrappedObject->documentTitle();
}

void PythonQtWrapper_QPlainTextEdit::setDocumentTitle(QPlainTextEdit* theWrappedObject, const QString&  title)
{
 theWrappedObject->setDocumentTitle(title);
}

void PythonQtWrapper_QPlainTextEdit::setCurrentCharFormat(QPlainTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
 theWrappedObject->setCurrentCharFormat(format);
}

void PythonQtWrapper_QPlainTextEdit::setReadOnly(QPlainTextEdit* theWrappedObject, bool  ro)
{
 theWrappedObject->setReadOnly(ro);
}

QVariant  PythonQtWrapper_QPlainTextEdit::inputMethodQuery(QPlainTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
return  ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property);
}

void PythonQtWrapper_QPlainTextEdit::inputMethodEvent(QPlainTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QPlainTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

