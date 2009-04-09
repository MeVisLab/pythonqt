#ifndef PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H

#include <qabstractxmlnodemodel.h>
#include <QObject>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>

class PythonQtWrapper_QAbstractXmlNodeModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SimpleAxis )
enum SimpleAxis{
  Parent = QAbstractXmlNodeModel::Parent,   FirstChild = QAbstractXmlNodeModel::FirstChild,   PreviousSibling = QAbstractXmlNodeModel::PreviousSibling,   NextSibling = QAbstractXmlNodeModel::NextSibling};
public slots:
void delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel* obj) { delete obj; } 
   QUrl  baseUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QXmlNodeModelIndex::DocumentOrder  compareOrder(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
   QUrl  documentUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QXmlNodeModelIndex  elementById(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const;
   QXmlNodeModelIndex::NodeKind  kind(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QXmlName  name(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const;
   QVector<QXmlName >  namespaceBindings(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QVector<QXmlNodeModelIndex >  nodesByIdref(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const;
   QXmlNodeModelIndex  root(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QString  stringValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
   QVariant  typedValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H
