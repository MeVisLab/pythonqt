#ifndef PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
#define PYTHONQTWRAPPER_QGRAPHICSWIDGET_H

#include <qgraphicswidget.h>
#include <QObject>

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

class PythonQtWrapper_QGraphicsWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsWidget::Type};
public slots:
QGraphicsWidget* new_QGraphicsWidget(QGraphicsItem*  parent = 0, Qt::WindowFlags  wFlags = 0);
void delete_QGraphicsWidget(QGraphicsWidget* obj) { delete obj; } 
   bool  acceptDrops(QGraphicsWidget* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsWidget* theWrappedObject) const;
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsWidget* theWrappedObject) const;
   bool  acceptsHoverEvents(QGraphicsWidget* theWrappedObject) const;
   void adjustSize(QGraphicsWidget* theWrappedObject);
   void advance(QGraphicsWidget* theWrappedObject, int  phase);
   QRectF  boundingRect(QGraphicsWidget* theWrappedObject) const;
   QRegion  boundingRegion(QGraphicsWidget* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   qreal  boundingRegionGranularity(QGraphicsWidget* theWrappedObject) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsWidget* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsWidget* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsWidget* theWrappedObject) const;
   void clearFocus(QGraphicsWidget* theWrappedObject);
   bool  collidesWithItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
   bool  collidesWithPath(QGraphicsWidget* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsWidget* theWrappedObject, Qt::ItemSelectionMode  mode) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  other) const;
   bool  contains(QGraphicsWidget* theWrappedObject, const QPointF&  point) const;
   QRectF  contentsRect(QGraphicsWidget* theWrappedObject) const;
   QCursor  cursor(QGraphicsWidget* theWrappedObject) const;
   QVariant  data(QGraphicsWidget* theWrappedObject, int  key) const;
   QTransform  deviceTransform(QGraphicsWidget* theWrappedObject, const QTransform&  viewportTransform) const;
   QSizeF  effectiveSizeHint(QGraphicsWidget* theWrappedObject, Qt::SizeHint  which, const QSizeF&  constraint) const;
   void ensureVisible(QGraphicsWidget* theWrappedObject, const QRectF&  rect, int  xmargin, int  ymargin);
   void ensureVisible(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin, int  ymargin);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsWidget* theWrappedObject) const;
   Qt::FocusPolicy  focusPolicy(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  focusWidget(QGraphicsWidget* theWrappedObject) const;
   QFont  font(QGraphicsWidget* theWrappedObject) const;
   QRectF  geometry(QGraphicsWidget* theWrappedObject) const;
   void getContentsMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void getWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal*  left, qreal*  top, qreal*  right, qreal*  bottom) const;
   void grabKeyboard(QGraphicsWidget* theWrappedObject);
   void grabMouse(QGraphicsWidget* theWrappedObject);
   QGraphicsItemGroup*  group(QGraphicsWidget* theWrappedObject) const;
   bool  handlesChildEvents(QGraphicsWidget* theWrappedObject) const;
   bool  hasCursor(QGraphicsWidget* theWrappedObject) const;
   bool  hasFocus(QGraphicsWidget* theWrappedObject) const;
   void hide(QGraphicsWidget* theWrappedObject);
   void installSceneEventFilter(QGraphicsWidget* theWrappedObject, QGraphicsItem*  filterItem);
   bool  isActiveWindow(QGraphicsWidget* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  child) const;
   bool  isEnabled(QGraphicsWidget* theWrappedObject) const;
   bool  isLayout(QGraphicsWidget* theWrappedObject) const;
   bool  isObscured(QGraphicsWidget* theWrappedObject) const;
   bool  isObscured(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const;
   bool  isObscured(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  isObscuredBy(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item) const;
   bool  isSelected(QGraphicsWidget* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsWidget* theWrappedObject) const;
   bool  isVisible(QGraphicsWidget* theWrappedObject) const;
   bool  isVisibleTo(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  parent) const;
   bool  isWidget(QGraphicsWidget* theWrappedObject) const;
   bool  isWindow(QGraphicsWidget* theWrappedObject) const;
   QGraphicsLayout*  layout(QGraphicsWidget* theWrappedObject) const;
   Qt::LayoutDirection  layoutDirection(QGraphicsWidget* theWrappedObject) const;
   QPainterPath  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapFromItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromParent(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromParent(QGraphicsWidget* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromParent(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromParent(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapFromScene(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapFromScene(QGraphicsWidget* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapFromScene(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapFromScene(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapFromScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapFromScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPointF  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPolygonF  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QPolygonF  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPointF  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToItem(QGraphicsWidget* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToParent(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToParent(QGraphicsWidget* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToParent(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToParent(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToParent(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPainterPath  mapToScene(QGraphicsWidget* theWrappedObject, const QPainterPath&  path) const;
   QPointF  mapToScene(QGraphicsWidget* theWrappedObject, const QPointF&  point) const;
   QPolygonF  mapToScene(QGraphicsWidget* theWrappedObject, const QPolygonF&  polygon) const;
   QPolygonF  mapToScene(QGraphicsWidget* theWrappedObject, const QRectF&  rect) const;
   QPointF  mapToScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   qreal  maximumHeight(QGraphicsWidget* theWrappedObject) const;
   QSizeF  maximumSize(QGraphicsWidget* theWrappedObject) const;
   qreal  maximumWidth(QGraphicsWidget* theWrappedObject) const;
   qreal  minimumHeight(QGraphicsWidget* theWrappedObject) const;
   QSizeF  minimumSize(QGraphicsWidget* theWrappedObject) const;
   qreal  minimumWidth(QGraphicsWidget* theWrappedObject) const;
   void moveBy(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy);
   QPainterPath  opaqueArea(QGraphicsWidget* theWrappedObject) const;
   void paint(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   void paintWindowFrame(QGraphicsWidget* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QPalette  palette(QGraphicsWidget* theWrappedObject) const;
   QGraphicsItem*  parentItem(QGraphicsWidget* theWrappedObject) const;
   QGraphicsLayoutItem*  parentLayoutItem(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  parentWidget(QGraphicsWidget* theWrappedObject) const;
   QPointF  pos(QGraphicsWidget* theWrappedObject) const;
   qreal  preferredHeight(QGraphicsWidget* theWrappedObject) const;
   QSizeF  preferredSize(QGraphicsWidget* theWrappedObject) const;
   qreal  preferredWidth(QGraphicsWidget* theWrappedObject) const;
   QRectF  rect(QGraphicsWidget* theWrappedObject) const;
   void removeSceneEventFilter(QGraphicsWidget* theWrappedObject, QGraphicsItem*  filterItem);
   void resetTransform(QGraphicsWidget* theWrappedObject);
   void resize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void resize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void rotate(QGraphicsWidget* theWrappedObject, qreal  angle);
   void scale(QGraphicsWidget* theWrappedObject, qreal  sx, qreal  sy);
   QGraphicsScene*  scene(QGraphicsWidget* theWrappedObject) const;
   QRectF  sceneBoundingRect(QGraphicsWidget* theWrappedObject) const;
   QPointF  scenePos(QGraphicsWidget* theWrappedObject) const;
   QTransform  sceneTransform(QGraphicsWidget* theWrappedObject) const;
   void scroll(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect);
   void setAcceptDrops(QGraphicsWidget* theWrappedObject, bool  on);
   void setAcceptHoverEvents(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setAcceptedMouseButtons(QGraphicsWidget* theWrappedObject, Qt::MouseButtons  buttons);
   void setAcceptsHoverEvents(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute, bool  on = true);
   void setBoundingRegionGranularity(QGraphicsWidget* theWrappedObject, qreal  granularity);
   void setCacheMode(QGraphicsWidget* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize);
   void setContentsMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setCursor(QGraphicsWidget* theWrappedObject, const QCursor&  cursor);
   void setData(QGraphicsWidget* theWrappedObject, int  key, const QVariant&  value);
   void setEnabled(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setFlag(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled);
   void setFlags(QGraphicsWidget* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   void setFocus(QGraphicsWidget* theWrappedObject, Qt::FocusReason  focusReason);
   void setFocusPolicy(QGraphicsWidget* theWrappedObject, Qt::FocusPolicy  policy);
   void setFont(QGraphicsWidget* theWrappedObject, const QFont&  font);
   void setGeometry(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   void setGeometry(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setGroup(QGraphicsWidget* theWrappedObject, QGraphicsItemGroup*  group);
   void setHandlesChildEvents(QGraphicsWidget* theWrappedObject, bool  enabled);
   void setLayout(QGraphicsWidget* theWrappedObject, QGraphicsLayout*  layout);
   void setLayoutDirection(QGraphicsWidget* theWrappedObject, Qt::LayoutDirection  direction);
   void setMaximumHeight(QGraphicsWidget* theWrappedObject, qreal  height);
   void setMaximumSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void setMaximumSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void setMaximumWidth(QGraphicsWidget* theWrappedObject, qreal  width);
   void setMinimumHeight(QGraphicsWidget* theWrappedObject, qreal  height);
   void setMinimumSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void setMinimumSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void setMinimumWidth(QGraphicsWidget* theWrappedObject, qreal  width);
   void setPalette(QGraphicsWidget* theWrappedObject, const QPalette&  palette);
   void setParentItem(QGraphicsWidget* theWrappedObject, QGraphicsItem*  parent);
   void setParentLayoutItem(QGraphicsWidget* theWrappedObject, QGraphicsLayoutItem*  parent);
   void setPos(QGraphicsWidget* theWrappedObject, const QPointF&  pos);
   void setPos(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y);
   void setPreferredHeight(QGraphicsWidget* theWrappedObject, qreal  height);
   void setPreferredSize(QGraphicsWidget* theWrappedObject, const QSizeF&  size);
   void setPreferredSize(QGraphicsWidget* theWrappedObject, qreal  w, qreal  h);
   void setPreferredWidth(QGraphicsWidget* theWrappedObject, qreal  width);
   void setSelected(QGraphicsWidget* theWrappedObject, bool  selected);
   void setSizePolicy(QGraphicsWidget* theWrappedObject, QSizePolicy::Policy  hPolicy, QSizePolicy::Policy  vPolicy, QSizePolicy::ControlType  controlType);
   void setSizePolicy(QGraphicsWidget* theWrappedObject, const QSizePolicy&  policy);
   void setStyle(QGraphicsWidget* theWrappedObject, QStyle*  style);
   void static_QGraphicsWidget_setTabOrder(QGraphicsWidget*  first, QGraphicsWidget*  second);
   void setToolTip(QGraphicsWidget* theWrappedObject, const QString&  toolTip);
   void setTransform(QGraphicsWidget* theWrappedObject, const QTransform&  matrix, bool  combine);
   void setVisible(QGraphicsWidget* theWrappedObject, bool  visible);
   void setWindowFlags(QGraphicsWidget* theWrappedObject, Qt::WindowFlags  wFlags);
   void setWindowFrameMargins(QGraphicsWidget* theWrappedObject, qreal  left, qreal  top, qreal  right, qreal  bottom);
   void setWindowTitle(QGraphicsWidget* theWrappedObject, const QString&  title);
   void setZValue(QGraphicsWidget* theWrappedObject, qreal  z);
   QPainterPath  shape(QGraphicsWidget* theWrappedObject) const;
   void shear(QGraphicsWidget* theWrappedObject, qreal  sh, qreal  sv);
   void show(QGraphicsWidget* theWrappedObject);
   QSizeF  size(QGraphicsWidget* theWrappedObject) const;
   QSizePolicy  sizePolicy(QGraphicsWidget* theWrappedObject) const;
   QStyle*  style(QGraphicsWidget* theWrappedObject) const;
   bool  testAttribute(QGraphicsWidget* theWrappedObject, Qt::WidgetAttribute  attribute) const;
   QString  toolTip(QGraphicsWidget* theWrappedObject) const;
   QGraphicsItem*  topLevelItem(QGraphicsWidget* theWrappedObject) const;
   QGraphicsWidget*  topLevelWidget(QGraphicsWidget* theWrappedObject) const;
   QTransform  transform(QGraphicsWidget* theWrappedObject) const;
   void translate(QGraphicsWidget* theWrappedObject, qreal  dx, qreal  dy);
   int  type(QGraphicsWidget* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsWidget* theWrappedObject);
   void ungrabMouse(QGraphicsWidget* theWrappedObject);
   void unsetCursor(QGraphicsWidget* theWrappedObject);
   void unsetLayoutDirection(QGraphicsWidget* theWrappedObject);
   void unsetWindowFrameMargins(QGraphicsWidget* theWrappedObject);
   void update(QGraphicsWidget* theWrappedObject, const QRectF&  rect);
   void update(QGraphicsWidget* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   QGraphicsWidget*  window(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowFlags  windowFlags(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameGeometry(QGraphicsWidget* theWrappedObject) const;
   QRectF  windowFrameRect(QGraphicsWidget* theWrappedObject) const;
   QString  windowTitle(QGraphicsWidget* theWrappedObject) const;
   Qt::WindowType  windowType(QGraphicsWidget* theWrappedObject) const;
   qreal  x(QGraphicsWidget* theWrappedObject) const;
   qreal  y(QGraphicsWidget* theWrappedObject) const;
   qreal  zValue(QGraphicsWidget* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSWIDGET_H
