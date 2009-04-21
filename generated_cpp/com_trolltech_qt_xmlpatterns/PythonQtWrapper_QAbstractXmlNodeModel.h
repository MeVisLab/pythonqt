#ifndef PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H
#define PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H

#include <qabstractxmlnodemodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>

class PythonQtShell_QAbstractXmlNodeModel : public QAbstractXmlNodeModel
{
public:
    PythonQtShell_QAbstractXmlNodeModel():QAbstractXmlNodeModel(),_wrapper(NULL) {};

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  NCName) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  n) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  NCName) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  n) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractXmlNodeModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SimpleAxis )
enum SimpleAxis{
  Parent = QAbstractXmlNodeModel::Parent,   FirstChild = QAbstractXmlNodeModel::FirstChild,   PreviousSibling = QAbstractXmlNodeModel::PreviousSibling,   NextSibling = QAbstractXmlNodeModel::NextSibling};
public slots:
QAbstractXmlNodeModel* new_QAbstractXmlNodeModel();
void delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QABSTRACTXMLNODEMODEL_H
