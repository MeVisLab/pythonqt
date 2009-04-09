#ifndef PYTHONQTWRAPPER_QDATETIMEEDIT_H
#define PYTHONQTWRAPPER_QDATETIMEEDIT_H

#include <qdatetimeedit.h>
#include <QObject>

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

class PythonQtWrapper_QDateTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateTimeEdit* new_QDateTimeEdit(QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDate&  d, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QTime&  t, QWidget*  parent = 0);
void delete_QDateTimeEdit(QDateTimeEdit* obj) { delete obj; } 
   bool  calendarPopup(QDateTimeEdit* theWrappedObject) const;
   QCalendarWidget*  calendarWidget(QDateTimeEdit* theWrappedObject) const;
   void clear(QDateTimeEdit* theWrappedObject);
   void clearMaximumDate(QDateTimeEdit* theWrappedObject);
   void clearMaximumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMaximumTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumDate(QDateTimeEdit* theWrappedObject);
   void clearMinimumDateTime(QDateTimeEdit* theWrappedObject);
   void clearMinimumTime(QDateTimeEdit* theWrappedObject);
   QDateTimeEdit::Section  currentSection(QDateTimeEdit* theWrappedObject) const;
   int  currentSectionIndex(QDateTimeEdit* theWrappedObject) const;
   QDate  date(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTime(QDateTimeEdit* theWrappedObject) const;
   QString  displayFormat(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Sections  displayedSections(QDateTimeEdit* theWrappedObject) const;
   bool  event(QDateTimeEdit* theWrappedObject, QEvent*  event);
   QDate  maximumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  maximumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  maximumTime(QDateTimeEdit* theWrappedObject) const;
   QDate  minimumDate(QDateTimeEdit* theWrappedObject) const;
   QDateTime  minimumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  minimumTime(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Section  sectionAt(QDateTimeEdit* theWrappedObject, int  index) const;
   int  sectionCount(QDateTimeEdit* theWrappedObject) const;
   QString  sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const;
   void setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable);
   void setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget);
   void setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index);
   void setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max);
   void setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max);
   void setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format);
   void setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max);
   void setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max);
   void setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min);
   void setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min);
   void setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max);
   void setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec);
   QSize  sizeHint(QDateTimeEdit* theWrappedObject) const;
   void stepBy(QDateTimeEdit* theWrappedObject, int  steps);
   QTime  time(QDateTimeEdit* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTimeEdit* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDATETIMEEDIT_H
