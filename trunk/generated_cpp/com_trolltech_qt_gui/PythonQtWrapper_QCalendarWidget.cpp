#include "PythonQtWrapper_QCalendarWidget.h"

#include <QTextCharFormat>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
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
#include <qtextformat.h>
#include <qwidget.h>

QCalendarWidget* PythonQtWrapper_QCalendarWidget::new_QCalendarWidget(QWidget*  parent)
{ 
return new QCalendarWidget(parent); }

int  PythonQtWrapper_QCalendarWidget::dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->dateEditAcceptDelay();
}

QMap<QDate , QTextCharFormat >  PythonQtWrapper_QCalendarWidget::dateTextFormat(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->dateTextFormat();
}

QTextCharFormat  PythonQtWrapper_QCalendarWidget::dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const
{
return theWrappedObject->dateTextFormat(date);
}

Qt::DayOfWeek  PythonQtWrapper_QCalendarWidget::firstDayOfWeek(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->firstDayOfWeek();
}

QTextCharFormat  PythonQtWrapper_QCalendarWidget::headerTextFormat(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->headerTextFormat();
}

QCalendarWidget::HorizontalHeaderFormat  PythonQtWrapper_QCalendarWidget::horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->horizontalHeaderFormat();
}

bool  PythonQtWrapper_QCalendarWidget::isDateEditEnabled(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->isDateEditEnabled();
}

bool  PythonQtWrapper_QCalendarWidget::isGridVisible(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->isGridVisible();
}

bool  PythonQtWrapper_QCalendarWidget::isNavigationBarVisible(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->isNavigationBarVisible();
}

QDate  PythonQtWrapper_QCalendarWidget::maximumDate(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->maximumDate();
}

QDate  PythonQtWrapper_QCalendarWidget::minimumDate(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->minimumDate();
}

QSize  PythonQtWrapper_QCalendarWidget::minimumSizeHint(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->minimumSizeHint();
}

int  PythonQtWrapper_QCalendarWidget::monthShown(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->monthShown();
}

QDate  PythonQtWrapper_QCalendarWidget::selectedDate(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->selectedDate();
}

QCalendarWidget::SelectionMode  PythonQtWrapper_QCalendarWidget::selectionMode(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->selectionMode();
}

void PythonQtWrapper_QCalendarWidget::setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay)
{
theWrappedObject->setDateEditAcceptDelay(delay);
}

void PythonQtWrapper_QCalendarWidget::setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable)
{
theWrappedObject->setDateEditEnabled(enable);
}

void PythonQtWrapper_QCalendarWidget::setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format)
{
theWrappedObject->setDateTextFormat(date, format);
}

void PythonQtWrapper_QCalendarWidget::setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek)
{
theWrappedObject->setFirstDayOfWeek(dayOfWeek);
}

void PythonQtWrapper_QCalendarWidget::setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format)
{
theWrappedObject->setHeaderTextFormat(format);
}

void PythonQtWrapper_QCalendarWidget::setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format)
{
theWrappedObject->setHorizontalHeaderFormat(format);
}

void PythonQtWrapper_QCalendarWidget::setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date)
{
theWrappedObject->setMaximumDate(date);
}

void PythonQtWrapper_QCalendarWidget::setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date)
{
theWrappedObject->setMinimumDate(date);
}

void PythonQtWrapper_QCalendarWidget::setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode)
{
theWrappedObject->setSelectionMode(mode);
}

void PythonQtWrapper_QCalendarWidget::setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format)
{
theWrappedObject->setVerticalHeaderFormat(format);
}

void PythonQtWrapper_QCalendarWidget::setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format)
{
theWrappedObject->setWeekdayTextFormat(dayOfWeek, format);
}

QSize  PythonQtWrapper_QCalendarWidget::sizeHint(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QCalendarWidget::VerticalHeaderFormat  PythonQtWrapper_QCalendarWidget::verticalHeaderFormat(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->verticalHeaderFormat();
}

QTextCharFormat  PythonQtWrapper_QCalendarWidget::weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const
{
return theWrappedObject->weekdayTextFormat(dayOfWeek);
}

int  PythonQtWrapper_QCalendarWidget::yearShown(QCalendarWidget* theWrappedObject) const
{
return theWrappedObject->yearShown();
}

