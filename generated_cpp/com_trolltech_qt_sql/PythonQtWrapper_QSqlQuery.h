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
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   int  size(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   bool  isActive(QSqlQuery* theWrappedObject) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   bool  last(QSqlQuery* theWrappedObject);
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
   int  at(QSqlQuery* theWrappedObject) const;
   bool  first(QSqlQuery* theWrappedObject);
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  isValid(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   void clear(QSqlQuery* theWrappedObject);
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   bool  previous(QSqlQuery* theWrappedObject);
   void finish(QSqlQuery* theWrappedObject);
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject);
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   bool  next(QSqlQuery* theWrappedObject);
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   bool  nextResult(QSqlQuery* theWrappedObject);
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSQLQUERY_H
