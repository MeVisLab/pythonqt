#ifndef PYTHONQTWRAPPER_QSQLDATABASE_H
#define PYTHONQTWRAPPER_QSQLDATABASE_H

#include <qsqldatabase.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QSqlDatabase : public QSqlDatabase
{
public:
    PythonQtShell_QSqlDatabase():QSqlDatabase(),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(QSqlDriver*  driver):QSqlDatabase(driver),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QSqlDatabase&  other):QSqlDatabase(other),_wrapper(NULL) {};
    PythonQtShell_QSqlDatabase(const QString&  type):QSqlDatabase(type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSqlDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDatabase* new_QSqlDatabase();
QSqlDatabase* new_QSqlDatabase(const QSqlDatabase&  other);
void delete_QSqlDatabase(QSqlDatabase* obj) { delete obj; } 
   QStringList  tables(QSqlDatabase* theWrappedObject, QSql::TableType  type = QSql::Tables) const;
   bool  static_QSqlDatabase_isDriverAvailable(const QString&  name);
   void setPort(QSqlDatabase* theWrappedObject, int  p);
   QString  connectOptions(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_connectionNames();
   QSqlDatabase  static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   bool  rollback(QSqlDatabase* theWrappedObject);
   bool  isOpen(QSqlDatabase* theWrappedObject) const;
   int  port(QSqlDatabase* theWrappedObject) const;
   bool  isValid(QSqlDatabase* theWrappedObject) const;
   QString  driverName(QSqlDatabase* theWrappedObject) const;
   QSqlQuery  exec(QSqlDatabase* theWrappedObject, const QString&  query = QString()) const;
   void static_QSqlDatabase_removeDatabase(const QString&  connectionName);
   void setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name);
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName);
   void close(QSqlDatabase* theWrappedObject);
   bool  commit(QSqlDatabase* theWrappedObject);
   QSqlDatabase  static_QSqlDatabase_database(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection), bool  open = true);
   QSqlRecord  record(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QString  password(QSqlDatabase* theWrappedObject) const;
   QString  databaseName(QSqlDatabase* theWrappedObject) const;
   QString  userName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_drivers();
   void setHostName(QSqlDatabase* theWrappedObject, const QString&  host);
   void static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator);
   void setPassword(QSqlDatabase* theWrappedObject, const QString&  password);
   QString  connectionName(QSqlDatabase* theWrappedObject) const;
   QSqlDatabase  static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   bool  static_QSqlDatabase_contains(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDriver*  driver(QSqlDatabase* theWrappedObject) const;
   bool  transaction(QSqlDatabase* theWrappedObject);
   bool  open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password);
   QSqlIndex  primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   bool  open(QSqlDatabase* theWrappedObject);
   QString  hostName(QSqlDatabase* theWrappedObject) const;
   bool  isOpenError(QSqlDatabase* theWrappedObject) const;
   QSqlError  lastError(QSqlDatabase* theWrappedObject) const;
   void setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options = QString());
   void setUserName(QSqlDatabase* theWrappedObject, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QSQLDATABASE_H
