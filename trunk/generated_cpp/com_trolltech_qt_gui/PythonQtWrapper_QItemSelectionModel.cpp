#include "PythonQtWrapper_QItemSelectionModel.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>

QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model)
{ 
return new QItemSelectionModel(model); }

QItemSelectionModel* PythonQtWrapper_QItemSelectionModel::new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent)
{ 
return new QItemSelectionModel(model, parent); }

bool  PythonQtWrapper_QItemSelectionModel::columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->columnIntersectsSelection(column, parent);
}

QModelIndex  PythonQtWrapper_QItemSelectionModel::currentIndex(QItemSelectionModel* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

bool  PythonQtWrapper_QItemSelectionModel::hasSelection(QItemSelectionModel* theWrappedObject) const
{
return theWrappedObject->hasSelection();
}

bool  PythonQtWrapper_QItemSelectionModel::isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const
{
return theWrappedObject->isColumnSelected(column, parent);
}

bool  PythonQtWrapper_QItemSelectionModel::isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return theWrappedObject->isRowSelected(row, parent);
}

bool  PythonQtWrapper_QItemSelectionModel::isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->isSelected(index);
}

const QAbstractItemModel*  PythonQtWrapper_QItemSelectionModel::model(QItemSelectionModel* theWrappedObject) const
{
return theWrappedObject->model();
}

bool  PythonQtWrapper_QItemSelectionModel::rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return theWrappedObject->rowIntersectsSelection(row, parent);
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedColumns(QItemSelectionModel* theWrappedObject, int  row) const
{
return theWrappedObject->selectedColumns(row);
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedIndexes(QItemSelectionModel* theWrappedObject) const
{
return theWrappedObject->selectedIndexes();
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionModel::selectedRows(QItemSelectionModel* theWrappedObject, int  column) const
{
return theWrappedObject->selectedRows(column);
}

const QItemSelection  PythonQtWrapper_QItemSelectionModel::selection(QItemSelectionModel* theWrappedObject) const
{
return theWrappedObject->selection();
}

