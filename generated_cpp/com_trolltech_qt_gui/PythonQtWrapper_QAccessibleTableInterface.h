#ifndef PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H
#define PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H

#include <qaccessible2.h>
#include <QObject>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>

class PythonQtWrapper_QAccessibleTableInterface : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAccessibleTableInterface(QAccessibleTableInterface* obj) { delete obj; } 
   QAccessibleInterface*  accessibleAt(QAccessibleTableInterface* theWrappedObject, int  row, int  column);
   QAccessibleInterface*  caption(QAccessibleTableInterface* theWrappedObject);
   void cellAtIndex(QAccessibleTableInterface* theWrappedObject, int  index, int*  row, int*  column, int*  rowSpan, int*  columnSpan, bool*  isSelected);
   int  childIndex(QAccessibleTableInterface* theWrappedObject, int  rowIndex, int  columnIndex);
   int  columnCount(QAccessibleTableInterface* theWrappedObject);
   QString  columnDescription(QAccessibleTableInterface* theWrappedObject, int  column);
   QAccessibleInterface*  columnHeader(QAccessibleTableInterface* theWrappedObject);
   int  columnIndex(QAccessibleTableInterface* theWrappedObject, int  childIndex);
   int  columnSpan(QAccessibleTableInterface* theWrappedObject, int  row, int  column);
   bool  isColumnSelected(QAccessibleTableInterface* theWrappedObject, int  column);
   bool  isRowSelected(QAccessibleTableInterface* theWrappedObject, int  row);
   bool  isSelected(QAccessibleTableInterface* theWrappedObject, int  row, int  column);
   int  rowCount(QAccessibleTableInterface* theWrappedObject);
   QString  rowDescription(QAccessibleTableInterface* theWrappedObject, int  row);
   QAccessibleInterface*  rowHeader(QAccessibleTableInterface* theWrappedObject);
   int  rowIndex(QAccessibleTableInterface* theWrappedObject, int  childIndex);
   int  rowSpan(QAccessibleTableInterface* theWrappedObject, int  row, int  column);
   void selectColumn(QAccessibleTableInterface* theWrappedObject, int  column);
   void selectRow(QAccessibleTableInterface* theWrappedObject, int  row);
   int  selectedColumnCount(QAccessibleTableInterface* theWrappedObject);
   int  selectedColumns(QAccessibleTableInterface* theWrappedObject, int  maxColumns, QList<int >*  columns);
   int  selectedRowCount(QAccessibleTableInterface* theWrappedObject);
   int  selectedRows(QAccessibleTableInterface* theWrappedObject, int  maxRows, QList<int >*  rows);
   QAccessibleInterface*  summary(QAccessibleTableInterface* theWrappedObject);
   void unselectColumn(QAccessibleTableInterface* theWrappedObject, int  column);
   void unselectRow(QAccessibleTableInterface* theWrappedObject, int  row);
};

#endif // PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H
