#include "PythonQtWrapper_QItemSelection.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qvector.h>

QItemSelection* PythonQtWrapper_QItemSelection::new_QItemSelection()
{ 
return new QItemSelection(); }

QItemSelection* PythonQtWrapper_QItemSelection::new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{ 
return new QItemSelection(topLeft, bottomRight); }

void PythonQtWrapper_QItemSelection::append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
theWrappedObject->append(t);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::at(QItemSelection* theWrappedObject, int  i) const
{
return theWrappedObject->at(i);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::back(QItemSelection* theWrappedObject) const
{
return theWrappedObject->back();
}

void PythonQtWrapper_QItemSelection::clear(QItemSelection* theWrappedObject)
{
theWrappedObject->clear();
}

bool  PythonQtWrapper_QItemSelection::contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->contains(index);
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const
{
return theWrappedObject->count(t);
}

bool  PythonQtWrapper_QItemSelection::empty(QItemSelection* theWrappedObject) const
{
return theWrappedObject->empty();
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::first(QItemSelection* theWrappedObject) const
{
return theWrappedObject->first();
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector)
{
return QItemSelection::fromVector(vector);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::front(QItemSelection* theWrappedObject) const
{
return theWrappedObject->front();
}

int  PythonQtWrapper_QItemSelection::indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
return theWrappedObject->indexOf(t, from);
}

QList<QModelIndex >  PythonQtWrapper_QItemSelection::indexes(QItemSelection* theWrappedObject) const
{
return theWrappedObject->indexes();
}

bool  PythonQtWrapper_QItemSelection::isEmpty(QItemSelection* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::last(QItemSelection* theWrappedObject) const
{
return theWrappedObject->last();
}

int  PythonQtWrapper_QItemSelection::lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
return theWrappedObject->lastIndexOf(t, from);
}

void PythonQtWrapper_QItemSelection::merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->merge(other, command);
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::mid(QItemSelection* theWrappedObject, int  pos, int  length) const
{
return theWrappedObject->mid(pos, length);
}

void PythonQtWrapper_QItemSelection::move(QItemSelection* theWrappedObject, int  from, int  to)
{
theWrappedObject->move(from, to);
}

bool  PythonQtWrapper_QItemSelection::operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const
{
return *theWrappedObject == l;
}

void PythonQtWrapper_QItemSelection::pop_back(QItemSelection* theWrappedObject)
{
theWrappedObject->pop_back();
}

void PythonQtWrapper_QItemSelection::pop_front(QItemSelection* theWrappedObject)
{
theWrappedObject->pop_front();
}

void PythonQtWrapper_QItemSelection::prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
theWrappedObject->prepend(t);
}

void PythonQtWrapper_QItemSelection::push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
theWrappedObject->push_back(t);
}

void PythonQtWrapper_QItemSelection::push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
theWrappedObject->push_front(t);
}

int  PythonQtWrapper_QItemSelection::removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
return theWrappedObject->removeAll(t);
}

void PythonQtWrapper_QItemSelection::removeAt(QItemSelection* theWrappedObject, int  i)
{
theWrappedObject->removeAt(i);
}

void PythonQtWrapper_QItemSelection::removeFirst(QItemSelection* theWrappedObject)
{
theWrappedObject->removeFirst();
}

void PythonQtWrapper_QItemSelection::removeLast(QItemSelection* theWrappedObject)
{
theWrappedObject->removeLast();
}

bool  PythonQtWrapper_QItemSelection::removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
return theWrappedObject->removeOne(t);
}

void PythonQtWrapper_QItemSelection::replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t)
{
theWrappedObject->replace(i, t);
}

void PythonQtWrapper_QItemSelection::select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
theWrappedObject->select(topLeft, bottomRight);
}

void PythonQtWrapper_QItemSelection::setSharable(QItemSelection* theWrappedObject, bool  sharable)
{
theWrappedObject->setSharable(sharable);
}

int  PythonQtWrapper_QItemSelection::size(QItemSelection* theWrappedObject) const
{
return theWrappedObject->size();
}

void PythonQtWrapper_QItemSelection::static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result)
{
QItemSelection::split(range, other, result);
}

void PythonQtWrapper_QItemSelection::swap(QItemSelection* theWrappedObject, int  i, int  j)
{
theWrappedObject->swap(i, j);
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeAt(QItemSelection* theWrappedObject, int  i)
{
return theWrappedObject->takeAt(i);
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeFirst(QItemSelection* theWrappedObject)
{
return theWrappedObject->takeFirst();
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeLast(QItemSelection* theWrappedObject)
{
return theWrappedObject->takeLast();
}

QVector<QItemSelectionRange >  PythonQtWrapper_QItemSelection::toVector(QItemSelection* theWrappedObject) const
{
return theWrappedObject->toVector();
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i) const
{
return theWrappedObject->value(i);
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const
{
return theWrappedObject->value(i, defaultValue);
}

