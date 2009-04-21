#include "PythonQtWrapper_QSqlDriver.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QSize>
#include <QSqlError>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>
#include <qstringlist.h>

bool  PythonQtShell_QSqlDriver::beginTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "beginTransaction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "beginTransaction(QSqlDriver*)");
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
  return QSqlDriver::beginTransaction();
}
void PythonQtShell_QSqlDriver::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "childEvent(QSqlDriver*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::childEvent(arg__1);
}
void PythonQtShell_QSqlDriver::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "close(QSqlDriver*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QSqlDriver::commitTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "commitTransaction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "commitTransaction(QSqlDriver*)");
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
  return QSqlDriver::commitTransaction();
}
QSqlResult*  PythonQtShell_QSqlDriver::createResult() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createResult");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "createResult(QSqlDriver*)");
      QSqlResult*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSqlResult* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QSqlResult*  result;
return result;
}
void PythonQtShell_QSqlDriver::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "customEvent(QSqlDriver*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::customEvent(arg__1);
}
QString  PythonQtShell_QSqlDriver::escapeIdentifier(const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "escapeIdentifier");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "escapeIdentifier(QSqlDriver*,const QString& ,QSqlDriver::IdentifierType )");
      QString  returnValue;
    void* args[3] = {NULL, (void*)&identifier, (void*)&type};
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
  return QSqlDriver::escapeIdentifier(identifier, type);
}
bool  PythonQtShell_QSqlDriver::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "event(QSqlDriver*,QEvent* )");
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
  return QSqlDriver::event(arg__1);
}
bool  PythonQtShell_QSqlDriver::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "eventFilter(QSqlDriver*,QObject* ,QEvent* )");
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
  return QSqlDriver::eventFilter(arg__1, arg__2);
}
QString  PythonQtShell_QSqlDriver::formatValue(const QSqlField&  field, bool  trimStrings) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "formatValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "formatValue(QSqlDriver*,const QSqlField& ,bool )");
      QString  returnValue;
    void* args[3] = {NULL, (void*)&field, (void*)&trimStrings};
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
  return QSqlDriver::formatValue(field, trimStrings);
}
QVariant  PythonQtShell_QSqlDriver::handle() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "handle");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "handle(QSqlDriver*)");
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
  return QSqlDriver::handle();
}
bool  PythonQtShell_QSqlDriver::hasFeature(QSqlDriver::DriverFeature  f) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFeature");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "hasFeature(QSqlDriver*,QSqlDriver::DriverFeature )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&f};
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
bool  PythonQtShell_QSqlDriver::isOpen() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isOpen");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "isOpen(QSqlDriver*)");
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
  return QSqlDriver::isOpen();
}
bool  PythonQtShell_QSqlDriver::open(const QString&  db, const QString&  user, const QString&  password, const QString&  host, int  port, const QString&  connOpts)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "open(QSqlDriver*,const QString& ,const QString& ,const QString& ,const QString& ,int ,const QString& )");
      bool  returnValue;
    void* args[7] = {NULL, (void*)&db, (void*)&user, (void*)&password, (void*)&host, (void*)&port, (void*)&connOpts};
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
QSqlIndex  PythonQtShell_QSqlDriver::primaryIndex(const QString&  tableName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "primaryIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "primaryIndex(QSqlDriver*,const QString& )");
      QSqlIndex  returnValue;
    void* args[2] = {NULL, (void*)&tableName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QSqlIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSqlDriver::primaryIndex(tableName);
}
QSqlRecord  PythonQtShell_QSqlDriver::record(const QString&  tableName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "record");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "record(QSqlDriver*,const QString& )");
      QSqlRecord  returnValue;
    void* args[2] = {NULL, (void*)&tableName};
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
  return QSqlDriver::record(tableName);
}
bool  PythonQtShell_QSqlDriver::rollbackTransaction()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rollbackTransaction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "rollbackTransaction(QSqlDriver*)");
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
  return QSqlDriver::rollbackTransaction();
}
void PythonQtShell_QSqlDriver::setLastError(const QSqlError&  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "setLastError(QSqlDriver*,const QSqlError& )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setLastError(e);
}
void PythonQtShell_QSqlDriver::setOpen(bool  o)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOpen");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "setOpen(QSqlDriver*,bool )");
    void* args[2] = {NULL, (void*)&o};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setOpen(o);
}
void PythonQtShell_QSqlDriver::setOpenError(bool  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOpenError");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "setOpenError(QSqlDriver*,bool )");
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::setOpenError(e);
}
QString  PythonQtShell_QSqlDriver::sqlStatement(QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sqlStatement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "sqlStatement(QSqlDriver*,QSqlDriver::StatementType ,const QString& ,const QSqlRecord& ,bool )");
      QString  returnValue;
    void* args[5] = {NULL, (void*)&type, (void*)&tableName, (void*)&rec, (void*)&preparedStatement};
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
  return QSqlDriver::sqlStatement(type, tableName, rec, preparedStatement);
}
QStringList  PythonQtShell_QSqlDriver::tables(QSql::TableType  tableType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tables");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "tables(QSqlDriver*,QSql::TableType )");
      QStringList  returnValue;
    void* args[2] = {NULL, (void*)&tableType};
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
  return QSqlDriver::tables(tableType);
}
void PythonQtShell_QSqlDriver::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSqlDriver::staticMetaObject,
      "timerEvent(QSqlDriver*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSqlDriver::timerEvent(arg__1);
}
QSqlDriver* PythonQtWrapper_QSqlDriver::new_QSqlDriver(QObject*  parent)
{ 
return new PythonQtShell_QSqlDriver(parent); }

