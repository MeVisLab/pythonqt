#include "PythonQtWrapper_QGraphicsRectItem.h"

#include <QVariant>
#include <qbrush.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsRectItem(parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(const QRectF&  rect, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsRectItem(rect, parent, scene); }

QGraphicsRectItem* PythonQtWrapper_QGraphicsRectItem::new_QGraphicsRectItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsRectItem(x, y, w, h, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsRectItem::boundingRect(QGraphicsRectItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

bool  PythonQtWrapper_QGraphicsRectItem::contains(QGraphicsRectItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

bool  PythonQtWrapper_QGraphicsRectItem::isObscuredBy(QGraphicsRectItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::opaqueArea(QGraphicsRectItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsRectItem::paint(QGraphicsRectItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QRectF  PythonQtWrapper_QGraphicsRectItem::rect(QGraphicsRectItem* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setRect(rect);
}

void PythonQtWrapper_QGraphicsRectItem::setRect(QGraphicsRectItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
theWrappedObject->setRect(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsRectItem::shape(QGraphicsRectItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

int  PythonQtWrapper_QGraphicsRectItem::type(QGraphicsRectItem* theWrappedObject) const
{
return theWrappedObject->type();
}

