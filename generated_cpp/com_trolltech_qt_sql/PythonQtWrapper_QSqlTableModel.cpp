#include "PythonQtWrapper_QSqlTableModel.h"

#include <QSize>
#include <QSqlIndex>
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
#include <qsqlindex.h>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qstringlist.h>

QSqlTableModel* PythonQtWrapper_QSqlTableModel::new_QSqlTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new QSqlTableModel(parent, db); }

void PythonQtWrapper_QSqlTableModel::clear(QSqlTableModel* theWrappedObject)
{
theWrappedObject->clear();
}

QVariant  PythonQtWrapper_QSqlTableModel::data(QSqlTableModel* theWrappedObject, const QModelIndex&  idx, int  role) const
{
return theWrappedObject->data(idx, role);
}

QSqlDatabase  PythonQtWrapper_QSqlTableModel::database(QSqlTableModel* theWrappedObject) const
{
return theWrappedObject->database();
}

QSqlTableModel::EditStrategy  PythonQtWrapper_QSqlTableModel::editStrategy(QSqlTableModel* theWrappedObject) const
{
return theWrappedObject->editStrategy();
}

int  PythonQtWrapper_QSqlTableModel::fieldIndex(QSqlTableModel* theWrappedObject, const QString&  fieldName) const
{
return theWrappedObject->fieldIndex(fieldName);
}

QString  PythonQtWrapper_QSqlTableModel::filter(QSqlTableModel* theWrappedObject) const
{
return theWrappedObject->filter();
}

Qt::ItemFlags  PythonQtWrapper_QSqlTableModel::flags(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->flags(index);
}

QVariant  PythonQtWrapper_QSqlTableModel::headerData(QSqlTableModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return theWrappedObject->headerData(section, orientation, role);
}

bool  PythonQtWrapper_QSqlTableModel::insertRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
return theWrappedObject->insertRecord(row, record);
}

bool  PythonQtWrapper_QSqlTableModel::insertRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertRows(row, count, parent);
}

bool  PythonQtWrapper_QSqlTableModel::isDirty(QSqlTableModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->isDirty(index);
}

QSqlIndex  PythonQtWrapper_QSqlTableModel::primaryKey(QSqlTableModel* theWrappedObject) const
{
return theWrappedObject->primaryKey();
}

bool  PythonQtWrapper_QSqlTableModel::removeColumns(QSqlTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeColumns(column, count, parent);
}

bool  PythonQtWrapper_QSqlTableModel::removeRows(QSqlTableModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeRows(row, count, parent);
}

void PythonQtWrapper_QSqlTableModel::revertRow(QSqlTableModel* theWrappedObject, int  row)
{
theWrappedObject->revertRow(row);
}

int  PythonQtWrapper_QSqlTableModel::rowCount(QSqlTableModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->rowCount(parent);
}

bool  PythonQtWrapper_QSqlTableModel::select(QSqlTableModel* theWrappedObject)
{
return theWrappedObject->select();
}

bool  PythonQtWrapper_QSqlTableModel::setData(QSqlTableModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
return theWrappedObject->setData(index, value, role);
}

void PythonQtWrapper_QSqlTableModel::setEditStrategy(QSqlTableModel* theWrappedObject, QSqlTableModel::EditStrategy  strategy)
{
theWrappedObject->setEditStrategy(strategy);
}

void PythonQtWrapper_QSqlTableModel::setFilter(QSqlTableModel* theWrappedObject, const QString&  filter)
{
theWrappedObject->setFilter(filter);
}

bool  PythonQtWrapper_QSqlTableModel::setRecord(QSqlTableModel* theWrappedObject, int  row, const QSqlRecord&  record)
{
return theWrappedObject->setRecord(row, record);
}

void PythonQtWrapper_QSqlTableModel::setSort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->setSort(column, order);
}

void PythonQtWrapper_QSqlTableModel::setTable(QSqlTableModel* theWrappedObject, const QString&  tableName)
{
theWrappedObject->setTable(tableName);
}

void PythonQtWrapper_QSqlTableModel::sort(QSqlTableModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sort(column, order);
}

QString  PythonQtWrapper_QSqlTableModel::tableName(QSqlTableModel* theWrappedObject) const
{
return theWrappedObject->tableName();
}

