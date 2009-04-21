#include "PythonQtWrapper_QItemSelection.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
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

void PythonQtWrapper_QItemSelection::clear(QItemSelection* theWrappedObject)
{
 theWrappedObject->clear();
}

QList<QModelIndex >  PythonQtWrapper_QItemSelection::indexes(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->indexes();
}

void PythonQtWrapper_QItemSelection::move(QItemSelection* theWrappedObject, int  from, int  to)
{
 theWrappedObject->move(from, to);
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeLast(QItemSelection* theWrappedObject)
{
return  theWrappedObject->takeLast();
}

void PythonQtWrapper_QItemSelection::append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
 theWrappedObject->append(t);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::front(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->front();
}

void PythonQtWrapper_QItemSelection::merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command)
{
 theWrappedObject->merge(other, command);
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::mid(QItemSelection* theWrappedObject, int  pos, int  length) const
{
return  theWrappedObject->mid(pos, length);
}

void PythonQtWrapper_QItemSelection::push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
 theWrappedObject->push_front(t);
}

void PythonQtWrapper_QItemSelection::push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
 theWrappedObject->push_back(t);
}

QVector<QItemSelectionRange >  PythonQtWrapper_QItemSelection::toVector(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->toVector();
}

void PythonQtWrapper_QItemSelection::pop_front(QItemSelection* theWrappedObject)
{
 theWrappedObject->pop_front();
}

bool  PythonQtWrapper_QItemSelection::contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const
{
return  theWrappedObject->contains(index);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::at(QItemSelection* theWrappedObject, int  i) const
{
return  theWrappedObject->at(i);
}

int  PythonQtWrapper_QItemSelection::removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
return  theWrappedObject->removeAll(t);
}

void PythonQtWrapper_QItemSelection::setSharable(QItemSelection* theWrappedObject, bool  sharable)
{
 theWrappedObject->setSharable(sharable);
}

int  PythonQtWrapper_QItemSelection::lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
return  theWrappedObject->lastIndexOf(t, from);
}

void PythonQtWrapper_QItemSelection::static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result)
{
QItemSelection::split(range, other, result);
}

void PythonQtWrapper_QItemSelection::pop_back(QItemSelection* theWrappedObject)
{
 theWrappedObject->pop_back();
}

void PythonQtWrapper_QItemSelection::prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
 theWrappedObject->prepend(t);
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const
{
return  theWrappedObject->value(i, defaultValue);
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->count();
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeFirst(QItemSelection* theWrappedObject)
{
return  theWrappedObject->takeFirst();
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::value(QItemSelection* theWrappedObject, int  i) const
{
return  theWrappedObject->value(i);
}

QList<QItemSelectionRange >  PythonQtWrapper_QItemSelection::static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector)
{
return QItemSelection::fromVector(vector);
}

bool  PythonQtWrapper_QItemSelection::operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const
{
return  (*theWrappedObject)== l;
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::last(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->last();
}

void PythonQtWrapper_QItemSelection::select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight)
{
 theWrappedObject->select(topLeft, bottomRight);
}

int  PythonQtWrapper_QItemSelection::indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const
{
return  theWrappedObject->indexOf(t, from);
}

bool  PythonQtWrapper_QItemSelection::removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t)
{
return  theWrappedObject->removeOne(t);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::first(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->first();
}

QItemSelectionRange  PythonQtWrapper_QItemSelection::takeAt(QItemSelection* theWrappedObject, int  i)
{
return  theWrappedObject->takeAt(i);
}

bool  PythonQtWrapper_QItemSelection::isEmpty(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

void PythonQtWrapper_QItemSelection::replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t)
{
 theWrappedObject->replace(i, t);
}

int  PythonQtWrapper_QItemSelection::count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const
{
return  theWrappedObject->count(t);
}

void PythonQtWrapper_QItemSelection::removeFirst(QItemSelection* theWrappedObject)
{
 theWrappedObject->removeFirst();
}

void PythonQtWrapper_QItemSelection::removeLast(QItemSelection* theWrappedObject)
{
 theWrappedObject->removeLast();
}

bool  PythonQtWrapper_QItemSelection::empty(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->empty();
}

int  PythonQtWrapper_QItemSelection::size(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->size();
}

void PythonQtWrapper_QItemSelection::removeAt(QItemSelection* theWrappedObject, int  i)
{
 theWrappedObject->removeAt(i);
}

void PythonQtWrapper_QItemSelection::swap(QItemSelection* theWrappedObject, int  i, int  j)
{
 theWrappedObject->swap(i, j);
}

const QItemSelectionRange&  PythonQtWrapper_QItemSelection::back(QItemSelection* theWrappedObject) const
{
return  theWrappedObject->back();
}

