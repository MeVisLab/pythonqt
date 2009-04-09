#include "PythonQtWrapper_QTransform.h"

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

QTransform* PythonQtWrapper_QTransform::new_QTransform()
{ 
return new QTransform(); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(const QMatrix&  mtx)
{ 
return new QTransform(mtx); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23); }

QTransform* PythonQtWrapper_QTransform::new_QTransform(qreal  h11, qreal  h12, qreal  h13, qreal  h21, qreal  h22, qreal  h23, qreal  h31, qreal  h32, qreal  h33)
{ 
return new QTransform(h11, h12, h13, h21, h22, h23, h31, h32, h33); }

QTransform  PythonQtWrapper_QTransform::adjoint(QTransform* theWrappedObject) const
{
return theWrappedObject->adjoint();
}

qreal  PythonQtWrapper_QTransform::det(QTransform* theWrappedObject) const
{
return theWrappedObject->det();
}

qreal  PythonQtWrapper_QTransform::determinant(QTransform* theWrappedObject) const
{
return theWrappedObject->determinant();
}

qreal  PythonQtWrapper_QTransform::dx(QTransform* theWrappedObject) const
{
return theWrappedObject->dx();
}

qreal  PythonQtWrapper_QTransform::dy(QTransform* theWrappedObject) const
{
return theWrappedObject->dy();
}

QTransform  PythonQtWrapper_QTransform::inverted(QTransform* theWrappedObject, bool*  invertible) const
{
return theWrappedObject->inverted(invertible);
}

bool  PythonQtWrapper_QTransform::isAffine(QTransform* theWrappedObject) const
{
return theWrappedObject->isAffine();
}

bool  PythonQtWrapper_QTransform::isIdentity(QTransform* theWrappedObject) const
{
return theWrappedObject->isIdentity();
}

bool  PythonQtWrapper_QTransform::isInvertible(QTransform* theWrappedObject) const
{
return theWrappedObject->isInvertible();
}

bool  PythonQtWrapper_QTransform::isRotating(QTransform* theWrappedObject) const
{
return theWrappedObject->isRotating();
}

bool  PythonQtWrapper_QTransform::isScaling(QTransform* theWrappedObject) const
{
return theWrappedObject->isScaling();
}

bool  PythonQtWrapper_QTransform::isTranslating(QTransform* theWrappedObject) const
{
return theWrappedObject->isTranslating();
}

qreal  PythonQtWrapper_QTransform::m11(QTransform* theWrappedObject) const
{
return theWrappedObject->m11();
}

qreal  PythonQtWrapper_QTransform::m12(QTransform* theWrappedObject) const
{
return theWrappedObject->m12();
}

qreal  PythonQtWrapper_QTransform::m13(QTransform* theWrappedObject) const
{
return theWrappedObject->m13();
}

qreal  PythonQtWrapper_QTransform::m21(QTransform* theWrappedObject) const
{
return theWrappedObject->m21();
}

qreal  PythonQtWrapper_QTransform::m22(QTransform* theWrappedObject) const
{
return theWrappedObject->m22();
}

qreal  PythonQtWrapper_QTransform::m23(QTransform* theWrappedObject) const
{
return theWrappedObject->m23();
}

qreal  PythonQtWrapper_QTransform::m31(QTransform* theWrappedObject) const
{
return theWrappedObject->m31();
}

qreal  PythonQtWrapper_QTransform::m32(QTransform* theWrappedObject) const
{
return theWrappedObject->m32();
}

qreal  PythonQtWrapper_QTransform::m33(QTransform* theWrappedObject) const
{
return theWrappedObject->m33();
}

QLine  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLine&  l) const
{
return theWrappedObject->map(l);
}

QLineF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QLineF&  l) const
{
return theWrappedObject->map(l);
}

QPainterPath  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPainterPath&  p) const
{
return theWrappedObject->map(p);
}

QPoint  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPoint&  p) const
{
return theWrappedObject->map(p);
}

QPointF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPointF&  p) const
{
return theWrappedObject->map(p);
}

QPolygon  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygon&  a) const
{
return theWrappedObject->map(a);
}

QPolygonF  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QPolygonF&  a) const
{
return theWrappedObject->map(a);
}

