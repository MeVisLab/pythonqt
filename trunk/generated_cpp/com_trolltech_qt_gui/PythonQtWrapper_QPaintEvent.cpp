#include "PythonQtWrapper_QPaintEvent.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qrect.h>
#include <qregion.h>

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRect&  paintRect)
{ 
return new PythonQtShell_QPaintEvent(paintRect); }

QPaintEvent* PythonQtWrapper_QPaintEvent::new_QPaintEvent(const QRegion&  paintRegion)
{ 
return new PythonQtShell_QPaintEvent(paintRegion); }

const QRegion&  PythonQtWrapper_QPaintEvent::region(QPaintEvent* theWrappedObject) const
{
return  (*theWrappedObject).region();
}

const QRect&  PythonQtWrapper_QPaintEvent::rect(QPaintEvent* theWrappedObject) const
{
return  (*theWrappedObject).rect();
}

