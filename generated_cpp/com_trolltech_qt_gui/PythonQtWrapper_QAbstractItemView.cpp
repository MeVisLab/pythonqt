#include "PythonQtWrapper_QAbstractItemView.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
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
#include <qwidget.h>

bool  PythonQtWrapper_QAbstractItemView::alternatingRowColors(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->alternatingRowColors();
}

int  PythonQtWrapper_QAbstractItemView::autoScrollMargin(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->autoScrollMargin();
}

void PythonQtWrapper_QAbstractItemView::closePersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->closePersistentEditor(index);
}

QModelIndex  PythonQtWrapper_QAbstractItemView::currentIndex(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->currentIndex();
}

QAbstractItemView::DragDropMode  PythonQtWrapper_QAbstractItemView::dragDropMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->dragDropMode();
}

bool  PythonQtWrapper_QAbstractItemView::dragDropOverwriteMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->dragDropOverwriteMode();
}

bool  PythonQtWrapper_QAbstractItemView::dragEnabled(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->dragEnabled();
}

QAbstractItemView::EditTriggers  PythonQtWrapper_QAbstractItemView::editTriggers(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->editTriggers();
}

bool  PythonQtWrapper_QAbstractItemView::hasAutoScroll(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->hasAutoScroll();
}

QAbstractItemView::ScrollMode  PythonQtWrapper_QAbstractItemView::horizontalScrollMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->horizontalScrollMode();
}

QSize  PythonQtWrapper_QAbstractItemView::iconSize(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->iconSize();
}

QModelIndex  PythonQtWrapper_QAbstractItemView::indexAt(QAbstractItemView* theWrappedObject, const QPoint&  point) const
{
return theWrappedObject->indexAt(point);
}

QWidget*  PythonQtWrapper_QAbstractItemView::indexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->indexWidget(index);
}

QVariant  PythonQtWrapper_QAbstractItemView::inputMethodQuery(QAbstractItemView* theWrappedObject, Qt::InputMethodQuery  query) const
{
return theWrappedObject->inputMethodQuery(query);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegate(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->itemDelegate();
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegate(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->itemDelegate(index);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column) const
{
return theWrappedObject->itemDelegateForColumn(column);
}

QAbstractItemDelegate*  PythonQtWrapper_QAbstractItemView::itemDelegateForRow(QAbstractItemView* theWrappedObject, int  row) const
{
return theWrappedObject->itemDelegateForRow(row);
}

void PythonQtWrapper_QAbstractItemView::keyboardSearch(QAbstractItemView* theWrappedObject, const QString&  search)
{
theWrappedObject->keyboardSearch(search);
}

QAbstractItemModel*  PythonQtWrapper_QAbstractItemView::model(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->model();
}

void PythonQtWrapper_QAbstractItemView::openPersistentEditor(QAbstractItemView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->openPersistentEditor(index);
}

QModelIndex  PythonQtWrapper_QAbstractItemView::rootIndex(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->rootIndex();
}

void PythonQtWrapper_QAbstractItemView::scrollTo(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
theWrappedObject->scrollTo(index, hint);
}

QAbstractItemView::SelectionBehavior  PythonQtWrapper_QAbstractItemView::selectionBehavior(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->selectionBehavior();
}

QAbstractItemView::SelectionMode  PythonQtWrapper_QAbstractItemView::selectionMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->selectionMode();
}

QItemSelectionModel*  PythonQtWrapper_QAbstractItemView::selectionModel(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->selectionModel();
}

void PythonQtWrapper_QAbstractItemView::setAlternatingRowColors(QAbstractItemView* theWrappedObject, bool  enable)
{
theWrappedObject->setAlternatingRowColors(enable);
}

void PythonQtWrapper_QAbstractItemView::setAutoScroll(QAbstractItemView* theWrappedObject, bool  enable)
{
theWrappedObject->setAutoScroll(enable);
}

void PythonQtWrapper_QAbstractItemView::setAutoScrollMargin(QAbstractItemView* theWrappedObject, int  margin)
{
theWrappedObject->setAutoScrollMargin(margin);
}

void PythonQtWrapper_QAbstractItemView::setDragDropMode(QAbstractItemView* theWrappedObject, QAbstractItemView::DragDropMode  behavior)
{
theWrappedObject->setDragDropMode(behavior);
}

void PythonQtWrapper_QAbstractItemView::setDragDropOverwriteMode(QAbstractItemView* theWrappedObject, bool  overwrite)
{
theWrappedObject->setDragDropOverwriteMode(overwrite);
}

void PythonQtWrapper_QAbstractItemView::setDragEnabled(QAbstractItemView* theWrappedObject, bool  enable)
{
theWrappedObject->setDragEnabled(enable);
}

void PythonQtWrapper_QAbstractItemView::setDropIndicatorShown(QAbstractItemView* theWrappedObject, bool  enable)
{
theWrappedObject->setDropIndicatorShown(enable);
}

void PythonQtWrapper_QAbstractItemView::setEditTriggers(QAbstractItemView* theWrappedObject, QAbstractItemView::EditTriggers  triggers)
{
theWrappedObject->setEditTriggers(triggers);
}

void PythonQtWrapper_QAbstractItemView::setHorizontalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode)
{
theWrappedObject->setHorizontalScrollMode(mode);
}

