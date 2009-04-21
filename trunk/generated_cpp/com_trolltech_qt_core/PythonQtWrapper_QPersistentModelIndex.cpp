#include "PythonQtWrapper_QPersistentModelIndex.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemmodel.h>

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex()
{ 
return new QPersistentModelIndex(); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QModelIndex&  index)
{ 
return new QPersistentModelIndex(index); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QPersistentModelIndex&  other)
{ 
return new QPersistentModelIndex(other); }

const QAbstractItemModel*  PythonQtWrapper_QPersistentModelIndex::model(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->model();
}

bool  PythonQtWrapper_QPersistentModelIndex::isValid(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::parent(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->parent();
}

qint64  PythonQtWrapper_QPersistentModelIndex::internalId(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->internalId();
}

QVariant  PythonQtWrapper_QPersistentModelIndex::data(QPersistentModelIndex* theWrappedObject, int  role) const
{
return  theWrappedObject->data(role);
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->operator const QModelIndex&();
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->sibling(row, column);
}

Qt::ItemFlags  PythonQtWrapper_QPersistentModelIndex::flags(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->flags();
}

bool  PythonQtWrapper_QPersistentModelIndex::operator_equal(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const
{
return  (*theWrappedObject)== other;
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
return  theWrappedObject->child(row, column);
}

int  PythonQtWrapper_QPersistentModelIndex::row(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->row();
}

bool  PythonQtWrapper_QPersistentModelIndex::operator_less(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
return  (*theWrappedObject)< other;
}

bool  PythonQtWrapper_QPersistentModelIndex::operator_equal(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
return  (*theWrappedObject)== other;
}

int  PythonQtWrapper_QPersistentModelIndex::column(QPersistentModelIndex* theWrappedObject) const
{
return  theWrappedObject->column();
}

