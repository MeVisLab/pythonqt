#include "PythonQtWrapper_QTreeView.h"

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
#include <qtreeview.h>
#include <qwidget.h>

void PythonQtShell_QTreeView::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "actionEvent(QTreeView*,QActionEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::actionEvent(arg__1);
}
void PythonQtShell_QTreeView::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "changeEvent(QTreeView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::changeEvent(arg__1);
}
void PythonQtShell_QTreeView::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "childEvent(QTreeView*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::childEvent(arg__1);
}
void PythonQtShell_QTreeView::closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "closeEditor(QTreeView*,QWidget* ,QAbstractItemDelegate::EndEditHint )");
    void* args[3] = {NULL, (void*)&editor, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::closeEditor(editor, hint);
}
void PythonQtShell_QTreeView::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "closeEvent(QTreeView*,QCloseEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::closeEvent(arg__1);
}
void PythonQtShell_QTreeView::commitData(QWidget*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "commitData(QTreeView*,QWidget* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::commitData(editor);
}
void PythonQtShell_QTreeView::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "contextMenuEvent(QTreeView*,QContextMenuEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::contextMenuEvent(arg__1);
}
void PythonQtShell_QTreeView::currentChanged(const QModelIndex&  current, const QModelIndex&  previous)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "currentChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "currentChanged(QTreeView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&current, (void*)&previous};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::currentChanged(current, previous);
}
void PythonQtShell_QTreeView::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "customEvent(QTreeView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::customEvent(arg__1);
}
void PythonQtShell_QTreeView::dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dataChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "dataChanged(QTreeView*,const QModelIndex& ,const QModelIndex& )");
    void* args[3] = {NULL, (void*)&topLeft, (void*)&bottomRight};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dataChanged(topLeft, bottomRight);
}
int  PythonQtShell_QTreeView::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "devType(QTreeView*)");
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
  return QTreeView::devType();
}
void PythonQtShell_QTreeView::doItemsLayout()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doItemsLayout");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "doItemsLayout(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::doItemsLayout();
}
void PythonQtShell_QTreeView::dragEnterEvent(QDragEnterEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "dragEnterEvent(QTreeView*,QDragEnterEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dragEnterEvent(event);
}
void PythonQtShell_QTreeView::dragLeaveEvent(QDragLeaveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "dragLeaveEvent(QTreeView*,QDragLeaveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dragLeaveEvent(event);
}
void PythonQtShell_QTreeView::dragMoveEvent(QDragMoveEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "dragMoveEvent(QTreeView*,QDragMoveEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dragMoveEvent(event);
}
void PythonQtShell_QTreeView::drawBranches(QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawBranches");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "drawBranches(QTreeView*,QPainter* ,const QRect& ,const QModelIndex& )");
    void* args[4] = {NULL, (void*)&painter, (void*)&rect, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::drawBranches(painter, rect, index);
}
void PythonQtShell_QTreeView::drawRow(QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "drawRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "drawRow(QTreeView*,QPainter* ,const QStyleOptionViewItem& ,const QModelIndex& )");
    void* args[4] = {NULL, (void*)&painter, (void*)&options, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::drawRow(painter, options, index);
}
void PythonQtShell_QTreeView::dropEvent(QDropEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "dropEvent(QTreeView*,QDropEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::dropEvent(event);
}
bool  PythonQtShell_QTreeView::edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "edit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "edit(QTreeView*,const QModelIndex& ,QAbstractItemView::EditTrigger ,QEvent* )");
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
  return QTreeView::edit(index, trigger, event);
}
void PythonQtShell_QTreeView::editorDestroyed(QObject*  editor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "editorDestroyed");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "editorDestroyed(QTreeView*,QObject* )");
    void* args[2] = {NULL, (void*)&editor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::editorDestroyed(editor);
}
void PythonQtShell_QTreeView::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "enterEvent(QTreeView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::enterEvent(arg__1);
}
bool  PythonQtShell_QTreeView::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "event(QTreeView*,QEvent* )");
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
  return QTreeView::event(event);
}
bool  PythonQtShell_QTreeView::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "eventFilter(QTreeView*,QObject* ,QEvent* )");
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
  return QTreeView::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTreeView::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "focusInEvent(QTreeView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::focusInEvent(event);
}
bool  PythonQtShell_QTreeView::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "focusNextPrevChild(QTreeView*,bool )");
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
  return QTreeView::focusNextPrevChild(next);
}
void PythonQtShell_QTreeView::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "focusOutEvent(QTreeView*,QFocusEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::focusOutEvent(event);
}
int  PythonQtShell_QTreeView::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "heightForWidth(QTreeView*,int )");
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
  return QTreeView::heightForWidth(arg__1);
}
void PythonQtShell_QTreeView::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "hideEvent(QTreeView*,QHideEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::hideEvent(arg__1);
}
int  PythonQtShell_QTreeView::horizontalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "horizontalOffset(QTreeView*)");
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
  return QTreeView::horizontalOffset();
}
void PythonQtShell_QTreeView::horizontalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "horizontalScrollbarAction(QTreeView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::horizontalScrollbarAction(action);
}
void PythonQtShell_QTreeView::horizontalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "horizontalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "horizontalScrollbarValueChanged(QTreeView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::horizontalScrollbarValueChanged(value);
}
QModelIndex  PythonQtShell_QTreeView::indexAt(const QPoint&  p) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "indexAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "indexAt(QTreeView*,const QPoint& )");
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
  return QTreeView::indexAt(p);
}
void PythonQtShell_QTreeView::inputMethodEvent(QInputMethodEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "inputMethodEvent(QTreeView*,QInputMethodEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::inputMethodEvent(event);
}
QVariant  PythonQtShell_QTreeView::inputMethodQuery(Qt::InputMethodQuery  query) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "inputMethodQuery(QTreeView*,Qt::InputMethodQuery )");
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
  return QTreeView::inputMethodQuery(query);
}
bool  PythonQtShell_QTreeView::isIndexHidden(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isIndexHidden");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "isIndexHidden(QTreeView*,const QModelIndex& )");
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
  return QTreeView::isIndexHidden(index);
}
void PythonQtShell_QTreeView::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "keyPressEvent(QTreeView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::keyPressEvent(event);
}
void PythonQtShell_QTreeView::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "keyReleaseEvent(QTreeView*,QKeyEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::keyReleaseEvent(arg__1);
}
void PythonQtShell_QTreeView::keyboardSearch(const QString&  search)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyboardSearch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "keyboardSearch(QTreeView*,const QString& )");
    void* args[2] = {NULL, (void*)&search};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::keyboardSearch(search);
}
void PythonQtShell_QTreeView::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "languageChange(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::languageChange();
}
void PythonQtShell_QTreeView::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "leaveEvent(QTreeView*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::leaveEvent(arg__1);
}
int  PythonQtShell_QTreeView::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "metric(QTreeView*,QPaintDevice::PaintDeviceMetric )");
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
  return QTreeView::metric(arg__1);
}
void PythonQtShell_QTreeView::mouseDoubleClickEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "mouseDoubleClickEvent(QTreeView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::mouseDoubleClickEvent(event);
}
void PythonQtShell_QTreeView::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "mouseMoveEvent(QTreeView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::mouseMoveEvent(event);
}
void PythonQtShell_QTreeView::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "mousePressEvent(QTreeView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::mousePressEvent(event);
}
void PythonQtShell_QTreeView::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "mouseReleaseEvent(QTreeView*,QMouseEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::mouseReleaseEvent(event);
}
void PythonQtShell_QTreeView::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "moveEvent(QTreeView*,QMoveEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTreeView::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "paintEngine(QTreeView*)");
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
  return QTreeView::paintEngine();
}
void PythonQtShell_QTreeView::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "paintEvent(QTreeView*,QPaintEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::paintEvent(event);
}
void PythonQtShell_QTreeView::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "reset(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::reset();
}
void PythonQtShell_QTreeView::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "resizeEvent(QTreeView*,QResizeEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::resizeEvent(event);
}
void PythonQtShell_QTreeView::rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsAboutToBeRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "rowsAboutToBeRemoved(QTreeView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::rowsAboutToBeRemoved(parent, start, end);
}
void PythonQtShell_QTreeView::rowsInserted(const QModelIndex&  parent, int  start, int  end)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowsInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "rowsInserted(QTreeView*,const QModelIndex& ,int ,int )");
    void* args[4] = {NULL, (void*)&parent, (void*)&start, (void*)&end};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::rowsInserted(parent, start, end);
}
void PythonQtShell_QTreeView::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "scrollContentsBy(QTreeView*,int ,int )");
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTreeView::scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollTo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "scrollTo(QTreeView*,const QModelIndex& ,QAbstractItemView::ScrollHint )");
    void* args[3] = {NULL, (void*)&index, (void*)&hint};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::scrollTo(index, hint);
}
void PythonQtShell_QTreeView::selectAll()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectAll");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "selectAll(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::selectAll();
}
QList<QModelIndex >  PythonQtShell_QTreeView::selectedIndexes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectedIndexes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "selectedIndexes(QTreeView*)");
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
  return QTreeView::selectedIndexes();
}
void PythonQtShell_QTreeView::selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "selectionChanged(QTreeView*,const QItemSelection& ,const QItemSelection& )");
    void* args[3] = {NULL, (void*)&selected, (void*)&deselected};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::selectionChanged(selected, deselected);
}
QItemSelectionModel::SelectionFlags  PythonQtShell_QTreeView::selectionCommand(const QModelIndex&  index, const QEvent*  event) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "selectionCommand");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "selectionCommand(QTreeView*,const QModelIndex& ,const QEvent* )");
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
  return QTreeView::selectionCommand(index, event);
}
void PythonQtShell_QTreeView::setModel(QAbstractItemModel*  model)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "setModel(QTreeView*,QAbstractItemModel* )");
    void* args[2] = {NULL, (void*)&model};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setModel(model);
}
void PythonQtShell_QTreeView::setRootIndex(const QModelIndex&  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setRootIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "setRootIndex(QTreeView*,const QModelIndex& )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setRootIndex(index);
}
void PythonQtShell_QTreeView::setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "setSelection(QTreeView*,const QRect& ,QItemSelectionModel::SelectionFlags )");
    void* args[3] = {NULL, (void*)&rect, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setSelection(rect, command);
}
void PythonQtShell_QTreeView::setSelectionModel(QItemSelectionModel*  selectionModel)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelectionModel");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "setSelectionModel(QTreeView*,QItemSelectionModel* )");
    void* args[2] = {NULL, (void*)&selectionModel};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::setSelectionModel(selectionModel);
}
void PythonQtShell_QTreeView::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "showEvent(QTreeView*,QShowEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::showEvent(arg__1);
}
int  PythonQtShell_QTreeView::sizeHintForColumn(int  column) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForColumn");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "sizeHintForColumn(QTreeView*,int )");
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
  return QTreeView::sizeHintForColumn(column);
}
int  PythonQtShell_QTreeView::sizeHintForRow(int  row) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sizeHintForRow");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "sizeHintForRow(QTreeView*,int )");
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
  return QTreeView::sizeHintForRow(row);
}
void PythonQtShell_QTreeView::startDrag(Qt::DropActions  supportedActions)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDrag");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "startDrag(QTreeView*,Qt::DropActions )");
    void* args[2] = {NULL, (void*)&supportedActions};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::startDrag(supportedActions);
}
void PythonQtShell_QTreeView::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "tabletEvent(QTreeView*,QTabletEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::tabletEvent(arg__1);
}
void PythonQtShell_QTreeView::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "timerEvent(QTreeView*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::timerEvent(event);
}
void PythonQtShell_QTreeView::updateEditorData()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "updateEditorData(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::updateEditorData();
}
void PythonQtShell_QTreeView::updateEditorGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateEditorGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "updateEditorGeometries(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::updateEditorGeometries();
}
void PythonQtShell_QTreeView::updateGeometries()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateGeometries");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "updateGeometries(QTreeView*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::updateGeometries();
}
int  PythonQtShell_QTreeView::verticalOffset() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalOffset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "verticalOffset(QTreeView*)");
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
  return QTreeView::verticalOffset();
}
void PythonQtShell_QTreeView::verticalScrollbarAction(int  action)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarAction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "verticalScrollbarAction(QTreeView*,int )");
    void* args[2] = {NULL, (void*)&action};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::verticalScrollbarAction(action);
}
void PythonQtShell_QTreeView::verticalScrollbarValueChanged(int  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "verticalScrollbarValueChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "verticalScrollbarValueChanged(QTreeView*,int )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::verticalScrollbarValueChanged(value);
}
QStyleOptionViewItem  PythonQtShell_QTreeView::viewOptions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewOptions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "viewOptions(QTreeView*)");
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
  return QTreeView::viewOptions();
}
bool  PythonQtShell_QTreeView::viewportEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "viewportEvent(QTreeView*,QEvent* )");
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
  return QTreeView::viewportEvent(event);
}
QRect  PythonQtShell_QTreeView::visualRect(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "visualRect(QTreeView*,const QModelIndex& )");
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
  return QTreeView::visualRect(index);
}
QRegion  PythonQtShell_QTreeView::visualRegionForSelection(const QItemSelection&  selection) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "visualRegionForSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "visualRegionForSelection(QTreeView*,const QItemSelection& )");
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
  return QTreeView::visualRegionForSelection(selection);
}
void PythonQtShell_QTreeView::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTreeView::staticMetaObject,
      "wheelEvent(QTreeView*,QWheelEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTreeView::wheelEvent(arg__1);
}
QTreeView* PythonQtWrapper_QTreeView::new_QTreeView(QWidget*  parent)
{ 
return new PythonQtShell_QTreeView(parent); }

