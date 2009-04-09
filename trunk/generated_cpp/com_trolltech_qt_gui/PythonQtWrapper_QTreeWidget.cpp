#include "PythonQtWrapper_QTreeWidget.h"

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
#include <qtreewidget.h>
#include <qwidget.h>

QTreeWidget* PythonQtWrapper_QTreeWidget::new_QTreeWidget(QWidget*  parent)
{ 
return new QTreeWidget(parent); }

void PythonQtWrapper_QTreeWidget::addTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
theWrappedObject->addTopLevelItem(item);
}

void PythonQtWrapper_QTreeWidget::addTopLevelItems(QTreeWidget* theWrappedObject, const QList<QTreeWidgetItem* >&  items)
{
theWrappedObject->addTopLevelItems(items);
}

void PythonQtWrapper_QTreeWidget::closePersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
theWrappedObject->closePersistentEditor(item, column);
}

int  PythonQtWrapper_QTreeWidget::columnCount(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

int  PythonQtWrapper_QTreeWidget::currentColumn(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->currentColumn();
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::currentItem(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->currentItem();
}

void PythonQtWrapper_QTreeWidget::editItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
theWrappedObject->editItem(item, column);
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidget::findItems(QTreeWidget* theWrappedObject, const QString&  text, Qt::MatchFlags  flags, int  column) const
{
return theWrappedObject->findItems(text, flags, column);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::headerItem(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->headerItem();
}

int  PythonQtWrapper_QTreeWidget::indexOfTopLevelItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item) const
{
return theWrappedObject->indexOfTopLevelItem(item);
}

void PythonQtWrapper_QTreeWidget::insertTopLevelItem(QTreeWidget* theWrappedObject, int  index, QTreeWidgetItem*  item)
{
theWrappedObject->insertTopLevelItem(index, item);
}

void PythonQtWrapper_QTreeWidget::insertTopLevelItems(QTreeWidget* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  items)
{
theWrappedObject->insertTopLevelItems(index, items);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::invisibleRootItem(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->invisibleRootItem();
}

bool  PythonQtWrapper_QTreeWidget::isFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
return theWrappedObject->isFirstItemColumnSpanned(item);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAbove(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
return theWrappedObject->itemAbove(item);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAt(QTreeWidget* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->itemAt(p);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemAt(QTreeWidget* theWrappedObject, int  x, int  y) const
{
return theWrappedObject->itemAt(x, y);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::itemBelow(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
return theWrappedObject->itemBelow(item);
}

QWidget*  PythonQtWrapper_QTreeWidget::itemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column) const
{
return theWrappedObject->itemWidget(item, column);
}

void PythonQtWrapper_QTreeWidget::openPersistentEditor(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
theWrappedObject->openPersistentEditor(item, column);
}

void PythonQtWrapper_QTreeWidget::removeItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
theWrappedObject->removeItemWidget(item, column);
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidget::selectedItems(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->selectedItems();
}

void PythonQtWrapper_QTreeWidget::setColumnCount(QTreeWidget* theWrappedObject, int  columns)
{
theWrappedObject->setColumnCount(columns);
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
theWrappedObject->setCurrentItem(item);
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column)
{
theWrappedObject->setCurrentItem(item, column);
}

void PythonQtWrapper_QTreeWidget::setCurrentItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QItemSelectionModel::SelectionFlags  command)
{
theWrappedObject->setCurrentItem(item, column, command);
}

void PythonQtWrapper_QTreeWidget::setFirstItemColumnSpanned(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item, bool  span)
{
theWrappedObject->setFirstItemColumnSpanned(item, span);
}

void PythonQtWrapper_QTreeWidget::setHeaderItem(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item)
{
theWrappedObject->setHeaderItem(item);
}

void PythonQtWrapper_QTreeWidget::setHeaderLabel(QTreeWidget* theWrappedObject, const QString&  label)
{
theWrappedObject->setHeaderLabel(label);
}

void PythonQtWrapper_QTreeWidget::setHeaderLabels(QTreeWidget* theWrappedObject, const QStringList&  labels)
{
theWrappedObject->setHeaderLabels(labels);
}

void PythonQtWrapper_QTreeWidget::setItemWidget(QTreeWidget* theWrappedObject, QTreeWidgetItem*  item, int  column, QWidget*  widget)
{
theWrappedObject->setItemWidget(item, column, widget);
}

int  PythonQtWrapper_QTreeWidget::sortColumn(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->sortColumn();
}

void PythonQtWrapper_QTreeWidget::sortItems(QTreeWidget* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortItems(column, order);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::takeTopLevelItem(QTreeWidget* theWrappedObject, int  index)
{
return theWrappedObject->takeTopLevelItem(index);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidget::topLevelItem(QTreeWidget* theWrappedObject, int  index) const
{
return theWrappedObject->topLevelItem(index);
}

int  PythonQtWrapper_QTreeWidget::topLevelItemCount(QTreeWidget* theWrappedObject) const
{
return theWrappedObject->topLevelItemCount();
}

QRect  PythonQtWrapper_QTreeWidget::visualItemRect(QTreeWidget* theWrappedObject, const QTreeWidgetItem*  item) const
{
return theWrappedObject->visualItemRect(item);
}

