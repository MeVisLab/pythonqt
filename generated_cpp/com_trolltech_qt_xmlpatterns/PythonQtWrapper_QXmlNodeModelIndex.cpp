#include "PythonQtWrapper_QXmlNodeModelIndex.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>

QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex()
{ 
return new QXmlNodeModelIndex(); }

QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other)
{ 
return new QXmlNodeModelIndex(other); }

qint64  PythonQtWrapper_QXmlNodeModelIndex::data(QXmlNodeModelIndex* theWrappedObject) const
{
return  (*theWrappedObject).data();
}

qint64  PythonQtWrapper_QXmlNodeModelIndex::additionalData(QXmlNodeModelIndex* theWrappedObject) const
{
return  (*theWrappedObject).additionalData();
}

bool  PythonQtWrapper_QXmlNodeModelIndex::isNull(QXmlNodeModelIndex* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

bool  PythonQtWrapper_QXmlNodeModelIndex::operator_equal(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const
{
return  (*theWrappedObject)== other;
}

const QAbstractXmlNodeModel*  PythonQtWrapper_QXmlNodeModelIndex::model(QXmlNodeModelIndex* theWrappedObject) const
{
return  (*theWrappedObject).model();
}

