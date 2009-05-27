#include "PythonQtWrapper_QXmlStreamEntityDeclaration.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlstream.h>

QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration()
{ 
return new QXmlStreamEntityDeclaration(); }

QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1)
{ 
return new QXmlStreamEntityDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::value(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::name(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::systemId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::notationName(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::operator_equal(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::publicId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

