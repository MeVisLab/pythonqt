#include "PythonQtWrapper_QPainterPath.h"

#include <QPainterPath>
#include <QVariant>
#include <qdatastream.h>
#include <qfont.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qpainterpath.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qtransform.h>

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath()
{ 
return new QPainterPath(); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPainterPath&  other)
{ 
return new QPainterPath(other); }

QPainterPath* PythonQtWrapper_QPainterPath::new_QPainterPath(const QPointF&  startPoint)
{ 
return new QPainterPath(startPoint); }

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry)
{
theWrappedObject->addEllipse(center, rx, ry);
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->addEllipse(rect);
}

void PythonQtWrapper_QPainterPath::addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
theWrappedObject->addEllipse(x, y, w, h);
}

void PythonQtWrapper_QPainterPath::addPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
theWrappedObject->addPath(path);
}

void PythonQtWrapper_QPainterPath::addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon)
{
theWrappedObject->addPolygon(polygon);
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, const QRectF&  rect)
{
theWrappedObject->addRect(rect);
}

void PythonQtWrapper_QPainterPath::addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
theWrappedObject->addRect(x, y, w, h);
}

void PythonQtWrapper_QPainterPath::addRegion(QPainterPath* theWrappedObject, const QRegion&  region)
{
theWrappedObject->addRegion(region);
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness)
{
theWrappedObject->addRoundRect(rect, roundness);
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd)
{
theWrappedObject->addRoundRect(rect, xRnd, yRnd);
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness)
{
theWrappedObject->addRoundRect(x, y, w, h, roundness);
}

void PythonQtWrapper_QPainterPath::addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd)
{
theWrappedObject->addRoundRect(x, y, w, h, xRnd, yRnd);
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
theWrappedObject->addRoundedRect(rect, xRadius, yRadius, mode);
}

void PythonQtWrapper_QPainterPath::addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode)
{
theWrappedObject->addRoundedRect(x, y, w, h, xRadius, yRadius, mode);
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text)
{
theWrappedObject->addText(point, f, text);
}

void PythonQtWrapper_QPainterPath::addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text)
{
theWrappedObject->addText(x, y, f, text);
}

qreal  PythonQtWrapper_QPainterPath::angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
return theWrappedObject->angleAtPercent(t);
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle)
{
theWrappedObject->arcMoveTo(rect, angle);
}

void PythonQtWrapper_QPainterPath::arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle)
{
theWrappedObject->arcMoveTo(x, y, w, h, angle);
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength)
{
theWrappedObject->arcTo(rect, startAngle, arcLength);
}

void PythonQtWrapper_QPainterPath::arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength)
{
theWrappedObject->arcTo(x, y, w, h, startAngle, arcLength);
}

QRectF  PythonQtWrapper_QPainterPath::boundingRect(QPainterPath* theWrappedObject) const
{
return theWrappedObject->boundingRect();
}

void PythonQtWrapper_QPainterPath::closeSubpath(QPainterPath* theWrappedObject)
{
theWrappedObject->closeSubpath();
}

void PythonQtWrapper_QPainterPath::connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path)
{
theWrappedObject->connectPath(path);
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
return theWrappedObject->contains(p);
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QPointF&  pt) const
{
return theWrappedObject->contains(pt);
}

bool  PythonQtWrapper_QPainterPath::contains(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->contains(rect);
}

QRectF  PythonQtWrapper_QPainterPath::controlPointRect(QPainterPath* theWrappedObject) const
{
return theWrappedObject->controlPointRect();
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt)
{
theWrappedObject->cubicTo(ctrlPt1, ctrlPt2, endPt);
}

