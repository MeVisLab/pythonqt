#ifndef PYTHONQTWRAPPER_QDATE_H
#define PYTHONQTWRAPPER_QDATE_H

#include <qdatetime.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
public slots:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; } 
   QDate  static_QDate_currentDate();
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QString  static_QDate_shortDayName(int  weekday);
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   QString  static_QDate_longMonthName(int  month);
   QString  static_QDate_shortMonthName(int  month);
   int  day(QDate* theWrappedObject) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   int  dayOfWeek(QDate* theWrappedObject) const;
   QDate  static_QDate_fromJulianDay(int  jd);
   int  year(QDate* theWrappedObject) const;
   bool  operator_less(QDate* theWrappedObject, const QDate&  other) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  addDays(QDate* theWrappedObject, int  days) const;
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = 0) const;
   int  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   bool  operator_equal(QDate* theWrappedObject, const QDate&  other) const;
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   uint  static_QDate_gregorianToJulian(int  y, int  m, int  d);
   int  month(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   bool  static_QDate_isLeapYear(int  year);
   int  toJulianDay(QDate* theWrappedObject) const;
   int  daysInMonth(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject) const;
   QString  static_QDate_longDayName(int  weekday);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  date);
};

#endif // PYTHONQTWRAPPER_QDATE_H
