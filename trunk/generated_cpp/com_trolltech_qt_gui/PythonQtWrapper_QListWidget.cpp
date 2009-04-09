#include "PythonQtWrapper_QListWidget.h"

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
#include <qlistwidget.h>
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
#include <qwidget.h>

QListWidget* PythonQtWrapper_QListWidget::new_QListWidget(QWidget*  parent)
{ 
return new QListWidget(parent); }

void PythonQtWrapper_QListWidget::addItem(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->addItem(item);
}

void PythonQtWrapper_QListWidget::addItem(QListWidget* theWrappedObject, const QString&  label)
{
theWrappedObject->addItem(label);
}

void PythonQtWrapper_QListWidget::addItems(QListWidget* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->addItems(labels);
}

void PythonQtWrapper_QListWidget::closePersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->closePersistentEditor(item);
}

int  PythonQtWrapper_QListWidget::count(QListWidget* theWrappedObject) const
{
return theWrappedObject->count();
}

QListWidgetItem*  PythonQtWrapper_QListWidget::currentItem(QListWidget* theWrappedObject) const
{
return theWrappedObject->currentItem();
}

int  PythonQtWrapper_QListWidget::currentRow(QListWidget* theWrappedObject) const
{
return theWrappedObject->currentRow();
}

void PythonQtWrapper_QListWidget::dropEvent(QListWidget* theWrappedObject, QDropEvent*  event)
{
theWrappedObject->dropEvent(event);
}

void PythonQtWrapper_QListWidget::editItem(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->editItem(item);
}

QList<QListWidgetItem* >  PythonQtWrapper_QListWidget::findItems(QListWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags) const
{
return theWrappedObject->findItems(text, flags);
}

void PythonQtWrapper_QListWidget::insertItem(QListWidget* theWrappedObject, int  row, QListWidgetItem*  item)
{
theWrappedObject->insertItem(row, item);
}

void PythonQtWrapper_QListWidget::insertItem(QListWidget* theWrappedObject, int  row, const QString&  label)
{
theWrappedObject->insertItem(row, label);
}

void PythonQtWrapper_QListWidget::insertItems(QListWidget* theWrappedObject, int  row, const QStringList&  labels)
{
theWrappedObject->insertItems(row, labels);
}

bool  PythonQtWrapper_QListWidget::isSortingEnabled(QListWidget* theWrappedObject) const
{
return theWrappedObject->isSortingEnabled();
}

QListWidgetItem*  PythonQtWrapper_QListWidget::item(QListWidget* theWrappedObject, int  row) const
{
return theWrappedObject->item(row);
}

QListWidgetItem*  PythonQtWrapper_QListWidget::itemAt(QListWidget* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->itemAt(p);
}

QListWidgetItem*  PythonQtWrapper_QListWidget::itemAt(QListWidget* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->itemAt(x, y);
}

QWidget*  PythonQtWrapper_QListWidget::itemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item) const
{
return theWrappedObject->itemWidget(item);
}

void PythonQtWrapper_QListWidget::openPersistentEditor(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->openPersistentEditor(item);
}

void PythonQtWrapper_QListWidget::removeItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->removeItemWidget(item);
}

int  PythonQtWrapper_QListWidget::row(QListWidget* theWrappedObject, const QListWidgetItem*  item) const
{
return theWrappedObject->row(item);
}

QList<QListWidgetItem* >  PythonQtWrapper_QListWidget::selectedItems(QListWidget* theWrappedObject) const
{
return theWrappedObject->selectedItems();
}

void PythonQtWrapper_QListWidget::setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item)
{
theWrappedObject->setCurrentItem(item);
}

void PythonQtWrapper_QListWidget::setCurrentItem(QListWidget* theWrappedObject, QListWidgetItem*  item, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->setCurrentItem(item, command);
}

void PythonQtWrapper_QListWidget::setCurrentRow(QListWidget* theWrappedObject, int  row)
{
theWrappedObject->setCurrentRow(row);
}

void PythonQtWrapper_QListWidget::setCurrentRow(QListWidget* theWrappedObject, int  row, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->setCurrentRow(row, command);
}

void PythonQtWrapper_QListWidget::setItemWidget(QListWidget* theWrappedObject, QListWidgetItem*  item, QWidget*  widget)
{
theWrappedObject->setItemWidget(item, widget);
}

void PythonQtWrapper_QListWidget::setSortingEnabled(QListWidget* theWrappedObject, bool  enable)
{
theWrappedObject->setSortingEnabled(enable);
}

void PythonQtWrapper_QListWidget::sortItems(QListWidget* theWrappedObject, Qt::SortOrder  order)
{
theWrappedObject->sortItems(order);
}

QListWidgetItem*  PythonQtWrapper_QListWidget::takeItem(QListWidget* theWrappedObject, int  row)
{
return theWrappedObject->takeItem(row);
}

QRect  PythonQtWrapper_QListWidget::visualItemRect(QListWidget* theWrappedObject, const QListWidgetItem*  item) const
{
return theWrappedObject->visualItemRect(item);
}

