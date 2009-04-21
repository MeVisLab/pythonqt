#ifndef PYTHONQTWRAPPER_QTRANSFORM_H
#define PYTHONQTWRAPPER_QTRANSFORM_H

#include <qtransform.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>

class PythonQtWrapper_QTransform : public QObject
{ Q_OBJECT
public:
Q_ENUMS(TransformationType )
enum TransformationType{
  TxNone = QTransform::TxNone,   TxTranslate = QTransform::TxTranslate,   TxScale = QTransform::TxScale,   TxRotate = QTransform::TxRotate,   TxShear = QTransform::TxShear,   TxProject = QTransform::TxProject};
public slots:
QTransform* new_QTransform();
QTransform* new_QTransform(const QMatrix&  mtx);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23);
QTransform* new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33 = 1.0);
QTransform* new_QTransform(const QTransform& other) {
QTransform* a = new QTransform();
*((QTransform*)a) = other;
return a; }
void delete_QTransform(QTransform* obj) { delete obj; } 
   QPainterPath  map(QTransform* theWrappedObject, const QPainterPath&  p) const;
   QTransform  adjoint(QTransform* theWrappedObject) const;
   void writeTo(QTransform* theWrappedObject, QDataStream&  arg__1);
   QTransform::TransformationType  type(QTransform* theWrappedObject) const;
   qreal  m32(QTransform* theWrappedObject) const;
   QTransform&  operator_divide_assign(QTransform* theWrappedObject, qreal  div);
   qreal  dx(QTransform* theWrappedObject) const;
   bool  isInvertible(QTransform* theWrappedObject) const;
   QPolygon  mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const;
   bool  static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result);
   qreal  m22(QTransform* theWrappedObject) const;
   qreal  m11(QTransform* theWrappedObject) const;
   QTransform&  rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   bool  isRotating(QTransform* theWrappedObject) const;
   qreal  m13(QTransform* theWrappedObject) const;
   qreal  m33(QTransform* theWrappedObject) const;
   bool  static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result);
   qreal  m21(QTransform* theWrappedObject) const;
   const QMatrix&  toAffine(QTransform* theWrappedObject) const;
   void readFrom(QTransform* theWrappedObject, QDataStream&  arg__1);
   qreal  det(QTransform* theWrappedObject) const;
   QTransform&  scale(QTransform* theWrappedObject, qreal  sx, qreal  sy);
   qreal  m31(QTransform* theWrappedObject) const;
   QLineF  map(QTransform* theWrappedObject, const QLineF&  l) const;
   bool  static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result);
   QTransform&  rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis = Qt::ZAxis);
   QTransform&  shear(QTransform* theWrappedObject, qreal  sh, qreal  sv);
   QRect  mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const;
   qreal  m23(QTransform* theWrappedObject) const;
   QTransform&  translate(QTransform* theWrappedObject, qreal  dx, qreal  dy);
   qreal  dy(QTransform* theWrappedObject) const;
   QTransform&  operator_subtract_assign(QTransform* theWrappedObject, qreal  div);
   QPolygonF  map(QTransform* theWrappedObject, const QPolygonF&  a) const;
   bool  isScaling(QTransform* theWrappedObject) const;
   qreal  determinant(QTransform* theWrappedObject) const;
   QRectF  mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const;
   bool  isIdentity(QTransform* theWrappedObject) const;
   QPolygon  map(QTransform* theWrappedObject, const QPolygon&  a) const;
   QTransform&  operator_add_assign(QTransform* theWrappedObject, qreal  div);
   void reset(QTransform* theWrappedObject);
   bool  isAffine(QTransform* theWrappedObject) const;
   bool  operator_equal(QTransform* theWrappedObject, const QTransform&  arg__1) const;
   QPoint  map(QTransform* theWrappedObject, const QPoint&  p) const;
   QRegion  map(QTransform* theWrappedObject, const QRegion&  r) const;
   QTransform&  operator_multiply_assign(QTransform* theWrappedObject, qreal  div);
   QTransform  transposed(QTransform* theWrappedObject) const;
   qreal  m12(QTransform* theWrappedObject) const;
   QTransform  inverted(QTransform* theWrappedObject, bool*  invertible = 0) const;
   QLine  map(QTransform* theWrappedObject, const QLine&  l) const;
   QPointF  map(QTransform* theWrappedObject, const QPointF&  p) const;
   void setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33);
   bool  isTranslating(QTransform* theWrappedObject) const;
   QTransform  multiplied(QTransform* theWrappedObject, const QTransform&  o) const;
   QTransform&  operator_multiply_assign(QTransform* theWrappedObject, const QTransform&  arg__1);
};

#endif // PYTHONQTWRAPPER_QTRANSFORM_H
