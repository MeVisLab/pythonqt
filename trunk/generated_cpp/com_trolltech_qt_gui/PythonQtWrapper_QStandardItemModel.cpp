#include "PythonQtWrapper_QStandardItemModel.h"

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
#include <qstandarditemmodel.h>
#include <qstringlist.h>

QStandardItemModel* PythonQtWrapper_QStandardItemModel::new_QStandardItemModel(QObject*  parent)
{ 
return new QStandardItemModel(parent); }

QStandardItemModel* PythonQtWrapper_QStandardItemModel::new_QStandardItemModel(int  rows, int  columns, QObject*  parent)
{ 
return new QStandardItemModel(rows, columns, parent); }

void PythonQtWrapper_QStandardItemModel::appendColumn(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items)
{
theWrappedObject->appendColumn(items);
}

void PythonQtWrapper_QStandardItemModel::appendRow(QStandardItemModel* theWrappedObject, QStandardItem*  item)
{
theWrappedObject->appendRow(item);
}

void PythonQtWrapper_QStandardItemModel::appendRow(QStandardItemModel* theWrappedObject, const QList<QStandardItem* >&  items)
{
theWrappedObject->appendRow(items);
}

void PythonQtWrapper_QStandardItemModel::clear(QStandardItemModel* theWrappedObject)
{
theWrappedObject->clear();
}

int  PythonQtWrapper_QStandardItemModel::columnCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->columnCount(parent);
}

QVariant  PythonQtWrapper_QStandardItemModel::data(QStandardItemModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
return theWrappedObject->data(index, role);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::findItems(QStandardItemModel* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column) const
{
return theWrappedObject->findItems(text, flags, column);
}

Qt::ItemFlags  PythonQtWrapper_QStandardItemModel::flags(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->flags(index);
}

bool  PythonQtWrapper_QStandardItemModel::hasChildren(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->hasChildren(parent);
}

QVariant  PythonQtWrapper_QStandardItemModel::headerData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
return theWrappedObject->headerData(section, orientation, role);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::horizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column) const
{
return theWrappedObject->horizontalHeaderItem(column);
}

QModelIndex  PythonQtWrapper_QStandardItemModel::index(QStandardItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->index(row, column, parent);
}

QModelIndex  PythonQtWrapper_QStandardItemModel::indexFromItem(QStandardItemModel* theWrappedObject, const QStandardItem*  item) const
{
return theWrappedObject->indexFromItem(item);
}

void PythonQtWrapper_QStandardItemModel::insertColumn(QStandardItemModel* theWrappedObject, int  column, const QList<QStandardItem* >&  items)
{
theWrappedObject->insertColumn(column, items);
}

bool  PythonQtWrapper_QStandardItemModel::insertColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertColumns(column, count, parent);
}

void PythonQtWrapper_QStandardItemModel::insertRow(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
theWrappedObject->insertRow(row, item);
}

void PythonQtWrapper_QStandardItemModel::insertRow(QStandardItemModel* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
theWrappedObject->insertRow(row, items);
}

bool  PythonQtWrapper_QStandardItemModel::insertRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->insertRows(row, count, parent);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::invisibleRootItem(QStandardItemModel* theWrappedObject) const
{
return theWrappedObject->invisibleRootItem();
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::item(QStandardItemModel* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->item(row, column);
}

QMap<int , QVariant >  PythonQtWrapper_QStandardItemModel::itemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->itemData(index);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::itemFromIndex(QStandardItemModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->itemFromIndex(index);
}

const QStandardItem*  PythonQtWrapper_QStandardItemModel::itemPrototype(QStandardItemModel* theWrappedObject) const
{
return theWrappedObject->itemPrototype();
}

QModelIndex  PythonQtWrapper_QStandardItemModel::parent(QStandardItemModel* theWrappedObject, const QModelIndex&  child) const
{
return theWrappedObject->parent(child);
}

bool  PythonQtWrapper_QStandardItemModel::removeColumns(QStandardItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeColumns(column, count, parent);
}

bool  PythonQtWrapper_QStandardItemModel::removeRows(QStandardItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
return theWrappedObject->removeRows(row, count, parent);
}

int  PythonQtWrapper_QStandardItemModel::rowCount(QStandardItemModel* theWrappedObject, const QModelIndex&  parent) const
{
return theWrappedObject->rowCount(parent);
}

void PythonQtWrapper_QStandardItemModel::setColumnCount(QStandardItemModel* theWrappedObject, int  columns)
{
theWrappedObject->setColumnCount(columns);
}

bool  PythonQtWrapper_QStandardItemModel::setData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
return theWrappedObject->setData(index, value, role);
}

