#include "PythonQtWrapper_QLineF.h"

#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qpoint.h>

QLineF* PythonQtWrapper_QLineF::new_QLineF()
{ 
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QLine&  line)
{ 
return new QLineF(line); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{ 
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{ 
return new QLineF(x1, y1, x2, y2); }

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
return theWrappedObject->angle();
}

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject, const QLineF&  l) const
{
return theWrappedObject->angle(l);
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
return theWrappedObject->angleTo(l);
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
return theWrappedObject->dx();
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
return theWrappedObject->dy();
}

QLineF  PythonQtWrapper_QLineF::static_QLineF_fromPolar(qreal  length, qreal  angle)
{
return QLineF::fromPolar(length, angle);
}

QLineF::IntersectType  PythonQtWrapper_QLineF::intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const
{
return theWrappedObject->intersect(l, intersectionPoint);
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
return theWrappedObject->isNull();
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
return theWrappedObject->length();
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
return theWrappedObject->normalVector();
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QLineF::operator_equal(QLineF* theWrappedObject, const QLineF&  d) const
{
return *theWrappedObject == d;
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
return theWrappedObject->p1();
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
return theWrappedObject->p2();
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
return theWrappedObject->pointAt(t);
}

void PythonQtWrapper_QLineF::setAngle(QLineF* theWrappedObject, qreal  angle)
{
theWrappedObject->setAngle(angle);
}

void PythonQtWrapper_QLineF::setLength(QLineF* theWrappedObject, qreal  len)
{
theWrappedObject->setLength(len);
}

void PythonQtWrapper_QLineF::setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
theWrappedObject->setLine(x1, y1, x2, y2);
}

void PythonQtWrapper_QLineF::setP1(QLineF* theWrappedObject, const QPointF&  p1)
{
theWrappedObject->setP1(p1);
}

void PythonQtWrapper_QLineF::setP2(QLineF* theWrappedObject, const QPointF&  p2)
{
theWrappedObject->setP2(p2);
}

void PythonQtWrapper_QLineF::setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
theWrappedObject->setPoints(p1, p2);
}

QLine  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
return theWrappedObject->toLine();
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, const QPointF&  p)
{
theWrappedObject->translate(p);
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
return theWrappedObject->translated(p);
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
return theWrappedObject->translated(dx, dy);
}

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
return theWrappedObject->unitVector();
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
return theWrappedObject->x1();
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
return theWrappedObject->x2();
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
return theWrappedObject->y1();
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
return theWrappedObject->y2();
}

