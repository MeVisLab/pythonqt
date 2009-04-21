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
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void pop_front(QPolygonF* theWrappedObject);
   bool  isClosed(QPolygonF* theWrappedObject) const;
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   const QPointF&  first(QPolygonF* theWrappedObject) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   bool  operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   void pop_back(QPolygonF* theWrappedObject);
   void reserve(QPolygonF* theWrappedObject, int  size);
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   void clear(QPolygonF* theWrappedObject);
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   const QPointF&  last(QPolygonF* theWrappedObject) const;
   void remove(QPolygonF* theWrappedObject, int  i);
   int  capacity(QPolygonF* theWrappedObject) const;
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   void squeeze(QPolygonF* theWrappedObject);
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
   int  size(QPolygonF* theWrappedObject) const;
   const QPointF&  at(QPolygonF* theWrappedObject, int  i) const;
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   void resize(QPolygonF* theWrappedObject, int  size);
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   int  count(QPolygonF* theWrappedObject) const;
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   QVector<QPointF >&  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
};

#endif // PYTHONQTWRAPPER_QPOLYGONF_H