bool  PythonQtWrapper_QTreeView::isAnimated(QTreeView* theWrappedObject) const
{
return  theWrappedObject->isAnimated();
}

QRect  PythonQtWrapper_QTreeView::visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_visualRect(index);
}

int  PythonQtWrapper_QTreeView::columnViewportPosition(QTreeView* theWrappedObject, int  column) const
{
return  theWrappedObject->columnViewportPosition(column);
}

void PythonQtWrapper_QTreeView::setSortingEnabled(QTreeView* theWrappedObject, bool  enable)
{
 theWrappedObject->setSortingEnabled(enable);
}

void PythonQtWrapper_QTreeView::reset(QTreeView* theWrappedObject)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_reset();
}

void PythonQtWrapper_QTreeView::setAnimated(QTreeView* theWrappedObject, bool  enable)
{
 theWrappedObject->setAnimated(enable);
}

void PythonQtWrapper_QTreeView::setItemsExpandable(QTreeView* theWrappedObject, bool  enable)
{
 theWrappedObject->setItemsExpandable(enable);
}

int  PythonQtWrapper_QTreeView::indentation(QTreeView* theWrappedObject) const
{
return  theWrappedObject->indentation();
}

void PythonQtWrapper_QTreeView::mousePressEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mousePressEvent(event);
}

