#include "PythonQtWrapper_QGradient.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qvector.h>

QGradient* PythonQtWrapper_QGradient::new_QGradient()
{ 
return new QGradient(); }

QGradient::CoordinateMode  PythonQtWrapper_QGradient::coordinateMode(QGradient* theWrappedObject) const
{
return  theWrappedObject->coordinateMode();
}

bool  PythonQtWrapper_QGradient::operator_equal(QGradient* theWrappedObject, const QGradient&  gradient) const
{
return  (*theWrappedObject)== gradient;
}

void PythonQtWrapper_QGradient::setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color)
{
 theWrappedObject->setColorAt(pos, color);
}

QGradient::Spread  PythonQtWrapper_QGradient::spread(QGradient* theWrappedObject) const
{
return  theWrappedObject->spread();
}

QGradient::Type  PythonQtWrapper_QGradient::type(QGradient* theWrappedObject) const
{
return  theWrappedObject->type();
}

void PythonQtWrapper_QGradient::setSpread(QGradient* theWrappedObject, QGradient::Spread  spread)
{
 theWrappedObject->setSpread(spread);
}

void PythonQtWrapper_QGradient::setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode)
{
 theWrappedObject->setCoordinateMode(mode);
}

QVector<QPair<qreal , QColor >  >  PythonQtWrapper_QGradient::stops(QGradient* theWrappedObject) const
{
return  theWrappedObject->stops();
}

void PythonQtWrapper_QGradient::setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops)
{
 theWrappedObject->setStops(stops);
}

