#ifndef PYTHONQTWRAPPER_QCALENDARWIDGET_H
#define PYTHONQTWRAPPER_QCALENDARWIDGET_H

#include <qcalendarwidget.h>
#include <QObject>

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

class PythonQtWrapper_QCalendarWidget : public QObject
{ Q_OBJECT
public:
public slots:
QCalendarWidget* new_QCalendarWidget(QWidget*  parent = 0);
void delete_QCalendarWidget(QCalendarWidget* obj) { delete obj; } 
   int  dateEditAcceptDelay(QCalendarWidget* theWrappedObject) const;
   QMap<QDate , QTextCharFormat >  dateTextFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  dateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date) const;
   Qt::DayOfWeek  firstDayOfWeek(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  headerTextFormat(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::HorizontalHeaderFormat  horizontalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   bool  isDateEditEnabled(QCalendarWidget* theWrappedObject) const;
   bool  isGridVisible(QCalendarWidget* theWrappedObject) const;
   bool  isNavigationBarVisible(QCalendarWidget* theWrappedObject) const;
   QDate  maximumDate(QCalendarWidget* theWrappedObject) const;
   QDate  minimumDate(QCalendarWidget* theWrappedObject) const;
   QSize  minimumSizeHint(QCalendarWidget* theWrappedObject) const;
   int  monthShown(QCalendarWidget* theWrappedObject) const;
   QDate  selectedDate(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::SelectionMode  selectionMode(QCalendarWidget* theWrappedObject) const;
   void setDateEditAcceptDelay(QCalendarWidget* theWrappedObject, int  delay);
   void setDateEditEnabled(QCalendarWidget* theWrappedObject, bool  enable);
   void setDateTextFormat(QCalendarWidget* theWrappedObject, const QDate&  date, const QTextCharFormat&  format);
   void setFirstDayOfWeek(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek);
   void setHeaderTextFormat(QCalendarWidget* theWrappedObject, const QTextCharFormat&  format);
   void setHorizontalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::HorizontalHeaderFormat  format);
   void setMaximumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setMinimumDate(QCalendarWidget* theWrappedObject, const QDate&  date);
   void setSelectionMode(QCalendarWidget* theWrappedObject, QCalendarWidget::SelectionMode  mode);
   void setVerticalHeaderFormat(QCalendarWidget* theWrappedObject, QCalendarWidget::VerticalHeaderFormat  format);
   void setWeekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek, const QTextCharFormat&  format);
   QSize  sizeHint(QCalendarWidget* theWrappedObject) const;
   QCalendarWidget::VerticalHeaderFormat  verticalHeaderFormat(QCalendarWidget* theWrappedObject) const;
   QTextCharFormat  weekdayTextFormat(QCalendarWidget* theWrappedObject, Qt::DayOfWeek  dayOfWeek) const;
   int  yearShown(QCalendarWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCALENDARWIDGET_H