bool  PythonQtWrapper_QTreeView::isColumnHidden(QTreeView* theWrappedObject, int  column) const
{
return  theWrappedObject->isColumnHidden(column);
}

QList<QModelIndex >  PythonQtWrapper_QTreeView::selectedIndexes(QTreeView* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_selectedIndexes();
}

bool  PythonQtWrapper_QTreeView::isHeaderHidden(QTreeView* theWrappedObject) const
{
return  theWrappedObject->isHeaderHidden();
}

void PythonQtWrapper_QTreeView::paintEvent(QTreeView* theWrappedObject, QPaintEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_paintEvent(event);
}

bool  PythonQtWrapper_QTreeView::wordWrap(QTreeView* theWrappedObject) const
{
return  theWrappedObject->wordWrap();
}

void PythonQtWrapper_QTreeView::setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setSelectionModel(selectionModel);
}

bool  PythonQtWrapper_QTreeView::isIndexHidden(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_isIndexHidden(index);
}

void PythonQtWrapper_QTreeView::setHeaderHidden(QTreeView* theWrappedObject, bool  hide)
{
 theWrappedObject->setHeaderHidden(hide);
}

void PythonQtWrapper_QTreeView::selectionChanged(QTreeView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_selectionChanged(selected, deselected);
}

void PythonQtWrapper_QTreeView::setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable)
{
 theWrappedObject->setExpandsOnDoubleClick(enable);
}

