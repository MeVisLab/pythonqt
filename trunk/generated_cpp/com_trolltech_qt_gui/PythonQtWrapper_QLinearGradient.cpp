#include "PythonQtWrapper_QLinearGradient.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient()
{ 
return new QLinearGradient(); }

QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop)
{ 
return new QLinearGradient(start, finalStop); }

QLinearGradient* PythonQtWrapper_QLinearGradient::new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop)
{ 
return new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop); }

void PythonQtWrapper_QLinearGradient::setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y)
{
 theWrappedObject->setStart(x, y);
}

void PythonQtWrapper_QLinearGradient::setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop)
{
 theWrappedObject->setFinalStop(stop);
}

void PythonQtWrapper_QLinearGradient::setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y)
{
 theWrappedObject->setFinalStop(x, y);
}

QPointF  PythonQtWrapper_QLinearGradient::start(QLinearGradient* theWrappedObject) const
{
return  theWrappedObject->start();
}

void PythonQtWrapper_QLinearGradient::setStart(QLinearGradient* theWrappedObject, const QPointF&  start)
{
 theWrappedObject->setStart(start);
}

QPointF  PythonQtWrapper_QLinearGradient::finalStop(QLinearGradient* theWrappedObject) const
{
return  theWrappedObject->finalStop();
}

