#ifndef PYTHONQTWRAPPER_QRECT_H
#define PYTHONQTWRAPPER_QRECT_H

#include <qrect.h>
#include <QObject>

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
void delete_QRect(QRect* obj) { delete obj; } 
   void adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   QRect  adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const;
   int  bottom(QRect* theWrappedObject) const;
   QPoint  bottomLeft(QRect* theWrappedObject) const;
   QPoint  bottomRight(QRect* theWrappedObject) const;
   QPoint  center(QRect* theWrappedObject) const;
   bool  contains(QRect* theWrappedObject, const QPoint&  p, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, const QRect&  r, bool  proper = false) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y) const;
   bool  contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const;
   int  height(QRect* theWrappedObject) const;
   QRect  intersected(QRect* theWrappedObject, const QRect&  other) const;
   bool  intersects(QRect* theWrappedObject, const QRect&  r) const;
   bool  isEmpty(QRect* theWrappedObject) const;
   bool  isNull(QRect* theWrappedObject) const;
   bool  isValid(QRect* theWrappedObject) const;
   int  left(QRect* theWrappedObject) const;
   void moveBottom(QRect* theWrappedObject, int  pos);
   void moveBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void moveCenter(QRect* theWrappedObject, const QPoint&  p);
   void moveLeft(QRect* theWrappedObject, int  pos);
   void moveRight(QRect* theWrappedObject, int  pos);
   void moveTo(QRect* theWrappedObject, const QPoint&  p);
   void moveTo(QRect* theWrappedObject, int  x, int  t);
   void moveTop(QRect* theWrappedObject, int  pos);
   void moveTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void moveTopRight(QRect* theWrappedObject, const QPoint&  p);
   QRect  normalized(QRect* theWrappedObject) const;
   void writeTo(QRect* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QRect* theWrappedObject, const QRect&  arg__2);
   void readFrom(QRect* theWrappedObject, QDataStream&  arg__1);
   int  right(QRect* theWrappedObject) const;
   void setBottom(QRect* theWrappedObject, int  pos);
   void setBottomLeft(QRect* theWrappedObject, const QPoint&  p);
   void setBottomRight(QRect* theWrappedObject, const QPoint&  p);
   void setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setHeight(QRect* theWrappedObject, int  h);
   void setLeft(QRect* theWrappedObject, int  pos);
   void setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h);
   void setRight(QRect* theWrappedObject, int  pos);
   void setSize(QRect* theWrappedObject, const QSize&  s);
   void setTop(QRect* theWrappedObject, int  pos);
   void setTopLeft(QRect* theWrappedObject, const QPoint&  p);
   void setTopRight(QRect* theWrappedObject, const QPoint&  p);
   void setWidth(QRect* theWrappedObject, int  w);
   void setX(QRect* theWrappedObject, int  x);
   void setY(QRect* theWrappedObject, int  y);
   QSize  size(QRect* theWrappedObject) const;
   int  top(QRect* theWrappedObject) const;
   QPoint  topLeft(QRect* theWrappedObject) const;
   QPoint  topRight(QRect* theWrappedObject) const;
   void translate(QRect* theWrappedObject, const QPoint&  p);
   void translate(QRect* theWrappedObject, int  dx, int  dy);
   QRect  translated(QRect* theWrappedObject, const QPoint&  p) const;
   QRect  translated(QRect* theWrappedObject, int  dx, int  dy) const;
   QRect  united(QRect* theWrappedObject, const QRect&  other) const;
   int  width(QRect* theWrappedObject) const;
   int  x(QRect* theWrappedObject) const;
   int  y(QRect* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QRECT_H
