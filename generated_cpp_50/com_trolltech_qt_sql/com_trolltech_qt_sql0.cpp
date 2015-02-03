#include "com_trolltech_qt_sql0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlField>
#include <QSqlIndex>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlfield.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlrelationaltablemodel.h>
#include <qsqlresult.h>
#include <qsqltablemodel.h>
#include <qstringlist.h>
#include <qvector.h>



PythonQtShell_QSqlDatabase::~PythonQtShell_QSqlDatabase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase()
{ 
return new PythonQtShell_QSqlDatabase(); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(QSqlDriver*  driver)
{ 
return new PythonQtShell_QSqlDatabase(driver); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QSqlDatabase&  other)
{ 
return new PythonQtShell_QSqlDatabase(other); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QString&  type)
{ 
return new PythonQtShell_QSqlDatabase(type); }

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(driver, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName)
{
  return (QSqlDatabase::addDatabase(type, connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName)
{
  return (QSqlDatabase::cloneDatabase(other, connectionName));
}

void PythonQtWrapper_QSqlDatabase::close(QSqlDatabase* theWrappedObject)
{
  ( theWrappedObject->close());
}

bool  PythonQtWrapper_QSqlDatabase::commit(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->commit());
}

QString  PythonQtWrapper_QSqlDatabase::connectOptions(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectOptions());
}

QString  PythonQtWrapper_QSqlDatabase::connectionName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->connectionName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_connectionNames()
{
  return (QSqlDatabase::connectionNames());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_contains(const QString&  connectionName)
{
  return (QSqlDatabase::contains(connectionName));
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_database(const QString&  connectionName, bool  open)
{
  return (QSqlDatabase::database(connectionName, open));
}

QString  PythonQtWrapper_QSqlDatabase::databaseName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->databaseName());
}

QSqlDriver*  PythonQtWrapper_QSqlDatabase::driver(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

QString  PythonQtWrapper_QSqlDatabase::driverName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->driverName());
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_drivers()
{
  return (QSqlDatabase::drivers());
}

QSqlQuery  PythonQtWrapper_QSqlDatabase::exec(QSqlDatabase* theWrappedObject, const QString&  query) const
{
  return ( theWrappedObject->exec(query));
}

QString  PythonQtWrapper_QSqlDatabase::hostName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_isDriverAvailable(const QString&  name)
{
  return (QSqlDatabase::isDriverAvailable(name));
}

bool  PythonQtWrapper_QSqlDatabase::isOpen(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QSqlDatabase::isOpenError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

bool  PythonQtWrapper_QSqlDatabase::isValid(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QSqlError  PythonQtWrapper_QSqlDatabase::lastError(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDatabase::numericalPrecisionPolicy(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->open());
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->open(user, password));
}

QString  PythonQtWrapper_QSqlDatabase::password(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

int  PythonQtWrapper_QSqlDatabase::port(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

QSqlIndex  PythonQtWrapper_QSqlDatabase::primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->primaryIndex(tablename));
}

QSqlRecord  PythonQtWrapper_QSqlDatabase::record(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
  return ( theWrappedObject->record(tablename));
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator)
{
  (QSqlDatabase::registerSqlDriver(name, creator));
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_removeDatabase(const QString&  connectionName)
{
  (QSqlDatabase::removeDatabase(connectionName));
}

bool  PythonQtWrapper_QSqlDatabase::rollback(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->rollback());
}

void PythonQtWrapper_QSqlDatabase::setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options)
{
  ( theWrappedObject->setConnectOptions(options));
}

void PythonQtWrapper_QSqlDatabase::setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setDatabaseName(name));
}

void PythonQtWrapper_QSqlDatabase::setHostName(QSqlDatabase* theWrappedObject, const QString&  host)
{
  ( theWrappedObject->setHostName(host));
}

void PythonQtWrapper_QSqlDatabase::setNumericalPrecisionPolicy(QSqlDatabase* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

void PythonQtWrapper_QSqlDatabase::setPassword(QSqlDatabase* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QSqlDatabase::setPort(QSqlDatabase* theWrappedObject, int  p)
{
  ( theWrappedObject->setPort(p));
}

void PythonQtWrapper_QSqlDatabase::setUserName(QSqlDatabase* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setUserName(name));
}

QStringList  PythonQtWrapper_QSqlDatabase::tables(QSqlDatabase* theWrappedObject, QSql::TableType  type) const
{
  return ( theWrappedObject->tables(type));
}

bool  PythonQtWrapper_QSqlDatabase::transaction(QSqlDatabase* theWrappedObject)
{
  return ( theWrappedObject->transaction());
}

QString  PythonQtWrapper_QSqlDatabase::userName(QSqlDatabase* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

QString PythonQtWrapper_QSqlDatabase::py_toString(QSqlDatabase* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QSqlDriver::~PythonQtShell_QSqlDriver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSqlDriver::beginTransaction()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("beginTransaction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("beginTransaction", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::beginTransaction();
}
bool  PythonQtShell_QSqlDriver::cancelQuery()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("cancelQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("cancelQuery", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::cancelQuery();
}
void PythonQtShell_QSqlDriver::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::childEvent(arg__1);
}
void PythonQtShell_QSqlDriver::close()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("close");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
bool  PythonQtShell_QSqlDriver::commitTransaction()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("commitTransaction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("commitTransaction", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::commitTransaction();
}
QSqlResult*  PythonQtShell_QSqlDriver::createResult() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createResult");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlResult*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlResult* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createResult", methodInfo, result);
        } else {
          returnValue = *((QSqlResult**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return 0;
}
void PythonQtShell_QSqlDriver::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::customEvent(arg__1);
}
QString  PythonQtShell_QSqlDriver::escapeIdentifier(const QString&  identifier0, QSqlDriver::IdentifierType  type1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("escapeIdentifier");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QString&" , "QSqlDriver::IdentifierType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&identifier0, (void*)&type1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("escapeIdentifier", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::escapeIdentifier(identifier0, type1);
}
bool  PythonQtShell_QSqlDriver::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::event(arg__1);
}
bool  PythonQtShell_QSqlDriver::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::eventFilter(arg__1, arg__2);
}
QString  PythonQtShell_QSqlDriver::formatValue(const QSqlField&  field0, bool  trimStrings1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("formatValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QSqlField&" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&field0, (void*)&trimStrings1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("formatValue", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::formatValue(field0, trimStrings1);
}
QVariant  PythonQtShell_QSqlDriver::handle() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("handle");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::handle();
}
bool  PythonQtShell_QSqlDriver::hasFeature(QSqlDriver::DriverFeature  f0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasFeature");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QSqlDriver::DriverFeature"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&f0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hasFeature", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QSqlDriver::isIdentifierEscaped(const QString&  identifier0, QSqlDriver::IdentifierType  type1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isIdentifierEscaped");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "QSqlDriver::IdentifierType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&identifier0, (void*)&type1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isIdentifierEscaped", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::isIdentifierEscaped(identifier0, type1);
}
bool  PythonQtShell_QSqlDriver::isOpen() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isOpen");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isOpen", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::isOpen();
}
bool  PythonQtShell_QSqlDriver::open(const QString&  db0, const QString&  user1, const QString&  password2, const QString&  host3, int  port4, const QString&  connOpts5)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("open");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "const QString&" , "const QString&" , "const QString&" , "int" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(7, argumentList);
      bool returnValue;
    void* args[7] = {NULL, (void*)&db0, (void*)&user1, (void*)&password2, (void*)&host3, (void*)&port4, (void*)&connOpts5};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
