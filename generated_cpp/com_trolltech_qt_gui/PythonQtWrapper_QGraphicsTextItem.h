#ifndef PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H

#include <qgraphicsitem.h>
#include <QObject>

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

class PythonQtWrapper_QGraphicsTextItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsTextItem::Type};
public slots:
QGraphicsTextItem* new_QGraphicsTextItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsTextItem* new_QGraphicsTextItem(const QString&  text, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsTextItem(QGraphicsTextItem* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsTextItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsTextItem* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsTextItem* theWrappedObject) const;
   bool  acceptsHoverEvents(QGraphicsTextItem* theWrappedObject) const;
   void adjustSize(QGraphicsTextItem* theWrappedObject);
   void advance(QGraphicsTextItem* theWrappedObject, int  phase);
   QRectF  boundingRect(QGraphicsTextItem* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsTextItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsTextItem* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsTextItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsTextItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsTextItem* theWrappedObject) const;
   void clearFocus(QGraphicsTextItem* theWrappedObject);
   bool  collidesWithItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsTextItem* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QCursor  cursor(QGraphicsTextItem* theWrappedObject) const;
   QVariant  data(QGraphicsTextItem* theWrappedObject, int  key) const;
   QColor  defaultTextColor(QGraphicsTextItem* theWrappedObject) const;
   QTransform  deviceTransform(QGraphicsTextItem* theWrappedObject, const QTransform&  viewportTransform) const;
   QTextDocument*  document(QGraphicsTextItem* theWrappedObject) const;
   void ensureVisible(QGraphicsTextItem* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsTextItem* theWrappedObject) const;
   QFont  font(QGraphicsTextItem* theWrappedObject) const;
   void grabKeyboard(QGraphicsTextItem* theWrappedObject);
   void grabMouse(QGraphicsTextItem* theWrappedObject);
   QGraphicsItemGroup*  group(QGraphicsTextItem* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsTextItem* theWrappedObject) const;
   bool  hasCursor(QGraphicsTextItem* theWrappedObject) const;
   bool  hasFocus(QGraphicsTextItem* theWrappedObject) const;
   void hide(QGraphicsTextItem* theWrappedObject);
   void installSceneEventFilter(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isAncestorOf(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QGraphicsTextItem* theWrappedObject) const;
   bool  isObscured(QGraphicsTextItem* theWrappedObject) const;
   bool  isObscured(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QGraphicsTextItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsTextItem* theWrappedObject) const;
   bool  isVisible(QGraphicsTextItem* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsTextItem* theWrappedObject) const;
   bool  isWindow(QGraphicsTextItem* theWrappedObject) const;
   QPainterPath  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsTextItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsTextItem* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsTextItem* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsTextItem* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsTextItem* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void moveBy(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QGraphicsTextItem* theWrappedObject) const;
   bool  openExternalLinks(QGraphicsTextItem* theWrappedObject) const;
   void paint(QGraphicsTextItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QGraphicsItem*  parentItem(QGraphicsTextItem* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsTextItem* theWrappedObject) const;
   QPointF  pos(QGraphicsTextItem* theWrappedObject) const;
   void removeSceneEventFilter(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsTextItem* theWrappedObject);
   void rotate(QGraphicsTextItem* theWrappedObject, qreal  angle);
   void scale(QGraphicsTextItem* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsTextItem* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsTextItem* theWrappedObject) const;
   QPointF  scenePos(QGraphicsTextItem* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsTextItem* theWrappedObject) const;
   void scroll(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QGraphicsTextItem* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsTextItem* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsTextItem* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QGraphicsTextItem* theWrappedObject, bool  enabled);
   void setBoundingRegionGranularity(QGraphicsTextItem* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsTextItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setCursor(QGraphicsTextItem* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsTextItem* theWrappedObject, int  key, const QVariant&  value);
   void setDefaultTextColor(QGraphicsTextItem* theWrappedObject, const QColor&  c);
   void setDocument(QGraphicsTextItem* theWrappedObject, QTextDocument*  document);
   void setEnabled(QGraphicsTextItem* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsTextItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QGraphicsTextItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsTextItem* theWrappedObject, Qt::FocusReason  focusReason);
   void setFont(QGraphicsTextItem* theWrappedObject, const QFont&  font);
   void setGroup(QGraphicsTextItem* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsTextItem* theWrappedObject, bool  enabled);
   void setHtml(QGraphicsTextItem* theWrappedObject, const QString&  html);
   void setOpenExternalLinks(QGraphicsTextItem* theWrappedObject, bool  open);
   void setParentItem(QGraphicsTextItem* theWrappedObject, QGraphicsItem*  parent);
   void setPlainText(QGraphicsTextItem* theWrappedObject, const QString&  text);
   void setPos(QGraphicsTextItem* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y);
   void setSelected(QGraphicsTextItem* theWrappedObject, bool  selected);
   void setTextCursor(QGraphicsTextItem* theWrappedObject, const QTextCursor&  cursor);
   void setTextInteractionFlags(QGraphicsTextItem* theWrappedObject, Qt::TextInteractionFlags  flags);
   void setTextWidth(QGraphicsTextItem* theWrappedObject, qreal  width);
   void setToolTip(QGraphicsTextItem* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsTextItem* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setVisible(QGraphicsTextItem* theWrappedObject, bool  visible);
   void setZValue(QGraphicsTextItem* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsTextItem* theWrappedObject) const;
   void shear(QGraphicsTextItem* theWrappedObject, qreal  sh, qreal  sv);
   void show(QGraphicsTextItem* theWrappedObject);
   QTextCursor  textCursor(QGraphicsTextItem* theWrappedObject) const;
   Qt::TextInteractionFlags  textInteractionFlags(QGraphicsTextItem* theWrappedObject) const;
   qreal  textWidth(QGraphicsTextItem* theWrappedObject) const;
   QString  toHtml(QGraphicsTextItem* theWrappedObject) const;
   QString  toPlainText(QGraphicsTextItem* theWrappedObject) const;
   QString  toolTip(QGraphicsTextItem* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsTextItem* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsTextItem* theWrappedObject) const;
   QTransform  transform(QGraphicsTextItem* theWrappedObject) const;
   void translate(QGraphicsTextItem* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QGraphicsTextItem* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsTextItem* theWrappedObject);
   void ungrabMouse(QGraphicsTextItem* theWrappedObject);
   void unsetCursor(QGraphicsTextItem* theWrappedObject);
   void update(QGraphicsTextItem* theWrappedObject, const QRectF&  rect);
   void update(QGraphicsTextItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QGraphicsTextItem* theWrappedObject) const;
   qreal  x(QGraphicsTextItem* theWrappedObject) const;
   qreal  y(QGraphicsTextItem* theWrappedObject) const;
   qreal  zValue(QGraphicsTextItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSTEXTITEM_H
