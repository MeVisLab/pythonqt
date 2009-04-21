#ifndef PYTHONQTWRAPPER_QGRAPHICSITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtShell_QGraphicsItem : public QGraphicsItem
{
public:
    PythonQtShell_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsItem(parent, scene),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
virtual bool  contains(const QPointF&  point) const;
virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event);
virtual void dragEnterEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dragMoveEvent(QGraphicsSceneDragDropEvent*  event);
virtual void dropEvent(QGraphicsSceneDragDropEvent*  event);
virtual QVariant  extension(const QVariant&  variant) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual void focusOutEvent(QFocusEvent*  event);
virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event);
virtual void hoverMoveEvent(QGraphicsSceneHoverEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseMoveEvent(QGraphicsSceneMouseEvent*  event);
virtual void mousePressEvent(QGraphicsSceneMouseEvent*  event);
virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event);
virtual QPainterPath  opaqueArea() const;
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual void setExtension(QGraphicsItem::Extension  extension, const QVariant&  variant);
virtual QPainterPath  shape() const;
virtual bool  supportsExtension(QGraphicsItem::Extension  extension) const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsItem : public QGraphicsItem
{ public:
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsItem::contains(point); }
inline void promoted_keyReleaseEvent(QKeyEvent*  event) { QGraphicsItem::keyReleaseEvent(event); }
inline bool  promoted_sceneEvent(QEvent*  event) { return QGraphicsItem::sceneEvent(event); }
inline void promoted_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseDoubleClickEvent(event); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  query) const { return QGraphicsItem::inputMethodQuery(query); }
inline void promoted_dragEnterEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragEnterEvent(event); }
inline void promoted_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseReleaseEvent(event); }
inline void promoted_keyPressEvent(QKeyEvent*  event) { QGraphicsItem::keyPressEvent(event); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsItem::opaqueArea(); }
inline void promoted_mousePressEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mousePressEvent(event); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsItem::isObscuredBy(item); }
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return QGraphicsItem::itemChange(change, value); }
inline void promoted_mouseMoveEvent(QGraphicsSceneMouseEvent*  event) { QGraphicsItem::mouseMoveEvent(event); }
inline void promoted_focusOutEvent(QFocusEvent*  event) { QGraphicsItem::focusOutEvent(event); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  event) { QGraphicsItem::inputMethodEvent(event); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QGraphicsItem::focusInEvent(event); }
inline void promoted_hoverEnterEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverEnterEvent(event); }
inline QPainterPath  promoted_shape() const { return QGraphicsItem::shape(); }
inline void promoted_wheelEvent(QGraphicsSceneWheelEvent*  event) { QGraphicsItem::wheelEvent(event); }
inline bool  promoted_collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithPath(path, mode); }
inline void promoted_advance(int  phase) { QGraphicsItem::advance(phase); }
inline void promoted_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverLeaveEvent(event); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsItem::extension(variant); }
inline bool  promoted_collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const { return QGraphicsItem::collidesWithItem(other, mode); }
inline void promoted_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event) { QGraphicsItem::contextMenuEvent(event); }
inline void promoted_dropEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dropEvent(event); }
inline int  promoted_type() const { return QGraphicsItem::type(); }
inline void promoted_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragLeaveEvent(event); }
inline void promoted_dragMoveEvent(QGraphicsSceneDragDropEvent*  event) { QGraphicsItem::dragMoveEvent(event); }
inline void promoted_hoverMoveEvent(QGraphicsSceneHoverEvent*  event) { QGraphicsItem::hoverMoveEvent(event); }
inline bool  promoted_sceneEventFilter(QGraphicsItem*  watched, QEvent*  event) { return QGraphicsItem::sceneEventFilter(watched, event); }
};

class PythonQtWrapper_QGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CacheMode enum_1 GraphicsItemFlag GraphicsItemChange )
enum CacheMode{
  NoCache = QGraphicsItem::NoCache,   ItemCoordinateCache = QGraphicsItem::ItemCoordinateCache,   DeviceCoordinateCache = QGraphicsItem::DeviceCoordinateCache};
enum enum_1{
  Type = QGraphicsItem::Type,   UserType = QGraphicsItem::UserType};
