#include "PythonQtWrapper_QTreeView.h"

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
#include <qtreeview.h>
#include <qwidget.h>

QTreeView* PythonQtWrapper_QTreeView::new_QTreeView(QWidget*  parent)
{ 
return new QTreeView(parent); }

bool  PythonQtWrapper_QTreeView::allColumnsShowFocus(QTreeView* theWrappedObject) const
{
return theWrappedObject->allColumnsShowFocus();
}

int  PythonQtWrapper_QTreeView::autoExpandDelay(QTreeView* theWrappedObject) const
{
return theWrappedObject->autoExpandDelay();
}

int  PythonQtWrapper_QTreeView::columnAt(QTreeView* theWrappedObject, int  x) const
{
return theWrappedObject->columnAt(x);
}

int  PythonQtWrapper_QTreeView::columnViewportPosition(QTreeView* theWrappedObject, int  column) const
{
return theWrappedObject->columnViewportPosition(column);
}

int  PythonQtWrapper_QTreeView::columnWidth(QTreeView* theWrappedObject, int  column) const
{
return theWrappedObject->columnWidth(column);
}

void PythonQtWrapper_QTreeView::doItemsLayout(QTreeView* theWrappedObject)
{
theWrappedObject->doItemsLayout();
}

bool  PythonQtWrapper_QTreeView::expandsOnDoubleClick(QTreeView* theWrappedObject) const
{
return theWrappedObject->expandsOnDoubleClick();
}

QHeaderView*  PythonQtWrapper_QTreeView::header(QTreeView* theWrappedObject) const
{
return theWrappedObject->header();
}

int  PythonQtWrapper_QTreeView::indentation(QTreeView* theWrappedObject) const
{
return theWrappedObject->indentation();
}

QModelIndex  PythonQtWrapper_QTreeView::indexAbove(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->indexAbove(index);
}

QModelIndex  PythonQtWrapper_QTreeView::indexAt(QTreeView* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->indexAt(p);
}

QModelIndex  PythonQtWrapper_QTreeView::indexBelow(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->indexBelow(index);
}

bool  PythonQtWrapper_QTreeView::isAnimated(QTreeView* theWrappedObject) const
{
return theWrappedObject->isAnimated();
}

bool  PythonQtWrapper_QTreeView::isColumnHidden(QTreeView* theWrappedObject, int  column) const
{
return theWrappedObject->isColumnHidden(column);
}

bool  PythonQtWrapper_QTreeView::isExpanded(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->isExpanded(index);
}

bool  PythonQtWrapper_QTreeView::isFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return theWrappedObject->isFirstColumnSpanned(row, parent);
}

bool  PythonQtWrapper_QTreeView::isHeaderHidden(QTreeView* theWrappedObject) const
{
return theWrappedObject->isHeaderHidden();
}

bool  PythonQtWrapper_QTreeView::isRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent) const
{
return theWrappedObject->isRowHidden(row, parent);
}

bool  PythonQtWrapper_QTreeView::isSortingEnabled(QTreeView* theWrappedObject) const
{
return theWrappedObject->isSortingEnabled();
}

bool  PythonQtWrapper_QTreeView::itemsExpandable(QTreeView* theWrappedObject) const
{
return theWrappedObject->itemsExpandable();
}

void PythonQtWrapper_QTreeView::keyboardSearch(QTreeView* theWrappedObject, const QString&  search)
{
theWrappedObject->keyboardSearch(search);
}

void PythonQtWrapper_QTreeView::reset(QTreeView* theWrappedObject)
{
theWrappedObject->reset();
}

bool  PythonQtWrapper_QTreeView::rootIsDecorated(QTreeView* theWrappedObject) const
{
return theWrappedObject->rootIsDecorated();
}

void PythonQtWrapper_QTreeView::scrollTo(QTreeView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
theWrappedObject->scrollTo(index, hint);
}

