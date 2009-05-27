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
   QSqlRecord  record(QSqlQuery* theWrappedObject) const;
   bool  exec(QSqlQuery* theWrappedObject);
   QVariant  lastInsertId(QSqlQuery* theWrappedObject) const;
   bool  nextResult(QSqlQuery* theWrappedObject);
   void addBindValue(QSqlQuery* theWrappedObject, const QVariant&  val, QSql::ParamType  type = QSql::In);
   QVariant  boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const;
   void bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  isActive(QSqlQuery* theWrappedObject) const;
   bool  isNull(QSqlQuery* theWrappedObject, int  field) const;
   int  at(QSqlQuery* theWrappedObject) const;
   void bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type = QSql::In);
   bool  previous(QSqlQuery* theWrappedObject);
   const QSqlDriver*  driver(QSqlQuery* theWrappedObject) const;
   bool  execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode = QSqlQuery::ValuesAsRows);
   void finish(QSqlQuery* theWrappedObject);
   bool  isValid(QSqlQuery* theWrappedObject) const;
   const QSqlResult*  result(QSqlQuery* theWrappedObject) const;
   QVariant  boundValue(QSqlQuery* theWrappedObject, int  pos) const;
   QSqlError  lastError(QSqlQuery* theWrappedObject) const;
   QSql::NumericalPrecisionPolicy  numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const;
   QMap<QString , QVariant >  boundValues(QSqlQuery* theWrappedObject) const;
   bool  next(QSqlQuery* theWrappedObject);
   void setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy);
   bool  exec(QSqlQuery* theWrappedObject, const QString&  query);
   QString  lastQuery(QSqlQuery* theWrappedObject) const;
   int  numRowsAffected(QSqlQuery* theWrappedObject) const;
   QVariant  value(QSqlQuery* theWrappedObject, int  i) const;
   void clear(QSqlQuery* theWrappedObject);
   bool  first(QSqlQuery* theWrappedObject);
   void setForwardOnly(QSqlQuery* theWrappedObject, bool  forward);
   bool  isForwardOnly(QSqlQuery* theWrappedObject) const;
   bool  prepare(QSqlQuery* theWrappedObject, const QString&  query);
   bool  isSelect(QSqlQuery* theWrappedObject) const;
   bool  seek(QSqlQuery* theWrappedObject, int  i, bool  relative = false);
   QString  executedQuery(QSqlQuery* theWrappedObject) const;
   int  size(QSqlQuery* theWrappedObject) const;
   bool  last(QSqlQuery* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QSQLQUERY_H
