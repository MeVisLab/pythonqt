#ifndef PYTHONQTWRAPPER_QPOLYGON_H
#define PYTHONQTWRAPPER_QPOLYGON_H

#include <qpolygon.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qlist.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qvector.h>

class PythonQtWrapper_QPolygon : public QObject
{ Q_OBJECT
public:
public slots:
QPolygon* new_QPolygon();
QPolygon* new_QPolygon(const QPolygon&  a);
QPolygon* new_QPolygon(const QRect&  r, bool  closed = false);
QPolygon* new_QPolygon(const QVector<QPoint >&  v);
QPolygon* new_QPolygon(int  size);
void delete_QPolygon(QPolygon* obj) { delete obj; } 
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   const QPoint&  at(QPolygon* theWrappedObject, int  i) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   int  capacity(QPolygon* theWrappedObject) const;
   void clear(QPolygon* theWrappedObject);
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   int  count(QPolygon* theWrappedObject) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   bool  empty(QPolygon* theWrappedObject) const;
   QVector<QPoint >&  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   const QPoint&  first(QPolygon* theWrappedObject) const;
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  isEmpty(QPolygon* theWrappedObject) const;
   const QPoint&  last(QPolygon* theWrappedObject) const;
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   void pop_back(QPolygon* theWrappedObject);
   void pop_front(QPolygon* theWrappedObject);
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
   void remove(QPolygon* theWrappedObject, int  i);
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   void reserve(QPolygon* theWrappedObject, int  size);
   void resize(QPolygon* theWrappedObject, int  size);
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   int  size(QPolygon* theWrappedObject) const;
   void squeeze(QPolygon* theWrappedObject);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
};

#endif // PYTHONQTWRAPPER_QPOLYGON_H
