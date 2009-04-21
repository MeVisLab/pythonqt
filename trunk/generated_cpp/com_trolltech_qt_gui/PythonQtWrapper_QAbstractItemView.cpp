#include "PythonQtWrapper_QAbstractItemView.h"

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
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
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

void PythonQtShell_QAbstractItemView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "actionEvent(QAbstractItemView*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::actionEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "changeEvent(QAbstractItemView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::changeEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "childEvent(QAbstractItemView*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::childEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "closeEditor(QAbstractItemView*,QWidget* ,QAbstractItemDelegate::EndEditHint )");
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::closeEditor(editor, hint);
}
void PythonQtShell_QAbstractItemView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "closeEvent(QAbstractItemView*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::closeEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "commitData(QAbstractItemView*,QWidget* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::commitData(editor);
}
void PythonQtShell_QAbstractItemView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "contextMenuEvent(QAbstractItemView*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::contextMenuEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::currentChanged(const QModelIndex&  current, const QModelIndex&  previous)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "currentChanged(QAbstractItemView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&current, (void*)&previous};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::currentChanged(current, previous);
}
void PythonQtShell_QAbstractItemView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "customEvent(QAbstractItemView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::customEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "dataChanged(QAbstractItemView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QAbstractItemView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "devType(QAbstractItemView*)");
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
  return QAbstractItemView::devType();
}
void PythonQtShell_QAbstractItemView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "doItemsLayout(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::doItemsLayout();
}
void PythonQtShell_QAbstractItemView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "dragEnterEvent(QAbstractItemView*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::dragEnterEvent(event);
}
void PythonQtShell_QAbstractItemView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "dragLeaveEvent(QAbstractItemView*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::dragLeaveEvent(event);
}
void PythonQtShell_QAbstractItemView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "dragMoveEvent(QAbstractItemView*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::dragMoveEvent(event);
}
void PythonQtShell_QAbstractItemView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "dropEvent(QAbstractItemView*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::dropEvent(event);
}
bool  PythonQtShell_QAbstractItemView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "edit(QAbstractItemView*,const QModelIndex& ,QAbstractItemView::EditTrigger ,QEvent* )");
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
  return QAbstractItemView::edit(index, trigger, event);
}
void PythonQtShell_QAbstractItemView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "editorDestroyed(QAbstractItemView*,QObject* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::editorDestroyed(editor);
}
void PythonQtShell_QAbstractItemView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "enterEvent(QAbstractItemView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::enterEvent(arg__1);
}
bool  PythonQtShell_QAbstractItemView::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "event(QAbstractItemView*,QEvent* )");
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
  return QAbstractItemView::event(event);
}
bool  PythonQtShell_QAbstractItemView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "eventFilter(QAbstractItemView*,QObject* ,QEvent* )");
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
  return QAbstractItemView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractItemView::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "focusInEvent(QAbstractItemView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::focusInEvent(event);
}
bool  PythonQtShell_QAbstractItemView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "focusNextPrevChild(QAbstractItemView*,bool )");
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
  return QAbstractItemView::focusNextPrevChild(next);
}
void PythonQtShell_QAbstractItemView::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "focusOutEvent(QAbstractItemView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::focusOutEvent(event);
}
int  PythonQtShell_QAbstractItemView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "heightForWidth(QAbstractItemView*,int )");
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
  return QAbstractItemView::heightForWidth(arg__1);
}
void PythonQtShell_QAbstractItemView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "hideEvent(QAbstractItemView*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::hideEvent(arg__1);
}
int  PythonQtShell_QAbstractItemView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "horizontalOffset(QAbstractItemView*)");
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
  int  result;
return result;
}
void PythonQtShell_QAbstractItemView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "horizontalScrollbarAction(QAbstractItemView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::horizontalScrollbarAction(action);
}
void PythonQtShell_QAbstractItemView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "horizontalScrollbarValueChanged(QAbstractItemView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QAbstractItemView::indexAt(const QPoint&  point) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "indexAt(QAbstractItemView*,const QPoint& )");
      QModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&point};
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
  QModelIndex  result;
