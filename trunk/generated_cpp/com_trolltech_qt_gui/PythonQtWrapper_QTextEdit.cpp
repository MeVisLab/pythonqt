#include "PythonQtWrapper_QTextEdit.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextCursor>
#include <QTextEdit>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
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
#include <qtextedit.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qwidget.h>

void PythonQtShell_QTextEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "actionEvent(QTextEdit*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::canInsertFromMimeData(const QMimeData*  source) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canInsertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "canInsertFromMimeData(QTextEdit*,const QMimeData* )");
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
  return QTextEdit::canInsertFromMimeData(source);
}
void PythonQtShell_QTextEdit::changeEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "changeEvent(QTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::changeEvent(e);
}
void PythonQtShell_QTextEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "childEvent(QTextEdit*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::childEvent(arg__1);
}
void PythonQtShell_QTextEdit::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "closeEvent(QTextEdit*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QTextEdit::contextMenuEvent(QContextMenuEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "contextMenuEvent(QTextEdit*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::contextMenuEvent(e);
}
QMimeData*  PythonQtShell_QTextEdit::createMimeDataFromSelection() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createMimeDataFromSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "createMimeDataFromSelection(QTextEdit*)");
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
  return QTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QTextEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "customEvent(QTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QTextEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "devType(QTextEdit*)");
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
  return QTextEdit::devType();
}
void PythonQtShell_QTextEdit::dragEnterEvent(QDragEnterEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "dragEnterEvent(QTextEdit*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::dragEnterEvent(e);
}
void PythonQtShell_QTextEdit::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "dragLeaveEvent(QTextEdit*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::dragLeaveEvent(e);
}
void PythonQtShell_QTextEdit::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "dragMoveEvent(QTextEdit*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::dragMoveEvent(e);
}
void PythonQtShell_QTextEdit::dropEvent(QDropEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "dropEvent(QTextEdit*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::dropEvent(e);
}
void PythonQtShell_QTextEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "enterEvent(QTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "event(QTextEdit*,QEvent* )");
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
  return QTextEdit::event(e);
}
bool  PythonQtShell_QTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "eventFilter(QTextEdit*,QObject* ,QEvent* )");
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
  return QTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextEdit::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "focusInEvent(QTextEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::focusInEvent(e);
}
bool  PythonQtShell_QTextEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "focusNextPrevChild(QTextEdit*,bool )");
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
  return QTextEdit::focusNextPrevChild(next);
}
void PythonQtShell_QTextEdit::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "focusOutEvent(QTextEdit*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::focusOutEvent(e);
}
int  PythonQtShell_QTextEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "heightForWidth(QTextEdit*,int )");
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
  return QTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTextEdit::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "hideEvent(QTextEdit*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "inputMethodEvent(QTextEdit*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "inputMethodQuery(QTextEdit*,Qt::InputMethodQuery )");
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
  return QTextEdit::inputMethodQuery(property);
}
void PythonQtShell_QTextEdit::insertFromMimeData(const QMimeData*  source)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "insertFromMimeData(QTextEdit*,const QMimeData* )");
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::insertFromMimeData(source);
}
void PythonQtShell_QTextEdit::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "keyPressEvent(QTextEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::keyPressEvent(e);
}
void PythonQtShell_QTextEdit::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "keyReleaseEvent(QTextEdit*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::keyReleaseEvent(e);
}
void PythonQtShell_QTextEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "languageChange(QTextEdit*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::languageChange();
}
void PythonQtShell_QTextEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "leaveEvent(QTextEdit*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "loadResource(QTextEdit*,int ,const QUrl& )");
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
  return QTextEdit::loadResource(type, name);
}
int  PythonQtShell_QTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "metric(QTextEdit*,QPaintDevice::PaintDeviceMetric )");
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
  return QTextEdit::metric(arg__1);
}
void PythonQtShell_QTextEdit::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "mouseDoubleClickEvent(QTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::mouseDoubleClickEvent(e);
}
void PythonQtShell_QTextEdit::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "mouseMoveEvent(QTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::mouseMoveEvent(e);
}
void PythonQtShell_QTextEdit::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "mousePressEvent(QTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::mousePressEvent(e);
}
void PythonQtShell_QTextEdit::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "mouseReleaseEvent(QTextEdit*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::mouseReleaseEvent(e);
}
void PythonQtShell_QTextEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "moveEvent(QTextEdit*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTextEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "paintEngine(QTextEdit*)");
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
  return QTextEdit::paintEngine();
}
void PythonQtShell_QTextEdit::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "paintEvent(QTextEdit*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::paintEvent(e);
}
void PythonQtShell_QTextEdit::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "resizeEvent(QTextEdit*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::resizeEvent(e);
}
void PythonQtShell_QTextEdit::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "scrollContentsBy(QTextEdit*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTextEdit::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "showEvent(QTextEdit*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::showEvent(arg__1);
}
void PythonQtShell_QTextEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "tabletEvent(QTextEdit*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QTextEdit::timerEvent(QTimerEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "timerEvent(QTextEdit*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::timerEvent(e);
}
bool  PythonQtShell_QTextEdit::viewportEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "viewportEvent(QTextEdit*,QEvent* )");
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
  return QTextEdit::viewportEvent(arg__1);
}
void PythonQtShell_QTextEdit::wheelEvent(QWheelEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextEdit::staticMetaObject,
      "wheelEvent(QTextEdit*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextEdit::wheelEvent(e);
}
QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(parent); }

QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(text, parent); }

QString  PythonQtWrapper_QTextEdit::anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
return  theWrappedObject->anchorAt(pos);
}

QTextCharFormat  PythonQtWrapper_QTextEdit::currentCharFormat(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->currentCharFormat();
}

QString  PythonQtWrapper_QTextEdit::toHtml(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->toHtml();
}

void PythonQtWrapper_QTextEdit::mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mousePressEvent(e);
}

void PythonQtWrapper_QTextEdit::setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
 theWrappedObject->setExtraSelections(selections);
}

void PythonQtWrapper_QTextEdit::contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e);
}

void PythonQtWrapper_QTextEdit::setDocument(QTextEdit* theWrappedObject, QTextDocument*  document)
{
 theWrappedObject->setDocument(document);
}

QTextDocument*  PythonQtWrapper_QTextEdit::document(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->document();
}

void PythonQtWrapper_QTextEdit::paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_paintEvent(e);
}

QColor  PythonQtWrapper_QTextEdit::textBackgroundColor(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->textBackgroundColor();
}

void PythonQtWrapper_QTextEdit::showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_showEvent(arg__1);
}

void PythonQtWrapper_QTextEdit::moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
 theWrappedObject->moveCursor(operation, mode);
}

void PythonQtWrapper_QTextEdit::timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_timerEvent(e);
}

bool  PythonQtWrapper_QTextEdit::fontUnderline(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->fontUnderline();
}

QTextCursor  PythonQtWrapper_QTextEdit::textCursor(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->textCursor();
}

void PythonQtWrapper_QTextEdit::focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusInEvent(e);
}

void PythonQtWrapper_QTextEdit::changeEvent(QTextEdit* theWrappedObject, QEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_changeEvent(e);
}

Qt::Alignment  PythonQtWrapper_QTextEdit::alignment(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->alignment();
}

QString  PythonQtWrapper_QTextEdit::documentTitle(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->documentTitle();
}

bool  PythonQtWrapper_QTextEdit::event(QTextEdit* theWrappedObject, QEvent*  e)
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_event(e);
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position)
{
return  theWrappedObject->createStandardContextMenu(position);
}

void PythonQtWrapper_QTextEdit::setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable)
{
 theWrappedObject->setUndoRedoEnabled(enable);
}

void PythonQtWrapper_QTextEdit::setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
 theWrappedObject->setWordWrapMode(policy);
}

void PythonQtWrapper_QTextEdit::dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e);
}

void PythonQtWrapper_QTextEdit::wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_wheelEvent(e);
}

QTextCursor  PythonQtWrapper_QTextEdit::cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
return  theWrappedObject->cursorForPosition(pos);
}

void PythonQtWrapper_QTextEdit::setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
 theWrappedObject->setTextCursor(cursor);
}

QVariant  PythonQtWrapper_QTextEdit::loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_loadResource(type, name);
}

void PythonQtWrapper_QTextEdit::setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode)
{
 theWrappedObject->setLineWrapMode(mode);
}

void PythonQtWrapper_QTextEdit::dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dropEvent(e);
}

QTextOption::WrapMode  PythonQtWrapper_QTextEdit::wordWrapMode(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->wordWrapMode();
}

void PythonQtWrapper_QTextEdit::setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w)
{
 theWrappedObject->setLineWrapColumnOrWidth(w);
}

int  PythonQtWrapper_QTextEdit::fontWeight(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->fontWeight();
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QTextEdit::extraSelections(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->extraSelections();
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
return  theWrappedObject->cursorRect(cursor);
}

bool  PythonQtWrapper_QTextEdit::find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
return  theWrappedObject->find(exp, options);
}

void PythonQtWrapper_QTextEdit::setReadOnly(QTextEdit* theWrappedObject, bool  ro)
{
 theWrappedObject->setReadOnly(ro);
}

bool  PythonQtWrapper_QTextEdit::isUndoRedoEnabled(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->isUndoRedoEnabled();
}

bool  PythonQtWrapper_QTextEdit::acceptRichText(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->acceptRichText();
}

