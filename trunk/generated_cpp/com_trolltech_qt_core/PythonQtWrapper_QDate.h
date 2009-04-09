#ifndef PYTHONQTWRAPPER_QDATE_H
#define PYTHONQTWRAPPER_QDATE_H

#include <qdatetime.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
public slots:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
void delete_QDate(QDate* obj) { delete obj; } 
   QDate  addDays(QDate* theWrappedObject, int  days) const;
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  static_QDate_currentDate();
   int  day(QDate* theWrappedObject) const;
   int  dayOfWeek(QDate* theWrappedObject) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   int  daysInMonth(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject) const;
   int  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   QDate  static_QDate_fromJulianDay(int  jd);
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   uint  static_QDate_gregorianToJulian(int  y, int  m, int  d);
   bool  static_QDate_isLeapYear(int  year);
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   QString  static_QDate_longDayName(int  weekday);
   QString  static_QDate_longMonthName(int  month);
   int  month(QDate* theWrappedObject) const;
   bool  operator_less(QDate* theWrappedObject, const QDate&  other) const;
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QDate* theWrappedObject, const QDate&  other) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  date);
   QString  static_QDate_shortDayName(int  weekday);
   QString  static_QDate_shortMonthName(int  month);
   int  toJulianDay(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = 0) const;
   int  year(QDate* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDATE_H
