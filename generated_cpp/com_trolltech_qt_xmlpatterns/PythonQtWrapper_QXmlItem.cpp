#include "PythonQtWrapper_QXmlItem.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem()
{ 
return new QXmlItem(); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QVariant&  atomicValue)
{ 
return new QXmlItem(atomicValue); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlItem&  other)
{ 
return new QXmlItem(other); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlNodeModelIndex&  node)
{ 
return new QXmlItem(node); }

bool  PythonQtWrapper_QXmlItem::isAtomicValue(QXmlItem* theWrappedObject) const
{
return theWrappedObject->isAtomicValue();
}

bool  PythonQtWrapper_QXmlItem::isNode(QXmlItem* theWrappedObject) const
{
return theWrappedObject->isNode();
}

bool  PythonQtWrapper_QXmlItem::isNull(QXmlItem* theWrappedObject) const
{
return theWrappedObject->isNull();
}

QVariant  PythonQtWrapper_QXmlItem::toAtomicValue(QXmlItem* theWrappedObject) const
{
return theWrappedObject->toAtomicValue();
}

QXmlNodeModelIndex  PythonQtWrapper_QXmlItem::toNodeModelIndex(QXmlItem* theWrappedObject) const
{
return theWrappedObject->toNodeModelIndex();
}

