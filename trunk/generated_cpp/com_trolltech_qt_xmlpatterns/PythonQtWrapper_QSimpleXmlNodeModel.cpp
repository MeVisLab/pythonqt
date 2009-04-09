#include "PythonQtWrapper_QSimpleXmlNodeModel.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>

QUrl  PythonQtWrapper_QSimpleXmlNodeModel::baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
return theWrappedObject->baseUri(node);
}

QXmlNodeModelIndex  PythonQtWrapper_QSimpleXmlNodeModel::elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const
{
return theWrappedObject->elementById(id);
}

QXmlNamePool&  PythonQtWrapper_QSimpleXmlNodeModel::namePool(QSimpleXmlNodeModel* theWrappedObject) const
{
return theWrappedObject->namePool();
}

QVector<QXmlName >  PythonQtWrapper_QSimpleXmlNodeModel::namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const
{
return theWrappedObject->namespaceBindings(arg__1);
}

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QSimpleXmlNodeModel::nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const
{
return theWrappedObject->nodesByIdref(idref);
}

QString  PythonQtWrapper_QSimpleXmlNodeModel::stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
return theWrappedObject->stringValue(node);
}

