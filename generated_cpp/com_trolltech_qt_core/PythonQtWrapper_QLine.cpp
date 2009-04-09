#include "PythonQtWrapper_QLine.h"

#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qpoint.h>

QLine* PythonQtWrapper_QLine::new_QLine()
{ 
return new QLine(); }

QLine* PythonQtWrapper_QLine::new_QLine(const QPoint&  pt1, const QPoint&  pt2)
{ 
return new QLine(pt1, pt2); }

QLine* PythonQtWrapper_QLine::new_QLine(int  x1, int  y1, int  x2, int  y2)
{ 
return new QLine(x1, y1, x2, y2); }

int  PythonQtWrapper_QLine::dx(QLine* theWrappedObject) const
{
return theWrappedObject->dx();
}

int  PythonQtWrapper_QLine::dy(QLine* theWrappedObject) const
{
return theWrappedObject->dy();
}

bool  PythonQtWrapper_QLine::isNull(QLine* theWrappedObject) const
{
return theWrappedObject->isNull();
}

void PythonQtWrapper_QLine::writeTo(QLine* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QLine::operator_equal(QLine* theWrappedObject, const QLine&  d) const
{
return *theWrappedObject == d;
}

void PythonQtWrapper_QLine::readFrom(QLine* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QPoint  PythonQtWrapper_QLine::p1(QLine* theWrappedObject) const
{
return theWrappedObject->p1();
}

QPoint  PythonQtWrapper_QLine::p2(QLine* theWrappedObject) const
{
return theWrappedObject->p2();
}

void PythonQtWrapper_QLine::setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
theWrappedObject->setLine(x1, y1, x2, y2);
}

void PythonQtWrapper_QLine::setP1(QLine* theWrappedObject, const QPoint&  p1)
{
theWrappedObject->setP1(p1);
}

void PythonQtWrapper_QLine::setP2(QLine* theWrappedObject, const QPoint&  p2)
{
theWrappedObject->setP2(p2);
}

void PythonQtWrapper_QLine::setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
theWrappedObject->setPoints(p1, p2);
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, const QPoint&  p)
{
theWrappedObject->translate(p);
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, int  dx, int  dy)
{
theWrappedObject->translate(dx, dy);
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->translated(p);
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, int  dx, int  dy) const
{
return theWrappedObject->translated(dx, dy);
}

int  PythonQtWrapper_QLine::x1(QLine* theWrappedObject) const
{
return theWrappedObject->x1();
}

int  PythonQtWrapper_QLine::x2(QLine* theWrappedObject) const
{
return theWrappedObject->x2();
}

int  PythonQtWrapper_QLine::y1(QLine* theWrappedObject) const
{
return theWrappedObject->y1();
}

int  PythonQtWrapper_QLine::y2(QLine* theWrappedObject) const
{
return theWrappedObject->y2();
}

