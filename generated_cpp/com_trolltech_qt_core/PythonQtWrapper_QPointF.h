#ifndef PYTHONQTWRAPPER_QPOINTF_H
#define PYTHONQTWRAPPER_QPOINTF_H

#include <qpoint.h>
#include <QObject>

#include <PythonQt.h>

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
QPointF* new_QPointF(const QPointF& other) {
QPointF* a = new QPointF();
*((QPointF*)a) = other;
return a; }
void delete_QPointF(QPointF* obj) { delete obj; } 
   QPointF*  operator_subtract_assign(QPointF* theWrappedObject, const QPointF&  p);
   QPointF*  operator_divide_assign(QPointF* theWrappedObject, qreal  c);
   qreal  x(QPointF* theWrappedObject) const;
   QPointF*  operator_multiply_assign(QPointF* theWrappedObject, qreal  c);
   void setX(QPointF* theWrappedObject, qreal  x);
   void writeTo(QPointF* theWrappedObject, QDataStream&  arg__1);
   bool  isNull(QPointF* theWrappedObject) const;
   QPoint  toPoint(QPointF* theWrappedObject) const;
   QPointF*  operator_add_assign(QPointF* theWrappedObject, const QPointF&  p);
   qreal  y(QPointF* theWrappedObject) const;
   void setY(QPointF* theWrappedObject, qreal  y);
   bool  operator_equal(QPointF* theWrappedObject, const QPointF&  p2);
   void readFrom(QPointF* theWrappedObject, QDataStream&  arg__1);
    QString toString(QPointF*);
};

#endif // PYTHONQTWRAPPER_QPOINTF_H
