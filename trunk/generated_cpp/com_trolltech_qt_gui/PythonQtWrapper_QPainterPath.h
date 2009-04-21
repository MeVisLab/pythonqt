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
   void closeSubpath(QPainterPath* theWrappedObject);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   bool  operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   const QPainterPath::Element&  elementAt(QPainterPath* theWrappedObject, int  i) const;
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   qreal  length(QPainterPath* theWrappedObject) const;
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   int  elementCount(QPainterPath* theWrappedObject) const;
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
};

#endif // PYTHONQTWRAPPER_QPAINTERPATH_H
