#include "PythonQtWrapper_QStandardItemModel.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstandarditemmodel.h>
#include <qstringlist.h>

QModelIndex  PythonQtShell_QStandardItemModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "buddy(QStandardItemModel*,const QModelIndex& )");
      QModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  return QStandardItemModel::buddy(index);
}
bool  PythonQtShell_QStandardItemModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "canFetchMore(QStandardItemModel*,const QModelIndex& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  return QStandardItemModel::canFetchMore(parent);
}
void PythonQtShell_QStandardItemModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "childEvent(QStandardItemModel*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::childEvent(arg__1);
}
int  PythonQtShell_QStandardItemModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "columnCount(QStandardItemModel*,const QModelIndex& )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  return QStandardItemModel::columnCount(parent);
}
void PythonQtShell_QStandardItemModel::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "customEvent(QStandardItemModel*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QStandardItemModel::data(const QModelIndex&  index, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "data(QStandardItemModel*,const QModelIndex& ,int )");
      QVariant  returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&role};
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
  return QStandardItemModel::data(index, role);
}
bool  PythonQtShell_QStandardItemModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "dropMimeData(QStandardItemModel*,const QMimeData* ,Qt::DropAction ,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  return QStandardItemModel::dropMimeData(data, action, row, column, parent);
}
bool  PythonQtShell_QStandardItemModel::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "event(QStandardItemModel*,QEvent* )");
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
  return QStandardItemModel::event(arg__1);
}
bool  PythonQtShell_QStandardItemModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "eventFilter(QStandardItemModel*,QObject* ,QEvent* )");
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
  return QStandardItemModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QStandardItemModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "fetchMore(QStandardItemModel*,const QModelIndex& )");
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::fetchMore(parent);
}
Qt::ItemFlags  PythonQtShell_QStandardItemModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "flags(QStandardItemModel*,const QModelIndex& )");
      Qt::ItemFlags  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((Qt::ItemFlags *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItemModel::flags(index);
}
bool  PythonQtShell_QStandardItemModel::hasChildren(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasChildren");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "hasChildren(QStandardItemModel*,const QModelIndex& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  return QStandardItemModel::hasChildren(parent);
}
QVariant  PythonQtShell_QStandardItemModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "headerData(QStandardItemModel*,int ,Qt::Orientation ,int )");
      QVariant  returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
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
  return QStandardItemModel::headerData(section, orientation, role);
}
QModelIndex  PythonQtShell_QStandardItemModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "index(QStandardItemModel*,int ,int ,const QModelIndex& )");
      QModelIndex  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
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
  return QStandardItemModel::index(row, column, parent);
}
bool  PythonQtShell_QStandardItemModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "insertColumns(QStandardItemModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  return QStandardItemModel::insertColumns(column, count, parent);
}
bool  PythonQtShell_QStandardItemModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "insertRows(QStandardItemModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  return QStandardItemModel::insertRows(row, count, parent);
}
QMap<int , QVariant >  PythonQtShell_QStandardItemModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "itemData(QStandardItemModel*,const QModelIndex& )");
      QMap<int , QVariant >  returnValue;
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QMap<int , QVariant > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItemModel::itemData(index);
}
QList<QModelIndex >  PythonQtShell_QStandardItemModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "match(QStandardItemModel*,const QModelIndex& ,int ,const QVariant& ,int ,Qt::MatchFlags )");
      QList<QModelIndex >  returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
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
  return QStandardItemModel::match(start, role, value, hits, flags);
}
QMimeData*  PythonQtShell_QStandardItemModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "mimeData(QStandardItemModel*,const QList<QModelIndex >& )");
      QMimeData*  returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  return QStandardItemModel::mimeData(indexes);
}
QStringList  PythonQtShell_QStandardItemModel::mimeTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "mimeTypes(QStandardItemModel*)");
      QStringList  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QStringList *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItemModel::mimeTypes();
}
QModelIndex  PythonQtShell_QStandardItemModel::parent(const QModelIndex&  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "parent(QStandardItemModel*,const QModelIndex& )");
      QModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&child};
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
  return QStandardItemModel::parent(child);
}
bool  PythonQtShell_QStandardItemModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "removeColumns(QStandardItemModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  return QStandardItemModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QStandardItemModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "removeRows(QStandardItemModel*,int ,int ,const QModelIndex& )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  return QStandardItemModel::removeRows(row, count, parent);
}
void PythonQtShell_QStandardItemModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "revert(QStandardItemModel*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::revert();
}
int  PythonQtShell_QStandardItemModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "rowCount(QStandardItemModel*,const QModelIndex& )");
      int  returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  return QStandardItemModel::rowCount(parent);
}
bool  PythonQtShell_QStandardItemModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "setData(QStandardItemModel*,const QModelIndex& ,const QVariant& ,int )");
      bool  returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
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
  return QStandardItemModel::setData(index, value, role);
}
bool  PythonQtShell_QStandardItemModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "setHeaderData(QStandardItemModel*,int ,Qt::Orientation ,const QVariant& ,int )");
      bool  returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
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
  return QStandardItemModel::setHeaderData(section, orientation, value, role);
}
bool  PythonQtShell_QStandardItemModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "setItemData(QStandardItemModel*,const QModelIndex& ,const QMap<int , QVariant >& )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
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
  return QStandardItemModel::setItemData(index, roles);
}
void PythonQtShell_QStandardItemModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "sort(QStandardItemModel*,int ,Qt::SortOrder )");
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::sort(column, order);
}
QSize  PythonQtShell_QStandardItemModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "span(QStandardItemModel*,const QModelIndex& )");
      QSize  returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  return QStandardItemModel::span(index);
}
bool  PythonQtShell_QStandardItemModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "submit(QStandardItemModel*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QStandardItemModel::submit();
}
Qt::DropActions  PythonQtShell_QStandardItemModel::supportedDropActions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportedDropActions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "supportedDropActions(QStandardItemModel*)");
      Qt::DropActions  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((Qt::DropActions *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStandardItemModel::supportedDropActions();
}
void PythonQtShell_QStandardItemModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QStandardItemModel::staticMetaObject,
      "timerEvent(QStandardItemModel*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QStandardItemModel::timerEvent(arg__1);
}
QStandardItemModel* PythonQtWrapper_QStandardItemModel::new_QStandardItemModel(QObject*  parent)
{ 
return new PythonQtShell_QStandardItemModel(parent); }

