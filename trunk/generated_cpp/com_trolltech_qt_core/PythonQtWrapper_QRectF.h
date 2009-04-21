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
   void setWidth(QRectF* theWrappedObject, qreal  w);
   bool  isEmpty(QRectF* theWrappedObject) const;
   qreal  width(QRectF* theWrappedObject) const;
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   qreal  bottom(QRectF* theWrappedObject) const;
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  t);
   QPointF  center(QRectF* theWrappedObject) const;
   void setHeight(QRectF* theWrappedObject, qreal  h);
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   QRectF  normalized(QRectF* theWrappedObject) const;
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   qreal  left(QRectF* theWrappedObject) const;
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   QPointF  topRight(QRectF* theWrappedObject) const;
   bool  isNull(QRectF* theWrappedObject) const;
   void setRight(QRectF* theWrappedObject, qreal  pos);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   QSizeF  size(QRectF* theWrappedObject) const;
   void setX(QRectF* theWrappedObject, qreal  pos);
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   bool  operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   bool  isValid(QRectF* theWrappedObject) const;
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   qreal  height(QRectF* theWrappedObject) const;
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   QPointF  topLeft(QRectF* theWrappedObject) const;
   qreal  y(QRectF* theWrappedObject) const;
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   qreal  top(QRectF* theWrappedObject) const;
   QRect  toRect(QRectF* theWrappedObject) const;
   qreal  x(QRectF* theWrappedObject) const;
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   void setY(QRectF* theWrappedObject, qreal  pos);
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   qreal  right(QRectF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QRECTF_H
