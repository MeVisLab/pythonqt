#include "PythonQtWrapper_QXmlName.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxmlname.h>
#include <qxmlnamepool.h>

QXmlName* PythonQtWrapper_QXmlName::new_QXmlName()
{ 
return new QXmlName(); }

QXmlName* PythonQtWrapper_QXmlName::new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI, const QString&  prefix)
{ 
return new QXmlName(namePool, localName, namespaceURI, prefix); }

bool  PythonQtWrapper_QXmlName::operator_equal(QXmlName* theWrappedObject, const QXmlName&  other) const
{
return  (*theWrappedObject)== other;
}

QString  PythonQtWrapper_QXmlName::namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
return  (*theWrappedObject).namespaceUri(query);
}

bool  PythonQtWrapper_QXmlName::isNull(QXmlName* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

QString  PythonQtWrapper_QXmlName::prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
return  (*theWrappedObject).prefix(query);
}

QString  PythonQtWrapper_QXmlName::toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
return  (*theWrappedObject).toClarkName(query);
}

bool  PythonQtWrapper_QXmlName::static_QXmlName_isNCName(const QString&  candidate)
{
return QXmlName::isNCName(candidate);
}

QString  PythonQtWrapper_QXmlName::localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
return  (*theWrappedObject).localName(query);
}

