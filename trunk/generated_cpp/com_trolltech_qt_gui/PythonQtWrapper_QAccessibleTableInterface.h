#ifndef PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H
#define PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H

#include <qaccessible2.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>

class PythonQtShell_QAccessibleTableInterface : public QAccessibleTableInterface
{
public:
    PythonQtShell_QAccessibleTableInterface():QAccessibleTableInterface(),_wrapper(NULL) {};

virtual QAccessibleInterface*  accessibleAt(int  row, int  column);
virtual QAccessibleInterface*  caption();
virtual void cellAtIndex(int  index, int*  row, int*  column, int*  rowSpan, int*  columnSpan, bool*  isSelected);
virtual int  childIndex(int  rowIndex, int  columnIndex);
virtual int  columnCount();
virtual QString  columnDescription(int  column);
virtual QAccessibleInterface*  columnHeader();
virtual int  columnIndex(int  childIndex);
virtual int  columnSpan(int  row, int  column);
virtual bool  isColumnSelected(int  column);
virtual bool  isRowSelected(int  row);
virtual bool  isSelected(int  row, int  column);
virtual int  rowCount();
virtual QString  rowDescription(int  row);
virtual QAccessibleInterface*  rowHeader();
virtual int  rowIndex(int  childIndex);
virtual int  rowSpan(int  row, int  column);
virtual void selectColumn(int  column);
virtual void selectRow(int  row);
virtual int  selectedColumnCount();
virtual int  selectedColumns(int  maxColumns, QList<int >*  columns);
virtual int  selectedRowCount();
virtual int  selectedRows(int  maxRows, QList<int >*  rows);
virtual QAccessibleInterface*  summary();
virtual void unselectColumn(int  column);
virtual void unselectRow(int  row);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAccessibleTableInterface : public QObject
{ Q_OBJECT
public:
public slots:
QAccessibleTableInterface* new_QAccessibleTableInterface();
void delete_QAccessibleTableInterface(QAccessibleTableInterface* obj) { delete obj; } 
};

#endif // PYTHONQTWRAPPER_QACCESSIBLETABLEINTERFACE_H
