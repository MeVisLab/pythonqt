#ifndef PYTHONQTWRAPPER_QTIME_H
#define PYTHONQTWRAPPER_QTIME_H

#include <qdatetime.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public slots:
QTime* new_QTime();
QTime* new_QTime(int  h, int  m, int  s = 0, int  ms = 0);
void delete_QTime(QTime* obj) { delete obj; } 
   QTime  addMSecs(QTime* theWrappedObject, int  ms) const;
   QTime  addSecs(QTime* theWrappedObject, int  secs) const;
   QTime  static_QTime_currentTime();
   int  elapsed(QTime* theWrappedObject) const;
   QTime  static_QTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QTime  static_QTime_fromString(const QString&  s, const QString&  format);
   int  hour(QTime* theWrappedObject) const;
   bool  isNull(QTime* theWrappedObject) const;
   bool  isValid(QTime* theWrappedObject) const;
   bool  static_QTime_isValid(int  h, int  m, int  s, int  ms = 0);
   int  minute(QTime* theWrappedObject) const;
   int  msec(QTime* theWrappedObject) const;
   int  msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  operator_less(QTime* theWrappedObject, const QTime&  other) const;
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QTime* theWrappedObject, const QTime&  other) const;
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   int  restart(QTime* theWrappedObject);
   int  second(QTime* theWrappedObject) const;
   int  secsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms = 0);
   void start(QTime* theWrappedObject);
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
};

#endif // PYTHONQTWRAPPER_QTIME_H