void PythonQtWrapper_QAbstractItemView::setIconSize(QAbstractItemView* theWrappedObject, const QSize&  size)
{
theWrappedObject->setIconSize(size);
}

void PythonQtWrapper_QAbstractItemView::setIndexWidget(QAbstractItemView* theWrappedObject, const QModelIndex&  index, QWidget*  widget)
{
theWrappedObject->setIndexWidget(index, widget);
}

void PythonQtWrapper_QAbstractItemView::setItemDelegate(QAbstractItemView* theWrappedObject, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QAbstractItemView::setItemDelegateForColumn(QAbstractItemView* theWrappedObject, int  column, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegateForColumn(column, delegate);
}

void PythonQtWrapper_QAbstractItemView::setItemDelegateForRow(QAbstractItemView* theWrappedObject, int  row, QAbstractItemDelegate*  delegate)
{
theWrappedObject->setItemDelegateForRow(row, delegate);
}

void PythonQtWrapper_QAbstractItemView::setModel(QAbstractItemView* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QAbstractItemView::setSelectionBehavior(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionBehavior  behavior)
{
theWrappedObject->setSelectionBehavior(behavior);
}

void PythonQtWrapper_QAbstractItemView::setSelectionMode(QAbstractItemView* theWrappedObject, QAbstractItemView::SelectionMode  mode)
{
theWrappedObject->setSelectionMode(mode);
}

void PythonQtWrapper_QAbstractItemView::setSelectionModel(QAbstractItemView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
theWrappedObject->setSelectionModel(selectionModel);
}

void PythonQtWrapper_QAbstractItemView::setTabKeyNavigation(QAbstractItemView* theWrappedObject, bool  enable)
{
theWrappedObject->setTabKeyNavigation(enable);
}

void PythonQtWrapper_QAbstractItemView::setTextElideMode(QAbstractItemView* theWrappedObject, Qt::TextElideMode  mode)
{
theWrappedObject->setTextElideMode(mode);
}

void PythonQtWrapper_QAbstractItemView::setVerticalScrollMode(QAbstractItemView* theWrappedObject, QAbstractItemView::ScrollMode  mode)
{
theWrappedObject->setVerticalScrollMode(mode);
}

bool  PythonQtWrapper_QAbstractItemView::showDropIndicator(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->showDropIndicator();
}

int  PythonQtWrapper_QAbstractItemView::sizeHintForColumn(QAbstractItemView* theWrappedObject, int  column) const
{
return theWrappedObject->sizeHintForColumn(column);
}

QSize  PythonQtWrapper_QAbstractItemView::sizeHintForIndex(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->sizeHintForIndex(index);
}

int  PythonQtWrapper_QAbstractItemView::sizeHintForRow(QAbstractItemView* theWrappedObject, int  row) const
{
return theWrappedObject->sizeHintForRow(row);
}

bool  PythonQtWrapper_QAbstractItemView::tabKeyNavigation(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->tabKeyNavigation();
}

Qt::TextElideMode  PythonQtWrapper_QAbstractItemView::textElideMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->textElideMode();
}

QAbstractItemView::ScrollMode  PythonQtWrapper_QAbstractItemView::verticalScrollMode(QAbstractItemView* theWrappedObject) const
{
return theWrappedObject->verticalScrollMode();
}

QRect  PythonQtWrapper_QAbstractItemView::visualRect(QAbstractItemView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->visualRect(index);
}

