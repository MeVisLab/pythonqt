#ifndef PYTHONQTWRAPPER_QGRAPHICSITEMGROUP_H
#define PYTHONQTWRAPPER_QGRAPHICSITEMGROUP_H

#include <qgraphicsitem.h>
#include <QObject>

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

class PythonQtWrapper_QGraphicsItemGroup : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsItemGroup::Type};
public slots:
QGraphicsItemGroup* new_QGraphicsItemGroup(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItemGroup(QGraphicsItemGroup* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsItemGroup* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsItemGroup* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItemGroup* theWrappedObject) const;
   bool  acceptsHoverEvents(QGraphicsItemGroup* theWrappedObject) const;
   void addToGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   void advance(QGraphicsItemGroup* theWrappedObject, int  phase);
   QRectF  boundingRect(QGraphicsItemGroup* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsItemGroup* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsItemGroup* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItemGroup* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsItemGroup* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItemGroup* theWrappedObject) const;
   void clearFocus(QGraphicsItemGroup* theWrappedObject);
   bool  collidesWithItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsItemGroup* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const;
   QCursor  cursor(QGraphicsItemGroup* theWrappedObject) const;
   QVariant  data(QGraphicsItemGroup* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsItemGroup* theWrappedObject, const QTransform&  viewportTransform) const;
   void ensureVisible(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItemGroup* theWrappedObject) const;
   void grabKeyboard(QGraphicsItemGroup* theWrappedObject);
   void grabMouse(QGraphicsItemGroup* theWrappedObject);
   QGraphicsItemGroup*  group(QGraphicsItemGroup* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsItemGroup* theWrappedObject) const;
   bool  hasCursor(QGraphicsItemGroup* theWrappedObject) const;
   bool  hasFocus(QGraphicsItemGroup* theWrappedObject) const;
   void hide(QGraphicsItemGroup* theWrappedObject);
   void installSceneEventFilter(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isAncestorOf(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QGraphicsItemGroup* theWrappedObject) const;
   bool  isObscured(QGraphicsItemGroup* theWrappedObject) const;
   bool  isObscured(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QGraphicsItemGroup* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsItemGroup* theWrappedObject) const;
   bool  isVisible(QGraphicsItemGroup* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsItemGroup* theWrappedObject) const;
   bool  isWindow(QGraphicsItemGroup* theWrappedObject) const;
   QPainterPath  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsItemGroup* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsItemGroup* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsItemGroup* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsItemGroup* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void moveBy(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QGraphicsItemGroup* theWrappedObject) const;
   void paint(QGraphicsItemGroup* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QGraphicsItem*  parentItem(QGraphicsItemGroup* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsItemGroup* theWrappedObject) const;
   QPointF  pos(QGraphicsItemGroup* theWrappedObject) const;
   void removeFromGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  item);
   void removeSceneEventFilter(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsItemGroup* theWrappedObject);
   void rotate(QGraphicsItemGroup* theWrappedObject, qreal  angle);
   void scale(QGraphicsItemGroup* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsItemGroup* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsItemGroup* theWrappedObject) const;
   QPointF  scenePos(QGraphicsItemGroup* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsItemGroup* theWrappedObject) const;
   void scroll(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QGraphicsItemGroup* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsItemGroup* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled);
   void setBoundingRegionGranularity(QGraphicsItemGroup* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setCursor(QGraphicsItemGroup* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsItemGroup* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsItemGroup* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QGraphicsItemGroup* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsItemGroup* theWrappedObject, Qt::FocusReason  focusReason);
   void setGroup(QGraphicsItemGroup* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsItemGroup* theWrappedObject, bool  enabled);
   void setParentItem(QGraphicsItemGroup* theWrappedObject, QGraphicsItem*  parent);
   void setPos(QGraphicsItemGroup* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y);
   void setSelected(QGraphicsItemGroup* theWrappedObject, bool  selected);
   void setToolTip(QGraphicsItemGroup* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsItemGroup* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setVisible(QGraphicsItemGroup* theWrappedObject, bool  visible);
   void setZValue(QGraphicsItemGroup* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsItemGroup* theWrappedObject) const;
   void shear(QGraphicsItemGroup* theWrappedObject, qreal  sh, qreal  sv);
   void show(QGraphicsItemGroup* theWrappedObject);
   QString  toolTip(QGraphicsItemGroup* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsItemGroup* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsItemGroup* theWrappedObject) const;
   QTransform  transform(QGraphicsItemGroup* theWrappedObject) const;
   void translate(QGraphicsItemGroup* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QGraphicsItemGroup* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsItemGroup* theWrappedObject);
   void ungrabMouse(QGraphicsItemGroup* theWrappedObject);
   void unsetCursor(QGraphicsItemGroup* theWrappedObject);
   void update(QGraphicsItemGroup* theWrappedObject, const QRectF&  rect);
   void update(QGraphicsItemGroup* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QGraphicsItemGroup* theWrappedObject) const;
   qreal  x(QGraphicsItemGroup* theWrappedObject) const;
   qreal  y(QGraphicsItemGroup* theWrappedObject) const;
   qreal  zValue(QGraphicsItemGroup* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSITEMGROUP_H
