#ifndef PYTHONQTWRAPPER_QSQLDRIVER_H
#define PYTHONQTWRAPPER_QSQLDRIVER_H

#include <qsqldriver.h>
#include <QObject>

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

class PythonQtWrapper_QSqlDriver : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StatementType IdentifierType DriverFeature )
enum StatementType{
  WhereStatement = QSqlDriver::WhereStatement,   SelectStatement = QSqlDriver::SelectStatement,   UpdateStatement = QSqlDriver::UpdateStatement,   InsertStatement = QSqlDriver::InsertStatement,   DeleteStatement = QSqlDriver::DeleteStatement};
enum IdentifierType{
  FieldName = QSqlDriver::FieldName,   TableName = QSqlDriver::TableName};
enum DriverFeature{
  Transactions = QSqlDriver::Transactions,   QuerySize = QSqlDriver::QuerySize,   BLOB = QSqlDriver::BLOB,   Unicode = QSqlDriver::Unicode,   PreparedQueries = QSqlDriver::PreparedQueries,   NamedPlaceholders = QSqlDriver::NamedPlaceholders,   PositionalPlaceholders = QSqlDriver::PositionalPlaceholders,   LastInsertId = QSqlDriver::LastInsertId,   BatchOperations = QSqlDriver::BatchOperations,   SimpleLocking = QSqlDriver::SimpleLocking,   LowPrecisionNumbers = QSqlDriver::LowPrecisionNumbers,   EventNotifications = QSqlDriver::EventNotifications,   FinishQuery = QSqlDriver::FinishQuery,   MultipleResultSets = QSqlDriver::MultipleResultSets};
public slots:
void delete_QSqlDriver(QSqlDriver* obj) { delete obj; } 
   bool  beginTransaction(QSqlDriver* theWrappedObject);
   void close(QSqlDriver* theWrappedObject);
   bool  commitTransaction(QSqlDriver* theWrappedObject);
   QSqlResult*  createResult(QSqlDriver* theWrappedObject) const;
   QString  escapeIdentifier(QSqlDriver* theWrappedObject, const QString&  identifier, QSqlDriver::IdentifierType  type) const;
   QString  formatValue(QSqlDriver* theWrappedObject, const QSqlField&  field, bool  trimStrings = false) const;
   QVariant  handle(QSqlDriver* theWrappedObject) const;
   bool  hasFeature(QSqlDriver* theWrappedObject, QSqlDriver::DriverFeature  f) const;
   bool  isOpen(QSqlDriver* theWrappedObject) const;
   bool  isOpenError(QSqlDriver* theWrappedObject) const;
   QSqlError  lastError(QSqlDriver* theWrappedObject) const;
   bool  open(QSqlDriver* theWrappedObject, const QString&  db, const QString&  user = QString(), const QString&  password = QString(), const QString&  host = QString(), int  port = -1, const QString&  connOpts = QString());
   QSqlIndex  primaryIndex(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   QSqlRecord  record(QSqlDriver* theWrappedObject, const QString&  tableName) const;
   bool  rollbackTransaction(QSqlDriver* theWrappedObject);
   QString  sqlStatement(QSqlDriver* theWrappedObject, QSqlDriver::StatementType  type, const QString&  tableName, const QSqlRecord&  rec, bool  preparedStatement) const;
   bool  subscribeToNotification(QSqlDriver* theWrappedObject, const QString&  name);
   QStringList  subscribedToNotifications(QSqlDriver* theWrappedObject) const;
   QStringList  tables(QSqlDriver* theWrappedObject, QSql::TableType  tableType) const;
   bool  unsubscribeFromNotification(QSqlDriver* theWrappedObject, const QString&  name);
};

#endif // PYTHONQTWRAPPER_QSQLDRIVER_H
