#ifndef PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H
#define PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H

#include <qabstractxmlnodemodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>

class PythonQtWrapper_QXmlNodeModelIndex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeKind DocumentOrder Axis )
enum NodeKind{
  Attribute = QXmlNodeModelIndex::Attribute,   Comment = QXmlNodeModelIndex::Comment,   Document = QXmlNodeModelIndex::Document,   Element = QXmlNodeModelIndex::Element,   Namespace = QXmlNodeModelIndex::Namespace,   ProcessingInstruction = QXmlNodeModelIndex::ProcessingInstruction,   Text = QXmlNodeModelIndex::Text};
enum DocumentOrder{
  Precedes = QXmlNodeModelIndex::Precedes,   Is = QXmlNodeModelIndex::Is,   Follows = QXmlNodeModelIndex::Follows};
enum Axis{
  AxisChild = QXmlNodeModelIndex::AxisChild,   AxisDescendant = QXmlNodeModelIndex::AxisDescendant,   AxisAttribute = QXmlNodeModelIndex::AxisAttribute,   AxisSelf = QXmlNodeModelIndex::AxisSelf,   AxisDescendantOrSelf = QXmlNodeModelIndex::AxisDescendantOrSelf,   AxisFollowingSibling = QXmlNodeModelIndex::AxisFollowingSibling,   AxisNamespace = QXmlNodeModelIndex::AxisNamespace,   AxisFollowing = QXmlNodeModelIndex::AxisFollowing,   AxisParent = QXmlNodeModelIndex::AxisParent,   AxisAncestor = QXmlNodeModelIndex::AxisAncestor,   AxisPrecedingSibling = QXmlNodeModelIndex::AxisPrecedingSibling,   AxisPreceding = QXmlNodeModelIndex::AxisPreceding,   AxisAncestorOrSelf = QXmlNodeModelIndex::AxisAncestorOrSelf};
public slots:
QXmlNodeModelIndex* new_QXmlNodeModelIndex();
QXmlNodeModelIndex* new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other);
void delete_QXmlNodeModelIndex(QXmlNodeModelIndex* obj) { delete obj; } 
   qint64  data(QXmlNodeModelIndex* theWrappedObject) const;
   qint64  additionalData(QXmlNodeModelIndex* theWrappedObject) const;
   bool  isNull(QXmlNodeModelIndex* theWrappedObject) const;
   bool  operator_equal(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
   const QAbstractXmlNodeModel*  model(QXmlNodeModelIndex* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLNODEMODELINDEX_H
