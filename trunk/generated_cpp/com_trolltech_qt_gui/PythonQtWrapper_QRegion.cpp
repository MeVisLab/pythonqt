#include "PythonQtWrapper_QRegion.h"

#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qvector.h>

QRegion* PythonQtWrapper_QRegion::new_QRegion()
{ 
return new QRegion(); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QBitmap&  bitmap)
{ 
return new QRegion(bitmap); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule)
{ 
return new QRegion(pa, fillRule); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRect&  r, QRegion::RegionType  t)
{ 
return new QRegion(r, t); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(const QRegion&  region)
{ 
return new QRegion(region); }

QRegion* PythonQtWrapper_QRegion::new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t)
{ 
return new QRegion(x, y, w, h, t); }

QRect  PythonQtWrapper_QRegion::boundingRect(QRegion* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

bool  PythonQtWrapper_QRegion::contains(QRegion* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->contains(p);
}

bool  PythonQtWrapper_QRegion::contains(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->contains(r);
}

QRegion  PythonQtWrapper_QRegion::intersect(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->intersect(r);
}

QRegion  PythonQtWrapper_QRegion::intersected(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->intersected(r);
}

QRegion  PythonQtWrapper_QRegion::intersected(QRegion* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->intersected(r);
}

bool  PythonQtWrapper_QRegion::intersects(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->intersects(r);
}

bool  PythonQtWrapper_QRegion::intersects(QRegion* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->intersects(r);
}

bool  PythonQtWrapper_QRegion::isEmpty(QRegion* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

int  PythonQtWrapper_QRegion::numRects(QRegion* theWrappedObject) const
{
return theWrappedObject->numRects();
}

const QRegion  PythonQtWrapper_QRegion::operator_and(QRegion* theWrappedObject, const QRect&  r) const
{
return *theWrappedObject & r;
}

const QRegion  PythonQtWrapper_QRegion::operator_add(QRegion* theWrappedObject, const QRect&  r) const
{
return *theWrappedObject + r;
}

void PythonQtWrapper_QRegion::writeTo(QRegion* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QRegion::operator_equal(QRegion* theWrappedObject, const QRegion&  r) const
{
return *theWrappedObject == r;
}

void PythonQtWrapper_QRegion::readFrom(QRegion* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QVector<QRect >  PythonQtWrapper_QRegion::rects(QRegion* theWrappedObject) const
{
return theWrappedObject->rects();
}

void PythonQtWrapper_QRegion::setRects(QRegion* theWrappedObject, const QRect*  rect, int  num)
{
theWrappedObject->setRects(rect, num);
}

QRegion  PythonQtWrapper_QRegion::subtracted(QRegion* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->subtracted(r);
}

void PythonQtWrapper_QRegion::translate(QRegion* theWrappedObject, const QPoint&  p)
{
theWrappedObject->translate(p);
}

void PythonQtWrapper_QRegion::translate(QRegion* theWrappedObject, int  dx, int  dy)
{
theWrappedObject->translate(dx, dy);
}

QRegion  PythonQtWrapper_QRegion::translated(QRegion* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->translated(p);
}

QRegion  PythonQtWrapper_QRegion::translated(QRegion* theWrappedObject, int  dx, int  dy) const
{
return theWrappedObject->translated(dx, dy);
}

QRegion  PythonQtWrapper_QRegion::unite(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->unite(r);
}

QRegion  PythonQtWrapper_QRegion::united(QRegion* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->united(r);
}

QRegion  PythonQtWrapper_QRegion::united(QRegion* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->united(r);
}

QRegion  PythonQtWrapper_QRegion::xored(QRegion* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->xored(r);
}

