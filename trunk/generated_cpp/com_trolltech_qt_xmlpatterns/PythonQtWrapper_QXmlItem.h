#ifndef PYTHONQTWRAPPER_QXMLITEM_H
#define PYTHONQTWRAPPER_QXMLITEM_H

#include <qabstractxmlnodemodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractxmlnodemodel.h>

class PythonQtWrapper_QXmlItem : public QObject
{ Q_OBJECT
public:
public slots:
QXmlItem* new_QXmlItem();
QXmlItem* new_QXmlItem(const QVariant&  atomicValue);
QXmlItem* new_QXmlItem(const QXmlItem&  other);
QXmlItem* new_QXmlItem(const QXmlNodeModelIndex&  node);
void delete_QXmlItem(QXmlItem* obj) { delete obj; } 
   bool  isNode(QXmlItem* theWrappedObject) const;
   bool  isNull(QXmlItem* theWrappedObject) const;
   bool  isAtomicValue(QXmlItem* theWrappedObject) const;
   QVariant  toAtomicValue(QXmlItem* theWrappedObject) const;
   QXmlNodeModelIndex  toNodeModelIndex(QXmlItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLITEM_H