QRegion  PythonQtWrapper_QTransform::map(QTransform* theWrappedObject, const QRegion&  r) const
{
return theWrappedObject->map(r);
}

QRect  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRect&  arg__1) const
{
return theWrappedObject->mapRect(arg__1);
}

QRectF  PythonQtWrapper_QTransform::mapRect(QTransform* theWrappedObject, const QRectF&  arg__1) const
{
return theWrappedObject->mapRect(arg__1);
}

QPolygon  PythonQtWrapper_QTransform::mapToPolygon(QTransform* theWrappedObject, const QRect&  r) const
{
return theWrappedObject->mapToPolygon(r);
}

QTransform  PythonQtWrapper_QTransform::multiplied(QTransform* theWrappedObject, const QTransform&  o) const
{
return *theWrappedObject * o;
}

QTransform&  PythonQtWrapper_QTransform::operator_multiply_assign(QTransform* theWrappedObject, const QTransform&  arg__1)
{
return *theWrappedObject *= arg__1;
}

QTransform&  PythonQtWrapper_QTransform::operator_multiply_assign(QTransform* theWrappedObject, qreal  div)
{
return *theWrappedObject *= div;
}

QTransform&  PythonQtWrapper_QTransform::operator_add_assign(QTransform* theWrappedObject, qreal  div)
{
return *theWrappedObject += div;
}

QTransform&  PythonQtWrapper_QTransform::operator_subtract_assign(QTransform* theWrappedObject, qreal  div)
{
return *theWrappedObject -= div;
}

QTransform&  PythonQtWrapper_QTransform::operator_divide_assign(QTransform* theWrappedObject, qreal  div)
{
return *theWrappedObject /= div;
}

void PythonQtWrapper_QTransform::writeTo(QTransform* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QTransform::operator_equal(QTransform* theWrappedObject, const QTransform&  arg__1) const
{
return *theWrappedObject == arg__1;
}

void PythonQtWrapper_QTransform::readFrom(QTransform* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToQuad(const QPolygonF&  one, const QPolygonF&  two, QTransform&  result)
{
return QTransform::quadToQuad(one, two, result);
}

bool  PythonQtWrapper_QTransform::static_QTransform_quadToSquare(const QPolygonF&  quad, QTransform&  result)
{
return QTransform::quadToSquare(quad, result);
}

void PythonQtWrapper_QTransform::reset(QTransform* theWrappedObject)
{
theWrappedObject->reset();
}

QTransform&  PythonQtWrapper_QTransform::rotate(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
return theWrappedObject->rotate(a, axis);
}

QTransform&  PythonQtWrapper_QTransform::rotateRadians(QTransform* theWrappedObject, qreal  a, Qt::Axis  axis)
{
return theWrappedObject->rotateRadians(a, axis);
}

QTransform&  PythonQtWrapper_QTransform::scale(QTransform* theWrappedObject, qreal  sx, qreal  sy)
{
return theWrappedObject->scale(sx, sy);
}

void PythonQtWrapper_QTransform::setMatrix(QTransform* theWrappedObject, qreal  m11, qreal  m12, qreal  m13, qreal  m21, qreal  m22, qreal  m23, qreal  m31, qreal  m32, qreal  m33)
{
theWrappedObject->setMatrix(m11, m12, m13, m21, m22, m23, m31, m32, m33);
}

QTransform&  PythonQtWrapper_QTransform::shear(QTransform* theWrappedObject, qreal  sh, qreal  sv)
{
return theWrappedObject->shear(sh, sv);
}

bool  PythonQtWrapper_QTransform::static_QTransform_squareToQuad(const QPolygonF&  square, QTransform&  result)
{
return QTransform::squareToQuad(square, result);
}

const QMatrix&  PythonQtWrapper_QTransform::toAffine(QTransform* theWrappedObject) const
{
return theWrappedObject->toAffine();
}

QTransform&  PythonQtWrapper_QTransform::translate(QTransform* theWrappedObject, qreal  dx, qreal  dy)
{
return theWrappedObject->translate(dx, dy);
}

QTransform  PythonQtWrapper_QTransform::transposed(QTransform* theWrappedObject) const
{
return theWrappedObject->transposed();
}

QTransform::TransformationType  PythonQtWrapper_QTransform::type(QTransform* theWrappedObject) const
{
return theWrappedObject->type();
}

