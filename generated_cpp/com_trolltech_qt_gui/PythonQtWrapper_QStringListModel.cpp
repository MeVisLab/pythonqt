#include "PythonQtWrapper_QStringListModel.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qstringlistmodel.h>

QStringListModel* PythonQtWrapper_QStringListModel::new_QStringListModel(QObject*  parent)
{ 
return new QStringListModel(parent); }

QStringListModel* PythonQtWrapper_QStringListModel::new_QStringListModel(const QStringList&  strings, QObject*  parent)
{ 
return new QStringListModel(strings, parent); }

QVariant  PythonQtWrapper_QStringListModel::data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
return theWrappedObject->data(index, role);
}

Qt::ItemFlags  PythonQtWrapper_QStringListModel::flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->flags(index);
}

bool  PythonQtWrapper_QStringListModel::insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertRows(row, count, parent);
}

bool  PythonQtWrapper_QStringListModel::removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeRows(row, count, parent);
}

int  PythonQtWrapper_QStringListModel::rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->rowCount(parent);
}

bool  PythonQtWrapper_QStringListModel::setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
return theWrappedObject->setData(index, value, role);
}

void PythonQtWrapper_QStringListModel::setStringList(QStringListModel* theWrappedObject, const QStringList&  strings)
{
theWrappedObject->setStringList(strings);
}

void PythonQtWrapper_QStringListModel::sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sort(column, order);
}

QStringList  PythonQtWrapper_QStringListModel::stringList(QStringListModel* theWrappedObject) const
{
return theWrappedObject->stringList();
}

Qt::DropActions  PythonQtWrapper_QStringListModel::supportedDropActions(QStringListModel* theWrappedObject) const
{
return theWrappedObject->supportedDropActions();
}

