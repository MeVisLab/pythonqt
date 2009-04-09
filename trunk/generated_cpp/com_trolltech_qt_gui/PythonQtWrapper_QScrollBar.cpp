#include "PythonQtWrapper_QScrollBar.h"

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
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

QScrollBar* PythonQtWrapper_QScrollBar::new_QScrollBar(QWidget*  parent)
{ 
return new QScrollBar(parent); }

QScrollBar* PythonQtWrapper_QScrollBar::new_QScrollBar(Qt::Orientation  arg__1, QWidget*  parent)
{ 
return new QScrollBar(arg__1, parent); }

bool  PythonQtWrapper_QScrollBar::event(QScrollBar* theWrappedObject, QEvent*  event)
{
return theWrappedObject->event(event);
}

QSize  PythonQtWrapper_QScrollBar::sizeHint(QScrollBar* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

