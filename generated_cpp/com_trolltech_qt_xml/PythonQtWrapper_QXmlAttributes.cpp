#include "PythonQtWrapper_QXmlAttributes.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

QXmlAttributes* PythonQtWrapper_QXmlAttributes::new_QXmlAttributes()
{ 
return new PythonQtShell_QXmlAttributes(); }

void PythonQtWrapper_QXmlAttributes::append(QXmlAttributes* theWrappedObject, const QString&  qName, const QString&  uri, const QString&  localPart, const QString&  value)
{
 theWrappedObject->append(qName, uri, localPart, value);
}

int  PythonQtWrapper_QXmlAttributes::length(QXmlAttributes* theWrappedObject) const
{
return  theWrappedObject->length();
}

QString  PythonQtWrapper_QXmlAttributes::type(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const
{
return  theWrappedObject->type(uri, localName);
}

QString  PythonQtWrapper_QXmlAttributes::type(QXmlAttributes* theWrappedObject, const QString&  qName) const
{
return  theWrappedObject->type(qName);
}

int  PythonQtWrapper_QXmlAttributes::index(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localPart) const
{
return  theWrappedObject->index(uri, localPart);
}

QString  PythonQtWrapper_QXmlAttributes::type(QXmlAttributes* theWrappedObject, int  index) const
{
return  theWrappedObject->type(index);
}

QString  PythonQtWrapper_QXmlAttributes::uri(QXmlAttributes* theWrappedObject, int  index) const
{
return  theWrappedObject->uri(index);
}

int  PythonQtWrapper_QXmlAttributes::count(QXmlAttributes* theWrappedObject) const
{
return  theWrappedObject->count();
}

QString  PythonQtWrapper_QXmlAttributes::qName(QXmlAttributes* theWrappedObject, int  index) const
{
return  theWrappedObject->qName(index);
}

QString  PythonQtWrapper_QXmlAttributes::value(QXmlAttributes* theWrappedObject, const QString&  uri, const QString&  localName) const
{
return  theWrappedObject->value(uri, localName);
}

int  PythonQtWrapper_QXmlAttributes::index(QXmlAttributes* theWrappedObject, const QString&  qName) const
{
return  theWrappedObject->index(qName);
}

QString  PythonQtWrapper_QXmlAttributes::localName(QXmlAttributes* theWrappedObject, int  index) const
{
return  theWrappedObject->localName(index);
}

void PythonQtWrapper_QXmlAttributes::clear(QXmlAttributes* theWrappedObject)
{
 theWrappedObject->clear();
}

QString  PythonQtWrapper_QXmlAttributes::value(QXmlAttributes* theWrappedObject, const QString&  qName) const
{
return  theWrappedObject->value(qName);
}

QString  PythonQtWrapper_QXmlAttributes::value(QXmlAttributes* theWrappedObject, int  index) const
{
return  theWrappedObject->value(index);
}