QModelIndex  PythonQtWrapper_QTreeView::indexAt(QTreeView* theWrappedObject, const QPoint&  p) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_indexAt(p);
}

bool  PythonQtWrapper_QTreeView::uniformRowHeights(QTreeView* theWrappedObject) const
{
return  theWrappedObject->uniformRowHeights();
}

bool  PythonQtWrapper_QTreeView::viewportEvent(QTreeView* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_viewportEvent(event);
}

bool  PythonQtWrapper_QTreeView::expandsOnDoubleClick(QTreeView* theWrappedObject) const
{
return  theWrappedObject->expandsOnDoubleClick();
}

void PythonQtWrapper_QTreeView::rowsInserted(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_rowsInserted(parent, start, end);
}

QRegion  PythonQtWrapper_QTreeView::visualRegionForSelection(QTreeView* theWrappedObject, const QItemSelection&  selection) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_visualRegionForSelection(selection);
}

void PythonQtWrapper_QTreeView::keyPressEvent(QTreeView* theWrappedObject, QKeyEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_keyPressEvent(event);
}

QHeaderView*  PythonQtWrapper_QTreeView::header(QTreeView* theWrappedObject) const
{
return  theWrappedObject->header();
}

int  PythonQtWrapper_QTreeView::verticalOffset(QTreeView* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_verticalOffset();
}

