#include "PythonQtWrapper_QBitArray.h"

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

bool  PythonQtWrapper_QBitArray::at(QBitArray* theWrappedObject, int  i) const
{
return theWrappedObject->at(i);
}

void PythonQtWrapper_QBitArray::clear(QBitArray* theWrappedObject)
{
theWrappedObject->clear();
}

void PythonQtWrapper_QBitArray::clearBit(QBitArray* theWrappedObject, int  i)
{
theWrappedObject->clearBit(i);
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject) const
{
return theWrappedObject->count();
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject, bool  on) const
{
return theWrappedObject->count(on);
}

void PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  first, int  last)
{
theWrappedObject->fill(val, first, last);
}

bool  PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  size)
{
return theWrappedObject->fill(val, size);
}

bool  PythonQtWrapper_QBitArray::isEmpty(QBitArray* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

bool  PythonQtWrapper_QBitArray::isNull(QBitArray* theWrappedObject) const
{
return theWrappedObject->isNull();
}

QBitArray&  PythonQtWrapper_QBitArray::operator_and_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return *theWrappedObject &= arg__1;
}

void PythonQtWrapper_QBitArray::writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

QBitArray&  PythonQtWrapper_QBitArray::operator_assign(QBitArray* theWrappedObject, const QBitArray&  other)
{
return *theWrappedObject = other;
}

bool  PythonQtWrapper_QBitArray::operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const
{
return *theWrappedObject == a;
}

void PythonQtWrapper_QBitArray::readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

QBitArray&  PythonQtWrapper_QBitArray::operator_xor_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return *theWrappedObject ^= arg__1;
}

QBitArray&  PythonQtWrapper_QBitArray::operator_or_assign(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
return *theWrappedObject |= arg__1;
}

QBitArray  PythonQtWrapper_QBitArray::operator_negate(QBitArray* theWrappedObject) const
{
return theWrappedObject->operator~();
}

void PythonQtWrapper_QBitArray::resize(QBitArray* theWrappedObject, int  size)
{
theWrappedObject->resize(size);
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i)
{
theWrappedObject->setBit(i);
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i, bool  val)
{
theWrappedObject->setBit(i, val);
}

int  PythonQtWrapper_QBitArray::size(QBitArray* theWrappedObject) const
{
return theWrappedObject->size();
}

bool  PythonQtWrapper_QBitArray::testBit(QBitArray* theWrappedObject, int  i) const
{
return theWrappedObject->testBit(i);
}

bool  PythonQtWrapper_QBitArray::toggleBit(QBitArray* theWrappedObject, int  i)
{
return theWrappedObject->toggleBit(i);
}

void PythonQtWrapper_QBitArray::truncate(QBitArray* theWrappedObject, int  pos)
{
theWrappedObject->truncate(pos);
}