QSqlIndex  PythonQtShell_QSqlDriver::primaryIndex(const QString&  tableName0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("primaryIndex");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlIndex" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlIndex returnValue;
    void* args[2] = {NULL, (void*)&tableName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("primaryIndex", methodInfo, result);
        } else {
          returnValue = *((QSqlIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::primaryIndex(tableName0);
}
QSqlRecord  PythonQtShell_QSqlDriver::record(const QString&  tableName0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("record");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlRecord" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlRecord returnValue;
    void* args[2] = {NULL, (void*)&tableName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("record", methodInfo, result);
        } else {
          returnValue = *((QSqlRecord*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::record(tableName0);
}
bool  PythonQtShell_QSqlDriver::rollbackTransaction()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rollbackTransaction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rollbackTransaction", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::rollbackTransaction();
}
void PythonQtShell_QSqlDriver::setLastError(const QSqlError&  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setLastError");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QSqlError&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::setLastError(e0);
}
void PythonQtShell_QSqlDriver::setOpen(bool  o0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setOpen");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&o0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::setOpen(o0);
}
void PythonQtShell_QSqlDriver::setOpenError(bool  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setOpenError");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::setOpenError(e0);
}
QString  PythonQtShell_QSqlDriver::sqlStatement(QSqlDriver::StatementType  type0, const QString&  tableName1, const QSqlRecord&  rec2, bool  preparedStatement3) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sqlStatement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "QSqlDriver::StatementType" , "const QString&" , "const QSqlRecord&" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue;
    void* args[5] = {NULL, (void*)&type0, (void*)&tableName1, (void*)&rec2, (void*)&preparedStatement3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sqlStatement", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::sqlStatement(type0, tableName1, rec2, preparedStatement3);
}
QString  PythonQtShell_QSqlDriver::stripDelimiters(const QString&  identifier0, QSqlDriver::IdentifierType  type1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stripDelimiters");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QString&" , "QSqlDriver::IdentifierType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&identifier0, (void*)&type1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stripDelimiters", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::stripDelimiters(identifier0, type1);
}
bool  PythonQtShell_QSqlDriver::subscribeToNotification(const QString&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subscribeToNotification");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subscribeToNotification", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::subscribeToNotification(name0);
}
QStringList  PythonQtShell_QSqlDriver::subscribedToNotifications() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("subscribedToNotifications");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("subscribedToNotifications", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::subscribedToNotifications();
}
QStringList  PythonQtShell_QSqlDriver::tables(QSql::TableType  tableType0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("tables");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStringList" , "QSql::TableType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QStringList returnValue;
    void* args[2] = {NULL, (void*)&tableType0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("tables", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::tables(tableType0);
}
void PythonQtShell_QSqlDriver::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlDriver::timerEvent(arg__1);
}
bool  PythonQtShell_QSqlDriver::unsubscribeFromNotification(const QString&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("unsubscribeFromNotification");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("unsubscribeFromNotification", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlDriver::unsubscribeFromNotification(name0);
}
QSqlDriver* PythonQtWrapper_QSqlDriver::new_QSqlDriver(QObject*  parent)
{ 
return new PythonQtShell_QSqlDriver(parent); }

bool  PythonQtWrapper_QSqlDriver::beginTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_beginTransaction());
}

bool  PythonQtWrapper_QSqlDriver::cancelQuery(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_cancelQuery());
}

void PythonQtWrapper_QSqlDriver::close(QSqlDriver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_close());
}

bool  PythonQtWrapper_QSqlDriver::commitTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_commitTransaction());
}

QSqlResult*  PythonQtWrapper_QSqlDriver::createResult(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_createResult());
}

QString  PythonQtWrapper_QSqlDriver::escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_escapeIdentifier(identifier, type));
}

QString  PythonQtWrapper_QSqlDriver::formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_formatValue(field, trimStrings));
}

QVariant  PythonQtWrapper_QSqlDriver::handle(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_handle());
}

bool  PythonQtWrapper_QSqlDriver::hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_hasFeature(f));
}

bool  PythonQtWrapper_QSqlDriver::isIdentifierEscaped(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_isIdentifierEscaped(identifier, type));
}

bool  PythonQtWrapper_QSqlDriver::isOpen(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_isOpen());
}

bool  PythonQtWrapper_QSqlDriver::isOpenError(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->isOpenError());
}

QSqlError  PythonQtWrapper_QSqlDriver::lastError(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlDriver::numericalPrecisionPolicy(QSqlDriver* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlDriver::open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user, const QString&  password, const QString&  host, int  port, const QString&  connOpts)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_open(db, user, password, host, port, connOpts));
}

QSqlIndex  PythonQtWrapper_QSqlDriver::primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_primaryIndex(tableName));
}

QSqlRecord  PythonQtWrapper_QSqlDriver::record(QSqlDriver* theWrappedObject, const QString&  tableName) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_record(tableName));
}

bool  PythonQtWrapper_QSqlDriver::rollbackTransaction(QSqlDriver* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_rollbackTransaction());
}

void PythonQtWrapper_QSqlDriver::setLastError(QSqlDriver* theWrappedObject, const QSqlError&  e)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setLastError(e));
}

void PythonQtWrapper_QSqlDriver::setNumericalPrecisionPolicy(QSqlDriver* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

void PythonQtWrapper_QSqlDriver::setOpen(QSqlDriver* theWrappedObject, bool  o)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpen(o));
}

void PythonQtWrapper_QSqlDriver::setOpenError(QSqlDriver* theWrappedObject, bool  e)
{
  ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_setOpenError(e));
}

QString  PythonQtWrapper_QSqlDriver::sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_sqlStatement(type, tableName, rec, preparedStatement));
}

QString  PythonQtWrapper_QSqlDriver::stripDelimiters(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_stripDelimiters(identifier, type));
}

bool  PythonQtWrapper_QSqlDriver::subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_subscribeToNotification(name));
}

QStringList  PythonQtWrapper_QSqlDriver::subscribedToNotifications(QSqlDriver* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_subscribedToNotifications());
}

QStringList  PythonQtWrapper_QSqlDriver::tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_tables(tableType));
}

bool  PythonQtWrapper_QSqlDriver::unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name)
{
  return ( ((PythonQtPublicPromoter_QSqlDriver*)theWrappedObject)->promoted_unsubscribeFromNotification(name));
}



PythonQtShell_QSqlDriverCreatorBase::~PythonQtShell_QSqlDriverCreatorBase() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSqlDriver*  PythonQtShell_QSqlDriverCreatorBase::createObject() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("createObject");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlDriver*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlDriver* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createObject", methodInfo, result);
        } else {
          returnValue = *((QSqlDriver**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return 0;
}
QSqlDriverCreatorBase* PythonQtWrapper_QSqlDriverCreatorBase::new_QSqlDriverCreatorBase()
{ 
return new PythonQtShell_QSqlDriverCreatorBase(); }

QSqlDriver*  PythonQtWrapper_QSqlDriverCreatorBase::createObject(QSqlDriverCreatorBase* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlDriverCreatorBase*)theWrappedObject)->promoted_createObject());
}



QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QSqlError&  other)
{ 
return new QSqlError(other); }

QSqlError* PythonQtWrapper_QSqlError::new_QSqlError(const QString&  driverText, const QString&  databaseText, QSqlError::ErrorType  type, int  number)
{ 
return new QSqlError(driverText, databaseText, type, number); }

QString  PythonQtWrapper_QSqlError::databaseText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->databaseText());
}

QString  PythonQtWrapper_QSqlError::driverText(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->driverText());
}

bool  PythonQtWrapper_QSqlError::isValid(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSqlError::number(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->number());
}