bool  PythonQtWrapper_QTreeView::isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return  theWrappedObject->isFirstColumnSpanned(row, parent);
}

void PythonQtWrapper_QTreeView::setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setModel(model);
}

int  PythonQtWrapper_QTreeView::autoExpandDelay(QTreeView* theWrappedObject) const
{
return  theWrappedObject->autoExpandDelay();
}

bool  PythonQtWrapper_QTreeView::isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->isExpanded(index);
}

void PythonQtWrapper_QTreeView::setSelection(QTreeView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setSelection(rect, command);
}

void PythonQtWrapper_QTreeView::setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable)
{
 theWrappedObject->setAllColumnsShowFocus(enable);
}

QModelIndex  PythonQtWrapper_QTreeView::indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->indexAbove(index);
}

void PythonQtWrapper_QTreeView::setAutoExpandDelay(QTreeView* theWrappedObject, int  delay)
{
 theWrappedObject->setAutoExpandDelay(delay);
}

bool  PythonQtWrapper_QTreeView::isSortingEnabled(QTreeView* theWrappedObject) const
{
return  theWrappedObject->isSortingEnabled();
}

void PythonQtWrapper_QTreeView::setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide)
{
 theWrappedObject->setColumnHidden(column, hide);
}

void PythonQtWrapper_QTreeView::setIndentation(QTreeView* theWrappedObject, int  i)
{
 theWrappedObject->setIndentation(i);
}

QModelIndex  PythonQtWrapper_QTreeView::indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->indexBelow(index);
}

void PythonQtWrapper_QTreeView::horizontalScrollbarAction(QTreeView* theWrappedObject, int  action)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_horizontalScrollbarAction(action);
}

bool  PythonQtWrapper_QTreeView::isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return  theWrappedObject->isRowHidden(row, parent);
}

void PythonQtWrapper_QTreeView::mouseDoubleClickEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseDoubleClickEvent(event);
}

void PythonQtWrapper_QTreeView::scrollContentsBy(QTreeView* theWrappedObject, int  dx, int  dy)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_scrollContentsBy(dx, dy);
}

void PythonQtWrapper_QTreeView::setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_setRootIndex(index);
}

void PythonQtWrapper_QTreeView::drawBranches(QTreeView* theWrappedObject, QPainter*  painter, const QRect&  rect, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_drawBranches(painter, rect, index);
}

