#ifndef PYTHONQTWRAPPER_QBITARRAY_H
#define PYTHONQTWRAPPER_QBITARRAY_H

#include <qbitarray.h>
#include <QObject>

#include <PythonQt.h>

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
   QBitArray  operator_negate(QBitArray* theWrappedObject) const;
   int  size(QBitArray* theWrappedObject) const;
   bool  fill(QBitArray* theWrappedObject, bool  val, int  size = -1);
   void resize(QBitArray* theWrappedObject, int  size);
   bool  isEmpty(QBitArray* theWrappedObject) const;
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const;
   QBitArray&  operator_xor_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void clearBit(QBitArray* theWrappedObject, int  i);
   bool  at(QBitArray* theWrappedObject, int  i) const;
   QBitArray&  operator_or_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void truncate(QBitArray* theWrappedObject, int  pos);
   QBitArray&  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
   int  count(QBitArray* theWrappedObject, bool  on) const;
   void setBit(QBitArray* theWrappedObject, int  i, bool  val);
   int  count(QBitArray* theWrappedObject) const;
   QBitArray&  operator_and_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void setBit(QBitArray* theWrappedObject, int  i);
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   void fill(QBitArray* theWrappedObject, bool  val, int  first, int  last);
   void clear(QBitArray* theWrappedObject);
   bool  isNull(QBitArray* theWrappedObject) const;
   bool  toggleBit(QBitArray* theWrappedObject, int  i);
   bool  testBit(QBitArray* theWrappedObject, int  i) const;
};

#endif // PYTHONQTWRAPPER_QBITARRAY_H
