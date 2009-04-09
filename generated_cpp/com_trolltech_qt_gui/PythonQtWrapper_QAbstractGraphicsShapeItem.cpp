#include "PythonQtWrapper_QAbstractGraphicsShapeItem.h"

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

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::acceptDrops(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::acceptHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QAbstractGraphicsShapeItem::acceptedMouseButtons(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::acceptsHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::advance(QAbstractGraphicsShapeItem* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QAbstractGraphicsShapeItem::boundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QAbstractGraphicsShapeItem::boundingRegion(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QAbstractGraphicsShapeItem::boundingRegionGranularity(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QBrush  PythonQtWrapper_QAbstractGraphicsShapeItem::brush(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->brush();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QAbstractGraphicsShapeItem::cacheMode(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QAbstractGraphicsShapeItem::childItems(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QAbstractGraphicsShapeItem::childrenBoundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::clearFocus(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::collidesWithItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::collidesWithPath(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QAbstractGraphicsShapeItem::collidingItems(QAbstractGraphicsShapeItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QAbstractGraphicsShapeItem::commonAncestorItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::contains(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QCursor  PythonQtWrapper_QAbstractGraphicsShapeItem::cursor(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QAbstractGraphicsShapeItem::data(QAbstractGraphicsShapeItem* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QTransform  PythonQtWrapper_QAbstractGraphicsShapeItem::deviceTransform(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::ensureVisible(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::ensureVisible(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QAbstractGraphicsShapeItem::flags(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::grabKeyboard(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::grabMouse(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QAbstractGraphicsShapeItem::group(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::handlesChildEvents(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::hasCursor(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::hasFocus(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::hide(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::installSceneEventFilter(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isAncestorOf(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isEnabled(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isObscured(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isObscured(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isObscured(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isSelected(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isUnderMouse(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isVisible(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isVisibleTo(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isWidget(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QAbstractGraphicsShapeItem::isWindow(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QAbstractGraphicsShapeItem::mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::moveBy(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::paint(QAbstractGraphicsShapeItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QGraphicsItem*  PythonQtWrapper_QAbstractGraphicsShapeItem::parentItem(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsWidget*  PythonQtWrapper_QAbstractGraphicsShapeItem::parentWidget(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPen  PythonQtWrapper_QAbstractGraphicsShapeItem::pen(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->pen();
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::pos(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::removeSceneEventFilter(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::resetTransform(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::rotate(QAbstractGraphicsShapeItem* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::scale(QAbstractGraphicsShapeItem* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QAbstractGraphicsShapeItem::scene(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QAbstractGraphicsShapeItem::sceneBoundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QAbstractGraphicsShapeItem::scenePos(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QAbstractGraphicsShapeItem::sceneTransform(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::scroll(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setAcceptDrops(QAbstractGraphicsShapeItem* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setAcceptHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setAcceptedMouseButtons(QAbstractGraphicsShapeItem* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setAcceptsHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setBoundingRegionGranularity(QAbstractGraphicsShapeItem* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush)
{
theWrappedObject->setBrush(brush);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setCacheMode(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setCursor(QAbstractGraphicsShapeItem* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setData(QAbstractGraphicsShapeItem* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setEnabled(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setFlag(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setFlags(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setFocus(QAbstractGraphicsShapeItem* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setGroup(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setHandlesChildEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setParentItem(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen)
{
theWrappedObject->setPen(pen);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setPos(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setPos(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setSelected(QAbstractGraphicsShapeItem* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setToolTip(QAbstractGraphicsShapeItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setTransform(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setVisible(QAbstractGraphicsShapeItem* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::setZValue(QAbstractGraphicsShapeItem* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QAbstractGraphicsShapeItem::shape(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::shear(QAbstractGraphicsShapeItem* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::show(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->show();
}

QString  PythonQtWrapper_QAbstractGraphicsShapeItem::toolTip(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QAbstractGraphicsShapeItem::topLevelItem(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QAbstractGraphicsShapeItem::topLevelWidget(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QAbstractGraphicsShapeItem::transform(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->transform();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::translate(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QAbstractGraphicsShapeItem::type(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::ungrabKeyboard(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::ungrabMouse(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::unsetCursor(QAbstractGraphicsShapeItem* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::update(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QAbstractGraphicsShapeItem::update(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QAbstractGraphicsShapeItem::window(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->window();
}

qreal  PythonQtWrapper_QAbstractGraphicsShapeItem::x(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QAbstractGraphicsShapeItem::y(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QAbstractGraphicsShapeItem::zValue(QAbstractGraphicsShapeItem* theWrappedObject) const
{
return theWrappedObject->zValue();
}

