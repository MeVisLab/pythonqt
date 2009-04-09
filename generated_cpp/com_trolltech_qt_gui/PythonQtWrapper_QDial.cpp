#include "PythonQtWrapper_QDial.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdial.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
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
#include <qstyleoption.h>
#include <qwidget.h>

QDial* PythonQtWrapper_QDial::new_QDial(QWidget*  parent)
{ 
return new QDial(parent); }

QSize  PythonQtWrapper_QDial::minimumSizeHint(QDial* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

int  PythonQtWrapper_QDial::notchSize(QDial* theWrappedObject) const
{
return theWrappedObject->notchSize();
}

qreal  PythonQtWrapper_QDial::notchTarget(QDial* theWrappedObject) const
{
return theWrappedObject->notchTarget();
}

bool  PythonQtWrapper_QDial::notchesVisible(QDial* theWrappedObject) const
{
return theWrappedObject->notchesVisible();
}

void PythonQtWrapper_QDial::setNotchTarget(QDial* theWrappedObject, double  target)
{
theWrappedObject->setNotchTarget(target);
}

QSize  PythonQtWrapper_QDial::sizeHint(QDial* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

bool  PythonQtWrapper_QDial::wrapping(QDial* theWrappedObject) const
{
return theWrappedObject->wrapping();
}

