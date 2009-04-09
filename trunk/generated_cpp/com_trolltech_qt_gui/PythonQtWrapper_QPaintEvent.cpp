#include "PythonQtWrapper_QPaintEvent.h"

#include <QVariant>
#include <qrect.h>
#include <qregion.h>

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRect&  paintRect)
{ 
return new QPaintEvent(paintRect); }

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRegion&  paintRegion)
{ 
return new QPaintEvent(paintRegion); }

const QRect&  PythonQtWrapper_QPaintEvent::rect(QPaintEvent* theWrappedObject) const
{
return theWrappedObject->rect();
}

const QRegion&  PythonQtWrapper_QPaintEvent::region(QPaintEvent* theWrappedObject) const
{
return theWrappedObject->region();
}

