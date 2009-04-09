#include "PythonQtWrapper_QTreeWidgetItem.h"

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtreewidget.h>

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, QTreeWidgetItem*  after, int  type)
{ 
return new QTreeWidgetItem(view, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, const QStringList&  strings, int  type)
{ 
return new QTreeWidgetItem(view, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidget*  view, int  type)
{ 
return new QTreeWidgetItem(view, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, QTreeWidgetItem*  after, int  type)
{ 
return new QTreeWidgetItem(parent, after, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, const QStringList&  strings, int  type)
{ 
return new QTreeWidgetItem(parent, strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(QTreeWidgetItem*  parent, int  type)
{ 
return new QTreeWidgetItem(parent, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(const QStringList&  strings, int  type)
{ 
return new QTreeWidgetItem(strings, type); }

QTreeWidgetItem* PythonQtWrapper_QTreeWidgetItem::new_QTreeWidgetItem(int  type)
{ 
return new QTreeWidgetItem(type); }

void PythonQtWrapper_QTreeWidgetItem::addChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
theWrappedObject->addChild(child);
}

void PythonQtWrapper_QTreeWidgetItem::addChildren(QTreeWidgetItem* theWrappedObject, const QList<QTreeWidgetItem* >&  children)
{
theWrappedObject->addChildren(children);
}

QBrush  PythonQtWrapper_QTreeWidgetItem::background(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->background(column);
}

Qt::CheckState  PythonQtWrapper_QTreeWidgetItem::checkState(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->checkState(column);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::child(QTreeWidgetItem* theWrappedObject, int  index) const
{
return theWrappedObject->child(index);
}

int  PythonQtWrapper_QTreeWidgetItem::childCount(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->childCount();
}

QTreeWidgetItem::ChildIndicatorPolicy  PythonQtWrapper_QTreeWidgetItem::childIndicatorPolicy(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->childIndicatorPolicy();
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::clone(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->clone();
}

int  PythonQtWrapper_QTreeWidgetItem::columnCount(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

QVariant  PythonQtWrapper_QTreeWidgetItem::data(QTreeWidgetItem* theWrappedObject, int  column, int  role) const
{
return theWrappedObject->data(column, role);
}

Qt::ItemFlags  PythonQtWrapper_QTreeWidgetItem::flags(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

QFont  PythonQtWrapper_QTreeWidgetItem::font(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->font(column);
}

QBrush  PythonQtWrapper_QTreeWidgetItem::foreground(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->foreground(column);
}

QIcon  PythonQtWrapper_QTreeWidgetItem::icon(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->icon(column);
}

int  PythonQtWrapper_QTreeWidgetItem::indexOfChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child) const
{
return theWrappedObject->indexOfChild(child);
}

void PythonQtWrapper_QTreeWidgetItem::insertChild(QTreeWidgetItem* theWrappedObject, int  index, QTreeWidgetItem*  child)
{
theWrappedObject->insertChild(index, child);
}

void PythonQtWrapper_QTreeWidgetItem::insertChildren(QTreeWidgetItem* theWrappedObject, int  index, const QList<QTreeWidgetItem* >&  children)
{
theWrappedObject->insertChildren(index, children);
}

bool  PythonQtWrapper_QTreeWidgetItem::isDisabled(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->isDisabled();
}

bool  PythonQtWrapper_QTreeWidgetItem::isExpanded(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->isExpanded();
}

bool  PythonQtWrapper_QTreeWidgetItem::isFirstColumnSpanned(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->isFirstColumnSpanned();
}

bool  PythonQtWrapper_QTreeWidgetItem::isHidden(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->isHidden();
}

bool  PythonQtWrapper_QTreeWidgetItem::isSelected(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

void PythonQtWrapper_QTreeWidgetItem::writeTo(QTreeWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  *theWrappedObject;
}

void PythonQtWrapper_QTreeWidgetItem::readFrom(QTreeWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  *theWrappedObject;
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::parent(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->parent();
}

void PythonQtWrapper_QTreeWidgetItem::removeChild(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem*  child)
{
theWrappedObject->removeChild(child);
}

void PythonQtWrapper_QTreeWidgetItem::setBackground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
theWrappedObject->setBackground(column, brush);
}

void PythonQtWrapper_QTreeWidgetItem::setCheckState(QTreeWidgetItem* theWrappedObject, int  column, Qt::CheckState  state)
{
theWrappedObject->setCheckState(column, state);
}

void PythonQtWrapper_QTreeWidgetItem::setChildIndicatorPolicy(QTreeWidgetItem* theWrappedObject, QTreeWidgetItem::ChildIndicatorPolicy  policy)
{
theWrappedObject->setChildIndicatorPolicy(policy);
}

void PythonQtWrapper_QTreeWidgetItem::setData(QTreeWidgetItem* theWrappedObject, int  column, int  role, const QVariant&  value)
{
theWrappedObject->setData(column, role, value);
}

void PythonQtWrapper_QTreeWidgetItem::setDisabled(QTreeWidgetItem* theWrappedObject, bool  disabled)
{
theWrappedObject->setDisabled(disabled);
}

void PythonQtWrapper_QTreeWidgetItem::setExpanded(QTreeWidgetItem* theWrappedObject, bool  expand)
{
theWrappedObject->setExpanded(expand);
}

void PythonQtWrapper_QTreeWidgetItem::setFirstColumnSpanned(QTreeWidgetItem* theWrappedObject, bool  span)
{
theWrappedObject->setFirstColumnSpanned(span);
}

void PythonQtWrapper_QTreeWidgetItem::setFlags(QTreeWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QTreeWidgetItem::setFont(QTreeWidgetItem* theWrappedObject, int  column, const QFont&  font)
{
theWrappedObject->setFont(column, font);
}

void PythonQtWrapper_QTreeWidgetItem::setForeground(QTreeWidgetItem* theWrappedObject, int  column, const QBrush&  brush)
{
theWrappedObject->setForeground(column, brush);
}

void PythonQtWrapper_QTreeWidgetItem::setHidden(QTreeWidgetItem* theWrappedObject, bool  hide)
{
theWrappedObject->setHidden(hide);
}

void PythonQtWrapper_QTreeWidgetItem::setIcon(QTreeWidgetItem* theWrappedObject, int  column, const QIcon&  icon)
{
theWrappedObject->setIcon(column, icon);
}

void PythonQtWrapper_QTreeWidgetItem::setSelected(QTreeWidgetItem* theWrappedObject, bool  select)
{
theWrappedObject->setSelected(select);
}

void PythonQtWrapper_QTreeWidgetItem::setSizeHint(QTreeWidgetItem* theWrappedObject, int  column, const QSize&  size)
{
theWrappedObject->setSizeHint(column, size);
}

void PythonQtWrapper_QTreeWidgetItem::setStatusTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  statusTip)
{
theWrappedObject->setStatusTip(column, statusTip);
}

void PythonQtWrapper_QTreeWidgetItem::setText(QTreeWidgetItem* theWrappedObject, int  column, const QString&  text)
{
theWrappedObject->setText(column, text);
}

void PythonQtWrapper_QTreeWidgetItem::setTextAlignment(QTreeWidgetItem* theWrappedObject, int  column, int  alignment)
{
theWrappedObject->setTextAlignment(column, alignment);
}

void PythonQtWrapper_QTreeWidgetItem::setToolTip(QTreeWidgetItem* theWrappedObject, int  column, const QString&  toolTip)
{
theWrappedObject->setToolTip(column, toolTip);
}

void PythonQtWrapper_QTreeWidgetItem::setWhatsThis(QTreeWidgetItem* theWrappedObject, int  column, const QString&  whatsThis)
{
theWrappedObject->setWhatsThis(column, whatsThis);
}

QSize  PythonQtWrapper_QTreeWidgetItem::sizeHint(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->sizeHint(column);
}

void PythonQtWrapper_QTreeWidgetItem::sortChildren(QTreeWidgetItem* theWrappedObject, int  column, Qt::SortOrder  order)
{
theWrappedObject->sortChildren(column, order);
}

QString  PythonQtWrapper_QTreeWidgetItem::statusTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->statusTip(column);
}

QTreeWidgetItem*  PythonQtWrapper_QTreeWidgetItem::takeChild(QTreeWidgetItem* theWrappedObject, int  index)
{
return theWrappedObject->takeChild(index);
}

QList<QTreeWidgetItem* >  PythonQtWrapper_QTreeWidgetItem::takeChildren(QTreeWidgetItem* theWrappedObject)
{
return theWrappedObject->takeChildren();
}

QString  PythonQtWrapper_QTreeWidgetItem::text(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->text(column);
}

int  PythonQtWrapper_QTreeWidgetItem::textAlignment(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->textAlignment(column);
}

QString  PythonQtWrapper_QTreeWidgetItem::toolTip(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->toolTip(column);
}

QTreeWidget*  PythonQtWrapper_QTreeWidgetItem::treeWidget(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->treeWidget();
}

int  PythonQtWrapper_QTreeWidgetItem::type(QTreeWidgetItem* theWrappedObject) const
{
return theWrappedObject->type();
}

QString  PythonQtWrapper_QTreeWidgetItem::whatsThis(QTreeWidgetItem* theWrappedObject, int  column) const
{
return theWrappedObject->whatsThis(column);
}