QStandardItemModel* PythonQtWrapper_QStandardItemModel::new_QStandardItemModel(int  rows, int  columns, QObject*  parent)
{ 
return new PythonQtShell_QStandardItemModel(rows, columns, parent); }

QMap<int , QVariant >  PythonQtWrapper_QStandardItemModel::itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_itemData(index);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeItem(QStandardItemModel* theWrappedObject, int  row, int  column)
{
return  theWrappedObject->takeItem(row, column);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::item(QStandardItemModel* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->item(row, column);
}

Qt::DropActions  PythonQtWrapper_QStandardItemModel::supportedDropActions(QStandardItemModel* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_supportedDropActions();
}

bool  PythonQtWrapper_QStandardItemModel::setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_setData(index, value, role);
}

QModelIndex  PythonQtWrapper_QStandardItemModel::index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_index(row, column, parent);
}

const QStandardItem*  PythonQtWrapper_QStandardItemModel::itemPrototype(QStandardItemModel* theWrappedObject) const
{
return  theWrappedObject->itemPrototype();
}

void PythonQtWrapper_QStandardItemModel::setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels)
{
 theWrappedObject->setHorizontalHeaderLabels(labels);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::takeRow(QStandardItemModel* theWrappedObject, int  row)
{
return  theWrappedObject->takeRow(row);
}

void PythonQtWrapper_QStandardItemModel::insertRow(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
 theWrappedObject->insertRow(row, item);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->itemFromIndex(index);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const
{
return  theWrappedObject->horizontalHeaderItem(column);
}

void PythonQtWrapper_QStandardItemModel::insertRow(QStandardItemModel* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
 theWrappedObject->insertRow(row, items);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column)
{
return  theWrappedObject->takeHorizontalHeaderItem(column);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row)
{
return  theWrappedObject->takeVerticalHeaderItem(row);
}

Qt::ItemFlags  PythonQtWrapper_QStandardItemModel::flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_flags(index);
}

int  PythonQtWrapper_QStandardItemModel::sortRole(QStandardItemModel* theWrappedObject) const
{
return  theWrappedObject->sortRole();
}

void PythonQtWrapper_QStandardItemModel::setRowCount(QStandardItemModel* theWrappedObject, int  rows)
{
 theWrappedObject->setRowCount(rows);
}

void PythonQtWrapper_QStandardItemModel::appendRow(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items)
{
 theWrappedObject->appendRow(items);
}

void PythonQtWrapper_QStandardItemModel::setItemPrototype(QStandardItemModel* theWrappedObject, const QStandardItem*  item)
{
 theWrappedObject->setItemPrototype(item);
}

QModelIndex  PythonQtWrapper_QStandardItemModel::indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const
{
return  theWrappedObject->indexFromItem(item);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::invisibleRootItem(QStandardItemModel* theWrappedObject) const
{
return  theWrappedObject->invisibleRootItem();
}

bool  PythonQtWrapper_QStandardItemModel::removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_removeRows(row, count, parent);
}

void PythonQtWrapper_QStandardItemModel::setSortRole(QStandardItemModel* theWrappedObject, int  role)
{
 theWrappedObject->setSortRole(role);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::takeColumn(QStandardItemModel* theWrappedObject, int  column)
{
return  theWrappedObject->takeColumn(column);
}

void PythonQtWrapper_QStandardItemModel::appendColumn(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items)
{
 theWrappedObject->appendColumn(items);
}

void PythonQtWrapper_QStandardItemModel::clear(QStandardItemModel* theWrappedObject)
{
 theWrappedObject->clear();
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const
{
return  theWrappedObject->verticalHeaderItem(row);
}

void PythonQtWrapper_QStandardItemModel::appendRow(QStandardItemModel* theWrappedObject, QStandardItem*  item)
{
 theWrappedObject->appendRow(item);
}

void PythonQtWrapper_QStandardItemModel::setItem(QStandardItemModel* theWrappedObject, int  row, int  column, QStandardItem*  item)
{
 theWrappedObject->setItem(row, column, item);
}

void PythonQtWrapper_QStandardItemModel::setItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
 theWrappedObject->setItem(row, item);
}

bool  PythonQtWrapper_QStandardItemModel::insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_insertColumns(column, count, parent);
}

bool  PythonQtWrapper_QStandardItemModel::setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role);
}

