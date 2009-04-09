#include "PythonQtWrapper_QGraphicsLineItem.h"

#include <QVariant>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qline.h>
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

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsLineItem(parent, scene); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsLineItem(line, parent, scene); }

QGraphicsLineItem* PythonQtWrapper_QGraphicsLineItem::new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsLineItem(x1, y1, x2, y2, parent, scene); }

bool  PythonQtWrapper_QGraphicsLineItem::acceptDrops(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QGraphicsLineItem::acceptHoverEvents(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsLineItem::acceptedMouseButtons(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QGraphicsLineItem::acceptsHoverEvents(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QGraphicsLineItem::advance(QGraphicsLineItem* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QGraphicsLineItem::boundingRect(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QGraphicsLineItem::boundingRegion(QGraphicsLineItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QGraphicsLineItem::boundingRegionGranularity(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsLineItem::cacheMode(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsLineItem::childItems(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QGraphicsLineItem::childrenBoundingRect(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QGraphicsLineItem::clearFocus(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QGraphicsLineItem::collidesWithItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QGraphicsLineItem::collidesWithPath(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsLineItem::collidingItems(QGraphicsLineItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLineItem::commonAncestorItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QGraphicsLineItem::contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QCursor  PythonQtWrapper_QGraphicsLineItem::cursor(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QGraphicsLineItem::data(QGraphicsLineItem* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QTransform  PythonQtWrapper_QGraphicsLineItem::deviceTransform(QGraphicsLineItem* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

void PythonQtWrapper_QGraphicsLineItem::ensureVisible(QGraphicsLineItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsLineItem::ensureVisible(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsLineItem::flags(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

void PythonQtWrapper_QGraphicsLineItem::grabKeyboard(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QGraphicsLineItem::grabMouse(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsLineItem::group(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QGraphicsLineItem::handlesChildEvents(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QGraphicsLineItem::hasCursor(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QGraphicsLineItem::hasFocus(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QGraphicsLineItem::hide(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QGraphicsLineItem::installSceneEventFilter(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QGraphicsLineItem::isAncestorOf(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QGraphicsLineItem::isEnabled(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscured(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscured(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscured(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QGraphicsLineItem::isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QGraphicsLineItem::isSelected(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QGraphicsLineItem::isUnderMouse(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QGraphicsLineItem::isVisible(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QGraphicsLineItem::isVisibleTo(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QGraphicsLineItem::isWidget(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QGraphicsLineItem::isWindow(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QLineF  PythonQtWrapper_QGraphicsLineItem::line(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->line();
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapFromScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsLineItem::mapToScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

void PythonQtWrapper_QGraphicsLineItem::moveBy(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::opaqueArea(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsLineItem::paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLineItem::parentItem(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsLineItem::parentWidget(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPen  PythonQtWrapper_QGraphicsLineItem::pen(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->pen();
}

QPointF  PythonQtWrapper_QGraphicsLineItem::pos(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QGraphicsLineItem::removeSceneEventFilter(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QGraphicsLineItem::resetTransform(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QGraphicsLineItem::rotate(QGraphicsLineItem* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QGraphicsLineItem::scale(QGraphicsLineItem* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QGraphicsLineItem::scene(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QGraphicsLineItem::sceneBoundingRect(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QGraphicsLineItem::scenePos(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QGraphicsLineItem::sceneTransform(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QGraphicsLineItem::scroll(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QGraphicsLineItem::setAcceptDrops(QGraphicsLineItem* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QGraphicsLineItem::setAcceptHoverEvents(QGraphicsLineItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsLineItem::setAcceptedMouseButtons(QGraphicsLineItem* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QGraphicsLineItem::setAcceptsHoverEvents(QGraphicsLineItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsLineItem::setBoundingRegionGranularity(QGraphicsLineItem* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QGraphicsLineItem::setCacheMode(QGraphicsLineItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QGraphicsLineItem::setCursor(QGraphicsLineItem* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QGraphicsLineItem::setData(QGraphicsLineItem* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QGraphicsLineItem::setEnabled(QGraphicsLineItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QGraphicsLineItem::setFlag(QGraphicsLineItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QGraphicsLineItem::setFlags(QGraphicsLineItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QGraphicsLineItem::setFocus(QGraphicsLineItem* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QGraphicsLineItem::setGroup(QGraphicsLineItem* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QGraphicsLineItem::setHandlesChildEvents(QGraphicsLineItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line)
{
theWrappedObject->setLine(line);
}

void PythonQtWrapper_QGraphicsLineItem::setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
theWrappedObject->setLine(x1, y1, x2, y2);
}

void PythonQtWrapper_QGraphicsLineItem::setParentItem(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QGraphicsLineItem::setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen)
{
theWrappedObject->setPen(pen);
}

void PythonQtWrapper_QGraphicsLineItem::setPos(QGraphicsLineItem* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsLineItem::setPos(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QGraphicsLineItem::setSelected(QGraphicsLineItem* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QGraphicsLineItem::setToolTip(QGraphicsLineItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QGraphicsLineItem::setTransform(QGraphicsLineItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsLineItem::setVisible(QGraphicsLineItem* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QGraphicsLineItem::setZValue(QGraphicsLineItem* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QGraphicsLineItem::shape(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

void PythonQtWrapper_QGraphicsLineItem::shear(QGraphicsLineItem* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QGraphicsLineItem::show(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->show();
}

QString  PythonQtWrapper_QGraphicsLineItem::toolTip(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsLineItem::topLevelItem(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsLineItem::topLevelWidget(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QGraphicsLineItem::transform(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->transform();
}

void PythonQtWrapper_QGraphicsLineItem::translate(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QGraphicsLineItem::type(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsLineItem::ungrabKeyboard(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QGraphicsLineItem::ungrabMouse(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QGraphicsLineItem::unsetCursor(QGraphicsLineItem* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QGraphicsLineItem::update(QGraphicsLineItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QGraphicsLineItem::update(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsLineItem::window(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->window();
}

qreal  PythonQtWrapper_QGraphicsLineItem::x(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QGraphicsLineItem::y(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QGraphicsLineItem::zValue(QGraphicsLineItem* theWrappedObject) const
{
return theWrappedObject->zValue();
}

