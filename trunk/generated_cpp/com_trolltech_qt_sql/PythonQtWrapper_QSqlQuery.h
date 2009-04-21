#ifndef PYTHONQTWRAPPER_QSQLQUERY_H
#define PYTHONQTWRAPPER_QSQLQUERY_H

#include <qsqlquery.h>
#include <QObject>

#include <PythonQt.h>

#include <QSize>
#include <QSqlError>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqlresult.h>

class PythonQtWrapper_QSqlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BatchExecutionMode )
enum BatchExecutionMode{
  ValuesAsRows = QSqlQuery::ValuesAsRows,   ValuesAsColumns = QSqlQuery::ValuesAsColumns};
public slots:
QSqlQuery* new_QSqlQuery(QSqlDatabase  db);
QSqlQuery* new_QSqlQuery(QSqlResult*  r);
QSqlQuery* new_QSqlQuery(const QSqlQuery&  other);
QSqlQuery* new_QSqlQuery(const QString&  query = QString(), QSqlDatabase  db = QSqlDatabase());
void delete_QSqlQuery(QSqlQuery* obj) { delete obj; } 
   bool  exec(QSqlQuery* theWrappedObject);
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   void clear(QSqlQuery* theWrappedObject);
   bool  previous(QSqlQuery* theWrappedObject);
   bool  nextResult(QSqlQuery* theWrappedObject);
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   void finish(QSqlQuery* theWrappedObject);
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   int  at(QSqlQuery* theWrappedObject) const;
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   bool  next(QSqlQuery* theWrappedObject);
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   int  size(QSqlQuery* theWrappedObject) const;
   bool  isValid(QSqlQuery* theWrappedObject) const;
   bool  last(QSqlQuery* theWrappedObject);
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   bool  first(QSqlQuery* theWrappedObject);
   bool  isActive(QSqlQuery* theWrappedObject) const;
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLQUERY_H