void PythonQtWrapper_QTreeView::setAllColumnsShowFocus(QTreeView* theWrappedObject, bool  enable)
{
theWrappedObject->setAllColumnsShowFocus(enable);
}

void PythonQtWrapper_QTreeView::setAnimated(QTreeView* theWrappedObject, bool  enable)
{
theWrappedObject->setAnimated(enable);
}

void PythonQtWrapper_QTreeView::setAutoExpandDelay(QTreeView* theWrappedObject, int  delay)
{
theWrappedObject->setAutoExpandDelay(delay);
}

void PythonQtWrapper_QTreeView::setColumnHidden(QTreeView* theWrappedObject, int  column, bool  hide)
{
theWrappedObject->setColumnHidden(column, hide);
}

void PythonQtWrapper_QTreeView::setColumnWidth(QTreeView* theWrappedObject, int  column, int  width)
{
theWrappedObject->setColumnWidth(column, width);
}

void PythonQtWrapper_QTreeView::setExpanded(QTreeView* theWrappedObject, const QModelIndex&  index, bool  expand)
{
theWrappedObject->setExpanded(index, expand);
}

void PythonQtWrapper_QTreeView::setExpandsOnDoubleClick(QTreeView* theWrappedObject, bool  enable)
{
theWrappedObject->setExpandsOnDoubleClick(enable);
}

void PythonQtWrapper_QTreeView::setFirstColumnSpanned(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  span)
{
theWrappedObject->setFirstColumnSpanned(row, parent, span);
}

void PythonQtWrapper_QTreeView::setHeader(QTreeView* theWrappedObject, QHeaderView*  header)
{
theWrappedObject->setHeader(header);
}

void PythonQtWrapper_QTreeView::setHeaderHidden(QTreeView* theWrappedObject, bool  hide)
{
theWrappedObject->setHeaderHidden(hide);
}

void PythonQtWrapper_QTreeView::setIndentation(QTreeView* theWrappedObject, int  i)
{
theWrappedObject->setIndentation(i);
}

void PythonQtWrapper_QTreeView::setItemsExpandable(QTreeView* theWrappedObject, bool  enable)
{
theWrappedObject->setItemsExpandable(enable);
}

void PythonQtWrapper_QTreeView::setModel(QTreeView* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QTreeView::setRootIndex(QTreeView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QTreeView::setRootIsDecorated(QTreeView* theWrappedObject, bool  show)
{
theWrappedObject->setRootIsDecorated(show);
}

void PythonQtWrapper_QTreeView::setRowHidden(QTreeView* theWrappedObject, int  row, const QModelIndex&  parent, bool  hide)
{
theWrappedObject->setRowHidden(row, parent, hide);
}

void PythonQtWrapper_QTreeView::setSelectionModel(QTreeView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
theWrappedObject->setSelectionModel(selectionModel);
}

void PythonQtWrapper_QTreeView::setSortingEnabled(QTreeView* theWrappedObject, bool  enable)
{
theWrappedObject->setSortingEnabled(enable);
}

void PythonQtWrapper_QTreeView::setUniformRowHeights(QTreeView* theWrappedObject, bool  uniform)
{
theWrappedObject->setUniformRowHeights(uniform);
}

void PythonQtWrapper_QTreeView::setWordWrap(QTreeView* theWrappedObject, bool  on)
{
theWrappedObject->setWordWrap(on);
}

void PythonQtWrapper_QTreeView::sortByColumn(QTreeView* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortByColumn(column, order);
}

bool  PythonQtWrapper_QTreeView::uniformRowHeights(QTreeView* theWrappedObject) const
{
return theWrappedObject->uniformRowHeights();
}

QRect  PythonQtWrapper_QTreeView::visualRect(QTreeView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->visualRect(index);
}

bool  PythonQtWrapper_QTreeView::wordWrap(QTreeView* theWrappedObject) const
{
return theWrappedObject->wordWrap();
}

