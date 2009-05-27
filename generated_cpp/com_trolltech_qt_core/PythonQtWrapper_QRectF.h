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
   qreal  left(QRectF* theWrappedObject) const;
   void setBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void setWidth(QRectF* theWrappedObject, qreal  w);
   void readFrom(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRectF  translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const;
   QSizeF  size(QRectF* theWrappedObject) const;
   void translate(QRectF* theWrappedObject, qreal  dx, qreal  dy);
   void adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2);
   void writeTo(QRectF* theWrappedObject, QDataStream&  arg__1);
   QRect  toRect(QRectF* theWrappedObject) const;
   QPointF  topRight(QRectF* theWrappedObject) const;
   void setTopRight(QRectF* theWrappedObject, const QPointF&  p);
   void translate(QRectF* theWrappedObject, const QPointF&  p);
   QPointF  center(QRectF* theWrappedObject) const;
   bool  isNull(QRectF* theWrappedObject) const;
   QPointF  topLeft(QRectF* theWrappedObject) const;
   QRectF  adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const;
   qreal  top(QRectF* theWrappedObject) const;
   void moveBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   QRectF  normalized(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, const QRectF&  r) const;
   bool  contains(QRectF* theWrappedObject, const QPointF&  p) const;
   QRectF  translated(QRectF* theWrappedObject, const QPointF&  p) const;
   QPointF  bottomLeft(QRectF* theWrappedObject) const;
   void setHeight(QRectF* theWrappedObject, qreal  h);
   QRectF  intersected(QRectF* theWrappedObject, const QRectF&  other) const;
   qreal  y(QRectF* theWrappedObject) const;
   void moveTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   void moveBottom(QRectF* theWrappedObject, qreal  pos);
   bool  intersects(QRectF* theWrappedObject, const QRectF&  r) const;
   qreal  width(QRectF* theWrappedObject) const;
   QRectF  united(QRectF* theWrappedObject, const QRectF&  other) const;
   void moveLeft(QRectF* theWrappedObject, qreal  pos);
   void setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h);
   void setTop(QRectF* theWrappedObject, qreal  pos);
   void moveTo(QRectF* theWrappedObject, qreal  x, qreal  t);
   bool  isValid(QRectF* theWrappedObject) const;
   void setRight(QRectF* theWrappedObject, qreal  pos);
   void moveTopRight(QRectF* theWrappedObject, const QPointF&  p);
   bool  operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2);
   qreal  bottom(QRectF* theWrappedObject) const;
   void moveCenter(QRectF* theWrappedObject, const QPointF&  p);
   void setTopLeft(QRectF* theWrappedObject, const QPointF&  p);
   qreal  x(QRectF* theWrappedObject) const;
   qreal  height(QRectF* theWrappedObject) const;
   QRect  toAlignedRect(QRectF* theWrappedObject) const;
   bool  contains(QRectF* theWrappedObject, qreal  x, qreal  y) const;
   bool  isEmpty(QRectF* theWrappedObject) const;
   void setY(QRectF* theWrappedObject, qreal  pos);
   void setBottom(QRectF* theWrappedObject, qreal  pos);
   void setBottomRight(QRectF* theWrappedObject, const QPointF&  p);
   void moveTo(QRectF* theWrappedObject, const QPointF&  p);
   void moveRight(QRectF* theWrappedObject, qreal  pos);
   void setX(QRectF* theWrappedObject, qreal  pos);
   void moveTop(QRectF* theWrappedObject, qreal  pos);
   QPointF  bottomRight(QRectF* theWrappedObject) const;
   void moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p);
   void setSize(QRectF* theWrappedObject, const QSizeF&  s);
   qreal  right(QRectF* theWrappedObject) const;
   void setLeft(QRectF* theWrappedObject, qreal  pos);
    QString toString(QRectF*);
};

#endif // PYTHONQTWRAPPER_QRECTF_H
