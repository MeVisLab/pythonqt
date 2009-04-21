#include "PythonQtWrapper_QHeaderView.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
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
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

void PythonQtShell_QHeaderView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "actionEvent(QHeaderView*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::actionEvent(arg__1);
}
void PythonQtShell_QHeaderView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "changeEvent(QHeaderView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::changeEvent(arg__1);
}
void PythonQtShell_QHeaderView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "childEvent(QHeaderView*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::childEvent(arg__1);
}
void PythonQtShell_QHeaderView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "closeEditor(QHeaderView*,QWidget* ,QAbstractItemDelegate::EndEditHint )");
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::closeEditor(editor, hint);
}
void PythonQtShell_QHeaderView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "closeEvent(QHeaderView*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::closeEvent(arg__1);
}
void PythonQtShell_QHeaderView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "commitData(QHeaderView*,QWidget* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::commitData(editor);
}
void PythonQtShell_QHeaderView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "contextMenuEvent(QHeaderView*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::contextMenuEvent(arg__1);
}
void PythonQtShell_QHeaderView::currentChanged(const QModelIndex&  current, const QModelIndex&  old)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "currentChanged(QHeaderView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&current, (void*)&old};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::currentChanged(current, old);
}
void PythonQtShell_QHeaderView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "customEvent(QHeaderView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::customEvent(arg__1);
}
void PythonQtShell_QHeaderView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "dataChanged(QHeaderView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QHeaderView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "devType(QHeaderView*)");
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
  return QHeaderView::devType();
}
void PythonQtShell_QHeaderView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "doItemsLayout(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::doItemsLayout();
}
void PythonQtShell_QHeaderView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "dragEnterEvent(QHeaderView*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragEnterEvent(event);
}
void PythonQtShell_QHeaderView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "dragLeaveEvent(QHeaderView*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragLeaveEvent(event);
}
void PythonQtShell_QHeaderView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "dragMoveEvent(QHeaderView*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dragMoveEvent(event);
}
void PythonQtShell_QHeaderView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "dropEvent(QHeaderView*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::dropEvent(event);
}
bool  PythonQtShell_QHeaderView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "edit(QHeaderView*,const QModelIndex& ,QAbstractItemView::EditTrigger ,QEvent* )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&trigger, (void*)&event};
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
  return QHeaderView::edit(index, trigger, event);
}
void PythonQtShell_QHeaderView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "editorDestroyed(QHeaderView*,QObject* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::editorDestroyed(editor);
}
void PythonQtShell_QHeaderView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "enterEvent(QHeaderView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::enterEvent(arg__1);
}
bool  PythonQtShell_QHeaderView::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "event(QHeaderView*,QEvent* )");
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
  return QHeaderView::event(e);
}
bool  PythonQtShell_QHeaderView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "eventFilter(QHeaderView*,QObject* ,QEvent* )");
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
  return QHeaderView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHeaderView::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "focusInEvent(QHeaderView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::focusInEvent(event);
}
bool  PythonQtShell_QHeaderView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "focusNextPrevChild(QHeaderView*,bool )");
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
  return QHeaderView::focusNextPrevChild(next);
}
void PythonQtShell_QHeaderView::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "focusOutEvent(QHeaderView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::focusOutEvent(event);
}
int  PythonQtShell_QHeaderView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "heightForWidth(QHeaderView*,int )");
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
  return QHeaderView::heightForWidth(arg__1);
}
void PythonQtShell_QHeaderView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "hideEvent(QHeaderView*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::hideEvent(arg__1);
}
int  PythonQtShell_QHeaderView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "horizontalOffset(QHeaderView*)");
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
  return QHeaderView::horizontalOffset();
}
void PythonQtShell_QHeaderView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "horizontalScrollbarAction(QHeaderView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::horizontalScrollbarAction(action);
}
void PythonQtShell_QHeaderView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "horizontalScrollbarValueChanged(QHeaderView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QHeaderView::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "indexAt(QHeaderView*,const QPoint& )");
      QModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::indexAt(p);
}
void PythonQtShell_QHeaderView::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "inputMethodEvent(QHeaderView*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QHeaderView::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "inputMethodQuery(QHeaderView*,Qt::InputMethodQuery )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&query};
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
  return QHeaderView::inputMethodQuery(query);
}
bool  PythonQtShell_QHeaderView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "isIndexHidden(QHeaderView*,const QModelIndex& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  return QHeaderView::isIndexHidden(index);
}
void PythonQtShell_QHeaderView::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "keyPressEvent(QHeaderView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::keyPressEvent(event);
}
void PythonQtShell_QHeaderView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "keyReleaseEvent(QHeaderView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QHeaderView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "keyboardSearch(QHeaderView*,const QString& )");
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::keyboardSearch(search);
}
void PythonQtShell_QHeaderView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "languageChange(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::languageChange();
}
void PythonQtShell_QHeaderView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "leaveEvent(QHeaderView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::leaveEvent(arg__1);
}
int  PythonQtShell_QHeaderView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "metric(QHeaderView*,QPaintDevice::PaintDeviceMetric )");
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
  return QHeaderView::metric(arg__1);
}
void PythonQtShell_QHeaderView::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "mouseDoubleClickEvent(QHeaderView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseDoubleClickEvent(e);
}
void PythonQtShell_QHeaderView::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "mouseMoveEvent(QHeaderView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseMoveEvent(e);
}
void PythonQtShell_QHeaderView::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "mousePressEvent(QHeaderView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mousePressEvent(e);
}
void PythonQtShell_QHeaderView::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "mouseReleaseEvent(QHeaderView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::mouseReleaseEvent(e);
}
void PythonQtShell_QHeaderView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "moveEvent(QHeaderView*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QHeaderView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "paintEngine(QHeaderView*)");
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
  return QHeaderView::paintEngine();
}
void PythonQtShell_QHeaderView::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "paintEvent(QHeaderView*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::paintEvent(e);
}
void PythonQtShell_QHeaderView::paintSection(QPainter*  painter, const QRect&  rect, int  logicalIndex) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintSection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "paintSection(QHeaderView*,QPainter* ,const QRect& ,int )");
    void* args[4] = {NULL, (void*)&painter, (void*)&rect, (void*)&logicalIndex};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::paintSection(painter, rect, logicalIndex);
}
void PythonQtShell_QHeaderView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "reset(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::reset();
}
void PythonQtShell_QHeaderView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "resizeEvent(QHeaderView*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::resizeEvent(event);
}
void PythonQtShell_QHeaderView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "rowsAboutToBeRemoved(QHeaderView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QHeaderView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "rowsInserted(QHeaderView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::rowsInserted(parent, start, end);
}
void PythonQtShell_QHeaderView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "scrollContentsBy(QHeaderView*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QHeaderView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "scrollTo(QHeaderView*,const QModelIndex& ,QAbstractItemView::ScrollHint )");
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::scrollTo(index, hint);
}
QSize  PythonQtShell_QHeaderView::sectionSizeFromContents(int  logicalIndex) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sectionSizeFromContents");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "sectionSizeFromContents(QHeaderView*,int )");
      QSize  returnValue;
    void* args[2] = {NULL, (void*)&logicalIndex};
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
  return QHeaderView::sectionSizeFromContents(logicalIndex);
}
void PythonQtShell_QHeaderView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "selectAll(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QHeaderView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "selectedIndexes(QHeaderView*)");
      QList<QModelIndex >  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QList<QModelIndex > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::selectedIndexes();
}
void PythonQtShell_QHeaderView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "selectionChanged(QHeaderView*,const QItemSelection& ,const QItemSelection& )");
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QHeaderView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "selectionCommand(QHeaderView*,const QModelIndex& ,const QEvent* )");
      QItemSelectionModel::SelectionFlags  returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QItemSelectionModel::SelectionFlags *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::selectionCommand(index, event);
}
void PythonQtShell_QHeaderView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "setModel(QHeaderView*,QAbstractItemModel* )");
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setModel(model);
}
void PythonQtShell_QHeaderView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "setRootIndex(QHeaderView*,const QModelIndex& )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setRootIndex(index);
}
void PythonQtShell_QHeaderView::setSelection(const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "setSelection(QHeaderView*,const QRect& ,QItemSelectionModel::SelectionFlags )");
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setSelection(arg__1, arg__2);
}
void PythonQtShell_QHeaderView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "setSelectionModel(QHeaderView*,QItemSelectionModel* )");
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::setSelectionModel(selectionModel);
}
void PythonQtShell_QHeaderView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "showEvent(QHeaderView*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::showEvent(arg__1);
}
int  PythonQtShell_QHeaderView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "sizeHintForColumn(QHeaderView*,int )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&column};
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
  return QHeaderView::sizeHintForColumn(column);
}
int  PythonQtShell_QHeaderView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "sizeHintForRow(QHeaderView*,int )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&row};
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
  return QHeaderView::sizeHintForRow(row);
}
void PythonQtShell_QHeaderView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "startDrag(QHeaderView*,Qt::DropActions )");
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::startDrag(supportedActions);
}
void PythonQtShell_QHeaderView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "tabletEvent(QHeaderView*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::tabletEvent(arg__1);
}
void PythonQtShell_QHeaderView::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "timerEvent(QHeaderView*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::timerEvent(event);
}
void PythonQtShell_QHeaderView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "updateEditorData(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::updateEditorData();
}
void PythonQtShell_QHeaderView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "updateEditorGeometries(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::updateEditorGeometries();
}
void PythonQtShell_QHeaderView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "updateGeometries(QHeaderView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::updateGeometries();
}
int  PythonQtShell_QHeaderView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "verticalOffset(QHeaderView*)");
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
  return QHeaderView::verticalOffset();
}
void PythonQtShell_QHeaderView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "verticalScrollbarAction(QHeaderView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::verticalScrollbarAction(action);
}
void PythonQtShell_QHeaderView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "verticalScrollbarValueChanged(QHeaderView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QHeaderView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "viewOptions(QHeaderView*)");
      QStyleOptionViewItem  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QStyleOptionViewItem *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::viewOptions();
}
bool  PythonQtShell_QHeaderView::viewportEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "viewportEvent(QHeaderView*,QEvent* )");
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
  return QHeaderView::viewportEvent(e);
}
QRect  PythonQtShell_QHeaderView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "visualRect(QHeaderView*,const QModelIndex& )");
      QRect  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QRect *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::visualRect(index);
}
QRegion  PythonQtShell_QHeaderView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "visualRegionForSelection(QHeaderView*,const QItemSelection& )");
      QRegion  returnValue;
    void* args[2] = {NULL, (void*)&selection};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QRegion *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QHeaderView::visualRegionForSelection(selection);
}
void PythonQtShell_QHeaderView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QHeaderView::staticMetaObject,
      "wheelEvent(QHeaderView*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHeaderView::wheelEvent(arg__1);
}
QHeaderView* PythonQtWrapper_QHeaderView::new_QHeaderView(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new PythonQtShell_QHeaderView(orientation, parent); }

