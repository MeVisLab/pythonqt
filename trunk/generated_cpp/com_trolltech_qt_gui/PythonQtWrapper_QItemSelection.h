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
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   void pop_front(QItemSelection* theWrappedObject);
   int  count(QItemSelection* theWrappedObject) const;
   const QItemSelectionRange&  at(QItemSelection* theWrappedObject, int  i) const;
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   bool  operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   const QItemSelectionRange&  last(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   const QItemSelectionRange&  first(QItemSelection* theWrappedObject) const;
   void clear(QItemSelection* theWrappedObject);
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   bool  empty(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   const QItemSelectionRange&  back(QItemSelection* theWrappedObject) const;
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   void pop_back(QItemSelection* theWrappedObject);
   const QItemSelectionRange&  front(QItemSelection* theWrappedObject) const;
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   int  size(QItemSelection* theWrappedObject) const;
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
};

#endif // PYTHONQTWRAPPER_QITEMSELECTION_H
