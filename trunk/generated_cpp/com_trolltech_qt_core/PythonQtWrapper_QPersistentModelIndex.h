#ifndef PYTHONQTWRAPPER_QPERSISTENTMODELINDEX_H
#define PYTHONQTWRAPPER_QPERSISTENTMODELINDEX_H

#include <qabstractitemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>

class PythonQtWrapper_QPersistentModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QPersistentModelIndex* new_QPersistentModelIndex();
QPersistentModelIndex* new_QPersistentModelIndex(const QModelIndex&  index);
QPersistentModelIndex* new_QPersistentModelIndex(const QPersistentModelIndex&  other);
void delete_QPersistentModelIndex(QPersistentModelIndex* obj) { delete obj; } 
   const QAbstractItemModel*  model(QPersistentModelIndex* theWrappedObject) const;
   bool  isValid(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  parent(QPersistentModelIndex* theWrappedObject) const;
   qint64  internalId(QPersistentModelIndex* theWrappedObject) const;
   QVariant  data(QPersistentModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   QModelIndex  operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   Qt::ItemFlags  flags(QPersistentModelIndex* theWrappedObject) const;
   bool  operator_equal(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QModelIndex  child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   int  row(QPersistentModelIndex* theWrappedObject) const;
   bool  operator_less(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   bool  operator_equal(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   int  column(QPersistentModelIndex* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPERSISTENTMODELINDEX_H
