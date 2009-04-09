#ifndef PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H

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
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtWrapper_QGraphicsPixmapItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ShapeMode enum_1 )
enum ShapeMode{
  MaskShape = QGraphicsPixmapItem::MaskShape,   BoundingRectShape = QGraphicsPixmapItem::BoundingRectShape,   HeuristicMaskShape = QGraphicsPixmapItem::HeuristicMaskShape};
enum enum_1{
  Type = QGraphicsPixmapItem::Type};
public slots:
QGraphicsPixmapItem* new_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPixmapItem* new_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPixmapItem(QGraphicsPixmapItem* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsPixmapItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsPixmapItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsPixmapItem* theWrappedObject) const;
   bool  acceptsHoverEvents(QGraphicsPixmapItem* theWrappedObject) const;
   void advance(QGraphicsPixmapItem* theWrappedObject, int  phase);
   QRectF  boundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsPixmapItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsPixmapItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsPixmapItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   void clearFocus(QGraphicsPixmapItem* theWrappedObject);
   bool  collidesWithItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsPixmapItem* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QCursor  cursor(QGraphicsPixmapItem* theWrappedObject) const;
   QVariant  data(QGraphicsPixmapItem* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsPixmapItem* theWrappedObject, const QTransform&  viewportTransform) const;
   void ensureVisible(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsPixmapItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsPixmapItem* theWrappedObject);
   void grabMouse(QGraphicsPixmapItem* theWrappedObject);
   QGraphicsItemGroup*  group(QGraphicsPixmapItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsPixmapItem* theWrappedObject) const;
   bool  hasCursor(QGraphicsPixmapItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsPixmapItem* theWrappedObject) const;
   void hide(QGraphicsPixmapItem* theWrappedObject);
   void installSceneEventFilter(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isAncestorOf(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isObscured(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isObscured(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isVisible(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isWindow(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsPixmapItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void moveBy(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy);
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsPixmapItem* theWrappedObject) const;
   void paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QGraphicsItem*  parentItem(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsPixmapItem* theWrappedObject) const;
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   QPointF  pos(QGraphicsPixmapItem* theWrappedObject) const;
   void removeSceneEventFilter(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsPixmapItem* theWrappedObject);
   void rotate(QGraphicsPixmapItem* theWrappedObject, qreal  angle);
   void scale(QGraphicsPixmapItem* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsPixmapItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   QPointF  scenePos(QGraphicsPixmapItem* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsPixmapItem* theWrappedObject) const;
   void scroll(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QGraphicsPixmapItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsPixmapItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled);
   void setBoundingRegionGranularity(QGraphicsPixmapItem* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setCursor(QGraphicsPixmapItem* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsPixmapItem* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsPixmapItem* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsPixmapItem* theWrappedObject, Qt::FocusReason  focusReason);
   void setGroup(QGraphicsPixmapItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsPixmapItem* theWrappedObject, bool  enabled);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setParentItem(QGraphicsPixmapItem* theWrappedObject, QGraphicsItem*  parent);
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   void setPos(QGraphicsPixmapItem* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
   void setSelected(QGraphicsPixmapItem* theWrappedObject, bool  selected);
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   void setToolTip(QGraphicsPixmapItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsPixmapItem* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   void setVisible(QGraphicsPixmapItem* theWrappedObject, bool  visible);
   void setZValue(QGraphicsPixmapItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   void shear(QGraphicsPixmapItem* theWrappedObject, qreal  sh, qreal  sv);
   void show(QGraphicsPixmapItem* theWrappedObject);
   QString  toolTip(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsPixmapItem* theWrappedObject) const;
   QTransform  transform(QGraphicsPixmapItem* theWrappedObject) const;
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   void translate(QGraphicsPixmapItem* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QGraphicsPixmapItem* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsPixmapItem* theWrappedObject);
   void ungrabMouse(QGraphicsPixmapItem* theWrappedObject);
   void unsetCursor(QGraphicsPixmapItem* theWrappedObject);
   void update(QGraphicsPixmapItem* theWrappedObject, const QRectF&  rect);
   void update(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QGraphicsPixmapItem* theWrappedObject) const;
   qreal  x(QGraphicsPixmapItem* theWrappedObject) const;
   qreal  y(QGraphicsPixmapItem* theWrappedObject) const;
   qreal  zValue(QGraphicsPixmapItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H