bool  PythonQtWrapper_QStandardItemModel::setHeaderData(QStandardItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
return theWrappedObject->setHeaderData(section, orientation, value, role);
}

void PythonQtWrapper_QStandardItemModel::setHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column, QStandardItem*  item)
{
theWrappedObject->setHorizontalHeaderItem(column, item);
}

void PythonQtWrapper_QStandardItemModel::setHorizontalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->setHorizontalHeaderLabels(labels);
}

void PythonQtWrapper_QStandardItemModel::setItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
theWrappedObject->setItem(row, item);
}

void PythonQtWrapper_QStandardItemModel::setItem(QStandardItemModel* theWrappedObject, int  row, int  column, QStandardItem*  item)
{
theWrappedObject->setItem(row, column, item);
}

bool  PythonQtWrapper_QStandardItemModel::setItemData(QStandardItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
return theWrappedObject->setItemData(index, roles);
}

void PythonQtWrapper_QStandardItemModel::setItemPrototype(QStandardItemModel* theWrappedObject, const QStandardItem*  item)
{
theWrappedObject->setItemPrototype(item);
}

void PythonQtWrapper_QStandardItemModel::setRowCount(QStandardItemModel* theWrappedObject, int  rows)
{
theWrappedObject->setRowCount(rows);
}

void PythonQtWrapper_QStandardItemModel::setSortRole(QStandardItemModel* theWrappedObject, int  role)
{
theWrappedObject->setSortRole(role);
}

void PythonQtWrapper_QStandardItemModel::setVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row, QStandardItem*  item)
{
theWrappedObject->setVerticalHeaderItem(row, item);
}

void PythonQtWrapper_QStandardItemModel::setVerticalHeaderLabels(QStandardItemModel* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->setVerticalHeaderLabels(labels);
}

void PythonQtWrapper_QStandardItemModel::sort(QStandardItemModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sort(column, order);
}

int  PythonQtWrapper_QStandardItemModel::sortRole(QStandardItemModel* theWrappedObject) const
{
return theWrappedObject->sortRole();
}

Qt::DropActions  PythonQtWrapper_QStandardItemModel::supportedDropActions(QStandardItemModel* theWrappedObject) const
{
return theWrappedObject->supportedDropActions();
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::takeColumn(QStandardItemModel* theWrappedObject, int  column)
{
return theWrappedObject->takeColumn(column);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeHorizontalHeaderItem(QStandardItemModel* theWrappedObject, int  column)
{
return theWrappedObject->takeHorizontalHeaderItem(column);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeItem(QStandardItemModel* theWrappedObject, int  row, int  column)
{
return theWrappedObject->takeItem(row, column);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItemModel::takeRow(QStandardItemModel* theWrappedObject, int  row)
{
return theWrappedObject->takeRow(row);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::takeVerticalHeaderItem(QStandardItemModel* theWrappedObject, int  row)
{
return theWrappedObject->takeVerticalHeaderItem(row);
}

QStandardItem*  PythonQtWrapper_QStandardItemModel::verticalHeaderItem(QStandardItemModel* theWrappedObject, int  row) const
{
return theWrappedObject->verticalHeaderItem(row);
}

