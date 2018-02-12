#include "com_trolltech_qt_core_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDate>
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
  return ( theWrappedObject->at(i));
}

void PythonQtWrapper_QBitArray::clear(QBitArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QBitArray::clearBit(QBitArray* theWrappedObject, int  i)
{
  ( theWrappedObject->clearBit(i));
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject, bool  on) const
{
  return ( theWrappedObject->count(on));
}

void PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  first, int  last)
{
  ( theWrappedObject->fill(val, first, last));
}

bool  PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  size)
{
  return ( theWrappedObject->fill(val, size));
}

bool  PythonQtWrapper_QBitArray::isEmpty(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QBitArray::isNull(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QBitArray::__ne__(QBitArray* theWrappedObject, const QBitArray&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QBitArray  PythonQtWrapper_QBitArray::__and__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)& arg__2);
}

QBitArray*  PythonQtWrapper_QBitArray::__iand__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)&= arg__1);
}

void PythonQtWrapper_QBitArray::writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QBitArray*  PythonQtWrapper_QBitArray::operator_assign(QBitArray* theWrappedObject, const QBitArray&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QBitArray::__eq__(QBitArray* theWrappedObject, const QBitArray&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QBitArray::readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QBitArray  PythonQtWrapper_QBitArray::__xor__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)^ arg__2);
}

QBitArray*  PythonQtWrapper_QBitArray::__ixor__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)^= arg__1);
}

QBitArray  PythonQtWrapper_QBitArray::__or__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)| arg__2);
}

QBitArray*  PythonQtWrapper_QBitArray::__ior__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)|= arg__1);
}

QBitArray  PythonQtWrapper_QBitArray::__invert__(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->operator~());
}

void PythonQtWrapper_QBitArray::resize(QBitArray* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i)
{
  ( theWrappedObject->setBit(i));
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i, bool  val)
{
  ( theWrappedObject->setBit(i, val));
}

int  PythonQtWrapper_QBitArray::size(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QBitArray::swap(QBitArray* theWrappedObject, QBitArray&  other)
{
  ( theWrappedObject->swap(other));
}

bool  PythonQtWrapper_QBitArray::testBit(QBitArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->testBit(i));
}

bool  PythonQtWrapper_QBitArray::toggleBit(QBitArray* theWrappedObject, int  i)
{
  return ( theWrappedObject->toggleBit(i));
}

void PythonQtWrapper_QBitArray::truncate(QBitArray* theWrappedObject, int  pos)
{
  ( theWrappedObject->truncate(pos));
}

QString PythonQtWrapper_QBitArray::py_toString(QBitArray* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QByteArray* PythonQtWrapper_QByteArray::new_QByteArray()
{ 
return new QByteArray(); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(const QByteArray&  arg__1)
{ 
return new QByteArray(arg__1); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(int  size, char  c)
{ 
return new QByteArray(size, c); }

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->append(c));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->append(a));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QString&  s)
{
  return &( theWrappedObject->append(s));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->append(s, len));
}

char  PythonQtWrapper_QByteArray::at(QByteArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

int  PythonQtWrapper_QByteArray::capacity(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

const char*  PythonQtWrapper_QByteArray::cbegin(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->cbegin());
}

const char*  PythonQtWrapper_QByteArray::cend(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->cend());
}

void PythonQtWrapper_QByteArray::chop(QByteArray* theWrappedObject, int  n)
{
  ( theWrappedObject->chop(n));
}

void PythonQtWrapper_QByteArray::clear(QByteArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->contains(c));
}

bool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->contains(a));
}

bool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, const char*  a) const
{
  return ( theWrappedObject->contains(a));
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->count(c));
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->count(a));
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->endsWith(c));
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->endsWith(a));
}

QByteArray*  PythonQtWrapper_QByteArray::fill(QByteArray* theWrappedObject, char  c, int  size)
{
  return &( theWrappedObject->fill(c, size));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromBase64(const QByteArray&  base64)
{
  return (QByteArray::fromBase64(base64));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromBase64(const QByteArray&  base64, QByteArray::Base64Options  options)
{
  return (QByteArray::fromBase64(base64, options));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromHex(const QByteArray&  hexEncoded)
{
  return (QByteArray::fromHex(hexEncoded));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent)
{
  return (QByteArray::fromPercentEncoding(pctEncoded, percent));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->indexOf(c, from));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->indexOf(a, from));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->indexOf(s, from));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, char  c)
{
  return &( theWrappedObject->insert(i, c));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a)
{
  return &( theWrappedObject->insert(i, a));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QString&  s)
{
  return &( theWrappedObject->insert(i, s));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const char*  s, int  len)
{
  return &( theWrappedObject->insert(i, s, len));
}

bool  PythonQtWrapper_QByteArray::isEmpty(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QByteArray::isNull(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QByteArray::isSharedWith(QByteArray* theWrappedObject, const QByteArray&  other) const
{
  return ( theWrappedObject->isSharedWith(other));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->lastIndexOf(c, from));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->lastIndexOf(a, from));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->lastIndexOf(s, from));
}

QByteArray  PythonQtWrapper_QByteArray::left(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->left(len));
}

QByteArray  PythonQtWrapper_QByteArray::leftJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->leftJustified(width, fill, truncate));
}

int  PythonQtWrapper_QByteArray::length(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QByteArray  PythonQtWrapper_QByteArray::mid(QByteArray* theWrappedObject, int  index, int  len) const
{
  return ( theWrappedObject->mid(index, len));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(double  arg__1, char  f, int  prec)
{
  return (QByteArray::number(arg__1, f, prec));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(int  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(qlonglong  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, char  a2)
{
  return ( (*theWrappedObject)+ a2);
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)+ a2);
}

const QString  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QString&  s)
{
  return ( (*theWrappedObject)+ s);
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const char*  a2)
{
  return ( (*theWrappedObject)+ a2);
}

QByteArray*  PythonQtWrapper_QByteArray::__iadd__(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( (*theWrappedObject)+= a);
}

bool  PythonQtWrapper_QByteArray::__lt__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)< a2);
}

bool  PythonQtWrapper_QByteArray::__lt__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)< s2);
}

void PythonQtWrapper_QByteArray::writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QByteArray::__le__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)<= a2);
}

bool  PythonQtWrapper_QByteArray::__le__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)<= s2);
}

QByteArray*  PythonQtWrapper_QByteArray::operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QByteArray::__eq__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)== a2);
}

bool  PythonQtWrapper_QByteArray::__eq__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)== s2);
}

bool  PythonQtWrapper_QByteArray::__gt__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)> a2);
}

bool  PythonQtWrapper_QByteArray::__gt__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)> s2);
}

bool  PythonQtWrapper_QByteArray::__ge__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)>= a2);
}

bool  PythonQtWrapper_QByteArray::__ge__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)>= s2);
}

void PythonQtWrapper_QByteArray::readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->prepend(c));
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->prepend(a));
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->prepend(s, len));
}

void PythonQtWrapper_QByteArray::push_back(QByteArray* theWrappedObject, const QByteArray&  a)
{
  ( theWrappedObject->push_back(a));
}

void PythonQtWrapper_QByteArray::push_front(QByteArray* theWrappedObject, const QByteArray&  a)
{
  ( theWrappedObject->push_front(a));
}

QByteArray*  PythonQtWrapper_QByteArray::remove(QByteArray* theWrappedObject, int  index, int  len)
{
  return &( theWrappedObject->remove(index, len));
}

