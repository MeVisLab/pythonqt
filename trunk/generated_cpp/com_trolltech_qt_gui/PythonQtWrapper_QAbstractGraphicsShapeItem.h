#ifndef PYTHONQTWRAPPER_QABSTRACTGRAPHICSSHAPEITEM_H
#define PYTHONQTWRAPPER_QABSTRACTGRAPHICSSHAPEITEM_H

#include <qgraphicsitem.h>
#include <QObject>

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

class PythonQtWrapper_QAbstractGraphicsShapeItem : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractGraphicsShapeItem(QAbstractGraphicsShapeItem* obj) { delete obj; } 
   bool  acceptDrops(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  acceptHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  acceptsHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void advance(QAbstractGraphicsShapeItem* theWrappedObject, int  phase);
   QRectF  boundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QRegion  boundingRegion(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QBrush  brush(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void clearFocus(QAbstractGraphicsShapeItem* theWrappedObject);
   bool  collidesWithItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QAbstractGraphicsShapeItem* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const;
   QCursor  cursor(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QVariant  data(QAbstractGraphicsShapeItem* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void ensureVisible(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void grabKeyboard(QAbstractGraphicsShapeItem* theWrappedObject);
   void grabMouse(QAbstractGraphicsShapeItem* theWrappedObject);
   QGraphicsItemGroup*  group(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  handlesChildEvents(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  hasCursor(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  hasFocus(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void hide(QAbstractGraphicsShapeItem* theWrappedObject);
   void installSceneEventFilter(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isAncestorOf(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isObscured(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isObscured(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isUnderMouse(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isVisible(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isVisibleTo(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QAbstractGraphicsShapeItem* theWrappedObject) const;
   bool  isWindow(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QPainterPath  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QAbstractGraphicsShapeItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void moveBy(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void paint(QAbstractGraphicsShapeItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QGraphicsItem*  parentItem(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QPen  pen(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QPointF  pos(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void removeSceneEventFilter(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QAbstractGraphicsShapeItem* theWrappedObject);
   void rotate(QAbstractGraphicsShapeItem* theWrappedObject, qreal  angle);
   void scale(QAbstractGraphicsShapeItem* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QPointF  scenePos(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QTransform  sceneTransform(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void scroll(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QAbstractGraphicsShapeItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QAbstractGraphicsShapeItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled);
   void setBoundingRegionGranularity(QAbstractGraphicsShapeItem* theWrappedObject, qreal  granularity);
   void setBrush(QAbstractGraphicsShapeItem* theWrappedObject, const QBrush&  brush);
   void setCacheMode(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setCursor(QAbstractGraphicsShapeItem* theWrappedObject, const QCursor&  cursor);
   void setData(QAbstractGraphicsShapeItem* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled);
   void setFlag(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QAbstractGraphicsShapeItem* theWrappedObject, Qt::FocusReason  focusReason);
   void setGroup(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QAbstractGraphicsShapeItem* theWrappedObject, bool  enabled);
   void setParentItem(QAbstractGraphicsShapeItem* theWrappedObject, QGraphicsItem*  parent);
   void setPen(QAbstractGraphicsShapeItem* theWrappedObject, const QPen&  pen);
   void setPos(QAbstractGraphicsShapeItem* theWrappedObject, const QPointF&  pos);
   void setPos(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y);
   void setSelected(QAbstractGraphicsShapeItem* theWrappedObject, bool  selected);
   void setToolTip(QAbstractGraphicsShapeItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QAbstractGraphicsShapeItem* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setVisible(QAbstractGraphicsShapeItem* theWrappedObject, bool  visible);
   void setZValue(QAbstractGraphicsShapeItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void shear(QAbstractGraphicsShapeItem* theWrappedObject, qreal  sh, qreal  sv);
   void show(QAbstractGraphicsShapeItem* theWrappedObject);
   QString  toolTip(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QAbstractGraphicsShapeItem* theWrappedObject) const;
   QTransform  transform(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void translate(QAbstractGraphicsShapeItem* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QAbstractGraphicsShapeItem* theWrappedObject) const;
   void ungrabKeyboard(QAbstractGraphicsShapeItem* theWrappedObject);
   void ungrabMouse(QAbstractGraphicsShapeItem* theWrappedObject);
   void unsetCursor(QAbstractGraphicsShapeItem* theWrappedObject);
   void update(QAbstractGraphicsShapeItem* theWrappedObject, const QRectF&  rect);
   void update(QAbstractGraphicsShapeItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QAbstractGraphicsShapeItem* theWrappedObject) const;
   qreal  x(QAbstractGraphicsShapeItem* theWrappedObject) const;
   qreal  y(QAbstractGraphicsShapeItem* theWrappedObject) const;
   qreal  zValue(QAbstractGraphicsShapeItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QABSTRACTGRAPHICSSHAPEITEM_H
