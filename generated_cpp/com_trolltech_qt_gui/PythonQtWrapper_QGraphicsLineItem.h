#ifndef PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H

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

class PythonQtShell_QGraphicsLineItem : public QGraphicsLineItem
{
public:
    PythonQtShell_QGraphicsLineItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(const QLineF&  line, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(line, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsLineItem(qreal  x1, qreal  y1, qreal  x2, qreal  y2, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsLineItem(x1, y1, x2, y2, parent, scene),_wrapper(NULL) {};

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
virtual void paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
virtual bool  sceneEvent(QEvent*  event);
virtual bool  sceneEventFilter(QGraphicsItem*  watched, QEvent*  event);
virtual QPainterPath  shape() const;
virtual int  type() const;
virtual void wheelEvent(QGraphicsSceneWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsLineItem : public QGraphicsLineItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsLineItem::opaqueArea(); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0) { QGraphicsLineItem::paint(painter, option, widget); }
inline int  promoted_type() const { return QGraphicsLineItem::type(); }
inline QRectF  promoted_boundingRect() const { return QGraphicsLineItem::boundingRect(); }
inline QVariant  promoted_extension(const QVariant&  variant) const { return QGraphicsLineItem::extension(variant); }
inline bool  promoted_contains(const QPointF&  point) const { return QGraphicsLineItem::contains(point); }
inline QPainterPath  promoted_shape() const { return QGraphicsLineItem::shape(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsLineItem::isObscuredBy(item); }
};

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
   QLineF  line(QGraphicsLineItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsLineItem* theWrappedObject) const;
   void setLine(QGraphicsLineItem* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void paint(QGraphicsLineItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   int  type(QGraphicsLineItem* theWrappedObject) const;
   QPen  pen(QGraphicsLineItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsLineItem* theWrappedObject) const;
   void setPen(QGraphicsLineItem* theWrappedObject, const QPen&  pen);
   QVariant  extension(QGraphicsLineItem* theWrappedObject, const QVariant&  variant) const;
   bool  contains(QGraphicsLineItem* theWrappedObject, const QPointF&  point) const;
   QPainterPath  shape(QGraphicsLineItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsLineItem* theWrappedObject, const QGraphicsItem*  item) const;
   void setLine(QGraphicsLineItem* theWrappedObject, const QLineF&  line);
};

#endif // PYTHONQTWRAPPER_QGRAPHICSLINEITEM_H
