#include "PythonQtWrapper_QItemSelectionRange.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange()
{ 
return new QItemSelectionRange(); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QItemSelectionRange&  other)
{ 
return new QItemSelectionRange(other); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QModelIndex&  index)
{ 
return new QItemSelectionRange(index); }

QItemSelectionRange* PythonQtWrapper_QItemSelectionRange::new_QItemSelectionRange(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{ 
return new QItemSelectionRange(topLeft, bottomRight); }

int  PythonQtWrapper_QItemSelectionRange::bottom(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->bottom();
}

QModelIndex  PythonQtWrapper_QItemSelectionRange::bottomRight(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->bottomRight();
}

bool  PythonQtWrapper_QItemSelectionRange::contains(QItemSelectionRange* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->contains(index);
}

bool  PythonQtWrapper_QItemSelectionRange::contains(QItemSelectionRange* theWrappedObject, int  row, int  column, const QModelIndex&  parentIndex) const
{
return theWrappedObject->contains(row, column, parentIndex);
}

int  PythonQtWrapper_QItemSelectionRange::height(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->height();
}

QList<QModelIndex >  PythonQtWrapper_QItemSelectionRange::indexes(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->indexes();
}

QItemSelectionRange  PythonQtWrapper_QItemSelectionRange::intersected(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
return theWrappedObject->intersected(other);
}

bool  PythonQtWrapper_QItemSelectionRange::intersects(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
return theWrappedObject->intersects(other);
}

bool  PythonQtWrapper_QItemSelectionRange::isValid(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->isValid();
}

int  PythonQtWrapper_QItemSelectionRange::left(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->left();
}

const QAbstractItemModel*  PythonQtWrapper_QItemSelectionRange::model(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->model();
}

bool  PythonQtWrapper_QItemSelectionRange::operator_equal(QItemSelectionRange* theWrappedObject, const QItemSelectionRange&  other) const
{
return *theWrappedObject == other;
}

QModelIndex  PythonQtWrapper_QItemSelectionRange::parent(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->parent();
}

int  PythonQtWrapper_QItemSelectionRange::right(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->right();
}

int  PythonQtWrapper_QItemSelectionRange::top(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->top();
}

QModelIndex  PythonQtWrapper_QItemSelectionRange::topLeft(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->topLeft();
}

int  PythonQtWrapper_QItemSelectionRange::width(QItemSelectionRange* theWrappedObject) const
{
return theWrappedObject->width();
}

