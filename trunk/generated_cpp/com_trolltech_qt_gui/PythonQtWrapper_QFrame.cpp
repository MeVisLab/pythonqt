#include "PythonQtWrapper_QFrame.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qframe.h>
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
#include <qwidget.h>

QFrame* PythonQtWrapper_QFrame::new_QFrame(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new QFrame(parent, f); }

QRect  PythonQtWrapper_QFrame::frameRect(QFrame* theWrappedObject) const
{
return theWrappedObject->frameRect();
}

QFrame::Shadow  PythonQtWrapper_QFrame::frameShadow(QFrame* theWrappedObject) const
{
return theWrappedObject->frameShadow();
}

QFrame::Shape  PythonQtWrapper_QFrame::frameShape(QFrame* theWrappedObject) const
{
return theWrappedObject->frameShape();
}

int  PythonQtWrapper_QFrame::frameStyle(QFrame* theWrappedObject) const
{
return theWrappedObject->frameStyle();
}

int  PythonQtWrapper_QFrame::frameWidth(QFrame* theWrappedObject) const
{
return theWrappedObject->frameWidth();
}

int  PythonQtWrapper_QFrame::lineWidth(QFrame* theWrappedObject) const
{
return theWrappedObject->lineWidth();
}

int  PythonQtWrapper_QFrame::midLineWidth(QFrame* theWrappedObject) const
{
return theWrappedObject->midLineWidth();
}

void PythonQtWrapper_QFrame::setFrameRect(QFrame* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setFrameRect(arg__1);
}

void PythonQtWrapper_QFrame::setFrameShadow(QFrame* theWrappedObject, QFrame::Shadow  arg__1)
{
theWrappedObject->setFrameShadow(arg__1);
}

void PythonQtWrapper_QFrame::setFrameShape(QFrame* theWrappedObject, QFrame::Shape  arg__1)
{
theWrappedObject->setFrameShape(arg__1);
}

void PythonQtWrapper_QFrame::setFrameStyle(QFrame* theWrappedObject, int  arg__1)
{
theWrappedObject->setFrameStyle(arg__1);
}

void PythonQtWrapper_QFrame::setLineWidth(QFrame* theWrappedObject, int  arg__1)
{
theWrappedObject->setLineWidth(arg__1);
}

void PythonQtWrapper_QFrame::setMidLineWidth(QFrame* theWrappedObject, int  arg__1)
{
theWrappedObject->setMidLineWidth(arg__1);
}

QSize  PythonQtWrapper_QFrame::sizeHint(QFrame* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

