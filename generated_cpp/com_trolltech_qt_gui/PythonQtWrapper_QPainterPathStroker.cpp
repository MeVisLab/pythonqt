#include "PythonQtWrapper_QPainterPathStroker.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qpainterpath.h>
#include <qvector.h>

QPainterPathStroker* PythonQtWrapper_QPainterPathStroker::new_QPainterPathStroker()
{ 
return new QPainterPathStroker(); }

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern)
{
 (*theWrappedObject).setDashPattern(dashPattern);
}

void PythonQtWrapper_QPainterPathStroker::setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style)
{
 (*theWrappedObject).setJoinStyle(style);
}

Qt::PenCapStyle  PythonQtWrapper_QPainterPathStroker::capStyle(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).capStyle();
}

qreal  PythonQtWrapper_QPainterPathStroker::curveThreshold(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).curveThreshold();
}

void PythonQtWrapper_QPainterPathStroker::setWidth(QPainterPathStroker* theWrappedObject, qreal  width)
{
 (*theWrappedObject).setWidth(width);
}

QVector<qreal >  PythonQtWrapper_QPainterPathStroker::dashPattern(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).dashPattern();
}

void PythonQtWrapper_QPainterPathStroker::setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length)
{
 (*theWrappedObject).setMiterLimit(length);
}

void PythonQtWrapper_QPainterPathStroker::setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold)
{
 (*theWrappedObject).setCurveThreshold(threshold);
}

qreal  PythonQtWrapper_QPainterPathStroker::miterLimit(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).miterLimit();
}

void PythonQtWrapper_QPainterPathStroker::setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset)
{
 (*theWrappedObject).setDashOffset(offset);
}

qreal  PythonQtWrapper_QPainterPathStroker::width(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).width();
}

QPainterPath  PythonQtWrapper_QPainterPathStroker::createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const
{
return  (*theWrappedObject).createStroke(path);
}

Qt::PenJoinStyle  PythonQtWrapper_QPainterPathStroker::joinStyle(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).joinStyle();
}

void PythonQtWrapper_QPainterPathStroker::setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1)
{
 (*theWrappedObject).setDashPattern(arg__1);
}

qreal  PythonQtWrapper_QPainterPathStroker::dashOffset(QPainterPathStroker* theWrappedObject) const
{
return  (*theWrappedObject).dashOffset();
}

void PythonQtWrapper_QPainterPathStroker::setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style)
{
 (*theWrappedObject).setCapStyle(style);
}

