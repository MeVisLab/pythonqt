#include "PythonQtWrapper_QSlider.h"

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
#include <qslider.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QSlider* PythonQtWrapper_QSlider::new_QSlider(QWidget*  parent)
{ 
return new QSlider(parent); }

QSlider* PythonQtWrapper_QSlider::new_QSlider(Qt::Orientation  orientation, QWidget*  parent)
{ 
return new QSlider(orientation, parent); }

bool  PythonQtWrapper_QSlider::event(QSlider* theWrappedObject, QEvent*  event)
{
return theWrappedObject->event(event);
}

QSize  PythonQtWrapper_QSlider::minimumSizeHint(QSlider* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

void PythonQtWrapper_QSlider::setTickInterval(QSlider* theWrappedObject, int  ti)
{
theWrappedObject->setTickInterval(ti);
}

void PythonQtWrapper_QSlider::setTickPosition(QSlider* theWrappedObject, QSlider::TickPosition  position)
{
theWrappedObject->setTickPosition(position);
}

QSize  PythonQtWrapper_QSlider::sizeHint(QSlider* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QSlider::tickInterval(QSlider* theWrappedObject) const
{
return theWrappedObject->tickInterval();
}

QSlider::TickPosition  PythonQtWrapper_QSlider::tickPosition(QSlider* theWrappedObject) const
{
return theWrappedObject->tickPosition();
}