bool  PythonQtWrapper_QSqlError::__ne__(QSqlError* theWrappedObject, const QSqlError&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlError::__eq__(QSqlError* theWrappedObject, const QSqlError&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSqlError::setDatabaseText(QSqlError* theWrappedObject, const QString&  databaseText)
{
  ( theWrappedObject->setDatabaseText(databaseText));
}

void PythonQtWrapper_QSqlError::setDriverText(QSqlError* theWrappedObject, const QString&  driverText)
{
  ( theWrappedObject->setDriverText(driverText));
}

void PythonQtWrapper_QSqlError::setNumber(QSqlError* theWrappedObject, int  number)
{
  ( theWrappedObject->setNumber(number));
}

void PythonQtWrapper_QSqlError::setType(QSqlError* theWrappedObject, QSqlError::ErrorType  type)
{
  ( theWrappedObject->setType(type));
}

QString  PythonQtWrapper_QSqlError::text(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QSqlError::ErrorType  PythonQtWrapper_QSqlError::type(QSqlError* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QSqlError::py_toString(QSqlError* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QSqlField&  other)
{ 
return new QSqlField(other); }

QSqlField* PythonQtWrapper_QSqlField::new_QSqlField(const QString&  fieldName, QVariant::Type  type)
{ 
return new QSqlField(fieldName, type); }

void PythonQtWrapper_QSqlField::clear(QSqlField* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QSqlField::defaultValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->defaultValue());
}

bool  PythonQtWrapper_QSqlField::isAutoValue(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isAutoValue());
}

bool  PythonQtWrapper_QSqlField::isGenerated(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isGenerated());
}

bool  PythonQtWrapper_QSqlField::isNull(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSqlField::isReadOnly(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QSqlField::isValid(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QSqlField::length(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QString  PythonQtWrapper_QSqlField::name(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QSqlField::__ne__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlField::__eq__(QSqlField* theWrappedObject, const QSqlField&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QSqlField::precision(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->precision());
}

QSqlField::RequiredStatus  PythonQtWrapper_QSqlField::requiredStatus(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->requiredStatus());
}

void PythonQtWrapper_QSqlField::setAutoValue(QSqlField* theWrappedObject, bool  autoVal)
{
  ( theWrappedObject->setAutoValue(autoVal));
}

void PythonQtWrapper_QSqlField::setDefaultValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setDefaultValue(value));
}

void PythonQtWrapper_QSqlField::setGenerated(QSqlField* theWrappedObject, bool  gen)
{
  ( theWrappedObject->setGenerated(gen));
}

void PythonQtWrapper_QSqlField::setLength(QSqlField* theWrappedObject, int  fieldLength)
{
  ( theWrappedObject->setLength(fieldLength));
}

void PythonQtWrapper_QSqlField::setName(QSqlField* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QSqlField::setPrecision(QSqlField* theWrappedObject, int  precision)
{
  ( theWrappedObject->setPrecision(precision));
}

void PythonQtWrapper_QSqlField::setReadOnly(QSqlField* theWrappedObject, bool  readOnly)
{
  ( theWrappedObject->setReadOnly(readOnly));
}

void PythonQtWrapper_QSqlField::setRequired(QSqlField* theWrappedObject, bool  required)
{
  ( theWrappedObject->setRequired(required));
}

void PythonQtWrapper_QSqlField::setRequiredStatus(QSqlField* theWrappedObject, QSqlField::RequiredStatus  status)
{
  ( theWrappedObject->setRequiredStatus(status));
}

void PythonQtWrapper_QSqlField::setSqlType(QSqlField* theWrappedObject, int  type)
{
  ( theWrappedObject->setSqlType(type));
}

void PythonQtWrapper_QSqlField::setType(QSqlField* theWrappedObject, QVariant::Type  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QSqlField::setValue(QSqlField* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setValue(value));
}

QVariant::Type  PythonQtWrapper_QSqlField::type(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

int  PythonQtWrapper_QSqlField::typeID(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->typeID());
}

QVariant  PythonQtWrapper_QSqlField::value(QSqlField* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QString PythonQtWrapper_QSqlField::py_toString(QSqlField* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QSqlIndex&  other)
{ 
return new QSqlIndex(other); }

QSqlIndex* PythonQtWrapper_QSqlIndex::new_QSqlIndex(const QString&  cursorName, const QString&  name)
{ 
return new QSqlIndex(cursorName, name); }

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field)
{
  ( theWrappedObject->append(field));
}

void PythonQtWrapper_QSqlIndex::append(QSqlIndex* theWrappedObject, const QSqlField&  field, bool  desc)
{
  ( theWrappedObject->append(field, desc));
}

QString  PythonQtWrapper_QSqlIndex::cursorName(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->cursorName());
}

bool  PythonQtWrapper_QSqlIndex::isDescending(QSqlIndex* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isDescending(i));
}

QString  PythonQtWrapper_QSqlIndex::name(QSqlIndex* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QSqlIndex::setCursorName(QSqlIndex* theWrappedObject, const QString&  cursorName)
{
  ( theWrappedObject->setCursorName(cursorName));
}

void PythonQtWrapper_QSqlIndex::setDescending(QSqlIndex* theWrappedObject, int  i, bool  desc)
{
  ( theWrappedObject->setDescending(i, desc));
}

void PythonQtWrapper_QSqlIndex::setName(QSqlIndex* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}



QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlDatabase  db)
{ 
return new QSqlQuery(db); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(QSqlResult*  r)
{ 
return new QSqlQuery(r); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QSqlQuery&  other)
{ 
return new QSqlQuery(other); }

QSqlQuery* PythonQtWrapper_QSqlQuery::new_QSqlQuery(const QString&  query, QSqlDatabase  db)
{ 
return new QSqlQuery(query, db); }

void PythonQtWrapper_QSqlQuery::addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->addBindValue(val, type));
}

int  PythonQtWrapper_QSqlQuery::at(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->at());
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(placeholder, val, type));
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
  ( theWrappedObject->bindValue(pos, val, type));
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const
{
  return ( theWrappedObject->boundValue(placeholder));
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->boundValue(pos));
}

QMap<QString , QVariant >  PythonQtWrapper_QSqlQuery::boundValues(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->boundValues());
}

void PythonQtWrapper_QSqlQuery::clear(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

const QSqlDriver*  PythonQtWrapper_QSqlQuery::driver(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->driver());
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->exec());
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->exec(query));
}

bool  PythonQtWrapper_QSqlQuery::execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode)
{
  return ( theWrappedObject->execBatch(mode));
}

QString  PythonQtWrapper_QSqlQuery::executedQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->executedQuery());
}

void PythonQtWrapper_QSqlQuery::finish(QSqlQuery* theWrappedObject)
{
  ( theWrappedObject->finish());
}

bool  PythonQtWrapper_QSqlQuery::first(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->first());
}

bool  PythonQtWrapper_QSqlQuery::isActive(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QSqlQuery::isForwardOnly(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isForwardOnly());
}

bool  PythonQtWrapper_QSqlQuery::isNull(QSqlQuery* theWrappedObject, int  field) const
{
  return ( theWrappedObject->isNull(field));
}

bool  PythonQtWrapper_QSqlQuery::isSelect(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isSelect());
}

bool  PythonQtWrapper_QSqlQuery::isValid(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QSqlQuery::last(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->last());
}

QSqlError  PythonQtWrapper_QSqlQuery::lastError(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QVariant  PythonQtWrapper_QSqlQuery::lastInsertId(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastInsertId());
}

QString  PythonQtWrapper_QSqlQuery::lastQuery(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->lastQuery());
}

bool  PythonQtWrapper_QSqlQuery::next(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QSqlQuery::nextResult(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->nextResult());
}

int  PythonQtWrapper_QSqlQuery::numRowsAffected(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numRowsAffected());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlQuery::numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlQuery::prepare(QSqlQuery* theWrappedObject, const QString&  query)
{
  return ( theWrappedObject->prepare(query));
}

bool  PythonQtWrapper_QSqlQuery::previous(QSqlQuery* theWrappedObject)
{
  return ( theWrappedObject->previous());
}

