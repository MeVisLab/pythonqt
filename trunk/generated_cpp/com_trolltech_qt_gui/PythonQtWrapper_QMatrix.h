#ifndef PYTHONQTWRAPPER_QMATRIX_H
#define PYTHONQTWRAPPER_QMATRIX_H

#include <qmatrix.h>
#include <QObject>

#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>

class PythonQtWrapper_QMatrix : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix* new_QMatrix();
QMatrix* new_QMatrix(const QMatrix&  matrix);
QMatrix* new_QMatrix(qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
void delete_QMatrix(QMatrix* obj) { delete obj; } 
   qreal  det(QMatrix* theWrappedObject) const;
   qreal  dx(QMatrix* theWrappedObject) const;
   qreal  dy(QMatrix* theWrappedObject) const;
   QMatrix  inverted(QMatrix* theWrappedObject, bool*  invertible = 0) const;
   bool  isIdentity(QMatrix* theWrappedObject) const;
   bool  isInvertible(QMatrix* theWrappedObject) const;
   qreal  m11(QMatrix* theWrappedObject) const;
   qreal  m12(QMatrix* theWrappedObject) const;
   qreal  m21(QMatrix* theWrappedObject) const;
   qreal  m22(QMatrix* theWrappedObject) const;
   QLine  map(QMatrix* theWrappedObject, const QLine&  l) const;
   QLineF  map(QMatrix* theWrappedObject, const QLineF&  l) const;
   QPainterPath  map(QMatrix* theWrappedObject, const QPainterPath&  p) const;
   QPoint  map(QMatrix* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QMatrix* theWrappedObject, const QPointF&  p) const;
   QPolygon  map(QMatrix* theWrappedObject, const QPolygon&  a) const;
   QPolygonF  map(QMatrix* theWrappedObject, const QPolygonF&  a) const;
   QRegion  map(QMatrix* theWrappedObject, const QRegion&  r) const;
   QRect  mapRect(QMatrix* theWrappedObject, const QRect&  arg__1) const;
   QRectF  mapRect(QMatrix* theWrappedObject, const QRectF&  arg__1) const;
   QPolygon  mapToPolygon(QMatrix* theWrappedObject, const QRect&  r) const;
   QMatrix  operator_multiply(QMatrix* theWrappedObject, const QMatrix&  o) const;
   QMatrix&  operator_multiply_assign(QMatrix* theWrappedObject, const QMatrix&  arg__1);
   void writeTo(QMatrix* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QMatrix* theWrappedObject, const QMatrix&  arg__1) const;
   void readFrom(QMatrix* theWrappedObject, QDataStream&  arg__1);
   void reset(QMatrix* theWrappedObject);
   QMatrix&  rotate(QMatrix* theWrappedObject, qreal  a);
   QMatrix&  scale(QMatrix* theWrappedObject, qreal  sx, qreal  sy);
   void setMatrix(QMatrix* theWrappedObject, qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
   QMatrix&  shear(QMatrix* theWrappedObject, qreal  sh, qreal  sv);
   QMatrix&  translate(QMatrix* theWrappedObject, qreal  dx, qreal  dy);
};

#endif // PYTHONQTWRAPPER_QMATRIX_H