QByteArray  PythonQtWrapper_QByteArray::repeated(QByteArray* theWrappedObject, int  times) const
{
  return ( theWrappedObject->repeated(times));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, char  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  c, const QString&  after)
{
  return &( theWrappedObject->replace(c, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const char*  before, int  bsize, const char*  after, int  asize)
{
  return &( theWrappedObject->replace(before, bsize, after, asize));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s)
{
  return &( theWrappedObject->replace(index, len, s));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, int  index, int  len, const char*  s, int  alen)
{
  return &( theWrappedObject->replace(index, len, s, alen));
}

void PythonQtWrapper_QByteArray::reserve(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

void PythonQtWrapper_QByteArray::resize(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

QByteArray  PythonQtWrapper_QByteArray::right(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->right(len));
}

QByteArray  PythonQtWrapper_QByteArray::rightJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->rightJustified(width, fill, truncate));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, double  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, float  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, int  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, short  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setRawData(QByteArray* theWrappedObject, const char*  a, uint  n)
{
  return &( theWrappedObject->setRawData(a, n));
}

QByteArray  PythonQtWrapper_QByteArray::simplified(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->simplified());
}

int  PythonQtWrapper_QByteArray::size(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QList<QByteArray >  PythonQtWrapper_QByteArray::split(QByteArray* theWrappedObject, char  sep) const
{
  return ( theWrappedObject->split(sep));
}

void PythonQtWrapper_QByteArray::squeeze(QByteArray* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->startsWith(c));
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->startsWith(a));
}

void PythonQtWrapper_QByteArray::swap(QByteArray* theWrappedObject, QByteArray&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QByteArray::toBase64(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toBase64());
}

QByteArray  PythonQtWrapper_QByteArray::toBase64(QByteArray* theWrappedObject, QByteArray::Base64Options  options) const
{
  return ( theWrappedObject->toBase64(options));
}

double  PythonQtWrapper_QByteArray::toDouble(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toDouble(ok));
}

float  PythonQtWrapper_QByteArray::toFloat(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toFloat(ok));
}

QByteArray  PythonQtWrapper_QByteArray::toHex(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toHex());
}

int  PythonQtWrapper_QByteArray::toInt(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toInt(ok, base));
}

QByteArray  PythonQtWrapper_QByteArray::toLower(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toLower());
}

QByteArray  PythonQtWrapper_QByteArray::toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude, const QByteArray&  include, char  percent) const
{
  return ( theWrappedObject->toPercentEncoding(exclude, include, percent));
}

ushort  PythonQtWrapper_QByteArray::toUShort(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toUShort(ok, base));
}

QByteArray  PythonQtWrapper_QByteArray::toUpper(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toUpper());
}

QByteArray  PythonQtWrapper_QByteArray::trimmed(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->trimmed());
}

void PythonQtWrapper_QByteArray::truncate(QByteArray* theWrappedObject, int  pos)
{
  ( theWrappedObject->truncate(pos));
}



QDate* PythonQtWrapper_QDate::new_QDate()
{ 
return new QDate(); }

QDate* PythonQtWrapper_QDate::new_QDate(int  y, int  m, int  d)
{ 
return new QDate(y, m, d); }

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, qint64  days) const
{
  return ( theWrappedObject->addDays(days));
}

QDate  PythonQtWrapper_QDate::addMonths(QDate* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QDate  PythonQtWrapper_QDate::addYears(QDate* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

int  PythonQtWrapper_QDate::day(QDate* theWrappedObject) const
{
  return ( theWrappedObject->day());
}

int  PythonQtWrapper_QDate::dayOfWeek(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfWeek());
}

int  PythonQtWrapper_QDate::dayOfYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfYear());
}

int  PythonQtWrapper_QDate::daysInMonth(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInMonth());
}

int  PythonQtWrapper_QDate::daysInYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInYear());
}

qint64  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, const QDate&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromJulianDay(qint64  jd_)
{
  return (QDate::fromJulianDay(jd_));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDate::fromString(s, f));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, const QString&  format)
{
  return (QDate::fromString(s, format));
}

void PythonQtWrapper_QDate::getDate(QDate* theWrappedObject, int*  year, int*  month, int*  day)
{
  ( theWrappedObject->getDate(year, month, day));
}

bool  PythonQtWrapper_QDate::static_QDate_isLeapYear(int  year)
{
  return (QDate::isLeapYear(year));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QDate::static_QDate_isValid(int  y, int  m, int  d)
{
  return (QDate::isValid(y, m, d));
}

QString  PythonQtWrapper_QDate::static_QDate_longDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::longDayName(weekday, type));
}

QString  PythonQtWrapper_QDate::static_QDate_longMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::longMonthName(month, type));
}

int  PythonQtWrapper_QDate::month(QDate* theWrappedObject) const
{
  return ( theWrappedObject->month());
}

bool  PythonQtWrapper_QDate::__ne__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QDate::__lt__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QDate::__le__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)<= other);
}

bool  PythonQtWrapper_QDate::__eq__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QDate::__gt__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QDate::__ge__(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)>= other);
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

bool  PythonQtWrapper_QDate::setDate(QDate* theWrappedObject, int  year, int  month, int  day)
{
  return ( theWrappedObject->setDate(year, month, day));
}

QString  PythonQtWrapper_QDate::static_QDate_shortDayName(int  weekday, QDate::MonthNameType  type)
{
  return (QDate::shortDayName(weekday, type));
}

QString  PythonQtWrapper_QDate::static_QDate_shortMonthName(int  month, QDate::MonthNameType  type)
{
  return (QDate::shortMonthName(month, type));
}

qint64  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

int  PythonQtWrapper_QDate::weekNumber(QDate* theWrappedObject, int*  yearNum) const
{
  return ( theWrappedObject->weekNumber(yearNum));
}

int  PythonQtWrapper_QDate::year(QDate* theWrappedObject) const
{
  return ( theWrappedObject->year());
}

QString PythonQtWrapper_QDate::py_toString(QDate* obj) { return obj->toString(); }


QDateTime* PythonQtWrapper_QDateTime::new_QDateTime()
{ 
return new QDateTime(); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1)
{ 
return new QDateTime(arg__1); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec)
{ 
return new QDateTime(arg__1, arg__2, spec); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  date, const QTime&  time, Qt::TimeSpec  spec, int  offsetSeconds)
{ 
return new QDateTime(date, time, spec, offsetSeconds); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  date, const QTime&  time, const QTimeZone&  timeZone)
{ 
return new QDateTime(date, time, timeZone); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDateTime&  other)
{ 
return new QDateTime(other); }

QDateTime  PythonQtWrapper_QDateTime::addDays(QDateTime* theWrappedObject, qint64  days) const
{
  return ( theWrappedObject->addDays(days));
}

QDateTime  PythonQtWrapper_QDateTime::addMSecs(QDateTime* theWrappedObject, qint64  msecs) const
{
  return ( theWrappedObject->addMSecs(msecs));
}

QDateTime  PythonQtWrapper_QDateTime::addMonths(QDateTime* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QDateTime  PythonQtWrapper_QDateTime::addSecs(QDateTime* theWrappedObject, qint64  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QDateTime  PythonQtWrapper_QDateTime::addYears(QDateTime* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_currentDateTime()
{
  return (QDateTime::currentDateTime());
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_currentDateTimeUtc()
{
  return (QDateTime::currentDateTimeUtc());
}

qint64  PythonQtWrapper_QDateTime::static_QDateTime_currentMSecsSinceEpoch()
{
  return (QDateTime::currentMSecsSinceEpoch());
}

QDate  PythonQtWrapper_QDateTime::date(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->date());
}

qint64  PythonQtWrapper_QDateTime::daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromMSecsSinceEpoch(qint64  msecs)
{
  return (QDateTime::fromMSecsSinceEpoch(msecs));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, Qt::TimeSpec  spec, int  offsetFromUtc)
{
  return (QDateTime::fromMSecsSinceEpoch(msecs, spec, offsetFromUtc));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromMSecsSinceEpoch(qint64  msecs, const QTimeZone&  timeZone)
{
  return (QDateTime::fromMSecsSinceEpoch(msecs, timeZone));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDateTime::fromString(s, f));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, const QString&  format)
{
  return (QDateTime::fromString(s, format));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC)
{
  return (QDateTime::fromTime_t(secsSince1Jan1970UTC));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC, Qt::TimeSpec  spec, int  offsetFromUtc)
{
  return (QDateTime::fromTime_t(secsSince1Jan1970UTC, spec, offsetFromUtc));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC, const QTimeZone&  timeZone)
{
  return (QDateTime::fromTime_t(secsSince1Jan1970UTC, timeZone));
}

bool  PythonQtWrapper_QDateTime::isDaylightTime(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->isDaylightTime());
}

bool  PythonQtWrapper_QDateTime::isNull(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDateTime::isValid(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QDateTime::msecsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
  return ( theWrappedObject->msecsTo(arg__1));
}

int  PythonQtWrapper_QDateTime::offsetFromUtc(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->offsetFromUtc());
}

bool  PythonQtWrapper_QDateTime::__ne__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QDateTime::__lt__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QDateTime::writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QDateTime::__le__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)<= other);
}