enum GraphicsItemFlag{
  ItemIsMovable = QGraphicsItem::ItemIsMovable,   ItemIsSelectable = QGraphicsItem::ItemIsSelectable,   ItemIsFocusable = QGraphicsItem::ItemIsFocusable,   ItemClipsToShape = QGraphicsItem::ItemClipsToShape,   ItemClipsChildrenToShape = QGraphicsItem::ItemClipsChildrenToShape,   ItemIgnoresTransformations = QGraphicsItem::ItemIgnoresTransformations};
enum GraphicsItemChange{
  ItemPositionChange = QGraphicsItem::ItemPositionChange,   ItemMatrixChange = QGraphicsItem::ItemMatrixChange,   ItemVisibleChange = QGraphicsItem::ItemVisibleChange,   ItemEnabledChange = QGraphicsItem::ItemEnabledChange,   ItemSelectedChange = QGraphicsItem::ItemSelectedChange,   ItemParentChange = QGraphicsItem::ItemParentChange,   ItemChildAddedChange = QGraphicsItem::ItemChildAddedChange,   ItemChildRemovedChange = QGraphicsItem::ItemChildRemovedChange,   ItemTransformChange = QGraphicsItem::ItemTransformChange,   ItemPositionHasChanged = QGraphicsItem::ItemPositionHasChanged,   ItemTransformHasChanged = QGraphicsItem::ItemTransformHasChanged,   ItemSceneChange = QGraphicsItem::ItemSceneChange,   ItemVisibleHasChanged = QGraphicsItem::ItemVisibleHasChanged,   ItemEnabledHasChanged = QGraphicsItem::ItemEnabledHasChanged,   ItemSelectedHasChanged = QGraphicsItem::ItemSelectedHasChanged,   ItemParentHasChanged = QGraphicsItem::ItemParentHasChanged,   ItemSceneHasChanged = QGraphicsItem::ItemSceneHasChanged,   ItemCursorChange = QGraphicsItem::ItemCursorChange,   ItemCursorHasChanged = QGraphicsItem::ItemCursorHasChanged,   ItemToolTipChange = QGraphicsItem::ItemToolTipChange,   ItemToolTipHasChanged = QGraphicsItem::ItemToolTipHasChanged,   ItemFlagsChange = QGraphicsItem::ItemFlagsChange,   ItemFlagsHaveChanged = QGraphicsItem::ItemFlagsHaveChanged,   ItemZValueChange = QGraphicsItem::ItemZValueChange,   ItemZValueHasChanged = QGraphicsItem::ItemZValueHasChanged};
