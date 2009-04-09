#ifndef PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H
#define PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H

#include <qsimplexmlnodemodel.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>

class PythonQtWrapper_QSimpleXmlNodeModel : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel* obj) { delete obj; } 
   QUrl  baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
   QXmlNodeModelIndex  elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const;
   QXmlNamePool&  namePool(QSimpleXmlNodeModel* theWrappedObject) const;
   QVector<QXmlName >  namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const;
   QVector<QXmlNodeModelIndex >  nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const;
   QString  stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
};

#endif // PYTHONQTWRAPPER_QSIMPLEXMLNODEMODEL_H
