#include "PythonQtWrapper_QAccessibleTableInterface.h"

#include <QVariant>
#include <qaccessible.h>
#include <qlist.h>

QAccessibleInterface*  PythonQtWrapper_QAccessibleTableInterface::accessibleAt(QAccessibleTableInterface* theWrappedObject, int  row, int  column)
{
return theWrappedObject->accessibleAt(row, column);
}

QAccessibleInterface*  PythonQtWrapper_QAccessibleTableInterface::caption(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->caption();
}

void PythonQtWrapper_QAccessibleTableInterface::cellAtIndex(QAccessibleTableInterface* theWrappedObject, int  index, int*  row, int*  column, int*  rowSpan, int*  columnSpan, bool*  isSelected)
{
theWrappedObject->cellAtIndex(index, row, column, rowSpan, columnSpan, isSelected);
}

int  PythonQtWrapper_QAccessibleTableInterface::childIndex(QAccessibleTableInterface* theWrappedObject, int  rowIndex, int  columnIndex)
{
return theWrappedObject->childIndex(rowIndex, columnIndex);
}

int  PythonQtWrapper_QAccessibleTableInterface::columnCount(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->columnCount();
}

QString  PythonQtWrapper_QAccessibleTableInterface::columnDescription(QAccessibleTableInterface* theWrappedObject, int  column)
{
return theWrappedObject->columnDescription(column);
}

QAccessibleInterface*  PythonQtWrapper_QAccessibleTableInterface::columnHeader(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->columnHeader();
}

int  PythonQtWrapper_QAccessibleTableInterface::columnIndex(QAccessibleTableInterface* theWrappedObject, int  childIndex)
{
return theWrappedObject->columnIndex(childIndex);
}

int  PythonQtWrapper_QAccessibleTableInterface::columnSpan(QAccessibleTableInterface* theWrappedObject, int  row, int  column)
{
return theWrappedObject->columnSpan(row, column);
}

bool  PythonQtWrapper_QAccessibleTableInterface::isColumnSelected(QAccessibleTableInterface* theWrappedObject, int  column)
{
return theWrappedObject->isColumnSelected(column);
}

bool  PythonQtWrapper_QAccessibleTableInterface::isRowSelected(QAccessibleTableInterface* theWrappedObject, int  row)
{
return theWrappedObject->isRowSelected(row);
}

bool  PythonQtWrapper_QAccessibleTableInterface::isSelected(QAccessibleTableInterface* theWrappedObject, int  row, int  column)
{
return theWrappedObject->isSelected(row, column);
}

int  PythonQtWrapper_QAccessibleTableInterface::rowCount(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->rowCount();
}

QString  PythonQtWrapper_QAccessibleTableInterface::rowDescription(QAccessibleTableInterface* theWrappedObject, int  row)
{
return theWrappedObject->rowDescription(row);
}

QAccessibleInterface*  PythonQtWrapper_QAccessibleTableInterface::rowHeader(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->rowHeader();
}

int  PythonQtWrapper_QAccessibleTableInterface::rowIndex(QAccessibleTableInterface* theWrappedObject, int  childIndex)
{
return theWrappedObject->rowIndex(childIndex);
}

int  PythonQtWrapper_QAccessibleTableInterface::rowSpan(QAccessibleTableInterface* theWrappedObject, int  row, int  column)
{
return theWrappedObject->rowSpan(row, column);
}

void PythonQtWrapper_QAccessibleTableInterface::selectColumn(QAccessibleTableInterface* theWrappedObject, int  column)
{
theWrappedObject->selectColumn(column);
}

void PythonQtWrapper_QAccessibleTableInterface::selectRow(QAccessibleTableInterface* theWrappedObject, int  row)
{
theWrappedObject->selectRow(row);
}

int  PythonQtWrapper_QAccessibleTableInterface::selectedColumnCount(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->selectedColumnCount();
}

int  PythonQtWrapper_QAccessibleTableInterface::selectedColumns(QAccessibleTableInterface* theWrappedObject, int  maxColumns, QList<int >*  columns)
{
return theWrappedObject->selectedColumns(maxColumns, columns);
}

int  PythonQtWrapper_QAccessibleTableInterface::selectedRowCount(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->selectedRowCount();
}

int  PythonQtWrapper_QAccessibleTableInterface::selectedRows(QAccessibleTableInterface* theWrappedObject, int  maxRows, QList<int >*  rows)
{
return theWrappedObject->selectedRows(maxRows, rows);
}

QAccessibleInterface*  PythonQtWrapper_QAccessibleTableInterface::summary(QAccessibleTableInterface* theWrappedObject)
{
return theWrappedObject->summary();
}

void PythonQtWrapper_QAccessibleTableInterface::unselectColumn(QAccessibleTableInterface* theWrappedObject, int  column)
{
theWrappedObject->unselectColumn(column);
}

void PythonQtWrapper_QAccessibleTableInterface::unselectRow(QAccessibleTableInterface* theWrappedObject, int  row)
{
theWrappedObject->unselectRow(row);
}