public slots:
QGraphicsItem* new_QGraphicsItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsItem(QGraphicsItem* obj) { delete obj; } 
bool hasOwner(QGraphicsItem* theWrappedObject) { return theWrappedObject->scene()!=NULL || theWrappedObject->parentItem()!=NULL; }
   bool  contains(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPainterPath  mapToParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   qreal  y(QGraphicsItem* theWrappedObject) const;
   void keyReleaseEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   void grabKeyboard(QGraphicsItem* theWrappedObject);
   bool  sceneEvent(QGraphicsItem* theWrappedObject, QEvent*  event);
   void setFlag(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlag  flag, bool  enabled = true);
   qreal  zValue(QGraphicsItem* theWrappedObject) const;
   void setVisible(QGraphicsItem* theWrappedObject, bool  visible);
   void show(QGraphicsItem* theWrappedObject);
   void setBoundingRegionGranularity(QGraphicsItem* theWrappedObject, qreal  granularity);
   bool  isEnabled(QGraphicsItem* theWrappedObject) const;
   void mouseDoubleClickEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QVariant  data(QGraphicsItem* theWrappedObject, int  key) const;
   QGraphicsItemGroup*  group(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void setGroup(QGraphicsItem* theWrappedObject, QGraphicsItemGroup*  group);
   QPainterPath  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QTransform  transform(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPointF&  point) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   QPointF  mapToScene(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   QVariant  inputMethodQuery(QGraphicsItem* theWrappedObject, Qt::InputMethodQuery  query) const;
   void dragEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void unsetCursor(QGraphicsItem* theWrappedObject);
   void setFocus(QGraphicsItem* theWrappedObject, Qt::FocusReason  focusReason = Qt::OtherFocusReason);
   QRectF  sceneBoundingRect(QGraphicsItem* theWrappedObject) const;
   void mouseReleaseEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void keyPressEvent(QGraphicsItem* theWrappedObject, QKeyEvent*  event);
   QPointF  pos(QGraphicsItem* theWrappedObject) const;
   bool  acceptHoverEvents(QGraphicsItem* theWrappedObject) const;
   void setHandlesChildEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void scroll(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy, const QRectF&  rect = QRectF());
   void setAcceptsHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   void setSelected(QGraphicsItem* theWrappedObject, bool  selected);
   QPainterPath  mapFromScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void setPos(QGraphicsItem* theWrappedObject, const QPointF&  pos);
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPainterPath  opaqueArea(QGraphicsItem* theWrappedObject) const;
   void mousePressEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   QGraphicsWidget*  parentWidget(QGraphicsItem* theWrappedObject) const;
   void setAcceptDrops(QGraphicsItem* theWrappedObject, bool  on);
   Qt::MouseButtons  acceptedMouseButtons(QGraphicsItem* theWrappedObject) const;
   QPointF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void translate(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   qreal  x(QGraphicsItem* theWrappedObject) const;
   QRectF  childrenBoundingRect(QGraphicsItem* theWrappedObject) const;
   QString  toolTip(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QRectF&  rect) const;
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void setAcceptHoverEvents(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsItem*  parentItem(QGraphicsItem* theWrappedObject) const;
   void update(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  width, qreal  height);
   void setToolTip(QGraphicsItem* theWrappedObject, const QString&  toolTip);
   bool  isObscured(QGraphicsItem* theWrappedObject) const;
   bool  isUnderMouse(QGraphicsItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   bool  isVisibleTo(QGraphicsItem* theWrappedObject, const QGraphicsItem*  parent) const;
   QVariant  itemChange(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   void setEnabled(QGraphicsItem* theWrappedObject, bool  enabled);
   QGraphicsWidget*  topLevelWidget(QGraphicsItem* theWrappedObject) const;
   void hide(QGraphicsItem* theWrappedObject);
   void mouseMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneMouseEvent*  event);
   bool  isVisible(QGraphicsItem* theWrappedObject) const;
   void grabMouse(QGraphicsItem* theWrappedObject);
   bool  isSelected(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   QGraphicsItem*  topLevelItem(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  collidingItems(QGraphicsItem* theWrappedObject, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void clearFocus(QGraphicsItem* theWrappedObject);
   QPolygonF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void scale(QGraphicsItem* theWrappedObject, qreal  sx, qreal  sy);
   void setZValue(QGraphicsItem* theWrappedObject, qreal  z);
   void focusOutEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   bool  handlesChildEvents(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromScene(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   bool  acceptDrops(QGraphicsItem* theWrappedObject) const;
   void inputMethodEvent(QGraphicsItem* theWrappedObject, QInputMethodEvent*  event);
   bool  acceptsHoverEvents(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPolygonF&  polygon) const;
   void focusInEvent(QGraphicsItem* theWrappedObject, QFocusEvent*  event);
   void ungrabMouse(QGraphicsItem* theWrappedObject);
   QGraphicsItem::GraphicsItemFlags  flags(QGraphicsItem* theWrappedObject) const;
   void setCursor(QGraphicsItem* theWrappedObject, const QCursor&  cursor);
   QPainterPath  mapFromParent(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void hoverEnterEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   void ensureVisible(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xmargin = 50, int  ymargin = 50);
   void ensureVisible(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF(), int  xmargin = 50, int  ymargin = 50);
   bool  isObscured(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setFlags(QGraphicsItem* theWrappedObject, QGraphicsItem::GraphicsItemFlags  flags);
   QPainterPath  shape(QGraphicsItem* theWrappedObject) const;
   void ungrabKeyboard(QGraphicsItem* theWrappedObject);
   void wheelEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneWheelEvent*  event);
   QPainterPath  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, const QPainterPath&  path) const;
   bool  collidesWithPath(QGraphicsItem* theWrappedObject, const QPainterPath&  path, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   void setParentItem(QGraphicsItem* theWrappedObject, QGraphicsItem*  parent);
   QPainterPath  mapToScene(QGraphicsItem* theWrappedObject, const QPainterPath&  path) const;
   void resetTransform(QGraphicsItem* theWrappedObject);
   QPointF  scenePos(QGraphicsItem* theWrappedObject) const;
   QPointF  mapToItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   QPolygonF  mapToScene(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void moveBy(QGraphicsItem* theWrappedObject, qreal  dx, qreal  dy);
   void setCacheMode(QGraphicsItem* theWrappedObject, QGraphicsItem::CacheMode  mode, const QSize&  cacheSize = QSize());
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y) const;
   void advance(QGraphicsItem* theWrappedObject, int  phase);
   QPointF  mapFromItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  item, qreal  x, qreal  y) const;
   void hoverLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   bool  isObscured(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void update(QGraphicsItem* theWrappedObject, const QRectF&  rect = QRectF());
   bool  isWidget(QGraphicsItem* theWrappedObject) const;
   QVariant  extension(QGraphicsItem* theWrappedObject, const QVariant&  variant) const;
   QGraphicsItem*  commonAncestorItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other) const;
   QGraphicsItem::CacheMode  cacheMode(QGraphicsItem* theWrappedObject) const;
   void installSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   QGraphicsWidget*  window(QGraphicsItem* theWrappedObject) const;
   void setData(QGraphicsItem* theWrappedObject, int  key, const QVariant&  value);
   void setPos(QGraphicsItem* theWrappedObject, qreal  x, qreal  y);
   void removeSceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  filterItem);
   QGraphicsScene*  scene(QGraphicsItem* theWrappedObject) const;
   bool  collidesWithItem(QGraphicsItem* theWrappedObject, const QGraphicsItem*  other, Qt::ItemSelectionMode  mode = Qt::IntersectsItemShape) const;
   bool  hasFocus(QGraphicsItem* theWrappedObject) const;
   void contextMenuEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneContextMenuEvent*  event);
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, const QRectF&  rect) const;
   void dropEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QTransform  sceneTransform(QGraphicsItem* theWrappedObject) const;
   QList<QGraphicsItem* >  childItems(QGraphicsItem* theWrappedObject) const;
   int  type(QGraphicsItem* theWrappedObject) const;
   qreal  boundingRegionGranularity(QGraphicsItem* theWrappedObject) const;
   QCursor  cursor(QGraphicsItem* theWrappedObject) const;
   bool  isWindow(QGraphicsItem* theWrappedObject) const;
   QPolygonF  mapToParent(QGraphicsItem* theWrappedObject, const QPolygonF&  polygon) const;
   void dragLeaveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   void dragMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneDragDropEvent*  event);
   QPolygonF  mapFromParent(QGraphicsItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h) const;
   void setAcceptedMouseButtons(QGraphicsItem* theWrappedObject, Qt::MouseButtons  buttons);
   void hoverMoveEvent(QGraphicsItem* theWrappedObject, QGraphicsSceneHoverEvent*  event);
   QPointF  mapToParent(QGraphicsItem* theWrappedObject, const QPointF&  point) const;
   void shear(QGraphicsItem* theWrappedObject, qreal  sh, qreal  sv);
   QTransform  deviceTransform(QGraphicsItem* theWrappedObject, const QTransform&  viewportTransform) const;
   QRegion  boundingRegion(QGraphicsItem* theWrappedObject, const QTransform&  itemToDeviceTransform) const;
   bool  hasCursor(QGraphicsItem* theWrappedObject) const;
   bool  isAncestorOf(QGraphicsItem* theWrappedObject, const QGraphicsItem*  child) const;
   void rotate(QGraphicsItem* theWrappedObject, qreal  angle);
   void setTransform(QGraphicsItem* theWrappedObject, const QTransform&  matrix, bool  combine = false);
   bool  sceneEventFilter(QGraphicsItem* theWrappedObject, QGraphicsItem*  watched, QEvent*  event);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSITEM_H
