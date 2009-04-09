#ifndef PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H

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

class PythonQtWrapper_QGraphicsLineItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsLineItem::Type};
public slots:
QGraphicsLineItem* new_QGraphicsLineItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsLineItem* new_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsLineItem* new_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsLineItem(QGraphicsLineItem* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsLineItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsLineItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsLineItem* theWrappedObject) const;
   bool  acceptsHoverEvents(QGraphicsLineItem* theWrappedObject) const;
   void advance(QGraphicsLineItem* theWrappedObject, int  phase);
   QRectF  boundingRect(QGraphicsLineItem* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsLineItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsLineItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsLineItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsLineItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsLineItem* theWrappedObject) const;
   void clearFocus(QGraphicsLineItem* theWrappedObject);
   bool  collidesWithItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsLineItem* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QCursor  cursor(QGraphicsLineItem* theWrappedObject) const;
   QVariant  data(QGraphicsLineItem* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsLineItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void ensureVisible(QGraphicsLineItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsLineItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsLineItem* theWrappedObject);
   void grabMouse(QGraphicsLineItem* theWrappedObject);
   QGraphicsItemGroup*  group(QGraphicsLineItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsLineItem* theWrappedObject) const;
   bool  hasCursor(QGraphicsLineItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsLineItem* theWrappedObject) const;
   void hide(QGraphicsLineItem* theWrappedObject);
   void installSceneEventFilter(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isAncestorOf(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QGraphicsLineItem* theWrappedObject) const;
   bool  isObscured(QGraphicsLineItem* theWrappedObject) const;
   bool  isObscured(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QGraphicsLineItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsLineItem* theWrappedObject) const;
   bool  isVisible(QGraphicsLineItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsLineItem* theWrappedObject) const;
   bool  isWindow(QGraphicsLineItem* theWrappedObject) const;
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QPainterPath  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsLineItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsLineItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsLineItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void moveBy(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QGraphicsLineItem* theWrappedObject) const;
   void paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QGraphicsItem*  parentItem(QGraphicsLineItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsLineItem* theWrappedObject) const;
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   QPointF  pos(QGraphicsLineItem* theWrappedObject) const;
   void removeSceneEventFilter(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsLineItem* theWrappedObject);
   void rotate(QGraphicsLineItem* theWrappedObject, qreal  angle);
   void scale(QGraphicsLineItem* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsLineItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsLineItem* theWrappedObject) const;
   QPointF  scenePos(QGraphicsLineItem* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsLineItem* theWrappedObject) const;
   void scroll(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QGraphicsLineItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsLineItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsLineItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QGraphicsLineItem* theWrappedObject, bool  enabled);
   void setBoundingRegionGranularity(QGraphicsLineItem* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsLineItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setCursor(QGraphicsLineItem* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsLineItem* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsLineItem* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsLineItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QGraphicsLineItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsLineItem* theWrappedObject, Qt::FocusReason  focusReason);
   void setGroup(QGraphicsLineItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsLineItem* theWrappedObject, bool  enabled);
   void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
   void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setParentItem(QGraphicsLineItem* theWrappedObject, QGraphicsItem*  parent);
   void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
   void setPos(QGraphicsLineItem* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y);
   void setSelected(QGraphicsLineItem* theWrappedObject, bool  selected);
   void setToolTip(QGraphicsLineItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsLineItem* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setVisible(QGraphicsLineItem* theWrappedObject, bool  visible);
   void setZValue(QGraphicsLineItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsLineItem* theWrappedObject) const;
   void shear(QGraphicsLineItem* theWrappedObject, qreal  sh, qreal  sv);
   void show(QGraphicsLineItem* theWrappedObject);
   QString  toolTip(QGraphicsLineItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsLineItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsLineItem* theWrappedObject) const;
   QTransform  transform(QGraphicsLineItem* theWrappedObject) const;
   void translate(QGraphicsLineItem* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QGraphicsLineItem* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsLineItem* theWrappedObject);
   void ungrabMouse(QGraphicsLineItem* theWrappedObject);
   void unsetCursor(QGraphicsLineItem* theWrappedObject);
   void update(QGraphicsLineItem* theWrappedObject, const QRectF&  rect);
   void update(QGraphicsLineItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QGraphicsLineItem* theWrappedObject) const;
   qreal  x(QGraphicsLineItem* theWrappedObject) const;
   qreal  y(QGraphicsLineItem* theWrappedObject) const;
   qreal  zValue(QGraphicsLineItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H
