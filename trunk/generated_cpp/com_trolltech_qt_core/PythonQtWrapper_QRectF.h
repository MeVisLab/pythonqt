#ifndef PYTHONQTWRAPPER_QRECTF_H
#define PYTHONQTWRAPPER_QRECTF_H

#include <qrect.h>
#include <QObject>

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
void delete_QRectF(QRectF* obj) { delete obj; } 
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   qreal  bottom(QRectF* theWrappedObject) const;
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   QPointF  center(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   qreal  height(QRectF* theWrappedObject) const;
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  isEmpty(QRectF* theWrappedObject) const;
   bool  isNull(QRectF* theWrappedObject) const;
   bool  isValid(QRectF* theWrappedObject) const;
   qreal  left(QRectF* theWrappedObject) const;
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  t);
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  normalized(QRectF* theWrappedObject) const;
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2);
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   qreal  right(QRectF* theWrappedObject) const;
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setHeight(QRectF* theWrappedObject, qreal  h);
   void setLeft(QRectF* theWrappedObject, qreal  pos);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setRight(QRectF* theWrappedObject, qreal  pos);
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   void setWidth(QRectF* theWrappedObject, qreal  w);
   void setX(QRectF* theWrappedObject, qreal  pos);
   void setY(QRectF* theWrappedObject, qreal  pos);
   QSizeF  size(QRectF* theWrappedObject) const;
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   QRect  toRect(QRectF* theWrappedObject) const;
   qreal  top(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   QPointF  topRight(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   qreal  width(QRectF* theWrappedObject) const;
   qreal  x(QRectF* theWrappedObject) const;
   qreal  y(QRectF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QRECTF_H
