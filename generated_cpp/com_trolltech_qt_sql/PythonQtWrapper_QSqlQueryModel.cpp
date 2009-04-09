#include "PythonQtWrapper_QSqlQueryModel.h"

#include <QSize>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qsqldatabase.h>
#include <qsqlerror.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

QSqlQueryModel* PythonQtWrapper_QSqlQueryModel::new_QSqlQueryModel(QObject*  parent)
{ 
return new QSqlQueryModel(parent); }

bool  PythonQtWrapper_QSqlQueryModel::canFetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->canFetchMore(parent);
}

void PythonQtWrapper_QSqlQueryModel::clear(QSqlQueryModel* theWrappedObject)
{
theWrappedObject->clear();
}

int  PythonQtWrapper_QSqlQueryModel::columnCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->columnCount(parent);
}

QVariant  PythonQtWrapper_QSqlQueryModel::data(QSqlQueryModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
return theWrappedObject->data(item, role);
}

void PythonQtWrapper_QSqlQueryModel::fetchMore(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent)
{
theWrappedObject->fetchMore(parent);
}

QVariant  PythonQtWrapper_QSqlQueryModel::headerData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return theWrappedObject->headerData(section, orientation, role);
}

bool  PythonQtWrapper_QSqlQueryModel::insertColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertColumns(column, count, parent);
}

QSqlError  PythonQtWrapper_QSqlQueryModel::lastError(QSqlQueryModel* theWrappedObject) const
{
return theWrappedObject->lastError();
}

QSqlQuery  PythonQtWrapper_QSqlQueryModel::query(QSqlQueryModel* theWrappedObject) const
{
return theWrappedObject->query();
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject) const
{
return theWrappedObject->record();
}

QSqlRecord  PythonQtWrapper_QSqlQueryModel::record(QSqlQueryModel* theWrappedObject, int  row) const
{
return theWrappedObject->record(row);
}

bool  PythonQtWrapper_QSqlQueryModel::removeColumns(QSqlQueryModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeColumns(column, count, parent);
}

int  PythonQtWrapper_QSqlQueryModel::rowCount(QSqlQueryModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->rowCount(parent);
}

bool  PythonQtWrapper_QSqlQueryModel::setHeaderData(QSqlQueryModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
return theWrappedObject->setHeaderData(section, orientation, value, role);
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QSqlQuery&  query)
{
theWrappedObject->setQuery(query);
}

void PythonQtWrapper_QSqlQueryModel::setQuery(QSqlQueryModel* theWrappedObject, const QString&  query, const QSqlDatabase&  db)
{
theWrappedObject->setQuery(query, db);
}

