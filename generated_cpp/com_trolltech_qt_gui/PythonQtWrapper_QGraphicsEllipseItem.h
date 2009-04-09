#ifndef PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H

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

class PythonQtWrapper_QGraphicsEllipseItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsEllipseItem::Type};
public slots:
QGraphicsEllipseItem* new_QGraphicsEllipseItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsEllipseItem* new_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsEllipseItem(QGraphicsEllipseItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsEllipseItem* theWrappedObject) const;
   bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
   bool  isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsEllipseItem* theWrappedObject) const;
   void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   int  type(QGraphicsEllipseItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H
