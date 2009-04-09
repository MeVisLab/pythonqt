#include "PythonQtWrapper_QGridLayout.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qwidget.h>

QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout()
{ 
return new QGridLayout(); }

QGridLayout* PythonQtWrapper_QGridLayout::new_QGridLayout(QWidget*  parent)
{ 
return new QGridLayout(parent); }

void PythonQtWrapper_QGridLayout::addItem(QGridLayout* theWrappedObject, QLayoutItem*  item, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
theWrappedObject->addItem(item, row, column, rowSpan, columnSpan, arg__6);
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
theWrappedObject->addLayout(arg__1, row, column, arg__4);
}

void PythonQtWrapper_QGridLayout::addLayout(QGridLayout* theWrappedObject, QLayout*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
theWrappedObject->addLayout(arg__1, row, column, rowSpan, columnSpan, arg__6);
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, Qt::Alignment  arg__4)
{
theWrappedObject->addWidget(arg__1, row, column, arg__4);
}

void PythonQtWrapper_QGridLayout::addWidget(QGridLayout* theWrappedObject, QWidget*  arg__1, int  row, int  column, int  rowSpan, int  columnSpan, Qt::Alignment  arg__6)
{
theWrappedObject->addWidget(arg__1, row, column, rowSpan, columnSpan, arg__6);
}

QRect  PythonQtWrapper_QGridLayout::cellRect(QGridLayout* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->cellRect(row, column);
}

int  PythonQtWrapper_QGridLayout::columnCount(QGridLayout* theWrappedObject) const
{
return theWrappedObject->columnCount();
}

int  PythonQtWrapper_QGridLayout::columnMinimumWidth(QGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnMinimumWidth(column);
}

int  PythonQtWrapper_QGridLayout::columnStretch(QGridLayout* theWrappedObject, int  column) const
{
return theWrappedObject->columnStretch(column);
}

int  PythonQtWrapper_QGridLayout::count(QGridLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

Qt::Orientations  PythonQtWrapper_QGridLayout::expandingDirections(QGridLayout* theWrappedObject) const
{
return theWrappedObject->expandingDirections();
}

void PythonQtWrapper_QGridLayout::getItemPosition(QGridLayout* theWrappedObject, int  idx, int*  row, int*  column, int*  rowSpan, int*  columnSpan)
{
theWrappedObject->getItemPosition(idx, row, column, rowSpan, columnSpan);
}

bool  PythonQtWrapper_QGridLayout::hasHeightForWidth(QGridLayout* theWrappedObject) const
{
return theWrappedObject->hasHeightForWidth();
}

int  PythonQtWrapper_QGridLayout::heightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->heightForWidth(arg__1);
}

int  PythonQtWrapper_QGridLayout::horizontalSpacing(QGridLayout* theWrappedObject) const
{
return theWrappedObject->horizontalSpacing();
}

void PythonQtWrapper_QGridLayout::invalidate(QGridLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAt(QGridLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemAt(index);
}

QLayoutItem*  PythonQtWrapper_QGridLayout::itemAtPosition(QGridLayout* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->itemAtPosition(row, column);
}

QSize  PythonQtWrapper_QGridLayout::maximumSize(QGridLayout* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

int  PythonQtWrapper_QGridLayout::minimumHeightForWidth(QGridLayout* theWrappedObject, int  arg__1) const
{
return theWrappedObject->minimumHeightForWidth(arg__1);
}

QSize  PythonQtWrapper_QGridLayout::minimumSize(QGridLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

Qt::Corner  PythonQtWrapper_QGridLayout::originCorner(QGridLayout* theWrappedObject) const
{
return theWrappedObject->originCorner();
}

int  PythonQtWrapper_QGridLayout::rowCount(QGridLayout* theWrappedObject) const
{
return theWrappedObject->rowCount();
}

int  PythonQtWrapper_QGridLayout::rowMinimumHeight(QGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowMinimumHeight(row);
}

int  PythonQtWrapper_QGridLayout::rowStretch(QGridLayout* theWrappedObject, int  row) const
{
return theWrappedObject->rowStretch(row);
}

void PythonQtWrapper_QGridLayout::setColumnMinimumWidth(QGridLayout* theWrappedObject, int  column, int  minSize)
{
theWrappedObject->setColumnMinimumWidth(column, minSize);
}

void PythonQtWrapper_QGridLayout::setColumnStretch(QGridLayout* theWrappedObject, int  column, int  stretch)
{
theWrappedObject->setColumnStretch(column, stretch);
}

void PythonQtWrapper_QGridLayout::setDefaultPositioning(QGridLayout* theWrappedObject, int  n, Qt::Orientation  orient)
{
theWrappedObject->setDefaultPositioning(n, orient);
}

void PythonQtWrapper_QGridLayout::setGeometry(QGridLayout* theWrappedObject, const QRect&  arg__1)
{
theWrappedObject->setGeometry(arg__1);
}

void PythonQtWrapper_QGridLayout::setHorizontalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setHorizontalSpacing(spacing);
}

void PythonQtWrapper_QGridLayout::setOriginCorner(QGridLayout* theWrappedObject, Qt::Corner  arg__1)
{
theWrappedObject->setOriginCorner(arg__1);
}

void PythonQtWrapper_QGridLayout::setRowMinimumHeight(QGridLayout* theWrappedObject, int  row, int  minSize)
{
theWrappedObject->setRowMinimumHeight(row, minSize);
}

void PythonQtWrapper_QGridLayout::setRowStretch(QGridLayout* theWrappedObject, int  row, int  stretch)
{
theWrappedObject->setRowStretch(row, stretch);
}

void PythonQtWrapper_QGridLayout::setSpacing(QGridLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setSpacing(spacing);
}

void PythonQtWrapper_QGridLayout::setVerticalSpacing(QGridLayout* theWrappedObject, int  spacing)
{
theWrappedObject->setVerticalSpacing(spacing);
}

QSize  PythonQtWrapper_QGridLayout::sizeHint(QGridLayout* theWrappedObject) const
{
return theWrappedObject->sizeHint();
}

int  PythonQtWrapper_QGridLayout::spacing(QGridLayout* theWrappedObject) const
{
return theWrappedObject->spacing();
}

QLayoutItem*  PythonQtWrapper_QGridLayout::takeAt(QGridLayout* theWrappedObject, int  index)
{
return theWrappedObject->takeAt(index);
}

int  PythonQtWrapper_QGridLayout::verticalSpacing(QGridLayout* theWrappedObject) const
{
return theWrappedObject->verticalSpacing();
}

