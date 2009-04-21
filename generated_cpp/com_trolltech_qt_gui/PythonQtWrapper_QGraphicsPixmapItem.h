#ifndef PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H

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
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsPixmapItem : public QGraphicsPixmapItem
{
public:
    PythonQtShell_QGraphicsPixmapItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsPixmapItem(const QPixmap&  pixmap, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsPixmapItem(pixmap, parent, scene),_wrapper(NULL) {};

virtual void advance(int  phase);
virtual QRectF  boundingRect() const;
virtual bool  collidesWithItem(const QGraphicsItem*  other, Qt::ItemSelectionMode  mode) const;
virtual bool  collidesWithPath(const QPainterPath&  path, Qt::ItemSelectionMode  mode) const;
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
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QPainterPath  shape() const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsPixmapItem : public QGraphicsPixmapItem
{ public:
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsPixmapItem::extension(variant); }
inline QPainterPath  promoted_shape() const { return QGraphicsPixmapItem::shape(); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsPixmapItem::contains(point); }
inline int  promoted_type() const { return QGraphicsPixmapItem::type(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsPixmapItem::boundingRect(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsPixmapItem::isObscuredBy(item); }
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsPixmapItem::opaqueArea(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget) { QGraphicsPixmapItem::paint(painter, option, widget); }
};

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
   Qt::TransformationMode  transformationMode(QGraphicsPixmapItem* theWrappedObject) const;
   QVariant  extension(QGraphicsPixmapItem* theWrappedObject, const QVariant&  variant) const;
   QPainterPath  shape(QGraphicsPixmapItem* theWrappedObject) const;
   QGraphicsPixmapItem::ShapeMode  shapeMode(QGraphicsPixmapItem* theWrappedObject) const;
   bool  contains(QGraphicsPixmapItem* theWrappedObject, const QPointF&  point) const;
   QPixmap  pixmap(QGraphicsPixmapItem* theWrappedObject) const;
   void setShapeMode(QGraphicsPixmapItem* theWrappedObject, QGraphicsPixmapItem::ShapeMode  mode);
   void setTransformationMode(QGraphicsPixmapItem* theWrappedObject, Qt::TransformationMode  mode);
   int  type(QGraphicsPixmapItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsPixmapItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsPixmapItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsPixmapItem* theWrappedObject) const;
   void paint(QGraphicsPixmapItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget);
   QPointF  offset(QGraphicsPixmapItem* theWrappedObject) const;
   void setPixmap(QGraphicsPixmapItem* theWrappedObject, const QPixmap&  pixmap);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, const QPointF&  offset);
   void setOffset(QGraphicsPixmapItem* theWrappedObject, qreal  x, qreal  y);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPIXMAPITEM_H