QVariant  PythonQtWrapper_QStandardItemModel::data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_data(index, role);
}

QModelIndex  PythonQtWrapper_QStandardItemModel::parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_parent(child);
}

void PythonQtWrapper_QStandardItemModel::setColumnCount(QStandardItemModel* theWrappedObject, int  columns)
{
 theWrappedObject->setColumnCount(columns);
}

void PythonQtWrapper_QStandardItemModel::sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
 ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_sort(column, order);
}

void PythonQtWrapper_QStandardItemModel::setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
 theWrappedObject->setVerticalHeaderItem(row, item);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column) const
{
return  theWrappedObject->findItems(text, flags, column);
}

bool  PythonQtWrapper_QStandardItemModel::hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_hasChildren(parent);
}

void PythonQtWrapper_QStandardItemModel::setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, QStandardItem*  item)
{
 theWrappedObject->setHorizontalHeaderItem(column, item);
}

int  PythonQtWrapper_QStandardItemModel::columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_columnCount(parent);
}

void PythonQtWrapper_QStandardItemModel::insertColumn(QStandardItemModel* theWrappedObject, int  column, const QList<QStandardItem* >&  items)
{
 theWrappedObject->insertColumn(column, items);
}

QVariant  PythonQtWrapper_QStandardItemModel::headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_headerData(section, orientation, role);
}

bool  PythonQtWrapper_QStandardItemModel::removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_removeColumns(column, count, parent);
}

void PythonQtWrapper_QStandardItemModel::setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels)
{
 theWrappedObject->setVerticalHeaderLabels(labels);
}

bool  PythonQtWrapper_QStandardItemModel::insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_insertRows(row, count, parent);
}

int  PythonQtWrapper_QStandardItemModel::rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_rowCount(parent);
}

bool  PythonQtWrapper_QStandardItemModel::setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
return  ((PythonQtPublicPromoter_QStandardItemModel*)theWrappedObject)->promoted_setItemData(index, roles);
}

