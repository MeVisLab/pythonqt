#include "PythonQtWrapper_QDateTimeEdit.h"

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
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

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(QWidget*  parent)
{ 
return new QDateTimeEdit(parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QDate&  d, QWidget*  parent)
{ 
return new QDateTimeEdit(d, parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent)
{ 
return new QDateTimeEdit(dt, parent); }

QDateTimeEdit* PythonQtWrapper_QDateTimeEdit::new_QDateTimeEdit(const QTime&  t, QWidget*  parent)
{ 
return new QDateTimeEdit(t, parent); }

bool  PythonQtWrapper_QDateTimeEdit::calendarPopup(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->calendarPopup();
}

QCalendarWidget*  PythonQtWrapper_QDateTimeEdit::calendarWidget(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->calendarWidget();
}

void PythonQtWrapper_QDateTimeEdit::clear(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clear();
}

void PythonQtWrapper_QDateTimeEdit::clearMaximumDate(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMaximumDate();
}

void PythonQtWrapper_QDateTimeEdit::clearMaximumDateTime(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMaximumDateTime();
}

void PythonQtWrapper_QDateTimeEdit::clearMaximumTime(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMaximumTime();
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumDate(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMinimumDate();
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumDateTime(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMinimumDateTime();
}

void PythonQtWrapper_QDateTimeEdit::clearMinimumTime(QDateTimeEdit* theWrappedObject)
{
theWrappedObject->clearMinimumTime();
}

QDateTimeEdit::Section  PythonQtWrapper_QDateTimeEdit::currentSection(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->currentSection();
}

int  PythonQtWrapper_QDateTimeEdit::currentSectionIndex(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->currentSectionIndex();
}

QDate  PythonQtWrapper_QDateTimeEdit::date(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->date();
}

QDateTime  PythonQtWrapper_QDateTimeEdit::dateTime(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->dateTime();
}

QString  PythonQtWrapper_QDateTimeEdit::displayFormat(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->displayFormat();
}

QDateTimeEdit::Sections  PythonQtWrapper_QDateTimeEdit::displayedSections(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->displayedSections();
}

bool  PythonQtWrapper_QDateTimeEdit::event(QDateTimeEdit* theWrappedObject, QEvent*  event)
{
return theWrappedObject->event(event);
}

QDate  PythonQtWrapper_QDateTimeEdit::maximumDate(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->maximumDate();
}

QDateTime  PythonQtWrapper_QDateTimeEdit::maximumDateTime(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->maximumDateTime();
}

QTime  PythonQtWrapper_QDateTimeEdit::maximumTime(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->maximumTime();
}

QDate  PythonQtWrapper_QDateTimeEdit::minimumDate(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->minimumDate();
}

QDateTime  PythonQtWrapper_QDateTimeEdit::minimumDateTime(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->minimumDateTime();
}

QTime  PythonQtWrapper_QDateTimeEdit::minimumTime(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->minimumTime();
}

QDateTimeEdit::Section  PythonQtWrapper_QDateTimeEdit::sectionAt(QDateTimeEdit* theWrappedObject, int  index) const
{
return theWrappedObject->sectionAt(index);
}

int  PythonQtWrapper_QDateTimeEdit::sectionCount(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->sectionCount();
}

QString  PythonQtWrapper_QDateTimeEdit::sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const
{
return theWrappedObject->sectionText(section);
}

void PythonQtWrapper_QDateTimeEdit::setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable)
{
theWrappedObject->setCalendarPopup(enable);
}

void PythonQtWrapper_QDateTimeEdit::setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget)
{
theWrappedObject->setCalendarWidget(calendarWidget);
}

void PythonQtWrapper_QDateTimeEdit::setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section)
{
theWrappedObject->setCurrentSection(section);
}

void PythonQtWrapper_QDateTimeEdit::setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index)
{
theWrappedObject->setCurrentSectionIndex(index);
}

void PythonQtWrapper_QDateTimeEdit::setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max)
{
theWrappedObject->setDateRange(min, max);
}

void PythonQtWrapper_QDateTimeEdit::setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max)
{
theWrappedObject->setDateTimeRange(min, max);
}

void PythonQtWrapper_QDateTimeEdit::setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format)
{
theWrappedObject->setDisplayFormat(format);
}

void PythonQtWrapper_QDateTimeEdit::setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max)
{
theWrappedObject->setMaximumDate(max);
}

void PythonQtWrapper_QDateTimeEdit::setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt)
{
theWrappedObject->setMaximumDateTime(dt);
}

void PythonQtWrapper_QDateTimeEdit::setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max)
{
theWrappedObject->setMaximumTime(max);
}

void PythonQtWrapper_QDateTimeEdit::setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min)
{
theWrappedObject->setMinimumDate(min);
}

void PythonQtWrapper_QDateTimeEdit::setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt)
{
theWrappedObject->setMinimumDateTime(dt);
}

void PythonQtWrapper_QDateTimeEdit::setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min)
{
theWrappedObject->setMinimumTime(min);
}

void PythonQtWrapper_QDateTimeEdit::setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section)
{
theWrappedObject->setSelectedSection(section);
}

void PythonQtWrapper_QDateTimeEdit::setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max)
{
theWrappedObject->setTimeRange(min, max);
}

void PythonQtWrapper_QDateTimeEdit::setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec)
{
theWrappedObject->setTimeSpec(spec);
}

QSize  PythonQtWrapper_QDateTimeEdit::sizeHint(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

void PythonQtWrapper_QDateTimeEdit::stepBy(QDateTimeEdit* theWrappedObject, int  steps)
{
theWrappedObject->stepBy(steps);
}

QTime  PythonQtWrapper_QDateTimeEdit::time(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->time();
}

Qt::TimeSpec  PythonQtWrapper_QDateTimeEdit::timeSpec(QDateTimeEdit* theWrappedObject) const
{
return theWrappedObject->timeSpec();
}

