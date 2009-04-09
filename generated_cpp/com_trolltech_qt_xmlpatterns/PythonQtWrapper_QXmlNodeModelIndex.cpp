#include "PythonQtWrapper_QXmlNodeModelIndex.h"

#include <QVariant>
#include <qabstractxmlnodemodel.h>

QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex()
{ 
return new QXmlNodeModelIndex(); }

QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other)
{ 
return new QXmlNodeModelIndex(other); }

qint64  PythonQtWrapper_QXmlNodeModelIndex::additionalData(QXmlNodeModelIndex* theWrappedObject) const
{
return theWrappedObject->additionalData();
}

qint64  PythonQtWrapper_QXmlNodeModelIndex::data(QXmlNodeModelIndex* theWrappedObject) const
{
return theWrappedObject->data();
}

bool  PythonQtWrapper_QXmlNodeModelIndex::isNull(QXmlNodeModelIndex* theWrappedObject) const
{
return theWrappedObject->isNull();
}

const QAbstractXmlNodeModel*  PythonQtWrapper_QXmlNodeModelIndex::model(QXmlNodeModelIndex* theWrappedObject) const
{
return theWrappedObject->model();
}

bool  PythonQtWrapper_QXmlNodeModelIndex::operator_equal(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const
{
return *theWrappedObject == other;
}