return result;
}
void PythonQtShell_QAbstractItemView::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "inputMethodEvent(QAbstractItemView*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QAbstractItemView::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "inputMethodQuery(QAbstractItemView*,Qt::InputMethodQuery )");
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
  return QAbstractItemView::inputMethodQuery(query);
}
bool  PythonQtShell_QAbstractItemView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "isIndexHidden(QAbstractItemView*,const QModelIndex& )");
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
  bool  result;
return result;
}
void PythonQtShell_QAbstractItemView::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "keyPressEvent(QAbstractItemView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::keyPressEvent(event);
}
void PythonQtShell_QAbstractItemView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "keyReleaseEvent(QAbstractItemView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "keyboardSearch(QAbstractItemView*,const QString& )");
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::keyboardSearch(search);
}
void PythonQtShell_QAbstractItemView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "languageChange(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::languageChange();
}
void PythonQtShell_QAbstractItemView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "leaveEvent(QAbstractItemView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::leaveEvent(arg__1);
}
int  PythonQtShell_QAbstractItemView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "metric(QAbstractItemView*,QPaintDevice::PaintDeviceMetric )");
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
  return QAbstractItemView::metric(arg__1);
}
void PythonQtShell_QAbstractItemView::mouseDoubleClickEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "mouseDoubleClickEvent(QAbstractItemView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QAbstractItemView::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "mouseMoveEvent(QAbstractItemView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::mouseMoveEvent(event);
}
void PythonQtShell_QAbstractItemView::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "mousePressEvent(QAbstractItemView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::mousePressEvent(event);
}
void PythonQtShell_QAbstractItemView::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "mouseReleaseEvent(QAbstractItemView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::mouseReleaseEvent(event);
}
QModelIndex  PythonQtShell_QAbstractItemView::moveCursor(QAbstractItemView::CursorAction  cursorAction, Qt::KeyboardModifiers  modifiers)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveCursor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "moveCursor(QAbstractItemView*,QAbstractItemView::CursorAction ,Qt::KeyboardModifiers )");
      QModelIndex  returnValue;
    void* args[3] = {NULL, (void*)&cursorAction, (void*)&modifiers};
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
  QModelIndex  result;
return result;
}
void PythonQtShell_QAbstractItemView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "moveEvent(QAbstractItemView*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QAbstractItemView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "paintEngine(QAbstractItemView*)");
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
  return QAbstractItemView::paintEngine();
}
void PythonQtShell_QAbstractItemView::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "paintEvent(QAbstractItemView*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::paintEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "reset(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::reset();
}
void PythonQtShell_QAbstractItemView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "resizeEvent(QAbstractItemView*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::resizeEvent(event);
}
void PythonQtShell_QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "rowsAboutToBeRemoved(QAbstractItemView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QAbstractItemView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "rowsInserted(QAbstractItemView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::rowsInserted(parent, start, end);
}
void PythonQtShell_QAbstractItemView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "scrollContentsBy(QAbstractItemView*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QAbstractItemView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "scrollTo(QAbstractItemView*,const QModelIndex& ,QAbstractItemView::ScrollHint )");
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractItemView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "selectAll(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QAbstractItemView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "selectedIndexes(QAbstractItemView*)");
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
  return QAbstractItemView::selectedIndexes();
}
void PythonQtShell_QAbstractItemView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "selectionChanged(QAbstractItemView*,const QItemSelection& ,const QItemSelection& )");
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QAbstractItemView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "selectionCommand(QAbstractItemView*,const QModelIndex& ,const QEvent* )");
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
  return QAbstractItemView::selectionCommand(index, event);
}
void PythonQtShell_QAbstractItemView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "setModel(QAbstractItemView*,QAbstractItemModel* )");
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::setModel(model);
}
void PythonQtShell_QAbstractItemView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "setRootIndex(QAbstractItemView*,const QModelIndex& )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::setRootIndex(index);
}
void PythonQtShell_QAbstractItemView::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "setSelection(QAbstractItemView*,const QRect& ,QItemSelectionModel::SelectionFlags )");
    void* args[3] = {NULL, (void*)&rect, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractItemView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "setSelectionModel(QAbstractItemView*,QItemSelectionModel* )");
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::setSelectionModel(selectionModel);
}
void PythonQtShell_QAbstractItemView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "showEvent(QAbstractItemView*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::showEvent(arg__1);
}
int  PythonQtShell_QAbstractItemView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "sizeHintForColumn(QAbstractItemView*,int )");
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
  return QAbstractItemView::sizeHintForColumn(column);
}
int  PythonQtShell_QAbstractItemView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "sizeHintForRow(QAbstractItemView*,int )");
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
  return QAbstractItemView::sizeHintForRow(row);
}
void PythonQtShell_QAbstractItemView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "startDrag(QAbstractItemView*,Qt::DropActions )");
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::startDrag(supportedActions);
}
void PythonQtShell_QAbstractItemView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "tabletEvent(QAbstractItemView*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::tabletEvent(arg__1);
}
void PythonQtShell_QAbstractItemView::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "timerEvent(QAbstractItemView*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::timerEvent(event);
}
void PythonQtShell_QAbstractItemView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "updateEditorData(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::updateEditorData();
}
void PythonQtShell_QAbstractItemView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "updateEditorGeometries(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::updateEditorGeometries();
}
void PythonQtShell_QAbstractItemView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "updateGeometries(QAbstractItemView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::updateGeometries();
}
int  PythonQtShell_QAbstractItemView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "verticalOffset(QAbstractItemView*)");
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
  int  result;
