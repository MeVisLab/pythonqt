#ifndef PYTHONQTWRAPPER_QMODELINDEX_H
#define PYTHONQTWRAPPER_QMODELINDEX_H

#include <qabstractitemmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>

class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex&  other);
void delete_QModelIndex(QModelIndex* obj) { delete obj; } 
   bool  operator_equal(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   int  row(QModelIndex* theWrappedObject) const;
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   bool  operator_less(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QModelIndex  child(QModelIndex* theWrappedObject, int  row, int  column) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   qint64  internalId(QModelIndex* theWrappedObject) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   int  column(QModelIndex* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMODELINDEX_H
