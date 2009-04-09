#include "PythonQtWrapper_QGraphicsWidget.h"

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

QGraphicsWidget* PythonQtWrapper_QGraphicsWidget::new_QGraphicsWidget(QGraphicsItem*  parent, Qt::WindowFlags  wFlags)
{ 
return new QGraphicsWidget(parent, wFlags); }

bool  PythonQtWrapper_QGraphicsWidget::acceptDrops(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QGraphicsWidget::acceptHoverEvents(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsWidget::acceptedMouseButtons(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QGraphicsWidget::acceptsHoverEvents(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QGraphicsWidget::adjustSize(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->adjustSize();
}

void PythonQtWrapper_QGraphicsWidget::advance(QGraphicsWidget* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QGraphicsWidget::boundingRect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QGraphicsWidget::boundingRegion(QGraphicsWidget* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QGraphicsWidget::boundingRegionGranularity(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsWidget::cacheMode(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsWidget::childItems(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QGraphicsWidget::childrenBoundingRect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QGraphicsWidget::clearFocus(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QGraphicsWidget::collidesWithItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QGraphicsWidget::collidesWithPath(QGraphicsWidget* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsWidget::collidingItems(QGraphicsWidget* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsWidget::commonAncestorItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QGraphicsWidget::contains(QGraphicsWidget* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QRectF  PythonQtWrapper_QGraphicsWidget::contentsRect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->contentsRect();
}

QCursor  PythonQtWrapper_QGraphicsWidget::cursor(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QGraphicsWidget::data(QGraphicsWidget* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QTransform  PythonQtWrapper_QGraphicsWidget::deviceTransform(QGraphicsWidget* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

QSizeF  PythonQtWrapper_QGraphicsWidget::effectiveSizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const
{
return theWrappedObject->effectiveSizeHint(which, constraint);
}

void PythonQtWrapper_QGraphicsWidget::ensureVisible(QGraphicsWidget* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsWidget::ensureVisible(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsWidget::flags(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->flags();
}

Qt::FocusPolicy  PythonQtWrapper_QGraphicsWidget::focusPolicy(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->focusPolicy();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::focusWidget(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->focusWidget();
}

QFont  PythonQtWrapper_QGraphicsWidget::font(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->font();
}

QRectF  PythonQtWrapper_QGraphicsWidget::geometry(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->geometry();
}

void PythonQtWrapper_QGraphicsWidget::getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
theWrappedObject->getContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsWidget::getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const
{
theWrappedObject->getWindowFrameMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsWidget::grabKeyboard(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QGraphicsWidget::grabMouse(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsWidget::group(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QGraphicsWidget::handlesChildEvents(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QGraphicsWidget::hasCursor(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QGraphicsWidget::hasFocus(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QGraphicsWidget::hide(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QGraphicsWidget::installSceneEventFilter(QGraphicsWidget* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QGraphicsWidget::isActiveWindow(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isActiveWindow();
}

bool  PythonQtWrapper_QGraphicsWidget::isAncestorOf(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QGraphicsWidget::isEnabled(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QGraphicsWidget::isLayout(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isLayout();
}

bool  PythonQtWrapper_QGraphicsWidget::isObscured(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QGraphicsWidget::isObscured(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QGraphicsWidget::isObscured(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QGraphicsWidget::isObscuredBy(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QGraphicsWidget::isSelected(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QGraphicsWidget::isUnderMouse(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QGraphicsWidget::isVisible(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QGraphicsWidget::isVisibleTo(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QGraphicsWidget::isWidget(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QGraphicsWidget::isWindow(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QGraphicsLayout*  PythonQtWrapper_QGraphicsWidget::layout(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->layout();
}

Qt::LayoutDirection  PythonQtWrapper_QGraphicsWidget::layoutDirection(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->layoutDirection();
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapFromScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsWidget::mapToScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

qreal  PythonQtWrapper_QGraphicsWidget::maximumHeight(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->maximumHeight();
}

QSizeF  PythonQtWrapper_QGraphicsWidget::maximumSize(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->maximumSize();
}

qreal  PythonQtWrapper_QGraphicsWidget::maximumWidth(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->maximumWidth();
}

qreal  PythonQtWrapper_QGraphicsWidget::minimumHeight(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->minimumHeight();
}

QSizeF  PythonQtWrapper_QGraphicsWidget::minimumSize(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->minimumSize();
}

qreal  PythonQtWrapper_QGraphicsWidget::minimumWidth(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->minimumWidth();
}

void PythonQtWrapper_QGraphicsWidget::moveBy(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::opaqueArea(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

void PythonQtWrapper_QGraphicsWidget::paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

void PythonQtWrapper_QGraphicsWidget::paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paintWindowFrame(painter, option, widget);
}

QPalette  PythonQtWrapper_QGraphicsWidget::palette(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->palette();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsWidget::parentItem(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsLayoutItem*  PythonQtWrapper_QGraphicsWidget::parentLayoutItem(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->parentLayoutItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::parentWidget(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPointF  PythonQtWrapper_QGraphicsWidget::pos(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->pos();
}

qreal  PythonQtWrapper_QGraphicsWidget::preferredHeight(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->preferredHeight();
}

QSizeF  PythonQtWrapper_QGraphicsWidget::preferredSize(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->preferredSize();
}

qreal  PythonQtWrapper_QGraphicsWidget::preferredWidth(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->preferredWidth();
}

QRectF  PythonQtWrapper_QGraphicsWidget::rect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->rect();
}

void PythonQtWrapper_QGraphicsWidget::removeSceneEventFilter(QGraphicsWidget* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QGraphicsWidget::resetTransform(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->resize(size);
}

void PythonQtWrapper_QGraphicsWidget::resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->resize(w, h);
}

void PythonQtWrapper_QGraphicsWidget::rotate(QGraphicsWidget* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QGraphicsWidget::scale(QGraphicsWidget* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QGraphicsWidget::scene(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QGraphicsWidget::sceneBoundingRect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QGraphicsWidget::scenePos(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QGraphicsWidget::sceneTransform(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QGraphicsWidget::scroll(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QGraphicsWidget::setAcceptDrops(QGraphicsWidget* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QGraphicsWidget::setAcceptHoverEvents(QGraphicsWidget* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsWidget::setAcceptedMouseButtons(QGraphicsWidget* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QGraphicsWidget::setAcceptsHoverEvents(QGraphicsWidget* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsWidget::setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on)
{
theWrappedObject->setAttribute(attribute, on);
}

void PythonQtWrapper_QGraphicsWidget::setBoundingRegionGranularity(QGraphicsWidget* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QGraphicsWidget::setCacheMode(QGraphicsWidget* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QGraphicsWidget::setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
theWrappedObject->setContentsMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsWidget::setCursor(QGraphicsWidget* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QGraphicsWidget::setData(QGraphicsWidget* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QGraphicsWidget::setEnabled(QGraphicsWidget* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QGraphicsWidget::setFlag(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QGraphicsWidget::setFlags(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QGraphicsWidget::setFocus(QGraphicsWidget* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QGraphicsWidget::setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy)
{
theWrappedObject->setFocusPolicy(policy);
}

void PythonQtWrapper_QGraphicsWidget::setFont(QGraphicsWidget* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->setGeometry(rect);
}

void PythonQtWrapper_QGraphicsWidget::setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
theWrappedObject->setGeometry(x, y, w, h);
}

void PythonQtWrapper_QGraphicsWidget::setGroup(QGraphicsWidget* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QGraphicsWidget::setHandlesChildEvents(QGraphicsWidget* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QGraphicsWidget::setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout)
{
theWrappedObject->setLayout(layout);
}

void PythonQtWrapper_QGraphicsWidget::setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction)
{
theWrappedObject->setLayoutDirection(direction);
}

void PythonQtWrapper_QGraphicsWidget::setMaximumHeight(QGraphicsWidget* theWrappedObject, qreal  height)
{
theWrappedObject->setMaximumHeight(height);
}

void PythonQtWrapper_QGraphicsWidget::setMaximumSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setMaximumSize(size);
}

void PythonQtWrapper_QGraphicsWidget::setMaximumSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setMaximumSize(w, h);
}

void PythonQtWrapper_QGraphicsWidget::setMaximumWidth(QGraphicsWidget* theWrappedObject, qreal  width)
{
theWrappedObject->setMaximumWidth(width);
}

void PythonQtWrapper_QGraphicsWidget::setMinimumHeight(QGraphicsWidget* theWrappedObject, qreal  height)
{
theWrappedObject->setMinimumHeight(height);
}

void PythonQtWrapper_QGraphicsWidget::setMinimumSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setMinimumSize(size);
}

void PythonQtWrapper_QGraphicsWidget::setMinimumSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setMinimumSize(w, h);
}

void PythonQtWrapper_QGraphicsWidget::setMinimumWidth(QGraphicsWidget* theWrappedObject, qreal  width)
{
theWrappedObject->setMinimumWidth(width);
}

void PythonQtWrapper_QGraphicsWidget::setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette)
{
theWrappedObject->setPalette(palette);
}

void PythonQtWrapper_QGraphicsWidget::setParentItem(QGraphicsWidget* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QGraphicsWidget::setParentLayoutItem(QGraphicsWidget* theWrappedObject, QGraphicsLayoutItem*  parent)
{
theWrappedObject->setParentLayoutItem(parent);
}

void PythonQtWrapper_QGraphicsWidget::setPos(QGraphicsWidget* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsWidget::setPos(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QGraphicsWidget::setPreferredHeight(QGraphicsWidget* theWrappedObject, qreal  height)
{
theWrappedObject->setPreferredHeight(height);
}

void PythonQtWrapper_QGraphicsWidget::setPreferredSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size)
{
theWrappedObject->setPreferredSize(size);
}

void PythonQtWrapper_QGraphicsWidget::setPreferredSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h)
{
theWrappedObject->setPreferredSize(w, h);
}

void PythonQtWrapper_QGraphicsWidget::setPreferredWidth(QGraphicsWidget* theWrappedObject, qreal  width)
{
theWrappedObject->setPreferredWidth(width);
}

void PythonQtWrapper_QGraphicsWidget::setSelected(QGraphicsWidget* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QGraphicsWidget::setSizePolicy(QGraphicsWidget* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType)
{
theWrappedObject->setSizePolicy(hPolicy, vPolicy, controlType);
}

void PythonQtWrapper_QGraphicsWidget::setSizePolicy(QGraphicsWidget* theWrappedObject, const QSizePolicy&  policy)
{
theWrappedObject->setSizePolicy(policy);
}

void PythonQtWrapper_QGraphicsWidget::setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style)
{
theWrappedObject->setStyle(style);
}

void PythonQtWrapper_QGraphicsWidget::static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second)
{
QGraphicsWidget::setTabOrder(first, second);
}

void PythonQtWrapper_QGraphicsWidget::setToolTip(QGraphicsWidget* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QGraphicsWidget::setTransform(QGraphicsWidget* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsWidget::setVisible(QGraphicsWidget* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QGraphicsWidget::setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags)
{
theWrappedObject->setWindowFlags(wFlags);
}

void PythonQtWrapper_QGraphicsWidget::setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom)
{
theWrappedObject->setWindowFrameMargins(left, top, right, bottom);
}

void PythonQtWrapper_QGraphicsWidget::setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title)
{
theWrappedObject->setWindowTitle(title);
}

void PythonQtWrapper_QGraphicsWidget::setZValue(QGraphicsWidget* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QGraphicsWidget::shape(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->shape();
}

void PythonQtWrapper_QGraphicsWidget::shear(QGraphicsWidget* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QGraphicsWidget::show(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->show();
}

QSizeF  PythonQtWrapper_QGraphicsWidget::size(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->size();
}

QSizePolicy  PythonQtWrapper_QGraphicsWidget::sizePolicy(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->sizePolicy();
}

QStyle*  PythonQtWrapper_QGraphicsWidget::style(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->style();
}

bool  PythonQtWrapper_QGraphicsWidget::testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const
{
return theWrappedObject->testAttribute(attribute);
}

QString  PythonQtWrapper_QGraphicsWidget::toolTip(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsWidget::topLevelItem(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::topLevelWidget(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QGraphicsWidget::transform(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->transform();
}

void PythonQtWrapper_QGraphicsWidget::translate(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QGraphicsWidget::type(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsWidget::ungrabKeyboard(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QGraphicsWidget::ungrabMouse(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QGraphicsWidget::unsetCursor(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QGraphicsWidget::unsetLayoutDirection(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->unsetLayoutDirection();
}

void PythonQtWrapper_QGraphicsWidget::unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject)
{
theWrappedObject->unsetWindowFrameMargins();
}

void PythonQtWrapper_QGraphicsWidget::update(QGraphicsWidget* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QGraphicsWidget::update(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsWidget::window(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->window();
}

Qt::WindowFlags  PythonQtWrapper_QGraphicsWidget::windowFlags(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->windowFlags();
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameGeometry(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->windowFrameGeometry();
}

QRectF  PythonQtWrapper_QGraphicsWidget::windowFrameRect(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->windowFrameRect();
}

QString  PythonQtWrapper_QGraphicsWidget::windowTitle(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->windowTitle();
}

Qt::WindowType  PythonQtWrapper_QGraphicsWidget::windowType(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->windowType();
}

qreal  PythonQtWrapper_QGraphicsWidget::x(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QGraphicsWidget::y(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QGraphicsWidget::zValue(QGraphicsWidget* theWrappedObject) const
{
return theWrappedObject->zValue();
}