bool  PythonQtWrapper_QSqlDriver::commitTransaction(QSqlDriver* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_commitTransaction();
}

void PythonQtWrapper_QSqlDriver::setOpenError(QSqlDriver* theWrappedObject, bool  e)
{
 ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpenError(e);
}

void PythonQtWrapper_QSqlDriver::setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e)
{
 ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setLastError(e);
}

bool  PythonQtWrapper_QSqlDriver::unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
return  theWrappedObject->unsubscribeFromNotification(name);
}

bool  PythonQtWrapper_QSqlDriver::beginTransaction(QSqlDriver* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_beginTransaction();
}

QSqlError  PythonQtWrapper_QSqlDriver::lastError(QSqlDriver* theWrappedObject) const
{
return  theWrappedObject->lastError();
}

QSqlRecord  PythonQtWrapper_QSqlDriver::record(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_record(tableName);
}

QString  PythonQtWrapper_QSqlDriver::escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_escapeIdentifier(identifier, type);
}

QStringList  PythonQtWrapper_QSqlDriver::tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_tables(tableType);
}

QString  PythonQtWrapper_QSqlDriver::sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_sqlStatement(type, tableName, rec, preparedStatement);
}

QVariant  PythonQtWrapper_QSqlDriver::handle(QSqlDriver* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_handle();
}

QString  PythonQtWrapper_QSqlDriver::formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_formatValue(field, trimStrings);
}

bool  PythonQtWrapper_QSqlDriver::isOpen(QSqlDriver* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_isOpen();
}

bool  PythonQtWrapper_QSqlDriver::rollbackTransaction(QSqlDriver* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_rollbackTransaction();
}

void PythonQtWrapper_QSqlDriver::setOpen(QSqlDriver* theWrappedObject, bool  o)
{
 ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpen(o);
}

bool  PythonQtWrapper_QSqlDriver::isOpenError(QSqlDriver* theWrappedObject) const
{
return  theWrappedObject->isOpenError();
}

QSqlIndex  PythonQtWrapper_QSqlDriver::primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
return  ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_primaryIndex(tableName);
}

bool  PythonQtWrapper_QSqlDriver::subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
return  theWrappedObject->subscribeToNotification(name);
}

QStringList  PythonQtWrapper_QSqlDriver::subscribedToNotifications(QSqlDriver* theWrappedObject) const
{
return  theWrappedObject->subscribedToNotifications();
}

