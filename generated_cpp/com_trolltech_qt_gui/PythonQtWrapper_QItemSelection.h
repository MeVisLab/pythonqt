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
   bool  removeOne(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  operator_equal(QItemSelection* theWrappedObject, const QList<QItemSelectionRange >&  l) const;
   void prepend(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   QList<QItemSelectionRange >  static_QItemSelection_fromVector(const QVector<QItemSelectionRange >&  vector);
   QVector<QItemSelectionRange >  toVector(QItemSelection* theWrappedObject) const;
   void pop_back(QItemSelection* theWrappedObject);
   void clear(QItemSelection* theWrappedObject);
   void pop_front(QItemSelection* theWrappedObject);
   void push_back(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   int  count(QItemSelection* theWrappedObject) const;
   int  removeAll(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   void merge(QItemSelection* theWrappedObject, const QItemSelection&  other, QItemSelectionModel::SelectionFlags  command);
   const QItemSelectionRange*  last(QItemSelection* theWrappedObject) const;
   void setSharable(QItemSelection* theWrappedObject, bool  sharable);
   const QItemSelectionRange*  back(QItemSelection* theWrappedObject) const;
   int  indexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   void select(QItemSelection* theWrappedObject, const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  defaultValue) const;
   QItemSelectionRange  takeFirst(QItemSelection* theWrappedObject);
   QItemSelectionRange  value(QItemSelection* theWrappedObject, int  i) const;
   const QItemSelectionRange*  at(QItemSelection* theWrappedObject, int  i) const;
   void push_front(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   const QItemSelectionRange*  first(QItemSelection* theWrappedObject) const;
   void append(QItemSelection* theWrappedObject, const QItemSelectionRange&  t);
   bool  contains(QItemSelection* theWrappedObject, const QModelIndex&  index) const;
   int  count(QItemSelection* theWrappedObject, const QItemSelectionRange&  t) const;
   bool  isEmpty(QItemSelection* theWrappedObject) const;
   bool  empty(QItemSelection* theWrappedObject) const;
   QItemSelectionRange  takeAt(QItemSelection* theWrappedObject, int  i);
   void replace(QItemSelection* theWrappedObject, int  i, const QItemSelectionRange&  t);
   void removeFirst(QItemSelection* theWrappedObject);
   void removeLast(QItemSelection* theWrappedObject);
   int  size(QItemSelection* theWrappedObject) const;
   void removeAt(QItemSelection* theWrappedObject, int  i);
   void static_QItemSelection_split(const QItemSelectionRange&  range, const QItemSelectionRange&  other, QItemSelection*  result);
   void swap(QItemSelection* theWrappedObject, int  i, int  j);
   void move(QItemSelection* theWrappedObject, int  from, int  to);
   int  lastIndexOf(QItemSelection* theWrappedObject, const QItemSelectionRange&  t, int  from) const;
   const QItemSelectionRange*  front(QItemSelection* theWrappedObject) const;
   QList<QModelIndex >  indexes(QItemSelection* theWrappedObject) const;
   QList<QItemSelectionRange >  mid(QItemSelection* theWrappedObject, int  pos, int  length) const;
   QItemSelectionRange  takeLast(QItemSelection* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QITEMSELECTION_H
