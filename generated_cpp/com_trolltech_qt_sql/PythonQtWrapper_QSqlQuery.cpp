#include "PythonQtWrapper_QSqlQuery.h"

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
theWrappedObject->addBindValue(val, type);
}

int  PythonQtWrapper_QSqlQuery::at(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->at();
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, const QString&  placeholder, const QVariant&  val, QSql::ParamType  type)
{
theWrappedObject->bindValue(placeholder, val, type);
}

void PythonQtWrapper_QSqlQuery::bindValue(QSqlQuery* theWrappedObject, int  pos, const QVariant&  val, QSql::ParamType  type)
{
theWrappedObject->bindValue(pos, val, type);
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, const QString&  placeholder) const
{
return theWrappedObject->boundValue(placeholder);
}

QVariant  PythonQtWrapper_QSqlQuery::boundValue(QSqlQuery* theWrappedObject, int  pos) const
{
return theWrappedObject->boundValue(pos);
}

QMap<QString , QVariant >  PythonQtWrapper_QSqlQuery::boundValues(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->boundValues();
}

void PythonQtWrapper_QSqlQuery::clear(QSqlQuery* theWrappedObject)
{
theWrappedObject->clear();
}

const QSqlDriver*  PythonQtWrapper_QSqlQuery::driver(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->driver();
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject)
{
return theWrappedObject->exec();
}

bool  PythonQtWrapper_QSqlQuery::exec(QSqlQuery* theWrappedObject, const QString&  query)
{
return theWrappedObject->exec(query);
}

bool  PythonQtWrapper_QSqlQuery::execBatch(QSqlQuery* theWrappedObject, QSqlQuery::BatchExecutionMode  mode)
{
return theWrappedObject->execBatch(mode);
}

QString  PythonQtWrapper_QSqlQuery::executedQuery(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->executedQuery();
}

void PythonQtWrapper_QSqlQuery::finish(QSqlQuery* theWrappedObject)
{
theWrappedObject->finish();
}

bool  PythonQtWrapper_QSqlQuery::first(QSqlQuery* theWrappedObject)
{
return theWrappedObject->first();
}

bool  PythonQtWrapper_QSqlQuery::isActive(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->isActive();
}

bool  PythonQtWrapper_QSqlQuery::isForwardOnly(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->isForwardOnly();
}

bool  PythonQtWrapper_QSqlQuery::isNull(QSqlQuery* theWrappedObject, int  field) const
{
return theWrappedObject->isNull(field);
}

bool  PythonQtWrapper_QSqlQuery::isSelect(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->isSelect();
}

bool  PythonQtWrapper_QSqlQuery::isValid(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->isValid();
}

bool  PythonQtWrapper_QSqlQuery::last(QSqlQuery* theWrappedObject)
{
return theWrappedObject->last();
}

QSqlError  PythonQtWrapper_QSqlQuery::lastError(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->lastError();
}

QVariant  PythonQtWrapper_QSqlQuery::lastInsertId(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->lastInsertId();
}

QString  PythonQtWrapper_QSqlQuery::lastQuery(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->lastQuery();
}

bool  PythonQtWrapper_QSqlQuery::next(QSqlQuery* theWrappedObject)
{
return theWrappedObject->next();
}

bool  PythonQtWrapper_QSqlQuery::nextResult(QSqlQuery* theWrappedObject)
{
return theWrappedObject->nextResult();
}

int  PythonQtWrapper_QSqlQuery::numRowsAffected(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->numRowsAffected();
}

QSql::NumericalPrecisionPolicy  PythonQtWrapper_QSqlQuery::numericalPrecisionPolicy(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->numericalPrecisionPolicy();
}

bool  PythonQtWrapper_QSqlQuery::prepare(QSqlQuery* theWrappedObject, const QString&  query)
{
return theWrappedObject->prepare(query);
}

bool  PythonQtWrapper_QSqlQuery::previous(QSqlQuery* theWrappedObject)
{
return theWrappedObject->previous();
}

QSqlRecord  PythonQtWrapper_QSqlQuery::record(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->record();
}

const QSqlResult*  PythonQtWrapper_QSqlQuery::result(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->result();
}

bool  PythonQtWrapper_QSqlQuery::seek(QSqlQuery* theWrappedObject, int  i, bool  relative)
{
return theWrappedObject->seek(i, relative);
}

void PythonQtWrapper_QSqlQuery::setForwardOnly(QSqlQuery* theWrappedObject, bool  forward)
{
theWrappedObject->setForwardOnly(forward);
}

void PythonQtWrapper_QSqlQuery::setNumericalPrecisionPolicy(QSqlQuery* theWrappedObject, QSql::NumericalPrecisionPolicy  precisionPolicy)
{
theWrappedObject->setNumericalPrecisionPolicy(precisionPolicy);
}

int  PythonQtWrapper_QSqlQuery::size(QSqlQuery* theWrappedObject) const
{
return theWrappedObject->size();
}

QVariant  PythonQtWrapper_QSqlQuery::value(QSqlQuery* theWrappedObject, int  i) const
{
return theWrappedObject->value(i);
}

