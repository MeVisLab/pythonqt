#ifndef PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H

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

class PythonQtWrapper_QGraphicsPolygonItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPolygonItem::Type};
public slots:
QGraphicsPolygonItem* new_QGraphicsPolygonItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPolygonItem* new_QGraphicsPolygonItem(const QPolygonF&  polygon, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPolygonItem(QGraphicsPolygonItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsPolygonItem* theWrappedObject) const;
   bool  contains(QGraphicsPolygonItem* theWrappedObject, const QPointF&  point) const;
   Qt::FillRule  fillRule(QGraphicsPolygonItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsPolygonItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsPolygonItem* theWrappedObject) const;
   void paint(QGraphicsPolygonItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QPolygonF  polygon(QGraphicsPolygonItem* theWrappedObject) const;
   void setFillRule(QGraphicsPolygonItem* theWrappedObject, Qt::FillRule  rule);
   void setPolygon(QGraphicsPolygonItem* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  shape(QGraphicsPolygonItem* theWrappedObject) const;
   int  type(QGraphicsPolygonItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPOLYGONITEM_H