QSqlRecord  PythonQtWrapper_QSqlQuery::record(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

const QSqlResult*  PythonQtWrapper_QSqlQuery::result(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

bool  PythonQtWrapper_QSqlQuery::seek(QSqlQuery* theWrappedObject, int  i, bool  relative)
{
  return ( theWrappedObject->seek(i, relative));
}

void PythonQtWrapper_QSqlQuery::setForwardOnly(QSqlQuery* theWrappedObject, bool  forward)
{
  ( theWrappedObject->setForwardOnly(forward));
}

void PythonQtWrapper_QSqlQuery::setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
  ( theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy));
}

int  PythonQtWrapper_QSqlQuery::size(QSqlQuery* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QVariant  PythonQtWrapper_QSqlQuery::value(QSqlQuery* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QVariant  PythonQtWrapper_QSqlQuery::value(QSqlQuery* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}



PythonQtShell_QSqlQueryModel::~PythonQtShell_QSqlQueryModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QSqlQueryModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("buddy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::buddy(index0);
}
bool  PythonQtShell_QSqlQueryModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canDropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canDropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlQueryModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canFetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::canFetchMore(parent0);
}
void PythonQtShell_QSqlQueryModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::childEvent(arg__1);
}
void PythonQtShell_QSqlQueryModel::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clear");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::clear();
}
int  PythonQtShell_QSqlQueryModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("columnCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::columnCount(parent0);
}
void PythonQtShell_QSqlQueryModel::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlQueryModel::data(const QModelIndex&  item0, int  role1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&item0, (void*)&role1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::data(item0, role1);
}
bool  PythonQtShell_QSqlQueryModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlQueryModel::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::event(arg__1);
}
bool  PythonQtShell_QSqlQueryModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlQueryModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QSqlQueryModel::flags(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("flags");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::flags(index0);
}
QVariant  PythonQtShell_QSqlQueryModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("headerData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QSqlQueryModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("index");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::index(row0, column1, parent2);
}
QModelIndex  PythonQtShell_QSqlQueryModel::indexInQuery(const QModelIndex&  item0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("indexInQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&item0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexInQuery", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::indexInQuery(item0);
}
bool  PythonQtShell_QSqlQueryModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlQueryModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QSqlQueryModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QSqlQueryModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("match");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QSqlQueryModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QSqlQueryModel::mimeTypes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeTypes");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::mimeTypes();
}
bool  PythonQtShell_QSqlQueryModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QSqlQueryModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
void PythonQtShell_QSqlQueryModel::queryChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("queryChange");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::queryChange();
}
bool  PythonQtShell_QSqlQueryModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlQueryModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QSqlQueryModel::revert()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revert");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QSqlQueryModel::roleNames() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("roleNames");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QHash<int , QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("roleNames", methodInfo, result);
        } else {
          returnValue = *((QHash<int , QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::roleNames();
}
int  PythonQtShell_QSqlQueryModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rowCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::rowCount(parent0);
}
bool  PythonQtShell_QSqlQueryModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index0, (void*)&value1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QSqlQueryModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setHeaderData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QSqlQueryModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setItemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index0, (void*)&roles1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::setItemData(index0, roles1);
}
QModelIndex  PythonQtShell_QSqlQueryModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sibling");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&idx2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QSqlQueryModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::sort(column0, order1);
}
QSize  PythonQtShell_QSqlQueryModel::span(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("span");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::span(index0);
}
bool  PythonQtShell_QSqlQueryModel::submit()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("submit");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlQueryModel::supportedDragActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDragActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDragActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QSqlQueryModel::supportedDropActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDropActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlQueryModel::supportedDropActions();
}
void PythonQtShell_QSqlQueryModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlQueryModel::timerEvent(arg__1);
}
QSqlQueryModel* PythonQtWrapper_QSqlQueryModel::new_QSqlQueryModel(QObject*  parent)
{ 
return new PythonQtShell_QSqlQueryModel(parent); }

void PythonQtWrapper_QSqlQueryModel::beginInsertColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_beginInsertColumns(parent, first, last));
}

void PythonQtWrapper_QSqlQueryModel::beginInsertRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_beginInsertRows(parent, first, last));
}

void PythonQtWrapper_QSqlQueryModel::beginRemoveColumns(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_beginRemoveColumns(parent, first, last));
}

void PythonQtWrapper_QSqlQueryModel::beginRemoveRows(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_beginRemoveRows(parent, first, last));
}

void PythonQtWrapper_QSqlQueryModel::beginResetModel(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_beginResetModel());
}

bool  PythonQtWrapper_QSqlQueryModel::canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_canFetchMore(parent));
}

void PythonQtWrapper_QSqlQueryModel::clear(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_clear());
}

int  PythonQtWrapper_QSqlQueryModel::columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_columnCount(parent));
}

QVariant  PythonQtWrapper_QSqlQueryModel::data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_data(item, role));
}

void PythonQtWrapper_QSqlQueryModel::endInsertColumns(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_endInsertColumns());
}

void PythonQtWrapper_QSqlQueryModel::endInsertRows(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_endInsertRows());
}

void PythonQtWrapper_QSqlQueryModel::endRemoveColumns(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_endRemoveColumns());
}

void PythonQtWrapper_QSqlQueryModel::endRemoveRows(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_endRemoveRows());
}

void PythonQtWrapper_QSqlQueryModel::endResetModel(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_endResetModel());
}

void PythonQtWrapper_QSqlQueryModel::fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_fetchMore(parent));
}

QVariant  PythonQtWrapper_QSqlQueryModel::headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

QModelIndex  PythonQtWrapper_QSqlQueryModel::indexInQuery(QSqlQueryModel* theWrappedObject, const QModelIndex&  item) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_indexInQuery(item));
}

bool  PythonQtWrapper_QSqlQueryModel::insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_insertColumns(column, count, parent));
}

QSqlError  PythonQtWrapper_QSqlQueryModel::lastError(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->lastError());
}

QSqlQuery  PythonQtWrapper_QSqlQueryModel::query(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->query());
}

void PythonQtWrapper_QSqlQueryModel::queryChange(QSqlQueryModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_queryChange());
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject, int  row) const
{
  return ( theWrappedObject->record(row));
}

bool  PythonQtWrapper_QSqlQueryModel::removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

int  PythonQtWrapper_QSqlQueryModel::rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_rowCount(parent));
}

bool  PythonQtWrapper_QSqlQueryModel::setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role));
}

void PythonQtWrapper_QSqlQueryModel::setLastError(QSqlQueryModel* theWrappedObject, const QSqlError&  error)
{
  ( ((PythonQtPublicPromoter_QSqlQueryModel*)theWrappedObject)->promoted_setLastError(error));
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query)
{
  ( theWrappedObject->setQuery(query));
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db)
{
  ( theWrappedObject->setQuery(query, db));
}



QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord()
{ 
return new QSqlRecord(); }

QSqlRecord* PythonQtWrapper_QSqlRecord::new_QSqlRecord(const QSqlRecord&  other)
{ 
return new QSqlRecord(other); }

void PythonQtWrapper_QSqlRecord::append(QSqlRecord* theWrappedObject, const QSqlField&  field)
{
  ( theWrappedObject->append(field));
}

void PythonQtWrapper_QSqlRecord::clear(QSqlRecord* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QSqlRecord::clearValues(QSqlRecord* theWrappedObject)
{
  ( theWrappedObject->clearValues());
}

bool  PythonQtWrapper_QSqlRecord::contains(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

int  PythonQtWrapper_QSqlRecord::count(QSqlRecord* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->field(name));
}

QSqlField  PythonQtWrapper_QSqlRecord::field(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->field(i));
}

