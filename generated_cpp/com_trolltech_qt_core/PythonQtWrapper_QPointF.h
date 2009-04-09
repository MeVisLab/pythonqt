#ifndef PYTHONQTWRAPPER_QPOINTF_H
#define PYTHONQTWRAPPER_QPOINTF_H

#include <qpoint.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>

class PythonQtWrapper_QPointF : public QObject
{ Q_OBJECT
public:
public slots:
QPointF* new_QPointF();
QPointF* new_QPointF(const QPoint&  p);
QPointF* new_QPointF(qreal  xpos, qreal  ypos);
void delete_QPointF(QPointF* obj) { delete obj; } 
   bool  isNull(QPointF* theWrappedObject) const;
   QPointF&  operator_multiply_assign(QPointF* theWrappedObject, qreal  c);
   QPointF&  operator_add_assign(QPointF* theWrappedObject, const QPointF&  p);
   QPointF&  operator_subtract_assign(QPointF* theWrappedObject, const QPointF&  p);
   QPointF&  operator_divide_assign(QPointF* theWrappedObject, qreal  c);
   void writeTo(QPointF* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QPointF* theWrappedObject, const QPointF&  p2);
   void readFrom(QPointF* theWrappedObject, QDataStream&  arg__1);
   void setX(QPointF* theWrappedObject, qreal  x);
   void setY(QPointF* theWrappedObject, qreal  y);
   QPoint  toPoint(QPointF* theWrappedObject) const;
   qreal  x(QPointF* theWrappedObject) const;
   qreal  y(QPointF* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPOINTF_H
