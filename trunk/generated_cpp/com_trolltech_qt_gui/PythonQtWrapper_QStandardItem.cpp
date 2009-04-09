#include "PythonQtWrapper_QStandardItem.h"

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstandarditemmodel.h>

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem()
{ 
return new QStandardItem(); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(const QIcon&  icon, const QString&  text)
{ 
return new QStandardItem(icon, text); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(const QString&  text)
{ 
return new QStandardItem(text); }

QStandardItem* PythonQtWrapper_QStandardItem::new_QStandardItem(int  rows, int  columns)
{ 
return new QStandardItem(rows, columns); }

QString  PythonQtWrapper_QStandardItem::accessibleDescription(QStandardItem* theWrappedObject) const
{
return theWrappedObject->accessibleDescription();
}

QString  PythonQtWrapper_QStandardItem::accessibleText(QStandardItem* theWrappedObject) const
{
return theWrappedObject->accessibleText();
}

void PythonQtWrapper_QStandardItem::appendColumn(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
theWrappedObject->appendColumn(items);
}

void PythonQtWrapper_QStandardItem::appendRow(QStandardItem* theWrappedObject, QStandardItem*  item)
{
theWrappedObject->appendRow(item);
}

void PythonQtWrapper_QStandardItem::appendRow(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
theWrappedObject->appendRow(items);
}

void PythonQtWrapper_QStandardItem::appendRows(QStandardItem* theWrappedObject, const QList<QStandardItem* >&  items)
{
theWrappedObject->appendRows(items);
}

QBrush  PythonQtWrapper_QStandardItem::background(QStandardItem* theWrappedObject) const
{
return theWrappedObject->background();
}

Qt::CheckState  PythonQtWrapper_QStandardItem::checkState(QStandardItem* theWrappedObject) const
{
return theWrappedObject->checkState();
}

QStandardItem*  PythonQtWrapper_QStandardItem::child(QStandardItem* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->child(row, column);
}

QStandardItem*  PythonQtWrapper_QStandardItem::clone(QStandardItem* theWrappedObject) const
{
return theWrappedObject->clone();
}

int  PythonQtWrapper_QStandardItem::column(QStandardItem* theWrappedObject) const
{
return theWrappedObject->column();
}

int  PythonQtWrapper_QStandardItem::columnCount(QStandardItem* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

QVariant  PythonQtWrapper_QStandardItem::data(QStandardItem* theWrappedObject, int  role) const
{
return theWrappedObject->data(role);
}

Qt::ItemFlags  PythonQtWrapper_QStandardItem::flags(QStandardItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

QFont  PythonQtWrapper_QStandardItem::font(QStandardItem* theWrappedObject) const
{
return theWrappedObject->font();
}

QBrush  PythonQtWrapper_QStandardItem::foreground(QStandardItem* theWrappedObject) const
{
return theWrappedObject->foreground();
}

bool  PythonQtWrapper_QStandardItem::hasChildren(QStandardItem* theWrappedObject) const
{
return theWrappedObject->hasChildren();
}

QIcon  PythonQtWrapper_QStandardItem::icon(QStandardItem* theWrappedObject) const
{
return theWrappedObject->icon();
}

QModelIndex  PythonQtWrapper_QStandardItem::index(QStandardItem* theWrappedObject) const
{
return theWrappedObject->index();
}

void PythonQtWrapper_QStandardItem::insertColumn(QStandardItem* theWrappedObject, int  column, const QList<QStandardItem* >&  items)
{
theWrappedObject->insertColumn(column, items);
}

void PythonQtWrapper_QStandardItem::insertColumns(QStandardItem* theWrappedObject, int  column, int  count)
{
theWrappedObject->insertColumns(column, count);
}

void PythonQtWrapper_QStandardItem::insertRow(QStandardItem* theWrappedObject, int  row, QStandardItem*  item)
{
theWrappedObject->insertRow(row, item);
}

void PythonQtWrapper_QStandardItem::insertRow(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
theWrappedObject->insertRow(row, items);
}

void PythonQtWrapper_QStandardItem::insertRows(QStandardItem* theWrappedObject, int  row, const QList<QStandardItem* >&  items)
{
theWrappedObject->insertRows(row, items);
}

void PythonQtWrapper_QStandardItem::insertRows(QStandardItem* theWrappedObject, int  row, int  count)
{
theWrappedObject->insertRows(row, count);
}

bool  PythonQtWrapper_QStandardItem::isCheckable(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isCheckable();
}

bool  PythonQtWrapper_QStandardItem::isDragEnabled(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isDragEnabled();
}

bool  PythonQtWrapper_QStandardItem::isDropEnabled(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isDropEnabled();
}

bool  PythonQtWrapper_QStandardItem::isEditable(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isEditable();
}

bool  PythonQtWrapper_QStandardItem::isEnabled(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QStandardItem::isSelectable(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isSelectable();
}

bool  PythonQtWrapper_QStandardItem::isTristate(QStandardItem* theWrappedObject) const
{
return theWrappedObject->isTristate();
}

QStandardItemModel*  PythonQtWrapper_QStandardItem::model(QStandardItem* theWrappedObject) const
{
return theWrappedObject->model();
}

void PythonQtWrapper_QStandardItem::writeTo(QStandardItem* theWrappedObject, QDataStream&  out)
{
out <<  *theWrappedObject;
}

void PythonQtWrapper_QStandardItem::readFrom(QStandardItem* theWrappedObject, QDataStream&  in)
{
in >>  *theWrappedObject;
}

QStandardItem*  PythonQtWrapper_QStandardItem::parent(QStandardItem* theWrappedObject) const
{
return theWrappedObject->parent();
}

void PythonQtWrapper_QStandardItem::removeColumn(QStandardItem* theWrappedObject, int  column)
{
theWrappedObject->removeColumn(column);
}

void PythonQtWrapper_QStandardItem::removeColumns(QStandardItem* theWrappedObject, int  column, int  count)
{
theWrappedObject->removeColumns(column, count);
}

void PythonQtWrapper_QStandardItem::removeRow(QStandardItem* theWrappedObject, int  row)
{
theWrappedObject->removeRow(row);
}

void PythonQtWrapper_QStandardItem::removeRows(QStandardItem* theWrappedObject, int  row, int  count)
{
theWrappedObject->removeRows(row, count);
}

int  PythonQtWrapper_QStandardItem::row(QStandardItem* theWrappedObject) const
{
return theWrappedObject->row();
}

int  PythonQtWrapper_QStandardItem::rowCount(QStandardItem* theWrappedObject) const
{
return theWrappedObject->rowCount();
}

void PythonQtWrapper_QStandardItem::setAccessibleDescription(QStandardItem* theWrappedObject, const QString&  accessibleDescription)
{
theWrappedObject->setAccessibleDescription(accessibleDescription);
}

void PythonQtWrapper_QStandardItem::setAccessibleText(QStandardItem* theWrappedObject, const QString&  accessibleText)
{
theWrappedObject->setAccessibleText(accessibleText);
}

void PythonQtWrapper_QStandardItem::setBackground(QStandardItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setBackground(brush);
}

void PythonQtWrapper_QStandardItem::setCheckState(QStandardItem* theWrappedObject, Qt::CheckState  checkState)
{
theWrappedObject->setCheckState(checkState);
}

void PythonQtWrapper_QStandardItem::setCheckable(QStandardItem* theWrappedObject, bool  checkable)
{
theWrappedObject->setCheckable(checkable);
}

void PythonQtWrapper_QStandardItem::setChild(QStandardItem* theWrappedObject, int  row, QStandardItem*  item)
{
theWrappedObject->setChild(row, item);
}

void PythonQtWrapper_QStandardItem::setChild(QStandardItem* theWrappedObject, int  row, int  column, QStandardItem*  item)
{
theWrappedObject->setChild(row, column, item);
}

void PythonQtWrapper_QStandardItem::setColumnCount(QStandardItem* theWrappedObject, int  columns)
{
theWrappedObject->setColumnCount(columns);
}

void PythonQtWrapper_QStandardItem::setData(QStandardItem* theWrappedObject, const QVariant&  value, int  role)
{
theWrappedObject->setData(value, role);
}

void PythonQtWrapper_QStandardItem::setDragEnabled(QStandardItem* theWrappedObject, bool  dragEnabled)
{
theWrappedObject->setDragEnabled(dragEnabled);
}

void PythonQtWrapper_QStandardItem::setDropEnabled(QStandardItem* theWrappedObject, bool  dropEnabled)
{
theWrappedObject->setDropEnabled(dropEnabled);
}

void PythonQtWrapper_QStandardItem::setEditable(QStandardItem* theWrappedObject, bool  editable)
{
theWrappedObject->setEditable(editable);
}

void PythonQtWrapper_QStandardItem::setEnabled(QStandardItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QStandardItem::setFlags(QStandardItem* theWrappedObject, Qt::ItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QStandardItem::setFont(QStandardItem* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QStandardItem::setForeground(QStandardItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setForeground(brush);
}

void PythonQtWrapper_QStandardItem::setIcon(QStandardItem* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QStandardItem::setRowCount(QStandardItem* theWrappedObject, int  rows)
{
theWrappedObject->setRowCount(rows);
}

void PythonQtWrapper_QStandardItem::setSelectable(QStandardItem* theWrappedObject, bool  selectable)
{
theWrappedObject->setSelectable(selectable);
}

void PythonQtWrapper_QStandardItem::setSizeHint(QStandardItem* theWrappedObject, const QSize&  sizeHint)
{
theWrappedObject->setSizeHint(sizeHint);
}

void PythonQtWrapper_QStandardItem::setStatusTip(QStandardItem* theWrappedObject, const QString&  statusTip)
{
theWrappedObject->setStatusTip(statusTip);
}

void PythonQtWrapper_QStandardItem::setText(QStandardItem* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QStandardItem::setTextAlignment(QStandardItem* theWrappedObject, Qt::Alignment  textAlignment)
{
theWrappedObject->setTextAlignment(textAlignment);
}

void PythonQtWrapper_QStandardItem::setToolTip(QStandardItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QStandardItem::setTristate(QStandardItem* theWrappedObject, bool  tristate)
{
theWrappedObject->setTristate(tristate);
}

void PythonQtWrapper_QStandardItem::setWhatsThis(QStandardItem* theWrappedObject, const QString&  whatsThis)
{
theWrappedObject->setWhatsThis(whatsThis);
}

QSize  PythonQtWrapper_QStandardItem::sizeHint(QStandardItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

void PythonQtWrapper_QStandardItem::sortChildren(QStandardItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortChildren(column, order);
}

QString  PythonQtWrapper_QStandardItem::statusTip(QStandardItem* theWrappedObject) const
{
return theWrappedObject->statusTip();
}

QStandardItem*  PythonQtWrapper_QStandardItem::takeChild(QStandardItem* theWrappedObject, int  row, int  column)
{
return theWrappedObject->takeChild(row, column);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItem::takeColumn(QStandardItem* theWrappedObject, int  column)
{
return theWrappedObject->takeColumn(column);
}

QList<QStandardItem* >  PythonQtWrapper_QStandardItem::takeRow(QStandardItem* theWrappedObject, int  row)
{
return theWrappedObject->takeRow(row);
}

QString  PythonQtWrapper_QStandardItem::text(QStandardItem* theWrappedObject) const
{
return theWrappedObject->text();
}

Qt::Alignment  PythonQtWrapper_QStandardItem::textAlignment(QStandardItem* theWrappedObject) const
{
return theWrappedObject->textAlignment();
}

QString  PythonQtWrapper_QStandardItem::toolTip(QStandardItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

int  PythonQtWrapper_QStandardItem::type(QStandardItem* theWrappedObject) const
{
return theWrappedObject->type();
}

QString  PythonQtWrapper_QStandardItem::whatsThis(QStandardItem* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

