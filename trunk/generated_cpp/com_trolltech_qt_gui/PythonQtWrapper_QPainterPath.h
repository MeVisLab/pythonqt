#ifndef PYTHONQTWRAPPER_QPAINTERPATH_H
#define PYTHONQTWRAPPER_QPAINTERPATH_H

#include <qpainterpath.h>
#include <QObject>

#include <PythonQt.h>

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

class PythonQtWrapper_QPainterPath : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ElementType )
enum ElementType{
  MoveToElement = QPainterPath::MoveToElement,   LineToElement = QPainterPath::LineToElement,   CurveToElement = QPainterPath::CurveToElement,   CurveToDataElement = QPainterPath::CurveToDataElement};
public slots:
QPainterPath* new_QPainterPath();
QPainterPath* new_QPainterPath(const QPainterPath&  other);
QPainterPath* new_QPainterPath(const QPointF&  startPoint);
void delete_QPainterPath(QPainterPath* obj) { delete obj; } 
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void closeSubpath(QPainterPath* theWrappedObject);
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   int  elementCount(QPainterPath* theWrappedObject) const;
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   const QPainterPath::Element&  elementAt(QPainterPath* theWrappedObject, int  i) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   bool  operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
};

#endif // PYTHONQTWRAPPER_QPAINTERPATH_H
