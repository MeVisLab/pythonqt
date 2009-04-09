#ifndef PYTHONQTWRAPPER_QLINEF_H
#define PYTHONQTWRAPPER_QLINEF_H

#include <qline.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qpoint.h>

class PythonQtWrapper_QLineF : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IntersectType )
enum IntersectType{
  NoIntersection = QLineF::NoIntersection,   BoundedIntersection = QLineF::BoundedIntersection,   UnboundedIntersection = QLineF::UnboundedIntersection};
public slots:
QLineF* new_QLineF();
QLineF* new_QLineF(const QLine&  line);
QLineF* new_QLineF(const QPointF&  pt1, const QPointF&  pt2);
QLineF* new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2);
void delete_QLineF(QLineF* obj) { delete obj; } 
   qreal  angle(QLineF* theWrappedObject) const;
   qreal  angle(QLineF* theWrappedObject, const QLineF&  l) const;
   qreal  angleTo(QLineF* theWrappedObject, const QLineF&  l) const;
   qreal  dx(QLineF* theWrappedObject) const;
   qreal  dy(QLineF* theWrappedObject) const;
   QLineF  static_QLineF_fromPolar(qreal  length, qreal  angle);
   QLineF::IntersectType  intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const;
   bool  isNull(QLineF* theWrappedObject) const;
   qreal  length(QLineF* theWrappedObject) const;
   QLineF  normalVector(QLineF* theWrappedObject) const;
   void writeTo(QLineF* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QLineF* theWrappedObject, const QLineF&  d) const;
   void readFrom(QLineF* theWrappedObject, QDataStream&  arg__1);
   QPointF  p1(QLineF* theWrappedObject) const;
   QPointF  p2(QLineF* theWrappedObject) const;
   QPointF  pointAt(QLineF* theWrappedObject, qreal  t) const;
   void setAngle(QLineF* theWrappedObject, qreal  angle);
   void setLength(QLineF* theWrappedObject, qreal  len);
   void setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setP1(QLineF* theWrappedObject, const QPointF&  p1);
   void setP2(QLineF* theWrappedObject, const QPointF&  p2);
   void setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2);
   QLine  toLine(QLineF* theWrappedObject) const;
   void translate(QLineF* theWrappedObject, const QPointF&  p);
   void translate(QLineF* theWrappedObject, qreal  dx, qreal  dy);
   QLineF  translated(QLineF* theWrappedObject, const QPointF&  p) const;
   QLineF  translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const;
   QLineF  unitVector(QLineF* theWrappedObject) const;
   qreal  x1(QLineF* theWrappedObject) const;
   qreal  x2(QLineF* theWrappedObject) const;
   qreal  y1(QLineF* theWrappedObject) const;
   qreal  y2(QLineF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLINEF_H
