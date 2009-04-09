#ifndef PYTHONQTWRAPPER_QITEMSELECTIONMODEL_H
#define PYTHONQTWRAPPER_QITEMSELECTIONMODEL_H

#include <qitemselectionmodel.h>
#include <QObject>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QItemSelectionModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectionFlag )
enum SelectionFlag{
  NoUpdate = QItemSelectionModel::NoUpdate,   Clear = QItemSelectionModel::Clear,   Select = QItemSelectionModel::Select,   Deselect = QItemSelectionModel::Deselect,   Toggle = QItemSelectionModel::Toggle,   Current = QItemSelectionModel::Current,   Rows = QItemSelectionModel::Rows,   Columns = QItemSelectionModel::Columns,   SelectCurrent = QItemSelectionModel::SelectCurrent,   ToggleCurrent = QItemSelectionModel::ToggleCurrent,   ClearAndSelect = QItemSelectionModel::ClearAndSelect};
public slots:
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model);
QItemSelectionModel* new_QItemSelectionModel(QAbstractItemModel*  model, QObject*  parent);
void delete_QItemSelectionModel(QItemSelectionModel* obj) { delete obj; } 
   bool  columnIntersectsSelection(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   QModelIndex  currentIndex(QItemSelectionModel* theWrappedObject) const;
   bool  hasSelection(QItemSelectionModel* theWrappedObject) const;
   bool  isColumnSelected(QItemSelectionModel* theWrappedObject, int  column, const QModelIndex&  parent) const;
   bool  isRowSelected(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   bool  isSelected(QItemSelectionModel* theWrappedObject, const QModelIndex&  index) const;
   const QAbstractItemModel*  model(QItemSelectionModel* theWrappedObject) const;
   bool  rowIntersectsSelection(QItemSelectionModel* theWrappedObject, int  row, const QModelIndex&  parent) const;
   QList<QModelIndex >  selectedColumns(QItemSelectionModel* theWrappedObject, int  row = 0) const;
   QList<QModelIndex >  selectedIndexes(QItemSelectionModel* theWrappedObject) const;
   QList<QModelIndex >  selectedRows(QItemSelectionModel* theWrappedObject, int  column = 0) const;
   const QItemSelection  selection(QItemSelectionModel* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QITEMSELECTIONMODEL_H