bool  PythonQtWrapper_QDateTime::__eq__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QDateTime::__gt__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QDateTime::__ge__(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)>= other);
}

void PythonQtWrapper_QDateTime::readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qint64  PythonQtWrapper_QDateTime::secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
  return ( theWrappedObject->secsTo(arg__1));
}

void PythonQtWrapper_QDateTime::setDate(QDateTime* theWrappedObject, const QDate&  date)
{
  ( theWrappedObject->setDate(date));
}

void PythonQtWrapper_QDateTime::setMSecsSinceEpoch(QDateTime* theWrappedObject, qint64  msecs)
{
  ( theWrappedObject->setMSecsSinceEpoch(msecs));
}

void PythonQtWrapper_QDateTime::setOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds)
{
  ( theWrappedObject->setOffsetFromUtc(offsetSeconds));
}

void PythonQtWrapper_QDateTime::setTime(QDateTime* theWrappedObject, const QTime&  time)
{
  ( theWrappedObject->setTime(time));
}

void PythonQtWrapper_QDateTime::setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec)
{
  ( theWrappedObject->setTimeSpec(spec));
}

void PythonQtWrapper_QDateTime::setTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone)
{
  ( theWrappedObject->setTimeZone(toZone));
}

void PythonQtWrapper_QDateTime::setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC)
{
  ( theWrappedObject->setTime_t(secsSince1Jan1970UTC));
}

void PythonQtWrapper_QDateTime::setUtcOffset(QDateTime* theWrappedObject, int  seconds)
{
  ( theWrappedObject->setUtcOffset(seconds));
}

void PythonQtWrapper_QDateTime::swap(QDateTime* theWrappedObject, QDateTime&  other)
{
  ( theWrappedObject->swap(other));
}

QTime  PythonQtWrapper_QDateTime::time(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->time());
}

Qt::TimeSpec  PythonQtWrapper_QDateTime::timeSpec(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->timeSpec());
}

QTimeZone  PythonQtWrapper_QDateTime::timeZone(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->timeZone());
}

QString  PythonQtWrapper_QDateTime::timeZoneAbbreviation(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->timeZoneAbbreviation());
}

QDateTime  PythonQtWrapper_QDateTime::toLocalTime(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toLocalTime());
}

qint64  PythonQtWrapper_QDateTime::toMSecsSinceEpoch(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toMSecsSinceEpoch());
}

QDateTime  PythonQtWrapper_QDateTime::toOffsetFromUtc(QDateTime* theWrappedObject, int  offsetSeconds) const
{
  return ( theWrappedObject->toOffsetFromUtc(offsetSeconds));
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QDateTime  PythonQtWrapper_QDateTime::toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const
{
  return ( theWrappedObject->toTimeSpec(spec));
}

QDateTime  PythonQtWrapper_QDateTime::toTimeZone(QDateTime* theWrappedObject, const QTimeZone&  toZone) const
{
  return ( theWrappedObject->toTimeZone(toZone));
}

uint  PythonQtWrapper_QDateTime::toTime_t(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toTime_t());
}

QDateTime  PythonQtWrapper_QDateTime::toUTC(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toUTC());
}

int  PythonQtWrapper_QDateTime::utcOffset(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->utcOffset());
}

QString PythonQtWrapper_QDateTime::py_toString(QDateTime* obj) { return obj->toString(); }


QLine* PythonQtWrapper_QLine::new_QLine()
{ 
return new QLine(); }

QLine* PythonQtWrapper_QLine::new_QLine(const QPoint&  pt1, const QPoint&  pt2)
{ 
return new QLine(pt1, pt2); }

QLine* PythonQtWrapper_QLine::new_QLine(int  x1, int  y1, int  x2, int  y2)
{ 
return new QLine(x1, y1, x2, y2); }

int  PythonQtWrapper_QLine::dx(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

int  PythonQtWrapper_QLine::dy(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

bool  PythonQtWrapper_QLine::isNull(QLine* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QLine::__ne__(QLine* theWrappedObject, const QLine&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLine::writeTo(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLine::__eq__(QLine* theWrappedObject, const QLine&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLine::readFrom(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPoint  PythonQtWrapper_QLine::p1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPoint  PythonQtWrapper_QLine::p2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

void PythonQtWrapper_QLine::setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QLine::setP1(QLine* theWrappedObject, const QPoint&  p1)
{
  ( theWrappedObject->setP1(p1));
}

void PythonQtWrapper_QLine::setP2(QLine* theWrappedObject, const QPoint&  p2)
{
  ( theWrappedObject->setP2(p2));
}

void PythonQtWrapper_QLine::setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

int  PythonQtWrapper_QLine::x1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

int  PythonQtWrapper_QLine::x2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

int  PythonQtWrapper_QLine::y1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

int  PythonQtWrapper_QLine::y2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLine::py_toString(QLine* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QLineF* PythonQtWrapper_QLineF::new_QLineF()
{ 
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QLine&  line)
{ 
return new QLineF(line); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{ 
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{ 
return new QLineF(x1, y1, x2, y2); }

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angle(l));
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angleTo(l));
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

QLineF  PythonQtWrapper_QLineF::static_QLineF_fromPolar(qreal  length, qreal  angle)
{
  return (QLineF::fromPolar(length, angle));
}

QLineF::IntersectType  PythonQtWrapper_QLineF::intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const
{
  return ( theWrappedObject->intersect(l, intersectionPoint));
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->normalVector());
}

bool  PythonQtWrapper_QLineF::__ne__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)!= d);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLineF::__eq__(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAt(t));
}

void PythonQtWrapper_QLineF::setAngle(QLineF* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setAngle(angle));
}

void PythonQtWrapper_QLineF::setLength(QLineF* theWrappedObject, qreal  len)
{
  ( theWrappedObject->setLength(len));
}

void PythonQtWrapper_QLineF::setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

void PythonQtWrapper_QLineF::setP1(QLineF* theWrappedObject, const QPointF&  p1)
{
  ( theWrappedObject->setP1(p1));
}

void PythonQtWrapper_QLineF::setP2(QLineF* theWrappedObject, const QPointF&  p2)
{
  ( theWrappedObject->setP2(p2));
}

void PythonQtWrapper_QLineF::setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

QLine  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->toLine());
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->unitVector());
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

QString PythonQtWrapper_QLineF::py_toString(QLineF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QLocale* PythonQtWrapper_QLocale::new_QLocale()
{ 
return new QLocale(); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(QLocale::Language  language, QLocale::Country  country)
{ 
return new QLocale(language, country); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(QLocale::Language  language, QLocale::Script  script, QLocale::Country  country)
{ 
return new QLocale(language, script, country); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QLocale&  other)
{ 
return new QLocale(other); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QString&  name)
{ 
return new QLocale(name); }

QString  PythonQtWrapper_QLocale::amText(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->amText());
}

QString  PythonQtWrapper_QLocale::bcp47Name(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->bcp47Name());
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_c()
{
  return (QLocale::c());
}

QList<QLocale::Country >  PythonQtWrapper_QLocale::static_QLocale_countriesForLanguage(QLocale::Language  lang)
{
  return (QLocale::countriesForLanguage(lang));
}

QLocale::Country  PythonQtWrapper_QLocale::country(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->country());
}

QString  PythonQtWrapper_QLocale::static_QLocale_countryToString(QLocale::Country  country)
{
  return (QLocale::countryToString(country));
}

QString  PythonQtWrapper_QLocale::createSeparatedList(QLocale* theWrappedObject, const QStringList&  strl) const
{
  return ( theWrappedObject->createSeparatedList(strl));
}

QString  PythonQtWrapper_QLocale::currencySymbol(QLocale* theWrappedObject, QLocale::CurrencySymbolFormat  arg__1) const
{
  return ( theWrappedObject->currencySymbol(arg__1));
}

QString  PythonQtWrapper_QLocale::dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateFormat(format));
}

