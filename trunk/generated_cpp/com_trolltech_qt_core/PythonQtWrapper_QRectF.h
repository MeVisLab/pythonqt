#ifndef PYTHONQTWRAPPER_QRECTF_H
#define PYTHONQTWRAPPER_QRECTF_H

#include <qrect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QRectF : public QObject
{ Q_OBJECT
public:
public slots:
QRectF* new_QRectF();
QRectF* new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight);
QRectF* new_QRectF(const QPointF&  topleft, const QSizeF&  size);
QRectF* new_QRectF(const QRect&  rect);
QRectF* new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height);
QRectF* new_QRectF(const QRectF& other) {
QRectF* a = new QRectF();
*((QRectF*)a) = other;
return a; }
void delete_QRectF(QRectF* obj) { delete obj; } 
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   qreal  bottom(QRectF* theWrappedObject) const;
   void setTop(QRectF* theWrappedObject, qreal  pos);
   qreal  top(QRectF* theWrappedObject) const;
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setX(QRectF* theWrappedObject, qreal  pos);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   qreal  right(QRectF* theWrappedObject) const;
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   void setWidth(QRectF* theWrappedObject, qreal  w);
   bool  operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2);
   bool  isNull(QRectF* theWrappedObject) const;
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   qreal  y(QRectF* theWrappedObject) const;
   qreal  height(QRectF* theWrappedObject) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   void setY(QRectF* theWrappedObject, qreal  pos);
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   qreal  width(QRectF* theWrappedObject) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setHeight(QRectF* theWrappedObject, qreal  h);
   QPointF  center(QRectF* theWrappedObject) const;
   qreal  left(QRectF* theWrappedObject) const;
   QRectF  normalized(QRectF* theWrappedObject) const;
   QRect  toRect(QRectF* theWrappedObject) const;
   qreal  x(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   QSizeF  size(QRectF* theWrappedObject) const;
   QPointF  topRight(QRectF* theWrappedObject) const;
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   void setRight(QRectF* theWrappedObject, qreal  pos);
   bool  isValid(QRectF* theWrappedObject) const;
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  t);
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   bool  isEmpty(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, const QPointF&  p);
};

#endif // PYTHONQTWRAPPER_QRECTF_H