QString  PythonQtWrapper_QSqlRecord::fieldName(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->fieldName(i));
}

int  PythonQtWrapper_QSqlRecord::indexOf(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->indexOf(name));
}

void PythonQtWrapper_QSqlRecord::insert(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
  ( theWrappedObject->insert(pos, field));
}

bool  PythonQtWrapper_QSqlRecord::isEmpty(QSqlRecord* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isGenerated(name));
}

bool  PythonQtWrapper_QSqlRecord::isGenerated(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isGenerated(i));
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isNull(name));
}

bool  PythonQtWrapper_QSqlRecord::isNull(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->isNull(i));
}

bool  PythonQtWrapper_QSqlRecord::__ne__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSqlRecord::__eq__(QSqlRecord* theWrappedObject, const QSqlRecord&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSqlRecord::remove(QSqlRecord* theWrappedObject, int  pos)
{
  ( theWrappedObject->remove(pos));
}

void PythonQtWrapper_QSqlRecord::replace(QSqlRecord* theWrappedObject, int  pos, const QSqlField&  field)
{
  ( theWrappedObject->replace(pos, field));
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, const QString&  name, bool  generated)
{
  ( theWrappedObject->setGenerated(name, generated));
}

void PythonQtWrapper_QSqlRecord::setGenerated(QSqlRecord* theWrappedObject, int  i, bool  generated)
{
  ( theWrappedObject->setGenerated(i, generated));
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setNull(name));
}

void PythonQtWrapper_QSqlRecord::setNull(QSqlRecord* theWrappedObject, int  i)
{
  ( theWrappedObject->setNull(i));
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, const QString&  name, const QVariant&  val)
{
  ( theWrappedObject->setValue(name, val));
}

void PythonQtWrapper_QSqlRecord::setValue(QSqlRecord* theWrappedObject, int  i, const QVariant&  val)
{
  ( theWrappedObject->setValue(i, val));
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QVariant  PythonQtWrapper_QSqlRecord::value(QSqlRecord* theWrappedObject, int  i) const
{
  return ( theWrappedObject->value(i));
}

QString PythonQtWrapper_QSqlRecord::py_toString(QSqlRecord* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation()
{ 
return new QSqlRelation(); }

QSqlRelation* PythonQtWrapper_QSqlRelation::new_QSqlRelation(const QString&  aTableName, const QString&  indexCol, const QString&  displayCol)
{ 
return new QSqlRelation(aTableName, indexCol, displayCol); }

QString  PythonQtWrapper_QSqlRelation::displayColumn(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->displayColumn());
}

QString  PythonQtWrapper_QSqlRelation::indexColumn(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->indexColumn());
}

bool  PythonQtWrapper_QSqlRelation::isValid(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QSqlRelation::tableName(QSqlRelation* theWrappedObject) const
{
  return ( theWrappedObject->tableName());
}



PythonQtShell_QSqlRelationalTableModel::~PythonQtShell_QSqlRelationalTableModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QSqlRelationalTableModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("buddy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::buddy(index0);
}
bool  PythonQtShell_QSqlRelationalTableModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canDropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canDropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlRelationalTableModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canFetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::canFetchMore(parent0);
}
void PythonQtShell_QSqlRelationalTableModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::childEvent(arg__1);
}
void PythonQtShell_QSqlRelationalTableModel::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clear");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::clear();
}
int  PythonQtShell_QSqlRelationalTableModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("columnCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::columnCount(parent0);
}
void PythonQtShell_QSqlRelationalTableModel::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlRelationalTableModel::data(const QModelIndex&  item0, int  role1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&item0, (void*)&role1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::data(item0, role1);
}
bool  PythonQtShell_QSqlRelationalTableModel::deleteRowFromTable(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("deleteRowFromTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("deleteRowFromTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::deleteRowFromTable(row0);
}
bool  PythonQtShell_QSqlRelationalTableModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlRelationalTableModel::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::event(arg__1);
}
bool  PythonQtShell_QSqlRelationalTableModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlRelationalTableModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QSqlRelationalTableModel::flags(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("flags");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::flags(index0);
}
QVariant  PythonQtShell_QSqlRelationalTableModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("headerData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QSqlRelationalTableModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("index");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::index(row0, column1, parent2);
}
QModelIndex  PythonQtShell_QSqlRelationalTableModel::indexInQuery(const QModelIndex&  item0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("indexInQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&item0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexInQuery", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::indexInQuery(item0);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertRowIntoTable(const QSqlRecord&  values0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRowIntoTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&values0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRowIntoTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::insertRowIntoTable(values0);
}
bool  PythonQtShell_QSqlRelationalTableModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QSqlRelationalTableModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QSqlRelationalTableModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("match");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QSqlRelationalTableModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QSqlRelationalTableModel::mimeTypes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeTypes");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::mimeTypes();
}
bool  PythonQtShell_QSqlRelationalTableModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QSqlRelationalTableModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QString  PythonQtShell_QSqlRelationalTableModel::orderByClause() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("orderByClause");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("orderByClause", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::orderByClause();
}
void PythonQtShell_QSqlRelationalTableModel::queryChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("queryChange");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::queryChange();
}
QSqlTableModel*  PythonQtShell_QSqlRelationalTableModel::relationModel(int  column0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("relationModel");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlTableModel*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSqlTableModel* returnValue;
    void* args[2] = {NULL, (void*)&column0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("relationModel", methodInfo, result);
        } else {
          returnValue = *((QSqlTableModel**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::relationModel(column0);
}
bool  PythonQtShell_QSqlRelationalTableModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlRelationalTableModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QSqlRelationalTableModel::revert()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revert");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::revert();
}
void PythonQtShell_QSqlRelationalTableModel::revertRow(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revertRow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::revertRow(row0);
}
QHash<int , QByteArray >  PythonQtShell_QSqlRelationalTableModel::roleNames() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("roleNames");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QHash<int , QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("roleNames", methodInfo, result);
        } else {
          returnValue = *((QHash<int , QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::roleNames();
}
int  PythonQtShell_QSqlRelationalTableModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rowCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::rowCount(parent0);
}
bool  PythonQtShell_QSqlRelationalTableModel::select()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("select");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("select", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::select();
}
bool  PythonQtShell_QSqlRelationalTableModel::selectRow(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("selectRow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectRow", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::selectRow(row0);
}
QString  PythonQtShell_QSqlRelationalTableModel::selectStatement() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("selectStatement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectStatement", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::selectStatement();
}
bool  PythonQtShell_QSqlRelationalTableModel::setData(const QModelIndex&  item0, const QVariant&  value1, int  role2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&item0, (void*)&value1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::setData(item0, value1, role2);
}
void PythonQtShell_QSqlRelationalTableModel::setEditStrategy(QSqlTableModel::EditStrategy  strategy0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setEditStrategy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QSqlTableModel::EditStrategy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&strategy0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::setEditStrategy(strategy0);
}
void PythonQtShell_QSqlRelationalTableModel::setFilter(const QString&  filter0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&filter0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::setFilter(filter0);
}
bool  PythonQtShell_QSqlRelationalTableModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setHeaderData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QSqlRelationalTableModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setItemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index0, (void*)&roles1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::setItemData(index0, roles1);
}
void PythonQtShell_QSqlRelationalTableModel::setRelation(int  column0, const QSqlRelation&  relation1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setRelation");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "const QSqlRelation&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&relation1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::setRelation(column0, relation1);
}
void PythonQtShell_QSqlRelationalTableModel::setSort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setSort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::setSort(column0, order1);
}
void PythonQtShell_QSqlRelationalTableModel::setTable(const QString&  tableName0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&tableName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::setTable(tableName0);
}
QModelIndex  PythonQtShell_QSqlRelationalTableModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sibling");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&idx2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QSqlRelationalTableModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::sort(column0, order1);
}
QSize  PythonQtShell_QSqlRelationalTableModel::span(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("span");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::span(index0);
}
bool  PythonQtShell_QSqlRelationalTableModel::submit()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("submit");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlRelationalTableModel::supportedDragActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDragActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDragActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QSqlRelationalTableModel::supportedDropActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDropActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::supportedDropActions();
}
void PythonQtShell_QSqlRelationalTableModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlRelationalTableModel::timerEvent(arg__1);
}
bool  PythonQtShell_QSqlRelationalTableModel::updateRowInTable(int  row0, const QSqlRecord&  values1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateRowInTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&row0, (void*)&values1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("updateRowInTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlRelationalTableModel::updateRowInTable(row0, values1);
}
QSqlRelationalTableModel* PythonQtWrapper_QSqlRelationalTableModel::new_QSqlRelationalTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new PythonQtShell_QSqlRelationalTableModel(parent, db); }