QString  PythonQtWrapper_QLocale::dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateTimeFormat(format));
}

QString  PythonQtWrapper_QLocale::dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dayName(arg__1, format));
}

QChar  PythonQtWrapper_QLocale::decimalPoint(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->decimalPoint());
}

QChar  PythonQtWrapper_QLocale::exponential(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->exponential());
}

Qt::DayOfWeek  PythonQtWrapper_QLocale::firstDayOfWeek(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->firstDayOfWeek());
}

QChar  PythonQtWrapper_QLocale::groupSeparator(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->groupSeparator());
}

QLocale::Language  PythonQtWrapper_QLocale::language(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

QString  PythonQtWrapper_QLocale::static_QLocale_languageToString(QLocale::Language  language)
{
  return (QLocale::languageToString(language));
}

QList<QLocale >  PythonQtWrapper_QLocale::static_QLocale_matchingLocales(QLocale::Language  language, QLocale::Script  script, QLocale::Country  country)
{
  return (QLocale::matchingLocales(language, script, country));
}

QLocale::MeasurementSystem  PythonQtWrapper_QLocale::measurementSystem(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->measurementSystem());
}

QString  PythonQtWrapper_QLocale::monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->monthName(arg__1, format));
}

QString  PythonQtWrapper_QLocale::name(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QString  PythonQtWrapper_QLocale::nativeCountryName(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->nativeCountryName());
}

QString  PythonQtWrapper_QLocale::nativeLanguageName(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->nativeLanguageName());
}

QChar  PythonQtWrapper_QLocale::negativeSign(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->negativeSign());
}

QLocale::NumberOptions  PythonQtWrapper_QLocale::numberOptions(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->numberOptions());
}

bool  PythonQtWrapper_QLocale::__ne__(QLocale* theWrappedObject, const QLocale&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QLocale::writeTo(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QLocale::__eq__(QLocale* theWrappedObject, const QLocale&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QLocale::readFrom(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QChar  PythonQtWrapper_QLocale::percent(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->percent());
}

QString  PythonQtWrapper_QLocale::pmText(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->pmText());
}

QChar  PythonQtWrapper_QLocale::positiveSign(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->positiveSign());
}

QString  PythonQtWrapper_QLocale::quoteString(QLocale* theWrappedObject, const QString&  str, QLocale::QuotationStyle  style) const
{
  return ( theWrappedObject->quoteString(str, style));
}

QString  PythonQtWrapper_QLocale::quoteString(QLocale* theWrappedObject, const QStringRef&  str, QLocale::QuotationStyle  style) const
{
  return ( theWrappedObject->quoteString(str, style));
}

QLocale::Script  PythonQtWrapper_QLocale::script(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->script());
}

QString  PythonQtWrapper_QLocale::static_QLocale_scriptToString(QLocale::Script  script)
{
  return (QLocale::scriptToString(script));
}

void PythonQtWrapper_QLocale::static_QLocale_setDefault(const QLocale&  locale)
{
  (QLocale::setDefault(locale));
}

void PythonQtWrapper_QLocale::setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options)
{
  ( theWrappedObject->setNumberOptions(options));
}

QString  PythonQtWrapper_QLocale::standaloneDayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->standaloneDayName(arg__1, format));
}

QString  PythonQtWrapper_QLocale::standaloneMonthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->standaloneMonthName(arg__1, format));
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_system()
{
  return (QLocale::system());
}

Qt::LayoutDirection  PythonQtWrapper_QLocale::textDirection(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

QString  PythonQtWrapper_QLocale::timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->timeFormat(format));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, double  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, float  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, int  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, qlonglong  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, qulonglong  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, short  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, uint  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QString  PythonQtWrapper_QLocale::toCurrencyString(QLocale* theWrappedObject, ushort  arg__1, const QString&  symbol) const
{
  return ( theWrappedObject->toCurrencyString(arg__1, symbol));
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toDate(string, arg__2));
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDate(string, format));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

double  PythonQtWrapper_QLocale::toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toDouble(s, ok));
}

double  PythonQtWrapper_QLocale::toDouble(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toDouble(s, ok));
}

float  PythonQtWrapper_QLocale::toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toFloat(s, ok));
}

float  PythonQtWrapper_QLocale::toFloat(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toFloat(s, ok));
}

int  PythonQtWrapper_QLocale::toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toInt(s, ok));
}

int  PythonQtWrapper_QLocale::toInt(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toInt(s, ok));
}

qlonglong  PythonQtWrapper_QLocale::toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toLongLong(s, ok));
}

qlonglong  PythonQtWrapper_QLocale::toLongLong(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toLongLong(s, ok));
}

QString  PythonQtWrapper_QLocale::toLower(QLocale* theWrappedObject, const QString&  str) const
{
  return ( theWrappedObject->toLower(str));
}

short  PythonQtWrapper_QLocale::toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toShort(s, ok));
}

short  PythonQtWrapper_QLocale::toShort(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toShort(s, ok));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(date, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(date, formatStr));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(time, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(time, formatStr));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, double  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, float  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, int  i) const
{
  return ( theWrappedObject->toString(i));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, qlonglong  i) const
{
  return ( theWrappedObject->toString(i));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, short  i) const
{
  return ( theWrappedObject->toString(i));
}

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toTime(string, arg__2));
}

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toTime(string, format));
}

uint  PythonQtWrapper_QLocale::toUInt(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toUInt(s, ok));
}

uint  PythonQtWrapper_QLocale::toUInt(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toUInt(s, ok));
}

qulonglong  PythonQtWrapper_QLocale::toULongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toULongLong(s, ok));
}

qulonglong  PythonQtWrapper_QLocale::toULongLong(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toULongLong(s, ok));
}

ushort  PythonQtWrapper_QLocale::toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toUShort(s, ok));
}

ushort  PythonQtWrapper_QLocale::toUShort(QLocale* theWrappedObject, const QStringRef&  s, bool*  ok) const
{
  return ( theWrappedObject->toUShort(s, ok));
}

QString  PythonQtWrapper_QLocale::toUpper(QLocale* theWrappedObject, const QString&  str) const
{
  return ( theWrappedObject->toUpper(str));
}

QStringList  PythonQtWrapper_QLocale::uiLanguages(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->uiLanguages());
}

QList<Qt::DayOfWeek >  PythonQtWrapper_QLocale::weekdays(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->weekdays());
}

QChar  PythonQtWrapper_QLocale::zeroDigit(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->zeroDigit());
}