bool  PythonQtWrapper_QHeaderView::stretchLastSection(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).stretchLastSection();
}

void PythonQtWrapper_QHeaderView::hideSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
 (*theWrappedObject).hideSection(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, const QPoint&  pos) const
{
return  (*theWrappedObject).logicalIndexAt(pos);
}

int  PythonQtWrapper_QHeaderView::minimumSectionSize(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).minimumSectionSize();
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  position) const
{
return  (*theWrappedObject).logicalIndexAt(position);
}

QSize  PythonQtWrapper_QHeaderView::sectionSizeFromContents(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).sectionSizeFromContents(logicalIndex);
}

void PythonQtWrapper_QHeaderView::setMinimumSectionSize(QHeaderView* theWrappedObject, int  size)
{
 (*theWrappedObject).setMinimumSectionSize(size);
}

int  PythonQtWrapper_QHeaderView::sectionSize(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).sectionSize(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::isSortIndicatorShown(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).isSortIndicatorShown();
}

int  PythonQtWrapper_QHeaderView::offset(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).offset();
}

bool  PythonQtWrapper_QHeaderView::sectionsMoved(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).sectionsMoved();
}

int  PythonQtWrapper_QHeaderView::logicalIndexAt(QHeaderView* theWrappedObject, int  x, int  y) const
{
return  (*theWrappedObject).logicalIndexAt(x, y);
}

