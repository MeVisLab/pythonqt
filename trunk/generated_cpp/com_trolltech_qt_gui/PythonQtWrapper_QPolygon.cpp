#include "PythonQtWrapper_QPolygon.h"

#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qvector.h>

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon()
{ 
return new QPolygon(); }

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(const QPolygon&  a)
{ 
return new QPolygon(a); }

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(const QRect&  r, bool  closed)
{ 
return new QPolygon(r, closed); }

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(const QVector<QPoint >&  v)
{ 
return new QPolygon(v); }

QPolygon* PythonQtWrapper_QPolygon::new_QPolygon(int  size)
{ 
return new QPolygon(size); }

void PythonQtWrapper_QPolygon::append(QPolygon* theWrappedObject, const QPoint&  t)
{
theWrappedObject->append(t);
}

const QPoint&  PythonQtWrapper_QPolygon::at(QPolygon* theWrappedObject, int  i) const
{
return theWrappedObject->at(i);
}

QRect  PythonQtWrapper_QPolygon::boundingRect(QPolygon* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

int  PythonQtWrapper_QPolygon::capacity(QPolygon* theWrappedObject) const
{
return theWrappedObject->capacity();
}

void PythonQtWrapper_QPolygon::clear(QPolygon* theWrappedObject)
{
theWrappedObject->clear();
}

bool  PythonQtWrapper_QPolygon::contains(QPolygon* theWrappedObject, const QPoint&  t) const
{
return theWrappedObject->contains(t);
}

bool  PythonQtWrapper_QPolygon::containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const
{
return theWrappedObject->containsPoint(pt, fillRule);
}

int  PythonQtWrapper_QPolygon::count(QPolygon* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QPolygon::count(QPolygon* theWrappedObject, const QPoint&  t) const
{
return theWrappedObject->count(t);
}

bool  PythonQtWrapper_QPolygon::empty(QPolygon* theWrappedObject) const
{
return theWrappedObject->empty();
}

QVector<QPoint >&  PythonQtWrapper_QPolygon::fill(QPolygon* theWrappedObject, const QPoint&  t, int  size)
{
return theWrappedObject->fill(t, size);
}

const QPoint&  PythonQtWrapper_QPolygon::first(QPolygon* theWrappedObject) const
{
return theWrappedObject->first();
}

QVector<QPoint >  PythonQtWrapper_QPolygon::static_QPolygon_fromList(const QList<QPoint >&  list)
{
return QPolygon::fromList(list);
}

int  PythonQtWrapper_QPolygon::indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const
{
return theWrappedObject->indexOf(t, from);
}

QPolygon  PythonQtWrapper_QPolygon::intersected(QPolygon* theWrappedObject, const QPolygon&  r) const
{
return theWrappedObject->intersected(r);
}

bool  PythonQtWrapper_QPolygon::isEmpty(QPolygon* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

const QPoint&  PythonQtWrapper_QPolygon::last(QPolygon* theWrappedObject) const
{
return theWrappedObject->last();
}

int  PythonQtWrapper_QPolygon::lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const
{
return theWrappedObject->lastIndexOf(t, from);
}

QVector<QPoint >  PythonQtWrapper_QPolygon::mid(QPolygon* theWrappedObject, int  pos, int  length) const
{
return theWrappedObject->mid(pos, length);
}

void PythonQtWrapper_QPolygon::writeTo(QPolygon* theWrappedObject, QDataStream&  stream)
{
stream <<  *theWrappedObject;
}

bool  PythonQtWrapper_QPolygon::operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const
{
return *theWrappedObject == v;
}

void PythonQtWrapper_QPolygon::readFrom(QPolygon* theWrappedObject, QDataStream&  stream)
{
stream >>  *theWrappedObject;
}

void PythonQtWrapper_QPolygon::pop_back(QPolygon* theWrappedObject)
{
theWrappedObject->pop_back();
}

void PythonQtWrapper_QPolygon::pop_front(QPolygon* theWrappedObject)
{
theWrappedObject->pop_front();
}

void PythonQtWrapper_QPolygon::prepend(QPolygon* theWrappedObject, const QPoint&  t)
{
theWrappedObject->prepend(t);
}

void PythonQtWrapper_QPolygon::push_back(QPolygon* theWrappedObject, const QPoint&  t)
{
theWrappedObject->push_back(t);
}

void PythonQtWrapper_QPolygon::push_front(QPolygon* theWrappedObject, const QPoint&  t)
{
theWrappedObject->push_front(t);
}

void PythonQtWrapper_QPolygon::remove(QPolygon* theWrappedObject, int  i)
{
theWrappedObject->remove(i);
}

void PythonQtWrapper_QPolygon::remove(QPolygon* theWrappedObject, int  i, int  n)
{
theWrappedObject->remove(i, n);
}

void PythonQtWrapper_QPolygon::replace(QPolygon* theWrappedObject, int  i, const QPoint&  t)
{
theWrappedObject->replace(i, t);
}

void PythonQtWrapper_QPolygon::reserve(QPolygon* theWrappedObject, int  size)
{
theWrappedObject->reserve(size);
}

void PythonQtWrapper_QPolygon::resize(QPolygon* theWrappedObject, int  size)
{
theWrappedObject->resize(size);
}

void PythonQtWrapper_QPolygon::setSharable(QPolygon* theWrappedObject, bool  sharable)
{
theWrappedObject->setSharable(sharable);
}

int  PythonQtWrapper_QPolygon::size(QPolygon* theWrappedObject) const
{
return theWrappedObject->size();
}

void PythonQtWrapper_QPolygon::squeeze(QPolygon* theWrappedObject)
{
theWrappedObject->squeeze();
}

QPolygon  PythonQtWrapper_QPolygon::subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const
{
return theWrappedObject->subtracted(r);
}

QList<QPoint >  PythonQtWrapper_QPolygon::toList(QPolygon* theWrappedObject) const
{
return theWrappedObject->toList();
}

void PythonQtWrapper_QPolygon::translate(QPolygon* theWrappedObject, const QPoint&  offset)
{
theWrappedObject->translate(offset);
}

void PythonQtWrapper_QPolygon::translate(QPolygon* theWrappedObject, int  dx, int  dy)
{
theWrappedObject->translate(dx, dy);
}

QPolygon  PythonQtWrapper_QPolygon::united(QPolygon* theWrappedObject, const QPolygon&  r) const
{
return theWrappedObject->united(r);
}

QPoint  PythonQtWrapper_QPolygon::value(QPolygon* theWrappedObject, int  i) const
{
return theWrappedObject->value(i);
}

QPoint  PythonQtWrapper_QPolygon::value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const
{
return theWrappedObject->value(i, defaultValue);
}

