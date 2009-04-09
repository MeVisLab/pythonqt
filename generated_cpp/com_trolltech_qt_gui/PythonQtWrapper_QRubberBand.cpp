#include "PythonQtWrapper_QRubberBand.h"

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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QRubberBand* PythonQtWrapper_QRubberBand::new_QRubberBand(QRubberBand::Shape  arg__1, QWidget*  arg__2)
{ 
return new QRubberBand(arg__1, arg__2); }

void PythonQtWrapper_QRubberBand::move(QRubberBand* theWrappedObject, const QPoint&  p)
{
theWrappedObject->move(p);
}

void PythonQtWrapper_QRubberBand::move(QRubberBand* theWrappedObject, int  x, int  y)
{
theWrappedObject->move(x, y);
}

void PythonQtWrapper_QRubberBand::resize(QRubberBand* theWrappedObject, const QSize&  s)
{
theWrappedObject->resize(s);
}

void PythonQtWrapper_QRubberBand::resize(QRubberBand* theWrappedObject, int  w, int  h)
{
theWrappedObject->resize(w, h);
}

void PythonQtWrapper_QRubberBand::setGeometry(QRubberBand* theWrappedObject, const QRect&  r)
{
theWrappedObject->setGeometry(r);
}

void PythonQtWrapper_QRubberBand::setGeometry(QRubberBand* theWrappedObject, int  x, int  y, int  w, int  h)
{
theWrappedObject->setGeometry(x, y, w, h);
}

QRubberBand::Shape  PythonQtWrapper_QRubberBand::shape(QRubberBand* theWrappedObject) const
{
return theWrappedObject->shape();
}