void PythonQtWrapper_QPainterPath::cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty)
{
theWrappedObject->cubicTo(ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

QPointF  PythonQtWrapper_QPainterPath::currentPosition(QPainterPath* theWrappedObject) const
{
return theWrappedObject->currentPosition();
}

const QPainterPath::Element&  PythonQtWrapper_QPainterPath::elementAt(QPainterPath* theWrappedObject, int  i) const
{
return theWrappedObject->elementAt(i);
}

int  PythonQtWrapper_QPainterPath::elementCount(QPainterPath* theWrappedObject) const
{
return theWrappedObject->elementCount();
}

Qt::FillRule  PythonQtWrapper_QPainterPath::fillRule(QPainterPath* theWrappedObject) const
{
return theWrappedObject->fillRule();
}

QPainterPath  PythonQtWrapper_QPainterPath::intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
return theWrappedObject->intersected(r);
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const
{
return theWrappedObject->intersects(p);
}

bool  PythonQtWrapper_QPainterPath::intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const
{
return theWrappedObject->intersects(rect);
}

bool  PythonQtWrapper_QPainterPath::isEmpty(QPainterPath* theWrappedObject) const
{
return theWrappedObject->isEmpty();
}

qreal  PythonQtWrapper_QPainterPath::length(QPainterPath* theWrappedObject) const
{
return theWrappedObject->length();
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
theWrappedObject->lineTo(p);
}

void PythonQtWrapper_QPainterPath::lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->lineTo(x, y);
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, const QPointF&  p)
{
theWrappedObject->moveTo(p);
}

void PythonQtWrapper_QPainterPath::moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y)
{
theWrappedObject->moveTo(x, y);
}

void PythonQtWrapper_QPainterPath::writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  *theWrappedObject;
}

bool  PythonQtWrapper_QPainterPath::operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const
{
return *theWrappedObject == other;
}

void PythonQtWrapper_QPainterPath::readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  *theWrappedObject;
}

qreal  PythonQtWrapper_QPainterPath::percentAtLength(QPainterPath* theWrappedObject, qreal  t) const
{
return theWrappedObject->percentAtLength(t);
}

QPointF  PythonQtWrapper_QPainterPath::pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
return theWrappedObject->pointAtPercent(t);
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt)
{
theWrappedObject->quadTo(ctrlPt, endPt);
}

void PythonQtWrapper_QPainterPath::quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty)
{
theWrappedObject->quadTo(ctrlPtx, ctrlPty, endPtx, endPty);
}

void PythonQtWrapper_QPainterPath::setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y)
{
theWrappedObject->setElementPositionAt(i, x, y);
}

void PythonQtWrapper_QPainterPath::setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule)
{
theWrappedObject->setFillRule(fillRule);
}

QPainterPath  PythonQtWrapper_QPainterPath::simplified(QPainterPath* theWrappedObject) const
{
return theWrappedObject->simplified();
}

qreal  PythonQtWrapper_QPainterPath::slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const
{
return theWrappedObject->slopeAtPercent(t);
}

QPainterPath  PythonQtWrapper_QPainterPath::subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
return theWrappedObject->subtracted(r);
}

QPainterPath  PythonQtWrapper_QPainterPath::subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
return theWrappedObject->subtractedInverted(r);
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
return theWrappedObject->toFillPolygon(matrix);
}

QPolygonF  PythonQtWrapper_QPainterPath::toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
return theWrappedObject->toFillPolygon(matrix);
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
return theWrappedObject->toFillPolygons(matrix);
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
return theWrappedObject->toFillPolygons(matrix);
}

QPainterPath  PythonQtWrapper_QPainterPath::toReversed(QPainterPath* theWrappedObject) const
{
return theWrappedObject->toReversed();
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix) const
{
return theWrappedObject->toSubpathPolygons(matrix);
}

QList<QPolygonF >  PythonQtWrapper_QPainterPath::toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const
{
return theWrappedObject->toSubpathPolygons(matrix);
}

QPainterPath  PythonQtWrapper_QPainterPath::united(QPainterPath* theWrappedObject, const QPainterPath&  r) const
{
return theWrappedObject->united(r);
}

