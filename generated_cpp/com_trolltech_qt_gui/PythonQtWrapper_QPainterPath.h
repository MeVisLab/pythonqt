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
   QPainterPath  united(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void writeTo(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   Qt::FillRule  fillRule(QPainterPath* theWrappedObject) const;
   void addPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  operator_equal(QPainterPath* theWrappedObject, const QPainterPath&  other) const;
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   qreal  percentAtLength(QPainterPath* theWrappedObject, qreal  t) const;
   QPainterPath  toReversed(QPainterPath* theWrappedObject) const;
   void addText(QPainterPath* theWrappedObject, qreal  x, qreal  y, const QFont&  f, const QString&  text);
   void closeSubpath(QPainterPath* theWrappedObject);
   bool  isEmpty(QPainterPath* theWrappedObject) const;
   const QPainterPath::Element*  elementAt(QPainterPath* theWrappedObject, int  i) const;
   qreal  slopeAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void addRoundedRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   bool  intersects(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   void setFillRule(QPainterPath* theWrappedObject, Qt::FillRule  fillRule);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   QRectF  boundingRect(QPainterPath* theWrappedObject) const;
   void addRegion(QPainterPath* theWrappedObject, const QRegion&  region);
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  roundness);
   void connectPath(QPainterPath* theWrappedObject, const QPainterPath&  path);
   bool  contains(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void quadTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt, const QPointF&  endPt);
   QPointF  pointAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  angle);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void arcTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  startAngle, qreal  arcLength);
   void addRect(QPainterPath* theWrappedObject, const QRectF&  rect);
   void cubicTo(QPainterPath* theWrappedObject, const QPointF&  ctrlPt1, const QPointF&  ctrlPt2, const QPointF&  endPt);
   bool  intersects(QPainterPath* theWrappedObject, const QRectF&  rect) const;
   void addEllipse(QPainterPath* theWrappedObject, const QPointF&  center, qreal  rx, qreal  ry);
   bool  contains(QPainterPath* theWrappedObject, const QPainterPath&  p) const;
   void addRoundedRect(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  xRadius, qreal  yRadius, Qt::SizeMode  mode = Qt::AbsoluteSize);
   QList<QPolygonF >  toSubpathPolygons(QPainterPath* theWrappedObject, const QMatrix&  matrix = QMatrix()) const;
   qreal  length(QPainterPath* theWrappedObject) const;
   QRectF  controlPointRect(QPainterPath* theWrappedObject) const;
   QPainterPath  subtracted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addEllipse(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void addText(QPainterPath* theWrappedObject, const QPointF&  point, const QFont&  f, const QString&  text);
   QList<QPolygonF >  toFillPolygons(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void moveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
   void arcTo(QPainterPath* theWrappedObject, const QRectF&  rect, qreal  startAngle, qreal  arcLength);
   void moveTo(QPainterPath* theWrappedObject, const QPointF&  p);
   bool  contains(QPainterPath* theWrappedObject, const QPointF&  pt) const;
   void addRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QPainterPath  intersected(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   QPainterPath  simplified(QPainterPath* theWrappedObject) const;
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  xRnd, int  yRnd);
   int  elementCount(QPainterPath* theWrappedObject) const;
   void addRoundRect(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, int  xRnd, int  yRnd);
   void readFrom(QPainterPath* theWrappedObject, QDataStream&  arg__1);
   void addPolygon(QPainterPath* theWrappedObject, const QPolygonF&  polygon);
   void cubicTo(QPainterPath* theWrappedObject, qreal  ctrlPt1x, qreal  ctrlPt1y, qreal  ctrlPt2x, qreal  ctrlPt2y, qreal  endPtx, qreal  endPty);
   QPointF  currentPosition(QPainterPath* theWrappedObject) const;
   void addEllipse(QPainterPath* theWrappedObject, const QRectF&  rect);
   void setElementPositionAt(QPainterPath* theWrappedObject, int  i, qreal  x, qreal  y);
   QPolygonF  toFillPolygon(QPainterPath* theWrappedObject, const QTransform&  matrix) const;
   void lineTo(QPainterPath* theWrappedObject, const QPointF&  p);
   void quadTo(QPainterPath* theWrappedObject, qreal  ctrlPtx, qreal  ctrlPty, qreal  endPtx, qreal  endPty);
   qreal  angleAtPercent(QPainterPath* theWrappedObject, qreal  t) const;
   void arcMoveTo(QPainterPath* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h, qreal  angle);
   QPainterPath  subtractedInverted(QPainterPath* theWrappedObject, const QPainterPath&  r) const;
   void addRoundRect(QPainterPath* theWrappedObject, const QRectF&  rect, int  roundness);
   void lineTo(QPainterPath* theWrappedObject, qreal  x, qreal  y);
    QString toString(QPainterPath*);
};

#endif // PYTHONQTWRAPPER_QPAINTERPATH_H
