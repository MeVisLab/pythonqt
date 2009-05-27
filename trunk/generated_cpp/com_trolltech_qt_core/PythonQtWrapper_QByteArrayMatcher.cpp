#include "PythonQtWrapper_QByteArrayMatcher.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qbytearraymatcher.h>

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher()
{ 
return new QByteArrayMatcher(); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArray&  pattern)
{ 
return new QByteArrayMatcher(pattern); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArrayMatcher&  other)
{ 
return new QByteArrayMatcher(other); }

void PythonQtWrapper_QByteArrayMatcher::setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

int  PythonQtWrapper_QByteArrayMatcher::indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from) const
{
  return ( theWrappedObject->indexIn(ba, from));
}

QByteArray  PythonQtWrapper_QByteArrayMatcher::pattern(QByteArrayMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

