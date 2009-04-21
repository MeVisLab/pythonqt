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
   void resize(QBitArray* theWrappedObject, int  size);
   void writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1);
   void clearBit(QBitArray* theWrappedObject, int  i);
   bool  testBit(QBitArray* theWrappedObject, int  i) const;
   QBitArray  operator_negate(QBitArray* theWrappedObject) const;
   bool  toggleBit(QBitArray* theWrappedObject, int  i);
   bool  at(QBitArray* theWrappedObject, int  i) const;
   int  size(QBitArray* theWrappedObject) const;
   bool  fill(QBitArray* theWrappedObject, bool  val, int  size = -1);
   bool  operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const;
   void truncate(QBitArray* theWrappedObject, int  pos);
   bool  isEmpty(QBitArray* theWrappedObject) const;
   QBitArray&  operator_assign(QBitArray* theWrappedObject, const QBitArray&  other);
   QBitArray&  operator_xor_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   QBitArray&  operator_or_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   int  count(QBitArray* theWrappedObject) const;
   bool  isNull(QBitArray* theWrappedObject) const;
   int  count(QBitArray* theWrappedObject, bool  on) const;
   QBitArray&  operator_and_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1);
   void readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1);
   void setBit(QBitArray* theWrappedObject, int  i, bool  val);
   void setBit(QBitArray* theWrappedObject, int  i);
   void fill(QBitArray* theWrappedObject, bool  val, int  first, int  last);
   void clear(QBitArray* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QBITARRAY_H
