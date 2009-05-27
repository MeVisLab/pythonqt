#include "PythonQtWrapper_QRectF.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

QRectF* PythonQtWrapper_QRectF::new_QRectF()
{ 
return new QRectF(); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight)
{ 
return new QRectF(topleft, bottomRight); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QSizeF&  size)
{ 
return new QRectF(topleft, size); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QRect&  rect)
{ 
return new QRectF(rect); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height)
{ 
return new QRectF(left, top, width, height); }

qreal  PythonQtWrapper_QRectF::left(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

void PythonQtWrapper_QRectF::setBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomLeft(p));
}

void PythonQtWrapper_QRectF::setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setCoords(x1, y1, x2, y2));
}

void PythonQtWrapper_QRectF::setWidth(QRectF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QRectF::readFrom(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

QSizeF  PythonQtWrapper_QRectF::size(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

void PythonQtWrapper_QRectF::adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->adjust(x1, y1, x2, y2));
}

void PythonQtWrapper_QRectF::writeTo(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QRect  PythonQtWrapper_QRectF::toRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toRect());
}

QPointF  PythonQtWrapper_QRectF::topRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topRight());
}

void PythonQtWrapper_QRectF::setTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopRight(p));
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

QPointF  PythonQtWrapper_QRectF::center(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

bool  PythonQtWrapper_QRectF::isNull(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QPointF  PythonQtWrapper_QRectF::topLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topLeft());
}

QRectF  PythonQtWrapper_QRectF::adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const
{
  return ( theWrappedObject->adjusted(x1, y1, x2, y2));
}

qreal  PythonQtWrapper_QRectF::top(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

void PythonQtWrapper_QRectF::moveBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomRight(p));
}

QRectF  PythonQtWrapper_QRectF::normalized(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->contains(r));
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->contains(p));
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QPointF  PythonQtWrapper_QRectF::bottomLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomLeft());
}

void PythonQtWrapper_QRectF::setHeight(QRectF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

QRectF  PythonQtWrapper_QRectF::intersected(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->intersected(other));
}

qreal  PythonQtWrapper_QRectF::y(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

void PythonQtWrapper_QRectF::moveTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopLeft(p));
}

void PythonQtWrapper_QRectF::moveBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveBottom(pos));
}

bool  PythonQtWrapper_QRectF::intersects(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->intersects(r));
}

qreal  PythonQtWrapper_QRectF::width(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QRectF  PythonQtWrapper_QRectF::united(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->united(other));
}

void PythonQtWrapper_QRectF::moveLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveLeft(pos));
}

void PythonQtWrapper_QRectF::setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

void PythonQtWrapper_QRectF::setTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setTop(pos));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, qreal  x, qreal  t)
{
  ( theWrappedObject->moveTo(x, t));
}

bool  PythonQtWrapper_QRectF::isValid(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QRectF::setRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setRight(pos));
}

void PythonQtWrapper_QRectF::moveTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopRight(p));
}

bool  PythonQtWrapper_QRectF::operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

qreal  PythonQtWrapper_QRectF::bottom(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

void PythonQtWrapper_QRectF::moveCenter(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveCenter(p));
}

void PythonQtWrapper_QRectF::setTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopLeft(p));
}

qreal  PythonQtWrapper_QRectF::x(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QRectF::height(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

QRect  PythonQtWrapper_QRectF::toAlignedRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toAlignedRect());
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->contains(x, y));
}

bool  PythonQtWrapper_QRectF::isEmpty(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

void PythonQtWrapper_QRectF::setY(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setY(pos));
}

void PythonQtWrapper_QRectF::setBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setBottom(pos));
}

void PythonQtWrapper_QRectF::setBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomRight(p));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QRectF::moveRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveRight(pos));
}

void PythonQtWrapper_QRectF::setX(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setX(pos));
}

void PythonQtWrapper_QRectF::moveTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveTop(pos));
}

QPointF  PythonQtWrapper_QRectF::bottomRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomRight());
}

void PythonQtWrapper_QRectF::moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomLeft(p));
}

void PythonQtWrapper_QRectF::setSize(QRectF* theWrappedObject, const QSizeF&  s)
{
  ( theWrappedObject->setSize(s));
}

qreal  PythonQtWrapper_QRectF::right(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QRectF::setLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setLeft(pos));
}

QString PythonQtWrapper_QRectF::toString(QRectF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

