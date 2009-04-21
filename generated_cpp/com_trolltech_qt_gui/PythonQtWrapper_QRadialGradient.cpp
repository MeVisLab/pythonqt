#include "PythonQtWrapper_QRadialGradient.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient()
{ 
return new QRadialGradient(); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius)
{ 
return new QRadialGradient(center, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(const QPointF&  center, qreal  radius, const QPointF&  focalPoint)
{ 
return new QRadialGradient(center, radius, focalPoint); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius)
{ 
return new QRadialGradient(cx, cy, radius); }

QRadialGradient* PythonQtWrapper_QRadialGradient::new_QRadialGradient(qreal  cx, qreal  cy, qreal  radius, qreal  fx, qreal  fy)
{ 
return new QRadialGradient(cx, cy, radius, fx, fy); }

QPointF  PythonQtWrapper_QRadialGradient::center(QRadialGradient* theWrappedObject) const
{
return  theWrappedObject->center();
}

QPointF  PythonQtWrapper_QRadialGradient::focalPoint(QRadialGradient* theWrappedObject) const
{
return  theWrappedObject->focalPoint();
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
 theWrappedObject->setFocalPoint(x, y);
}

qreal  PythonQtWrapper_QRadialGradient::radius(QRadialGradient* theWrappedObject) const
{
return  theWrappedObject->radius();
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, qreal  x, qreal  y)
{
 theWrappedObject->setCenter(x, y);
}

void PythonQtWrapper_QRadialGradient::setFocalPoint(QRadialGradient* theWrappedObject, const QPointF&  focalPoint)
{
 theWrappedObject->setFocalPoint(focalPoint);
}

void PythonQtWrapper_QRadialGradient::setRadius(QRadialGradient* theWrappedObject, qreal  radius)
{
 theWrappedObject->setRadius(radius);
}

void PythonQtWrapper_QRadialGradient::setCenter(QRadialGradient* theWrappedObject, const QPointF&  center)
{
 theWrappedObject->setCenter(center);
}