QString PythonQtWrapper_QLocale::py_toString(QLocale* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPoint* PythonQtWrapper_QPoint::new_QPoint()
{ 
return new QPoint(); }

QPoint* PythonQtWrapper_QPoint::new_QPoint(int  xpos, int  ypos)
{ 
return new QPoint(xpos, ypos); }

int  PythonQtWrapper_QPoint::static_QPoint_dotProduct(const QPoint&  p1, const QPoint&  p2)
{
  return (QPoint::dotProduct(p1, p2));
}

bool  PythonQtWrapper_QPoint::isNull(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QPoint::manhattanLength(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

const QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, double  factor)
{
  return ( (*theWrappedObject)* factor);
}

const QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, float  factor)
{
  return ( (*theWrappedObject)* factor);
}

const QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, int  factor)
{
  return ( (*theWrappedObject)* factor);
}

QPoint*  PythonQtWrapper_QPoint::__imul__(QPoint* theWrappedObject, double  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QPoint*  PythonQtWrapper_QPoint::__imul__(QPoint* theWrappedObject, float  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QPoint*  PythonQtWrapper_QPoint::__imul__(QPoint* theWrappedObject, int  factor)
{
  return &( (*theWrappedObject)*= factor);
}

const QPoint  PythonQtWrapper_QPoint::__add__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

QPoint*  PythonQtWrapper_QPoint::__iadd__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)+= p);
}

const QPoint  PythonQtWrapper_QPoint::__sub__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)- p2);
}

QPoint*  PythonQtWrapper_QPoint::__isub__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)-= p);
}

const QPoint  PythonQtWrapper_QPoint::__div__(QPoint* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

QPoint*  PythonQtWrapper_QPoint::__idiv__(QPoint* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QPoint::writeTo(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPoint::__eq__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)== p2);
}

void PythonQtWrapper_QPoint::readFrom(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QPoint::setX(QPoint* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QPoint::setY(QPoint* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

int  PythonQtWrapper_QPoint::x(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QPoint::y(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QPoint::py_toString(QPoint* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPointF* PythonQtWrapper_QPointF::new_QPointF()
{ 
return new QPointF(); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(const QPoint&  p)
{ 
return new QPointF(p); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(qreal  xpos, qreal  ypos)
{ 
return new QPointF(xpos, ypos); }

qreal  PythonQtWrapper_QPointF::static_QPointF_dotProduct(const QPointF&  p1, const QPointF&  p2)
{
  return (QPointF::dotProduct(p1, p2));
}

bool  PythonQtWrapper_QPointF::isNull(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QPointF::manhattanLength(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QMatrix4x4&  matrix)
{
  return ( (*theWrappedObject)* matrix);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

const QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

QPointF*  PythonQtWrapper_QPointF::__imul__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

const QPointF  PythonQtWrapper_QPointF::__add__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

QPointF*  PythonQtWrapper_QPointF::__iadd__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)+= p);
}

const QPointF  PythonQtWrapper_QPointF::__sub__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)- p2);
}

QPointF*  PythonQtWrapper_QPointF::__isub__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)-= p);
}

const QPointF  PythonQtWrapper_QPointF::__div__(QPointF* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QPointF*  PythonQtWrapper_QPointF::__idiv__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

void PythonQtWrapper_QPointF::writeTo(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QPointF::__eq__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)== p2);
}

void PythonQtWrapper_QPointF::readFrom(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QPointF::setX(QPointF* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QPointF::setY(QPointF* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

QPoint  PythonQtWrapper_QPointF::toPoint(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

qreal  PythonQtWrapper_QPointF::x(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QPointF::y(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QPointF::py_toString(QPointF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRect* PythonQtWrapper_QRect::new_QRect()
{ 
return new QRect(); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QPoint&  bottomright)
{ 
return new QRect(topleft, bottomright); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QSize&  size)
{ 
return new QRect(topleft, size); }

QRect* PythonQtWrapper_QRect::new_QRect(int  left, int  top, int  width, int  height)
{ 
return new QRect(left, top, width, height); }

void PythonQtWrapper_QRect::adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->adjust(x1, y1, x2, y2));
}

QRect  PythonQtWrapper_QRect::adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const
{
  return ( theWrappedObject->adjusted(x1, y1, x2, y2));
}

int  PythonQtWrapper_QRect::bottom(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

QPoint  PythonQtWrapper_QRect::bottomLeft(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottomLeft());
}

QPoint  PythonQtWrapper_QRect::bottomRight(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottomRight());
}

QPoint  PythonQtWrapper_QRect::center(QRect* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QPoint&  p, bool  proper) const
{
  return ( theWrappedObject->contains(p, proper));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QRect&  r, bool  proper) const
{
  return ( theWrappedObject->contains(r, proper));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->contains(x, y));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const
{
  return ( theWrappedObject->contains(x, y, proper));
}

int  PythonQtWrapper_QRect::height(QRect* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QRect  PythonQtWrapper_QRect::intersected(QRect* theWrappedObject, const QRect&  other) const
{
  return ( theWrappedObject->intersected(other));
}

bool  PythonQtWrapper_QRect::intersects(QRect* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->intersects(r));
}

bool  PythonQtWrapper_QRect::isEmpty(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QRect::isNull(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QRect::isValid(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRect::left(QRect* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

QRect  PythonQtWrapper_QRect::marginsAdded(QRect* theWrappedObject, const QMargins&  margins) const
{
  return ( theWrappedObject->marginsAdded(margins));
}

QRect  PythonQtWrapper_QRect::marginsRemoved(QRect* theWrappedObject, const QMargins&  margins) const
{
  return ( theWrappedObject->marginsRemoved(margins));
}

void PythonQtWrapper_QRect::moveBottom(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveBottom(pos));
}

void PythonQtWrapper_QRect::moveBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveBottomLeft(p));
}

void PythonQtWrapper_QRect::moveBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveBottomRight(p));
}

void PythonQtWrapper_QRect::moveCenter(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveCenter(p));
}

void PythonQtWrapper_QRect::moveLeft(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveLeft(pos));
}

void PythonQtWrapper_QRect::moveRight(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveRight(pos));
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, int  x, int  t)
{
  ( theWrappedObject->moveTo(x, t));
}

void PythonQtWrapper_QRect::moveTop(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveTop(pos));
}

void PythonQtWrapper_QRect::moveTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTopLeft(p));
}

void PythonQtWrapper_QRect::moveTopRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTopRight(p));
}

QRect  PythonQtWrapper_QRect::normalized(QRect* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QRect  PythonQtWrapper_QRect::__and__(QRect* theWrappedObject, const QRect&  r) const
{
  return ( (*theWrappedObject)& r);
}

QRect*  PythonQtWrapper_QRect::__iand__(QRect* theWrappedObject, const QRect&  r)
{
  return &( (*theWrappedObject)&= r);
}

QRect  PythonQtWrapper_QRect::__add__(QRect* theWrappedObject, const QMargins&  margins)
{
  return ( (*theWrappedObject)+ margins);
}

QRect*  PythonQtWrapper_QRect::__iadd__(QRect* theWrappedObject, const QMargins&  margins)
{
  return &( (*theWrappedObject)+= margins);
}

QRect  PythonQtWrapper_QRect::__sub__(QRect* theWrappedObject, const QMargins&  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QRect*  PythonQtWrapper_QRect::__isub__(QRect* theWrappedObject, const QMargins&  margins)
{
  return &( (*theWrappedObject)-= margins);
}

void PythonQtWrapper_QRect::writeTo(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QRect::__eq__(QRect* theWrappedObject, const QRect&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QRect::readFrom(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QRect  PythonQtWrapper_QRect::__or__(QRect* theWrappedObject, const QRect&  r) const
{
  return ( (*theWrappedObject)| r);
}

QRect*  PythonQtWrapper_QRect::__ior__(QRect* theWrappedObject, const QRect&  r)
{
  return &( (*theWrappedObject)|= r);
}

int  PythonQtWrapper_QRect::right(QRect* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QRect::setBottom(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setBottom(pos));
}

void PythonQtWrapper_QRect::setBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setBottomLeft(p));
}

void PythonQtWrapper_QRect::setBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setBottomRight(p));
}

void PythonQtWrapper_QRect::setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->setCoords(x1, y1, x2, y2));
}

