#include "PythonQtWrapper_QPointF.h"

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>

QPointF* PythonQtWrapper_QPointF::new_QPointF()
{ 
return new QPointF(); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(const QPoint&  p)
{ 
return new QPointF(p); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(qreal  xpos, qreal  ypos)
{ 
return new QPointF(xpos, ypos); }

bool  PythonQtWrapper_QPointF::isNull(QPointF* theWrappedObject) const
{
return theWrappedObject->isNull();
}

QPointF&  PythonQtWrapper_QPointF::operator_multiply_assign(QPointF* theWrappedObject, qreal  c)
{
return *theWrappedObject *= c;
}

QPointF&  PythonQtWrapper_QPointF::operator_add_assign(QPointF* theWrappedObject, const QPointF&  p)
{
return *theWrappedObject += p;
}

QPointF&  PythonQtWrapper_QPointF::operator_subtract_assign(QPointF* theWrappedObject, const QPointF&  p)
{
return *theWrappedObject -= p;
}

QPointF&  PythonQtWrapper_QPointF::operator_divide_assign(QPointF* theWrappedObject, qreal  c)
{
return *theWrappedObject /= c;
}

void PythonQtWrapper_QPointF::writeTo(QPointF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QPointF::operator_equal(QPointF* theWrappedObject, const QPointF&  p2)
{
return *theWrappedObject == p2;
}

void PythonQtWrapper_QPointF::readFrom(QPointF* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

void PythonQtWrapper_QPointF::setX(QPointF* theWrappedObject, qreal  x)
{
theWrappedObject->setX(x);
}

void PythonQtWrapper_QPointF::setY(QPointF* theWrappedObject, qreal  y)
{
theWrappedObject->setY(y);
}

QPoint  PythonQtWrapper_QPointF::toPoint(QPointF* theWrappedObject) const
{
return theWrappedObject->toPoint();
}

qreal  PythonQtWrapper_QPointF::x(QPointF* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QPointF::y(QPointF* theWrappedObject) const
{
return theWrappedObject->y();
}

