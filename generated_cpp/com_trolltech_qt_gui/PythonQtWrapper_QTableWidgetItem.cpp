#include "PythonQtWrapper_QTableWidgetItem.h"

#include <QVariant>
#include <qbrush.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qsize.h>
#include <qtablewidget.h>

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QIcon&  icon, const QString&  text, int  type)
{ 
return new QTableWidgetItem(icon, text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(const QString&  text, int  type)
{ 
return new QTableWidgetItem(text, type); }

QTableWidgetItem* PythonQtWrapper_QTableWidgetItem::new_QTableWidgetItem(int  type)
{ 
return new QTableWidgetItem(type); }

QBrush  PythonQtWrapper_QTableWidgetItem::background(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->background();
}

Qt::CheckState  PythonQtWrapper_QTableWidgetItem::checkState(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->checkState();
}

QTableWidgetItem*  PythonQtWrapper_QTableWidgetItem::clone(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->clone();
}

int  PythonQtWrapper_QTableWidgetItem::column(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->column();
}

QVariant  PythonQtWrapper_QTableWidgetItem::data(QTableWidgetItem* theWrappedObject, int  role) const
{
return theWrappedObject->data(role);
}

Qt::ItemFlags  PythonQtWrapper_QTableWidgetItem::flags(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

QFont  PythonQtWrapper_QTableWidgetItem::font(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->font();
}

QBrush  PythonQtWrapper_QTableWidgetItem::foreground(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->foreground();
}

QIcon  PythonQtWrapper_QTableWidgetItem::icon(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->icon();
}

bool  PythonQtWrapper_QTableWidgetItem::isSelected(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

void PythonQtWrapper_QTableWidgetItem::writeTo(QTableWidgetItem* theWrappedObject, QDataStream&  out)
{
out <<  *theWrappedObject;
}

void PythonQtWrapper_QTableWidgetItem::readFrom(QTableWidgetItem* theWrappedObject, QDataStream&  in)
{
in >>  *theWrappedObject;
}

int  PythonQtWrapper_QTableWidgetItem::row(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->row();
}

void PythonQtWrapper_QTableWidgetItem::setBackground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setBackground(brush);
}

void PythonQtWrapper_QTableWidgetItem::setCheckState(QTableWidgetItem* theWrappedObject, Qt::CheckState  state)
{
theWrappedObject->setCheckState(state);
}

void PythonQtWrapper_QTableWidgetItem::setData(QTableWidgetItem* theWrappedObject, int  role, const QVariant&  value)
{
theWrappedObject->setData(role, value);
}

void PythonQtWrapper_QTableWidgetItem::setFlags(QTableWidgetItem* theWrappedObject, Qt::ItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QTableWidgetItem::setFont(QTableWidgetItem* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QTableWidgetItem::setForeground(QTableWidgetItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setForeground(brush);
}

void PythonQtWrapper_QTableWidgetItem::setIcon(QTableWidgetItem* theWrappedObject, const QIcon&  icon)
{
theWrappedObject->setIcon(icon);
}

void PythonQtWrapper_QTableWidgetItem::setSelected(QTableWidgetItem* theWrappedObject, bool  select)
{
theWrappedObject->setSelected(select);
}

void PythonQtWrapper_QTableWidgetItem::setSizeHint(QTableWidgetItem* theWrappedObject, const QSize&  size)
{
theWrappedObject->setSizeHint(size);
}

void PythonQtWrapper_QTableWidgetItem::setStatusTip(QTableWidgetItem* theWrappedObject, const QString&  statusTip)
{
theWrappedObject->setStatusTip(statusTip);
}

void PythonQtWrapper_QTableWidgetItem::setText(QTableWidgetItem* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

void PythonQtWrapper_QTableWidgetItem::setTextAlignment(QTableWidgetItem* theWrappedObject, int  alignment)
{
theWrappedObject->setTextAlignment(alignment);
}

void PythonQtWrapper_QTableWidgetItem::setToolTip(QTableWidgetItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QTableWidgetItem::setWhatsThis(QTableWidgetItem* theWrappedObject, const QString&  whatsThis)
{
theWrappedObject->setWhatsThis(whatsThis);
}

QSize  PythonQtWrapper_QTableWidgetItem::sizeHint(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

QString  PythonQtWrapper_QTableWidgetItem::statusTip(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->statusTip();
}

QTableWidget*  PythonQtWrapper_QTableWidgetItem::tableWidget(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->tableWidget();
}

QString  PythonQtWrapper_QTableWidgetItem::text(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->text();
}

int  PythonQtWrapper_QTableWidgetItem::textAlignment(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->textAlignment();
}

QString  PythonQtWrapper_QTableWidgetItem::toolTip(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

int  PythonQtWrapper_QTableWidgetItem::type(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->type();
}

QString  PythonQtWrapper_QTableWidgetItem::whatsThis(QTableWidgetItem* theWrappedObject) const
{
return theWrappedObject->whatsThis();
}

