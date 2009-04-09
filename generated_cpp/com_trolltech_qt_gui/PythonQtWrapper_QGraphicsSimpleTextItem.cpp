#include "PythonQtWrapper_QGraphicsSimpleTextItem.h"

#include <QVariant>
#include <qbrush.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
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

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsSimpleTextItem(parent, scene); }

QGraphicsSimpleTextItem* PythonQtWrapper_QGraphicsSimpleTextItem::new_QGraphicsSimpleTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsSimpleTextItem(text, parent, scene); }

QRectF  PythonQtWrapper_QGraphicsSimpleTextItem::boundingRect(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::contains(QGraphicsSimpleTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QFont  PythonQtWrapper_QGraphicsSimpleTextItem::font(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->font();
}

bool  PythonQtWrapper_QGraphicsSimpleTextItem::isObscuredBy(QGraphicsSimpleTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::opaqueArea(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsSimpleTextItem::paint(QGraphicsSimpleTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setFont(QGraphicsSimpleTextItem* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QGraphicsSimpleTextItem::setText(QGraphicsSimpleTextItem* theWrappedObject, const QString&  text)
{
theWrappedObject->setText(text);
}

QPainterPath  PythonQtWrapper_QGraphicsSimpleTextItem::shape(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

QString  PythonQtWrapper_QGraphicsSimpleTextItem::text(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->text();
}

int  PythonQtWrapper_QGraphicsSimpleTextItem::type(QGraphicsSimpleTextItem* theWrappedObject) const
{
return theWrappedObject->type();
}

