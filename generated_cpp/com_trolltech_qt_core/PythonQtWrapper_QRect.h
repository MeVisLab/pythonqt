#ifndef PYTHONQTWRAPPER_QRECT_H
#define PYTHONQTWRAPPER_QRECT_H

#include <qrect.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

class PythonQtWrapper_QRect : public QObject
{ Q_OBJECT
public:
public slots:
QRect* new_QRect();
QRect* new_QRect(const QPoint&  topleft, const QPoint&  bottomright);
QRect* new_QRect(const QPoint&  topleft, const QSize&  size);
QRect* new_QRect(int  left, int  top, int  width, int  height);
QRect* new_QRect(const QRect& other) {
QRect* a = new QRect();
*((QRect*)a) = other;
return a; }
void delete_QRect(QRect* obj) { delete obj; } 
   void setLeft(QRect* theWrappedObject, int  pos);
   bool  isNull(QRect* theWrappedObject) const;
   void translate(QRect* theWrappedObject, int  dx, int  dy);
   void translate(QRect* theWrappedObject, const QPoint&  p);
   QRect  intersected(QRect* theWrappedObject, const QRect&  other) const;
   void setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h);
   int  top(QRect* theWrappedObject) const;
   void moveTo(QRect* theWrappedObject, int  x, int  t);
   QSize  size(QRect* theWrappedObject) const;
   QPoint  topLeft(QRect* theWrappedObject) const;
   void moveLeft(QRect* theWrappedObject, int  pos);
   void moveBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   int  y(QRect* theWrappedObject) const;
   void moveTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveCenter(QRect* theWrappedObject, const QPoint&  p);
   void setBottom(QRect* theWrappedObject, int  pos);
   int  x(QRect* theWrappedObject) const;
   int  height(QRect* theWrappedObject) const;
   bool  operator_equal(QRect* theWrappedObject, const QRect&  arg__2);
   void setX(QRect* theWrappedObject, int  x);
   void setRight(QRect* theWrappedObject, int  pos);
   void setY(QRect* theWrappedObject, int  y);
   QRect  translated(QRect* theWrappedObject, int  dx, int  dy) const;
   void setTop(QRect* theWrappedObject, int  pos);
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
   void setTopRight(QRect* theWrappedObject, const QPoint&  p);
   void moveBottom(QRect* theWrappedObject, int  pos);
   int  right(QRect* theWrappedObject) const;
   void setSize(QRect* theWrappedObject, const QSize&  s);
   int  width(QRect* theWrappedObject) const;
   QPoint  center(QRect* theWrappedObject) const;
   bool  intersects(QRect* theWrappedObject, const QRect&  r) const;
   void setBottomRight(QRect* theWrappedObject, const QPoint&  p);
   QRect  united(QRect* theWrappedObject, const QRect&  other) const;
   void adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setTopLeft(QRect* theWrappedObject, const QPoint&  p);
   QPoint  bottomRight(QRect* theWrappedObject) const;
   void moveRight(QRect* theWrappedObject, int  pos);
   void moveBottomRight(QRect* theWrappedObject, const QPoint&  p);
   QRect  translated(QRect* theWrappedObject, const QPoint&  p) const;
   void setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   QPoint  topRight(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y) const;
   void moveTopRight(QRect* theWrappedObject, const QPoint&  p);
   bool  isValid(QRect* theWrappedObject) const;
   bool  isEmpty(QRect* theWrappedObject) const;
   void moveTo(QRect* theWrappedObject, const QPoint&  p);
   bool  contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const;
   void setWidth(QRect* theWrappedObject, int  w);
   int  bottom(QRect* theWrappedObject) const;
   QPoint  bottomLeft(QRect* theWrappedObject) const;
   QRect  normalized(QRect* theWrappedObject) const;
   void setHeight(QRect* theWrappedObject, int  h);
   void moveTop(QRect* theWrappedObject, int  pos);
   void setBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   QRect  adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const;
   int  left(QRect* theWrappedObject) const;
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   bool  contains(QRect* theWrappedObject, const QPoint&  p, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, const QRect&  r, bool  proper = false) const;
};

#endif // PYTHONQTWRAPPER_QRECT_H
