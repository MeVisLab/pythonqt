#ifndef PYTHONQTWRAPPER_QLOCALE_H
#define PYTHONQTWRAPPER_QLOCALE_H

#include <qlocale.h>
#include <QObject>

#include <QDate>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qlocale.h>

class PythonQtWrapper_QLocale : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MeasurementSystem NumberOption FormatType )
enum MeasurementSystem{
  MetricSystem = QLocale::MetricSystem,   ImperialSystem = QLocale::ImperialSystem};
enum NumberOption{
  OmitGroupSeparator = QLocale::OmitGroupSeparator,   RejectGroupSeparator = QLocale::RejectGroupSeparator};
enum FormatType{
  LongFormat = QLocale::LongFormat,   ShortFormat = QLocale::ShortFormat};
public slots:
QLocale* new_QLocale();
QLocale* new_QLocale(QLocale::Language  language, QLocale::Country  country = QLocale::AnyCountry);
QLocale* new_QLocale(const QLocale&  other);
QLocale* new_QLocale(const QString&  name);
void delete_QLocale(QLocale* obj) { delete obj; } 
   QLocale  static_QLocale_c();
   QList<QLocale::Country >  static_QLocale_countriesForLanguage(QLocale::Language  lang);
   QLocale::Country  country(QLocale* theWrappedObject) const;
   QString  static_QLocale_countryToString(QLocale::Country  country);
   QString  dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QChar  decimalPoint(QLocale* theWrappedObject) const;
   QChar  exponential(QLocale* theWrappedObject) const;
   QChar  groupSeparator(QLocale* theWrappedObject) const;
   QLocale::Language  language(QLocale* theWrappedObject) const;
   QString  static_QLocale_languageToString(QLocale::Language  language);
   QLocale::MeasurementSystem  measurementSystem(QLocale* theWrappedObject) const;
   QString  monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  name(QLocale* theWrappedObject) const;
   QChar  negativeSign(QLocale* theWrappedObject) const;
   QLocale::NumberOptions  numberOptions(QLocale* theWrappedObject) const;
   void writeTo(QLocale* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QLocale* theWrappedObject, const QLocale&  other) const;
   void readFrom(QLocale* theWrappedObject, QDataStream&  arg__1);
   QChar  percent(QLocale* theWrappedObject) const;
   void static_QLocale_setDefault(const QLocale&  locale);
   void setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options);
   QLocale  static_QLocale_system();
   QString  timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format = QLocale::LongFormat) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   double  toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   float  toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   int  toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   qlonglong  toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   short  toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const;
   QString  toString(QLocale* theWrappedObject, double  i, char  f = 'g', int  prec = 6) const;
   QString  toString(QLocale* theWrappedObject, float  i, char  f = 'g', int  prec = 6) const;
   QString  toString(QLocale* theWrappedObject, int  i) const;
   QString  toString(QLocale* theWrappedObject, qulonglong  i) const;
   QString  toString(QLocale* theWrappedObject, short  i) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   ushort  toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QChar  zeroDigit(QLocale* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLOCALE_H