return result;
}
void PythonQtShell_QAbstractItemView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "verticalScrollbarAction(QAbstractItemView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::verticalScrollbarAction(action);
}
void PythonQtShell_QAbstractItemView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "verticalScrollbarValueChanged(QAbstractItemView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QAbstractItemView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "viewOptions(QAbstractItemView*)");
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
  return QAbstractItemView::viewOptions();
}
bool  PythonQtShell_QAbstractItemView::viewportEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "viewportEvent(QAbstractItemView*,QEvent* )");
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
  return QAbstractItemView::viewportEvent(event);
}
QRect  PythonQtShell_QAbstractItemView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "visualRect(QAbstractItemView*,const QModelIndex& )");
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
  QRect  result;
return result;
}
QRegion  PythonQtShell_QAbstractItemView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "visualRegionForSelection(QAbstractItemView*,const QItemSelection& )");
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
  QRegion  result;
return result;
}
void PythonQtShell_QAbstractItemView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractItemView::staticMetaObject,
      "wheelEvent(QAbstractItemView*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemView::wheelEvent(arg__1);
}
QAbstractItemView* PythonQtWrapper_QAbstractItemView::new_QAbstractItemView(QWidget*  parent)
{ 
return new PythonQtShell_QAbstractItemView(parent); }

void PythonQtWrapper_QAbstractItemView::setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode)
{
 theWrappedObject->setVerticalScrollMode(mode);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const
{
return  theWrappedObject->itemDelegateForColumn(column);
}

QItemSelectionModel*  PythonQtWrapper_QAbstractItemView::selectionModel(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->selectionModel();
}

bool  PythonQtWrapper_QAbstractItemView::dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->dragDropOverwriteMode();
}

void PythonQtWrapper_QAbstractItemView::inputMethodEvent(QAbstractItemView* theWrappedObject, QInputMethodEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_inputMethodEvent(event);
}

void PythonQtWrapper_QAbstractItemView::startDrag(QAbstractItemView* theWrappedObject, Qt::DropActions  supportedActions)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_startDrag(supportedActions);
}

void PythonQtWrapper_QAbstractItemView::setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size)
{
 theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QAbstractItemView::setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable)
{
 theWrappedObject->setAutoScroll(enable);
}

void PythonQtWrapper_QAbstractItemView::dropEvent(QAbstractItemView* theWrappedObject, QDropEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_dropEvent(event);
}

void PythonQtWrapper_QAbstractItemView::setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget)
{
 theWrappedObject->setIndexWidget(index, widget);
}

