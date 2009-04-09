#include "PythonQtWrapper_QDomNamedNodeMap.h"

#include <QVariant>
#include <qdom.h>

QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap()
{ 
return new QDomNamedNodeMap(); }

QDomNamedNodeMap* PythonQtWrapper_QDomNamedNodeMap::new_QDomNamedNodeMap(const QDomNamedNodeMap&  arg__1)
{ 
return new QDomNamedNodeMap(arg__1); }

bool  PythonQtWrapper_QDomNamedNodeMap::contains(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
return theWrappedObject->contains(name);
}

int  PythonQtWrapper_QDomNamedNodeMap::count(QDomNamedNodeMap* theWrappedObject) const
{
return theWrappedObject->count();
}

bool  PythonQtWrapper_QDomNamedNodeMap::isEmpty(QDomNamedNodeMap* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::item(QDomNamedNodeMap* theWrappedObject, int  index) const
{
return theWrappedObject->item(index);
}

uint  PythonQtWrapper_QDomNamedNodeMap::length(QDomNamedNodeMap* theWrappedObject) const
{
return theWrappedObject->length();
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name) const
{
return theWrappedObject->namedItem(name);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::namedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName) const
{
return theWrappedObject->namedItemNS(nsURI, localName);
}

bool  PythonQtWrapper_QDomNamedNodeMap::operator_equal(QDomNamedNodeMap* theWrappedObject, const QDomNamedNodeMap&  arg__1) const
{
return *theWrappedObject == arg__1;
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItem(QDomNamedNodeMap* theWrappedObject, const QString&  name)
{
return theWrappedObject->removeNamedItem(name);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::removeNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QString&  nsURI, const QString&  localName)
{
return theWrappedObject->removeNamedItemNS(nsURI, localName);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItem(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
return theWrappedObject->setNamedItem(newNode);
}

QDomNode  PythonQtWrapper_QDomNamedNodeMap::setNamedItemNS(QDomNamedNodeMap* theWrappedObject, const QDomNode&  newNode)
{
return theWrappedObject->setNamedItemNS(newNode);
}

int  PythonQtWrapper_QDomNamedNodeMap::size(QDomNamedNodeMap* theWrappedObject) const
{
return theWrappedObject->size();
}