void PythonQtWrapper_QRect::setHeight(QRect* theWrappedObject, int  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QRect::setLeft(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setLeft(pos));
}

void PythonQtWrapper_QRect::setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

void PythonQtWrapper_QRect::setRight(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setRight(pos));
}

void PythonQtWrapper_QRect::setSize(QRect* theWrappedObject, const QSize&  s)
{
  ( theWrappedObject->setSize(s));
}

void PythonQtWrapper_QRect::setTop(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setTop(pos));
}

void PythonQtWrapper_QRect::setTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setTopLeft(p));
}

void PythonQtWrapper_QRect::setTopRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setTopRight(p));
}

void PythonQtWrapper_QRect::setWidth(QRect* theWrappedObject, int  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QRect::setX(QRect* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QRect::setY(QRect* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

QSize  PythonQtWrapper_QRect::size(QRect* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

int  PythonQtWrapper_QRect::top(QRect* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QPoint  PythonQtWrapper_QRect::topLeft(QRect* theWrappedObject) const
{
  return ( theWrappedObject->topLeft());
}

QPoint  PythonQtWrapper_QRect::topRight(QRect* theWrappedObject) const
{
  return ( theWrappedObject->topRight());
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QRect  PythonQtWrapper_QRect::united(QRect* theWrappedObject, const QRect&  other) const
{
  return ( theWrappedObject->united(other));
}

int  PythonQtWrapper_QRect::width(QRect* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

int  PythonQtWrapper_QRect::x(QRect* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QRect::y(QRect* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QRect::py_toString(QRect* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRectF* PythonQtWrapper_QRectF::new_QRectF()
{ 
return new QRectF(); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight)
{ 
return new QRectF(topleft, bottomRight); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QSizeF&  size)
{ 
return new QRectF(topleft, size); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QRect&  rect)
{ 
return new QRectF(rect); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height)
{ 
return new QRectF(left, top, width, height); }

void PythonQtWrapper_QRectF::adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->adjust(x1, y1, x2, y2));
}

QRectF  PythonQtWrapper_QRectF::adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const
{
  return ( theWrappedObject->adjusted(x1, y1, x2, y2));
}

qreal  PythonQtWrapper_QRectF::bottom(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

QPointF  PythonQtWrapper_QRectF::bottomLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomLeft());
}

QPointF  PythonQtWrapper_QRectF::bottomRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomRight());
}

QPointF  PythonQtWrapper_QRectF::center(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->contains(p));
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->contains(r));
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->contains(x, y));
}

qreal  PythonQtWrapper_QRectF::height(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QRectF  PythonQtWrapper_QRectF::intersected(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->intersected(other));
}

bool  PythonQtWrapper_QRectF::intersects(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->intersects(r));
}

bool  PythonQtWrapper_QRectF::isEmpty(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QRectF::isNull(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QRectF::isValid(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QRectF::left(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

QRectF  PythonQtWrapper_QRectF::marginsAdded(QRectF* theWrappedObject, const QMarginsF&  margins) const
{
  return ( theWrappedObject->marginsAdded(margins));
}

QRectF  PythonQtWrapper_QRectF::marginsRemoved(QRectF* theWrappedObject, const QMarginsF&  margins) const
{
  return ( theWrappedObject->marginsRemoved(margins));
}

void PythonQtWrapper_QRectF::moveBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveBottom(pos));
}

void PythonQtWrapper_QRectF::moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomLeft(p));
}

void PythonQtWrapper_QRectF::moveBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomRight(p));
}

void PythonQtWrapper_QRectF::moveCenter(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveCenter(p));
}

void PythonQtWrapper_QRectF::moveLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveLeft(pos));
}

void PythonQtWrapper_QRectF::moveRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveRight(pos));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, qreal  x, qreal  y)
{
  ( theWrappedObject->moveTo(x, y));
}

void PythonQtWrapper_QRectF::moveTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveTop(pos));
}

void PythonQtWrapper_QRectF::moveTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopLeft(p));
}

void PythonQtWrapper_QRectF::moveTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopRight(p));
}

QRectF  PythonQtWrapper_QRectF::normalized(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QRectF  PythonQtWrapper_QRectF::__and__(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( (*theWrappedObject)& r);
}

QRectF*  PythonQtWrapper_QRectF::__iand__(QRectF* theWrappedObject, const QRectF&  r)
{
  return &( (*theWrappedObject)&= r);
}

QRectF  PythonQtWrapper_QRectF::__add__(QRectF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QRectF*  PythonQtWrapper_QRectF::__iadd__(QRectF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)+= margins);
}

QRectF  PythonQtWrapper_QRectF::__sub__(QRectF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QRectF*  PythonQtWrapper_QRectF::__isub__(QRectF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)-= margins);
}

void PythonQtWrapper_QRectF::writeTo(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QRectF::__eq__(QRectF* theWrappedObject, const QRectF&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QRectF::readFrom(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QRectF  PythonQtWrapper_QRectF::__or__(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( (*theWrappedObject)| r);
}

QRectF*  PythonQtWrapper_QRectF::__ior__(QRectF* theWrappedObject, const QRectF&  r)
{
  return &( (*theWrappedObject)|= r);
}

qreal  PythonQtWrapper_QRectF::right(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QRectF::setBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setBottom(pos));
}

void PythonQtWrapper_QRectF::setBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomLeft(p));
}

void PythonQtWrapper_QRectF::setBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomRight(p));
}

void PythonQtWrapper_QRectF::setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setCoords(x1, y1, x2, y2));
}

void PythonQtWrapper_QRectF::setHeight(QRectF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QRectF::setLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setLeft(pos));
}

void PythonQtWrapper_QRectF::setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

void PythonQtWrapper_QRectF::setRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setRight(pos));
}

void PythonQtWrapper_QRectF::setSize(QRectF* theWrappedObject, const QSizeF&  s)
{
  ( theWrappedObject->setSize(s));
}

void PythonQtWrapper_QRectF::setTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setTop(pos));
}

void PythonQtWrapper_QRectF::setTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopLeft(p));
}

void PythonQtWrapper_QRectF::setTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopRight(p));
}

void PythonQtWrapper_QRectF::setWidth(QRectF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QRectF::setX(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setX(pos));
}

void PythonQtWrapper_QRectF::setY(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setY(pos));
}

QSizeF  PythonQtWrapper_QRectF::size(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QRect  PythonQtWrapper_QRectF::toAlignedRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toAlignedRect());
}

QRect  PythonQtWrapper_QRectF::toRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toRect());
}

qreal  PythonQtWrapper_QRectF::top(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QPointF  PythonQtWrapper_QRectF::topLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topLeft());
}

QPointF  PythonQtWrapper_QRectF::topRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topRight());
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QRectF  PythonQtWrapper_QRectF::united(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->united(other));
}

