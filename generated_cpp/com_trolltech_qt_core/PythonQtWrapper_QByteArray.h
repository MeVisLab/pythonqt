#ifndef PYTHONQTWRAPPER_QBYTEARRAY_H
#define PYTHONQTWRAPPER_QBYTEARRAY_H

#include <qbytearray.h>
#include <QObject>

#include <QNoImplicitBoolCast>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qlist.h>

class PythonQtWrapper_QByteArray : public QObject
{ Q_OBJECT
public:
public slots:
QByteArray* new_QByteArray();
QByteArray* new_QByteArray(const QByteArray&  arg__1);
QByteArray* new_QByteArray(const char*  arg__1);
QByteArray* new_QByteArray(int  size, char  c);
void delete_QByteArray(QByteArray* obj) { delete obj; } 
   QByteArray&  append(QByteArray* theWrappedObject, char  c);
   QByteArray&  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray&  append(QByteArray* theWrappedObject, const QString&  s);
   char  at(QByteArray* theWrappedObject, int  i) const;
   int  capacity(QByteArray* theWrappedObject) const;
   void chop(QByteArray* theWrappedObject, int  n);
   void clear(QByteArray* theWrappedObject);
   QBool  contains(QByteArray* theWrappedObject, char  c) const;
   QBool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QBool  contains(QByteArray* theWrappedObject, const char*  a) const;
   int  count(QByteArray* theWrappedObject, char  c) const;
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray&  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, char  c);
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   bool  isEmpty(QByteArray* theWrappedObject) const;
   bool  isNull(QByteArray* theWrappedObject) const;
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
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray&  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray&  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray&  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray&  remove(QByteArray* theWrappedObject, int  index, int  len);
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray&  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   QByteArray&  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   QByteArray&  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   QByteArray&  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   void reserve(QByteArray* theWrappedObject, int  size);
   void resize(QByteArray* theWrappedObject, int  size);
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray&  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray&  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   QByteArray&  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray&  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   int  size(QByteArray* theWrappedObject) const;
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   void squeeze(QByteArray* theWrappedObject);
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
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
};

#endif // PYTHONQTWRAPPER_QBYTEARRAY_H