QRect  PythonQtWrapper_QHeaderView::visualRect(QHeaderView* theWrappedObject, const QModelIndex&  index) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).visualRect(index);
}

QModelIndex  PythonQtWrapper_QHeaderView::indexAt(QHeaderView* theWrappedObject, const QPoint&  p) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).indexAt(p);
}

QByteArray  PythonQtWrapper_QHeaderView::saveState(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).saveState();
}

int  PythonQtWrapper_QHeaderView::logicalIndex(QHeaderView* theWrappedObject, int  visualIndex) const
{
return  (*theWrappedObject).logicalIndex(visualIndex);
}

bool  PythonQtWrapper_QHeaderView::isIndexHidden(QHeaderView* theWrappedObject, const QModelIndex&  index) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).isIndexHidden(index);
}

void PythonQtWrapper_QHeaderView::setSortIndicatorShown(QHeaderView* theWrappedObject, bool  show)
{
 (*theWrappedObject).setSortIndicatorShown(show);
}

void PythonQtWrapper_QHeaderView::resizeSections(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
 (*theWrappedObject).resizeSections(mode);
}

Qt::SortOrder  PythonQtWrapper_QHeaderView::sortIndicatorOrder(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).sortIndicatorOrder();
}

void PythonQtWrapper_QHeaderView::setSortIndicator(QHeaderView* theWrappedObject, int  logicalIndex, Qt::SortOrder  order)
{
 (*theWrappedObject).setSortIndicator(logicalIndex, order);
}