void PythonQtWrapper_QSqlRelationalTableModel::clear(QSqlRelationalTableModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_clear());
}

QVariant  PythonQtWrapper_QSqlRelationalTableModel::data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_data(item, role));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::insertRowIntoTable(QSqlRelationalTableModel* theWrappedObject, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_insertRowIntoTable(values));
}

QString  PythonQtWrapper_QSqlRelationalTableModel::orderByClause(QSqlRelationalTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_orderByClause());
}

QSqlRelation  PythonQtWrapper_QSqlRelationalTableModel::relation(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
  return ( theWrappedObject->relation(column));
}

QSqlTableModel*  PythonQtWrapper_QSqlRelationalTableModel::relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_relationModel(column));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

void PythonQtWrapper_QSqlRelationalTableModel::revertRow(QSqlRelationalTableModel* theWrappedObject, int  row)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_revertRow(row));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::select(QSqlRelationalTableModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_select());
}

QString  PythonQtWrapper_QSqlRelationalTableModel::selectStatement(QSqlRelationalTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_selectStatement());
}

bool  PythonQtWrapper_QSqlRelationalTableModel::setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setData(item, value, role));
}

void PythonQtWrapper_QSqlRelationalTableModel::setJoinMode(QSqlRelationalTableModel* theWrappedObject, QSqlRelationalTableModel::JoinMode  joinMode)
{
  ( theWrappedObject->setJoinMode(joinMode));
}

void PythonQtWrapper_QSqlRelationalTableModel::setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setRelation(column, relation));
}

void PythonQtWrapper_QSqlRelationalTableModel::setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName)
{
  ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_setTable(tableName));
}

bool  PythonQtWrapper_QSqlRelationalTableModel::updateRowInTable(QSqlRelationalTableModel* theWrappedObject, int  row, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlRelationalTableModel*)theWrappedObject)->promoted_updateRowInTable(row, values));
}



PythonQtShell_QSqlResult::~PythonQtShell_QSqlResult() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSqlResult::bindValue(const QString&  placeholder0, const QVariant&  val1, QSql::ParamType  type2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bindValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&" , "const QVariant&" , "QSql::ParamType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&placeholder0, (void*)&val1, (void*)&type2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::bindValue(placeholder0, val1, type2);
}
void PythonQtShell_QSqlResult::bindValue(int  pos0, const QVariant&  val1, QSql::ParamType  type2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bindValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "const QVariant&" , "QSql::ParamType"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
    void* args[4] = {NULL, (void*)&pos0, (void*)&val1, (void*)&type2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::bindValue(pos0, val1, type2);
}
QVariant  PythonQtShell_QSqlResult::data(int  i0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&i0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QVariant();
}
void PythonQtShell_QSqlResult::detachFromResultSet()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("detachFromResultSet");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::detachFromResultSet();
}
bool  PythonQtShell_QSqlResult::exec()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("exec");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("exec", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::exec();
}
bool  PythonQtShell_QSqlResult::execBatch(bool  arrayBind0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("execBatch");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arrayBind0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("execBatch", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::execBatch(arrayBind0);
}
bool  PythonQtShell_QSqlResult::fetch(int  i0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetch");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&i0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetch", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchFirst()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchFirst");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchFirst", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchLast()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchLast");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchLast", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QSqlResult::fetchNext()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchNext");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchNext", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::fetchNext();
}
bool  PythonQtShell_QSqlResult::fetchPrevious()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchPrevious");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fetchPrevious", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::fetchPrevious();
}
QVariant  PythonQtShell_QSqlResult::handle() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("handle");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("handle", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::handle();
}
bool  PythonQtShell_QSqlResult::isNull(int  i0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isNull");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&i0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isNull", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
QVariant  PythonQtShell_QSqlResult::lastInsertId() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("lastInsertId");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QVariant returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("lastInsertId", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::lastInsertId();
}
bool  PythonQtShell_QSqlResult::nextResult()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextResult");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nextResult", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::nextResult();
}
int  PythonQtShell_QSqlResult::numRowsAffected()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("numRowsAffected");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("numRowsAffected", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return int();
}
bool  PythonQtShell_QSqlResult::prepare(const QString&  query0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("prepare");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&query0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::prepare(query0);
}
QSqlRecord  PythonQtShell_QSqlResult::record() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("record");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSqlRecord"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSqlRecord returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("record", methodInfo, result);
        } else {
          returnValue = *((QSqlRecord*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::record();
}
bool  PythonQtShell_QSqlResult::reset(const QString&  sqlquery0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&sqlquery0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return bool();
}
bool  PythonQtShell_QSqlResult::savePrepare(const QString&  sqlquery0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("savePrepare");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&sqlquery0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("savePrepare", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlResult::savePrepare(sqlquery0);
}
void PythonQtShell_QSqlResult::setActive(bool  a0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setActive");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&a0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setActive(a0);
}
void PythonQtShell_QSqlResult::setAt(int  at0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setAt");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&at0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setAt(at0);
}
void PythonQtShell_QSqlResult::setForwardOnly(bool  forward0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setForwardOnly");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&forward0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setForwardOnly(forward0);
}
void PythonQtShell_QSqlResult::setLastError(const QSqlError&  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setLastError");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QSqlError&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setLastError(e0);
}
void PythonQtShell_QSqlResult::setNumericalPrecisionPolicy(QSql::NumericalPrecisionPolicy  policy0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setNumericalPrecisionPolicy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QSql::NumericalPrecisionPolicy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&policy0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setNumericalPrecisionPolicy(policy0);
}
void PythonQtShell_QSqlResult::setQuery(const QString&  query0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&query0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setQuery(query0);
}
void PythonQtShell_QSqlResult::setSelect(bool  s0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setSelect");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::setSelect(s0);
}
int  PythonQtShell_QSqlResult::size()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("size");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return int();
}
void PythonQtShell_QSqlResult::virtual_hook(int  id0, void*  data1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("virtual_hook");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "void*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&id0, (void*)&data1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlResult::virtual_hook(id0, data1);
}
QSqlResult* PythonQtWrapper_QSqlResult::new_QSqlResult(const QSqlDriver*  db)
{ 
return new PythonQtShell_QSqlResult(db); }

void PythonQtWrapper_QSqlResult::addBindValue(QSqlResult* theWrappedObject, const QVariant&  val, QSql::ParamType  type)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_addBindValue(val, type));
}

int  PythonQtWrapper_QSqlResult::at(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_at());
}

void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(placeholder, val, type));
}

void PythonQtWrapper_QSqlResult::bindValue(QSqlResult* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValue(pos, val, type));
}

QSql::ParamType  PythonQtWrapper_QSqlResult::bindValueType(QSqlResult* theWrappedObject, const QString&  placeholder) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValueType(placeholder));
}