bool  PythonQtWrapper_QTreeView::itemsExpandable(QTreeView* theWrappedObject) const
{
return  theWrappedObject->itemsExpandable();
}

void PythonQtWrapper_QTreeView::setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand)
{
 theWrappedObject->setExpanded(index, expand);
}

void PythonQtWrapper_QTreeView::dragMoveEvent(QTreeView* theWrappedObject, QDragMoveEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_dragMoveEvent(event);
}

int  PythonQtWrapper_QTreeView::columnAt(QTreeView* theWrappedObject, int  x) const
{
return  theWrappedObject->columnAt(x);
}

void PythonQtWrapper_QTreeView::setWordWrap(QTreeView* theWrappedObject, bool  on)
{
 theWrappedObject->setWordWrap(on);
}

void PythonQtWrapper_QTreeView::scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_scrollTo(index, hint);
}

void PythonQtWrapper_QTreeView::setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform)
{
 theWrappedObject->setUniformRowHeights(uniform);
}

void PythonQtWrapper_QTreeView::mouseReleaseEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseReleaseEvent(event);
}

bool  PythonQtWrapper_QTreeView::rootIsDecorated(QTreeView* theWrappedObject) const
{
return  theWrappedObject->rootIsDecorated();
}

bool  PythonQtWrapper_QTreeView::allColumnsShowFocus(QTreeView* theWrappedObject) const
{
return  theWrappedObject->allColumnsShowFocus();
}

void PythonQtWrapper_QTreeView::setColumnWidth(QTreeView* theWrappedObject, int  column, int  width)
{
 theWrappedObject->setColumnWidth(column, width);
}

void PythonQtWrapper_QTreeView::sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order)
{
 theWrappedObject->sortByColumn(column, order);
}

void PythonQtWrapper_QTreeView::rowsAboutToBeRemoved(QTreeView* theWrappedObject, const QModelIndex&  parent, int  start, int  end)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_rowsAboutToBeRemoved(parent, start, end);
}

int  PythonQtWrapper_QTreeView::horizontalOffset(QTreeView* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_horizontalOffset();
}

int  PythonQtWrapper_QTreeView::sizeHintForColumn(QTreeView* theWrappedObject, int  column) const
{
return  ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_sizeHintForColumn(column);
}

void PythonQtWrapper_QTreeView::drawRow(QTreeView* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  options, const QModelIndex&  index) const
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_drawRow(painter, options, index);
}

void PythonQtWrapper_QTreeView::setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide)
{
 theWrappedObject->setRowHidden(row, parent, hide);
}

void PythonQtWrapper_QTreeView::doItemsLayout(QTreeView* theWrappedObject)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_doItemsLayout();
}

void PythonQtWrapper_QTreeView::mouseMoveEvent(QTreeView* theWrappedObject, QMouseEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_mouseMoveEvent(event);
}

void PythonQtWrapper_QTreeView::keyboardSearch(QTreeView* theWrappedObject, const QString&  search)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_keyboardSearch(search);
}

void PythonQtWrapper_QTreeView::setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span)
{
 theWrappedObject->setFirstColumnSpanned(row, parent, span);
}

void PythonQtWrapper_QTreeView::currentChanged(QTreeView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_currentChanged(current, previous);
}

void PythonQtWrapper_QTreeView::setRootIsDecorated(QTreeView* theWrappedObject, bool  show)
{
 theWrappedObject->setRootIsDecorated(show);
}

int  PythonQtWrapper_QTreeView::columnWidth(QTreeView* theWrappedObject, int  column) const
{
return  theWrappedObject->columnWidth(column);
}

void PythonQtWrapper_QTreeView::updateGeometries(QTreeView* theWrappedObject)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_updateGeometries();
}

void PythonQtWrapper_QTreeView::setHeader(QTreeView* theWrappedObject, QHeaderView*  header)
{
 theWrappedObject->setHeader(header);
}

void PythonQtWrapper_QTreeView::timerEvent(QTreeView* theWrappedObject, QTimerEvent*  event)
{
 ((PythonQtPublicPromoter_QTreeView*)theWrappedObject)->promoted_timerEvent(event);
}

