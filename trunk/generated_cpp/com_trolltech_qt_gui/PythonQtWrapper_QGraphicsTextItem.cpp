#include "PythonQtWrapper_QGraphicsTextItem.h"

#include <QTextCursor>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtransform.h>
#include <qwidget.h>

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsTextItem(parent, scene); }

QGraphicsTextItem* PythonQtWrapper_QGraphicsTextItem::new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent, QGraphicsScene*  scene)
{ 
return new QGraphicsTextItem(text, parent, scene); }

bool  PythonQtWrapper_QGraphicsTextItem::acceptDrops(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->acceptDrops();
}

bool  PythonQtWrapper_QGraphicsTextItem::acceptHoverEvents(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->acceptHoverEvents();
}

Qt::MouseButtons  PythonQtWrapper_QGraphicsTextItem::acceptedMouseButtons(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->acceptedMouseButtons();
}

bool  PythonQtWrapper_QGraphicsTextItem::acceptsHoverEvents(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->acceptsHoverEvents();
}

void PythonQtWrapper_QGraphicsTextItem::adjustSize(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->adjustSize();
}

void PythonQtWrapper_QGraphicsTextItem::advance(QGraphicsTextItem* theWrappedObject, int  phase)
{
theWrappedObject->advance(phase);
}

QRectF  PythonQtWrapper_QGraphicsTextItem::boundingRect(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

QRegion  PythonQtWrapper_QGraphicsTextItem::boundingRegion(QGraphicsTextItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const
{
return theWrappedObject->boundingRegion(itemToDeviceTransform);
}

qreal  PythonQtWrapper_QGraphicsTextItem::boundingRegionGranularity(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->boundingRegionGranularity();
}

QGraphicsItem::CacheMode  PythonQtWrapper_QGraphicsTextItem::cacheMode(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->cacheMode();
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsTextItem::childItems(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->childItems();
}

QRectF  PythonQtWrapper_QGraphicsTextItem::childrenBoundingRect(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->childrenBoundingRect();
}

void PythonQtWrapper_QGraphicsTextItem::clearFocus(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->clearFocus();
}

bool  PythonQtWrapper_QGraphicsTextItem::collidesWithItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithItem(other, mode);
}

bool  PythonQtWrapper_QGraphicsTextItem::collidesWithPath(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidesWithPath(path, mode);
}

QList<QGraphicsItem* >  PythonQtWrapper_QGraphicsTextItem::collidingItems(QGraphicsTextItem* theWrappedObject, Qt::ItemSelectionMode  mode) const
{
return theWrappedObject->collidingItems(mode);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsTextItem::commonAncestorItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  other) const
{
return theWrappedObject->commonAncestorItem(other);
}

bool  PythonQtWrapper_QGraphicsTextItem::contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->contains(point);
}

QCursor  PythonQtWrapper_QGraphicsTextItem::cursor(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->cursor();
}

QVariant  PythonQtWrapper_QGraphicsTextItem::data(QGraphicsTextItem* theWrappedObject, int  key) const
{
return theWrappedObject->data(key);
}

QColor  PythonQtWrapper_QGraphicsTextItem::defaultTextColor(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->defaultTextColor();
}

QTransform  PythonQtWrapper_QGraphicsTextItem::deviceTransform(QGraphicsTextItem* theWrappedObject, const QTransform&  viewportTransform) const
{
return theWrappedObject->deviceTransform(viewportTransform);
}

QTextDocument*  PythonQtWrapper_QGraphicsTextItem::document(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->document();
}

void PythonQtWrapper_QGraphicsTextItem::ensureVisible(QGraphicsTextItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(rect, xmargin, ymargin);
}

void PythonQtWrapper_QGraphicsTextItem::ensureVisible(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin)
{
theWrappedObject->ensureVisible(x, y, w, h, xmargin, ymargin);
}

QGraphicsItem::GraphicsItemFlags  PythonQtWrapper_QGraphicsTextItem::flags(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->flags();
}

QFont  PythonQtWrapper_QGraphicsTextItem::font(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->font();
}

void PythonQtWrapper_QGraphicsTextItem::grabKeyboard(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->grabKeyboard();
}

void PythonQtWrapper_QGraphicsTextItem::grabMouse(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->grabMouse();
}

QGraphicsItemGroup*  PythonQtWrapper_QGraphicsTextItem::group(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->group();
}

bool  PythonQtWrapper_QGraphicsTextItem::handlesChildEvents(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->handlesChildEvents();
}

bool  PythonQtWrapper_QGraphicsTextItem::hasCursor(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->hasCursor();
}

bool  PythonQtWrapper_QGraphicsTextItem::hasFocus(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->hasFocus();
}

void PythonQtWrapper_QGraphicsTextItem::hide(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->hide();
}

void PythonQtWrapper_QGraphicsTextItem::installSceneEventFilter(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->installSceneEventFilter(filterItem);
}

bool  PythonQtWrapper_QGraphicsTextItem::isAncestorOf(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  child) const
{
return theWrappedObject->isAncestorOf(child);
}

bool  PythonQtWrapper_QGraphicsTextItem::isEnabled(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isEnabled();
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscured(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isObscured();
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscured(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->isObscured(rect);
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscured(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->isObscured(x, y, w, h);
}

bool  PythonQtWrapper_QGraphicsTextItem::isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const
{
return theWrappedObject->isObscuredBy(item);
}

bool  PythonQtWrapper_QGraphicsTextItem::isSelected(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isSelected();
}

bool  PythonQtWrapper_QGraphicsTextItem::isUnderMouse(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isUnderMouse();
}

bool  PythonQtWrapper_QGraphicsTextItem::isVisible(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isVisible();
}

bool  PythonQtWrapper_QGraphicsTextItem::isVisibleTo(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  parent) const
{
return theWrappedObject->isVisibleTo(parent);
}

bool  PythonQtWrapper_QGraphicsTextItem::isWidget(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isWidget();
}

bool  PythonQtWrapper_QGraphicsTextItem::isWindow(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->isWindow();
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapFromItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapFromItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapFromItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromParent(path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapFromScene(path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapFromScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapFromScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapFromScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapFromScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapFromScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapFromScene(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const
{
return theWrappedObject->mapToItem(item, path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const
{
return theWrappedObject->mapToItem(item, point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToItem(item, polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const
{
return theWrappedObject->mapToItem(item, rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const
{
return theWrappedObject->mapToItem(item, x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToItem(item, x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToParent(path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToParent(point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToParent(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToParent(rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToParent(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToParent(x, y, w, h);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const
{
return theWrappedObject->mapToScene(path);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const
{
return theWrappedObject->mapToScene(point);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const
{
return theWrappedObject->mapToScene(polygon);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->mapToScene(rect);
}

QPointF  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const
{
return theWrappedObject->mapToScene(x, y);
}

QPolygonF  PythonQtWrapper_QGraphicsTextItem::mapToScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const
{
return theWrappedObject->mapToScene(x, y, w, h);
}

void PythonQtWrapper_QGraphicsTextItem::moveBy(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->moveBy(dx, dy);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::opaqueArea(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->opaqueArea();
}

bool  PythonQtWrapper_QGraphicsTextItem::openExternalLinks(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->openExternalLinks();
}

void PythonQtWrapper_QGraphicsTextItem::paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget)
{
theWrappedObject->paint(painter, option, widget);
}

QGraphicsItem*  PythonQtWrapper_QGraphicsTextItem::parentItem(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->parentItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsTextItem::parentWidget(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->parentWidget();
}

QPointF  PythonQtWrapper_QGraphicsTextItem::pos(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->pos();
}

void PythonQtWrapper_QGraphicsTextItem::removeSceneEventFilter(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  filterItem)
{
theWrappedObject->removeSceneEventFilter(filterItem);
}

void PythonQtWrapper_QGraphicsTextItem::resetTransform(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->resetTransform();
}

void PythonQtWrapper_QGraphicsTextItem::rotate(QGraphicsTextItem* theWrappedObject, qreal  angle)
{
theWrappedObject->rotate(angle);
}

void PythonQtWrapper_QGraphicsTextItem::scale(QGraphicsTextItem* theWrappedObject, qreal  sx, qreal  sy)
{
theWrappedObject->scale(sx, sy);
}

QGraphicsScene*  PythonQtWrapper_QGraphicsTextItem::scene(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->scene();
}

QRectF  PythonQtWrapper_QGraphicsTextItem::sceneBoundingRect(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->sceneBoundingRect();
}

QPointF  PythonQtWrapper_QGraphicsTextItem::scenePos(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->scenePos();
}

QTransform  PythonQtWrapper_QGraphicsTextItem::sceneTransform(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->sceneTransform();
}

void PythonQtWrapper_QGraphicsTextItem::scroll(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect)
{
theWrappedObject->scroll(dx, dy, rect);
}

void PythonQtWrapper_QGraphicsTextItem::setAcceptDrops(QGraphicsTextItem* theWrappedObject, bool  on)
{
theWrappedObject->setAcceptDrops(on);
}

void PythonQtWrapper_QGraphicsTextItem::setAcceptHoverEvents(QGraphicsTextItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsTextItem::setAcceptedMouseButtons(QGraphicsTextItem* theWrappedObject, Qt::MouseButtons  buttons)
{
theWrappedObject->setAcceptedMouseButtons(buttons);
}

void PythonQtWrapper_QGraphicsTextItem::setAcceptsHoverEvents(QGraphicsTextItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setAcceptsHoverEvents(enabled);
}

void PythonQtWrapper_QGraphicsTextItem::setBoundingRegionGranularity(QGraphicsTextItem* theWrappedObject, qreal  granularity)
{
theWrappedObject->setBoundingRegionGranularity(granularity);
}

void PythonQtWrapper_QGraphicsTextItem::setCacheMode(QGraphicsTextItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize)
{
theWrappedObject->setCacheMode(mode, cacheSize);
}

void PythonQtWrapper_QGraphicsTextItem::setCursor(QGraphicsTextItem* theWrappedObject, const QCursor&  cursor)
{
theWrappedObject->setCursor(cursor);
}

void PythonQtWrapper_QGraphicsTextItem::setData(QGraphicsTextItem* theWrappedObject, int  key, const QVariant&  value)
{
theWrappedObject->setData(key, value);
}

void PythonQtWrapper_QGraphicsTextItem::setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c)
{
theWrappedObject->setDefaultTextColor(c);
}

void PythonQtWrapper_QGraphicsTextItem::setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document)
{
theWrappedObject->setDocument(document);
}

void PythonQtWrapper_QGraphicsTextItem::setEnabled(QGraphicsTextItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setEnabled(enabled);
}

void PythonQtWrapper_QGraphicsTextItem::setFlag(QGraphicsTextItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled)
{
theWrappedObject->setFlag(flag, enabled);
}

void PythonQtWrapper_QGraphicsTextItem::setFlags(QGraphicsTextItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags)
{
theWrappedObject->setFlags(flags);
}

void PythonQtWrapper_QGraphicsTextItem::setFocus(QGraphicsTextItem* theWrappedObject, Qt::FocusReason  focusReason)
{
theWrappedObject->setFocus(focusReason);
}

void PythonQtWrapper_QGraphicsTextItem::setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font)
{
theWrappedObject->setFont(font);
}

void PythonQtWrapper_QGraphicsTextItem::setGroup(QGraphicsTextItem* theWrappedObject, QGraphicsItemGroup*  group)
{
theWrappedObject->setGroup(group);
}

void PythonQtWrapper_QGraphicsTextItem::setHandlesChildEvents(QGraphicsTextItem* theWrappedObject, bool  enabled)
{
theWrappedObject->setHandlesChildEvents(enabled);
}

void PythonQtWrapper_QGraphicsTextItem::setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html)
{
theWrappedObject->setHtml(html);
}

void PythonQtWrapper_QGraphicsTextItem::setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open)
{
theWrappedObject->setOpenExternalLinks(open);
}

void PythonQtWrapper_QGraphicsTextItem::setParentItem(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  parent)
{
theWrappedObject->setParentItem(parent);
}

void PythonQtWrapper_QGraphicsTextItem::setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text)
{
theWrappedObject->setPlainText(text);
}

void PythonQtWrapper_QGraphicsTextItem::setPos(QGraphicsTextItem* theWrappedObject, const QPointF&  pos)
{
theWrappedObject->setPos(pos);
}

void PythonQtWrapper_QGraphicsTextItem::setPos(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->setPos(x, y);
}

void PythonQtWrapper_QGraphicsTextItem::setSelected(QGraphicsTextItem* theWrappedObject, bool  selected)
{
theWrappedObject->setSelected(selected);
}

void PythonQtWrapper_QGraphicsTextItem::setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor)
{
theWrappedObject->setTextCursor(cursor);
}

void PythonQtWrapper_QGraphicsTextItem::setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags)
{
theWrappedObject->setTextInteractionFlags(flags);
}

void PythonQtWrapper_QGraphicsTextItem::setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width)
{
theWrappedObject->setTextWidth(width);
}

void PythonQtWrapper_QGraphicsTextItem::setToolTip(QGraphicsTextItem* theWrappedObject, const QString&  toolTip)
{
theWrappedObject->setToolTip(toolTip);
}

void PythonQtWrapper_QGraphicsTextItem::setTransform(QGraphicsTextItem* theWrappedObject, const QTransform&  matrix, bool  combine)
{
theWrappedObject->setTransform(matrix, combine);
}

void PythonQtWrapper_QGraphicsTextItem::setVisible(QGraphicsTextItem* theWrappedObject, bool  visible)
{
theWrappedObject->setVisible(visible);
}

void PythonQtWrapper_QGraphicsTextItem::setZValue(QGraphicsTextItem* theWrappedObject, qreal  z)
{
theWrappedObject->setZValue(z);
}

QPainterPath  PythonQtWrapper_QGraphicsTextItem::shape(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->shape();
}

void PythonQtWrapper_QGraphicsTextItem::shear(QGraphicsTextItem* theWrappedObject, qreal  sh, qreal  sv)
{
theWrappedObject->shear(sh, sv);
}

void PythonQtWrapper_QGraphicsTextItem::show(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->show();
}

QTextCursor  PythonQtWrapper_QGraphicsTextItem::textCursor(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->textCursor();
}

Qt::TextInteractionFlags  PythonQtWrapper_QGraphicsTextItem::textInteractionFlags(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->textInteractionFlags();
}

qreal  PythonQtWrapper_QGraphicsTextItem::textWidth(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->textWidth();
}

QString  PythonQtWrapper_QGraphicsTextItem::toHtml(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->toHtml();
}

QString  PythonQtWrapper_QGraphicsTextItem::toPlainText(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->toPlainText();
}

QString  PythonQtWrapper_QGraphicsTextItem::toolTip(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->toolTip();
}

QGraphicsItem*  PythonQtWrapper_QGraphicsTextItem::topLevelItem(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->topLevelItem();
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsTextItem::topLevelWidget(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->topLevelWidget();
}

QTransform  PythonQtWrapper_QGraphicsTextItem::transform(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->transform();
}

void PythonQtWrapper_QGraphicsTextItem::translate(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy)
{
theWrappedObject->translate(dx, dy);
}

int  PythonQtWrapper_QGraphicsTextItem::type(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->type();
}

void PythonQtWrapper_QGraphicsTextItem::ungrabKeyboard(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->ungrabKeyboard();
}

void PythonQtWrapper_QGraphicsTextItem::ungrabMouse(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->ungrabMouse();
}

void PythonQtWrapper_QGraphicsTextItem::unsetCursor(QGraphicsTextItem* theWrappedObject)
{
theWrappedObject->unsetCursor();
}

void PythonQtWrapper_QGraphicsTextItem::update(QGraphicsTextItem* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->update(rect);
}

void PythonQtWrapper_QGraphicsTextItem::update(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height)
{
theWrappedObject->update(x, y, width, height);
}

QGraphicsWidget*  PythonQtWrapper_QGraphicsTextItem::window(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->window();
}

qreal  PythonQtWrapper_QGraphicsTextItem::x(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->x();
}

qreal  PythonQtWrapper_QGraphicsTextItem::y(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->y();
}

qreal  PythonQtWrapper_QGraphicsTextItem::zValue(QGraphicsTextItem* theWrappedObject) const
{
return theWrappedObject->zValue();
}