QSql::ParamType  PythonQtWrapper_QSqlResult::bindValueType(QSqlResult* theWrappedObject, int  pos) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindValueType(pos));
}

int  PythonQtWrapper_QSqlResult::bindingSyntax(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_bindingSyntax());
}

QVariant  PythonQtWrapper_QSqlResult::boundValue(QSqlResult* theWrappedObject, const QString&  placeholder) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_boundValue(placeholder));
}

QVariant  PythonQtWrapper_QSqlResult::boundValue(QSqlResult* theWrappedObject, int  pos) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_boundValue(pos));
}

int  PythonQtWrapper_QSqlResult::boundValueCount(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_boundValueCount());
}

QString  PythonQtWrapper_QSqlResult::boundValueName(QSqlResult* theWrappedObject, int  pos) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_boundValueName(pos));
}

QVector<QVariant >*  PythonQtWrapper_QSqlResult::boundValues(QSqlResult* theWrappedObject) const
{
  return &( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_boundValues());
}

void PythonQtWrapper_QSqlResult::clear(QSqlResult* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_clear());
}

QVariant  PythonQtWrapper_QSqlResult::data(QSqlResult* theWrappedObject, int  i)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_data(i));
}

void PythonQtWrapper_QSqlResult::detachFromResultSet(QSqlResult* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_detachFromResultSet());
}

const QSqlDriver*  PythonQtWrapper_QSqlResult::driver(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_driver());
}

bool  PythonQtWrapper_QSqlResult::exec(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_exec());
}

bool  PythonQtWrapper_QSqlResult::execBatch(QSqlResult* theWrappedObject, bool  arrayBind)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_execBatch(arrayBind));
}

QString  PythonQtWrapper_QSqlResult::executedQuery(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_executedQuery());
}

bool  PythonQtWrapper_QSqlResult::fetch(QSqlResult* theWrappedObject, int  i)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetch(i));
}

bool  PythonQtWrapper_QSqlResult::fetchFirst(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchFirst());
}

bool  PythonQtWrapper_QSqlResult::fetchLast(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchLast());
}

bool  PythonQtWrapper_QSqlResult::fetchNext(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchNext());
}

bool  PythonQtWrapper_QSqlResult::fetchPrevious(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_fetchPrevious());
}

QVariant  PythonQtWrapper_QSqlResult::handle(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_handle());
}

bool  PythonQtWrapper_QSqlResult::hasOutValues(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_hasOutValues());
}

bool  PythonQtWrapper_QSqlResult::isActive(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_isActive());
}

bool  PythonQtWrapper_QSqlResult::isForwardOnly(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_isForwardOnly());
}

bool  PythonQtWrapper_QSqlResult::isNull(QSqlResult* theWrappedObject, int  i)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_isNull(i));
}

bool  PythonQtWrapper_QSqlResult::isSelect(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_isSelect());
}

bool  PythonQtWrapper_QSqlResult::isValid(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_isValid());
}

QSqlError  PythonQtWrapper_QSqlResult::lastError(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_lastError());
}

QVariant  PythonQtWrapper_QSqlResult::lastInsertId(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_lastInsertId());
}

QString  PythonQtWrapper_QSqlResult::lastQuery(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_lastQuery());
}

bool  PythonQtWrapper_QSqlResult::nextResult(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_nextResult());
}

int  PythonQtWrapper_QSqlResult::numRowsAffected(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_numRowsAffected());
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlResult::numericalPrecisionPolicy(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_numericalPrecisionPolicy());
}

bool  PythonQtWrapper_QSqlResult::prepare(QSqlResult* theWrappedObject, const QString&  query)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_prepare(query));
}

QSqlRecord  PythonQtWrapper_QSqlResult::record(QSqlResult* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_record());
}

bool  PythonQtWrapper_QSqlResult::reset(QSqlResult* theWrappedObject, const QString&  sqlquery)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_reset(sqlquery));
}

void PythonQtWrapper_QSqlResult::resetBindCount(QSqlResult* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_resetBindCount());
}

bool  PythonQtWrapper_QSqlResult::savePrepare(QSqlResult* theWrappedObject, const QString&  sqlquery)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_savePrepare(sqlquery));
}

void PythonQtWrapper_QSqlResult::setActive(QSqlResult* theWrappedObject, bool  a)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setActive(a));
}

void PythonQtWrapper_QSqlResult::setAt(QSqlResult* theWrappedObject, int  at)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setAt(at));
}

void PythonQtWrapper_QSqlResult::setForwardOnly(QSqlResult* theWrappedObject, bool  forward)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setForwardOnly(forward));
}

void PythonQtWrapper_QSqlResult::setLastError(QSqlResult* theWrappedObject, const QSqlError&  e)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setLastError(e));
}

void PythonQtWrapper_QSqlResult::setNumericalPrecisionPolicy(QSqlResult* theWrappedObject, QSql::NumericalPrecisionPolicy  policy)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setNumericalPrecisionPolicy(policy));
}

void PythonQtWrapper_QSqlResult::setQuery(QSqlResult* theWrappedObject, const QString&  query)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setQuery(query));
}

void PythonQtWrapper_QSqlResult::setSelect(QSqlResult* theWrappedObject, bool  s)
{
  ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_setSelect(s));
}

int  PythonQtWrapper_QSqlResult::size(QSqlResult* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlResult*)theWrappedObject)->promoted_size());
}



