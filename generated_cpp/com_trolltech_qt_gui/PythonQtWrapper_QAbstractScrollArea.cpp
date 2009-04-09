#include "PythonQtWrapper_QAbstractScrollArea.h"

#include <QVariant>
#include <qabstractscrollarea.h>
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
#include <qwidget.h>

QAbstractScrollArea* PythonQtWrapper_QAbstractScrollArea::new_QAbstractScrollArea(QWidget*  parent)
{ 
return new QAbstractScrollArea(parent); }

void PythonQtWrapper_QAbstractScrollArea::addScrollBarWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget, Qt::Alignment  alignment)
{
theWrappedObject->addScrollBarWidget(widget, alignment);
}

QWidget*  PythonQtWrapper_QAbstractScrollArea::cornerWidget(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->cornerWidget();
}

QScrollBar*  PythonQtWrapper_QAbstractScrollArea::horizontalScrollBar(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->horizontalScrollBar();
}

Qt::ScrollBarPolicy  PythonQtWrapper_QAbstractScrollArea::horizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->horizontalScrollBarPolicy();
}

QSize  PythonQtWrapper_QAbstractScrollArea::maximumViewportSize(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->maximumViewportSize();
}

QSize  PythonQtWrapper_QAbstractScrollArea::minimumSizeHint(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

QList<QWidget* >  PythonQtWrapper_QAbstractScrollArea::scrollBarWidgets(QAbstractScrollArea* theWrappedObject, Qt::Alignment  alignment)
{
return theWrappedObject->scrollBarWidgets(alignment);
}

void PythonQtWrapper_QAbstractScrollArea::setCornerWidget(QAbstractScrollArea* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setCornerWidget(widget);
}

void PythonQtWrapper_QAbstractScrollArea::setHorizontalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar)
{
theWrappedObject->setHorizontalScrollBar(scrollbar);
}

void PythonQtWrapper_QAbstractScrollArea::setHorizontalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1)
{
theWrappedObject->setHorizontalScrollBarPolicy(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setVerticalScrollBar(QAbstractScrollArea* theWrappedObject, QScrollBar*  scrollbar)
{
theWrappedObject->setVerticalScrollBar(scrollbar);
}

void PythonQtWrapper_QAbstractScrollArea::setVerticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject, Qt::ScrollBarPolicy  arg__1)
{
theWrappedObject->setVerticalScrollBarPolicy(arg__1);
}

void PythonQtWrapper_QAbstractScrollArea::setViewport(QAbstractScrollArea* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setViewport(widget);
}

QSize  PythonQtWrapper_QAbstractScrollArea::sizeHint(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QScrollBar*  PythonQtWrapper_QAbstractScrollArea::verticalScrollBar(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->verticalScrollBar();
}

Qt::ScrollBarPolicy  PythonQtWrapper_QAbstractScrollArea::verticalScrollBarPolicy(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->verticalScrollBarPolicy();
}

QWidget*  PythonQtWrapper_QAbstractScrollArea::viewport(QAbstractScrollArea* theWrappedObject) const
{
return theWrappedObject->viewport();
}

