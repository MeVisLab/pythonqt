#include "PythonQtWrapper_QGraphicsLinearLayout.h"

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(QGraphicsLayoutItem*  parent)
{ 
return new QGraphicsLinearLayout(parent); }

QGraphicsLinearLayout* PythonQtWrapper_QGraphicsLinearLayout::new_QGraphicsLinearLayout(Qt::Orientation  orientation, QGraphicsLayoutItem*  parent)
{ 
return new QGraphicsLinearLayout(orientation, parent); }

void PythonQtWrapper_QGraphicsLinearLayout::addItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
theWrappedObject->addItem(item);
}

void PythonQtWrapper_QGraphicsLinearLayout::addStretch(QGraphicsLinearLayout* theWrappedObject, int  stretch)
{
theWrappedObject->addStretch(stretch);
}

Qt::Alignment  PythonQtWrapper_QGraphicsLinearLayout::alignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
return theWrappedObject->alignment(item);
}

int  PythonQtWrapper_QGraphicsLinearLayout::count(QGraphicsLinearLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

void PythonQtWrapper_QGraphicsLinearLayout::insertItem(QGraphicsLinearLayout* theWrappedObject, int  index, QGraphicsLayoutItem*  item)
{
theWrappedObject->insertItem(index, item);
}

void PythonQtWrapper_QGraphicsLinearLayout::insertStretch(QGraphicsLinearLayout* theWrappedObject, int  index, int  stretch)
{
theWrappedObject->insertStretch(index, stretch);
}

void PythonQtWrapper_QGraphicsLinearLayout::invalidate(QGraphicsLinearLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLinearLayout::itemAt(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemAt(index);
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::itemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index) const
{
return theWrappedObject->itemSpacing(index);
}

Qt::Orientation  PythonQtWrapper_QGraphicsLinearLayout::orientation(QGraphicsLinearLayout* theWrappedObject) const
{
return theWrappedObject->orientation();
}

void PythonQtWrapper_QGraphicsLinearLayout::removeAt(QGraphicsLinearLayout* theWrappedObject, int  index)
{
theWrappedObject->removeAt(index);
}

void PythonQtWrapper_QGraphicsLinearLayout::removeItem(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item)
{
theWrappedObject->removeItem(item);
}

void PythonQtWrapper_QGraphicsLinearLayout::setAlignment(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, Qt::Alignment  alignment)
{
theWrappedObject->setAlignment(item, alignment);
}

void PythonQtWrapper_QGraphicsLinearLayout::setGeometry(QGraphicsLinearLayout* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QGraphicsLinearLayout::setItemSpacing(QGraphicsLinearLayout* theWrappedObject, int  index, qreal  spacing)
{
theWrappedObject->setItemSpacing(index, spacing);
}

void PythonQtWrapper_QGraphicsLinearLayout::setOrientation(QGraphicsLinearLayout* theWrappedObject, Qt::Orientation  orientation)
{
theWrappedObject->setOrientation(orientation);
}

void PythonQtWrapper_QGraphicsLinearLayout::setSpacing(QGraphicsLinearLayout* theWrappedObject, qreal  spacing)
{
theWrappedObject->setSpacing(spacing);
}

void PythonQtWrapper_QGraphicsLinearLayout::setStretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item, int  stretch)
{
theWrappedObject->setStretchFactor(item, stretch);
}

QSizeF  PythonQtWrapper_QGraphicsLinearLayout::sizeHint(QGraphicsLinearLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return theWrappedObject->sizeHint(which, constraint);
}

qreal  PythonQtWrapper_QGraphicsLinearLayout::spacing(QGraphicsLinearLayout* theWrappedObject) const
{
return theWrappedObject->spacing();
}

int  PythonQtWrapper_QGraphicsLinearLayout::stretchFactor(QGraphicsLinearLayout* theWrappedObject, QGraphicsLayoutItem*  item) const
{
return theWrappedObject->stretchFactor(item);
}