qreal  PythonQtWrapper_QRectF::width(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

qreal  PythonQtWrapper_QRectF::x(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QRectF::y(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QString PythonQtWrapper_QRectF::py_toString(QRectF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRegExp* PythonQtWrapper_QRegExp::new_QRegExp()
{ 
return new QRegExp(); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QRegExp&  rx)
{ 
return new QRegExp(rx); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs, QRegExp::PatternSyntax  syntax)
{ 
return new QRegExp(pattern, cs, syntax); }

QString  PythonQtWrapper_QRegExp::cap(QRegExp* theWrappedObject, int  nth)
{
  return ( theWrappedObject->cap(nth));
}

int  PythonQtWrapper_QRegExp::captureCount(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->captureCount());
}

QStringList  PythonQtWrapper_QRegExp::capturedTexts(QRegExp* theWrappedObject)
{
  return ( theWrappedObject->capturedTexts());
}

Qt::CaseSensitivity  PythonQtWrapper_QRegExp::caseSensitivity(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

QString  PythonQtWrapper_QRegExp::errorString(QRegExp* theWrappedObject)
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QRegExp::static_QRegExp_escape(const QString&  str)
{
  return (QRegExp::escape(str));
}

bool  PythonQtWrapper_QRegExp::exactMatch(QRegExp* theWrappedObject, const QString&  str) const
{
  return ( theWrappedObject->exactMatch(str));
}

int  PythonQtWrapper_QRegExp::indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
  return ( theWrappedObject->indexIn(str, offset, caretMode));
}

bool  PythonQtWrapper_QRegExp::isEmpty(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QRegExp::isMinimal(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isMinimal());
}

bool  PythonQtWrapper_QRegExp::isValid(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRegExp::lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
  return ( theWrappedObject->lastIndexIn(str, offset, caretMode));
}

int  PythonQtWrapper_QRegExp::matchedLength(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->matchedLength());
}

bool  PythonQtWrapper_QRegExp::__ne__(QRegExp* theWrappedObject, const QRegExp&  rx) const
{
  return ( (*theWrappedObject)!= rx);
}

void PythonQtWrapper_QRegExp::writeTo(QRegExp* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QRegExp::__eq__(QRegExp* theWrappedObject, const QRegExp&  rx) const
{
  return ( (*theWrappedObject)== rx);
}

void PythonQtWrapper_QRegExp::readFrom(QRegExp* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

QString  PythonQtWrapper_QRegExp::pattern(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

QRegExp::PatternSyntax  PythonQtWrapper_QRegExp::patternSyntax(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->patternSyntax());
}

int  PythonQtWrapper_QRegExp::pos(QRegExp* theWrappedObject, int  nth)
{
  return ( theWrappedObject->pos(nth));
}

void PythonQtWrapper_QRegExp::setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

void PythonQtWrapper_QRegExp::setMinimal(QRegExp* theWrappedObject, bool  minimal)
{
  ( theWrappedObject->setMinimal(minimal));
}

void PythonQtWrapper_QRegExp::setPattern(QRegExp* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

void PythonQtWrapper_QRegExp::setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax)
{
  ( theWrappedObject->setPatternSyntax(syntax));
}

void PythonQtWrapper_QRegExp::swap(QRegExp* theWrappedObject, QRegExp&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QRegExp::py_toString(QRegExp* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSize* PythonQtWrapper_QSize::new_QSize()
{ 
return new QSize(); }

QSize* PythonQtWrapper_QSize::new_QSize(int  w, int  h)
{ 
return new QSize(w, h); }

QSize  PythonQtWrapper_QSize::boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

QSize  PythonQtWrapper_QSize::expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

int  PythonQtWrapper_QSize::height(QSize* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QSize::isEmpty(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSize::isNull(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSize::isValid(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QSize  PythonQtWrapper_QSize::__mul__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

QSize*  PythonQtWrapper_QSize::__imul__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

const QSize  PythonQtWrapper_QSize::__add__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

QSize*  PythonQtWrapper_QSize::__iadd__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

const QSize  PythonQtWrapper_QSize::__sub__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)- s2);
}

QSize*  PythonQtWrapper_QSize::__isub__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

const QSize  PythonQtWrapper_QSize::__div__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

QSize*  PythonQtWrapper_QSize::__idiv__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

void PythonQtWrapper_QSize::writeTo(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QSize::__eq__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)== s2);
}

void PythonQtWrapper_QSize::readFrom(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

QSize  PythonQtWrapper_QSize::scaled(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode) const
{
  return ( theWrappedObject->scaled(s, mode));
}

QSize  PythonQtWrapper_QSize::scaled(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode) const
{
  return ( theWrappedObject->scaled(w, h, mode));
}

void PythonQtWrapper_QSize::setHeight(QSize* theWrappedObject, int  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QSize::setWidth(QSize* theWrappedObject, int  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QSize::transpose(QSize* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

QSize  PythonQtWrapper_QSize::transposed(QSize* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

int  PythonQtWrapper_QSize::width(QSize* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QSize::py_toString(QSize* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSizeF* PythonQtWrapper_QSizeF::new_QSizeF()
{ 
return new QSizeF(); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(const QSize&  sz)
{ 
return new QSizeF(sz); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(qreal  w, qreal  h)
{ 
return new QSizeF(w, h); }

QSizeF  PythonQtWrapper_QSizeF::boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

QSizeF  PythonQtWrapper_QSizeF::expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

qreal  PythonQtWrapper_QSizeF::height(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QSizeF::isEmpty(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QSizeF::isNull(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSizeF::isValid(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QSizeF  PythonQtWrapper_QSizeF::__mul__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

QSizeF*  PythonQtWrapper_QSizeF::__imul__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

const QSizeF  PythonQtWrapper_QSizeF::__add__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

QSizeF*  PythonQtWrapper_QSizeF::__iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

const QSizeF  PythonQtWrapper_QSizeF::__sub__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)- s2);
}

QSizeF*  PythonQtWrapper_QSizeF::__isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

const QSizeF  PythonQtWrapper_QSizeF::__div__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

QSizeF*  PythonQtWrapper_QSizeF::__idiv__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

void PythonQtWrapper_QSizeF::writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QSizeF::__eq__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)== s2);
}

void PythonQtWrapper_QSizeF::readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

QSizeF  PythonQtWrapper_QSizeF::scaled(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode) const
{
  return ( theWrappedObject->scaled(s, mode));
}

QSizeF  PythonQtWrapper_QSizeF::scaled(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode) const
{
  return ( theWrappedObject->scaled(w, h, mode));
}

void PythonQtWrapper_QSizeF::setHeight(QSizeF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QSizeF::setWidth(QSizeF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

QSize  PythonQtWrapper_QSizeF::toSize(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->toSize());
}

void PythonQtWrapper_QSizeF::transpose(QSizeF* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

QSizeF  PythonQtWrapper_QSizeF::transposed(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->transposed());
}

qreal  PythonQtWrapper_QSizeF::width(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QSizeF::py_toString(QSizeF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTime* PythonQtWrapper_QTime::new_QTime()
{ 
return new QTime(); }

QTime* PythonQtWrapper_QTime::new_QTime(int  h, int  m, int  s, int  ms)
{ 
return new QTime(h, m, s, ms); }

QTime  PythonQtWrapper_QTime::addMSecs(QTime* theWrappedObject, int  ms) const
{
  return ( theWrappedObject->addMSecs(ms));
}

QTime  PythonQtWrapper_QTime::addSecs(QTime* theWrappedObject, int  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
  return (QTime::currentTime());
}

int  PythonQtWrapper_QTime::elapsed(QTime* theWrappedObject) const
{
  return ( theWrappedObject->elapsed());
}

QTime  PythonQtWrapper_QTime::static_QTime_fromMSecsSinceStartOfDay(int  msecs)
{
  return (QTime::fromMSecsSinceStartOfDay(msecs));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QTime::fromString(s, f));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, const QString&  format)
{
  return (QTime::fromString(s, format));
}

int  PythonQtWrapper_QTime::hour(QTime* theWrappedObject) const
{
  return ( theWrappedObject->hour());
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTime::static_QTime_isValid(int  h, int  m, int  s, int  ms)
{
  return (QTime::isValid(h, m, s, ms));
}

int  PythonQtWrapper_QTime::minute(QTime* theWrappedObject) const
{
  return ( theWrappedObject->minute());
}

int  PythonQtWrapper_QTime::msec(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msec());
}

int  PythonQtWrapper_QTime::msecsSinceStartOfDay(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msecsSinceStartOfDay());
}

int  PythonQtWrapper_QTime::msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->msecsTo(arg__1));
}

bool  PythonQtWrapper_QTime::__ne__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTime::__lt__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QTime::__le__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)<= other);
}

bool  PythonQtWrapper_QTime::__eq__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QTime::__gt__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QTime::__ge__(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)>= other);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

int  PythonQtWrapper_QTime::restart(QTime* theWrappedObject)
{
  return ( theWrappedObject->restart());
}

int  PythonQtWrapper_QTime::second(QTime* theWrappedObject) const
{
  return ( theWrappedObject->second());
}

int  PythonQtWrapper_QTime::secsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->secsTo(arg__1));
}

bool  PythonQtWrapper_QTime::setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms)
{
  return ( theWrappedObject->setHMS(h, m, s, ms));
}

void PythonQtWrapper_QTime::start(QTime* theWrappedObject)
{
  ( theWrappedObject->start());
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString PythonQtWrapper_QTime::py_toString(QTime* obj) { return obj->toString(); }


QUrl* PythonQtWrapper_QUrl::new_QUrl()
{ 
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{ 
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{ 
return new QUrl(copy); }

QUrl  PythonQtWrapper_QUrl::adjusted(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->adjusted(options));
}

QString  PythonQtWrapper_QUrl::authority(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->authority(options));
}

void PythonQtWrapper_QUrl::clear(QUrl* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QString  PythonQtWrapper_QUrl::errorString(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QUrl::fileName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->fileName(options));
}

QString  PythonQtWrapper_QUrl::fragment(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->fragment(options));
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromAce(const QByteArray&  arg__1)
{
  return (QUrl::fromAce(arg__1));
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode)
{
  return (QUrl::fromEncoded(url, mode));
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromLocalFile(const QString&  localfile)
{
  return (QUrl::fromLocalFile(localfile));
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromPercentEncoding(const QByteArray&  arg__1)
{
  return (QUrl::fromPercentEncoding(arg__1));
}

QList<QUrl >  PythonQtWrapper_QUrl::static_QUrl_fromStringList(const QStringList&  uris, QUrl::ParsingMode  mode)
{
  return (QUrl::fromStringList(uris, mode));
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromUserInput(const QString&  userInput)
{
  return (QUrl::fromUserInput(userInput));
}

bool  PythonQtWrapper_QUrl::hasFragment(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->hasFragment());
}

bool  PythonQtWrapper_QUrl::hasQuery(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->hasQuery());
}

QString  PythonQtWrapper_QUrl::host(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1) const
{
  return ( theWrappedObject->host(arg__1));
}

QStringList  PythonQtWrapper_QUrl::static_QUrl_idnWhitelist()
{
  return (QUrl::idnWhitelist());
}

bool  PythonQtWrapper_QUrl::isEmpty(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QUrl::isLocalFile(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isLocalFile());
}

bool  PythonQtWrapper_QUrl::isParentOf(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->isParentOf(url));
}

bool  PythonQtWrapper_QUrl::isRelative(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

bool  PythonQtWrapper_QUrl::isValid(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QUrl::matches(QUrl* theWrappedObject, const QUrl&  url, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->matches(url, options));
}

bool  PythonQtWrapper_QUrl::__ne__(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( (*theWrappedObject)!= url);
}

bool  PythonQtWrapper_QUrl::__lt__(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( (*theWrappedObject)< url);
}

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QUrl::__eq__(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( (*theWrappedObject)== url);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString  PythonQtWrapper_QUrl::password(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1) const
{
  return ( theWrappedObject->password(arg__1));
}

QString  PythonQtWrapper_QUrl::path(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->path(options));
}

int  PythonQtWrapper_QUrl::port(QUrl* theWrappedObject, int  defaultPort) const
{
  return ( theWrappedObject->port(defaultPort));
}

QString  PythonQtWrapper_QUrl::query(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  arg__1) const
{
  return ( theWrappedObject->query(arg__1));
}

QUrl  PythonQtWrapper_QUrl::resolved(QUrl* theWrappedObject, const QUrl&  relative) const
{
  return ( theWrappedObject->resolved(relative));
}

QString  PythonQtWrapper_QUrl::scheme(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->scheme());
}

void PythonQtWrapper_QUrl::setAuthority(QUrl* theWrappedObject, const QString&  authority, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setAuthority(authority, mode));
}

void PythonQtWrapper_QUrl::setFragment(QUrl* theWrappedObject, const QString&  fragment, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setFragment(fragment, mode));
}

void PythonQtWrapper_QUrl::setHost(QUrl* theWrappedObject, const QString&  host, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setHost(host, mode));
}

void PythonQtWrapper_QUrl::static_QUrl_setIdnWhitelist(const QStringList&  arg__1)
{
  (QUrl::setIdnWhitelist(arg__1));
}

void PythonQtWrapper_QUrl::setPassword(QUrl* theWrappedObject, const QString&  password, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setPassword(password, mode));
}

void PythonQtWrapper_QUrl::setPath(QUrl* theWrappedObject, const QString&  path, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setPath(path, mode));
}

