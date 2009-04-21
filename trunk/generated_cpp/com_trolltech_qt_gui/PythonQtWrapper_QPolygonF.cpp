#include "PythonQtWrapper_QPolygonF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qvector.h>

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF()
{ 
return new QPolygonF(); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygon&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QPolygonF&  a)
{ 
return new QPolygonF(a); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QRectF&  r)
{ 
return new QPolygonF(r); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(const QVector<QPointF >&  v)
{ 
return new QPolygonF(v); }

QPolygonF* PythonQtWrapper_QPolygonF::new_QPolygonF(int  size)
{ 
return new QPolygonF(size); }

void PythonQtWrapper_QPolygonF::push_back(QPolygonF* theWrappedObject, const QPointF&  t)
{
 theWrappedObject->push_back(t);
}

void PythonQtWrapper_QPolygonF::clear(QPolygonF* theWrappedObject)
{
 theWrappedObject->clear();
}

bool  PythonQtWrapper_QPolygonF::contains(QPolygonF* theWrappedObject, const QPointF&  t) const
{
return  theWrappedObject->contains(t);
}

const QPointF&  PythonQtWrapper_QPolygonF::first(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->first();
}

bool  PythonQtWrapper_QPolygonF::containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const
{
return  theWrappedObject->containsPoint(pt, fillRule);
}

const QPointF&  PythonQtWrapper_QPolygonF::at(QPolygonF* theWrappedObject, int  i) const
{
return  theWrappedObject->at(i);
}

int  PythonQtWrapper_QPolygonF::capacity(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->capacity();
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::static_QPolygonF_fromList(const QList<QPointF >&  list)
{
return QPolygonF::fromList(list);
}

bool  PythonQtWrapper_QPolygonF::empty(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->empty();
}

int  PythonQtWrapper_QPolygonF::indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
return  theWrappedObject->indexOf(t, from);
}

bool  PythonQtWrapper_QPolygonF::isClosed(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->isClosed();
}

void PythonQtWrapper_QPolygonF::squeeze(QPolygonF* theWrappedObject)
{
 theWrappedObject->squeeze();
}

bool  PythonQtWrapper_QPolygonF::isEmpty(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QPolygonF::operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const
{
return  (*theWrappedObject)== v;
}

QList<QPointF >  PythonQtWrapper_QPolygonF::toList(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->toList();
}

QPolygonF  PythonQtWrapper_QPolygonF::intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
return  theWrappedObject->intersected(r);
}

void PythonQtWrapper_QPolygonF::pop_front(QPolygonF* theWrappedObject)
{
 theWrappedObject->pop_front();
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject, const QPointF&  t) const
{
return  theWrappedObject->count(t);
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i) const
{
return  theWrappedObject->value(i);
}

int  PythonQtWrapper_QPolygonF::count(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->count();
}

QVector<QPointF >&  PythonQtWrapper_QPolygonF::fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size)
{
return  theWrappedObject->fill(t, size);
}

void PythonQtWrapper_QPolygonF::append(QPolygonF* theWrappedObject, const QPointF&  t)
{
 theWrappedObject->append(t);
}

int  PythonQtWrapper_QPolygonF::lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const
{
return  theWrappedObject->lastIndexOf(t, from);
}

QVector<QPointF >  PythonQtWrapper_QPolygonF::mid(QPolygonF* theWrappedObject, int  pos, int  length) const
{
return  theWrappedObject->mid(pos, length);
}

void PythonQtWrapper_QPolygonF::setSharable(QPolygonF* theWrappedObject, bool  sharable)
{
 theWrappedObject->setSharable(sharable);
}

QRectF  PythonQtWrapper_QPolygonF::boundingRect(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->boundingRect();
}

void PythonQtWrapper_QPolygonF::writeTo(QPolygonF* theWrappedObject, QDataStream&  stream)
{
stream <<  (*theWrappedObject);
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy)
{
 theWrappedObject->translate(dx, dy);
}

void PythonQtWrapper_QPolygonF::reserve(QPolygonF* theWrappedObject, int  size)
{
 theWrappedObject->reserve(size);
}

void PythonQtWrapper_QPolygonF::resize(QPolygonF* theWrappedObject, int  size)
{
 theWrappedObject->resize(size);
}

void PythonQtWrapper_QPolygonF::translate(QPolygonF* theWrappedObject, const QPointF&  offset)
{
 theWrappedObject->translate(offset);
}

void PythonQtWrapper_QPolygonF::prepend(QPolygonF* theWrappedObject, const QPointF&  t)
{
 theWrappedObject->prepend(t);
}

void PythonQtWrapper_QPolygonF::replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t)
{
 theWrappedObject->replace(i, t);
}

QPolygon  PythonQtWrapper_QPolygonF::toPolygon(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->toPolygon();
}

void PythonQtWrapper_QPolygonF::pop_back(QPolygonF* theWrappedObject)
{
 theWrappedObject->pop_back();
}

QPolygonF  PythonQtWrapper_QPolygonF::subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
return  theWrappedObject->subtracted(r);
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i, int  n)
{
 theWrappedObject->remove(i, n);
}

void PythonQtWrapper_QPolygonF::readFrom(QPolygonF* theWrappedObject, QDataStream&  stream)
{
stream >>  (*theWrappedObject);
}

const QPointF&  PythonQtWrapper_QPolygonF::last(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->last();
}

int  PythonQtWrapper_QPolygonF::size(QPolygonF* theWrappedObject) const
{
return  theWrappedObject->size();
}

QPointF  PythonQtWrapper_QPolygonF::value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const
{
return  theWrappedObject->value(i, defaultValue);
}

void PythonQtWrapper_QPolygonF::remove(QPolygonF* theWrappedObject, int  i)
{
 theWrappedObject->remove(i);
}

QPolygonF  PythonQtWrapper_QPolygonF::united(QPolygonF* theWrappedObject, const QPolygonF&  r) const
{
return  theWrappedObject->united(r);
}

void PythonQtWrapper_QPolygonF::push_front(QPolygonF* theWrappedObject, const QPointF&  t)
{
 theWrappedObject->push_front(t);
}

