#ifndef PYTHONQTWRAPPER_QPOLYGON_H
#define PYTHONQTWRAPPER_QPOLYGON_H

#include <qpolygon.h>
#include <QObject>

#include <PythonQt.h>

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
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   bool  isEmpty(QPolygon* theWrappedObject) const;
   int  capacity(QPolygon* theWrappedObject) const;
   void pop_back(QPolygon* theWrappedObject);
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   int  count(QPolygon* theWrappedObject) const;
   const QPoint&  last(QPolygon* theWrappedObject) const;
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void pop_front(QPolygon* theWrappedObject);
   const QPoint&  first(QPolygon* theWrappedObject) const;
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   void squeeze(QPolygon* theWrappedObject);
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void remove(QPolygon* theWrappedObject, int  i);
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   QVector<QPoint >&  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   void resize(QPolygon* theWrappedObject, int  size);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  empty(QPolygon* theWrappedObject) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   void reserve(QPolygon* theWrappedObject, int  size);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   void clear(QPolygon* theWrappedObject);
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   int  size(QPolygon* theWrappedObject) const;
   const QPoint&  at(QPolygon* theWrappedObject, int  i) const;
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
};

#endif // PYTHONQTWRAPPER_QPOLYGON_H
