#include "PythonQtWrapper_QScrollArea.h"

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
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qwidget.h>

QScrollArea* PythonQtWrapper_QScrollArea::new_QScrollArea(QWidget*  parent)
{ 
return new QScrollArea(parent); }

Qt::Alignment  PythonQtWrapper_QScrollArea::alignment(QScrollArea* theWrappedObject) const
{
return theWrappedObject->alignment();
}

void PythonQtWrapper_QScrollArea::ensureVisible(QScrollArea* theWrappedObject, int  x, int  y, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, xmargin, ymargin);
}

void PythonQtWrapper_QScrollArea::ensureWidgetVisible(QScrollArea* theWrappedObject, QWidget*  childWidget, int  xmargin, int  ymargin)
{
theWrappedObject->ensureWidgetVisible(childWidget, xmargin, ymargin);
}

bool  PythonQtWrapper_QScrollArea::focusNextPrevChild(QScrollArea* theWrappedObject, bool  next)
{
return theWrappedObject->focusNextPrevChild(next);
}

void PythonQtWrapper_QScrollArea::setAlignment(QScrollArea* theWrappedObject, Qt::Alignment  arg__1)
{
theWrappedObject->setAlignment(arg__1);
}

void PythonQtWrapper_QScrollArea::setWidget(QScrollArea* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setWidget(widget);
}

void PythonQtWrapper_QScrollArea::setWidgetResizable(QScrollArea* theWrappedObject, bool  resizable)
{
theWrappedObject->setWidgetResizable(resizable);
}

QSize  PythonQtWrapper_QScrollArea::sizeHint(QScrollArea* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QWidget*  PythonQtWrapper_QScrollArea::takeWidget(QScrollArea* theWrappedObject)
{
return theWrappedObject->takeWidget();
}

QWidget*  PythonQtWrapper_QScrollArea::widget(QScrollArea* theWrappedObject) const
{
return theWrappedObject->widget();
}

bool  PythonQtWrapper_QScrollArea::widgetResizable(QScrollArea* theWrappedObject) const
{
return theWrappedObject->widgetResizable();
}

