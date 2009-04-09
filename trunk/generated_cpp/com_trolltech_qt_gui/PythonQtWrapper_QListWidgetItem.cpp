#include "PythonQtWrapper_QListWidgetItem.h"

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qlistwidget.h>
#include <qsize.h>

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(QListWidget*  view, int  type)
{ 
return new QListWidgetItem(view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QIcon&  icon, const QString&  text, QListWidget*  view, int  type)
{ 
return new QListWidgetItem(icon, text, view, type); }

QListWidgetItem* PythonQtWrapper_QListWidgetItem::new_QListWidgetItem(const QString&  text, QListWidget*  view, int  type)
{ 
return new QListWidgetItem(text, view, type); }

QBrush  PythonQtWrapper_QListWidgetItem::background(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->background();
}

Qt::CheckState  PythonQtWrapper_QListWidgetItem::checkState(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->checkState();
}

QListWidgetItem*  PythonQtWrapper_QListWidgetItem::clone(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->clone();
}

QVariant  PythonQtWrapper_QListWidgetItem::data(QListWidgetItem* theWrappedObject, int  role) const
{
return theWrappedObject->data(role);
}

Qt::ItemFlags  PythonQtWrapper_QListWidgetItem::flags(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

QFont  PythonQtWrapper_QListWidgetItem::font(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->font();
}

QBrush  PythonQtWrapper_QListWidgetItem::foreground(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->foreground();
}

QIcon  PythonQtWrapper_QListWidgetItem::icon(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->icon();
}

bool  PythonQtWrapper_QListWidgetItem::isHidden(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->isHidden();
}

bool  PythonQtWrapper_QListWidgetItem::isSelected(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

QListWidget*  PythonQtWrapper_QListWidgetItem::listWidget(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->listWidget();
}

void PythonQtWrapper_QListWidgetItem::writeTo(QListWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  *theWrappedObject;
}

void PythonQtWrapper_QListWidgetItem::readFrom(QListWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  *theWrappedObject;
}

void PythonQtWrapper_QListWidgetItem::setBackground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setBackground(brush);
}

void PythonQtWrapper_QListWidgetItem::setCheckState(QListWidgetItem* theWrappedObject, Qt::CheckState  state)
{
theWrappedObject->setCheckState(state);
}

void PythonQtWrapper_QListWidgetItem::setData(QListWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
theWrappedObject->setData(role, value);
}

void PythonQtWrapper_QListWidgetItem::setFlags(QListWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QListWidgetItem::setFont(QListWidgetItem* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QListWidgetItem::setForeground(QListWidgetItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setForeground(brush);
}

void PythonQtWrapper_QListWidgetItem::setHidden(QListWidgetItem* theWrappedObject, bool  hide)
{
theWrappedObject->setHidden(hide);
}

void PythonQtWrapper_QListWidgetItem::setIcon(QListWidgetItem* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QListWidgetItem::setSelected(QListWidgetItem* theWrappedObject, bool  select)
{
theWrappedObject->setSelected(select);
}

void PythonQtWrapper_QListWidgetItem::setSizeHint(QListWidgetItem* theWrappedObject, const QSize&  size)
{
theWrappedObject->setSizeHint(size);
}

void PythonQtWrapper_QListWidgetItem::setStatusTip(QListWidgetItem* theWrappedObject, const QString&  statusTip)
{
theWrappedObject->setStatusTip(statusTip);
}

void PythonQtWrapper_QListWidgetItem::setText(QListWidgetItem* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QListWidgetItem::setTextAlignment(QListWidgetItem* theWrappedObject, int  alignment)
{
theWrappedObject->setTextAlignment(alignment);
}

void PythonQtWrapper_QListWidgetItem::setToolTip(QListWidgetItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QListWidgetItem::setWhatsThis(QListWidgetItem* theWrappedObject, const QString&  whatsThis)
{
theWrappedObject->setWhatsThis(whatsThis);
}

QSize  PythonQtWrapper_QListWidgetItem::sizeHint(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QListWidgetItem::statusTip(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->statusTip();
}

QString  PythonQtWrapper_QListWidgetItem::text(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->text();
}

int  PythonQtWrapper_QListWidgetItem::textAlignment(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->textAlignment();
}

QString  PythonQtWrapper_QListWidgetItem::toolTip(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

int  PythonQtWrapper_QListWidgetItem::type(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->type();
}

QString  PythonQtWrapper_QListWidgetItem::whatsThis(QListWidgetItem* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

