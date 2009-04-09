#include "PythonQtWrapper_QLCDNumber.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlcdnumber.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QLCDNumber* PythonQtWrapper_QLCDNumber::new_QLCDNumber(QWidget*  parent)
{ 
return new QLCDNumber(parent); }

QLCDNumber* PythonQtWrapper_QLCDNumber::new_QLCDNumber(uint  numDigits, QWidget*  parent)
{ 
return new QLCDNumber(numDigits, parent); }

bool  PythonQtWrapper_QLCDNumber::checkOverflow(QLCDNumber* theWrappedObject, double  num) const
{
return theWrappedObject->checkOverflow(num);
}

bool  PythonQtWrapper_QLCDNumber::checkOverflow(QLCDNumber* theWrappedObject, int  num) const
{
return theWrappedObject->checkOverflow(num);
}

int  PythonQtWrapper_QLCDNumber::intValue(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->intValue();
}

QLCDNumber::Mode  PythonQtWrapper_QLCDNumber::mode(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->mode();
}

int  PythonQtWrapper_QLCDNumber::numDigits(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->numDigits();
}

QLCDNumber::SegmentStyle  PythonQtWrapper_QLCDNumber::segmentStyle(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->segmentStyle();
}

void PythonQtWrapper_QLCDNumber::setMode(QLCDNumber* theWrappedObject, QLCDNumber::Mode  arg__1)
{
theWrappedObject->setMode(arg__1);
}

void PythonQtWrapper_QLCDNumber::setNumDigits(QLCDNumber* theWrappedObject, int  nDigits)
{
theWrappedObject->setNumDigits(nDigits);
}

void PythonQtWrapper_QLCDNumber::setSegmentStyle(QLCDNumber* theWrappedObject, QLCDNumber::SegmentStyle  arg__1)
{
theWrappedObject->setSegmentStyle(arg__1);
}

QSize  PythonQtWrapper_QLCDNumber::sizeHint(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

bool  PythonQtWrapper_QLCDNumber::smallDecimalPoint(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->smallDecimalPoint();
}

double  PythonQtWrapper_QLCDNumber::value(QLCDNumber* theWrappedObject) const
{
return theWrappedObject->value();
}

