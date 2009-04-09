#include "PythonQtWrapper_QGraphicsEllipseItem.h"

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

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsEllipseItem(parent, scene); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsEllipseItem(rect, parent, scene); }

QGraphicsEllipseItem* PythonQtWrapper_QGraphicsEllipseItem::new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsEllipseItem(x, y, w, h, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsEllipseItem::boundingRect(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

bool  PythonQtWrapper_QGraphicsEllipseItem::contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

bool  PythonQtWrapper_QGraphicsEllipseItem::isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

QPainterPath  PythonQtWrapper_QGraphicsEllipseItem::opaqueArea(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsEllipseItem::paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QRectF  PythonQtWrapper_QGraphicsEllipseItem::rect(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setRect(rect);
}

void PythonQtWrapper_QGraphicsEllipseItem::setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
theWrappedObject->setRect(x, y, w, h);
}

void PythonQtWrapper_QGraphicsEllipseItem::setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
theWrappedObject->setSpanAngle(angle);
}

void PythonQtWrapper_QGraphicsEllipseItem::setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle)
{
theWrappedObject->setStartAngle(angle);
}

QPainterPath  PythonQtWrapper_QGraphicsEllipseItem::shape(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

int  PythonQtWrapper_QGraphicsEllipseItem::spanAngle(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->spanAngle();
}

int  PythonQtWrapper_QGraphicsEllipseItem::startAngle(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->startAngle();
}

int  PythonQtWrapper_QGraphicsEllipseItem::type(QGraphicsEllipseItem* theWrappedObject) const
{
return theWrappedObject->type();
}

