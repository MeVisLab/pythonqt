#include "PythonQtWrapper_QDomElement.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdom.h>
#include <qtextstream.h>

QDomElement* PythonQtWrapper_QDomElement::new_QDomElement()
{ 
return new QDomElement(); }

QDomElement* PythonQtWrapper_QDomElement::new_QDomElement(const QDomElement&  x)
{ 
return new QDomElement(x); }

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, double  value)
{
 theWrappedObject->setAttributeNS(nsURI, qName, value);
}

void PythonQtWrapper_QDomElement::removeAttribute(QDomElement* theWrappedObject, const QString&  name)
{
 theWrappedObject->removeAttribute(name);
}

QString  PythonQtWrapper_QDomElement::tagName(QDomElement* theWrappedObject) const
{
return  theWrappedObject->tagName();
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, qlonglong  value)
{
 theWrappedObject->setAttribute(name, value);
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, const QString&  value)
{
 theWrappedObject->setAttributeNS(nsURI, qName, value);
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNodeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
return  theWrappedObject->attributeNodeNS(nsURI, localName);
}

QString  PythonQtWrapper_QDomElement::attributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  localName, const QString&  defValue) const
{
return  theWrappedObject->attributeNS(nsURI, localName, defValue);
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, const QString&  value)
{
 theWrappedObject->setAttribute(name, value);
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, int  value)
{
 theWrappedObject->setAttributeNS(nsURI, qName, value);
}

QDomAttr  PythonQtWrapper_QDomElement::attributeNode(QDomElement* theWrappedObject, const QString&  name)
{
return  theWrappedObject->attributeNode(name);
}

bool  PythonQtWrapper_QDomElement::hasAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
return  theWrappedObject->hasAttributeNS(nsURI, localName);
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, float  value)
{
 theWrappedObject->setAttribute(name, value);
}

QString  PythonQtWrapper_QDomElement::text(QDomElement* theWrappedObject) const
{
return  theWrappedObject->text();
}

void PythonQtWrapper_QDomElement::removeAttributeNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
 theWrappedObject->removeAttributeNS(nsURI, localName);
}

QDomAttr  PythonQtWrapper_QDomElement::removeAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  oldAttr)
{
return  theWrappedObject->removeAttributeNode(oldAttr);
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, double  value)
{
 theWrappedObject->setAttribute(name, value);
}

QDomNamedNodeMap  PythonQtWrapper_QDomElement::attributes(QDomElement* theWrappedObject) const
{
return  theWrappedObject->attributes();
}

void PythonQtWrapper_QDomElement::setAttributeNS(QDomElement* theWrappedObject, const QString  nsURI, const QString&  qName, qlonglong  value)
{
 theWrappedObject->setAttributeNS(nsURI, qName, value);
}

void PythonQtWrapper_QDomElement::setTagName(QDomElement* theWrappedObject, const QString&  name)
{
 theWrappedObject->setTagName(name);
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagName(QDomElement* theWrappedObject, const QString&  tagname) const
{
return  theWrappedObject->elementsByTagName(tagname);
}

void PythonQtWrapper_QDomElement::setAttribute(QDomElement* theWrappedObject, const QString&  name, int  value)
{
 theWrappedObject->setAttribute(name, value);
}

bool  PythonQtWrapper_QDomElement::hasAttribute(QDomElement* theWrappedObject, const QString&  name) const
{
return  theWrappedObject->hasAttribute(name);
}

QString  PythonQtWrapper_QDomElement::attribute(QDomElement* theWrappedObject, const QString&  name, const QString&  defValue) const
{
return  theWrappedObject->attribute(name, defValue);
}

QDomNodeList  PythonQtWrapper_QDomElement::elementsByTagNameNS(QDomElement* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
return  theWrappedObject->elementsByTagNameNS(nsURI, localName);
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNode(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
return  theWrappedObject->setAttributeNode(newAttr);
}

QDomAttr  PythonQtWrapper_QDomElement::setAttributeNodeNS(QDomElement* theWrappedObject, const QDomAttr&  newAttr)
{
return  theWrappedObject->setAttributeNodeNS(newAttr);
}

