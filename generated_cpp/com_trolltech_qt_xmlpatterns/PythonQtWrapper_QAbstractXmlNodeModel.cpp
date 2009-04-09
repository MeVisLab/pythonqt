#include "PythonQtWrapper_QAbstractXmlNodeModel.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>

QUrl  PythonQtWrapper_QAbstractXmlNodeModel::baseUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
return theWrappedObject->baseUri(ni);
}

QXmlNodeModelIndex::DocumentOrder  PythonQtWrapper_QAbstractXmlNodeModel::compareOrder(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const
{
return theWrappedObject->compareOrder(ni1, ni2);
}

QUrl  PythonQtWrapper_QAbstractXmlNodeModel::documentUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
return theWrappedObject->documentUri(ni);
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::elementById(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const
{
return theWrappedObject->elementById(NCName);
}

QXmlNodeModelIndex::NodeKind  PythonQtWrapper_QAbstractXmlNodeModel::kind(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
return theWrappedObject->kind(ni);
}

QXmlName  PythonQtWrapper_QAbstractXmlNodeModel::name(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
return theWrappedObject->name(ni);
}

QVector<QXmlName >  PythonQtWrapper_QAbstractXmlNodeModel::namespaceBindings(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
return theWrappedObject->namespaceBindings(n);
}

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QAbstractXmlNodeModel::nodesByIdref(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const
{
return theWrappedObject->nodesByIdref(NCName);
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::root(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
return theWrappedObject->root(n);
}

QString  PythonQtWrapper_QAbstractXmlNodeModel::stringValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
return theWrappedObject->stringValue(n);
}

QVariant  PythonQtWrapper_QAbstractXmlNodeModel::typedValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
return theWrappedObject->typedValue(n);
}