void PythonQtWrapper_QUrl::setPort(QUrl* theWrappedObject, int  port)
{
  ( theWrappedObject->setPort(port));
}

void PythonQtWrapper_QUrl::setQuery(QUrl* theWrappedObject, const QString&  query, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setQuery(query, mode));
}

void PythonQtWrapper_QUrl::setQuery(QUrl* theWrappedObject, const QUrlQuery&  query)
{
  ( theWrappedObject->setQuery(query));
}

void PythonQtWrapper_QUrl::setScheme(QUrl* theWrappedObject, const QString&  scheme)
{
  ( theWrappedObject->setScheme(scheme));
}

void PythonQtWrapper_QUrl::setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setUrl(url, mode));
}

void PythonQtWrapper_QUrl::setUserInfo(QUrl* theWrappedObject, const QString&  userInfo, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setUserInfo(userInfo, mode));
}

void PythonQtWrapper_QUrl::setUserName(QUrl* theWrappedObject, const QString&  userName, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setUserName(userName, mode));
}

void PythonQtWrapper_QUrl::swap(QUrl* theWrappedObject, QUrl&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toAce(const QString&  arg__1)
{
  return (QUrl::toAce(arg__1));
}

QString  PythonQtWrapper_QUrl::toDisplayString(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->toDisplayString(options));
}

QByteArray  PythonQtWrapper_QUrl::toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->toEncoded(options));
}

QString  PythonQtWrapper_QUrl::toLocalFile(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->toLocalFile());
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude, const QByteArray&  include)
{
  return (QUrl::toPercentEncoding(arg__1, exclude, include));
}

QString  PythonQtWrapper_QUrl::toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->toString(options));
}

QStringList  PythonQtWrapper_QUrl::static_QUrl_toStringList(const QList<QUrl >&  uris, QUrl::FormattingOptions  options)
{
  return (QUrl::toStringList(uris, options));
}

QString  PythonQtWrapper_QUrl::topLevelDomain(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->topLevelDomain(options));
}

QString  PythonQtWrapper_QUrl::url(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->url(options));
}

QString  PythonQtWrapper_QUrl::userInfo(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->userInfo(options));
}

QString  PythonQtWrapper_QUrl::userName(QUrl* theWrappedObject, QUrl::ComponentFormattingOptions  options) const
{
  return ( theWrappedObject->userName(options));
}

QString PythonQtWrapper_QUrl::py_toString(QUrl* obj) { return obj->toString(); }


QTextCodec*  PythonQtWrapper_Qt::static_Qt_codecForHtml(const QByteArray&  ba)
{
  return (Qt::codecForHtml(ba));
}

QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return (Qt::convertFromPlainText(plain, mode));
}

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return (Qt::mightBeRichText(arg__1));
}


