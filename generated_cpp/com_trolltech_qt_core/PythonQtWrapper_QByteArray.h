#ifndef PYTHONQTWRAPPER_QBYTEARRAY_H
#define PYTHONQTWRAPPER_QBYTEARRAY_H

#include <qbytearray.h>
#include <QObject>

#include <PythonQt.h>

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
   int  capacity(QByteArray* theWrappedObject) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   int  size(QByteArray* theWrappedObject) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   QByteArray&  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   QBool  contains(QByteArray* theWrappedObject, const char*  a) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, char  c);
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   QByteArray&  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   void resize(QByteArray* theWrappedObject, int  size);
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   char  at(QByteArray* theWrappedObject, int  i) const;
   void clear(QByteArray* theWrappedObject);
   QByteArray&  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   QByteArray&  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray&  append(QByteArray* theWrappedObject, char  c);
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   void squeeze(QByteArray* theWrappedObject);
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   QByteArray&  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   QByteArray&  remove(QByteArray* theWrappedObject, int  index, int  len);
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   QByteArray&  append(QByteArray* theWrappedObject, const QString&  s);
   QByteArray&  prepend(QByteArray* theWrappedObject, char  c);
   QBool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   int  count(QByteArray* theWrappedObject, char  c) const;
   void chop(QByteArray* theWrappedObject, int  n);
   int  length(QByteArray* theWrappedObject) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  isEmpty(QByteArray* theWrappedObject) const;
   QByteArray&  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   void reserve(QByteArray* theWrappedObject, int  size);
   void truncate(QByteArray* theWrappedObject, int  pos);
   QByteArray&  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QBool  contains(QByteArray* theWrappedObject, char  c) const;
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   QByteArray&  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   bool  isNull(QByteArray* theWrappedObject) const;
   QByteArray&  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, char  after);
};

#endif // PYTHONQTWRAPPER_QBYTEARRAY_H
