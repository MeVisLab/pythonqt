#include "PythonQtWrapper_QLocale.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QDate>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qlocale.h>

QLocale* PythonQtWrapper_QLocale::new_QLocale()
{ 
return new QLocale(); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(QLocale::Language  language, QLocale::Country  country)
{ 
return new QLocale(language, country); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QLocale&  other)
{ 
return new QLocale(other); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QString&  name)
{ 
return new QLocale(name); }

QChar  PythonQtWrapper_QLocale::groupSeparator(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->groupSeparator());
}

float  PythonQtWrapper_QLocale::toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toFloat(s, ok));
}

ushort  PythonQtWrapper_QLocale::toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toUShort(s, ok, base));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, float  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

void PythonQtWrapper_QLocale::writeTo(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toTime(string, format));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

bool  PythonQtWrapper_QLocale::operator_equal(QLocale* theWrappedObject, const QLocale&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, short  i) const
{
  return ( theWrappedObject->toString(i));
}

QLocale::NumberOptions  PythonQtWrapper_QLocale::numberOptions(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->numberOptions());
}

short  PythonQtWrapper_QLocale::toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toShort(s, ok, base));
}

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toTime(string, arg__2));
}

QString  PythonQtWrapper_QLocale::static_QLocale_countryToString(QLocale::Country  country)
{
  return (QLocale::countryToString(country));
}

QChar  PythonQtWrapper_QLocale::zeroDigit(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->zeroDigit());
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toDate(string, arg__2));
}

QString  PythonQtWrapper_QLocale::dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dayName(arg__1, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, double  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

QString  PythonQtWrapper_QLocale::dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateFormat(format));
}

QLocale::Language  PythonQtWrapper_QLocale::language(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(time, formatStr));
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_c()
{
  return (QLocale::c());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QChar  PythonQtWrapper_QLocale::negativeSign(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->negativeSign());
}

double  PythonQtWrapper_QLocale::toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toDouble(s, ok));
}

void PythonQtWrapper_QLocale::readFrom(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString  PythonQtWrapper_QLocale::dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateTimeFormat(format));
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_system()
{
  return (QLocale::system());
}

QString  PythonQtWrapper_QLocale::monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->monthName(arg__1, format));
}

QString  PythonQtWrapper_QLocale::name(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QLocale::setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options)
{
  ( theWrappedObject->setNumberOptions(options));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, qulonglong  i) const
{
  return ( theWrappedObject->toString(i));
}

QChar  PythonQtWrapper_QLocale::decimalPoint(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->decimalPoint());
}

void PythonQtWrapper_QLocale::static_QLocale_setDefault(const QLocale&  locale)
{
  (QLocale::setDefault(locale));
}

int  PythonQtWrapper_QLocale::toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toInt(s, ok, base));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(date, formatStr));
}

QList<QLocale::Country >  PythonQtWrapper_QLocale::static_QLocale_countriesForLanguage(QLocale::Language  lang)
{
  return (QLocale::countriesForLanguage(lang));
}

QLocale::Country  PythonQtWrapper_QLocale::country(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->country());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(date, format));
}

QChar  PythonQtWrapper_QLocale::exponential(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->exponential());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(time, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDate(string, format));
}

QString  PythonQtWrapper_QLocale::static_QLocale_languageToString(QLocale::Language  language)
{
  return (QLocale::languageToString(language));
}

QLocale::MeasurementSystem  PythonQtWrapper_QLocale::measurementSystem(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->measurementSystem());
}

QChar  PythonQtWrapper_QLocale::percent(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->percent());
}

QString  PythonQtWrapper_QLocale::timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->timeFormat(format));
}

qlonglong  PythonQtWrapper_QLocale::toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toLongLong(s, ok, base));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, int  i) const
{
  return ( theWrappedObject->toString(i));
}

