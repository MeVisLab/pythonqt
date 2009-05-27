#include "PythonQtWrapper_QItemSelectionModel.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>

void PythonQtShell_QItemSelectionModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::childEvent(arg__1);
}
void PythonQtShell_QItemSelectionModel::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::clear();
}
void PythonQtShell_QItemSelectionModel::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::customEvent(arg__1);
}
bool  PythonQtShell_QItemSelectionModel::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemSelectionModel::event(arg__1);
}
bool  PythonQtShell_QItemSelectionModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemSelectionModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QItemSelectionModel::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::reset();
}
void PythonQtShell_QItemSelectionModel::select(const QItemSelection&  selection, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QItemSelection&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&selection, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::select(selection, command);
}
void PythonQtShell_QItemSelectionModel::select(const QModelIndex&  index, QItemSelectionModel::SelectionFlags  command)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "select");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "QItemSelectionModel::SelectionFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&command};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::select(index, command);
}
void PythonQtShell_QItemSelectionModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QItemSelectionModel::timerEvent(arg__1);
}
QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model)
{ 
return new PythonQtShell_QItemSelectionModel(model); }

QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent)
{ 
return new PythonQtShell_QItemSelectionModel(model, parent); }

const QItemSelection  PythonQtWrapper_QItemSelectionModel::selection(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->selection());
}

bool  PythonQtWrapper_QItemSelectionModel::columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->columnIntersectsSelection(column, parent));
}

bool  PythonQtWrapper_QItemSelectionModel::isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->isSelected(index));
}

bool  PythonQtWrapper_QItemSelectionModel::isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isColumnSelected(column, parent));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedColumns(QItemSelectionModel* theWrappedObject, int  row) const
{
  return ( theWrappedObject->selectedColumns(row));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedIndexes(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->selectedIndexes());
}

bool  PythonQtWrapper_QItemSelectionModel::isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->isRowSelected(row, parent));
}

QModelIndex  PythonQtWrapper_QItemSelectionModel::currentIndex(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

const QAbstractItemModel*  PythonQtWrapper_QItemSelectionModel::model(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QItemSelectionModel::hasSelection(QItemSelectionModel* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

bool  PythonQtWrapper_QItemSelectionModel::rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
  return ( theWrappedObject->rowIntersectsSelection(row, parent));
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedRows(QItemSelectionModel* theWrappedObject, int  column) const
{
  return ( theWrappedObject->selectedRows(column));
}

