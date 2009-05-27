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
   QByteArray*  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray*  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   bool  isNull(QByteArray* theWrappedObject) const;
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   QByteArray*  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   char  at(QByteArray* theWrappedObject, int  i) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, char  c);
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   QByteArray*  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  capacity(QByteArray* theWrappedObject) const;
   void truncate(QByteArray* theWrappedObject, int  pos);
   void chop(QByteArray* theWrappedObject, int  n);
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   QByteArray*  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   QByteArray*  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   QByteArray*  append(QByteArray* theWrappedObject, char  c);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QBool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
   QByteArray*  remove(QByteArray* theWrappedObject, int  index, int  len);
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   int  length(QByteArray* theWrappedObject) const;
   QByteArray*  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray*  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   void reserve(QByteArray* theWrappedObject, int  size);
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   void squeeze(QByteArray* theWrappedObject);
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray*  append(QByteArray* theWrappedObject, const QString&  s);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   QByteArray*  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   void clear(QByteArray* theWrappedObject);
   void resize(QByteArray* theWrappedObject, int  size);
   QByteArray*  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray*  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   QBool  contains(QByteArray* theWrappedObject, const char*  a) const;
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   bool  isEmpty(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   int  count(QByteArray* theWrappedObject, char  c) const;
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray*  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QBool  contains(QByteArray* theWrappedObject, char  c) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   int  size(QByteArray* theWrappedObject) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray*  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   QByteArray*  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
};

#endif // PYTHONQTWRAPPER_QBYTEARRAY_H
