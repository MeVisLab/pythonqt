#ifndef PYTHONQTWRAPPER_QMATRIX_H
#define PYTHONQTWRAPPER_QMATRIX_H

#include <qmatrix.h>
#include <QObject>

#include <PythonQt.h>

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
   QLineF  map(QMatrix* theWrappedObject, const QLineF&  l) const;
   QPolygonF  map(QMatrix* theWrappedObject, const QPolygonF&  a) const;
   QPainterPath  map(QMatrix* theWrappedObject, const QPainterPath&  p) const;
   QMatrix  inverted(QMatrix* theWrappedObject, bool*  invertible = 0) const;
   QLine  map(QMatrix* theWrappedObject, const QLine&  l) const;
   qreal  m22(QMatrix* theWrappedObject) const;
   QRectF  mapRect(QMatrix* theWrappedObject, const QRectF&  arg__1) const;
   bool  isInvertible(QMatrix* theWrappedObject) const;
   QPointF  map(QMatrix* theWrappedObject, const QPointF&  p) const;
   QRect  mapRect(QMatrix* theWrappedObject, const QRect&  arg__1) const;
   qreal  dx(QMatrix* theWrappedObject) const;
   QMatrix  operator_multiply(QMatrix* theWrappedObject, const QMatrix&  o) const;
   void writeTo(QMatrix* theWrappedObject, QDataStream&  arg__1);
   QMatrix&  rotate(QMatrix* theWrappedObject, qreal  a);
   qreal  dy(QMatrix* theWrappedObject) const;
   bool  operator_equal(QMatrix* theWrappedObject, const QMatrix&  arg__1) const;
   void setMatrix(QMatrix* theWrappedObject, qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
   qreal  det(QMatrix* theWrappedObject) const;
   qreal  m12(QMatrix* theWrappedObject) const;
   QMatrix&  operator_multiply_assign(QMatrix* theWrappedObject, const QMatrix&  arg__1);
   QPoint  map(QMatrix* theWrappedObject, const QPoint&  p) const;
   QRegion  map(QMatrix* theWrappedObject, const QRegion&  r) const;
   QPolygon  mapToPolygon(QMatrix* theWrappedObject, const QRect&  r) const;
   bool  isIdentity(QMatrix* theWrappedObject) const;
   QMatrix&  scale(QMatrix* theWrappedObject, qreal  sx, qreal  sy);
   void reset(QMatrix* theWrappedObject);
   QPolygon  map(QMatrix* theWrappedObject, const QPolygon&  a) const;
   qreal  m11(QMatrix* theWrappedObject) const;
   QMatrix&  shear(QMatrix* theWrappedObject, qreal  sh, qreal  sv);
   void readFrom(QMatrix* theWrappedObject, QDataStream&  arg__1);
   QMatrix&  translate(QMatrix* theWrappedObject, qreal  dx, qreal  dy);
   qreal  m21(QMatrix* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QMATRIX_H
