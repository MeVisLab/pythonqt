#ifndef PYTHONQTWRAPPER_QDATETIME_H
#define PYTHONQTWRAPPER_QDATETIME_H

#include <qdatetime.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QDateTime : public QObject
{ Q_OBJECT
public:
public slots:
QDateTime* new_QDateTime();
QDateTime* new_QDateTime(const QDate&  arg__1);
QDateTime* new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec = Qt::LocalTime);
QDateTime* new_QDateTime(const QDateTime&  other);
void delete_QDateTime(QDateTime* obj) { delete obj; } 
   QDateTime  addDays(QDateTime* theWrappedObject, int  days) const;
   QDateTime  addMSecs(QDateTime* theWrappedObject, qint64  msecs) const;
   QDateTime  addMonths(QDateTime* theWrappedObject, int  months) const;
   QDateTime  addSecs(QDateTime* theWrappedObject, int  secs) const;
   QDateTime  addYears(QDateTime* theWrappedObject, int  years) const;
   QDateTime  static_QDateTime_currentDateTime();
   QDate  date(QDateTime* theWrappedObject) const;
   int  daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   QDateTime  static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QDateTime  static_QDateTime_fromString(const QString&  s, const QString&  format);
   QDateTime  static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC);
   bool  isNull(QDateTime* theWrappedObject) const;
   bool  isValid(QDateTime* theWrappedObject) const;
   bool  operator_less(QDateTime* theWrappedObject, const QDateTime&  other) const;
   void writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QDateTime* theWrappedObject, const QDateTime&  other) const;
   void readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1);
   int  secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   void setDate(QDateTime* theWrappedObject, const QDate&  date);
   void setTime(QDateTime* theWrappedObject, const QTime&  time);
   void setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec);
   void setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC);
   void setUtcOffset(QDateTime* theWrappedObject, int  seconds);
   QTime  time(QDateTime* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTime* theWrappedObject) const;
   QDateTime  toLocalTime(QDateTime* theWrappedObject) const;
   QString  toString(QDateTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QDateTime* theWrappedObject, const QString&  format) const;
   QDateTime  toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const;
   uint  toTime_t(QDateTime* theWrappedObject) const;
   QDateTime  toUTC(QDateTime* theWrappedObject) const;
   int  utcOffset(QDateTime* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QDATETIME_H
