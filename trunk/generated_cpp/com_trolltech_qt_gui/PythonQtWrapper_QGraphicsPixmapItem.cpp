#include "PythonQtWrapper_QGraphicsPixmapItem.h"

#include <QVariant>
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
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsPixmapItem(parent, scene); }

QGraphicsPixmapItem* PythonQtWrapper_QGraphicsPixmapItem::new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsPixmapItem(pixmap, parent, scene); }

bool  PythonQtWrapper_QGraphicsPixmapItem::acceptDrops(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::acceptHoverEvents(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsPixmapItem::acceptedMouseButtons(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::acceptsHoverEvents(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QGraphicsPixmapItem::advance(QGraphicsPixmapItem* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QGraphicsPixmapItem::boundingRect(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QGraphicsPixmapItem::boundingRegion(QGraphicsPixmapItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QGraphicsPixmapItem::boundingRegionGranularity(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsPixmapItem::cacheMode(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsPixmapItem::childItems(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QGraphicsPixmapItem::childrenBoundingRect(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QGraphicsPixmapItem::clearFocus(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::collidesWithItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::collidesWithPath(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsPixmapItem::collidingItems(QGraphicsPixmapItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsPixmapItem::commonAncestorItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QCursor  PythonQtWrapper_QGraphicsPixmapItem::cursor(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QGraphicsPixmapItem::data(QGraphicsPixmapItem* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QTransform  PythonQtWrapper_QGraphicsPixmapItem::deviceTransform(QGraphicsPixmapItem* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

void PythonQtWrapper_QGraphicsPixmapItem::ensureVisible(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsPixmapItem::ensureVisible(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsPixmapItem::flags(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

void PythonQtWrapper_QGraphicsPixmapItem::grabKeyboard(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QGraphicsPixmapItem::grabMouse(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsPixmapItem::group(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::handlesChildEvents(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::hasCursor(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::hasFocus(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QGraphicsPixmapItem::hide(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QGraphicsPixmapItem::installSceneEventFilter(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isAncestorOf(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isEnabled(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscured(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscured(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscured(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isSelected(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isUnderMouse(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isVisible(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isVisibleTo(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isWidget(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QGraphicsPixmapItem::isWindow(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapFromScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsPixmapItem::mapToScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

void PythonQtWrapper_QGraphicsPixmapItem::moveBy(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::offset(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->offset();
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::opaqueArea(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsPixmapItem::paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsPixmapItem::parentItem(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsPixmapItem::parentWidget(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPixmap  PythonQtWrapper_QGraphicsPixmapItem::pixmap(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->pixmap();
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::pos(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QGraphicsPixmapItem::removeSceneEventFilter(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QGraphicsPixmapItem::resetTransform(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QGraphicsPixmapItem::rotate(QGraphicsPixmapItem* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QGraphicsPixmapItem::scale(QGraphicsPixmapItem* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QGraphicsPixmapItem::scene(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QGraphicsPixmapItem::sceneBoundingRect(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QGraphicsPixmapItem::scenePos(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QGraphicsPixmapItem::sceneTransform(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QGraphicsPixmapItem::scroll(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QGraphicsPixmapItem::setAcceptDrops(QGraphicsPixmapItem* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QGraphicsPixmapItem::setAcceptHoverEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsPixmapItem::setAcceptedMouseButtons(QGraphicsPixmapItem* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QGraphicsPixmapItem::setAcceptsHoverEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsPixmapItem::setBoundingRegionGranularity(QGraphicsPixmapItem* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QGraphicsPixmapItem::setCacheMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QGraphicsPixmapItem::setCursor(QGraphicsPixmapItem* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QGraphicsPixmapItem::setData(QGraphicsPixmapItem* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QGraphicsPixmapItem::setEnabled(QGraphicsPixmapItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QGraphicsPixmapItem::setFlag(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QGraphicsPixmapItem::setFlags(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QGraphicsPixmapItem::setFocus(QGraphicsPixmapItem* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QGraphicsPixmapItem::setGroup(QGraphicsPixmapItem* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QGraphicsPixmapItem::setHandlesChildEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset)
{
theWrappedObject->setOffset(offset);
}

void PythonQtWrapper_QGraphicsPixmapItem::setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setOffset(x, y);
}

void PythonQtWrapper_QGraphicsPixmapItem::setParentItem(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QGraphicsPixmapItem::setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap)
{
theWrappedObject->setPixmap(pixmap);
}

void PythonQtWrapper_QGraphicsPixmapItem::setPos(QGraphicsPixmapItem* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsPixmapItem::setPos(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QGraphicsPixmapItem::setSelected(QGraphicsPixmapItem* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode)
{
theWrappedObject->setShapeMode(mode);
}

void PythonQtWrapper_QGraphicsPixmapItem::setToolTip(QGraphicsPixmapItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QGraphicsPixmapItem::setTransform(QGraphicsPixmapItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsPixmapItem::setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode)
{
theWrappedObject->setTransformationMode(mode);
}

void PythonQtWrapper_QGraphicsPixmapItem::setVisible(QGraphicsPixmapItem* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QGraphicsPixmapItem::setZValue(QGraphicsPixmapItem* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QGraphicsPixmapItem::shape(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

QGraphicsPixmapItem::ShapeMode  PythonQtWrapper_QGraphicsPixmapItem::shapeMode(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->shapeMode();
}

void PythonQtWrapper_QGraphicsPixmapItem::shear(QGraphicsPixmapItem* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QGraphicsPixmapItem::show(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->show();
}

QString  PythonQtWrapper_QGraphicsPixmapItem::toolTip(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsPixmapItem::topLevelItem(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsPixmapItem::topLevelWidget(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QGraphicsPixmapItem::transform(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->transform();
}

Qt::TransformationMode  PythonQtWrapper_QGraphicsPixmapItem::transformationMode(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->transformationMode();
}

void PythonQtWrapper_QGraphicsPixmapItem::translate(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QGraphicsPixmapItem::type(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsPixmapItem::ungrabKeyboard(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QGraphicsPixmapItem::ungrabMouse(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QGraphicsPixmapItem::unsetCursor(QGraphicsPixmapItem* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QGraphicsPixmapItem::update(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QGraphicsPixmapItem::update(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsPixmapItem::window(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->window();
}

qreal  PythonQtWrapper_QGraphicsPixmapItem::x(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QGraphicsPixmapItem::y(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QGraphicsPixmapItem::zValue(QGraphicsPixmapItem* theWrappedObject) const
{
return theWrappedObject->zValue();
}

