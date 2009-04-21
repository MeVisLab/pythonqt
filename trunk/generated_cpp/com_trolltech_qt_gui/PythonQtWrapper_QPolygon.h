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
   void resize(QPolygon* theWrappedObject, int  size);
   void pop_front(QPolygon* theWrappedObject);
   void reserve(QPolygon* theWrappedObject, int  size);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   void remove(QPolygon* theWrappedObject, int  i);
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   void pop_back(QPolygon* theWrappedObject);
   void clear(QPolygon* theWrappedObject);
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
   bool  empty(QPolygon* theWrappedObject) const;
   const QPoint&  first(QPolygon* theWrappedObject) const;
   void squeeze(QPolygon* theWrappedObject);
   QVector<QPoint >&  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   int  count(QPolygon* theWrappedObject) const;
   int  capacity(QPolygon* theWrappedObject) const;
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   bool  isEmpty(QPolygon* theWrappedObject) const;
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
   const QPoint&  at(QPolygon* theWrappedObject, int  i) const;
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   int  size(QPolygon* theWrappedObject) const;
   const QPoint&  last(QPolygon* theWrappedObject) const;
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
};

#endif // PYTHONQTWRAPPER_QPOLYGON_H
