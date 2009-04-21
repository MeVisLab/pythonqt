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
   uint  static_QDate_gregorianToJulian(int  y, int  m, int  d);
   QString  static_QDate_longMonthName(int  month);
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   int  month(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  static_QDate_shortDayName(int  weekday);
   QString  static_QDate_shortMonthName(int  month);
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   bool  static_QDate_isLeapYear(int  year);
   int  toJulianDay(QDate* theWrappedObject) const;
   QString  static_QDate_longDayName(int  weekday);
   QDate  static_QDate_currentDate();
   int  day(QDate* theWrappedObject) const;
   int  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   QDate  static_QDate_fromJulianDay(int  jd);
   int  year(QDate* theWrappedObject) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = 0) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   bool  operator_less(QDate* theWrappedObject, const QDate&  other) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  addDays(QDate* theWrappedObject, int  days) const;
   int  dayOfWeek(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   int  daysInMonth(QDate* theWrappedObject) const;
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  date);
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   bool  isNull(QDate* theWrappedObject) const;
   bool  operator_equal(QDate* theWrappedObject, const QDate&  other) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDATE_H