void PythonQtWrapper_QHeaderView::swapSections(QHeaderView* theWrappedObject, int  first, int  second)
{
 (*theWrappedObject).swapSections(first, second);
}

void PythonQtWrapper_QHeaderView::setStretchLastSection(QHeaderView* theWrappedObject, bool  stretch)
{
 (*theWrappedObject).setStretchLastSection(stretch);
}

QSize  PythonQtWrapper_QHeaderView::sizeHint(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).sizeHint();
}

bool  PythonQtWrapper_QHeaderView::restoreState(QHeaderView* theWrappedObject, const QByteArray&  state)
{
return  (*theWrappedObject).restoreState(state);
}

int  PythonQtWrapper_QHeaderView::visualIndex(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).visualIndex(logicalIndex);
}

void PythonQtWrapper_QHeaderView::setDefaultSectionSize(QHeaderView* theWrappedObject, int  size)
{
 (*theWrappedObject).setDefaultSectionSize(size);
}

int  PythonQtWrapper_QHeaderView::horizontalOffset(QHeaderView* theWrappedObject) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).horizontalOffset();
}

void PythonQtWrapper_QHeaderView::mousePressEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).mousePressEvent(e);
}

int  PythonQtWrapper_QHeaderView::sectionSizeHint(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).sectionSizeHint(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::isMovable(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).isMovable();
}

void PythonQtWrapper_QHeaderView::dataChanged(QHeaderView* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).dataChanged(topLeft, bottomRight);
}

void PythonQtWrapper_QHeaderView::setSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex, bool  hide)
{
 (*theWrappedObject).setSectionHidden(logicalIndex, hide);
}

void PythonQtWrapper_QHeaderView::setDefaultAlignment(QHeaderView* theWrappedObject, Qt::Alignment  alignment)
{
 (*theWrappedObject).setDefaultAlignment(alignment);
}

QHeaderView::ResizeMode  PythonQtWrapper_QHeaderView::resizeMode(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).resizeMode(logicalIndex);
}

void PythonQtWrapper_QHeaderView::mouseMoveEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).mouseMoveEvent(e);
}

void PythonQtWrapper_QHeaderView::scrollContentsBy(QHeaderView* theWrappedObject, int  dx, int  dy)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).scrollContentsBy(dx, dy);
}

bool  PythonQtWrapper_QHeaderView::sectionsHidden(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).sectionsHidden();
}

void PythonQtWrapper_QHeaderView::setCascadingSectionResizes(QHeaderView* theWrappedObject, bool  enable)
{
 (*theWrappedObject).setCascadingSectionResizes(enable);
}

int  PythonQtWrapper_QHeaderView::defaultSectionSize(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).defaultSectionSize();
}

int  PythonQtWrapper_QHeaderView::verticalOffset(QHeaderView* theWrappedObject) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).verticalOffset();
}

void PythonQtWrapper_QHeaderView::resizeSection(QHeaderView* theWrappedObject, int  logicalIndex, int  size)
{
 (*theWrappedObject).resizeSection(logicalIndex, size);
}

void PythonQtWrapper_QHeaderView::mouseReleaseEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).mouseReleaseEvent(e);
}

void PythonQtWrapper_QHeaderView::setMovable(QHeaderView* theWrappedObject, bool  movable)
{
 (*theWrappedObject).setMovable(movable);
}

void PythonQtWrapper_QHeaderView::setModel(QHeaderView* theWrappedObject, QAbstractItemModel*  model)
{
 (*theWrappedObject).setModel(model);
}

void PythonQtWrapper_QHeaderView::showSection(QHeaderView* theWrappedObject, int  logicalIndex)
{
 (*theWrappedObject).showSection(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::stretchSectionCount(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).stretchSectionCount();
}

void PythonQtWrapper_QHeaderView::currentChanged(QHeaderView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  old)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).currentChanged(current, old);
}

int  PythonQtWrapper_QHeaderView::sectionViewportPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).sectionViewportPosition(logicalIndex);
}

