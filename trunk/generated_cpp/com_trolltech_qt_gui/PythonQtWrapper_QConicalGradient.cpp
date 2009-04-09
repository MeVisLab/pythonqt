#include "PythonQtWrapper_QConicalGradient.h"

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient()
{ 
return new QConicalGradient(); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(const QPointF&  center, qreal  startAngle)
{ 
return new QConicalGradient(center, startAngle); }

QConicalGradient* PythonQtWrapper_QConicalGradient::new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle)
{ 
return new QConicalGradient(cx, cy, startAngle); }

qreal  PythonQtWrapper_QConicalGradient::angle(QConicalGradient* theWrappedObject) const
{
return theWrappedObject->angle();
}

QPointF  PythonQtWrapper_QConicalGradient::center(QConicalGradient* theWrappedObject) const
{
return theWrappedObject->center();
}

void PythonQtWrapper_QConicalGradient::setAngle(QConicalGradient* theWrappedObject, qreal  angle)
{
theWrappedObject->setAngle(angle);
}

void PythonQtWrapper_QConicalGradient::setCenter(QConicalGradient* theWrappedObject, const QPointF&  center)
{
theWrappedObject->setCenter(center);
}

void PythonQtWrapper_QConicalGradient::setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setCenter(x, y);
}

