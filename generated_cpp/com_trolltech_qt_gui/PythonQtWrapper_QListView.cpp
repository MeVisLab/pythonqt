#include "PythonQtWrapper_QListView.h"

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
#include <qicon.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlistview.h>
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

QListView* PythonQtWrapper_QListView::new_QListView(QWidget*  parent)
{ 
return new QListView(parent); }

int  PythonQtWrapper_QListView::batchSize(QListView* theWrappedObject) const
{
return theWrappedObject->batchSize();
}

void PythonQtWrapper_QListView::clearPropertyFlags(QListView* theWrappedObject)
{
theWrappedObject->clearPropertyFlags();
}

void PythonQtWrapper_QListView::doItemsLayout(QListView* theWrappedObject)
{
theWrappedObject->doItemsLayout();
}

QListView::Flow  PythonQtWrapper_QListView::flow(QListView* theWrappedObject) const
{
return theWrappedObject->flow();
}

QSize  PythonQtWrapper_QListView::gridSize(QListView* theWrappedObject) const
{
return theWrappedObject->gridSize();
}

QModelIndex  PythonQtWrapper_QListView::indexAt(QListView* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->indexAt(p);
}

bool  PythonQtWrapper_QListView::isRowHidden(QListView* theWrappedObject, int  row) const
{
return theWrappedObject->isRowHidden(row);
}

bool  PythonQtWrapper_QListView::isSelectionRectVisible(QListView* theWrappedObject) const
{
return theWrappedObject->isSelectionRectVisible();
}

bool  PythonQtWrapper_QListView::isWrapping(QListView* theWrappedObject) const
{
return theWrappedObject->isWrapping();
}

QListView::LayoutMode  PythonQtWrapper_QListView::layoutMode(QListView* theWrappedObject) const
{
return theWrappedObject->layoutMode();
}

int  PythonQtWrapper_QListView::modelColumn(QListView* theWrappedObject) const
{
return theWrappedObject->modelColumn();
}

QListView::Movement  PythonQtWrapper_QListView::movement(QListView* theWrappedObject) const
{
return theWrappedObject->movement();
}

void PythonQtWrapper_QListView::reset(QListView* theWrappedObject)
{
theWrappedObject->reset();
}

QListView::ResizeMode  PythonQtWrapper_QListView::resizeMode(QListView* theWrappedObject) const
{
return theWrappedObject->resizeMode();
}

void PythonQtWrapper_QListView::scrollTo(QListView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
theWrappedObject->scrollTo(index, hint);
}

void PythonQtWrapper_QListView::setBatchSize(QListView* theWrappedObject, int  batchSize)
{
theWrappedObject->setBatchSize(batchSize);
}

void PythonQtWrapper_QListView::setFlow(QListView* theWrappedObject, QListView::Flow  flow)
{
theWrappedObject->setFlow(flow);
}

void PythonQtWrapper_QListView::setGridSize(QListView* theWrappedObject, const QSize&  size)
{
theWrappedObject->setGridSize(size);
}

void PythonQtWrapper_QListView::setLayoutMode(QListView* theWrappedObject, QListView::LayoutMode  mode)
{
theWrappedObject->setLayoutMode(mode);
}

void PythonQtWrapper_QListView::setModelColumn(QListView* theWrappedObject, int  column)
{
theWrappedObject->setModelColumn(column);
}

void PythonQtWrapper_QListView::setMovement(QListView* theWrappedObject, QListView::Movement  movement)
{
theWrappedObject->setMovement(movement);
}

void PythonQtWrapper_QListView::setResizeMode(QListView* theWrappedObject, QListView::ResizeMode  mode)
{
theWrappedObject->setResizeMode(mode);
}

void PythonQtWrapper_QListView::setRootIndex(QListView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QListView::setRowHidden(QListView* theWrappedObject, int  row, bool  hide)
{
theWrappedObject->setRowHidden(row, hide);
}

void PythonQtWrapper_QListView::setSelectionRectVisible(QListView* theWrappedObject, bool  show)
{
theWrappedObject->setSelectionRectVisible(show);
}

void PythonQtWrapper_QListView::setSpacing(QListView* theWrappedObject, int  space)
{
theWrappedObject->setSpacing(space);
}

void PythonQtWrapper_QListView::setUniformItemSizes(QListView* theWrappedObject, bool  enable)
{
theWrappedObject->setUniformItemSizes(enable);
}

void PythonQtWrapper_QListView::setViewMode(QListView* theWrappedObject, QListView::ViewMode  mode)
{
theWrappedObject->setViewMode(mode);
}

void PythonQtWrapper_QListView::setWordWrap(QListView* theWrappedObject, bool  on)
{
theWrappedObject->setWordWrap(on);
}

void PythonQtWrapper_QListView::setWrapping(QListView* theWrappedObject, bool  enable)
{
theWrappedObject->setWrapping(enable);
}

int  PythonQtWrapper_QListView::spacing(QListView* theWrappedObject) const
{
return theWrappedObject->spacing();
}

bool  PythonQtWrapper_QListView::uniformItemSizes(QListView* theWrappedObject) const
{
return theWrappedObject->uniformItemSizes();
}

QListView::ViewMode  PythonQtWrapper_QListView::viewMode(QListView* theWrappedObject) const
{
return theWrappedObject->viewMode();
}

QRect  PythonQtWrapper_QListView::visualRect(QListView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->visualRect(index);
}

bool  PythonQtWrapper_QListView::wordWrap(QListView* theWrappedObject) const
{
return theWrappedObject->wordWrap();
}

