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
   int  indexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   const QPointF*  first(QPolygonF* theWrappedObject) const;
   bool  operator_equal(QPolygonF* theWrappedObject, const QVector<QPointF >&  v) const;
   void remove(QPolygonF* theWrappedObject, int  i);
   bool  contains(QPolygonF* theWrappedObject, const QPointF&  t) const;
   void translate(QPolygonF* theWrappedObject, const QPointF&  offset);
   void translate(QPolygonF* theWrappedObject, qreal  dx, qreal  dy);
   QPolygonF  united(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QRectF  boundingRect(QPolygonF* theWrappedObject) const;
   void clear(QPolygonF* theWrappedObject);
   int  lastIndexOf(QPolygonF* theWrappedObject, const QPointF&  t, int  from) const;
   int  size(QPolygonF* theWrappedObject) const;
   void append(QPolygonF* theWrappedObject, const QPointF&  t);
   int  capacity(QPolygonF* theWrappedObject) const;
   QVector<QPointF >  mid(QPolygonF* theWrappedObject, int  pos, int  length) const;
   bool  containsPoint(QPolygonF* theWrappedObject, const QPointF&  pt, Qt::FillRule  fillRule) const;
   QVector<QPointF >*  fill(QPolygonF* theWrappedObject, const QPointF&  t, int  size);
   QPolygonF  intersected(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   void writeTo(QPolygonF* theWrappedObject, QDataStream&  stream);
   void setSharable(QPolygonF* theWrappedObject, bool  sharable);
   void resize(QPolygonF* theWrappedObject, int  size);
   QPointF  value(QPolygonF* theWrappedObject, int  i, const QPointF&  defaultValue) const;
   void reserve(QPolygonF* theWrappedObject, int  size);
   void squeeze(QPolygonF* theWrappedObject);
   void pop_back(QPolygonF* theWrappedObject);
   void replace(QPolygonF* theWrappedObject, int  i, const QPointF&  t);
   void push_back(QPolygonF* theWrappedObject, const QPointF&  t);
   QVector<QPointF >  static_QPolygonF_fromList(const QList<QPointF >&  list);
   void remove(QPolygonF* theWrappedObject, int  i, int  n);
   void readFrom(QPolygonF* theWrappedObject, QDataStream&  stream);
   void push_front(QPolygonF* theWrappedObject, const QPointF&  t);
   bool  isClosed(QPolygonF* theWrappedObject) const;
   QList<QPointF >  toList(QPolygonF* theWrappedObject) const;
   QPointF  value(QPolygonF* theWrappedObject, int  i) const;
   QPolygonF  subtracted(QPolygonF* theWrappedObject, const QPolygonF&  r) const;
   QPolygon  toPolygon(QPolygonF* theWrappedObject) const;
   const QPointF*  at(QPolygonF* theWrappedObject, int  i) const;
   bool  empty(QPolygonF* theWrappedObject) const;
   int  count(QPolygonF* theWrappedObject, const QPointF&  t) const;
   void pop_front(QPolygonF* theWrappedObject);
   int  count(QPolygonF* theWrappedObject) const;
   bool  isEmpty(QPolygonF* theWrappedObject) const;
   const QPointF*  last(QPolygonF* theWrappedObject) const;
   void prepend(QPolygonF* theWrappedObject, const QPointF&  t);
    QString toString(QPolygonF*);
};

#endif // PYTHONQTWRAPPER_QPOLYGONF_H
