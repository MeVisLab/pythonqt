#include "PythonQtWrapper_QGraphicsItemGroup.h"

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
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

QGraphicsItemGroup* PythonQtWrapper_QGraphicsItemGroup::new_QGraphicsItemGroup(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsItemGroup(parent, scene); }

bool  PythonQtWrapper_QGraphicsItemGroup::acceptDrops(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QGraphicsItemGroup::acceptHoverEvents(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsItemGroup::acceptedMouseButtons(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QGraphicsItemGroup::acceptsHoverEvents(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QGraphicsItemGroup::addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
theWrappedObject->addToGroup(item);
}

void PythonQtWrapper_QGraphicsItemGroup::advance(QGraphicsItemGroup* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QGraphicsItemGroup::boundingRect(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QGraphicsItemGroup::boundingRegion(QGraphicsItemGroup* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QGraphicsItemGroup::boundingRegionGranularity(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsItemGroup::cacheMode(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItemGroup::childItems(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QGraphicsItemGroup::childrenBoundingRect(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QGraphicsItemGroup::clearFocus(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QGraphicsItemGroup::collidesWithItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QGraphicsItemGroup::collidesWithPath(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsItemGroup::collidingItems(QGraphicsItemGroup* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemGroup::commonAncestorItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QGraphicsItemGroup::contains(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QCursor  PythonQtWrapper_QGraphicsItemGroup::cursor(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QGraphicsItemGroup::data(QGraphicsItemGroup* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QTransform  PythonQtWrapper_QGraphicsItemGroup::deviceTransform(QGraphicsItemGroup* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

void PythonQtWrapper_QGraphicsItemGroup::ensureVisible(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsItemGroup::ensureVisible(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsItemGroup::flags(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->flags();
}

void PythonQtWrapper_QGraphicsItemGroup::grabKeyboard(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QGraphicsItemGroup::grabMouse(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsItemGroup::group(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QGraphicsItemGroup::handlesChildEvents(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QGraphicsItemGroup::hasCursor(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QGraphicsItemGroup::hasFocus(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QGraphicsItemGroup::hide(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QGraphicsItemGroup::installSceneEventFilter(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isAncestorOf(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isEnabled(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscured(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscured(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscured(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isSelected(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isUnderMouse(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isVisible(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isVisibleTo(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QGraphicsItemGroup::isWidget(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QGraphicsItemGroup::isWindow(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapFromScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsItemGroup::mapToScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

void PythonQtWrapper_QGraphicsItemGroup::moveBy(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::opaqueArea(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsItemGroup::paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemGroup::parentItem(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItemGroup::parentWidget(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::pos(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QGraphicsItemGroup::removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item)
{
theWrappedObject->removeFromGroup(item);
}

void PythonQtWrapper_QGraphicsItemGroup::removeSceneEventFilter(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QGraphicsItemGroup::resetTransform(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QGraphicsItemGroup::rotate(QGraphicsItemGroup* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QGraphicsItemGroup::scale(QGraphicsItemGroup* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QGraphicsItemGroup::scene(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QGraphicsItemGroup::sceneBoundingRect(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QGraphicsItemGroup::scenePos(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QGraphicsItemGroup::sceneTransform(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QGraphicsItemGroup::scroll(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QGraphicsItemGroup::setAcceptDrops(QGraphicsItemGroup* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QGraphicsItemGroup::setAcceptHoverEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsItemGroup::setAcceptedMouseButtons(QGraphicsItemGroup* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QGraphicsItemGroup::setAcceptsHoverEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsItemGroup::setBoundingRegionGranularity(QGraphicsItemGroup* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QGraphicsItemGroup::setCacheMode(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QGraphicsItemGroup::setCursor(QGraphicsItemGroup* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QGraphicsItemGroup::setData(QGraphicsItemGroup* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QGraphicsItemGroup::setEnabled(QGraphicsItemGroup* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QGraphicsItemGroup::setFlag(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QGraphicsItemGroup::setFlags(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QGraphicsItemGroup::setFocus(QGraphicsItemGroup* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QGraphicsItemGroup::setGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QGraphicsItemGroup::setHandlesChildEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QGraphicsItemGroup::setParentItem(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QGraphicsItemGroup::setPos(QGraphicsItemGroup* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsItemGroup::setPos(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QGraphicsItemGroup::setSelected(QGraphicsItemGroup* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QGraphicsItemGroup::setToolTip(QGraphicsItemGroup* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QGraphicsItemGroup::setTransform(QGraphicsItemGroup* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsItemGroup::setVisible(QGraphicsItemGroup* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QGraphicsItemGroup::setZValue(QGraphicsItemGroup* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QGraphicsItemGroup::shape(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->shape();
}

void PythonQtWrapper_QGraphicsItemGroup::shear(QGraphicsItemGroup* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QGraphicsItemGroup::show(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->show();
}

QString  PythonQtWrapper_QGraphicsItemGroup::toolTip(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsItemGroup::topLevelItem(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItemGroup::topLevelWidget(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QGraphicsItemGroup::transform(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->transform();
}

void PythonQtWrapper_QGraphicsItemGroup::translate(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QGraphicsItemGroup::type(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsItemGroup::ungrabKeyboard(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QGraphicsItemGroup::ungrabMouse(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QGraphicsItemGroup::unsetCursor(QGraphicsItemGroup* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QGraphicsItemGroup::update(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QGraphicsItemGroup::update(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsItemGroup::window(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->window();
}

qreal  PythonQtWrapper_QGraphicsItemGroup::x(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QGraphicsItemGroup::y(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QGraphicsItemGroup::zValue(QGraphicsItemGroup* theWrappedObject) const
{
return theWrappedObject->zValue();
}

