#include "PythonQtWrapper_QSqlRelationalTableModel.h"

#include <QSize>
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
#include <qsqlrelationaltablemodel.h>
#include <qsqltablemodel.h>
#include <qstringlist.h>

QSqlRelationalTableModel* PythonQtWrapper_QSqlRelationalTableModel::new_QSqlRelationalTableModel(QObject*  parent, QSqlDatabase  db)
{ 
return new QSqlRelationalTableModel(parent, db); }

void PythonQtWrapper_QSqlRelationalTableModel::clear(QSqlRelationalTableModel* theWrappedObject)
{
theWrappedObject->clear();
}

QVariant  PythonQtWrapper_QSqlRelationalTableModel::data(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, int  role) const
{
return theWrappedObject->data(item, role);
}

QSqlRelation  PythonQtWrapper_QSqlRelationalTableModel::relation(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
return theWrappedObject->relation(column);
}

QSqlTableModel*  PythonQtWrapper_QSqlRelationalTableModel::relationModel(QSqlRelationalTableModel* theWrappedObject, int  column) const
{
return theWrappedObject->relationModel(column);
}

bool  PythonQtWrapper_QSqlRelationalTableModel::removeColumns(QSqlRelationalTableModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeColumns(column, count, parent);
}

bool  PythonQtWrapper_QSqlRelationalTableModel::select(QSqlRelationalTableModel* theWrappedObject)
{
return theWrappedObject->select();
}

bool  PythonQtWrapper_QSqlRelationalTableModel::setData(QSqlRelationalTableModel* theWrappedObject, const QModelIndex&  item, const QVariant&  value, int  role)
{
return theWrappedObject->setData(item, value, role);
}

void PythonQtWrapper_QSqlRelationalTableModel::setRelation(QSqlRelationalTableModel* theWrappedObject, int  column, const QSqlRelation&  relation)
{
theWrappedObject->setRelation(column, relation);
}

void PythonQtWrapper_QSqlRelationalTableModel::setTable(QSqlRelationalTableModel* theWrappedObject, const QString&  tableName)
{
theWrappedObject->setTable(tableName);
}

