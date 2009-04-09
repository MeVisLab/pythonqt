#ifndef PYTHONQTWRAPPER_QBITARRAY_H
#define PYTHONQTWRAPPER_QBITARRAY_H

#include <qbitarray.h>
#include <QObject>

#include <QVariant>
#include <qbitarray.h>
#include <qdatastream.h>

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
   QBitArray&  operator_and_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray&  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
   bool  operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const;
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   QBitArray&  operator_xor_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray&  operator_or_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray  operator_negate(QBitArray* theWrappedObject) const;
   void resize(QBitArray* theWrappedObject, int  size);
   void setBit(QBitArray* theWrappedObject, int  i);
   void setBit(QBitArray* theWrappedObject, int  i, bool  val);
   int  size(QBitArray* theWrappedObject) const;
   bool  testBit(QBitArray* theWrappedObject, int  i) const;
   bool  toggleBit(QBitArray* theWrappedObject, int  i);
   void truncate(QBitArray* theWrappedObject, int  pos);
};

#endif // PYTHONQTWRAPPER_QBITARRAY_H
