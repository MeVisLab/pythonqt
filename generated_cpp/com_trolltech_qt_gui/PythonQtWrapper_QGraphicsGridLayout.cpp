#include "PythonQtWrapper_QGraphicsGridLayout.h"

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

QGraphicsGridLayout* PythonQtWrapper_QGraphicsGridLayout::new_QGraphicsGridLayout(QGraphicsLayoutItem*  parent)
{ 
return new QGraphicsGridLayout(parent); }

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, Qt::Alignment  alignment)
{
theWrappedObject->addItem(item, row, column, alignment);
}

void PythonQtWrapper_QGraphicsGridLayout::addItem(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  alignment)
{
theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, alignment);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::alignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
return theWrappedObject->alignment(item);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::columnAlignment(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnAlignment(column);
}

int  PythonQtWrapper_QGraphicsGridLayout::columnCount(QGraphicsGridLayout* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnMaximumWidth(column);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnMinimumWidth(column);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnPreferredWidth(column);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::columnSpacing(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnSpacing(column);
}

int  PythonQtWrapper_QGraphicsGridLayout::columnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnStretchFactor(column);
}

int  PythonQtWrapper_QGraphicsGridLayout::count(QGraphicsGridLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

qreal  PythonQtWrapper_QGraphicsGridLayout::horizontalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
return theWrappedObject->horizontalSpacing();
}

void PythonQtWrapper_QGraphicsGridLayout::invalidate(QGraphicsGridLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemAt(index);
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsGridLayout::itemAt(QGraphicsGridLayout* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->itemAt(row, column);
}

void PythonQtWrapper_QGraphicsGridLayout::removeAt(QGraphicsGridLayout* theWrappedObject, int  index)
{
theWrappedObject->removeAt(index);
}

Qt::Alignment  PythonQtWrapper_QGraphicsGridLayout::rowAlignment(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowAlignment(row);
}

int  PythonQtWrapper_QGraphicsGridLayout::rowCount(QGraphicsGridLayout* theWrappedObject) const
{
return theWrappedObject->rowCount();
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowMaximumHeight(row);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowMinimumHeight(row);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowPreferredHeight(row);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::rowSpacing(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowSpacing(row);
}

int  PythonQtWrapper_QGraphicsGridLayout::rowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowStretchFactor(row);
}

void PythonQtWrapper_QGraphicsGridLayout::setAlignment(QGraphicsGridLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
theWrappedObject->setAlignment(item, alignment);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnAlignment(QGraphicsGridLayout* theWrappedObject, int  column, Qt::Alignment  alignment)
{
theWrappedObject->setColumnAlignment(column, alignment);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnFixedWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
theWrappedObject->setColumnFixedWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMaximumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
theWrappedObject->setColumnMaximumWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnMinimumWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
theWrappedObject->setColumnMinimumWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnPreferredWidth(QGraphicsGridLayout* theWrappedObject, int  column, qreal  width)
{
theWrappedObject->setColumnPreferredWidth(column, width);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnSpacing(QGraphicsGridLayout* theWrappedObject, int  column, qreal  spacing)
{
theWrappedObject->setColumnSpacing(column, spacing);
}

void PythonQtWrapper_QGraphicsGridLayout::setColumnStretchFactor(QGraphicsGridLayout* theWrappedObject, int  column, int  stretch)
{
theWrappedObject->setColumnStretchFactor(column, stretch);
}

void PythonQtWrapper_QGraphicsGridLayout::setGeometry(QGraphicsGridLayout* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QGraphicsGridLayout::setHorizontalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
theWrappedObject->setHorizontalSpacing(spacing);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowAlignment(QGraphicsGridLayout* theWrappedObject, int  row, Qt::Alignment  alignment)
{
theWrappedObject->setRowAlignment(row, alignment);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowFixedHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
theWrappedObject->setRowFixedHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMaximumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
theWrappedObject->setRowMaximumHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowMinimumHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
theWrappedObject->setRowMinimumHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowPreferredHeight(QGraphicsGridLayout* theWrappedObject, int  row, qreal  height)
{
theWrappedObject->setRowPreferredHeight(row, height);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowSpacing(QGraphicsGridLayout* theWrappedObject, int  row, qreal  spacing)
{
theWrappedObject->setRowSpacing(row, spacing);
}

void PythonQtWrapper_QGraphicsGridLayout::setRowStretchFactor(QGraphicsGridLayout* theWrappedObject, int  row, int  stretch)
{
theWrappedObject->setRowStretchFactor(row, stretch);
}

void PythonQtWrapper_QGraphicsGridLayout::setSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
theWrappedObject->setSpacing(spacing);
}

void PythonQtWrapper_QGraphicsGridLayout::setVerticalSpacing(QGraphicsGridLayout* theWrappedObject, qreal  spacing)
{
theWrappedObject->setVerticalSpacing(spacing);
}

QSizeF  PythonQtWrapper_QGraphicsGridLayout::sizeHint(QGraphicsGridLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return theWrappedObject->sizeHint(which, constraint);
}

qreal  PythonQtWrapper_QGraphicsGridLayout::verticalSpacing(QGraphicsGridLayout* theWrappedObject) const
{
return theWrappedObject->verticalSpacing();
}

