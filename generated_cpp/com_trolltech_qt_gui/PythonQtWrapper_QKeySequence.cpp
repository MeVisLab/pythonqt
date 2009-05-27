#include "PythonQtWrapper_QKeySequence.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qkeysequence.h>
#include <qlist.h>

QKeySequence* PythonQtWrapper_QKeySequence::new_QKeySequence()
{ 
return new QKeySequence(); }

QKeySequence* PythonQtWrapper_QKeySequence::new_QKeySequence(QKeySequence::StandardKey  key)
{ 
return new QKeySequence(key); }

QKeySequence* PythonQtWrapper_QKeySequence::new_QKeySequence(const QKeySequence&  ks)
{ 
return new QKeySequence(ks); }

QKeySequence* PythonQtWrapper_QKeySequence::new_QKeySequence(const QString&  key)
{ 
return new QKeySequence(key); }

QKeySequence* PythonQtWrapper_QKeySequence::new_QKeySequence(int  k1, int  k2, int  k3, int  k4)
{ 
return new QKeySequence(k1, k2, k3, k4); }

void PythonQtWrapper_QKeySequence::readFrom(QKeySequence* theWrappedObject, QDataStream&  out)
{
  out >>  (*theWrappedObject);
}

uint  PythonQtWrapper_QKeySequence::count(QKeySequence* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QString  PythonQtWrapper_QKeySequence::toString(QKeySequence* theWrappedObject, QKeySequence::SequenceFormat  format) const
{
  return ( theWrappedObject->toString(format));
}

int  PythonQtWrapper_QKeySequence::operator_cast_int(QKeySequence* theWrappedObject) const
{
  return ( theWrappedObject->operator int());
}

QKeySequence  PythonQtWrapper_QKeySequence::static_QKeySequence_fromString(const QString&  str, QKeySequence::SequenceFormat  format)
{
  return (QKeySequence::fromString(str, format));
}

QList<QKeySequence >  PythonQtWrapper_QKeySequence::static_QKeySequence_keyBindings(QKeySequence::StandardKey  key)
{
  return (QKeySequence::keyBindings(key));
}

QKeySequence::SequenceMatch  PythonQtWrapper_QKeySequence::matches(QKeySequence* theWrappedObject, const QKeySequence&  seq) const
{
  return ( theWrappedObject->matches(seq));
}

QKeySequence  PythonQtWrapper_QKeySequence::static_QKeySequence_mnemonic(const QString&  text)
{
  return (QKeySequence::mnemonic(text));
}

bool  PythonQtWrapper_QKeySequence::isEmpty(QKeySequence* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QKeySequence::operator_less(QKeySequence* theWrappedObject, const QKeySequence&  ks) const
{
  return ( (*theWrappedObject)< ks);
}

void PythonQtWrapper_QKeySequence::writeTo(QKeySequence* theWrappedObject, QDataStream&  in)
{
  in <<  (*theWrappedObject);
}

int  PythonQtWrapper_QKeySequence::operator_subscript(QKeySequence* theWrappedObject, uint  i) const
{
  return ( (*theWrappedObject)[i]);
}

bool  PythonQtWrapper_QKeySequence::operator_equal(QKeySequence* theWrappedObject, const QKeySequence&  other) const
{
  return ( (*theWrappedObject)== other);
}

