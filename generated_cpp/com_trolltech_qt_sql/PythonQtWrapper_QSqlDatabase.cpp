#include "PythonQtWrapper_QSqlDatabase.h"

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
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase()
{ 
return new PythonQtShell_QSqlDatabase(); }

QSqlDatabase* PythonQtWrapper_QSqlDatabase::new_QSqlDatabase(const QSqlDatabase&  other)
{ 
return new PythonQtShell_QSqlDatabase(other); }

QStringList  PythonQtWrapper_QSqlDatabase::tables(QSqlDatabase* theWrappedObject, QSql::TableType  type) const
{
return  (*theWrappedObject).tables(type);
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_isDriverAvailable(const QString&  name)
{
return QSqlDatabase::isDriverAvailable(name);
}

void PythonQtWrapper_QSqlDatabase::setPort(QSqlDatabase* theWrappedObject, int  p)
{
 (*theWrappedObject).setPort(p);
}

QString  PythonQtWrapper_QSqlDatabase::connectOptions(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).connectOptions();
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_connectionNames()
{
return QSqlDatabase::connectionNames();
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName)
{
return QSqlDatabase::addDatabase(driver, connectionName);
}

bool  PythonQtWrapper_QSqlDatabase::rollback(QSqlDatabase* theWrappedObject)
{
return  (*theWrappedObject).rollback();
}

bool  PythonQtWrapper_QSqlDatabase::isOpen(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).isOpen();
}

int  PythonQtWrapper_QSqlDatabase::port(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).port();
}

bool  PythonQtWrapper_QSqlDatabase::isValid(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

QString  PythonQtWrapper_QSqlDatabase::driverName(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).driverName();
}

QSqlQuery  PythonQtWrapper_QSqlDatabase::exec(QSqlDatabase* theWrappedObject, const QString&  query) const
{
return  (*theWrappedObject).exec(query);
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_removeDatabase(const QString&  connectionName)
{
QSqlDatabase::removeDatabase(connectionName);
}

void PythonQtWrapper_QSqlDatabase::setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name)
{
 (*theWrappedObject).setDatabaseName(name);
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName)
{
return QSqlDatabase::cloneDatabase(other, connectionName);
}

void PythonQtWrapper_QSqlDatabase::close(QSqlDatabase* theWrappedObject)
{
 (*theWrappedObject).close();
}

bool  PythonQtWrapper_QSqlDatabase::commit(QSqlDatabase* theWrappedObject)
{
return  (*theWrappedObject).commit();
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_database(const QString&  connectionName, bool  open)
{
return QSqlDatabase::database(connectionName, open);
}

QSqlRecord  PythonQtWrapper_QSqlDatabase::record(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
return  (*theWrappedObject).record(tablename);
}

QString  PythonQtWrapper_QSqlDatabase::password(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).password();
}

QString  PythonQtWrapper_QSqlDatabase::databaseName(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).databaseName();
}

QString  PythonQtWrapper_QSqlDatabase::userName(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).userName();
}

QStringList  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_drivers()
{
return QSqlDatabase::drivers();
}

void PythonQtWrapper_QSqlDatabase::setHostName(QSqlDatabase* theWrappedObject, const QString&  host)
{
 (*theWrappedObject).setHostName(host);
}

void PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator)
{
QSqlDatabase::registerSqlDriver(name, creator);
}

void PythonQtWrapper_QSqlDatabase::setPassword(QSqlDatabase* theWrappedObject, const QString&  password)
{
 (*theWrappedObject).setPassword(password);
}

QString  PythonQtWrapper_QSqlDatabase::connectionName(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).connectionName();
}

QSqlDatabase  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName)
{
return QSqlDatabase::addDatabase(type, connectionName);
}

bool  PythonQtWrapper_QSqlDatabase::static_QSqlDatabase_contains(const QString&  connectionName)
{
return QSqlDatabase::contains(connectionName);
}

QSqlDriver*  PythonQtWrapper_QSqlDatabase::driver(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).driver();
}

bool  PythonQtWrapper_QSqlDatabase::transaction(QSqlDatabase* theWrappedObject)
{
return  (*theWrappedObject).transaction();
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password)
{
return  (*theWrappedObject).open(user, password);
}

QSqlIndex  PythonQtWrapper_QSqlDatabase::primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const
{
return  (*theWrappedObject).primaryIndex(tablename);
}

bool  PythonQtWrapper_QSqlDatabase::open(QSqlDatabase* theWrappedObject)
{
return  (*theWrappedObject).open();
}

QString  PythonQtWrapper_QSqlDatabase::hostName(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).hostName();
}

bool  PythonQtWrapper_QSqlDatabase::isOpenError(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).isOpenError();
}

QSqlError  PythonQtWrapper_QSqlDatabase::lastError(QSqlDatabase* theWrappedObject) const
{
return  (*theWrappedObject).lastError();
}

void PythonQtWrapper_QSqlDatabase::setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options)
{
 (*theWrappedObject).setConnectOptions(options);
}

void PythonQtWrapper_QSqlDatabase::setUserName(QSqlDatabase* theWrappedObject, const QString&  name)
{
 (*theWrappedObject).setUserName(name);
}

