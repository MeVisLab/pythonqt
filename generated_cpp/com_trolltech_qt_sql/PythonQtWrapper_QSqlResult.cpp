#include "PythonQtWrapper_QSqlResult.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qvector.h>

void PythonQtShell_QSqlResult::bindValue(const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bindValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "bindValue(QSqlResult*,const QString& ,const QVariant& ,QSql::ParamType )");
    void* args[4] = {NULL, (void*)&placeholder, (void*)&val, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::bindValue(placeholder, val, type);
}
void PythonQtShell_QSqlResult::bindValue(int  pos, const QVariant&  val, QSql::ParamType  type)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bindValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "bindValue(QSqlResult*,int ,const QVariant& ,QSql::ParamType )");
    void* args[4] = {NULL, (void*)&pos, (void*)&val, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::bindValue(pos, val, type);
}
QVariant  PythonQtShell_QSqlResult::data(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "data(QSqlResult*,int )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&i};
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
  QVariant  result;
return result;
}
bool  PythonQtShell_QSqlResult::exec()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "exec");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "exec(QSqlResult*)");
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
  return QSqlResult::exec();
}
bool  PythonQtShell_QSqlResult::fetch(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetch");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "fetch(QSqlResult*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&i};
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
bool  PythonQtShell_QSqlResult::fetchFirst()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchFirst");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "fetchFirst(QSqlResult*)");
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
  bool  result;
return result;
}
bool  PythonQtShell_QSqlResult::fetchLast()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchLast");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "fetchLast(QSqlResult*)");
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
  bool  result;
return result;
}
bool  PythonQtShell_QSqlResult::fetchNext()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchNext");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "fetchNext(QSqlResult*)");
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
  return QSqlResult::fetchNext();
}
bool  PythonQtShell_QSqlResult::fetchPrevious()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchPrevious");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "fetchPrevious(QSqlResult*)");
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
  return QSqlResult::fetchPrevious();
}
QVariant  PythonQtShell_QSqlResult::handle() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "handle");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "handle(QSqlResult*)");
      QVariant  returnValue;
    void* args[1] = {NULL};
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
  return QSqlResult::handle();
}
bool  PythonQtShell_QSqlResult::isNull(int  i)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isNull");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "isNull(QSqlResult*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&i};
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
QVariant  PythonQtShell_QSqlResult::lastInsertId() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "lastInsertId");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "lastInsertId(QSqlResult*)");
      QVariant  returnValue;
    void* args[1] = {NULL};
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
  return QSqlResult::lastInsertId();
}
int  PythonQtShell_QSqlResult::numRowsAffected()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "numRowsAffected");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "numRowsAffected(QSqlResult*)");
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
bool  PythonQtShell_QSqlResult::prepare(const QString&  query)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "prepare");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "prepare(QSqlResult*,const QString& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&query};
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
  return QSqlResult::prepare(query);
}
QSqlRecord  PythonQtShell_QSqlResult::record() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "record");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "record(QSqlResult*)");
      QSqlRecord  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSqlRecord *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlResult::record();
}
bool  PythonQtShell_QSqlResult::reset(const QString&  sqlquery)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "reset(QSqlResult*,const QString& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&sqlquery};
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
bool  PythonQtShell_QSqlResult::savePrepare(const QString&  sqlquery)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "savePrepare");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "savePrepare(QSqlResult*,const QString& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&sqlquery};
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
  return QSqlResult::savePrepare(sqlquery);
}
void PythonQtShell_QSqlResult::setActive(bool  a)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setActive");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setActive(QSqlResult*,bool )");
    void* args[2] = {NULL, (void*)&a};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setActive(a);
}
void PythonQtShell_QSqlResult::setAt(int  at)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setAt");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setAt(QSqlResult*,int )");
    void* args[2] = {NULL, (void*)&at};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setAt(at);
}
void PythonQtShell_QSqlResult::setForwardOnly(bool  forward)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setForwardOnly");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setForwardOnly(QSqlResult*,bool )");
    void* args[2] = {NULL, (void*)&forward};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setForwardOnly(forward);
}
void PythonQtShell_QSqlResult::setLastError(const QSqlError&  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setLastError(QSqlResult*,const QSqlError& )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setLastError(e);
}
void PythonQtShell_QSqlResult::setQuery(const QString&  query)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setQuery(QSqlResult*,const QString& )");
    void* args[2] = {NULL, (void*)&query};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setQuery(query);
}
void PythonQtShell_QSqlResult::setSelect(bool  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSelect");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "setSelect(QSqlResult*,bool )");
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::setSelect(s);
}
int  PythonQtShell_QSqlResult::size()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "size(QSqlResult*)");
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
void PythonQtShell_QSqlResult::virtual_hook(int  id, void*  data)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "virtual_hook");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlResult::staticMetaObject,
      "virtual_hook(QSqlResult*,int ,void* )");
    void* args[3] = {NULL, (void*)&id, (void*)&data};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlResult::virtual_hook(id, data);
}
QVariant  PythonQtWrapper_QSqlResult::handle(QSqlResult* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_handle();
}

bool  PythonQtWrapper_QSqlResult::fetchPrevious(QSqlResult* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchPrevious();
}

bool  PythonQtWrapper_QSqlResult::exec(QSqlResult* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_exec();
}

void PythonQtWrapper_QSqlResult::setActive(QSqlResult* theWrappedObject, bool  a)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setActive(a);
}

bool  PythonQtWrapper_QSqlResult::fetchNext(QSqlResult* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchNext();
}

void PythonQtWrapper_QSqlResult::setAt(QSqlResult* theWrappedObject, int  at)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setAt(at);
}

bool  PythonQtWrapper_QSqlResult::savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery)
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_savePrepare(sqlquery);
}

void PythonQtWrapper_QSqlResult::setForwardOnly(QSqlResult* theWrappedObject, bool  forward)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setForwardOnly(forward);
}

void PythonQtWrapper_QSqlResult::setQuery(QSqlResult* theWrappedObject, const QString&  query)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setQuery(query);
}

void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(placeholder, val, type);
}

QVariant  PythonQtWrapper_QSqlResult::lastInsertId(QSqlResult* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_lastInsertId();
}

QSqlRecord  PythonQtWrapper_QSqlResult::record(QSqlResult* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_record();
}

void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(pos, val, type);
}

void PythonQtWrapper_QSqlResult::setSelect(QSqlResult* theWrappedObject, bool  s)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setSelect(s);
}

bool  PythonQtWrapper_QSqlResult::prepare(QSqlResult* theWrappedObject, const QString&  query)
{
return  ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_prepare(query);
}

void PythonQtWrapper_QSqlResult::setLastError(QSqlResult* theWrappedObject, const QSqlError&  e)
{
 ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setLastError(e);
}

