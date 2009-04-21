#ifndef PYTHONQTWRAPPER_QPOLYGONF_H
#define PYTHONQTWRAPPER_QPOLYGONF_H

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

class PythonQtWrapper_QPolygonF : public QObject
{ Q_OBJECT
public:
public slots:
QPolygonF* new_QPolygonF();
QPolygonF* new_QPolygonF(const QPolygon&  a);
QPolygonF* new_QPolygonF(const QPolygonF&  a);
QPolygonF* new_QPolygonF(const QRectF&  r);
QPolygonF* new_QPolygonF(const QVector<QPointF >&  v);
QPolygonF* new_QPolygonF(int  size);
void delete_QPolygonF(QPolygonF* obj) { delete obj; } 
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   void clear(QPolygonF* theWrappedObject);
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   const QPointF&  first(QPolygonF* theWrappedObject) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   const QPointF&  at(QPolygonF* theWrappedObject, int  i) const;
   int  capacity(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   bool  empty(QPolygonF* theWrappedObject) const;
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   bool  isClosed(QPolygonF* theWrappedObject) const;
   void squeeze(QPolygonF* theWrappedObject);
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   bool  operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void pop_front(QPolygonF* theWrappedObject);
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   int  count(QPolygonF* theWrappedObject) const;
   QVector<QPointF >&  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   void reserve(QPolygonF* theWrappedObject, int  size);
   void resize(QPolygonF* theWrappedObject, int  size);
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   void pop_back(QPolygonF* theWrappedObject);
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   const QPointF&  last(QPolygonF* theWrappedObject) const;
   int  size(QPolygonF* theWrappedObject) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
   void remove(QPolygonF* theWrappedObject, int  i);
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
};

#endif // PYTHONQTWRAPPER_QPOLYGONF_H
