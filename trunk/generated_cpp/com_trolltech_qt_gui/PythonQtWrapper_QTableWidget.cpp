#include "PythonQtWrapper_QTableWidget.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtablewidget.h>
#include <qwidget.h>

QTableWidget* PythonQtWrapper_QTableWidget::new_QTableWidget(QWidget*  parent)
{ 
return new QTableWidget(parent); }

QTableWidget* PythonQtWrapper_QTableWidget::new_QTableWidget(int  rows, int  columns, QWidget*  parent)
{ 
return new QTableWidget(rows, columns, parent); }

QWidget*  PythonQtWrapper_QTableWidget::cellWidget(QTableWidget* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->cellWidget(row, column);
}

void PythonQtWrapper_QTableWidget::closePersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
theWrappedObject->closePersistentEditor(item);
}

int  PythonQtWrapper_QTableWidget::column(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
return theWrappedObject->column(item);
}

int  PythonQtWrapper_QTableWidget::columnCount(QTableWidget* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

int  PythonQtWrapper_QTableWidget::currentColumn(QTableWidget* theWrappedObject) const
{
return theWrappedObject->currentColumn();
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::currentItem(QTableWidget* theWrappedObject) const
{
return theWrappedObject->currentItem();
}

int  PythonQtWrapper_QTableWidget::currentRow(QTableWidget* theWrappedObject) const
{
return theWrappedObject->currentRow();
}

void PythonQtWrapper_QTableWidget::editItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
theWrappedObject->editItem(item);
}

QList<QTableWidgetItem* >  PythonQtWrapper_QTableWidget::findItems(QTableWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
return theWrappedObject->findItems(text, flags);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::horizontalHeaderItem(QTableWidget* theWrappedObject, int  column) const
{
return theWrappedObject->horizontalHeaderItem(column);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::item(QTableWidget* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->item(row, column);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemAt(QTableWidget* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->itemAt(p);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemAt(QTableWidget* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->itemAt(x, y);
}

const QTableWidgetItem*  PythonQtWrapper_QTableWidget::itemPrototype(QTableWidget* theWrappedObject) const
{
return theWrappedObject->itemPrototype();
}

void PythonQtWrapper_QTableWidget::openPersistentEditor(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
theWrappedObject->openPersistentEditor(item);
}

void PythonQtWrapper_QTableWidget::removeCellWidget(QTableWidget* theWrappedObject, int  row, int  column)
{
theWrappedObject->removeCellWidget(row, column);
}

int  PythonQtWrapper_QTableWidget::row(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
return theWrappedObject->row(item);
}

int  PythonQtWrapper_QTableWidget::rowCount(QTableWidget* theWrappedObject) const
{
return theWrappedObject->rowCount();
}

QList<QTableWidgetItem* >  PythonQtWrapper_QTableWidget::selectedItems(QTableWidget* theWrappedObject)
{
return theWrappedObject->selectedItems();
}

QList<QTableWidgetSelectionRange >  PythonQtWrapper_QTableWidget::selectedRanges(QTableWidget* theWrappedObject) const
{
return theWrappedObject->selectedRanges();
}

void PythonQtWrapper_QTableWidget::setCellWidget(QTableWidget* theWrappedObject, int  row, int  column, QWidget*  widget)
{
theWrappedObject->setCellWidget(row, column, widget);
}

void PythonQtWrapper_QTableWidget::setColumnCount(QTableWidget* theWrappedObject, int  columns)
{
theWrappedObject->setColumnCount(columns);
}

void PythonQtWrapper_QTableWidget::setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column)
{
theWrappedObject->setCurrentCell(row, column);
}

void PythonQtWrapper_QTableWidget::setCurrentCell(QTableWidget* theWrappedObject, int  row, int  column, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->setCurrentCell(row, column, command);
}

void PythonQtWrapper_QTableWidget::setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item)
{
theWrappedObject->setCurrentItem(item);
}

void PythonQtWrapper_QTableWidget::setCurrentItem(QTableWidget* theWrappedObject, QTableWidgetItem*  item, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->setCurrentItem(item, command);
}

void PythonQtWrapper_QTableWidget::setHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column, QTableWidgetItem*  item)
{
theWrappedObject->setHorizontalHeaderItem(column, item);
}

void PythonQtWrapper_QTableWidget::setHorizontalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->setHorizontalHeaderLabels(labels);
}

void PythonQtWrapper_QTableWidget::setItem(QTableWidget* theWrappedObject, int  row, int  column, QTableWidgetItem*  item)
{
theWrappedObject->setItem(row, column, item);
}

void PythonQtWrapper_QTableWidget::setItemPrototype(QTableWidget* theWrappedObject, const QTableWidgetItem*  item)
{
theWrappedObject->setItemPrototype(item);
}

void PythonQtWrapper_QTableWidget::setRangeSelected(QTableWidget* theWrappedObject, const QTableWidgetSelectionRange&  range, bool  select)
{
theWrappedObject->setRangeSelected(range, select);
}

void PythonQtWrapper_QTableWidget::setRowCount(QTableWidget* theWrappedObject, int  rows)
{
theWrappedObject->setRowCount(rows);
}

void PythonQtWrapper_QTableWidget::setVerticalHeaderItem(QTableWidget* theWrappedObject, int  row, QTableWidgetItem*  item)
{
theWrappedObject->setVerticalHeaderItem(row, item);
}

void PythonQtWrapper_QTableWidget::setVerticalHeaderLabels(QTableWidget* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->setVerticalHeaderLabels(labels);
}

void PythonQtWrapper_QTableWidget::sortItems(QTableWidget* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortItems(column, order);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::takeHorizontalHeaderItem(QTableWidget* theWrappedObject, int  column)
{
return theWrappedObject->takeHorizontalHeaderItem(column);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::takeItem(QTableWidget* theWrappedObject, int  row, int  column)
{
return theWrappedObject->takeItem(row, column);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::takeVerticalHeaderItem(QTableWidget* theWrappedObject, int  row)
{
return theWrappedObject->takeVerticalHeaderItem(row);
}

QTableWidgetItem*  PythonQtWrapper_QTableWidget::verticalHeaderItem(QTableWidget* theWrappedObject, int  row) const
{
return theWrappedObject->verticalHeaderItem(row);
}

int  PythonQtWrapper_QTableWidget::visualColumn(QTableWidget* theWrappedObject, int  logicalColumn) const
{
return theWrappedObject->visualColumn(logicalColumn);
}

QRect  PythonQtWrapper_QTableWidget::visualItemRect(QTableWidget* theWrappedObject, const QTableWidgetItem*  item) const
{
return theWrappedObject->visualItemRect(item);
}

int  PythonQtWrapper_QTableWidget::visualRow(QTableWidget* theWrappedObject, int  logicalRow) const
{
return theWrappedObject->visualRow(logicalRow);
}

