#include "PythonQtWrapper_QColumnView.h"

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolumnview.h>
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

QColumnView* PythonQtWrapper_QColumnView::new_QColumnView(QWidget*  parent)
{ 
return new QColumnView(parent); }

QList<int >  PythonQtWrapper_QColumnView::columnWidths(QColumnView* theWrappedObject) const
{
return theWrappedObject->columnWidths();
}

QModelIndex  PythonQtWrapper_QColumnView::indexAt(QColumnView* theWrappedObject, const QPoint&  point) const
{
return theWrappedObject->indexAt(point);
}

QWidget*  PythonQtWrapper_QColumnView::previewWidget(QColumnView* theWrappedObject) const
{
return theWrappedObject->previewWidget();
}

bool  PythonQtWrapper_QColumnView::resizeGripsVisible(QColumnView* theWrappedObject) const
{
return theWrappedObject->resizeGripsVisible();
}

void PythonQtWrapper_QColumnView::scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint)
{
theWrappedObject->scrollTo(index, hint);
}

void PythonQtWrapper_QColumnView::selectAll(QColumnView* theWrappedObject)
{
theWrappedObject->selectAll();
}

void PythonQtWrapper_QColumnView::setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list)
{
theWrappedObject->setColumnWidths(list);
}

void PythonQtWrapper_QColumnView::setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model)
{
theWrappedObject->setModel(model);
}

void PythonQtWrapper_QColumnView::setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget)
{
theWrappedObject->setPreviewWidget(widget);
}

void PythonQtWrapper_QColumnView::setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible)
{
theWrappedObject->setResizeGripsVisible(visible);
}

void PythonQtWrapper_QColumnView::setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index)
{
theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QColumnView::setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel)
{
theWrappedObject->setSelectionModel(selectionModel);
}

QSize  PythonQtWrapper_QColumnView::sizeHint(QColumnView* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QRect  PythonQtWrapper_QColumnView::visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const
{
return theWrappedObject->visualRect(index);
}