PythonQtShell_QSqlTableModel::~PythonQtShell_QSqlTableModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QSqlTableModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("buddy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::buddy(index0);
}
bool  PythonQtShell_QSqlTableModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canDropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canDropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlTableModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canFetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::canFetchMore(parent0);
}
void PythonQtShell_QSqlTableModel::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::childEvent(arg__1);
}
void PythonQtShell_QSqlTableModel::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("clear");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::clear();
}
int  PythonQtShell_QSqlTableModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("columnCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::columnCount(parent0);
}
void PythonQtShell_QSqlTableModel::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QSqlTableModel::data(const QModelIndex&  idx0, int  role1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("data");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&idx0, (void*)&role1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::data(idx0, role1);
}
bool  PythonQtShell_QSqlTableModel::deleteRowFromTable(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("deleteRowFromTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("deleteRowFromTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::deleteRowFromTable(row0);
}
bool  PythonQtShell_QSqlTableModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QSqlTableModel::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::event(arg__1);
}
bool  PythonQtShell_QSqlTableModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
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
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSqlTableModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("fetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QSqlTableModel::flags(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("flags");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
        } else {
          returnValue = *((Qt::ItemFlags*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::flags(index0);
}
QVariant  PythonQtShell_QSqlTableModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("headerData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QSqlTableModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("index");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::index(row0, column1, parent2);
}
QModelIndex  PythonQtShell_QSqlTableModel::indexInQuery(const QModelIndex&  item0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("indexInQuery");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&item0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("indexInQuery", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::indexInQuery(item0);
}
bool  PythonQtShell_QSqlTableModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlTableModel::insertRowIntoTable(const QSqlRecord&  values0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRowIntoTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&values0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRowIntoTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::insertRowIntoTable(values0);
}
bool  PythonQtShell_QSqlTableModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QSqlTableModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("itemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
        } else {
          returnValue = *((QMap<int , QVariant >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QSqlTableModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("match");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
        } else {
          returnValue = *((QList<QModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QSqlTableModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QSqlTableModel::mimeTypes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("mimeTypes");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::mimeTypes();
}
bool  PythonQtShell_QSqlTableModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QSqlTableModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("moveRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QString  PythonQtShell_QSqlTableModel::orderByClause() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("orderByClause");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("orderByClause", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::orderByClause();
}
void PythonQtShell_QSqlTableModel::queryChange()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("queryChange");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::queryChange();
}
bool  PythonQtShell_QSqlTableModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QSqlTableModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QSqlTableModel::revert()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revert");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::revert();
}
void PythonQtShell_QSqlTableModel::revertRow(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("revertRow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::revertRow(row0);
}
QHash<int , QByteArray >  PythonQtShell_QSqlTableModel::roleNames() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("roleNames");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QHash<int , QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("roleNames", methodInfo, result);
        } else {
          returnValue = *((QHash<int , QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::roleNames();
}
int  PythonQtShell_QSqlTableModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rowCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::rowCount(parent0);
}
bool  PythonQtShell_QSqlTableModel::select()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("select");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("select", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::select();
}
bool  PythonQtShell_QSqlTableModel::selectRow(int  row0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("selectRow");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&row0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectRow", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::selectRow(row0);
}
QString  PythonQtShell_QSqlTableModel::selectStatement() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("selectStatement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("selectStatement", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::selectStatement();
}
bool  PythonQtShell_QSqlTableModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index0, (void*)&value1, (void*)&role2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::setData(index0, value1, role2);
}
void PythonQtShell_QSqlTableModel::setEditStrategy(QSqlTableModel::EditStrategy  strategy0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setEditStrategy");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QSqlTableModel::EditStrategy"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&strategy0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::setEditStrategy(strategy0);
}
void PythonQtShell_QSqlTableModel::setFilter(const QString&  filter0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&filter0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::setFilter(filter0);
}
bool  PythonQtShell_QSqlTableModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setHeaderData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QSqlTableModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setItemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index0, (void*)&roles1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::setItemData(index0, roles1);
}
void PythonQtShell_QSqlTableModel::setSort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setSort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::setSort(column0, order1);
}
void PythonQtShell_QSqlTableModel::setTable(const QString&  tableName0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&tableName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::setTable(tableName0);
}
QModelIndex  PythonQtShell_QSqlTableModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sibling");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&idx2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QSqlTableModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("sort");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column0, (void*)&order1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::sort(column0, order1);
}
QSize  PythonQtShell_QSqlTableModel::span(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("span");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::span(index0);
}
bool  PythonQtShell_QSqlTableModel::submit()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("submit");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::submit();
}
Qt::DropActions  PythonQtShell_QSqlTableModel::supportedDragActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDragActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDragActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QSqlTableModel::supportedDropActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("supportedDropActions");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"Qt::DropActions"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
        } else {
          returnValue = *((Qt::DropActions*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::supportedDropActions();
}
void PythonQtShell_QSqlTableModel::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QSqlTableModel::timerEvent(arg__1);
}
bool  PythonQtShell_QSqlTableModel::updateRowInTable(int  row0, const QSqlRecord&  values1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateRowInTable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "const QSqlRecord&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&row0, (void*)&values1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("updateRowInTable", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSqlTableModel::updateRowInTable(row0, values1);
}
QSqlTableModel* PythonQtWrapper_QSqlTableModel::new_QSqlTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new PythonQtShell_QSqlTableModel(parent, db); }

void PythonQtWrapper_QSqlTableModel::clear(QSqlTableModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_clear());
}

QVariant  PythonQtWrapper_QSqlTableModel::data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_data(idx, role));
}

QSqlDatabase  PythonQtWrapper_QSqlTableModel::database(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->database());
}

bool  PythonQtWrapper_QSqlTableModel::deleteRowFromTable(QSqlTableModel* theWrappedObject, int  row)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_deleteRowFromTable(row));
}

QSqlTableModel::EditStrategy  PythonQtWrapper_QSqlTableModel::editStrategy(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->editStrategy());
}

int  PythonQtWrapper_QSqlTableModel::fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const
{
  return ( theWrappedObject->fieldIndex(fieldName));
}

QString  PythonQtWrapper_QSqlTableModel::filter(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->filter());
}

Qt::ItemFlags  PythonQtWrapper_QSqlTableModel::flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_flags(index));
}

QVariant  PythonQtWrapper_QSqlTableModel::headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

QModelIndex  PythonQtWrapper_QSqlTableModel::indexInQuery(QSqlTableModel* theWrappedObject, const QModelIndex&  item) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_indexInQuery(item));
}

bool  PythonQtWrapper_QSqlTableModel::insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
  return ( theWrappedObject->insertRecord(row, record));
}

bool  PythonQtWrapper_QSqlTableModel::insertRowIntoTable(QSqlTableModel* theWrappedObject, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_insertRowIntoTable(values));
}

bool  PythonQtWrapper_QSqlTableModel::insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_insertRows(row, count, parent));
}

bool  PythonQtWrapper_QSqlTableModel::isDirty(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->isDirty());
}

bool  PythonQtWrapper_QSqlTableModel::isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->isDirty(index));
}

QString  PythonQtWrapper_QSqlTableModel::orderByClause(QSqlTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_orderByClause());
}

QSqlIndex  PythonQtWrapper_QSqlTableModel::primaryKey(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->primaryKey());
}

QSqlRecord  PythonQtWrapper_QSqlTableModel::record(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->record());
}

QSqlRecord  PythonQtWrapper_QSqlTableModel::record(QSqlTableModel* theWrappedObject, int  row) const
{
  return ( theWrappedObject->record(row));
}

bool  PythonQtWrapper_QSqlTableModel::removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QSqlTableModel::removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_removeRows(row, count, parent));
}

void PythonQtWrapper_QSqlTableModel::revert(QSqlTableModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_revert());
}

void PythonQtWrapper_QSqlTableModel::revertRow(QSqlTableModel* theWrappedObject, int  row)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_revertRow(row));
}

int  PythonQtWrapper_QSqlTableModel::rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_rowCount(parent));
}

bool  PythonQtWrapper_QSqlTableModel::select(QSqlTableModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_select());
}

bool  PythonQtWrapper_QSqlTableModel::selectRow(QSqlTableModel* theWrappedObject, int  row)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_selectRow(row));
}

QString  PythonQtWrapper_QSqlTableModel::selectStatement(QSqlTableModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_selectStatement());
}

bool  PythonQtWrapper_QSqlTableModel::setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setData(index, value, role));
}

void PythonQtWrapper_QSqlTableModel::setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setEditStrategy(strategy));
}

void PythonQtWrapper_QSqlTableModel::setFilter(QSqlTableModel* theWrappedObject, const QString&  filter)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setFilter(filter));
}

void PythonQtWrapper_QSqlTableModel::setPrimaryKey(QSqlTableModel* theWrappedObject, const QSqlIndex&  key)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setPrimaryKey(key));
}

void PythonQtWrapper_QSqlTableModel::setQuery(QSqlTableModel* theWrappedObject, const QSqlQuery&  query)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setQuery(query));
}

bool  PythonQtWrapper_QSqlTableModel::setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
  return ( theWrappedObject->setRecord(row, record));
}

void PythonQtWrapper_QSqlTableModel::setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setSort(column, order));
}

void PythonQtWrapper_QSqlTableModel::setTable(QSqlTableModel* theWrappedObject, const QString&  tableName)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_setTable(tableName));
}

void PythonQtWrapper_QSqlTableModel::sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_sort(column, order));
}

bool  PythonQtWrapper_QSqlTableModel::submit(QSqlTableModel* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_submit());
}

QString  PythonQtWrapper_QSqlTableModel::tableName(QSqlTableModel* theWrappedObject) const
{
  return ( theWrappedObject->tableName());
}

bool  PythonQtWrapper_QSqlTableModel::updateRowInTable(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  values)
{
  return ( ((PythonQtPublicPromoter_QSqlTableModel*)theWrappedObject)->promoted_updateRowInTable(row, values));
}


