#include "PythonQtWrapper_QTableView.h"

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
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtableview.h>
#include <qwidget.h>

QTableView* PythonQtWrapper_QTableView::new_QTableView(QWidget*  parent)
{ 
return new QTableView(parent); }

void PythonQtWrapper_QTableView::clearSpans(QTableView* theWrappedObject)
{
theWrappedObject->clearSpans();
}

int  PythonQtWrapper_QTableView::columnAt(QTableView* theWrappedObject, int  x) const
{
return theWrappedObject->columnAt(x);
}

int  PythonQtWrapper_QTableView::columnSpan(QTableView* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->columnSpan(row, column);
}

int  PythonQtWrapper_QTableView::columnViewportPosition(QTableView* theWrappedObject, int  column) const
{
return theWrappedObject->columnViewportPosition(column);
}

int  PythonQtWrapper_QTableView::columnWidth(QTableView* theWrappedObject, int  column) const
{
return theWrappedObject->columnWidth(column);
}

Qt::PenStyle  PythonQtWrapper_QTableView::gridStyle(QTableView* theWrappedObject) const
{
return theWrappedObject->gridStyle();
}

QHeaderView*  PythonQtWrapper_QTableView::horizontalHeader(QTableView* theWrappedObject) const
{
return theWrappedObject->horizontalHeader();
}

QModelIndex  PythonQtWrapper_QTableView::indexAt(QTableView* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->indexAt(p);
}

bool  PythonQtWrapper_QTableView::isColumnHidden(QTableView* theWrappedObject, int  column) const
{
return theWrappedObject->isColumnHidden(column);
}

bool  PythonQtWrapper_QTableView::isCornerButtonEnabled(QTableView* theWrappedObject) const
{
return theWrappedObject->isCornerButtonEnabled();
}

bool  PythonQtWrapper_QTableView::isRowHidden(QTableView* theWrappedObject, int  row) const
{
return theWrappedObject->isRowHidden(row);
}

bool  PythonQtWrapper_QTableView::isSortingEnabled(QTableView* theWrappedObject) const
{
return theWrappedObject->isSortingEnabled();
}

int  PythonQtWrapper_QTableView::rowAt(QTableView* theWrappedObject, int  y) const
{
return theWrappedObject->rowAt(y);
}

int  PythonQtWrapper_QTableView::rowHeight(QTableView* theWrappedObject, int  row) const
{
return theWrappedObject->rowHeight(row);
}

int  PythonQtWrapper_QTableView::rowSpan(QTableView* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->rowSpan(row, column);
}

int  PythonQtWrapper_QTableView::rowViewportPosition(QTableView* theWrappedObject, int  row) const
{
return theWrappedObject->rowViewportPosition(row);
}

void PythonQtWrapper_QTableView::scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
theWrappedObject->scrollTo(index, hint);
}

void PythonQtWrapper_QTableView::setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide)
{
theWrappedObject->setColumnHidden(column, hide);
}

void PythonQtWrapper_QTableView::setColumnWidth(QTableView* theWrappedObject, int  column, int  width)
{
theWrappedObject->setColumnWidth(column, width);
}

void PythonQtWrapper_QTableView::setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable)
{
theWrappedObject->setCornerButtonEnabled(enable);
}

void PythonQtWrapper_QTableView::setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style)
{
theWrappedObject->setGridStyle(style);
}

void PythonQtWrapper_QTableView::setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header)
{
theWrappedObject->setHorizontalHeader(header);
}

void PythonQtWrapper_QTableView::setModel(QTableView* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QTableView::setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QTableView::setRowHeight(QTableView* theWrappedObject, int  row, int  height)
{
theWrappedObject->setRowHeight(row, height);
}

void PythonQtWrapper_QTableView::setRowHidden(QTableView* theWrappedObject, int  row, bool  hide)
{
theWrappedObject->setRowHidden(row, hide);
}

void PythonQtWrapper_QTableView::setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
theWrappedObject->setSelectionModel(selectionModel);
}

void PythonQtWrapper_QTableView::setSortingEnabled(QTableView* theWrappedObject, bool  enable)
{
theWrappedObject->setSortingEnabled(enable);
}

void PythonQtWrapper_QTableView::setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan)
{
theWrappedObject->setSpan(row, column, rowSpan, columnSpan);
}

void PythonQtWrapper_QTableView::setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header)
{
theWrappedObject->setVerticalHeader(header);
}

void PythonQtWrapper_QTableView::setWordWrap(QTableView* theWrappedObject, bool  on)
{
theWrappedObject->setWordWrap(on);
}

bool  PythonQtWrapper_QTableView::showGrid(QTableView* theWrappedObject) const
{
return theWrappedObject->showGrid();
}

void PythonQtWrapper_QTableView::sortByColumn(QTableView* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortByColumn(column, order);
}

QHeaderView*  PythonQtWrapper_QTableView::verticalHeader(QTableView* theWrappedObject) const
{
return theWrappedObject->verticalHeader();
}

QRect  PythonQtWrapper_QTableView::visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->visualRect(index);
}

bool  PythonQtWrapper_QTableView::wordWrap(QTableView* theWrappedObject) const
{
return theWrappedObject->wordWrap();
}

