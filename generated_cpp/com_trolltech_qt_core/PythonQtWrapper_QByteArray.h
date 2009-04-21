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
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   void squeeze(QByteArray* theWrappedObject);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   bool  isEmpty(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   void resize(QByteArray* theWrappedObject, int  size);
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray&  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray&  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   void reserve(QByteArray* theWrappedObject, int  size);
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   void clear(QByteArray* theWrappedObject);
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   QByteArray&  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   QBool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   int  capacity(QByteArray* theWrappedObject) const;
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   QByteArray&  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray&  append(QByteArray* theWrappedObject, const QString&  s);
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   QByteArray&  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   int  length(QByteArray* theWrappedObject) const;
   QByteArray&  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   QByteArray&  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   QByteArray&  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   void chop(QByteArray* theWrappedObject, int  n);
   QBool  contains(QByteArray* theWrappedObject, const char*  a) const;
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   QByteArray&  prepend(QByteArray* theWrappedObject, char  c);
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   QBool  contains(QByteArray* theWrappedObject, char  c) const;
   int  count(QByteArray* theWrappedObject, char  c) const;
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, char  c);
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   QByteArray&  append(QByteArray* theWrappedObject, char  c);
   QByteArray&  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QByteArray&  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   bool  isNull(QByteArray* theWrappedObject) const;
   QByteArray&  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray&  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   int  size(QByteArray* theWrappedObject) const;
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   char  at(QByteArray* theWrappedObject, int  i) const;
   QByteArray&  remove(QByteArray* theWrappedObject, int  index, int  len);
   QByteArray&  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray&  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   void truncate(QByteArray* theWrappedObject, int  pos);
};

#endif // PYTHONQTWRAPPER_QBYTEARRAY_H
