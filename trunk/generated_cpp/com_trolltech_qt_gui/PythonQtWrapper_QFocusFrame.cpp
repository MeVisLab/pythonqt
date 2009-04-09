#include "PythonQtWrapper_QFocusFrame.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfocusframe.h>
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

QFocusFrame* PythonQtWrapper_QFocusFrame::new_QFocusFrame(QWidget*  parent)
{ 
return new QFocusFrame(parent); }

void PythonQtWrapper_QFocusFrame::setWidget(QFocusFrame* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

QWidget*  PythonQtWrapper_QFocusFrame::widget(QFocusFrame* theWrappedObject) const
{
return theWrappedObject->widget();
}

