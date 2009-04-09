#ifndef PYTHONQTWRAPPER_QSQLDATABASE_H
#define PYTHONQTWRAPPER_QSQLDATABASE_H

#include <qsqldatabase.h>
#include <QObject>

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

class PythonQtWrapper_QSqlDatabase : public QObject
{ Q_OBJECT
public:
public slots:
QSqlDatabase* new_QSqlDatabase();
QSqlDatabase* new_QSqlDatabase(const QSqlDatabase&  other);
void delete_QSqlDatabase(QSqlDatabase* obj) { delete obj; } 
   QSqlDatabase  static_QSqlDatabase_addDatabase(QSqlDriver*  driver, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_addDatabase(const QString&  type, const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_cloneDatabase(const QSqlDatabase&  other, const QString&  connectionName);
   void close(QSqlDatabase* theWrappedObject);
   bool  commit(QSqlDatabase* theWrappedObject);
   QString  connectOptions(QSqlDatabase* theWrappedObject) const;
   QString  connectionName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_connectionNames();
   bool  static_QSqlDatabase_contains(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection));
   QSqlDatabase  static_QSqlDatabase_database(const QString&  connectionName = QLatin1String(QSqlDatabase::defaultConnection), bool  open = true);
   QString  databaseName(QSqlDatabase* theWrappedObject) const;
   QSqlDriver*  driver(QSqlDatabase* theWrappedObject) const;
   QString  driverName(QSqlDatabase* theWrappedObject) const;
   QStringList  static_QSqlDatabase_drivers();
   QSqlQuery  exec(QSqlDatabase* theWrappedObject, const QString&  query = QString()) const;
   QString  hostName(QSqlDatabase* theWrappedObject) const;
   bool  static_QSqlDatabase_isDriverAvailable(const QString&  name);
   bool  isOpen(QSqlDatabase* theWrappedObject) const;
   bool  isOpenError(QSqlDatabase* theWrappedObject) const;
   bool  isValid(QSqlDatabase* theWrappedObject) const;
   QSqlError  lastError(QSqlDatabase* theWrappedObject) const;
   bool  open(QSqlDatabase* theWrappedObject);
   bool  open(QSqlDatabase* theWrappedObject, const QString&  user, const QString&  password);
   QString  password(QSqlDatabase* theWrappedObject) const;
   int  port(QSqlDatabase* theWrappedObject) const;
   QSqlIndex  primaryIndex(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   QSqlRecord  record(QSqlDatabase* theWrappedObject, const QString&  tablename) const;
   void static_QSqlDatabase_registerSqlDriver(const QString&  name, QSqlDriverCreatorBase*  creator);
   void static_QSqlDatabase_removeDatabase(const QString&  connectionName);
   bool  rollback(QSqlDatabase* theWrappedObject);
   void setConnectOptions(QSqlDatabase* theWrappedObject, const QString&  options = QString());
   void setDatabaseName(QSqlDatabase* theWrappedObject, const QString&  name);
   void setHostName(QSqlDatabase* theWrappedObject, const QString&  host);
   void setPassword(QSqlDatabase* theWrappedObject, const QString&  password);
   void setPort(QSqlDatabase* theWrappedObject, int  p);
   void setUserName(QSqlDatabase* theWrappedObject, const QString&  name);
   QStringList  tables(QSqlDatabase* theWrappedObject, QSql::TableType  type = QSql::Tables) const;
   bool  transaction(QSqlDatabase* theWrappedObject);
   QString  userName(QSqlDatabase* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLDATABASE_H
