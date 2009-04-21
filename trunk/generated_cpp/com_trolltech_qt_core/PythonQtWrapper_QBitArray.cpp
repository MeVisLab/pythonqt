#include "PythonQtWrapper_QBitArray.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbitarray.h>
#include <qdatastream.h>

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray()
{ 
return new QBitArray(); }

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray(const QBitArray&  other)
{ 
return new QBitArray(other); }

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray(int  size, bool  val)
{ 
return new QBitArray(size, val); }

QBitArray  PythonQtWrapper_QBitArray::operator_negate(QBitArray* theWrappedObject) const
{
return  (*theWrappedObject).operator~();
}

int  PythonQtWrapper_QBitArray::size(QBitArray* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

bool  PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  size)
{
return  (*theWrappedObject).fill(val, size);
}

void PythonQtWrapper_QBitArray::resize(QBitArray* theWrappedObject, int  size)
{
 (*theWrappedObject).resize(size);
}

bool  PythonQtWrapper_QBitArray::isEmpty(QBitArray* theWrappedObject) const
{
return  (*theWrappedObject).isEmpty();
}

void PythonQtWrapper_QBitArray::writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QBitArray::operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const
{
return  (*theWrappedObject)== a;
}

QBitArray&  PythonQtWrapper_QBitArray::operator_xor_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return  (*theWrappedObject)^= arg__1;
}

void PythonQtWrapper_QBitArray::clearBit(QBitArray* theWrappedObject, int  i)
{
 (*theWrappedObject).clearBit(i);
}

bool  PythonQtWrapper_QBitArray::at(QBitArray* theWrappedObject, int  i) const
{
return  (*theWrappedObject).at(i);
}

QBitArray&  PythonQtWrapper_QBitArray::operator_or_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return  (*theWrappedObject)|= arg__1;
}

void PythonQtWrapper_QBitArray::truncate(QBitArray* theWrappedObject, int  pos)
{
 (*theWrappedObject).truncate(pos);
}

QBitArray&  PythonQtWrapper_QBitArray::operator_assign(QBitArray* theWrappedObject, const QBitArray&  other)
{
return  (*theWrappedObject)= other;
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject, bool  on) const
{
return  (*theWrappedObject).count(on);
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i, bool  val)
{
 (*theWrappedObject).setBit(i, val);
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

QBitArray&  PythonQtWrapper_QBitArray::operator_and_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return  (*theWrappedObject)&= arg__1;
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i)
{
 (*theWrappedObject).setBit(i);
}

void PythonQtWrapper_QBitArray::readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  first, int  last)
{
 (*theWrappedObject).fill(val, first, last);
}

void PythonQtWrapper_QBitArray::clear(QBitArray* theWrappedObject)
{
 (*theWrappedObject).clear();
}

bool  PythonQtWrapper_QBitArray::isNull(QBitArray* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

bool  PythonQtWrapper_QBitArray::toggleBit(QBitArray* theWrappedObject, int  i)
{
return  (*theWrappedObject).toggleBit(i);
}

bool  PythonQtWrapper_QBitArray::testBit(QBitArray* theWrappedObject, int  i) const
{
return  (*theWrappedObject).testBit(i);
}

