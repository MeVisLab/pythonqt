#include <PythonQt.h>
#include <QDate>
#include <QObject>
#include <QStringList>
#include <QTextDocument>
#include <QVariant>
#include <qbitarray.h>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmatrix4x4.h>
#include <qnamespace.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregexp.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qtimezone.h>
#include <qtransform.h>
#include <qurl.h>
#include <qurlquery.h>



class PythonQtWrapper_QBitArray : public QObject
{ Q_OBJECT
public:
public slots:
QBitArray* new_QBitArray();
QBitArray* new_QBitArray(const QBitArray&  other);
QBitArray* new_QBitArray(int  size, bool  val = false);
void delete_QBitArray(QBitArray* obj) { delete obj; } 
   bool  at(QBitArray* theWrappedObject, int  i) const;
   void clear(QBitArray* theWrappedObject);
   void clearBit(QBitArray* theWrappedObject, int  i);
   int  count(QBitArray* theWrappedObject) const;
   int  count(QBitArray* theWrappedObject, bool  on) const;
   void fill(QBitArray* theWrappedObject, bool  val, int  first, int  last);
   bool  fill(QBitArray* theWrappedObject, bool  val, int  size = -1);
   bool  isEmpty(QBitArray* theWrappedObject) const;
   bool  isNull(QBitArray* theWrappedObject) const;
   bool  __ne__(QBitArray* theWrappedObject, const QBitArray&  other) const;
   QBitArray  __and__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   QBitArray*  __iand__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray*  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
   bool  __eq__(QBitArray* theWrappedObject, const QBitArray&  other) const;
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray  __xor__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   QBitArray*  __ixor__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray  __or__(QBitArray* theWrappedObject, const QBitArray&  arg__2);
   QBitArray*  __ior__(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray  __invert__(QBitArray* theWrappedObject) const;
   void resize(QBitArray* theWrappedObject, int  size);
   void setBit(QBitArray* theWrappedObject, int  i);
   void setBit(QBitArray* theWrappedObject, int  i, bool  val);
   int  size(QBitArray* theWrappedObject) const;
   void swap(QBitArray* theWrappedObject, QBitArray&  other);
   bool  testBit(QBitArray* theWrappedObject, int  i) const;
   bool  toggleBit(QBitArray* theWrappedObject, int  i);
   void truncate(QBitArray* theWrappedObject, int  pos);
    QString py_toString(QBitArray*);
    bool __nonzero__(QBitArray* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QByteArray : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Base64Option )
Q_FLAGS(Base64Options )
enum Base64Option{
  Base64Encoding = QByteArray::Base64Encoding,   Base64UrlEncoding = QByteArray::Base64UrlEncoding,   KeepTrailingEquals = QByteArray::KeepTrailingEquals,   OmitTrailingEquals = QByteArray::OmitTrailingEquals};
Q_DECLARE_FLAGS(Base64Options, Base64Option)
public slots:
QByteArray* new_QByteArray();
QByteArray* new_QByteArray(const QByteArray&  arg__1);
QByteArray* new_QByteArray(int  size, char  c);
void delete_QByteArray(QByteArray* obj) { delete obj; } 
   QByteArray*  append(QByteArray* theWrappedObject, char  c);
   QByteArray*  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  append(QByteArray* theWrappedObject, const QString&  s);
   QByteArray*  append(QByteArray* theWrappedObject, const char*  s, int  len);
   char  at(QByteArray* theWrappedObject, int  i) const;
   int  capacity(QByteArray* theWrappedObject) const;
   const char*  cbegin(QByteArray* theWrappedObject) const;
   const char*  cend(QByteArray* theWrappedObject) const;
   void chop(QByteArray* theWrappedObject, int  n);
   void clear(QByteArray* theWrappedObject);
   bool  contains(QByteArray* theWrappedObject, char  c) const;
   bool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  contains(QByteArray* theWrappedObject, const char*  a) const;
   int  count(QByteArray* theWrappedObject, char  c) const;
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray*  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64, QByteArray::Base64Options  options);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, char  c);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const char*  s, int  len);
   bool  isEmpty(QByteArray* theWrappedObject) const;
   bool  isNull(QByteArray* theWrappedObject) const;
   bool  isSharedWith(QByteArray* theWrappedObject, const QByteArray&  other) const;
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   int  length(QByteArray* theWrappedObject) const;
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   const QByteArray  __add__(QByteArray* theWrappedObject, char  a2);
   const QByteArray  __add__(QByteArray* theWrappedObject, const QByteArray&  a2);
   const QString  __add__(QByteArray* theWrappedObject, const QString&  s);
   const QByteArray  __add__(QByteArray* theWrappedObject, const char*  a2);
   QByteArray*  __iadd__(QByteArray* theWrappedObject, const QByteArray&  a);
   bool  __lt__(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  __lt__(QByteArray* theWrappedObject, const QString&  s2) const;
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  __le__(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray*  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   bool  __eq__(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  __eq__(QByteArray* theWrappedObject, const QString&  s2) const;
   bool  __gt__(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  __gt__(QByteArray* theWrappedObject, const QString&  s2) const;
   bool  __ge__(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  __ge__(QByteArray* theWrappedObject, const QString&  s2) const;
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray*  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray*  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  prepend(QByteArray* theWrappedObject, const char*  s, int  len);
   void push_back(QByteArray* theWrappedObject, const QByteArray&  a);
   void push_front(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  remove(QByteArray* theWrappedObject, int  index, int  len);
   QByteArray  repeated(QByteArray* theWrappedObject, int  times) const;
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, const char*  before, int  bsize, const char*  after, int  asize);
   QByteArray*  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   QByteArray*  replace(QByteArray* theWrappedObject, int  index, int  len, const char*  s, int  alen);
   void reserve(QByteArray* theWrappedObject, int  size);
   void resize(QByteArray* theWrappedObject, int  size);
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray*  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray*  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray*  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   QByteArray*  setRawData(QByteArray* theWrappedObject, const char*  a, uint  n);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   int  size(QByteArray* theWrappedObject) const;
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   void squeeze(QByteArray* theWrappedObject);
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   void swap(QByteArray* theWrappedObject, QByteArray&  other);
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   QByteArray  toBase64(QByteArray* theWrappedObject, QByteArray::Base64Options  options) const;
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   void truncate(QByteArray* theWrappedObject, int  pos);
    bool __nonzero__(QByteArray* obj) { return !obj->isNull(); }

  PyObject* data(QByteArray* b) {
    return PyBytes_FromStringAndSize(b->data(), b->size());
  }
    
};





class PythonQtWrapper_QDate : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MonthNameType )
enum MonthNameType{
  DateFormat = QDate::DateFormat,   StandaloneFormat = QDate::StandaloneFormat};
public slots:
QDate* new_QDate();
QDate* new_QDate(int  y, int  m, int  d);
QDate* new_QDate(const QDate& other) {
QDate* a = new QDate();
*((QDate*)a) = other;
return a; }
void delete_QDate(QDate* obj) { delete obj; } 
   QDate  addDays(QDate* theWrappedObject, qint64  days) const;
   QDate  addMonths(QDate* theWrappedObject, int  months) const;
   QDate  addYears(QDate* theWrappedObject, int  years) const;
   QDate  static_QDate_currentDate();
   int  day(QDate* theWrappedObject) const;
   int  dayOfWeek(QDate* theWrappedObject) const;
   int  dayOfYear(QDate* theWrappedObject) const;
   int  daysInMonth(QDate* theWrappedObject) const;
   int  daysInYear(QDate* theWrappedObject) const;
   qint64  daysTo(QDate* theWrappedObject, const QDate&  arg__1) const;
   QDate  static_QDate_fromJulianDay(qint64  jd);
   QDate  static_QDate_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QDate  static_QDate_fromString(const QString&  s, const QString&  format);
   void getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day);
   bool  static_QDate_isLeapYear(int  year);
   bool  isNull(QDate* theWrappedObject) const;
   bool  isValid(QDate* theWrappedObject) const;
   bool  static_QDate_isValid(int  y, int  m, int  d);
   QString  static_QDate_longDayName(int  weekday, QDate::MonthNameType  type = QDate::DateFormat);
   QString  static_QDate_longMonthName(int  month, QDate::MonthNameType  type = QDate::DateFormat);
   int  month(QDate* theWrappedObject) const;
   bool  __ne__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __lt__(QDate* theWrappedObject, const QDate&  other) const;
   void writeTo(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __eq__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __gt__(QDate* theWrappedObject, const QDate&  other) const;
   bool  __ge__(QDate* theWrappedObject, const QDate&  other) const;
   void readFrom(QDate* theWrappedObject, QDataStream&  arg__1);
   bool  setDate(QDate* theWrappedObject, int  year, int  month, int  day);
   QString  static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type = QDate::DateFormat);
   QString  static_QDate_shortMonthName(int  month, QDate::MonthNameType  type = QDate::DateFormat);
   qint64  toJulianDay(QDate* theWrappedObject) const;
   QString  toString(QDate* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QDate* theWrappedObject, const QString&  format) const;
   int  weekNumber(QDate* theWrappedObject, int*  yearNum = 0) const;
   int  year(QDate* theWrappedObject) const;
    QString py_toString(QDate*);
    bool __nonzero__(QDate* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDateTime : public QObject
{ Q_OBJECT
public:
public slots:
QDateTime* new_QDateTime();
QDateTime* new_QDateTime(const QDate&  arg__1);
QDateTime* new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec = Qt::LocalTime);
QDateTime* new_QDateTime(const QDate&  date, const QTime&  time, Qt::TimeSpec  spec, int  offsetSeconds);
QDateTime* new_QDateTime(const QDate&  date, const QTime&  time, const QTimeZone&  timeZone);
QDateTime* new_QDateTime(const QDateTime&  other);
void delete_QDateTime(QDateTime* obj) { delete obj; } 
   QDateTime  addDays(QDateTime* theWrappedObject, qint64  days) const;
   QDateTime  addMSecs(QDateTime* theWrappedObject, qint64  msecs) const;
   QDateTime  addMonths(QDateTime* theWrappedObject, int  months) const;
   QDateTime  addSecs(QDateTime* theWrappedObject, qint64  secs) const;
   QDateTime  addYears(QDateTime* theWrappedObject, int  years) const;
   QDateTime  static_QDateTime_currentDateTime();
   QDateTime  static_QDateTime_currentDateTimeUtc();
   qint64  static_QDateTime_currentMSecsSinceEpoch();
   QDate  date(QDateTime* theWrappedObject) const;
   qint64  daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs);
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, Qt::TimeSpec  spec, int  offsetFromUtc = 0);
   QDateTime  static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, const QTimeZone&  timeZone);
   QDateTime  static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QDateTime  static_QDateTime_fromString(const QString&  s, const QString&  format);
   QDateTime  static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC);
   QDateTime  static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC, Qt::TimeSpec  spec, int  offsetFromUtc = 0);
   QDateTime  static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC, const QTimeZone&  timeZone);
   bool  isDaylightTime(QDateTime* theWrappedObject) const;
   bool  isNull(QDateTime* theWrappedObject) const;
   bool  isValid(QDateTime* theWrappedObject) const;
   qint64  msecsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   int  offsetFromUtc(QDateTime* theWrappedObject) const;
   bool  __ne__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   bool  __lt__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   void writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   bool  __eq__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   bool  __gt__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   bool  __ge__(QDateTime* theWrappedObject, const QDateTime&  other) const;
   void readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1);
   qint64  secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const;
   void setDate(QDateTime* theWrappedObject, const QDate&  date);
   void setMSecsSinceEpoch(QDateTime* theWrappedObject, qint64  msecs);
   void setOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds);
   void setTime(QDateTime* theWrappedObject, const QTime&  time);
   void setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec);
   void setTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone);
   void setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC);
   void setUtcOffset(QDateTime* theWrappedObject, int  seconds);
   void swap(QDateTime* theWrappedObject, QDateTime&  other);
   QTime  time(QDateTime* theWrappedObject) const;
   Qt::TimeSpec  timeSpec(QDateTime* theWrappedObject) const;
   QTimeZone  timeZone(QDateTime* theWrappedObject) const;
   QString  timeZoneAbbreviation(QDateTime* theWrappedObject) const;
   QDateTime  toLocalTime(QDateTime* theWrappedObject) const;
   qint64  toMSecsSinceEpoch(QDateTime* theWrappedObject) const;
   QDateTime  toOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds) const;
   QString  toString(QDateTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QDateTime* theWrappedObject, const QString&  format) const;
   QDateTime  toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const;
   QDateTime  toTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone) const;
   uint  toTime_t(QDateTime* theWrappedObject) const;
   QDateTime  toUTC(QDateTime* theWrappedObject) const;
   int  utcOffset(QDateTime* theWrappedObject) const;
    QString py_toString(QDateTime*);
    bool __nonzero__(QDateTime* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QLine : public QObject
{ Q_OBJECT
public:
public slots:
QLine* new_QLine();
QLine* new_QLine(const QPoint&  pt1, const QPoint&  pt2);
QLine* new_QLine(int  x1, int  y1, int  x2, int  y2);
QLine* new_QLine(const QLine& other) {
QLine* a = new QLine();
*((QLine*)a) = other;
return a; }
void delete_QLine(QLine* obj) { delete obj; } 
   int  dx(QLine* theWrappedObject) const;
   int  dy(QLine* theWrappedObject) const;
   bool  isNull(QLine* theWrappedObject) const;
   bool  __ne__(QLine* theWrappedObject, const QLine&  d) const;
   QLine  __mul__(QLine* theWrappedObject, const QMatrix&  m);
   QLine  __mul__(QLine* theWrappedObject, const QTransform&  m);
   void writeTo(QLine* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLine* theWrappedObject, const QLine&  d) const;
   void readFrom(QLine* theWrappedObject, QDataStream&  arg__1);
   QPoint  p1(QLine* theWrappedObject) const;
   QPoint  p2(QLine* theWrappedObject) const;
   void setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setP1(QLine* theWrappedObject, const QPoint&  p1);
   void setP2(QLine* theWrappedObject, const QPoint&  p2);
   void setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void translate(QLine* theWrappedObject, const QPoint&  p);
   void translate(QLine* theWrappedObject, int  dx, int  dy);
   QLine  translated(QLine* theWrappedObject, const QPoint&  p) const;
   QLine  translated(QLine* theWrappedObject, int  dx, int  dy) const;
   int  x1(QLine* theWrappedObject) const;
   int  x2(QLine* theWrappedObject) const;
   int  y1(QLine* theWrappedObject) const;
   int  y2(QLine* theWrappedObject) const;
    QString py_toString(QLine*);
    bool __nonzero__(QLine* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QLineF : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IntersectType )
enum IntersectType{
  NoIntersection = QLineF::NoIntersection,   BoundedIntersection = QLineF::BoundedIntersection,   UnboundedIntersection = QLineF::UnboundedIntersection};
public slots:
QLineF* new_QLineF();
QLineF* new_QLineF(const QLine&  line);
QLineF* new_QLineF(const QPointF&  pt1, const QPointF&  pt2);
QLineF* new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2);
QLineF* new_QLineF(const QLineF& other) {
QLineF* a = new QLineF();
*((QLineF*)a) = other;
return a; }
void delete_QLineF(QLineF* obj) { delete obj; } 
   qreal  angle(QLineF* theWrappedObject) const;
   qreal  angle(QLineF* theWrappedObject, const QLineF&  l) const;
   qreal  angleTo(QLineF* theWrappedObject, const QLineF&  l) const;
   qreal  dx(QLineF* theWrappedObject) const;
   qreal  dy(QLineF* theWrappedObject) const;
   QLineF  static_QLineF_fromPolar(qreal  length, qreal  angle);
   QLineF::IntersectType  intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const;
   bool  isNull(QLineF* theWrappedObject) const;
   qreal  length(QLineF* theWrappedObject) const;
   QLineF  normalVector(QLineF* theWrappedObject) const;
   bool  __ne__(QLineF* theWrappedObject, const QLineF&  d) const;
   QLineF  __mul__(QLineF* theWrappedObject, const QMatrix&  m);
   QLineF  __mul__(QLineF* theWrappedObject, const QTransform&  m);
   void writeTo(QLineF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLineF* theWrappedObject, const QLineF&  d) const;
   void readFrom(QLineF* theWrappedObject, QDataStream&  arg__1);
   QPointF  p1(QLineF* theWrappedObject) const;
   QPointF  p2(QLineF* theWrappedObject) const;
   QPointF  pointAt(QLineF* theWrappedObject, qreal  t) const;
   void setAngle(QLineF* theWrappedObject, qreal  angle);
   void setLength(QLineF* theWrappedObject, qreal  len);
   void setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setP1(QLineF* theWrappedObject, const QPointF&  p1);
   void setP2(QLineF* theWrappedObject, const QPointF&  p2);
   void setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   QLine  toLine(QLineF* theWrappedObject) const;
   void translate(QLineF* theWrappedObject, const QPointF&  p);
   void translate(QLineF* theWrappedObject, qreal  dx, qreal  dy);
   QLineF  translated(QLineF* theWrappedObject, const QPointF&  p) const;
   QLineF  translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const;
   QLineF  unitVector(QLineF* theWrappedObject) const;
   qreal  x1(QLineF* theWrappedObject) const;
   qreal  x2(QLineF* theWrappedObject) const;
   qreal  y1(QLineF* theWrappedObject) const;
   qreal  y2(QLineF* theWrappedObject) const;
    QString py_toString(QLineF*);
    bool __nonzero__(QLineF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QLocale : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Country CurrencySymbolFormat FormatType Language MeasurementSystem NumberOption QuotationStyle Script )
Q_FLAGS(NumberOptions )
enum Country{
  AnyCountry = QLocale::AnyCountry,   Afghanistan = QLocale::Afghanistan,   Albania = QLocale::Albania,   Algeria = QLocale::Algeria,   AmericanSamoa = QLocale::AmericanSamoa,   Andorra = QLocale::Andorra,   Angola = QLocale::Angola,   Anguilla = QLocale::Anguilla,   Antarctica = QLocale::Antarctica,   AntiguaAndBarbuda = QLocale::AntiguaAndBarbuda,   Argentina = QLocale::Argentina,   Armenia = QLocale::Armenia,   Aruba = QLocale::Aruba,   Australia = QLocale::Australia,   Austria = QLocale::Austria,   Azerbaijan = QLocale::Azerbaijan,   Bahamas = QLocale::Bahamas,   Bahrain = QLocale::Bahrain,   Bangladesh = QLocale::Bangladesh,   Barbados = QLocale::Barbados,   Belarus = QLocale::Belarus,   Belgium = QLocale::Belgium,   Belize = QLocale::Belize,   Benin = QLocale::Benin,   Bermuda = QLocale::Bermuda,   Bhutan = QLocale::Bhutan,   Bolivia = QLocale::Bolivia,   BosniaAndHerzegowina = QLocale::BosniaAndHerzegowina,   Botswana = QLocale::Botswana,   BouvetIsland = QLocale::BouvetIsland,   Brazil = QLocale::Brazil,   BritishIndianOceanTerritory = QLocale::BritishIndianOceanTerritory,   Brunei = QLocale::Brunei,   Bulgaria = QLocale::Bulgaria,   BurkinaFaso = QLocale::BurkinaFaso,   Burundi = QLocale::Burundi,   Cambodia = QLocale::Cambodia,   Cameroon = QLocale::Cameroon,   Canada = QLocale::Canada,   CapeVerde = QLocale::CapeVerde,   CaymanIslands = QLocale::CaymanIslands,   CentralAfricanRepublic = QLocale::CentralAfricanRepublic,   Chad = QLocale::Chad,   Chile = QLocale::Chile,   China = QLocale::China,   ChristmasIsland = QLocale::ChristmasIsland,   CocosIslands = QLocale::CocosIslands,   Colombia = QLocale::Colombia,   Comoros = QLocale::Comoros,   CongoKinshasa = QLocale::CongoKinshasa,   CongoBrazzaville = QLocale::CongoBrazzaville,   CookIslands = QLocale::CookIslands,   CostaRica = QLocale::CostaRica,   IvoryCoast = QLocale::IvoryCoast,   Croatia = QLocale::Croatia,   Cuba = QLocale::Cuba,   Cyprus = QLocale::Cyprus,   CzechRepublic = QLocale::CzechRepublic,   Denmark = QLocale::Denmark,   Djibouti = QLocale::Djibouti,   Dominica = QLocale::Dominica,   DominicanRepublic = QLocale::DominicanRepublic,   EastTimor = QLocale::EastTimor,   Ecuador = QLocale::Ecuador,   Egypt = QLocale::Egypt,   ElSalvador = QLocale::ElSalvador,   EquatorialGuinea = QLocale::EquatorialGuinea,   Eritrea = QLocale::Eritrea,   Estonia = QLocale::Estonia,   Ethiopia = QLocale::Ethiopia,   FalklandIslands = QLocale::FalklandIslands,   FaroeIslands = QLocale::FaroeIslands,   Fiji = QLocale::Fiji,   Finland = QLocale::Finland,   France = QLocale::France,   Guernsey = QLocale::Guernsey,   FrenchGuiana = QLocale::FrenchGuiana,   FrenchPolynesia = QLocale::FrenchPolynesia,   FrenchSouthernTerritories = QLocale::FrenchSouthernTerritories,   Gabon = QLocale::Gabon,   Gambia = QLocale::Gambia,   Georgia = QLocale::Georgia,   Germany = QLocale::Germany,   Ghana = QLocale::Ghana,   Gibraltar = QLocale::Gibraltar,   Greece = QLocale::Greece,   Greenland = QLocale::Greenland,   Grenada = QLocale::Grenada,   Guadeloupe = QLocale::Guadeloupe,   Guam = QLocale::Guam,   Guatemala = QLocale::Guatemala,   Guinea = QLocale::Guinea,   GuineaBissau = QLocale::GuineaBissau,   Guyana = QLocale::Guyana,   Haiti = QLocale::Haiti,   HeardAndMcDonaldIslands = QLocale::HeardAndMcDonaldIslands,   Honduras = QLocale::Honduras,   HongKong = QLocale::HongKong,   Hungary = QLocale::Hungary,   Iceland = QLocale::Iceland,   India = QLocale::India,   Indonesia = QLocale::Indonesia,   Iran = QLocale::Iran,   Iraq = QLocale::Iraq,   Ireland = QLocale::Ireland,   Israel = QLocale::Israel,   Italy = QLocale::Italy,   Jamaica = QLocale::Jamaica,   Japan = QLocale::Japan,   Jordan = QLocale::Jordan,   Kazakhstan = QLocale::Kazakhstan,   Kenya = QLocale::Kenya,   Kiribati = QLocale::Kiribati,   NorthKorea = QLocale::NorthKorea,   SouthKorea = QLocale::SouthKorea,   Kuwait = QLocale::Kuwait,   Kyrgyzstan = QLocale::Kyrgyzstan,   Laos = QLocale::Laos,   Latvia = QLocale::Latvia,   Lebanon = QLocale::Lebanon,   Lesotho = QLocale::Lesotho,   Liberia = QLocale::Liberia,   Libya = QLocale::Libya,   Liechtenstein = QLocale::Liechtenstein,   Lithuania = QLocale::Lithuania,   Luxembourg = QLocale::Luxembourg,   Macau = QLocale::Macau,   Macedonia = QLocale::Macedonia,   Madagascar = QLocale::Madagascar,   Malawi = QLocale::Malawi,   Malaysia = QLocale::Malaysia,   Maldives = QLocale::Maldives,   Mali = QLocale::Mali,   Malta = QLocale::Malta,   MarshallIslands = QLocale::MarshallIslands,   Martinique = QLocale::Martinique,   Mauritania = QLocale::Mauritania,   Mauritius = QLocale::Mauritius,   Mayotte = QLocale::Mayotte,   Mexico = QLocale::Mexico,   Micronesia = QLocale::Micronesia,   Moldova = QLocale::Moldova,   Monaco = QLocale::Monaco,   Mongolia = QLocale::Mongolia,   Montserrat = QLocale::Montserrat,   Morocco = QLocale::Morocco,   Mozambique = QLocale::Mozambique,   Myanmar = QLocale::Myanmar,   Namibia = QLocale::Namibia,   NauruCountry = QLocale::NauruCountry,   Nepal = QLocale::Nepal,   Netherlands = QLocale::Netherlands,   CuraSao = QLocale::CuraSao,   NewCaledonia = QLocale::NewCaledonia,   NewZealand = QLocale::NewZealand,   Nicaragua = QLocale::Nicaragua,   Niger = QLocale::Niger,   Nigeria = QLocale::Nigeria,   Niue = QLocale::Niue,   NorfolkIsland = QLocale::NorfolkIsland,   NorthernMarianaIslands = QLocale::NorthernMarianaIslands,   Norway = QLocale::Norway,   Oman = QLocale::Oman,   Pakistan = QLocale::Pakistan,   Palau = QLocale::Palau,   PalestinianTerritories = QLocale::PalestinianTerritories,   Panama = QLocale::Panama,   PapuaNewGuinea = QLocale::PapuaNewGuinea,   Paraguay = QLocale::Paraguay,   Peru = QLocale::Peru,   Philippines = QLocale::Philippines,   Pitcairn = QLocale::Pitcairn,   Poland = QLocale::Poland,   Portugal = QLocale::Portugal,   PuertoRico = QLocale::PuertoRico,   Qatar = QLocale::Qatar,   Reunion = QLocale::Reunion,   Romania = QLocale::Romania,   Russia = QLocale::Russia,   Rwanda = QLocale::Rwanda,   SaintKittsAndNevis = QLocale::SaintKittsAndNevis,   SaintLucia = QLocale::SaintLucia,   SaintVincentAndTheGrenadines = QLocale::SaintVincentAndTheGrenadines,   Samoa = QLocale::Samoa,   SanMarino = QLocale::SanMarino,   SaoTomeAndPrincipe = QLocale::SaoTomeAndPrincipe,   SaudiArabia = QLocale::SaudiArabia,   Senegal = QLocale::Senegal,   Seychelles = QLocale::Seychelles,   SierraLeone = QLocale::SierraLeone,   Singapore = QLocale::Singapore,   Slovakia = QLocale::Slovakia,   Slovenia = QLocale::Slovenia,   SolomonIslands = QLocale::SolomonIslands,   Somalia = QLocale::Somalia,   SouthAfrica = QLocale::SouthAfrica,   SouthGeorgiaAndTheSouthSandwichIslands = QLocale::SouthGeorgiaAndTheSouthSandwichIslands,   Spain = QLocale::Spain,   SriLanka = QLocale::SriLanka,   SaintHelena = QLocale::SaintHelena,   SaintPierreAndMiquelon = QLocale::SaintPierreAndMiquelon,   Sudan = QLocale::Sudan,   Suriname = QLocale::Suriname,   SvalbardAndJanMayenIslands = QLocale::SvalbardAndJanMayenIslands,   Swaziland = QLocale::Swaziland,   Sweden = QLocale::Sweden,   Switzerland = QLocale::Switzerland,   Syria = QLocale::Syria,   Taiwan = QLocale::Taiwan,   Tajikistan = QLocale::Tajikistan,   Tanzania = QLocale::Tanzania,   Thailand = QLocale::Thailand,   Togo = QLocale::Togo,   Tokelau = QLocale::Tokelau,   Tonga = QLocale::Tonga,   TrinidadAndTobago = QLocale::TrinidadAndTobago,   Tunisia = QLocale::Tunisia,   Turkey = QLocale::Turkey,   Turkmenistan = QLocale::Turkmenistan,   TurksAndCaicosIslands = QLocale::TurksAndCaicosIslands,   Tuvalu = QLocale::Tuvalu,   Uganda = QLocale::Uganda,   Ukraine = QLocale::Ukraine,   UnitedArabEmirates = QLocale::UnitedArabEmirates,   UnitedKingdom = QLocale::UnitedKingdom,   UnitedStates = QLocale::UnitedStates,   UnitedStatesMinorOutlyingIslands = QLocale::UnitedStatesMinorOutlyingIslands,   Uruguay = QLocale::Uruguay,   Uzbekistan = QLocale::Uzbekistan,   Vanuatu = QLocale::Vanuatu,   VaticanCityState = QLocale::VaticanCityState,   Venezuela = QLocale::Venezuela,   Vietnam = QLocale::Vietnam,   BritishVirginIslands = QLocale::BritishVirginIslands,   UnitedStatesVirginIslands = QLocale::UnitedStatesVirginIslands,   WallisAndFutunaIslands = QLocale::WallisAndFutunaIslands,   WesternSahara = QLocale::WesternSahara,   Yemen = QLocale::Yemen,   CanaryIslands = QLocale::CanaryIslands,   Zambia = QLocale::Zambia,   Zimbabwe = QLocale::Zimbabwe,   ClippertonIsland = QLocale::ClippertonIsland,   Montenegro = QLocale::Montenegro,   Serbia = QLocale::Serbia,   SaintBarthelemy = QLocale::SaintBarthelemy,   SaintMartin = QLocale::SaintMartin,   LatinAmericaAndTheCaribbean = QLocale::LatinAmericaAndTheCaribbean,   AscensionIsland = QLocale::AscensionIsland,   AlandIslands = QLocale::AlandIslands,   DiegoGarcia = QLocale::DiegoGarcia,   CeutaAndMelilla = QLocale::CeutaAndMelilla,   IsleOfMan = QLocale::IsleOfMan,   Jersey = QLocale::Jersey,   TristanDaCunha = QLocale::TristanDaCunha,   SouthSudan = QLocale::SouthSudan,   Bonaire = QLocale::Bonaire,   SintMaarten = QLocale::SintMaarten,   Kosovo = QLocale::Kosovo,   DemocraticRepublicOfCongo = QLocale::DemocraticRepublicOfCongo,   PeoplesRepublicOfCongo = QLocale::PeoplesRepublicOfCongo,   DemocraticRepublicOfKorea = QLocale::DemocraticRepublicOfKorea,   RepublicOfKorea = QLocale::RepublicOfKorea,   RussianFederation = QLocale::RussianFederation,   SyrianArabRepublic = QLocale::SyrianArabRepublic,   LastCountry = QLocale::LastCountry};
enum CurrencySymbolFormat{
  CurrencyIsoCode = QLocale::CurrencyIsoCode,   CurrencySymbol = QLocale::CurrencySymbol,   CurrencyDisplayName = QLocale::CurrencyDisplayName};
enum FormatType{
  LongFormat = QLocale::LongFormat,   ShortFormat = QLocale::ShortFormat,   NarrowFormat = QLocale::NarrowFormat};
enum Language{
  AnyLanguage = QLocale::AnyLanguage,   C = QLocale::C,   Abkhazian = QLocale::Abkhazian,   Oromo = QLocale::Oromo,   Afar = QLocale::Afar,   Afrikaans = QLocale::Afrikaans,   Albanian = QLocale::Albanian,   Amharic = QLocale::Amharic,   Arabic = QLocale::Arabic,   Armenian = QLocale::Armenian,   Assamese = QLocale::Assamese,   Aymara = QLocale::Aymara,   Azerbaijani = QLocale::Azerbaijani,   Bashkir = QLocale::Bashkir,   Basque = QLocale::Basque,   Bengali = QLocale::Bengali,   Dzongkha = QLocale::Dzongkha,   Bihari = QLocale::Bihari,   Bislama = QLocale::Bislama,   Breton = QLocale::Breton,   Bulgarian = QLocale::Bulgarian,   Burmese = QLocale::Burmese,   Belarusian = QLocale::Belarusian,   Khmer = QLocale::Khmer,   Catalan = QLocale::Catalan,   Chinese = QLocale::Chinese,   Corsican = QLocale::Corsican,   Croatian = QLocale::Croatian,   Czech = QLocale::Czech,   Danish = QLocale::Danish,   Dutch = QLocale::Dutch,   English = QLocale::English,   Esperanto = QLocale::Esperanto,   Estonian = QLocale::Estonian,   Faroese = QLocale::Faroese,   Fijian = QLocale::Fijian,   Finnish = QLocale::Finnish,   French = QLocale::French,   WesternFrisian = QLocale::WesternFrisian,   Gaelic = QLocale::Gaelic,   Galician = QLocale::Galician,   Georgian = QLocale::Georgian,   German = QLocale::German,   Greek = QLocale::Greek,   Greenlandic = QLocale::Greenlandic,   Guarani = QLocale::Guarani,   Gujarati = QLocale::Gujarati,   Hausa = QLocale::Hausa,   Hebrew = QLocale::Hebrew,   Hindi = QLocale::Hindi,   Hungarian = QLocale::Hungarian,   Icelandic = QLocale::Icelandic,   Indonesian = QLocale::Indonesian,   Interlingua = QLocale::Interlingua,   Interlingue = QLocale::Interlingue,   Inuktitut = QLocale::Inuktitut,   Inupiak = QLocale::Inupiak,   Irish = QLocale::Irish,   Italian = QLocale::Italian,   Japanese = QLocale::Japanese,   Javanese = QLocale::Javanese,   Kannada = QLocale::Kannada,   Kashmiri = QLocale::Kashmiri,   Kazakh = QLocale::Kazakh,   Kinyarwanda = QLocale::Kinyarwanda,   Kirghiz = QLocale::Kirghiz,   Korean = QLocale::Korean,   Kurdish = QLocale::Kurdish,   Rundi = QLocale::Rundi,   Lao = QLocale::Lao,   Latin = QLocale::Latin,   Latvian = QLocale::Latvian,   Lingala = QLocale::Lingala,   Lithuanian = QLocale::Lithuanian,   Macedonian = QLocale::Macedonian,   Malagasy = QLocale::Malagasy,   Malay = QLocale::Malay,   Malayalam = QLocale::Malayalam,   Maltese = QLocale::Maltese,   Maori = QLocale::Maori,   Marathi = QLocale::Marathi,   Marshallese = QLocale::Marshallese,   Mongolian = QLocale::Mongolian,   NauruLanguage = QLocale::NauruLanguage,   Nepali = QLocale::Nepali,   NorwegianBokmal = QLocale::NorwegianBokmal,   Occitan = QLocale::Occitan,   Oriya = QLocale::Oriya,   Pashto = QLocale::Pashto,   Persian = QLocale::Persian,   Polish = QLocale::Polish,   Portuguese = QLocale::Portuguese,   Punjabi = QLocale::Punjabi,   Quechua = QLocale::Quechua,   Romansh = QLocale::Romansh,   Romanian = QLocale::Romanian,   Russian = QLocale::Russian,   Samoan = QLocale::Samoan,   Sango = QLocale::Sango,   Sanskrit = QLocale::Sanskrit,   Serbian = QLocale::Serbian,   Ossetic = QLocale::Ossetic,   SouthernSotho = QLocale::SouthernSotho,   Tswana = QLocale::Tswana,   Shona = QLocale::Shona,   Sindhi = QLocale::Sindhi,   Sinhala = QLocale::Sinhala,   Swati = QLocale::Swati,   Slovak = QLocale::Slovak,   Slovenian = QLocale::Slovenian,   Somali = QLocale::Somali,   Spanish = QLocale::Spanish,   Sundanese = QLocale::Sundanese,   Swahili = QLocale::Swahili,   Swedish = QLocale::Swedish,   Sardinian = QLocale::Sardinian,   Tajik = QLocale::Tajik,   Tamil = QLocale::Tamil,   Tatar = QLocale::Tatar,   Telugu = QLocale::Telugu,   Thai = QLocale::Thai,   Tibetan = QLocale::Tibetan,   Tigrinya = QLocale::Tigrinya,   Tongan = QLocale::Tongan,   Tsonga = QLocale::Tsonga,   Turkish = QLocale::Turkish,   Turkmen = QLocale::Turkmen,   Tahitian = QLocale::Tahitian,   Uighur = QLocale::Uighur,   Ukrainian = QLocale::Ukrainian,   Urdu = QLocale::Urdu,   Uzbek = QLocale::Uzbek,   Vietnamese = QLocale::Vietnamese,   Volapuk = QLocale::Volapuk,   Welsh = QLocale::Welsh,   Wolof = QLocale::Wolof,   Xhosa = QLocale::Xhosa,   Yiddish = QLocale::Yiddish,   Yoruba = QLocale::Yoruba,   Zhuang = QLocale::Zhuang,   Zulu = QLocale::Zulu,   NorwegianNynorsk = QLocale::NorwegianNynorsk,   Bosnian = QLocale::Bosnian,   Divehi = QLocale::Divehi,   Manx = QLocale::Manx,   Cornish = QLocale::Cornish,   Akan = QLocale::Akan,   Konkani = QLocale::Konkani,   Ga = QLocale::Ga,   Igbo = QLocale::Igbo,   Kamba = QLocale::Kamba,   Syriac = QLocale::Syriac,   Blin = QLocale::Blin,   Geez = QLocale::Geez,   Koro = QLocale::Koro,   Sidamo = QLocale::Sidamo,   Atsam = QLocale::Atsam,   Tigre = QLocale::Tigre,   Jju = QLocale::Jju,   Friulian = QLocale::Friulian,   Venda = QLocale::Venda,   Ewe = QLocale::Ewe,   Walamo = QLocale::Walamo,   Hawaiian = QLocale::Hawaiian,   Tyap = QLocale::Tyap,   Nyanja = QLocale::Nyanja,   Filipino = QLocale::Filipino,   SwissGerman = QLocale::SwissGerman,   SichuanYi = QLocale::SichuanYi,   Kpelle = QLocale::Kpelle,   LowGerman = QLocale::LowGerman,   SouthNdebele = QLocale::SouthNdebele,   NorthernSotho = QLocale::NorthernSotho,   NorthernSami = QLocale::NorthernSami,   Taroko = QLocale::Taroko,   Gusii = QLocale::Gusii,   Taita = QLocale::Taita,   Fulah = QLocale::Fulah,   Kikuyu = QLocale::Kikuyu,   Samburu = QLocale::Samburu,   Sena = QLocale::Sena,   NorthNdebele = QLocale::NorthNdebele,   Rombo = QLocale::Rombo,   Tachelhit = QLocale::Tachelhit,   Kabyle = QLocale::Kabyle,   Nyankole = QLocale::Nyankole,   Bena = QLocale::Bena,   Vunjo = QLocale::Vunjo,   Bambara = QLocale::Bambara,   Embu = QLocale::Embu,   Cherokee = QLocale::Cherokee,   Morisyen = QLocale::Morisyen,   Makonde = QLocale::Makonde,   Langi = QLocale::Langi,   Ganda = QLocale::Ganda,   Bemba = QLocale::Bemba,   Kabuverdianu = QLocale::Kabuverdianu,   Meru = QLocale::Meru,   Kalenjin = QLocale::Kalenjin,   Nama = QLocale::Nama,   Machame = QLocale::Machame,   Colognian = QLocale::Colognian,   Masai = QLocale::Masai,   Soga = QLocale::Soga,   Luyia = QLocale::Luyia,   Asu = QLocale::Asu,   Teso = QLocale::Teso,   Saho = QLocale::Saho,   KoyraChiini = QLocale::KoyraChiini,   Rwa = QLocale::Rwa,   Luo = QLocale::Luo,   Chiga = QLocale::Chiga,   CentralMoroccoTamazight = QLocale::CentralMoroccoTamazight,   KoyraboroSenni = QLocale::KoyraboroSenni,   Shambala = QLocale::Shambala,   Bodo = QLocale::Bodo,   Avaric = QLocale::Avaric,   Chamorro = QLocale::Chamorro,   Chechen = QLocale::Chechen,   Church = QLocale::Church,   Chuvash = QLocale::Chuvash,   Cree = QLocale::Cree,   Haitian = QLocale::Haitian,   Herero = QLocale::Herero,   HiriMotu = QLocale::HiriMotu,   Kanuri = QLocale::Kanuri,   Komi = QLocale::Komi,   Kongo = QLocale::Kongo,   Kwanyama = QLocale::Kwanyama,   Limburgish = QLocale::Limburgish,   LubaKatanga = QLocale::LubaKatanga,   Luxembourgish = QLocale::Luxembourgish,   Navaho = QLocale::Navaho,   Ndonga = QLocale::Ndonga,   Ojibwa = QLocale::Ojibwa,   Pali = QLocale::Pali,   Walloon = QLocale::Walloon,   Aghem = QLocale::Aghem,   Basaa = QLocale::Basaa,   Zarma = QLocale::Zarma,   Duala = QLocale::Duala,   JolaFonyi = QLocale::JolaFonyi,   Ewondo = QLocale::Ewondo,   Bafia = QLocale::Bafia,   MakhuwaMeetto = QLocale::MakhuwaMeetto,   Mundang = QLocale::Mundang,   Kwasio = QLocale::Kwasio,   Nuer = QLocale::Nuer,   Sakha = QLocale::Sakha,   Sangu = QLocale::Sangu,   CongoSwahili = QLocale::CongoSwahili,   Tasawaq = QLocale::Tasawaq,   Vai = QLocale::Vai,   Walser = QLocale::Walser,   Yangben = QLocale::Yangben,   Avestan = QLocale::Avestan,   Asturian = QLocale::Asturian,   Ngomba = QLocale::Ngomba,   Kako = QLocale::Kako,   Meta = QLocale::Meta,   Ngiemboon = QLocale::Ngiemboon,   Aragonese = QLocale::Aragonese,   Akkadian = QLocale::Akkadian,   AncientEgyptian = QLocale::AncientEgyptian,   AncientGreek = QLocale::AncientGreek,   Aramaic = QLocale::Aramaic,   Balinese = QLocale::Balinese,   Bamun = QLocale::Bamun,   BatakToba = QLocale::BatakToba,   Buginese = QLocale::Buginese,   Buhid = QLocale::Buhid,   Carian = QLocale::Carian,   Chakma = QLocale::Chakma,   ClassicalMandaic = QLocale::ClassicalMandaic,   Coptic = QLocale::Coptic,   Dogri = QLocale::Dogri,   EasternCham = QLocale::EasternCham,   EasternKayah = QLocale::EasternKayah,   Etruscan = QLocale::Etruscan,   Gothic = QLocale::Gothic,   Hanunoo = QLocale::Hanunoo,   Ingush = QLocale::Ingush,   LargeFloweryMiao = QLocale::LargeFloweryMiao,   Lepcha = QLocale::Lepcha,   Limbu = QLocale::Limbu,   Lisu = QLocale::Lisu,   Lu = QLocale::Lu,   Lycian = QLocale::Lycian,   Lydian = QLocale::Lydian,   Mandingo = QLocale::Mandingo,   Manipuri = QLocale::Manipuri,   Meroitic = QLocale::Meroitic,   NorthernThai = QLocale::NorthernThai,   OldIrish = QLocale::OldIrish,   OldNorse = QLocale::OldNorse,   OldPersian = QLocale::OldPersian,   OldTurkish = QLocale::OldTurkish,   Pahlavi = QLocale::Pahlavi,   Parthian = QLocale::Parthian,   Phoenician = QLocale::Phoenician,   PrakritLanguage = QLocale::PrakritLanguage,   Rejang = QLocale::Rejang,   Sabaean = QLocale::Sabaean,   Samaritan = QLocale::Samaritan,   Santali = QLocale::Santali,   Saurashtra = QLocale::Saurashtra,   Sora = QLocale::Sora,   Sylheti = QLocale::Sylheti,   Tagbanwa = QLocale::Tagbanwa,   TaiDam = QLocale::TaiDam,   TaiNua = QLocale::TaiNua,   Ugaritic = QLocale::Ugaritic,   Akoose = QLocale::Akoose,   Lakota = QLocale::Lakota,   StandardMoroccanTamazight = QLocale::StandardMoroccanTamazight,   Norwegian = QLocale::Norwegian,   Moldavian = QLocale::Moldavian,   SerboCroatian = QLocale::SerboCroatian,   Tagalog = QLocale::Tagalog,   Twi = QLocale::Twi,   Afan = QLocale::Afan,   Byelorussian = QLocale::Byelorussian,   Bhutani = QLocale::Bhutani,   Cambodian = QLocale::Cambodian,   Kurundi = QLocale::Kurundi,   RhaetoRomance = QLocale::RhaetoRomance,   Chewa = QLocale::Chewa,   Frisian = QLocale::Frisian,   Uigur = QLocale::Uigur,   LastLanguage = QLocale::LastLanguage};
enum MeasurementSystem{
  MetricSystem = QLocale::MetricSystem,   ImperialUSSystem = QLocale::ImperialUSSystem,   ImperialUKSystem = QLocale::ImperialUKSystem,   ImperialSystem = QLocale::ImperialSystem};
enum NumberOption{
  OmitGroupSeparator = QLocale::OmitGroupSeparator,   RejectGroupSeparator = QLocale::RejectGroupSeparator};
enum QuotationStyle{
  StandardQuotation = QLocale::StandardQuotation,   AlternateQuotation = QLocale::AlternateQuotation};
enum Script{
  AnyScript = QLocale::AnyScript,   ArabicScript = QLocale::ArabicScript,   CyrillicScript = QLocale::CyrillicScript,   DeseretScript = QLocale::DeseretScript,   GurmukhiScript = QLocale::GurmukhiScript,   SimplifiedHanScript = QLocale::SimplifiedHanScript,   TraditionalHanScript = QLocale::TraditionalHanScript,   LatinScript = QLocale::LatinScript,   MongolianScript = QLocale::MongolianScript,   TifinaghScript = QLocale::TifinaghScript,   ArmenianScript = QLocale::ArmenianScript,   BengaliScript = QLocale::BengaliScript,   CherokeeScript = QLocale::CherokeeScript,   DevanagariScript = QLocale::DevanagariScript,   EthiopicScript = QLocale::EthiopicScript,   GeorgianScript = QLocale::GeorgianScript,   GreekScript = QLocale::GreekScript,   GujaratiScript = QLocale::GujaratiScript,   HebrewScript = QLocale::HebrewScript,   JapaneseScript = QLocale::JapaneseScript,   KhmerScript = QLocale::KhmerScript,   KannadaScript = QLocale::KannadaScript,   KoreanScript = QLocale::KoreanScript,   LaoScript = QLocale::LaoScript,   MalayalamScript = QLocale::MalayalamScript,   MyanmarScript = QLocale::MyanmarScript,   OriyaScript = QLocale::OriyaScript,   TamilScript = QLocale::TamilScript,   TeluguScript = QLocale::TeluguScript,   ThaanaScript = QLocale::ThaanaScript,   ThaiScript = QLocale::ThaiScript,   TibetanScript = QLocale::TibetanScript,   SinhalaScript = QLocale::SinhalaScript,   SyriacScript = QLocale::SyriacScript,   YiScript = QLocale::YiScript,   VaiScript = QLocale::VaiScript,   AvestanScript = QLocale::AvestanScript,   BalineseScript = QLocale::BalineseScript,   BamumScript = QLocale::BamumScript,   BatakScript = QLocale::BatakScript,   BopomofoScript = QLocale::BopomofoScript,   BrahmiScript = QLocale::BrahmiScript,   BugineseScript = QLocale::BugineseScript,   BuhidScript = QLocale::BuhidScript,   CanadianAboriginalScript = QLocale::CanadianAboriginalScript,   CarianScript = QLocale::CarianScript,   ChakmaScript = QLocale::ChakmaScript,   ChamScript = QLocale::ChamScript,   CopticScript = QLocale::CopticScript,   CypriotScript = QLocale::CypriotScript,   EgyptianHieroglyphsScript = QLocale::EgyptianHieroglyphsScript,   FraserScript = QLocale::FraserScript,   GlagoliticScript = QLocale::GlagoliticScript,   GothicScript = QLocale::GothicScript,   HanScript = QLocale::HanScript,   HangulScript = QLocale::HangulScript,   HanunooScript = QLocale::HanunooScript,   ImperialAramaicScript = QLocale::ImperialAramaicScript,   InscriptionalPahlaviScript = QLocale::InscriptionalPahlaviScript,   InscriptionalParthianScript = QLocale::InscriptionalParthianScript,   JavaneseScript = QLocale::JavaneseScript,   KaithiScript = QLocale::KaithiScript,   KatakanaScript = QLocale::KatakanaScript,   KayahLiScript = QLocale::KayahLiScript,   KharoshthiScript = QLocale::KharoshthiScript,   LannaScript = QLocale::LannaScript,   LepchaScript = QLocale::LepchaScript,   LimbuScript = QLocale::LimbuScript,   LinearBScript = QLocale::LinearBScript,   LycianScript = QLocale::LycianScript,   LydianScript = QLocale::LydianScript,   MandaeanScript = QLocale::MandaeanScript,   MeiteiMayekScript = QLocale::MeiteiMayekScript,   MeroiticScript = QLocale::MeroiticScript,   MeroiticCursiveScript = QLocale::MeroiticCursiveScript,   NkoScript = QLocale::NkoScript,   NewTaiLueScript = QLocale::NewTaiLueScript,   OghamScript = QLocale::OghamScript,   OlChikiScript = QLocale::OlChikiScript,   OldItalicScript = QLocale::OldItalicScript,   OldPersianScript = QLocale::OldPersianScript,   OldSouthArabianScript = QLocale::OldSouthArabianScript,   OrkhonScript = QLocale::OrkhonScript,   OsmanyaScript = QLocale::OsmanyaScript,   PhagsPaScript = QLocale::PhagsPaScript,   PhoenicianScript = QLocale::PhoenicianScript,   PollardPhoneticScript = QLocale::PollardPhoneticScript,   RejangScript = QLocale::RejangScript,   RunicScript = QLocale::RunicScript,   SamaritanScript = QLocale::SamaritanScript,   SaurashtraScript = QLocale::SaurashtraScript,   SharadaScript = QLocale::SharadaScript,   ShavianScript = QLocale::ShavianScript,   SoraSompengScript = QLocale::SoraSompengScript,   CuneiformScript = QLocale::CuneiformScript,   SundaneseScript = QLocale::SundaneseScript,   SylotiNagriScript = QLocale::SylotiNagriScript,   TagalogScript = QLocale::TagalogScript,   TagbanwaScript = QLocale::TagbanwaScript,   TaiLeScript = QLocale::TaiLeScript,   TaiVietScript = QLocale::TaiVietScript,   TakriScript = QLocale::TakriScript,   UgariticScript = QLocale::UgariticScript,   BrailleScript = QLocale::BrailleScript,   HiraganaScript = QLocale::HiraganaScript,   SimplifiedChineseScript = QLocale::SimplifiedChineseScript,   TraditionalChineseScript = QLocale::TraditionalChineseScript,   LastScript = QLocale::LastScript};
Q_DECLARE_FLAGS(NumberOptions, NumberOption)
public slots:
QLocale* new_QLocale();
QLocale* new_QLocale(QLocale::Language  language, QLocale::Country  country = QLocale::AnyCountry);
QLocale* new_QLocale(QLocale::Language  language, QLocale::Script  script, QLocale::Country  country);
QLocale* new_QLocale(const QLocale&  other);
QLocale* new_QLocale(const QString&  name);
void delete_QLocale(QLocale* obj) { delete obj; } 
   QString  amText(QLocale* theWrappedObject) const;
   QString  bcp47Name(QLocale* theWrappedObject) const;
   QLocale  static_QLocale_c();
   QList<QLocale::Country >  static_QLocale_countriesForLanguage(QLocale::Language  lang);
   QLocale::Country  country(QLocale* theWrappedObject) const;
   QString  static_QLocale_countryToString(QLocale::Country  country);
   QString  createSeparatedList(QLocale* theWrappedObject, const QStringList&  strl) const;
   QString  currencySymbol(QLocale* theWrappedObject, QLocale::CurrencySymbolFormat  arg__1 = QLocale::CurrencySymbol) const;
   QString  dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QChar  decimalPoint(QLocale* theWrappedObject) const;
   QChar  exponential(QLocale* theWrappedObject) const;
   Qt::DayOfWeek  firstDayOfWeek(QLocale* theWrappedObject) const;
   QChar  groupSeparator(QLocale* theWrappedObject) const;
   QLocale::Language  language(QLocale* theWrappedObject) const;
   QString  static_QLocale_languageToString(QLocale::Language  language);
   QList<QLocale >  static_QLocale_matchingLocales(QLocale::Language  language, QLocale::Script  script, QLocale::Country  country);
   QLocale::MeasurementSystem  measurementSystem(QLocale* theWrappedObject) const;
   QString  monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  name(QLocale* theWrappedObject) const;
   QString  nativeCountryName(QLocale* theWrappedObject) const;
   QString  nativeLanguageName(QLocale* theWrappedObject) const;
   QChar  negativeSign(QLocale* theWrappedObject) const;
   QLocale::NumberOptions  numberOptions(QLocale* theWrappedObject) const;
   bool  __ne__(QLocale* theWrappedObject, const QLocale&  other) const;
   void writeTo(QLocale* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QLocale* theWrappedObject, const QLocale&  other) const;
   void readFrom(QLocale* theWrappedObject, QDataStream&  arg__1);
   QChar  percent(QLocale* theWrappedObject) const;
   QString  pmText(QLocale* theWrappedObject) const;
   QChar  positiveSign(QLocale* theWrappedObject) const;
   QString  quoteString(QLocale* theWrappedObject, const QString&  str, QLocale::QuotationStyle  style = QLocale::StandardQuotation) const;
   QString  quoteString(QLocale* theWrappedObject, const QStringRef&  str, QLocale::QuotationStyle  style = QLocale::StandardQuotation) const;
   QLocale::Script  script(QLocale* theWrappedObject) const;
   QString  static_QLocale_scriptToString(QLocale::Script  script);
   void static_QLocale_setDefault(const QLocale&  locale);
   void setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options);
   QString  standaloneDayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  standaloneMonthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QLocale  static_QLocale_system();
   Qt::LayoutDirection  textDirection(QLocale* theWrappedObject) const;
   QString  timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toCurrencyString(QLocale* theWrappedObject, double  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, float  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, int  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, qlonglong  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, qulonglong  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, short  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, uint  arg__1, const QString&  symbol = QString()) const;
   QString  toCurrencyString(QLocale* theWrappedObject, ushort  arg__1, const QString&  symbol = QString()) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format = QLocale::LongFormat) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   double  toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   double  toDouble(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   float  toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   float  toFloat(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   int  toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   int  toInt(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   qlonglong  toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   qlonglong  toLongLong(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   QString  toLower(QLocale* theWrappedObject, const QString&  str) const;
   short  toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   short  toShort(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const;
   QString  toString(QLocale* theWrappedObject, double  i, char  f = 'g', int  prec = 6) const;
   QString  toString(QLocale* theWrappedObject, float  i, char  f = 'g', int  prec = 6) const;
   QString  toString(QLocale* theWrappedObject, int  i) const;
   QString  toString(QLocale* theWrappedObject, qlonglong  i) const;
   QString  toString(QLocale* theWrappedObject, short  i) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   uint  toUInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   uint  toUInt(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   qulonglong  toULongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   qulonglong  toULongLong(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   ushort  toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   ushort  toUShort(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok = 0) const;
   QString  toUpper(QLocale* theWrappedObject, const QString&  str) const;
   QStringList  uiLanguages(QLocale* theWrappedObject) const;
   QList<Qt::DayOfWeek >  weekdays(QLocale* theWrappedObject) const;
   QChar  zeroDigit(QLocale* theWrappedObject) const;
    QString py_toString(QLocale*);
};





class PythonQtWrapper_QPoint : public QObject
{ Q_OBJECT
public:
public slots:
QPoint* new_QPoint();
QPoint* new_QPoint(int  xpos, int  ypos);
QPoint* new_QPoint(const QPoint& other) {
QPoint* a = new QPoint();
*((QPoint*)a) = other;
return a; }
void delete_QPoint(QPoint* obj) { delete obj; } 
   int  static_QPoint_dotProduct(const QPoint&  p1, const QPoint&  p2);
   bool  isNull(QPoint* theWrappedObject) const;
   int  manhattanLength(QPoint* theWrappedObject) const;
   QPoint  __mul__(QPoint* theWrappedObject, const QMatrix&  m);
   QPoint  __mul__(QPoint* theWrappedObject, const QMatrix4x4&  matrix);
   QPoint  __mul__(QPoint* theWrappedObject, const QTransform&  m);
   const QPoint  __mul__(QPoint* theWrappedObject, double  factor);
   const QPoint  __mul__(QPoint* theWrappedObject, float  factor);
   const QPoint  __mul__(QPoint* theWrappedObject, int  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, double  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, float  factor);
   QPoint*  __imul__(QPoint* theWrappedObject, int  factor);
   const QPoint  __add__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint*  __iadd__(QPoint* theWrappedObject, const QPoint&  p);
   const QPoint  __sub__(QPoint* theWrappedObject, const QPoint&  p2);
   QPoint*  __isub__(QPoint* theWrappedObject, const QPoint&  p);
   const QPoint  __div__(QPoint* theWrappedObject, qreal  c);
   QPoint*  __idiv__(QPoint* theWrappedObject, qreal  divisor);
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPoint* theWrappedObject, const QPoint&  p2);
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
   void setX(QPoint* theWrappedObject, int  x);
   void setY(QPoint* theWrappedObject, int  y);
   int  x(QPoint* theWrappedObject) const;
   int  y(QPoint* theWrappedObject) const;
    QString py_toString(QPoint*);
    bool __nonzero__(QPoint* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QPointF : public QObject
{ Q_OBJECT
public:
public slots:
QPointF* new_QPointF();
QPointF* new_QPointF(const QPoint&  p);
QPointF* new_QPointF(qreal  xpos, qreal  ypos);
QPointF* new_QPointF(const QPointF& other) {
QPointF* a = new QPointF();
*((QPointF*)a) = other;
return a; }
void delete_QPointF(QPointF* obj) { delete obj; } 
   qreal  static_QPointF_dotProduct(const QPointF&  p1, const QPointF&  p2);
   bool  isNull(QPointF* theWrappedObject) const;
   qreal  manhattanLength(QPointF* theWrappedObject) const;
   QPointF  __mul__(QPointF* theWrappedObject, const QMatrix&  m);
   QPointF  __mul__(QPointF* theWrappedObject, const QMatrix4x4&  matrix);
   QPointF  __mul__(QPointF* theWrappedObject, const QTransform&  m);
   const QPointF  __mul__(QPointF* theWrappedObject, qreal  c);
   QPointF*  __imul__(QPointF* theWrappedObject, qreal  c);
   const QPointF  __add__(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __iadd__(QPointF* theWrappedObject, const QPointF&  p);
   const QPointF  __sub__(QPointF* theWrappedObject, const QPointF&  p2);
   QPointF*  __isub__(QPointF* theWrappedObject, const QPointF&  p);
   const QPointF  __div__(QPointF* theWrappedObject, qreal  divisor);
   QPointF*  __idiv__(QPointF* theWrappedObject, qreal  c);
   void writeTo(QPointF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QPointF* theWrappedObject, const QPointF&  p2);
   void readFrom(QPointF* theWrappedObject, QDataStream&  arg__1);
   void setX(QPointF* theWrappedObject, qreal  x);
   void setY(QPointF* theWrappedObject, qreal  y);
   QPoint  toPoint(QPointF* theWrappedObject) const;
   qreal  x(QPointF* theWrappedObject) const;
   qreal  y(QPointF* theWrappedObject) const;
    QString py_toString(QPointF*);
    bool __nonzero__(QPointF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRect : public QObject
{ Q_OBJECT
public:
public slots:
QRect* new_QRect();
QRect* new_QRect(const QPoint&  topleft, const QPoint&  bottomright);
QRect* new_QRect(const QPoint&  topleft, const QSize&  size);
QRect* new_QRect(int  left, int  top, int  width, int  height);
QRect* new_QRect(const QRect& other) {
QRect* a = new QRect();
*((QRect*)a) = other;
return a; }
void delete_QRect(QRect* obj) { delete obj; } 
   void adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   QRect  adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const;
   int  bottom(QRect* theWrappedObject) const;
   QPoint  bottomLeft(QRect* theWrappedObject) const;
   QPoint  bottomRight(QRect* theWrappedObject) const;
   QPoint  center(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, const QPoint&  p, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, const QRect&  r, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const;
   int  height(QRect* theWrappedObject) const;
   QRect  intersected(QRect* theWrappedObject, const QRect&  other) const;
   bool  intersects(QRect* theWrappedObject, const QRect&  r) const;
   bool  isEmpty(QRect* theWrappedObject) const;
   bool  isNull(QRect* theWrappedObject) const;
   bool  isValid(QRect* theWrappedObject) const;
   int  left(QRect* theWrappedObject) const;
   QRect  marginsAdded(QRect* theWrappedObject, const QMargins&  margins) const;
   QRect  marginsRemoved(QRect* theWrappedObject, const QMargins&  margins) const;
   void moveBottom(QRect* theWrappedObject, int  pos);
   void moveBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void moveCenter(QRect* theWrappedObject, const QPoint&  p);
   void moveLeft(QRect* theWrappedObject, int  pos);
   void moveRight(QRect* theWrappedObject, int  pos);
   void moveTo(QRect* theWrappedObject, const QPoint&  p);
   void moveTo(QRect* theWrappedObject, int  x, int  t);
   void moveTop(QRect* theWrappedObject, int  pos);
   void moveTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveTopRight(QRect* theWrappedObject, const QPoint&  p);
   QRect  normalized(QRect* theWrappedObject) const;
   QRect  __and__(QRect* theWrappedObject, const QRect&  r) const;
   QRect*  __iand__(QRect* theWrappedObject, const QRect&  r);
   QRect  __add__(QRect* theWrappedObject, const QMargins&  margins);
   QRect*  __iadd__(QRect* theWrappedObject, const QMargins&  margins);
   QRect  __sub__(QRect* theWrappedObject, const QMargins&  rhs);
   QRect*  __isub__(QRect* theWrappedObject, const QMargins&  margins);
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QRect* theWrappedObject, const QRect&  arg__2);
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
   QRect  __or__(QRect* theWrappedObject, const QRect&  r) const;
   QRect*  __ior__(QRect* theWrappedObject, const QRect&  r);
   int  right(QRect* theWrappedObject) const;
   void setBottom(QRect* theWrappedObject, int  pos);
   void setBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void setBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setHeight(QRect* theWrappedObject, int  h);
   void setLeft(QRect* theWrappedObject, int  pos);
   void setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h);
   void setRight(QRect* theWrappedObject, int  pos);
   void setSize(QRect* theWrappedObject, const QSize&  s);
   void setTop(QRect* theWrappedObject, int  pos);
   void setTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void setTopRight(QRect* theWrappedObject, const QPoint&  p);
   void setWidth(QRect* theWrappedObject, int  w);
   void setX(QRect* theWrappedObject, int  x);
   void setY(QRect* theWrappedObject, int  y);
   QSize  size(QRect* theWrappedObject) const;
   int  top(QRect* theWrappedObject) const;
   QPoint  topLeft(QRect* theWrappedObject) const;
   QPoint  topRight(QRect* theWrappedObject) const;
   void translate(QRect* theWrappedObject, const QPoint&  p);
   void translate(QRect* theWrappedObject, int  dx, int  dy);
   QRect  translated(QRect* theWrappedObject, const QPoint&  p) const;
   QRect  translated(QRect* theWrappedObject, int  dx, int  dy) const;
   QRect  united(QRect* theWrappedObject, const QRect&  other) const;
   int  width(QRect* theWrappedObject) const;
   int  x(QRect* theWrappedObject) const;
   int  y(QRect* theWrappedObject) const;
    QString py_toString(QRect*);
    bool __nonzero__(QRect* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRectF : public QObject
{ Q_OBJECT
public:
public slots:
QRectF* new_QRectF();
QRectF* new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight);
QRectF* new_QRectF(const QPointF&  topleft, const QSizeF&  size);
QRectF* new_QRectF(const QRect&  rect);
QRectF* new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height);
QRectF* new_QRectF(const QRectF& other) {
QRectF* a = new QRectF();
*((QRectF*)a) = other;
return a; }
void delete_QRectF(QRectF* obj) { delete obj; } 
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   qreal  bottom(QRectF* theWrappedObject) const;
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   QPointF  center(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   qreal  height(QRectF* theWrappedObject) const;
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  isEmpty(QRectF* theWrappedObject) const;
   bool  isNull(QRectF* theWrappedObject) const;
   bool  isValid(QRectF* theWrappedObject) const;
   qreal  left(QRectF* theWrappedObject) const;
   QRectF  marginsAdded(QRectF* theWrappedObject, const QMarginsF&  margins) const;
   QRectF  marginsRemoved(QRectF* theWrappedObject, const QMarginsF&  margins) const;
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  y);
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  normalized(QRectF* theWrappedObject) const;
   QRectF  __and__(QRectF* theWrappedObject, const QRectF&  r) const;
   QRectF*  __iand__(QRectF* theWrappedObject, const QRectF&  r);
   QRectF  __add__(QRectF* theWrappedObject, const QMarginsF&  rhs);
   QRectF*  __iadd__(QRectF* theWrappedObject, const QMarginsF&  margins);
   QRectF  __sub__(QRectF* theWrappedObject, const QMarginsF&  rhs);
   QRectF*  __isub__(QRectF* theWrappedObject, const QMarginsF&  margins);
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QRectF* theWrappedObject, const QRectF&  arg__2);
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRectF  __or__(QRectF* theWrappedObject, const QRectF&  r) const;
   QRectF*  __ior__(QRectF* theWrappedObject, const QRectF&  r);
   qreal  right(QRectF* theWrappedObject) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setHeight(QRectF* theWrappedObject, qreal  h);
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setRight(QRectF* theWrappedObject, qreal  pos);
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   void setWidth(QRectF* theWrappedObject, qreal  w);
   void setX(QRectF* theWrappedObject, qreal  pos);
   void setY(QRectF* theWrappedObject, qreal  pos);
   QSizeF  size(QRectF* theWrappedObject) const;
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   QRect  toRect(QRectF* theWrappedObject) const;
   qreal  top(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   QPointF  topRight(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   qreal  width(QRectF* theWrappedObject) const;
   qreal  x(QRectF* theWrappedObject) const;
   qreal  y(QRectF* theWrappedObject) const;
    QString py_toString(QRectF*);
    bool __nonzero__(QRectF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QRegExp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CaretMode PatternSyntax )
enum CaretMode{
  CaretAtZero = QRegExp::CaretAtZero,   CaretAtOffset = QRegExp::CaretAtOffset,   CaretWontMatch = QRegExp::CaretWontMatch};
enum PatternSyntax{
  RegExp = QRegExp::RegExp,   Wildcard = QRegExp::Wildcard,   FixedString = QRegExp::FixedString,   RegExp2 = QRegExp::RegExp2,   WildcardUnix = QRegExp::WildcardUnix,   W3CXmlSchema11 = QRegExp::W3CXmlSchema11};
public slots:
QRegExp* new_QRegExp();
QRegExp* new_QRegExp(const QRegExp&  rx);
QRegExp* new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive, QRegExp::PatternSyntax  syntax = QRegExp::RegExp);
void delete_QRegExp(QRegExp* obj) { delete obj; } 
   QString  cap(QRegExp* theWrappedObject, int  nth = 0);
   int  captureCount(QRegExp* theWrappedObject) const;
   QStringList  capturedTexts(QRegExp* theWrappedObject);
   Qt::CaseSensitivity  caseSensitivity(QRegExp* theWrappedObject) const;
   QString  errorString(QRegExp* theWrappedObject);
   QString  static_QRegExp_escape(const QString&  str);
   bool  exactMatch(QRegExp* theWrappedObject, const QString&  str) const;
   int  indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = 0, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   bool  isEmpty(QRegExp* theWrappedObject) const;
   bool  isMinimal(QRegExp* theWrappedObject) const;
   bool  isValid(QRegExp* theWrappedObject) const;
   int  lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = -1, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   int  matchedLength(QRegExp* theWrappedObject) const;
   bool  __ne__(QRegExp* theWrappedObject, const QRegExp&  rx) const;
   void writeTo(QRegExp* theWrappedObject, QDataStream&  out);
   bool  __eq__(QRegExp* theWrappedObject, const QRegExp&  rx) const;
   void readFrom(QRegExp* theWrappedObject, QDataStream&  in);
   QString  pattern(QRegExp* theWrappedObject) const;
   QRegExp::PatternSyntax  patternSyntax(QRegExp* theWrappedObject) const;
   int  pos(QRegExp* theWrappedObject, int  nth = 0);
   void setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs);
   void setMinimal(QRegExp* theWrappedObject, bool  minimal);
   void setPattern(QRegExp* theWrappedObject, const QString&  pattern);
   void setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax);
   void swap(QRegExp* theWrappedObject, QRegExp&  other);
    QString py_toString(QRegExp*);
};





class PythonQtWrapper_QSize : public QObject
{ Q_OBJECT
public:
public slots:
QSize* new_QSize();
QSize* new_QSize(int  w, int  h);
QSize* new_QSize(const QSize& other) {
QSize* a = new QSize();
*((QSize*)a) = other;
return a; }
void delete_QSize(QSize* obj) { delete obj; } 
   QSize  boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   QSize  expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const;
   int  height(QSize* theWrappedObject) const;
   bool  isEmpty(QSize* theWrappedObject) const;
   bool  isNull(QSize* theWrappedObject) const;
   bool  isValid(QSize* theWrappedObject) const;
   const QSize  __mul__(QSize* theWrappedObject, qreal  c);
   QSize*  __imul__(QSize* theWrappedObject, qreal  c);
   const QSize  __add__(QSize* theWrappedObject, const QSize&  s2);
   QSize*  __iadd__(QSize* theWrappedObject, const QSize&  arg__1);
   const QSize  __sub__(QSize* theWrappedObject, const QSize&  s2);
   QSize*  __isub__(QSize* theWrappedObject, const QSize&  arg__1);
   const QSize  __div__(QSize* theWrappedObject, qreal  c);
   QSize*  __idiv__(QSize* theWrappedObject, qreal  c);
   void writeTo(QSize* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QSize* theWrappedObject, const QSize&  s2);
   void readFrom(QSize* theWrappedObject, QDataStream&  arg__1);
   void scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode);
   void scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode);
   QSize  scaled(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode) const;
   QSize  scaled(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode) const;
   void setHeight(QSize* theWrappedObject, int  h);
   void setWidth(QSize* theWrappedObject, int  w);
   void transpose(QSize* theWrappedObject);
   QSize  transposed(QSize* theWrappedObject) const;
   int  width(QSize* theWrappedObject) const;
    QString py_toString(QSize*);
    bool __nonzero__(QSize* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QSizeF : public QObject
{ Q_OBJECT
public:
public slots:
QSizeF* new_QSizeF();
QSizeF* new_QSizeF(const QSize&  sz);
QSizeF* new_QSizeF(qreal  w, qreal  h);
QSizeF* new_QSizeF(const QSizeF& other) {
QSizeF* a = new QSizeF();
*((QSizeF*)a) = other;
return a; }
void delete_QSizeF(QSizeF* obj) { delete obj; } 
   QSizeF  boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   QSizeF  expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const;
   qreal  height(QSizeF* theWrappedObject) const;
   bool  isEmpty(QSizeF* theWrappedObject) const;
   bool  isNull(QSizeF* theWrappedObject) const;
   bool  isValid(QSizeF* theWrappedObject) const;
   const QSizeF  __mul__(QSizeF* theWrappedObject, qreal  c);
   QSizeF*  __imul__(QSizeF* theWrappedObject, qreal  c);
   const QSizeF  __add__(QSizeF* theWrappedObject, const QSizeF&  s2);
   QSizeF*  __iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   const QSizeF  __sub__(QSizeF* theWrappedObject, const QSizeF&  s2);
   QSizeF*  __isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1);
   const QSizeF  __div__(QSizeF* theWrappedObject, qreal  c);
   QSizeF*  __idiv__(QSizeF* theWrappedObject, qreal  c);
   void writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QSizeF* theWrappedObject, const QSizeF&  s2);
   void readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1);
   void scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode);
   void scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode);
   QSizeF  scaled(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode) const;
   QSizeF  scaled(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode) const;
   void setHeight(QSizeF* theWrappedObject, qreal  h);
   void setWidth(QSizeF* theWrappedObject, qreal  w);
   QSize  toSize(QSizeF* theWrappedObject) const;
   void transpose(QSizeF* theWrappedObject);
   QSizeF  transposed(QSizeF* theWrappedObject) const;
   qreal  width(QSizeF* theWrappedObject) const;
    QString py_toString(QSizeF*);
    bool __nonzero__(QSizeF* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QTime : public QObject
{ Q_OBJECT
public:
public slots:
QTime* new_QTime();
QTime* new_QTime(int  h, int  m, int  s = 0, int  ms = 0);
QTime* new_QTime(const QTime& other) {
QTime* a = new QTime();
*((QTime*)a) = other;
return a; }
void delete_QTime(QTime* obj) { delete obj; } 
   QTime  addMSecs(QTime* theWrappedObject, int  ms) const;
   QTime  addSecs(QTime* theWrappedObject, int  secs) const;
   QTime  static_QTime_currentTime();
   int  elapsed(QTime* theWrappedObject) const;
   QTime  static_QTime_fromMSecsSinceStartOfDay(int  msecs);
   QTime  static_QTime_fromString(const QString&  s, Qt::DateFormat  f = Qt::TextDate);
   QTime  static_QTime_fromString(const QString&  s, const QString&  format);
   int  hour(QTime* theWrappedObject) const;
   bool  isNull(QTime* theWrappedObject) const;
   bool  isValid(QTime* theWrappedObject) const;
   bool  static_QTime_isValid(int  h, int  m, int  s, int  ms = 0);
   int  minute(QTime* theWrappedObject) const;
   int  msec(QTime* theWrappedObject) const;
   int  msecsSinceStartOfDay(QTime* theWrappedObject) const;
   int  msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  __ne__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __lt__(QTime* theWrappedObject, const QTime&  other) const;
   void writeTo(QTime* theWrappedObject, QDataStream&  arg__1);
   bool  __le__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __eq__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __gt__(QTime* theWrappedObject, const QTime&  other) const;
   bool  __ge__(QTime* theWrappedObject, const QTime&  other) const;
   void readFrom(QTime* theWrappedObject, QDataStream&  arg__1);
   int  restart(QTime* theWrappedObject);
   int  second(QTime* theWrappedObject) const;
   int  secsTo(QTime* theWrappedObject, const QTime&  arg__1) const;
   bool  setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms = 0);
   void start(QTime* theWrappedObject);
   QString  toString(QTime* theWrappedObject, Qt::DateFormat  f = Qt::TextDate) const;
   QString  toString(QTime* theWrappedObject, const QString&  format) const;
    QString py_toString(QTime*);
    bool __nonzero__(QTime* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QUrl : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ComponentFormattingOption ParsingMode UrlFormattingOption )
Q_FLAGS(ComponentFormattingOptions )
enum ComponentFormattingOption{
  PrettyDecoded = QUrl::PrettyDecoded,   EncodeSpaces = QUrl::EncodeSpaces,   EncodeUnicode = QUrl::EncodeUnicode,   EncodeDelimiters = QUrl::EncodeDelimiters,   EncodeReserved = QUrl::EncodeReserved,   DecodeReserved = QUrl::DecodeReserved,   FullyEncoded = QUrl::FullyEncoded,   FullyDecoded = QUrl::FullyDecoded};
enum ParsingMode{
  TolerantMode = QUrl::TolerantMode,   StrictMode = QUrl::StrictMode,   DecodedMode = QUrl::DecodedMode};
enum UrlFormattingOption{
  None = QUrl::None,   RemoveScheme = QUrl::RemoveScheme,   RemovePassword = QUrl::RemovePassword,   RemoveUserInfo = QUrl::RemoveUserInfo,   RemovePort = QUrl::RemovePort,   RemoveAuthority = QUrl::RemoveAuthority,   RemovePath = QUrl::RemovePath,   RemoveQuery = QUrl::RemoveQuery,   RemoveFragment = QUrl::RemoveFragment,   PreferLocalFile = QUrl::PreferLocalFile,   StripTrailingSlash = QUrl::StripTrailingSlash,   RemoveFilename = QUrl::RemoveFilename,   NormalizePathSegments = QUrl::NormalizePathSegments};
Q_DECLARE_FLAGS(ComponentFormattingOptions, ComponentFormattingOption)
public slots:
QUrl* new_QUrl();
QUrl* new_QUrl(const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
QUrl* new_QUrl(const QUrl&  copy);
void delete_QUrl(QUrl* obj) { delete obj; } 
   QUrl  adjusted(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const;
   QString  authority(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   void clear(QUrl* theWrappedObject);
   QString  errorString(QUrl* theWrappedObject) const;
   QString  fileName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
   QString  fragment(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   QString  static_QUrl_fromAce(const QByteArray&  arg__1);
   QUrl  static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   QUrl  static_QUrl_fromLocalFile(const QString&  localfile);
   QString  static_QUrl_fromPercentEncoding(const QByteArray&  arg__1);
   QList<QUrl >  static_QUrl_fromStringList(const QStringList&  uris, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   QUrl  static_QUrl_fromUserInput(const QString&  userInput);
   bool  hasFragment(QUrl* theWrappedObject) const;
   bool  hasQuery(QUrl* theWrappedObject) const;
   QString  host(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::FullyDecoded) const;
   QStringList  static_QUrl_idnWhitelist();
   bool  isEmpty(QUrl* theWrappedObject) const;
   bool  isLocalFile(QUrl* theWrappedObject) const;
   bool  isParentOf(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  isRelative(QUrl* theWrappedObject) const;
   bool  isValid(QUrl* theWrappedObject) const;
   bool  matches(QUrl* theWrappedObject, const QUrl&  url, QUrl::FormattingOptions  options) const;
   bool  __ne__(QUrl* theWrappedObject, const QUrl&  url) const;
   bool  __lt__(QUrl* theWrappedObject, const QUrl&  url) const;
   void writeTo(QUrl* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QUrl* theWrappedObject, const QUrl&  url) const;
   void readFrom(QUrl* theWrappedObject, QDataStream&  arg__1);
   QString  password(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::FullyDecoded) const;
   QString  path(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
   int  port(QUrl* theWrappedObject, int  defaultPort = -1) const;
   QString  query(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1 = QUrl::PrettyDecoded) const;
   QUrl  resolved(QUrl* theWrappedObject, const QUrl&  relative) const;
   QString  scheme(QUrl* theWrappedObject) const;
   void setAuthority(QUrl* theWrappedObject, const QString&  authority, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setFragment(QUrl* theWrappedObject, const QString&  fragment, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setHost(QUrl* theWrappedObject, const QString&  host, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void static_QUrl_setIdnWhitelist(const QStringList&  arg__1);
   void setPassword(QUrl* theWrappedObject, const QString&  password, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void setPath(QUrl* theWrappedObject, const QString&  path, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void setPort(QUrl* theWrappedObject, int  port);
   void setQuery(QUrl* theWrappedObject, const QString&  query, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setQuery(QUrl* theWrappedObject, const QUrlQuery&  query);
   void setScheme(QUrl* theWrappedObject, const QString&  scheme);
   void setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setUserInfo(QUrl* theWrappedObject, const QString&  userInfo, QUrl::ParsingMode  mode = QUrl::TolerantMode);
   void setUserName(QUrl* theWrappedObject, const QString&  userName, QUrl::ParsingMode  mode = QUrl::DecodedMode);
   void swap(QUrl* theWrappedObject, QUrl&  other);
   QByteArray  static_QUrl_toAce(const QString&  arg__1);
   QString  toDisplayString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QByteArray  toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FullyEncoded) const;
   QString  toLocalFile(QUrl* theWrappedObject) const;
   QByteArray  static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray());
   QString  toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QStringList  static_QUrl_toStringList(const QList<QUrl >&  uris, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded));
   QString  topLevelDomain(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
   QString  url(QUrl* theWrappedObject, QUrl::FormattingOptions  options = QUrl::FormattingOptions(PrettyDecoded)) const;
   QString  userInfo(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::PrettyDecoded) const;
   QString  userName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options = QUrl::FullyDecoded) const;
    QString py_toString(QUrl*);
};





class PythonQtWrapper_Qt : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AlignmentFlag AnchorPoint ApplicationAttribute ApplicationState ArrowType AspectRatioMode Axis BGMode BrushStyle CaseSensitivity CheckState ClipOperation ConnectionType ContextMenuPolicy CoordinateSystem Corner CursorMoveStyle CursorShape DateFormat DayOfWeek DockWidgetArea DockWidgetAreaSizes DropAction Edge EventPriority FillRule FindChildOption FocusPolicy FocusReason GestureFlag GestureState GestureType GlobalColor HitTestAccuracy ImageConversionFlag InputMethodHint InputMethodQuery ItemDataRole ItemFlag ItemSelectionMode Key KeyboardModifier LayoutDirection MaskMode MatchFlag MouseButton MouseEventFlag MouseEventSource NativeGestureType NavigationMode Orientation PenCapStyle PenJoinStyle PenStyle ScreenOrientation ScrollBarPolicy ScrollPhase ShortcutContext SizeHint SizeMode SortOrder TextElideMode TextFlag TextFormat TextInteractionFlag TileRule TimeSpec TimerType ToolBarArea ToolBarAreaSizes ToolButtonStyle TouchPointState TransformationMode UIEffect WhiteSpaceMode WidgetAttribute WindowFrameSection WindowModality WindowState WindowType )
Q_FLAGS(Alignment DockWidgetAreas DropActions FindChildOptions GestureFlags ImageConversionFlags InputMethodHints InputMethodQueries ItemFlags KeyboardModifiers MatchFlags MouseButtons MouseEventFlags Orientations ScreenOrientations TextInteractionFlags ToolBarAreas TouchPointStates WindowStates WindowFlags )
enum AlignmentFlag{
  AlignLeft = Qt::AlignLeft,   AlignLeading = Qt::AlignLeading,   AlignRight = Qt::AlignRight,   AlignTrailing = Qt::AlignTrailing,   AlignHCenter = Qt::AlignHCenter,   AlignJustify = Qt::AlignJustify,   AlignAbsolute = Qt::AlignAbsolute,   AlignHorizontal_Mask = Qt::AlignHorizontal_Mask,   AlignTop = Qt::AlignTop,   AlignBottom = Qt::AlignBottom,   AlignVCenter = Qt::AlignVCenter,   AlignBaseline = Qt::AlignBaseline,   AlignVertical_Mask = Qt::AlignVertical_Mask,   AlignCenter = Qt::AlignCenter};
enum AnchorPoint{
  AnchorLeft = Qt::AnchorLeft,   AnchorHorizontalCenter = Qt::AnchorHorizontalCenter,   AnchorRight = Qt::AnchorRight,   AnchorTop = Qt::AnchorTop,   AnchorVerticalCenter = Qt::AnchorVerticalCenter,   AnchorBottom = Qt::AnchorBottom};
enum ApplicationAttribute{
  AA_ImmediateWidgetCreation = Qt::AA_ImmediateWidgetCreation,   AA_MSWindowsUseDirect3DByDefault = Qt::AA_MSWindowsUseDirect3DByDefault,   AA_DontShowIconsInMenus = Qt::AA_DontShowIconsInMenus,   AA_NativeWindows = Qt::AA_NativeWindows,   AA_DontCreateNativeWidgetSiblings = Qt::AA_DontCreateNativeWidgetSiblings,   AA_MacPluginApplication = Qt::AA_MacPluginApplication,   AA_DontUseNativeMenuBar = Qt::AA_DontUseNativeMenuBar,   AA_MacDontSwapCtrlAndMeta = Qt::AA_MacDontSwapCtrlAndMeta,   AA_Use96Dpi = Qt::AA_Use96Dpi,   AA_X11InitThreads = Qt::AA_X11InitThreads,   AA_SynthesizeTouchForUnhandledMouseEvents = Qt::AA_SynthesizeTouchForUnhandledMouseEvents,   AA_SynthesizeMouseForUnhandledTouchEvents = Qt::AA_SynthesizeMouseForUnhandledTouchEvents,   AA_UseHighDpiPixmaps = Qt::AA_UseHighDpiPixmaps,   AA_ForceRasterWidgets = Qt::AA_ForceRasterWidgets,   AA_UseDesktopOpenGL = Qt::AA_UseDesktopOpenGL,   AA_UseOpenGLES = Qt::AA_UseOpenGLES,   AA_AttributeCount = Qt::AA_AttributeCount};
enum ApplicationState{
  ApplicationSuspended = Qt::ApplicationSuspended,   ApplicationHidden = Qt::ApplicationHidden,   ApplicationInactive = Qt::ApplicationInactive,   ApplicationActive = Qt::ApplicationActive};
enum ArrowType{
  NoArrow = Qt::NoArrow,   UpArrow = Qt::UpArrow,   DownArrow = Qt::DownArrow,   LeftArrow = Qt::LeftArrow,   RightArrow = Qt::RightArrow};
enum AspectRatioMode{
  IgnoreAspectRatio = Qt::IgnoreAspectRatio,   KeepAspectRatio = Qt::KeepAspectRatio,   KeepAspectRatioByExpanding = Qt::KeepAspectRatioByExpanding};
enum Axis{
  XAxis = Qt::XAxis,   YAxis = Qt::YAxis,   ZAxis = Qt::ZAxis};
enum BGMode{
  TransparentMode = Qt::TransparentMode,   OpaqueMode = Qt::OpaqueMode};
enum BrushStyle{
  NoBrush = Qt::NoBrush,   SolidPattern = Qt::SolidPattern,   Dense1Pattern = Qt::Dense1Pattern,   Dense2Pattern = Qt::Dense2Pattern,   Dense3Pattern = Qt::Dense3Pattern,   Dense4Pattern = Qt::Dense4Pattern,   Dense5Pattern = Qt::Dense5Pattern,   Dense6Pattern = Qt::Dense6Pattern,   Dense7Pattern = Qt::Dense7Pattern,   HorPattern = Qt::HorPattern,   VerPattern = Qt::VerPattern,   CrossPattern = Qt::CrossPattern,   BDiagPattern = Qt::BDiagPattern,   FDiagPattern = Qt::FDiagPattern,   DiagCrossPattern = Qt::DiagCrossPattern,   LinearGradientPattern = Qt::LinearGradientPattern,   RadialGradientPattern = Qt::RadialGradientPattern,   ConicalGradientPattern = Qt::ConicalGradientPattern,   TexturePattern = Qt::TexturePattern};
enum CaseSensitivity{
  CaseInsensitive = Qt::CaseInsensitive,   CaseSensitive = Qt::CaseSensitive};
enum CheckState{
  Unchecked = Qt::Unchecked,   PartiallyChecked = Qt::PartiallyChecked,   Checked = Qt::Checked};
enum ClipOperation{
  NoClip = Qt::NoClip,   ReplaceClip = Qt::ReplaceClip,   IntersectClip = Qt::IntersectClip};
enum ConnectionType{
  AutoConnection = Qt::AutoConnection,   DirectConnection = Qt::DirectConnection,   QueuedConnection = Qt::QueuedConnection,   BlockingQueuedConnection = Qt::BlockingQueuedConnection,   UniqueConnection = Qt::UniqueConnection};
enum ContextMenuPolicy{
  NoContextMenu = Qt::NoContextMenu,   DefaultContextMenu = Qt::DefaultContextMenu,   ActionsContextMenu = Qt::ActionsContextMenu,   CustomContextMenu = Qt::CustomContextMenu,   PreventContextMenu = Qt::PreventContextMenu};
enum CoordinateSystem{
  DeviceCoordinates = Qt::DeviceCoordinates,   LogicalCoordinates = Qt::LogicalCoordinates};
enum Corner{
  TopLeftCorner = Qt::TopLeftCorner,   TopRightCorner = Qt::TopRightCorner,   BottomLeftCorner = Qt::BottomLeftCorner,   BottomRightCorner = Qt::BottomRightCorner};
enum CursorMoveStyle{
  LogicalMoveStyle = Qt::LogicalMoveStyle,   VisualMoveStyle = Qt::VisualMoveStyle};
enum CursorShape{
  ArrowCursor = Qt::ArrowCursor,   UpArrowCursor = Qt::UpArrowCursor,   CrossCursor = Qt::CrossCursor,   WaitCursor = Qt::WaitCursor,   IBeamCursor = Qt::IBeamCursor,   SizeVerCursor = Qt::SizeVerCursor,   SizeHorCursor = Qt::SizeHorCursor,   SizeBDiagCursor = Qt::SizeBDiagCursor,   SizeFDiagCursor = Qt::SizeFDiagCursor,   SizeAllCursor = Qt::SizeAllCursor,   BlankCursor = Qt::BlankCursor,   SplitVCursor = Qt::SplitVCursor,   SplitHCursor = Qt::SplitHCursor,   PointingHandCursor = Qt::PointingHandCursor,   ForbiddenCursor = Qt::ForbiddenCursor,   WhatsThisCursor = Qt::WhatsThisCursor,   BusyCursor = Qt::BusyCursor,   OpenHandCursor = Qt::OpenHandCursor,   ClosedHandCursor = Qt::ClosedHandCursor,   DragCopyCursor = Qt::DragCopyCursor,   DragMoveCursor = Qt::DragMoveCursor,   DragLinkCursor = Qt::DragLinkCursor,   LastCursor = Qt::LastCursor,   BitmapCursor = Qt::BitmapCursor,   CustomCursor = Qt::CustomCursor};
enum DateFormat{
  TextDate = Qt::TextDate,   ISODate = Qt::ISODate,   SystemLocaleDate = Qt::SystemLocaleDate,   LocalDate = Qt::LocalDate,   LocaleDate = Qt::LocaleDate,   SystemLocaleShortDate = Qt::SystemLocaleShortDate,   SystemLocaleLongDate = Qt::SystemLocaleLongDate,   DefaultLocaleShortDate = Qt::DefaultLocaleShortDate,   DefaultLocaleLongDate = Qt::DefaultLocaleLongDate,   RFC2822Date = Qt::RFC2822Date};
enum DayOfWeek{
  Monday = Qt::Monday,   Tuesday = Qt::Tuesday,   Wednesday = Qt::Wednesday,   Thursday = Qt::Thursday,   Friday = Qt::Friday,   Saturday = Qt::Saturday,   Sunday = Qt::Sunday};
enum DockWidgetArea{
  LeftDockWidgetArea = Qt::LeftDockWidgetArea,   RightDockWidgetArea = Qt::RightDockWidgetArea,   TopDockWidgetArea = Qt::TopDockWidgetArea,   BottomDockWidgetArea = Qt::BottomDockWidgetArea,   DockWidgetArea_Mask = Qt::DockWidgetArea_Mask,   AllDockWidgetAreas = Qt::AllDockWidgetAreas,   NoDockWidgetArea = Qt::NoDockWidgetArea};
enum DockWidgetAreaSizes{
  NDockWidgetAreas = Qt::NDockWidgetAreas};
enum DropAction{
  CopyAction = Qt::CopyAction,   MoveAction = Qt::MoveAction,   LinkAction = Qt::LinkAction,   ActionMask = Qt::ActionMask,   TargetMoveAction = Qt::TargetMoveAction,   IgnoreAction = Qt::IgnoreAction};
enum Edge{
  TopEdge = Qt::TopEdge,   LeftEdge = Qt::LeftEdge,   RightEdge = Qt::RightEdge,   BottomEdge = Qt::BottomEdge};
enum EventPriority{
  HighEventPriority = Qt::HighEventPriority,   NormalEventPriority = Qt::NormalEventPriority,   LowEventPriority = Qt::LowEventPriority};
enum FillRule{
  OddEvenFill = Qt::OddEvenFill,   WindingFill = Qt::WindingFill};
enum FindChildOption{
  FindDirectChildrenOnly = Qt::FindDirectChildrenOnly,   FindChildrenRecursively = Qt::FindChildrenRecursively};
enum FocusPolicy{
  NoFocus = Qt::NoFocus,   TabFocus = Qt::TabFocus,   ClickFocus = Qt::ClickFocus,   StrongFocus = Qt::StrongFocus,   WheelFocus = Qt::WheelFocus};
enum FocusReason{
  MouseFocusReason = Qt::MouseFocusReason,   TabFocusReason = Qt::TabFocusReason,   BacktabFocusReason = Qt::BacktabFocusReason,   ActiveWindowFocusReason = Qt::ActiveWindowFocusReason,   PopupFocusReason = Qt::PopupFocusReason,   ShortcutFocusReason = Qt::ShortcutFocusReason,   MenuBarFocusReason = Qt::MenuBarFocusReason,   OtherFocusReason = Qt::OtherFocusReason,   NoFocusReason = Qt::NoFocusReason};
enum GestureFlag{
  DontStartGestureOnChildren = Qt::DontStartGestureOnChildren,   ReceivePartialGestures = Qt::ReceivePartialGestures,   IgnoredGesturesPropagateToParent = Qt::IgnoredGesturesPropagateToParent};
enum GestureState{
  NoGesture = Qt::NoGesture,   GestureStarted = Qt::GestureStarted,   GestureUpdated = Qt::GestureUpdated,   GestureFinished = Qt::GestureFinished,   GestureCanceled = Qt::GestureCanceled};
enum GestureType{
  TapGesture = Qt::TapGesture,   TapAndHoldGesture = Qt::TapAndHoldGesture,   PanGesture = Qt::PanGesture,   PinchGesture = Qt::PinchGesture,   SwipeGesture = Qt::SwipeGesture,   CustomGesture = Qt::CustomGesture,   LastGestureType = Qt::LastGestureType};
enum GlobalColor{
  color0 = Qt::color0,   color1 = Qt::color1,   black = Qt::black,   white = Qt::white,   darkGray = Qt::darkGray,   gray = Qt::gray,   lightGray = Qt::lightGray,   red = Qt::red,   green = Qt::green,   blue = Qt::blue,   cyan = Qt::cyan,   magenta = Qt::magenta,   yellow = Qt::yellow,   darkRed = Qt::darkRed,   darkGreen = Qt::darkGreen,   darkBlue = Qt::darkBlue,   darkCyan = Qt::darkCyan,   darkMagenta = Qt::darkMagenta,   darkYellow = Qt::darkYellow,   transparent = Qt::transparent};
enum HitTestAccuracy{
  ExactHit = Qt::ExactHit,   FuzzyHit = Qt::FuzzyHit};
enum ImageConversionFlag{
  ColorMode_Mask = Qt::ColorMode_Mask,   AutoColor = Qt::AutoColor,   ColorOnly = Qt::ColorOnly,   MonoOnly = Qt::MonoOnly,   AlphaDither_Mask = Qt::AlphaDither_Mask,   ThresholdAlphaDither = Qt::ThresholdAlphaDither,   OrderedAlphaDither = Qt::OrderedAlphaDither,   DiffuseAlphaDither = Qt::DiffuseAlphaDither,   NoAlpha = Qt::NoAlpha,   Dither_Mask = Qt::Dither_Mask,   DiffuseDither = Qt::DiffuseDither,   OrderedDither = Qt::OrderedDither,   ThresholdDither = Qt::ThresholdDither,   DitherMode_Mask = Qt::DitherMode_Mask,   AutoDither = Qt::AutoDither,   PreferDither = Qt::PreferDither,   AvoidDither = Qt::AvoidDither,   NoOpaqueDetection = Qt::NoOpaqueDetection,   NoFormatConversion = Qt::NoFormatConversion};
enum InputMethodHint{
  ImhNone = Qt::ImhNone,   ImhHiddenText = Qt::ImhHiddenText,   ImhSensitiveData = Qt::ImhSensitiveData,   ImhNoAutoUppercase = Qt::ImhNoAutoUppercase,   ImhPreferNumbers = Qt::ImhPreferNumbers,   ImhPreferUppercase = Qt::ImhPreferUppercase,   ImhPreferLowercase = Qt::ImhPreferLowercase,   ImhNoPredictiveText = Qt::ImhNoPredictiveText,   ImhDate = Qt::ImhDate,   ImhTime = Qt::ImhTime,   ImhPreferLatin = Qt::ImhPreferLatin,   ImhMultiLine = Qt::ImhMultiLine,   ImhDigitsOnly = Qt::ImhDigitsOnly,   ImhFormattedNumbersOnly = Qt::ImhFormattedNumbersOnly,   ImhUppercaseOnly = Qt::ImhUppercaseOnly,   ImhLowercaseOnly = Qt::ImhLowercaseOnly,   ImhDialableCharactersOnly = Qt::ImhDialableCharactersOnly,   ImhEmailCharactersOnly = Qt::ImhEmailCharactersOnly,   ImhUrlCharactersOnly = Qt::ImhUrlCharactersOnly,   ImhLatinOnly = Qt::ImhLatinOnly,   ImhExclusiveInputMask = Qt::ImhExclusiveInputMask};
enum InputMethodQuery{
  ImEnabled = Qt::ImEnabled,   ImCursorRectangle = Qt::ImCursorRectangle,   ImMicroFocus = Qt::ImMicroFocus,   ImFont = Qt::ImFont,   ImCursorPosition = Qt::ImCursorPosition,   ImSurroundingText = Qt::ImSurroundingText,   ImCurrentSelection = Qt::ImCurrentSelection,   ImMaximumTextLength = Qt::ImMaximumTextLength,   ImAnchorPosition = Qt::ImAnchorPosition,   ImHints = Qt::ImHints,   ImPreferredLanguage = Qt::ImPreferredLanguage,   ImAbsolutePosition = Qt::ImAbsolutePosition,   ImTextBeforeCursor = Qt::ImTextBeforeCursor,   ImTextAfterCursor = Qt::ImTextAfterCursor,   ImPlatformData = Qt::ImPlatformData,   ImQueryInput = Qt::ImQueryInput,   ImQueryAll = Qt::ImQueryAll};
enum ItemDataRole{
  DisplayRole = Qt::DisplayRole,   DecorationRole = Qt::DecorationRole,   EditRole = Qt::EditRole,   ToolTipRole = Qt::ToolTipRole,   StatusTipRole = Qt::StatusTipRole,   WhatsThisRole = Qt::WhatsThisRole,   FontRole = Qt::FontRole,   TextAlignmentRole = Qt::TextAlignmentRole,   BackgroundColorRole = Qt::BackgroundColorRole,   BackgroundRole = Qt::BackgroundRole,   TextColorRole = Qt::TextColorRole,   ForegroundRole = Qt::ForegroundRole,   CheckStateRole = Qt::CheckStateRole,   AccessibleTextRole = Qt::AccessibleTextRole,   AccessibleDescriptionRole = Qt::AccessibleDescriptionRole,   SizeHintRole = Qt::SizeHintRole,   InitialSortOrderRole = Qt::InitialSortOrderRole,   DisplayPropertyRole = Qt::DisplayPropertyRole,   DecorationPropertyRole = Qt::DecorationPropertyRole,   ToolTipPropertyRole = Qt::ToolTipPropertyRole,   StatusTipPropertyRole = Qt::StatusTipPropertyRole,   WhatsThisPropertyRole = Qt::WhatsThisPropertyRole,   UserRole = Qt::UserRole};
enum ItemFlag{
  NoItemFlags = Qt::NoItemFlags,   ItemIsSelectable = Qt::ItemIsSelectable,   ItemIsEditable = Qt::ItemIsEditable,   ItemIsDragEnabled = Qt::ItemIsDragEnabled,   ItemIsDropEnabled = Qt::ItemIsDropEnabled,   ItemIsUserCheckable = Qt::ItemIsUserCheckable,   ItemIsEnabled = Qt::ItemIsEnabled,   ItemIsTristate = Qt::ItemIsTristate,   ItemNeverHasChildren = Qt::ItemNeverHasChildren};
enum ItemSelectionMode{
  ContainsItemShape = Qt::ContainsItemShape,   IntersectsItemShape = Qt::IntersectsItemShape,   ContainsItemBoundingRect = Qt::ContainsItemBoundingRect,   IntersectsItemBoundingRect = Qt::IntersectsItemBoundingRect};
enum Key{
  Key_Escape = Qt::Key_Escape,   Key_Tab = Qt::Key_Tab,   Key_Backtab = Qt::Key_Backtab,   Key_Backspace = Qt::Key_Backspace,   Key_Return = Qt::Key_Return,   Key_Enter = Qt::Key_Enter,   Key_Insert = Qt::Key_Insert,   Key_Delete = Qt::Key_Delete,   Key_Pause = Qt::Key_Pause,   Key_Print = Qt::Key_Print,   Key_SysReq = Qt::Key_SysReq,   Key_Clear = Qt::Key_Clear,   Key_Home = Qt::Key_Home,   Key_End = Qt::Key_End,   Key_Left = Qt::Key_Left,   Key_Up = Qt::Key_Up,   Key_Right = Qt::Key_Right,   Key_Down = Qt::Key_Down,   Key_PageUp = Qt::Key_PageUp,   Key_PageDown = Qt::Key_PageDown,   Key_Shift = Qt::Key_Shift,   Key_Control = Qt::Key_Control,   Key_Meta = Qt::Key_Meta,   Key_Alt = Qt::Key_Alt,   Key_CapsLock = Qt::Key_CapsLock,   Key_NumLock = Qt::Key_NumLock,   Key_ScrollLock = Qt::Key_ScrollLock,   Key_F1 = Qt::Key_F1,   Key_F2 = Qt::Key_F2,   Key_F3 = Qt::Key_F3,   Key_F4 = Qt::Key_F4,   Key_F5 = Qt::Key_F5,   Key_F6 = Qt::Key_F6,   Key_F7 = Qt::Key_F7,   Key_F8 = Qt::Key_F8,   Key_F9 = Qt::Key_F9,   Key_F10 = Qt::Key_F10,   Key_F11 = Qt::Key_F11,   Key_F12 = Qt::Key_F12,   Key_F13 = Qt::Key_F13,   Key_F14 = Qt::Key_F14,   Key_F15 = Qt::Key_F15,   Key_F16 = Qt::Key_F16,   Key_F17 = Qt::Key_F17,   Key_F18 = Qt::Key_F18,   Key_F19 = Qt::Key_F19,   Key_F20 = Qt::Key_F20,   Key_F21 = Qt::Key_F21,   Key_F22 = Qt::Key_F22,   Key_F23 = Qt::Key_F23,   Key_F24 = Qt::Key_F24,   Key_F25 = Qt::Key_F25,   Key_F26 = Qt::Key_F26,   Key_F27 = Qt::Key_F27,   Key_F28 = Qt::Key_F28,   Key_F29 = Qt::Key_F29,   Key_F30 = Qt::Key_F30,   Key_F31 = Qt::Key_F31,   Key_F32 = Qt::Key_F32,   Key_F33 = Qt::Key_F33,   Key_F34 = Qt::Key_F34,   Key_F35 = Qt::Key_F35,   Key_Super_L = Qt::Key_Super_L,   Key_Super_R = Qt::Key_Super_R,   Key_Menu = Qt::Key_Menu,   Key_Hyper_L = Qt::Key_Hyper_L,   Key_Hyper_R = Qt::Key_Hyper_R,   Key_Help = Qt::Key_Help,   Key_Direction_L = Qt::Key_Direction_L,   Key_Direction_R = Qt::Key_Direction_R,   Key_Space = Qt::Key_Space,   Key_Any = Qt::Key_Any,   Key_Exclam = Qt::Key_Exclam,   Key_QuoteDbl = Qt::Key_QuoteDbl,   Key_NumberSign = Qt::Key_NumberSign,   Key_Dollar = Qt::Key_Dollar,   Key_Percent = Qt::Key_Percent,   Key_Ampersand = Qt::Key_Ampersand,   Key_Apostrophe = Qt::Key_Apostrophe,   Key_ParenLeft = Qt::Key_ParenLeft,   Key_ParenRight = Qt::Key_ParenRight,   Key_Asterisk = Qt::Key_Asterisk,   Key_Plus = Qt::Key_Plus,   Key_Comma = Qt::Key_Comma,   Key_Minus = Qt::Key_Minus,   Key_Period = Qt::Key_Period,   Key_Slash = Qt::Key_Slash,   Key_0 = Qt::Key_0,   Key_1 = Qt::Key_1,   Key_2 = Qt::Key_2,   Key_3 = Qt::Key_3,   Key_4 = Qt::Key_4,   Key_5 = Qt::Key_5,   Key_6 = Qt::Key_6,   Key_7 = Qt::Key_7,   Key_8 = Qt::Key_8,   Key_9 = Qt::Key_9,   Key_Colon = Qt::Key_Colon,   Key_Semicolon = Qt::Key_Semicolon,   Key_Less = Qt::Key_Less,   Key_Equal = Qt::Key_Equal,   Key_Greater = Qt::Key_Greater,   Key_Question = Qt::Key_Question,   Key_At = Qt::Key_At,   Key_A = Qt::Key_A,   Key_B = Qt::Key_B,   Key_C = Qt::Key_C,   Key_D = Qt::Key_D,   Key_E = Qt::Key_E,   Key_F = Qt::Key_F,   Key_G = Qt::Key_G,   Key_H = Qt::Key_H,   Key_I = Qt::Key_I,   Key_J = Qt::Key_J,   Key_K = Qt::Key_K,   Key_L = Qt::Key_L,   Key_M = Qt::Key_M,   Key_N = Qt::Key_N,   Key_O = Qt::Key_O,   Key_P = Qt::Key_P,   Key_Q = Qt::Key_Q,   Key_R = Qt::Key_R,   Key_S = Qt::Key_S,   Key_T = Qt::Key_T,   Key_U = Qt::Key_U,   Key_V = Qt::Key_V,   Key_W = Qt::Key_W,   Key_X = Qt::Key_X,   Key_Y = Qt::Key_Y,   Key_Z = Qt::Key_Z,   Key_BracketLeft = Qt::Key_BracketLeft,   Key_Backslash = Qt::Key_Backslash,   Key_BracketRight = Qt::Key_BracketRight,   Key_AsciiCircum = Qt::Key_AsciiCircum,   Key_Underscore = Qt::Key_Underscore,   Key_QuoteLeft = Qt::Key_QuoteLeft,   Key_BraceLeft = Qt::Key_BraceLeft,   Key_Bar = Qt::Key_Bar,   Key_BraceRight = Qt::Key_BraceRight,   Key_AsciiTilde = Qt::Key_AsciiTilde,   Key_nobreakspace = Qt::Key_nobreakspace,   Key_exclamdown = Qt::Key_exclamdown,   Key_cent = Qt::Key_cent,   Key_sterling = Qt::Key_sterling,   Key_currency = Qt::Key_currency,   Key_yen = Qt::Key_yen,   Key_brokenbar = Qt::Key_brokenbar,   Key_section = Qt::Key_section,   Key_diaeresis = Qt::Key_diaeresis,   Key_copyright = Qt::Key_copyright,   Key_ordfeminine = Qt::Key_ordfeminine,   Key_guillemotleft = Qt::Key_guillemotleft,   Key_notsign = Qt::Key_notsign,   Key_hyphen = Qt::Key_hyphen,   Key_registered = Qt::Key_registered,   Key_macron = Qt::Key_macron,   Key_degree = Qt::Key_degree,   Key_plusminus = Qt::Key_plusminus,   Key_twosuperior = Qt::Key_twosuperior,   Key_threesuperior = Qt::Key_threesuperior,   Key_acute = Qt::Key_acute,   Key_mu = Qt::Key_mu,   Key_paragraph = Qt::Key_paragraph,   Key_periodcentered = Qt::Key_periodcentered,   Key_cedilla = Qt::Key_cedilla,   Key_onesuperior = Qt::Key_onesuperior,   Key_masculine = Qt::Key_masculine,   Key_guillemotright = Qt::Key_guillemotright,   Key_onequarter = Qt::Key_onequarter,   Key_onehalf = Qt::Key_onehalf,   Key_threequarters = Qt::Key_threequarters,   Key_questiondown = Qt::Key_questiondown,   Key_Agrave = Qt::Key_Agrave,   Key_Aacute = Qt::Key_Aacute,   Key_Acircumflex = Qt::Key_Acircumflex,   Key_Atilde = Qt::Key_Atilde,   Key_Adiaeresis = Qt::Key_Adiaeresis,   Key_Aring = Qt::Key_Aring,   Key_AE = Qt::Key_AE,   Key_Ccedilla = Qt::Key_Ccedilla,   Key_Egrave = Qt::Key_Egrave,   Key_Eacute = Qt::Key_Eacute,   Key_Ecircumflex = Qt::Key_Ecircumflex,   Key_Ediaeresis = Qt::Key_Ediaeresis,   Key_Igrave = Qt::Key_Igrave,   Key_Iacute = Qt::Key_Iacute,   Key_Icircumflex = Qt::Key_Icircumflex,   Key_Idiaeresis = Qt::Key_Idiaeresis,   Key_ETH = Qt::Key_ETH,   Key_Ntilde = Qt::Key_Ntilde,   Key_Ograve = Qt::Key_Ograve,   Key_Oacute = Qt::Key_Oacute,   Key_Ocircumflex = Qt::Key_Ocircumflex,   Key_Otilde = Qt::Key_Otilde,   Key_Odiaeresis = Qt::Key_Odiaeresis,   Key_multiply = Qt::Key_multiply,   Key_Ooblique = Qt::Key_Ooblique,   Key_Ugrave = Qt::Key_Ugrave,   Key_Uacute = Qt::Key_Uacute,   Key_Ucircumflex = Qt::Key_Ucircumflex,   Key_Udiaeresis = Qt::Key_Udiaeresis,   Key_Yacute = Qt::Key_Yacute,   Key_THORN = Qt::Key_THORN,   Key_ssharp = Qt::Key_ssharp,   Key_division = Qt::Key_division,   Key_ydiaeresis = Qt::Key_ydiaeresis,   Key_AltGr = Qt::Key_AltGr,   Key_Multi_key = Qt::Key_Multi_key,   Key_Codeinput = Qt::Key_Codeinput,   Key_SingleCandidate = Qt::Key_SingleCandidate,   Key_MultipleCandidate = Qt::Key_MultipleCandidate,   Key_PreviousCandidate = Qt::Key_PreviousCandidate,   Key_Mode_switch = Qt::Key_Mode_switch,   Key_Kanji = Qt::Key_Kanji,   Key_Muhenkan = Qt::Key_Muhenkan,   Key_Henkan = Qt::Key_Henkan,   Key_Romaji = Qt::Key_Romaji,   Key_Hiragana = Qt::Key_Hiragana,   Key_Katakana = Qt::Key_Katakana,   Key_Hiragana_Katakana = Qt::Key_Hiragana_Katakana,   Key_Zenkaku = Qt::Key_Zenkaku,   Key_Hankaku = Qt::Key_Hankaku,   Key_Zenkaku_Hankaku = Qt::Key_Zenkaku_Hankaku,   Key_Touroku = Qt::Key_Touroku,   Key_Massyo = Qt::Key_Massyo,   Key_Kana_Lock = Qt::Key_Kana_Lock,   Key_Kana_Shift = Qt::Key_Kana_Shift,   Key_Eisu_Shift = Qt::Key_Eisu_Shift,   Key_Eisu_toggle = Qt::Key_Eisu_toggle,   Key_Hangul = Qt::Key_Hangul,   Key_Hangul_Start = Qt::Key_Hangul_Start,   Key_Hangul_End = Qt::Key_Hangul_End,   Key_Hangul_Hanja = Qt::Key_Hangul_Hanja,   Key_Hangul_Jamo = Qt::Key_Hangul_Jamo,   Key_Hangul_Romaja = Qt::Key_Hangul_Romaja,   Key_Hangul_Jeonja = Qt::Key_Hangul_Jeonja,   Key_Hangul_Banja = Qt::Key_Hangul_Banja,   Key_Hangul_PreHanja = Qt::Key_Hangul_PreHanja,   Key_Hangul_PostHanja = Qt::Key_Hangul_PostHanja,   Key_Hangul_Special = Qt::Key_Hangul_Special,   Key_Dead_Grave = Qt::Key_Dead_Grave,   Key_Dead_Acute = Qt::Key_Dead_Acute,   Key_Dead_Circumflex = Qt::Key_Dead_Circumflex,   Key_Dead_Tilde = Qt::Key_Dead_Tilde,   Key_Dead_Macron = Qt::Key_Dead_Macron,   Key_Dead_Breve = Qt::Key_Dead_Breve,   Key_Dead_Abovedot = Qt::Key_Dead_Abovedot,   Key_Dead_Diaeresis = Qt::Key_Dead_Diaeresis,   Key_Dead_Abovering = Qt::Key_Dead_Abovering,   Key_Dead_Doubleacute = Qt::Key_Dead_Doubleacute,   Key_Dead_Caron = Qt::Key_Dead_Caron,   Key_Dead_Cedilla = Qt::Key_Dead_Cedilla,   Key_Dead_Ogonek = Qt::Key_Dead_Ogonek,   Key_Dead_Iota = Qt::Key_Dead_Iota,   Key_Dead_Voiced_Sound = Qt::Key_Dead_Voiced_Sound,   Key_Dead_Semivoiced_Sound = Qt::Key_Dead_Semivoiced_Sound,   Key_Dead_Belowdot = Qt::Key_Dead_Belowdot,   Key_Dead_Hook = Qt::Key_Dead_Hook,   Key_Dead_Horn = Qt::Key_Dead_Horn,   Key_Back = Qt::Key_Back,   Key_Forward = Qt::Key_Forward,   Key_Stop = Qt::Key_Stop,   Key_Refresh = Qt::Key_Refresh,   Key_VolumeDown = Qt::Key_VolumeDown,   Key_VolumeMute = Qt::Key_VolumeMute,   Key_VolumeUp = Qt::Key_VolumeUp,   Key_BassBoost = Qt::Key_BassBoost,   Key_BassUp = Qt::Key_BassUp,   Key_BassDown = Qt::Key_BassDown,   Key_TrebleUp = Qt::Key_TrebleUp,   Key_TrebleDown = Qt::Key_TrebleDown,   Key_MediaPlay = Qt::Key_MediaPlay,   Key_MediaStop = Qt::Key_MediaStop,   Key_MediaPrevious = Qt::Key_MediaPrevious,   Key_MediaNext = Qt::Key_MediaNext,   Key_MediaRecord = Qt::Key_MediaRecord,   Key_MediaPause = Qt::Key_MediaPause,   Key_MediaTogglePlayPause = Qt::Key_MediaTogglePlayPause,   Key_HomePage = Qt::Key_HomePage,   Key_Favorites = Qt::Key_Favorites,   Key_Search = Qt::Key_Search,   Key_Standby = Qt::Key_Standby,   Key_OpenUrl = Qt::Key_OpenUrl,   Key_LaunchMail = Qt::Key_LaunchMail,   Key_LaunchMedia = Qt::Key_LaunchMedia,   Key_Launch0 = Qt::Key_Launch0,   Key_Launch1 = Qt::Key_Launch1,   Key_Launch2 = Qt::Key_Launch2,   Key_Launch3 = Qt::Key_Launch3,   Key_Launch4 = Qt::Key_Launch4,   Key_Launch5 = Qt::Key_Launch5,   Key_Launch6 = Qt::Key_Launch6,   Key_Launch7 = Qt::Key_Launch7,   Key_Launch8 = Qt::Key_Launch8,   Key_Launch9 = Qt::Key_Launch9,   Key_LaunchA = Qt::Key_LaunchA,   Key_LaunchB = Qt::Key_LaunchB,   Key_LaunchC = Qt::Key_LaunchC,   Key_LaunchD = Qt::Key_LaunchD,   Key_LaunchE = Qt::Key_LaunchE,   Key_LaunchF = Qt::Key_LaunchF,   Key_MonBrightnessUp = Qt::Key_MonBrightnessUp,   Key_MonBrightnessDown = Qt::Key_MonBrightnessDown,   Key_KeyboardLightOnOff = Qt::Key_KeyboardLightOnOff,   Key_KeyboardBrightnessUp = Qt::Key_KeyboardBrightnessUp,   Key_KeyboardBrightnessDown = Qt::Key_KeyboardBrightnessDown,   Key_PowerOff = Qt::Key_PowerOff,   Key_WakeUp = Qt::Key_WakeUp,   Key_Eject = Qt::Key_Eject,   Key_ScreenSaver = Qt::Key_ScreenSaver,   Key_WWW = Qt::Key_WWW,   Key_Memo = Qt::Key_Memo,   Key_LightBulb = Qt::Key_LightBulb,   Key_Shop = Qt::Key_Shop,   Key_History = Qt::Key_History,   Key_AddFavorite = Qt::Key_AddFavorite,   Key_HotLinks = Qt::Key_HotLinks,   Key_BrightnessAdjust = Qt::Key_BrightnessAdjust,   Key_Finance = Qt::Key_Finance,   Key_Community = Qt::Key_Community,   Key_AudioRewind = Qt::Key_AudioRewind,   Key_BackForward = Qt::Key_BackForward,   Key_ApplicationLeft = Qt::Key_ApplicationLeft,   Key_ApplicationRight = Qt::Key_ApplicationRight,   Key_Book = Qt::Key_Book,   Key_CD = Qt::Key_CD,   Key_Calculator = Qt::Key_Calculator,   Key_ToDoList = Qt::Key_ToDoList,   Key_ClearGrab = Qt::Key_ClearGrab,   Key_Close = Qt::Key_Close,   Key_Copy = Qt::Key_Copy,   Key_Cut = Qt::Key_Cut,   Key_Display = Qt::Key_Display,   Key_DOS = Qt::Key_DOS,   Key_Documents = Qt::Key_Documents,   Key_Excel = Qt::Key_Excel,   Key_Explorer = Qt::Key_Explorer,   Key_Game = Qt::Key_Game,   Key_Go = Qt::Key_Go,   Key_iTouch = Qt::Key_iTouch,   Key_LogOff = Qt::Key_LogOff,   Key_Market = Qt::Key_Market,   Key_Meeting = Qt::Key_Meeting,   Key_MenuKB = Qt::Key_MenuKB,   Key_MenuPB = Qt::Key_MenuPB,   Key_MySites = Qt::Key_MySites,   Key_News = Qt::Key_News,   Key_OfficeHome = Qt::Key_OfficeHome,   Key_Option = Qt::Key_Option,   Key_Paste = Qt::Key_Paste,   Key_Phone = Qt::Key_Phone,   Key_Calendar = Qt::Key_Calendar,   Key_Reply = Qt::Key_Reply,   Key_Reload = Qt::Key_Reload,   Key_RotateWindows = Qt::Key_RotateWindows,   Key_RotationPB = Qt::Key_RotationPB,   Key_RotationKB = Qt::Key_RotationKB,   Key_Save = Qt::Key_Save,   Key_Send = Qt::Key_Send,   Key_Spell = Qt::Key_Spell,   Key_SplitScreen = Qt::Key_SplitScreen,   Key_Support = Qt::Key_Support,   Key_TaskPane = Qt::Key_TaskPane,   Key_Terminal = Qt::Key_Terminal,   Key_Tools = Qt::Key_Tools,   Key_Travel = Qt::Key_Travel,   Key_Video = Qt::Key_Video,   Key_Word = Qt::Key_Word,   Key_Xfer = Qt::Key_Xfer,   Key_ZoomIn = Qt::Key_ZoomIn,   Key_ZoomOut = Qt::Key_ZoomOut,   Key_Away = Qt::Key_Away,   Key_Messenger = Qt::Key_Messenger,   Key_WebCam = Qt::Key_WebCam,   Key_MailForward = Qt::Key_MailForward,   Key_Pictures = Qt::Key_Pictures,   Key_Music = Qt::Key_Music,   Key_Battery = Qt::Key_Battery,   Key_Bluetooth = Qt::Key_Bluetooth,   Key_WLAN = Qt::Key_WLAN,   Key_UWB = Qt::Key_UWB,   Key_AudioForward = Qt::Key_AudioForward,   Key_AudioRepeat = Qt::Key_AudioRepeat,   Key_AudioRandomPlay = Qt::Key_AudioRandomPlay,   Key_Subtitle = Qt::Key_Subtitle,   Key_AudioCycleTrack = Qt::Key_AudioCycleTrack,   Key_Time = Qt::Key_Time,   Key_Hibernate = Qt::Key_Hibernate,   Key_View = Qt::Key_View,   Key_TopMenu = Qt::Key_TopMenu,   Key_PowerDown = Qt::Key_PowerDown,   Key_Suspend = Qt::Key_Suspend,   Key_ContrastAdjust = Qt::Key_ContrastAdjust,   Key_LaunchG = Qt::Key_LaunchG,   Key_LaunchH = Qt::Key_LaunchH,   Key_TouchpadToggle = Qt::Key_TouchpadToggle,   Key_TouchpadOn = Qt::Key_TouchpadOn,   Key_TouchpadOff = Qt::Key_TouchpadOff,   Key_MicMute = Qt::Key_MicMute,   Key_Red = Qt::Key_Red,   Key_Green = Qt::Key_Green,   Key_Yellow = Qt::Key_Yellow,   Key_Blue = Qt::Key_Blue,   Key_ChannelUp = Qt::Key_ChannelUp,   Key_ChannelDown = Qt::Key_ChannelDown,   Key_Guide = Qt::Key_Guide,   Key_Info = Qt::Key_Info,   Key_Settings = Qt::Key_Settings,   Key_MediaLast = Qt::Key_MediaLast,   Key_Select = Qt::Key_Select,   Key_Yes = Qt::Key_Yes,   Key_No = Qt::Key_No,   Key_Cancel = Qt::Key_Cancel,   Key_Printer = Qt::Key_Printer,   Key_Execute = Qt::Key_Execute,   Key_Sleep = Qt::Key_Sleep,   Key_Play = Qt::Key_Play,   Key_Zoom = Qt::Key_Zoom,   Key_Exit = Qt::Key_Exit,   Key_Context1 = Qt::Key_Context1,   Key_Context2 = Qt::Key_Context2,   Key_Context3 = Qt::Key_Context3,   Key_Context4 = Qt::Key_Context4,   Key_Call = Qt::Key_Call,   Key_Hangup = Qt::Key_Hangup,   Key_Flip = Qt::Key_Flip,   Key_ToggleCallHangup = Qt::Key_ToggleCallHangup,   Key_VoiceDial = Qt::Key_VoiceDial,   Key_LastNumberRedial = Qt::Key_LastNumberRedial,   Key_Camera = Qt::Key_Camera,   Key_CameraFocus = Qt::Key_CameraFocus,   Key_unknown = Qt::Key_unknown};
enum KeyboardModifier{
  NoModifier = Qt::NoModifier,   ShiftModifier = Qt::ShiftModifier,   ControlModifier = Qt::ControlModifier,   AltModifier = Qt::AltModifier,   MetaModifier = Qt::MetaModifier,   KeypadModifier = Qt::KeypadModifier,   GroupSwitchModifier = Qt::GroupSwitchModifier,   KeyboardModifierMask = Qt::KeyboardModifierMask};
enum LayoutDirection{
  LeftToRight = Qt::LeftToRight,   RightToLeft = Qt::RightToLeft,   LayoutDirectionAuto = Qt::LayoutDirectionAuto};
enum MaskMode{
  MaskInColor = Qt::MaskInColor,   MaskOutColor = Qt::MaskOutColor};
enum MatchFlag{
  MatchExactly = Qt::MatchExactly,   MatchContains = Qt::MatchContains,   MatchStartsWith = Qt::MatchStartsWith,   MatchEndsWith = Qt::MatchEndsWith,   MatchRegExp = Qt::MatchRegExp,   MatchWildcard = Qt::MatchWildcard,   MatchFixedString = Qt::MatchFixedString,   MatchCaseSensitive = Qt::MatchCaseSensitive,   MatchWrap = Qt::MatchWrap,   MatchRecursive = Qt::MatchRecursive};
enum MouseButton{
  NoButton = Qt::NoButton,   LeftButton = Qt::LeftButton,   RightButton = Qt::RightButton,   MidButton = Qt::MidButton,   MiddleButton = Qt::MiddleButton,   BackButton = Qt::BackButton,   XButton1 = Qt::XButton1,   ExtraButton1 = Qt::ExtraButton1,   ForwardButton = Qt::ForwardButton,   XButton2 = Qt::XButton2,   ExtraButton2 = Qt::ExtraButton2,   TaskButton = Qt::TaskButton,   ExtraButton3 = Qt::ExtraButton3,   ExtraButton4 = Qt::ExtraButton4,   ExtraButton5 = Qt::ExtraButton5,   ExtraButton6 = Qt::ExtraButton6,   ExtraButton7 = Qt::ExtraButton7,   ExtraButton8 = Qt::ExtraButton8,   ExtraButton9 = Qt::ExtraButton9,   ExtraButton10 = Qt::ExtraButton10,   ExtraButton11 = Qt::ExtraButton11,   ExtraButton12 = Qt::ExtraButton12,   ExtraButton13 = Qt::ExtraButton13,   ExtraButton14 = Qt::ExtraButton14,   ExtraButton15 = Qt::ExtraButton15,   ExtraButton16 = Qt::ExtraButton16,   ExtraButton17 = Qt::ExtraButton17,   ExtraButton18 = Qt::ExtraButton18,   ExtraButton19 = Qt::ExtraButton19,   ExtraButton20 = Qt::ExtraButton20,   ExtraButton21 = Qt::ExtraButton21,   ExtraButton22 = Qt::ExtraButton22,   ExtraButton23 = Qt::ExtraButton23,   ExtraButton24 = Qt::ExtraButton24,   AllButtons = Qt::AllButtons,   MaxMouseButton = Qt::MaxMouseButton,   MouseButtonMask = Qt::MouseButtonMask};
enum MouseEventFlag{
  MouseEventCreatedDoubleClick = Qt::MouseEventCreatedDoubleClick,   MouseEventFlagMask = Qt::MouseEventFlagMask};
enum MouseEventSource{
  MouseEventNotSynthesized = Qt::MouseEventNotSynthesized,   MouseEventSynthesizedBySystem = Qt::MouseEventSynthesizedBySystem,   MouseEventSynthesizedByQt = Qt::MouseEventSynthesizedByQt};
enum NativeGestureType{
  BeginNativeGesture = Qt::BeginNativeGesture,   EndNativeGesture = Qt::EndNativeGesture,   PanNativeGesture = Qt::PanNativeGesture,   ZoomNativeGesture = Qt::ZoomNativeGesture,   SmartZoomNativeGesture = Qt::SmartZoomNativeGesture,   RotateNativeGesture = Qt::RotateNativeGesture,   SwipeNativeGesture = Qt::SwipeNativeGesture};
enum NavigationMode{
  NavigationModeNone = Qt::NavigationModeNone,   NavigationModeKeypadTabOrder = Qt::NavigationModeKeypadTabOrder,   NavigationModeKeypadDirectional = Qt::NavigationModeKeypadDirectional,   NavigationModeCursorAuto = Qt::NavigationModeCursorAuto,   NavigationModeCursorForceVisible = Qt::NavigationModeCursorForceVisible};
enum Orientation{
  Horizontal = Qt::Horizontal,   Vertical = Qt::Vertical};
enum PenCapStyle{
  FlatCap = Qt::FlatCap,   SquareCap = Qt::SquareCap,   RoundCap = Qt::RoundCap,   MPenCapStyle = Qt::MPenCapStyle};
enum PenJoinStyle{
  MiterJoin = Qt::MiterJoin,   BevelJoin = Qt::BevelJoin,   RoundJoin = Qt::RoundJoin,   SvgMiterJoin = Qt::SvgMiterJoin,   MPenJoinStyle = Qt::MPenJoinStyle};
enum PenStyle{
  NoPen = Qt::NoPen,   SolidLine = Qt::SolidLine,   DashLine = Qt::DashLine,   DotLine = Qt::DotLine,   DashDotLine = Qt::DashDotLine,   DashDotDotLine = Qt::DashDotDotLine,   CustomDashLine = Qt::CustomDashLine,   MPenStyle = Qt::MPenStyle};
enum ScreenOrientation{
  PrimaryOrientation = Qt::PrimaryOrientation,   PortraitOrientation = Qt::PortraitOrientation,   LandscapeOrientation = Qt::LandscapeOrientation,   InvertedPortraitOrientation = Qt::InvertedPortraitOrientation,   InvertedLandscapeOrientation = Qt::InvertedLandscapeOrientation};
enum ScrollBarPolicy{
  ScrollBarAsNeeded = Qt::ScrollBarAsNeeded,   ScrollBarAlwaysOff = Qt::ScrollBarAlwaysOff,   ScrollBarAlwaysOn = Qt::ScrollBarAlwaysOn};
enum ScrollPhase{
  ScrollBegin = Qt::ScrollBegin,   ScrollUpdate = Qt::ScrollUpdate,   ScrollEnd = Qt::ScrollEnd};
enum ShortcutContext{
  WidgetShortcut = Qt::WidgetShortcut,   WindowShortcut = Qt::WindowShortcut,   ApplicationShortcut = Qt::ApplicationShortcut,   WidgetWithChildrenShortcut = Qt::WidgetWithChildrenShortcut};
enum SizeHint{
  MinimumSize = Qt::MinimumSize,   PreferredSize = Qt::PreferredSize,   MaximumSize = Qt::MaximumSize,   MinimumDescent = Qt::MinimumDescent,   NSizeHints = Qt::NSizeHints};
enum SizeMode{
  AbsoluteSize = Qt::AbsoluteSize,   RelativeSize = Qt::RelativeSize};
enum SortOrder{
  AscendingOrder = Qt::AscendingOrder,   DescendingOrder = Qt::DescendingOrder};
enum TextElideMode{
  ElideLeft = Qt::ElideLeft,   ElideRight = Qt::ElideRight,   ElideMiddle = Qt::ElideMiddle,   ElideNone = Qt::ElideNone};
enum TextFlag{
  TextSingleLine = Qt::TextSingleLine,   TextDontClip = Qt::TextDontClip,   TextExpandTabs = Qt::TextExpandTabs,   TextShowMnemonic = Qt::TextShowMnemonic,   TextWordWrap = Qt::TextWordWrap,   TextWrapAnywhere = Qt::TextWrapAnywhere,   TextDontPrint = Qt::TextDontPrint,   TextIncludeTrailingSpaces = Qt::TextIncludeTrailingSpaces,   TextHideMnemonic = Qt::TextHideMnemonic,   TextJustificationForced = Qt::TextJustificationForced,   TextForceLeftToRight = Qt::TextForceLeftToRight,   TextForceRightToLeft = Qt::TextForceRightToLeft,   TextLongestVariant = Qt::TextLongestVariant,   TextBypassShaping = Qt::TextBypassShaping};
enum TextFormat{
  PlainText = Qt::PlainText,   RichText = Qt::RichText,   AutoText = Qt::AutoText};
enum TextInteractionFlag{
  NoTextInteraction = Qt::NoTextInteraction,   TextSelectableByMouse = Qt::TextSelectableByMouse,   TextSelectableByKeyboard = Qt::TextSelectableByKeyboard,   LinksAccessibleByMouse = Qt::LinksAccessibleByMouse,   LinksAccessibleByKeyboard = Qt::LinksAccessibleByKeyboard,   TextEditable = Qt::TextEditable,   TextEditorInteraction = Qt::TextEditorInteraction,   TextBrowserInteraction = Qt::TextBrowserInteraction};
enum TileRule{
  StretchTile = Qt::StretchTile,   RepeatTile = Qt::RepeatTile,   RoundTile = Qt::RoundTile};
enum TimeSpec{
  LocalTime = Qt::LocalTime,   UTC = Qt::UTC,   OffsetFromUTC = Qt::OffsetFromUTC,   TimeZone = Qt::TimeZone};
enum TimerType{
  PreciseTimer = Qt::PreciseTimer,   CoarseTimer = Qt::CoarseTimer,   VeryCoarseTimer = Qt::VeryCoarseTimer};
enum ToolBarArea{
  LeftToolBarArea = Qt::LeftToolBarArea,   RightToolBarArea = Qt::RightToolBarArea,   TopToolBarArea = Qt::TopToolBarArea,   BottomToolBarArea = Qt::BottomToolBarArea,   ToolBarArea_Mask = Qt::ToolBarArea_Mask,   AllToolBarAreas = Qt::AllToolBarAreas,   NoToolBarArea = Qt::NoToolBarArea};
enum ToolBarAreaSizes{
  NToolBarAreas = Qt::NToolBarAreas};
enum ToolButtonStyle{
  ToolButtonIconOnly = Qt::ToolButtonIconOnly,   ToolButtonTextOnly = Qt::ToolButtonTextOnly,   ToolButtonTextBesideIcon = Qt::ToolButtonTextBesideIcon,   ToolButtonTextUnderIcon = Qt::ToolButtonTextUnderIcon,   ToolButtonFollowStyle = Qt::ToolButtonFollowStyle};
enum TouchPointState{
  TouchPointPressed = Qt::TouchPointPressed,   TouchPointMoved = Qt::TouchPointMoved,   TouchPointStationary = Qt::TouchPointStationary,   TouchPointReleased = Qt::TouchPointReleased};
enum TransformationMode{
  FastTransformation = Qt::FastTransformation,   SmoothTransformation = Qt::SmoothTransformation};
enum UIEffect{
  UI_General = Qt::UI_General,   UI_AnimateMenu = Qt::UI_AnimateMenu,   UI_FadeMenu = Qt::UI_FadeMenu,   UI_AnimateCombo = Qt::UI_AnimateCombo,   UI_AnimateTooltip = Qt::UI_AnimateTooltip,   UI_FadeTooltip = Qt::UI_FadeTooltip,   UI_AnimateToolBox = Qt::UI_AnimateToolBox};
enum WhiteSpaceMode{
  WhiteSpaceNormal = Qt::WhiteSpaceNormal,   WhiteSpacePre = Qt::WhiteSpacePre,   WhiteSpaceNoWrap = Qt::WhiteSpaceNoWrap,   WhiteSpaceModeUndefined = Qt::WhiteSpaceModeUndefined};
enum WidgetAttribute{
  WA_Disabled = Qt::WA_Disabled,   WA_UnderMouse = Qt::WA_UnderMouse,   WA_MouseTracking = Qt::WA_MouseTracking,   WA_ContentsPropagated = Qt::WA_ContentsPropagated,   WA_OpaquePaintEvent = Qt::WA_OpaquePaintEvent,   WA_NoBackground = Qt::WA_NoBackground,   WA_StaticContents = Qt::WA_StaticContents,   WA_LaidOut = Qt::WA_LaidOut,   WA_PaintOnScreen = Qt::WA_PaintOnScreen,   WA_NoSystemBackground = Qt::WA_NoSystemBackground,   WA_UpdatesDisabled = Qt::WA_UpdatesDisabled,   WA_Mapped = Qt::WA_Mapped,   WA_MacNoClickThrough = Qt::WA_MacNoClickThrough,   WA_InputMethodEnabled = Qt::WA_InputMethodEnabled,   WA_WState_Visible = Qt::WA_WState_Visible,   WA_WState_Hidden = Qt::WA_WState_Hidden,   WA_ForceDisabled = Qt::WA_ForceDisabled,   WA_KeyCompression = Qt::WA_KeyCompression,   WA_PendingMoveEvent = Qt::WA_PendingMoveEvent,   WA_PendingResizeEvent = Qt::WA_PendingResizeEvent,   WA_SetPalette = Qt::WA_SetPalette,   WA_SetFont = Qt::WA_SetFont,   WA_SetCursor = Qt::WA_SetCursor,   WA_NoChildEventsFromChildren = Qt::WA_NoChildEventsFromChildren,   WA_WindowModified = Qt::WA_WindowModified,   WA_Resized = Qt::WA_Resized,   WA_Moved = Qt::WA_Moved,   WA_PendingUpdate = Qt::WA_PendingUpdate,   WA_InvalidSize = Qt::WA_InvalidSize,   WA_MacBrushedMetal = Qt::WA_MacBrushedMetal,   WA_MacMetalStyle = Qt::WA_MacMetalStyle,   WA_CustomWhatsThis = Qt::WA_CustomWhatsThis,   WA_LayoutOnEntireRect = Qt::WA_LayoutOnEntireRect,   WA_OutsideWSRange = Qt::WA_OutsideWSRange,   WA_GrabbedShortcut = Qt::WA_GrabbedShortcut,   WA_TransparentForMouseEvents = Qt::WA_TransparentForMouseEvents,   WA_PaintUnclipped = Qt::WA_PaintUnclipped,   WA_SetWindowIcon = Qt::WA_SetWindowIcon,   WA_NoMouseReplay = Qt::WA_NoMouseReplay,   WA_DeleteOnClose = Qt::WA_DeleteOnClose,   WA_RightToLeft = Qt::WA_RightToLeft,   WA_SetLayoutDirection = Qt::WA_SetLayoutDirection,   WA_NoChildEventsForParent = Qt::WA_NoChildEventsForParent,   WA_ForceUpdatesDisabled = Qt::WA_ForceUpdatesDisabled,   WA_WState_Created = Qt::WA_WState_Created,   WA_WState_CompressKeys = Qt::WA_WState_CompressKeys,   WA_WState_InPaintEvent = Qt::WA_WState_InPaintEvent,   WA_WState_Reparented = Qt::WA_WState_Reparented,   WA_WState_ConfigPending = Qt::WA_WState_ConfigPending,   WA_WState_Polished = Qt::WA_WState_Polished,   WA_WState_DND = Qt::WA_WState_DND,   WA_WState_OwnSizePolicy = Qt::WA_WState_OwnSizePolicy,   WA_WState_ExplicitShowHide = Qt::WA_WState_ExplicitShowHide,   WA_ShowModal = Qt::WA_ShowModal,   WA_MouseNoMask = Qt::WA_MouseNoMask,   WA_GroupLeader = Qt::WA_GroupLeader,   WA_NoMousePropagation = Qt::WA_NoMousePropagation,   WA_Hover = Qt::WA_Hover,   WA_InputMethodTransparent = Qt::WA_InputMethodTransparent,   WA_QuitOnClose = Qt::WA_QuitOnClose,   WA_KeyboardFocusChange = Qt::WA_KeyboardFocusChange,   WA_AcceptDrops = Qt::WA_AcceptDrops,   WA_DropSiteRegistered = Qt::WA_DropSiteRegistered,   WA_ForceAcceptDrops = Qt::WA_ForceAcceptDrops,   WA_WindowPropagation = Qt::WA_WindowPropagation,   WA_NoX11EventCompression = Qt::WA_NoX11EventCompression,   WA_TintedBackground = Qt::WA_TintedBackground,   WA_X11OpenGLOverlay = Qt::WA_X11OpenGLOverlay,   WA_AlwaysShowToolTips = Qt::WA_AlwaysShowToolTips,   WA_MacOpaqueSizeGrip = Qt::WA_MacOpaqueSizeGrip,   WA_SetStyle = Qt::WA_SetStyle,   WA_SetLocale = Qt::WA_SetLocale,   WA_MacShowFocusRect = Qt::WA_MacShowFocusRect,   WA_MacNormalSize = Qt::WA_MacNormalSize,   WA_MacSmallSize = Qt::WA_MacSmallSize,   WA_MacMiniSize = Qt::WA_MacMiniSize,   WA_LayoutUsesWidgetRect = Qt::WA_LayoutUsesWidgetRect,   WA_StyledBackground = Qt::WA_StyledBackground,   WA_MSWindowsUseDirect3D = Qt::WA_MSWindowsUseDirect3D,   WA_CanHostQMdiSubWindowTitleBar = Qt::WA_CanHostQMdiSubWindowTitleBar,   WA_MacAlwaysShowToolWindow = Qt::WA_MacAlwaysShowToolWindow,   WA_StyleSheet = Qt::WA_StyleSheet,   WA_ShowWithoutActivating = Qt::WA_ShowWithoutActivating,   WA_X11BypassTransientForHint = Qt::WA_X11BypassTransientForHint,   WA_NativeWindow = Qt::WA_NativeWindow,   WA_DontCreateNativeAncestors = Qt::WA_DontCreateNativeAncestors,   WA_MacVariableSize = Qt::WA_MacVariableSize,   WA_DontShowOnScreen = Qt::WA_DontShowOnScreen,   WA_X11NetWmWindowTypeDesktop = Qt::WA_X11NetWmWindowTypeDesktop,   WA_X11NetWmWindowTypeDock = Qt::WA_X11NetWmWindowTypeDock,   WA_X11NetWmWindowTypeToolBar = Qt::WA_X11NetWmWindowTypeToolBar,   WA_X11NetWmWindowTypeMenu = Qt::WA_X11NetWmWindowTypeMenu,   WA_X11NetWmWindowTypeUtility = Qt::WA_X11NetWmWindowTypeUtility,   WA_X11NetWmWindowTypeSplash = Qt::WA_X11NetWmWindowTypeSplash,   WA_X11NetWmWindowTypeDialog = Qt::WA_X11NetWmWindowTypeDialog,   WA_X11NetWmWindowTypeDropDownMenu = Qt::WA_X11NetWmWindowTypeDropDownMenu,   WA_X11NetWmWindowTypePopupMenu = Qt::WA_X11NetWmWindowTypePopupMenu,   WA_X11NetWmWindowTypeToolTip = Qt::WA_X11NetWmWindowTypeToolTip,   WA_X11NetWmWindowTypeNotification = Qt::WA_X11NetWmWindowTypeNotification,   WA_X11NetWmWindowTypeCombo = Qt::WA_X11NetWmWindowTypeCombo,   WA_X11NetWmWindowTypeDND = Qt::WA_X11NetWmWindowTypeDND,   WA_MacFrameworkScaled = Qt::WA_MacFrameworkScaled,   WA_SetWindowModality = Qt::WA_SetWindowModality,   WA_WState_WindowOpacitySet = Qt::WA_WState_WindowOpacitySet,   WA_TranslucentBackground = Qt::WA_TranslucentBackground,   WA_AcceptTouchEvents = Qt::WA_AcceptTouchEvents,   WA_WState_AcceptedTouchBeginEvent = Qt::WA_WState_AcceptedTouchBeginEvent,   WA_TouchPadAcceptSingleTouchEvents = Qt::WA_TouchPadAcceptSingleTouchEvents,   WA_X11DoNotAcceptFocus = Qt::WA_X11DoNotAcceptFocus,   WA_MacNoShadow = Qt::WA_MacNoShadow,   WA_AttributeCount = Qt::WA_AttributeCount};
enum WindowFrameSection{
  NoSection = Qt::NoSection,   LeftSection = Qt::LeftSection,   TopLeftSection = Qt::TopLeftSection,   TopSection = Qt::TopSection,   TopRightSection = Qt::TopRightSection,   RightSection = Qt::RightSection,   BottomRightSection = Qt::BottomRightSection,   BottomSection = Qt::BottomSection,   BottomLeftSection = Qt::BottomLeftSection,   TitleBarArea = Qt::TitleBarArea};
enum WindowModality{
  NonModal = Qt::NonModal,   WindowModal = Qt::WindowModal,   ApplicationModal = Qt::ApplicationModal};
enum WindowState{
  WindowNoState = Qt::WindowNoState,   WindowMinimized = Qt::WindowMinimized,   WindowMaximized = Qt::WindowMaximized,   WindowFullScreen = Qt::WindowFullScreen,   WindowActive = Qt::WindowActive};
enum WindowType{
  Widget = Qt::Widget,   Window = Qt::Window,   Dialog = Qt::Dialog,   Sheet = Qt::Sheet,   Drawer = Qt::Drawer,   Popup = Qt::Popup,   Tool = Qt::Tool,   ToolTip = Qt::ToolTip,   SplashScreen = Qt::SplashScreen,   Desktop = Qt::Desktop,   SubWindow = Qt::SubWindow,   ForeignWindow = Qt::ForeignWindow,   CoverWindow = Qt::CoverWindow,   WindowType_Mask = Qt::WindowType_Mask,   MSWindowsFixedSizeDialogHint = Qt::MSWindowsFixedSizeDialogHint,   MSWindowsOwnDC = Qt::MSWindowsOwnDC,   BypassWindowManagerHint = Qt::BypassWindowManagerHint,   X11BypassWindowManagerHint = Qt::X11BypassWindowManagerHint,   FramelessWindowHint = Qt::FramelessWindowHint,   WindowTitleHint = Qt::WindowTitleHint,   WindowSystemMenuHint = Qt::WindowSystemMenuHint,   WindowMinimizeButtonHint = Qt::WindowMinimizeButtonHint,   WindowMaximizeButtonHint = Qt::WindowMaximizeButtonHint,   WindowMinMaxButtonsHint = Qt::WindowMinMaxButtonsHint,   WindowContextHelpButtonHint = Qt::WindowContextHelpButtonHint,   WindowShadeButtonHint = Qt::WindowShadeButtonHint,   WindowStaysOnTopHint = Qt::WindowStaysOnTopHint,   WindowTransparentForInput = Qt::WindowTransparentForInput,   WindowOverridesSystemGestures = Qt::WindowOverridesSystemGestures,   WindowDoesNotAcceptFocus = Qt::WindowDoesNotAcceptFocus,   CustomizeWindowHint = Qt::CustomizeWindowHint,   WindowStaysOnBottomHint = Qt::WindowStaysOnBottomHint,   WindowCloseButtonHint = Qt::WindowCloseButtonHint,   MacWindowToolBarButtonHint = Qt::MacWindowToolBarButtonHint,   BypassGraphicsProxyWidget = Qt::BypassGraphicsProxyWidget,   WindowOkButtonHint = Qt::WindowOkButtonHint,   WindowCancelButtonHint = Qt::WindowCancelButtonHint,   NoDropShadowWindowHint = Qt::NoDropShadowWindowHint,   WindowFullscreenButtonHint = Qt::WindowFullscreenButtonHint};
Q_DECLARE_FLAGS(Alignment, AlignmentFlag)
Q_DECLARE_FLAGS(DockWidgetAreas, DockWidgetArea)
Q_DECLARE_FLAGS(DropActions, DropAction)
Q_DECLARE_FLAGS(FindChildOptions, FindChildOption)
Q_DECLARE_FLAGS(GestureFlags, GestureFlag)
Q_DECLARE_FLAGS(ImageConversionFlags, ImageConversionFlag)
Q_DECLARE_FLAGS(InputMethodHints, InputMethodHint)
Q_DECLARE_FLAGS(InputMethodQueries, InputMethodQuery)
Q_DECLARE_FLAGS(ItemFlags, ItemFlag)
Q_DECLARE_FLAGS(KeyboardModifiers, KeyboardModifier)
Q_DECLARE_FLAGS(MatchFlags, MatchFlag)
Q_DECLARE_FLAGS(MouseButtons, MouseButton)
Q_DECLARE_FLAGS(MouseEventFlags, MouseEventFlag)
Q_DECLARE_FLAGS(Orientations, Orientation)
Q_DECLARE_FLAGS(ScreenOrientations, ScreenOrientation)
Q_DECLARE_FLAGS(TextInteractionFlags, TextInteractionFlag)
Q_DECLARE_FLAGS(ToolBarAreas, ToolBarArea)
Q_DECLARE_FLAGS(TouchPointStates, TouchPointState)
Q_DECLARE_FLAGS(WindowStates, WindowState)
Q_DECLARE_FLAGS(WindowFlags, WindowType)
public slots:
   QTextCodec*  static_Qt_codecForHtml(const QByteArray&  ba);
   QString  static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode = Qt::WhiteSpacePre);
   bool  static_Qt_mightBeRichText(const QString&  arg__1);
};


