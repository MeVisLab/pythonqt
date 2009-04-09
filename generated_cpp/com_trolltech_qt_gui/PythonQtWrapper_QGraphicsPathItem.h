#ifndef PYTHONQTWRAPPER_QGRAPHICSPATHITEM_H
#define PYTHONQTWRAPPER_QGRAPHICSPATHITEM_H

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

class PythonQtWrapper_QGraphicsPathItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(enum_1 )
enum enum_1{
  Type = QGraphicsPathItem::Type};
public slots:
QGraphicsPathItem* new_QGraphicsPathItem(QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
QGraphicsPathItem* new_QGraphicsPathItem(const QPainterPath&  path, QGraphicsItem*  parent = 0, QGraphicsScene*  scene = 0);
void delete_QGraphicsPathItem(QGraphicsPathItem* obj) { delete obj; } 
   QRectF  boundingRect(QGraphicsPathItem* theWrappedObject) const;
   bool  contains(QGraphicsPathItem* theWrappedObject, const QPointF&  point) const;
   bool  isObscuredBy(QGraphicsPathItem* theWrappedObject, const QGraphicsItem*  item) const;
   QPainterPath  opaqueArea(QGraphicsPathItem* theWrappedObject) const;
   void paint(QGraphicsPathItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = 0);
   QPainterPath  path(QGraphicsPathItem* theWrappedObject) const;
   void setPath(QGraphicsPathItem* theWrappedObject, const QPainterPath&  path);
   QPainterPath  shape(QGraphicsPathItem* theWrappedObject) const;
   int  type(QGraphicsPathItem* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRAPHICSPATHITEM_H
