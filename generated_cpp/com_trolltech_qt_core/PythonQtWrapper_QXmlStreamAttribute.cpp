#include "PythonQtWrapper_QXmlStreamAttribute.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlstream.h>

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute()
{ 
return new QXmlStreamAttribute(); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value)
{ 
return new QXmlStreamAttribute(namespaceUri, name, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value)
{ 
return new QXmlStreamAttribute(qualifiedName, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1)
{ 
return new QXmlStreamAttribute(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamAttribute::prefix(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::namespaceUri(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::value(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

bool  PythonQtWrapper_QXmlStreamAttribute::operator_equal(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QXmlStreamAttribute::isDefault(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::name(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::qualifiedName(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

