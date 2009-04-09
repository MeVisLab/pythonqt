#include "PythonQtWrapper_QAbstractItemModel.h"

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

QModelIndex  PythonQtWrapper_QAbstractItemModel::buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->buddy(index);
}

bool  PythonQtWrapper_QAbstractItemModel::canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->canFetchMore(parent);
}

int  PythonQtWrapper_QAbstractItemModel::columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->columnCount(parent);
}

QVariant  PythonQtWrapper_QAbstractItemModel::data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
return theWrappedObject->data(index, role);
}

bool  PythonQtWrapper_QAbstractItemModel::dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
return theWrappedObject->dropMimeData(data, action, row, column, parent);
}

void PythonQtWrapper_QAbstractItemModel::fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent)
{
theWrappedObject->fetchMore(parent);
}

Qt::ItemFlags  PythonQtWrapper_QAbstractItemModel::flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->flags(index);
}

bool  PythonQtWrapper_QAbstractItemModel::hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->hasChildren(parent);
}

bool  PythonQtWrapper_QAbstractItemModel::hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->hasIndex(row, column, parent);
}

QVariant  PythonQtWrapper_QAbstractItemModel::headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return theWrappedObject->headerData(section, orientation, role);
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->index(row, column, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
return theWrappedObject->insertColumn(column, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertColumns(column, count, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
return theWrappedObject->insertRow(row, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertRows(row, count, parent);
}

QMap<int , QVariant >  PythonQtWrapper_QAbstractItemModel::itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->itemData(index);
}

QList<QModelIndex >  PythonQtWrapper_QAbstractItemModel::match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
return theWrappedObject->match(start, role, value, hits, flags);
}

QMimeData*  PythonQtWrapper_QAbstractItemModel::mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const
{
return theWrappedObject->mimeData(indexes);
}

QStringList  PythonQtWrapper_QAbstractItemModel::mimeTypes(QAbstractItemModel* theWrappedObject) const
{
return theWrappedObject->mimeTypes();
}

QObject*  PythonQtWrapper_QAbstractItemModel::parent(QAbstractItemModel* theWrappedObject) const
{
return theWrappedObject->parent();
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const
{
return theWrappedObject->parent(child);
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
return theWrappedObject->removeColumn(column, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeColumns(column, count, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
return theWrappedObject->removeRow(row, parent);
}

bool  PythonQtWrapper_QAbstractItemModel::removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeRows(row, count, parent);
}

int  PythonQtWrapper_QAbstractItemModel::rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->rowCount(parent);
}

bool  PythonQtWrapper_QAbstractItemModel::setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
return theWrappedObject->setData(index, value, role);
}

bool  PythonQtWrapper_QAbstractItemModel::setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
return theWrappedObject->setHeaderData(section, orientation, value, role);
}

bool  PythonQtWrapper_QAbstractItemModel::setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
return theWrappedObject->setItemData(index, roles);
}

void PythonQtWrapper_QAbstractItemModel::setSupportedDragActions(QAbstractItemModel* theWrappedObject, Qt::DropActions  arg__1)
{
theWrappedObject->setSupportedDragActions(arg__1);
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
return theWrappedObject->sibling(row, column, idx);
}

void PythonQtWrapper_QAbstractItemModel::sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sort(column, order);
}

QSize  PythonQtWrapper_QAbstractItemModel::span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->span(index);
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDragActions(QAbstractItemModel* theWrappedObject) const
{
return theWrappedObject->supportedDragActions();
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDropActions(QAbstractItemModel* theWrappedObject) const
{
return theWrappedObject->supportedDropActions();
}