QList<QModelIndex >  PythonQtWrapper_QAbstractItemView::selectedIndexes(QAbstractItemView* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_selectedIndexes();
}

QAbstractItemModel*  PythonQtWrapper_QAbstractItemView::model(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->model();
}

void PythonQtWrapper_QAbstractItemView::dragMoveEvent(QAbstractItemView* theWrappedObject, QDragMoveEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_dragMoveEvent(event);
}

QWidget*  PythonQtWrapper_QAbstractItemView::indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->indexWidget(index);
}

QAbstractItemView::SelectionMode  PythonQtWrapper_QAbstractItemView::selectionMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->selectionMode();
}

void PythonQtWrapper_QAbstractItemView::setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable)
{
 theWrappedObject->setAlternatingRowColors(enable);
}

void PythonQtWrapper_QAbstractItemView::focusInEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_focusInEvent(event);
}

void PythonQtWrapper_QAbstractItemView::mouseDoubleClickEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_mouseDoubleClickEvent(event);
}

QModelIndex  PythonQtWrapper_QAbstractItemView::currentIndex(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->currentIndex();
}

bool  PythonQtWrapper_QAbstractItemView::viewportEvent(QAbstractItemView* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_viewportEvent(event);
}

void PythonQtWrapper_QAbstractItemView::mouseMoveEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_mouseMoveEvent(event);
}

QAbstractItemView::ScrollMode  PythonQtWrapper_QAbstractItemView::horizontalScrollMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->horizontalScrollMode();
}

bool  PythonQtWrapper_QAbstractItemView::tabKeyNavigation(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->tabKeyNavigation();
}

void PythonQtWrapper_QAbstractItemView::setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_setModel(model);
}

void PythonQtWrapper_QAbstractItemView::setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode)
{
 theWrappedObject->setHorizontalScrollMode(mode);
}

bool  PythonQtWrapper_QAbstractItemView::dragEnabled(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->dragEnabled();
}

QAbstractItemView::SelectionBehavior  PythonQtWrapper_QAbstractItemView::selectionBehavior(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->selectionBehavior();
}

void PythonQtWrapper_QAbstractItemView::setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers)
{
 theWrappedObject->setEditTriggers(triggers);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const
{
return  theWrappedObject->itemDelegateForRow(row);
}

void PythonQtWrapper_QAbstractItemView::closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index)
{
 theWrappedObject->closePersistentEditor(index);
}

bool  PythonQtWrapper_QAbstractItemView::edit(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_edit(index, trigger, event);
}

void PythonQtWrapper_QAbstractItemView::setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate)
{
 theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QAbstractItemView::setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable)
{
 theWrappedObject->setTabKeyNavigation(enable);
}

void PythonQtWrapper_QAbstractItemView::setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable)
{
 theWrappedObject->setDropIndicatorShown(enable);
}

QItemSelectionModel::SelectionFlags  PythonQtWrapper_QAbstractItemView::selectionCommand(QAbstractItemView* theWrappedObject, const QModelIndex&  index, const QEvent*  event) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_selectionCommand(index, event);
}

bool  PythonQtWrapper_QAbstractItemView::alternatingRowColors(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->alternatingRowColors();
}

void PythonQtWrapper_QAbstractItemView::resizeEvent(QAbstractItemView* theWrappedObject, QResizeEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_resizeEvent(event);
}

int  PythonQtWrapper_QAbstractItemView::sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_sizeHintForColumn(column);
}

QSize  PythonQtWrapper_QAbstractItemView::iconSize(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->iconSize();
}

void PythonQtWrapper_QAbstractItemView::setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode)
{
 theWrappedObject->setSelectionMode(mode);
}

bool  PythonQtWrapper_QAbstractItemView::focusNextPrevChild(QAbstractItemView* theWrappedObject, bool  next)
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_focusNextPrevChild(next);
}

void PythonQtWrapper_QAbstractItemView::dragEnterEvent(QAbstractItemView* theWrappedObject, QDragEnterEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_dragEnterEvent(event);
}

