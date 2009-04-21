#ifndef PYTHONQTWRAPPER_QITEMSELECTION_H
#define PYTHONQTWRAPPER_QITEMSELECTION_H

#include <qitemselectionmodel.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qvector.h>

class PythonQtWrapper_QItemSelection : public QObject
{ Q_OBJECT
public:
public slots:
QItemSelection* new_QItemSelection();
QItemSelection* new_QItemSelection(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
QItemSelection* new_QItemSelection(const QItemSelection& other) {
QItemSelection* a = new QItemSelection();
*((QItemSelection*)a) = other;
return a; }
void delete_QItemSelection(QItemSelection* obj) { delete obj; } 
   void clear(QItemSelection* theWrappedObject);
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   const QItemSelectionRange&  front(QItemSelection* theWrappedObject) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   void pop_front(QItemSelection* theWrappedObject);
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   const QItemSelectionRange&  at(QItemSelection* theWrappedObject, int  i) const;
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   void pop_back(QItemSelection* theWrappedObject);
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
   int  count(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   bool  operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   const QItemSelectionRange&  last(QItemSelection* theWrappedObject) const;
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   const QItemSelectionRange&  first(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   bool  empty(QItemSelection* theWrappedObject) const;
   int  size(QItemSelection* theWrappedObject) const;
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   const QItemSelectionRange&  back(QItemSelection* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QITEMSELECTION_H
