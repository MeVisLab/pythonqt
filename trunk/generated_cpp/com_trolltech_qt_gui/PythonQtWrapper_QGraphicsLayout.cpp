#include "PythonQtWrapper_QGraphicsLayout.h"

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qrect.h>
#include <qsize.h>
#include <qsizepolicy.h>

void PythonQtWrapper_QGraphicsLayout::activate(QGraphicsLayout* theWrappedObject)
{
theWrappedObject->activate();
}

QRectF  PythonQtWrapper_QGraphicsLayout::contentsRect(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->contentsRect();
}

int  PythonQtWrapper_QGraphicsLayout::count(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->count();
}

QSizeF  PythonQtWrapper_QGraphicsLayout::effectiveSizeHint(QGraphicsLayout* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return theWrappedObject->effectiveSizeHint(which, constraint);
}

QRectF  PythonQtWrapper_QGraphicsLayout::geometry(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->geometry();
}

void PythonQtWrapper_QGraphicsLayout::getContentsMargins(QGraphicsLayout* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
theWrappedObject->getContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsLayout::invalidate(QGraphicsLayout* theWrappedObject)
{
theWrappedObject->invalidate();
}

bool  PythonQtWrapper_QGraphicsLayout::isActivated(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->isActivated();
}

bool  PythonQtWrapper_QGraphicsLayout::isLayout(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->isLayout();
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayout::itemAt(QGraphicsLayout* theWrappedObject, int  i) const
{
return theWrappedObject->itemAt(i);
}

qreal  PythonQtWrapper_QGraphicsLayout::maximumHeight(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->maximumHeight();
}

QSizeF  PythonQtWrapper_QGraphicsLayout::maximumSize(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

qreal  PythonQtWrapper_QGraphicsLayout::maximumWidth(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->maximumWidth();
}

qreal  PythonQtWrapper_QGraphicsLayout::minimumHeight(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->minimumHeight();
}

QSizeF  PythonQtWrapper_QGraphicsLayout::minimumSize(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

qreal  PythonQtWrapper_QGraphicsLayout::minimumWidth(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->minimumWidth();
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsLayout::parentLayoutItem(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->parentLayoutItem();
}

qreal  PythonQtWrapper_QGraphicsLayout::preferredHeight(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->preferredHeight();
}

QSizeF  PythonQtWrapper_QGraphicsLayout::preferredSize(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->preferredSize();
}

qreal  PythonQtWrapper_QGraphicsLayout::preferredWidth(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->preferredWidth();
}

void PythonQtWrapper_QGraphicsLayout::removeAt(QGraphicsLayout* theWrappedObject, int  index)
{
theWrappedObject->removeAt(index);
}

void PythonQtWrapper_QGraphicsLayout::setContentsMargins(QGraphicsLayout* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
theWrappedObject->setContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsLayout::setGeometry(QGraphicsLayout* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QGraphicsLayout::setMaximumHeight(QGraphicsLayout* theWrappedObject, qreal  height)
{
theWrappedObject->setMaximumHeight(height);
}

void PythonQtWrapper_QGraphicsLayout::setMaximumSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setMaximumSize(size);
}

void PythonQtWrapper_QGraphicsLayout::setMaximumSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setMaximumSize(w, h);
}

void PythonQtWrapper_QGraphicsLayout::setMaximumWidth(QGraphicsLayout* theWrappedObject, qreal  width)
{
theWrappedObject->setMaximumWidth(width);
}

void PythonQtWrapper_QGraphicsLayout::setMinimumHeight(QGraphicsLayout* theWrappedObject, qreal  height)
{
theWrappedObject->setMinimumHeight(height);
}

void PythonQtWrapper_QGraphicsLayout::setMinimumSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setMinimumSize(size);
}

void PythonQtWrapper_QGraphicsLayout::setMinimumSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setMinimumSize(w, h);
}

void PythonQtWrapper_QGraphicsLayout::setMinimumWidth(QGraphicsLayout* theWrappedObject, qreal  width)
{
theWrappedObject->setMinimumWidth(width);
}

void PythonQtWrapper_QGraphicsLayout::setParentLayoutItem(QGraphicsLayout* theWrappedObject, QGraphicsLayoutItem*  parent)
{
theWrappedObject->setParentLayoutItem(parent);
}

void PythonQtWrapper_QGraphicsLayout::setPreferredHeight(QGraphicsLayout* theWrappedObject, qreal  height)
{
theWrappedObject->setPreferredHeight(height);
}

void PythonQtWrapper_QGraphicsLayout::setPreferredSize(QGraphicsLayout* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setPreferredSize(size);
}

void PythonQtWrapper_QGraphicsLayout::setPreferredSize(QGraphicsLayout* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setPreferredSize(w, h);
}

void PythonQtWrapper_QGraphicsLayout::setPreferredWidth(QGraphicsLayout* theWrappedObject, qreal  width)
{
theWrappedObject->setPreferredWidth(width);
}

void PythonQtWrapper_QGraphicsLayout::setSizePolicy(QGraphicsLayout* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
theWrappedObject->setSizePolicy(hPolicy, vPolicy, controlType);
}

void PythonQtWrapper_QGraphicsLayout::setSizePolicy(QGraphicsLayout* theWrappedObject, const QSizePolicy&  policy)
{
theWrappedObject->setSizePolicy(policy);
}

QSizePolicy  PythonQtWrapper_QGraphicsLayout::sizePolicy(QGraphicsLayout* theWrappedObject) const
{
return theWrappedObject->sizePolicy();
}

void PythonQtWrapper_QGraphicsLayout::updateGeometry(QGraphicsLayout* theWrappedObject)
{
theWrappedObject->updateGeometry();
}

void PythonQtWrapper_QGraphicsLayout::widgetEvent(QGraphicsLayout* theWrappedObject, QEvent*  e)
{
theWrappedObject->widgetEvent(e);
}

