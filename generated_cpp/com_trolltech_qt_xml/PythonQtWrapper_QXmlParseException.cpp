#include "PythonQtWrapper_QXmlParseException.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QXmlParseException* PythonQtWrapper_QXmlParseException::new_QXmlParseException(const QString&  name, int  c, int  l, const QString&  p, const QString&  s)
{ 
return new QXmlParseException(name, c, l, p, s); }

int  PythonQtWrapper_QXmlParseException::columnNumber(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QString  PythonQtWrapper_QXmlParseException::publicId(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QString  PythonQtWrapper_QXmlParseException::message(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->message());
}

QString  PythonQtWrapper_QXmlParseException::systemId(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}

int  PythonQtWrapper_QXmlParseException::lineNumber(QXmlParseException* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

