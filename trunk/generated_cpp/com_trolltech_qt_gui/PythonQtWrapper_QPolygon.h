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
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   QVector<QPoint >*  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   void squeeze(QPolygon* theWrappedObject);
   void pop_back(QPolygon* theWrappedObject);
   void reserve(QPolygon* theWrappedObject, int  size);
   const QPoint*  first(QPolygon* theWrappedObject) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   bool  empty(QPolygon* theWrappedObject) const;
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   void pop_front(QPolygon* theWrappedObject);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   void clear(QPolygon* theWrappedObject);
   int  size(QPolygon* theWrappedObject) const;
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   void resize(QPolygon* theWrappedObject, int  size);
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   const QPoint*  at(QPolygon* theWrappedObject, int  i) const;
   int  count(QPolygon* theWrappedObject) const;
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   bool  isEmpty(QPolygon* theWrappedObject) const;
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
   int  capacity(QPolygon* theWrappedObject) const;
   const QPoint*  last(QPolygon* theWrappedObject) const;
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   void remove(QPolygon* theWrappedObject, int  i);
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
    QString toString(QPolygon*);
};

#endif // PYTHONQTWRAPPER_QPOLYGON_H
