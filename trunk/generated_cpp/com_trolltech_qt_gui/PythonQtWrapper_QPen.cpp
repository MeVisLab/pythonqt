#include "PythonQtWrapper_QPen.h"

#include <QBrush>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qvector.h>

QPen* PythonQtWrapper_QPen::new_QPen()
{ 
return new QPen(); }

QPen* PythonQtWrapper_QPen::new_QPen(Qt::PenStyle  arg__1)
{ 
return new QPen(arg__1); }

QPen* PythonQtWrapper_QPen::new_QPen(const QBrush&  brush, qreal  width, Qt::PenStyle  s, Qt::PenCapStyle  c, Qt::PenJoinStyle  j)
{ 
return new QPen(brush, width, s, c, j); }

QPen* PythonQtWrapper_QPen::new_QPen(const QColor&  color)
{ 
return new QPen(color); }

QPen* PythonQtWrapper_QPen::new_QPen(const QPen&  pen)
{ 
return new QPen(pen); }

QBrush  PythonQtWrapper_QPen::brush(QPen* theWrappedObject) const
{
return theWrappedObject->brush();
}

Qt::PenCapStyle  PythonQtWrapper_QPen::capStyle(QPen* theWrappedObject) const
{
return theWrappedObject->capStyle();
}

QColor  PythonQtWrapper_QPen::color(QPen* theWrappedObject) const
{
return theWrappedObject->color();
}

qreal  PythonQtWrapper_QPen::dashOffset(QPen* theWrappedObject) const
{
return theWrappedObject->dashOffset();
}

QVector<qreal >  PythonQtWrapper_QPen::dashPattern(QPen* theWrappedObject) const
{
return theWrappedObject->dashPattern();
}

bool  PythonQtWrapper_QPen::isCosmetic(QPen* theWrappedObject) const
{
return theWrappedObject->isCosmetic();
}

bool  PythonQtWrapper_QPen::isSolid(QPen* theWrappedObject) const
{
return theWrappedObject->isSolid();
}

Qt::PenJoinStyle  PythonQtWrapper_QPen::joinStyle(QPen* theWrappedObject) const
{
return theWrappedObject->joinStyle();
}

qreal  PythonQtWrapper_QPen::miterLimit(QPen* theWrappedObject) const
{
return theWrappedObject->miterLimit();
}

void PythonQtWrapper_QPen::writeTo(QPen* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QPen::operator_equal(QPen* theWrappedObject, const QPen&  p) const
{
return *theWrappedObject == p;
}

void PythonQtWrapper_QPen::readFrom(QPen* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

void PythonQtWrapper_QPen::setBrush(QPen* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setBrush(brush);
}

void PythonQtWrapper_QPen::setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs)
{
theWrappedObject->setCapStyle(pcs);
}

void PythonQtWrapper_QPen::setColor(QPen* theWrappedObject, const QColor&  color)
{
theWrappedObject->setColor(color);
}

void PythonQtWrapper_QPen::setCosmetic(QPen* theWrappedObject, bool  cosmetic)
{
theWrappedObject->setCosmetic(cosmetic);
}

void PythonQtWrapper_QPen::setDashOffset(QPen* theWrappedObject, qreal  doffset)
{
theWrappedObject->setDashOffset(doffset);
}

void PythonQtWrapper_QPen::setDashPattern(QPen* theWrappedObject, const QVector<qreal >&  pattern)
{
theWrappedObject->setDashPattern(pattern);
}

void PythonQtWrapper_QPen::setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs)
{
theWrappedObject->setJoinStyle(pcs);
}

void PythonQtWrapper_QPen::setMiterLimit(QPen* theWrappedObject, qreal  limit)
{
theWrappedObject->setMiterLimit(limit);
}

void PythonQtWrapper_QPen::setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1)
{
theWrappedObject->setStyle(arg__1);
}

void PythonQtWrapper_QPen::setWidth(QPen* theWrappedObject, int  width)
{
theWrappedObject->setWidth(width);
}

void PythonQtWrapper_QPen::setWidthF(QPen* theWrappedObject, qreal  width)
{
theWrappedObject->setWidthF(width);
}

Qt::PenStyle  PythonQtWrapper_QPen::style(QPen* theWrappedObject) const
{
return theWrappedObject->style();
}

int  PythonQtWrapper_QPen::width(QPen* theWrappedObject) const
{
return theWrappedObject->width();
}

qreal  PythonQtWrapper_QPen::widthF(QPen* theWrappedObject) const
{
return theWrappedObject->widthF();
}