void PythonQtWrapper_QHeaderView::mouseDoubleClickEvent(QHeaderView* theWrappedObject, QMouseEvent*  e)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).mouseDoubleClickEvent(e);
}

int  PythonQtWrapper_QHeaderView::visualIndexAt(QHeaderView* theWrappedObject, int  position) const
{
return  (*theWrappedObject).visualIndexAt(position);
}

void PythonQtWrapper_QHeaderView::setResizeMode(QHeaderView* theWrappedObject, int  logicalIndex, QHeaderView::ResizeMode  mode)
{
 (*theWrappedObject).setResizeMode(logicalIndex, mode);
}

int  PythonQtWrapper_QHeaderView::count(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

bool  PythonQtWrapper_QHeaderView::isClickable(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).isClickable();
}

Qt::Alignment  PythonQtWrapper_QHeaderView::defaultAlignment(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).defaultAlignment();
}

void PythonQtWrapper_QHeaderView::moveSection(QHeaderView* theWrappedObject, int  from, int  to)
{
 (*theWrappedObject).moveSection(from, to);
}

bool  PythonQtWrapper_QHeaderView::isSectionHidden(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).isSectionHidden(logicalIndex);
}

int  PythonQtWrapper_QHeaderView::hiddenSectionCount(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).hiddenSectionCount();
}

int  PythonQtWrapper_QHeaderView::sortIndicatorSection(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).sortIndicatorSection();
}

void PythonQtWrapper_QHeaderView::setHighlightSections(QHeaderView* theWrappedObject, bool  highlight)
{
 (*theWrappedObject).setHighlightSections(highlight);
}

void PythonQtWrapper_QHeaderView::reset(QHeaderView* theWrappedObject)
{
 (*theWrappedObject).reset();
}

bool  PythonQtWrapper_QHeaderView::event(QHeaderView* theWrappedObject, QEvent*  e)
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).event(e);
}

void PythonQtWrapper_QHeaderView::scrollTo(QHeaderView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).scrollTo(index, hint);
}

void PythonQtWrapper_QHeaderView::updateGeometries(QHeaderView* theWrappedObject)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).updateGeometries();
}

void PythonQtWrapper_QHeaderView::setSelection(QHeaderView* theWrappedObject, const QRect&  arg__1, QItemSelectionModel::SelectionFlags  arg__2)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).setSelection(arg__1, arg__2);
}

void PythonQtWrapper_QHeaderView::setClickable(QHeaderView* theWrappedObject, bool  clickable)
{
 (*theWrappedObject).setClickable(clickable);
}

void PythonQtWrapper_QHeaderView::setResizeMode(QHeaderView* theWrappedObject, QHeaderView::ResizeMode  mode)
{
 (*theWrappedObject).setResizeMode(mode);
}

void PythonQtWrapper_QHeaderView::paintEvent(QHeaderView* theWrappedObject, QPaintEvent*  e)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).paintEvent(e);
}

int  PythonQtWrapper_QHeaderView::sectionPosition(QHeaderView* theWrappedObject, int  logicalIndex) const
{
return  (*theWrappedObject).sectionPosition(logicalIndex);
}

bool  PythonQtWrapper_QHeaderView::viewportEvent(QHeaderView* theWrappedObject, QEvent*  e)
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).viewportEvent(e);
}

int  PythonQtWrapper_QHeaderView::length(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).length();
}

void PythonQtWrapper_QHeaderView::rowsInserted(QHeaderView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).rowsInserted(parent, start, end);
}

bool  PythonQtWrapper_QHeaderView::highlightSections(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).highlightSections();
}

void PythonQtWrapper_QHeaderView::paintSection(QHeaderView* theWrappedObject, QPainter*  painter, const QRect&  rect, int  logicalIndex) const
{
 (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).paintSection(painter, rect, logicalIndex);
}

void PythonQtWrapper_QHeaderView::doItemsLayout(QHeaderView* theWrappedObject)
{
 (*theWrappedObject).doItemsLayout();
}

QRegion  PythonQtWrapper_QHeaderView::visualRegionForSelection(QHeaderView* theWrappedObject, const QItemSelection&  selection) const
{
return  (*((PythonQtPublicPromoter_QHeaderView*)theWrappedObject)).visualRegionForSelection(selection);
}

bool  PythonQtWrapper_QHeaderView::cascadingSectionResizes(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).cascadingSectionResizes();
}

Qt::Orientation  PythonQtWrapper_QHeaderView::orientation(QHeaderView* theWrappedObject) const
{
return  (*theWrappedObject).orientation();
}

