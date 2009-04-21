#ifndef PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H

#include <qgraphicsitem.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpoint.h>
#include <qrect.h>
#include <qstyleoption.h>
#include <qwidget.h>

class PythonQtShell_QGraphicsEllipseItem : public QGraphicsEllipseItem
{
public:
    PythonQtShell_QGraphicsEllipseItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(const QRectF&  rect, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(rect, parent, scene),_wrapper(NULL) {};
    PythonQtShell_QGraphicsEllipseItem(qreal  x, qreal  y, qreal  w, qreal  h, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0):QGraphicsEllipseItem(x, y, w, h, parent, scene),_wrapper(NULL) {};

virtual bool  isObscuredBy(const QGraphicsItem*  item) const;
virtual QPainterPath  opaqueArea() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsEllipseItem : public QGraphicsEllipseItem
{ public:
inline QPainterPath  promoted_opaqueArea() const { return QGraphicsEllipseItem::opaqueArea(); }
inline bool  promoted_isObscuredBy(const QGraphicsItem*  item) const { return QGraphicsEllipseItem::isObscuredBy(item); }
};

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
   void setRect(QGraphicsEllipseItem* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   int  startAngle(QGraphicsEllipseItem* theWrappedObject) const;
   void setRect(QGraphicsEllipseItem* theWrappedObject, const QRectF&  rect);
   void setSpanAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void setStartAngle(QGraphicsEllipseItem* theWrappedObject, int  angle);
   void paint(QGraphicsEllipseItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   int  type(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  shape(QGraphicsEllipseItem* theWrappedObject) const;
   int  spanAngle(QGraphicsEllipseItem* theWrappedObject) const;
   QPainterPath  opaqueArea(QGraphicsEllipseItem* theWrappedObject) const;
   bool  contains(QGraphicsEllipseItem* theWrappedObject, const QPointF&  point) const;
   QRectF  rect(QGraphicsEllipseItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsEllipseItem* theWrappedObject) const;
   bool  isObscuredBy(QGraphicsEllipseItem* theWrappedObject, const QGraphicsItem*  item) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSELLIPSEITEM_H