QAbstractItemView::EditTriggers  PythonQtWrapper_QAbstractItemView::editTriggers(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->editTriggers();
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->itemDelegate(index);
}

void PythonQtWrapper_QAbstractItemView::openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index)
{
 theWrappedObject->openPersistentEditor(index);
}

void PythonQtWrapper_QAbstractItemView::keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_keyboardSearch(search);
}

void PythonQtWrapper_QAbstractItemView::keyPressEvent(QAbstractItemView* theWrappedObject, QKeyEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_keyPressEvent(event);
}

void PythonQtWrapper_QAbstractItemView::setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior)
{
 theWrappedObject->setSelectionBehavior(behavior);
}

void PythonQtWrapper_QAbstractItemView::timerEvent(QAbstractItemView* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_timerEvent(event);
}

Qt::TextElideMode  PythonQtWrapper_QAbstractItemView::textElideMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->textElideMode();
}

QAbstractItemView::ScrollMode  PythonQtWrapper_QAbstractItemView::verticalScrollMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->verticalScrollMode();
}

void PythonQtWrapper_QAbstractItemView::setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior)
{
 theWrappedObject->setDragDropMode(behavior);
}

void PythonQtWrapper_QAbstractItemView::setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable)
{
 theWrappedObject->setDragEnabled(enable);
}

QAbstractItemView::DragDropMode  PythonQtWrapper_QAbstractItemView::dragDropMode(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->dragDropMode();
}

void PythonQtWrapper_QAbstractItemView::mousePressEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_mousePressEvent(event);
}

void PythonQtWrapper_QAbstractItemView::setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate)
{
 theWrappedObject->setItemDelegateForColumn(column, delegate);
}

void PythonQtWrapper_QAbstractItemView::focusOutEvent(QAbstractItemView* theWrappedObject, QFocusEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_focusOutEvent(event);
}

void PythonQtWrapper_QAbstractItemView::mouseReleaseEvent(QAbstractItemView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_mouseReleaseEvent(event);
}

QVariant  PythonQtWrapper_QAbstractItemView::inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_inputMethodQuery(query);
}

bool  PythonQtWrapper_QAbstractItemView::showDropIndicator(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->showDropIndicator();
}

void PythonQtWrapper_QAbstractItemView::setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin)
{
 theWrappedObject->setAutoScrollMargin(margin);
}

QStyleOptionViewItem  PythonQtWrapper_QAbstractItemView::viewOptions(QAbstractItemView* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_viewOptions();
}

QModelIndex  PythonQtWrapper_QAbstractItemView::rootIndex(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->rootIndex();
}

bool  PythonQtWrapper_QAbstractItemView::event(QAbstractItemView* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_event(event);
}

bool  PythonQtWrapper_QAbstractItemView::hasAutoScroll(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->hasAutoScroll();
}

void PythonQtWrapper_QAbstractItemView::setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate)
{
 theWrappedObject->setItemDelegateForRow(row, delegate);
}

void PythonQtWrapper_QAbstractItemView::setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite)
{
 theWrappedObject->setDragDropOverwriteMode(overwrite);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegate(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->itemDelegate();
}

void PythonQtWrapper_QAbstractItemView::setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_setSelectionModel(selectionModel);
}

int  PythonQtWrapper_QAbstractItemView::autoScrollMargin(QAbstractItemView* theWrappedObject) const
{
return  theWrappedObject->autoScrollMargin();
}

int  PythonQtWrapper_QAbstractItemView::sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const
{
return  ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_sizeHintForRow(row);
}

QSize  PythonQtWrapper_QAbstractItemView::sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->sizeHintForIndex(index);
}

void PythonQtWrapper_QAbstractItemView::setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode)
{
 theWrappedObject->setTextElideMode(mode);
}

void PythonQtWrapper_QAbstractItemView::dragLeaveEvent(QAbstractItemView* theWrappedObject, QDragLeaveEvent*  event)
{
 ((PythonQtPublicPromoter_QAbstractItemView*)theWrappedObject)->promoted_dragLeaveEvent(event);
}