void PythonQtWrapper_QTextEdit::setTabChangesFocus(QTextEdit* theWrappedObject, bool  b)
{
 theWrappedObject->setTabChangesFocus(b);
}

QMimeData*  PythonQtWrapper_QTextEdit::createMimeDataFromSelection(QTextEdit* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection();
}

bool  PythonQtWrapper_QTextEdit::canPaste(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->canPaste();
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->cursorRect();
}

void PythonQtWrapper_QTextEdit::setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
 theWrappedObject->setCurrentCharFormat(format);
}

QTextEdit::LineWrapMode  PythonQtWrapper_QTextEdit::lineWrapMode(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->lineWrapMode();
}

int  PythonQtWrapper_QTextEdit::cursorWidth(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->cursorWidth();
}

void PythonQtWrapper_QTextEdit::focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusOutEvent(e);
}

void PythonQtWrapper_QTextEdit::mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e);
}

Qt::TextInteractionFlags  PythonQtWrapper_QTextEdit::textInteractionFlags(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->textInteractionFlags();
}

QColor  PythonQtWrapper_QTextEdit::textColor(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->textColor();
}

void PythonQtWrapper_QTextEdit::mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e);
}

QTextEdit::AutoFormatting  PythonQtWrapper_QTextEdit::autoFormatting(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->autoFormatting();
}

void PythonQtWrapper_QTextEdit::keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e);
}

void PythonQtWrapper_QTextEdit::setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite)
{
 theWrappedObject->setOverwriteMode(overwrite);
}

void PythonQtWrapper_QTextEdit::dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e);
}

void PythonQtWrapper_QTextEdit::mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
 theWrappedObject->mergeCurrentCharFormat(modifier);
}

bool  PythonQtWrapper_QTextEdit::tabChangesFocus(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->tabChangesFocus();
}

qreal  PythonQtWrapper_QTextEdit::fontPointSize(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->fontPointSize();
}

void PythonQtWrapper_QTextEdit::setAcceptRichText(QTextEdit* theWrappedObject, bool  accept)
{
 theWrappedObject->setAcceptRichText(accept);
}

void PythonQtWrapper_QTextEdit::ensureCursorVisible(QTextEdit* theWrappedObject)
{
 theWrappedObject->ensureCursorVisible();
}

void PythonQtWrapper_QTextEdit::resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_resizeEvent(e);
}

bool  PythonQtWrapper_QTextEdit::fontItalic(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->fontItalic();
}

QString  PythonQtWrapper_QTextEdit::toPlainText(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->toPlainText();
}

void PythonQtWrapper_QTextEdit::scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy);
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject)
{
return  theWrappedObject->createStandardContextMenu();
}

QFont  PythonQtWrapper_QTextEdit::currentFont(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->currentFont();
}

int  PythonQtWrapper_QTextEdit::tabStopWidth(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->tabStopWidth();
}

void PythonQtWrapper_QTextEdit::mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e);
}

bool  PythonQtWrapper_QTextEdit::isReadOnly(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->isReadOnly();
}

bool  PythonQtWrapper_QTextEdit::overwriteMode(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->overwriteMode();
}

bool  PythonQtWrapper_QTextEdit::focusNextPrevChild(QTextEdit* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

bool  PythonQtWrapper_QTextEdit::canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source);
}

void PythonQtWrapper_QTextEdit::dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e);
}

void PythonQtWrapper_QTextEdit::setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features)
{
 theWrappedObject->setAutoFormatting(features);
}

void PythonQtWrapper_QTextEdit::setCursorWidth(QTextEdit* theWrappedObject, int  width)
{
 theWrappedObject->setCursorWidth(width);
}

QVariant  PythonQtWrapper_QTextEdit::inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
return  ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property);
}

void PythonQtWrapper_QTextEdit::insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source);
}

void PythonQtWrapper_QTextEdit::setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
 theWrappedObject->setTextInteractionFlags(flags);
}

void PythonQtWrapper_QTextEdit::setTabStopWidth(QTextEdit* theWrappedObject, int  width)
{
 theWrappedObject->setTabStopWidth(width);
}

void PythonQtWrapper_QTextEdit::setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title)
{
 theWrappedObject->setDocumentTitle(title);
}

void PythonQtWrapper_QTextEdit::inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1);
}

void PythonQtWrapper_QTextEdit::print(QTextEdit* theWrappedObject, QPrinter*  printer) const
{
 theWrappedObject->print(printer);
}

int  PythonQtWrapper_QTextEdit::lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->lineWrapColumnOrWidth();
}

QString  PythonQtWrapper_QTextEdit::fontFamily(QTextEdit* theWrappedObject) const
{
return  theWrappedObject->fontFamily();
}

void PythonQtWrapper_QTextEdit::keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
 ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyPressEvent(e);
}

