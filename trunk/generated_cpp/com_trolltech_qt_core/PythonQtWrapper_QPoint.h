#ifndef PYTHONQTWRAPPER_QPOINT_H
#define PYTHONQTWRAPPER_QPOINT_H

#include <qpoint.h>
#include <QObject>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>

class PythonQtWrapper_QPoint : public QObject
{ Q_OBJECT
public:
public slots:
QPoint* new_QPoint();
QPoint* new_QPoint(int  xpos, int  ypos);
void delete_QPoint(QPoint* obj) { delete obj; } 
   bool  isNull(QPoint* theWrappedObject) const;
   int  manhattanLength(QPoint* theWrappedObject) const;
   QPoint&  operator_multiply_assign(QPoint* theWrappedObject, qreal  c);
   QPoint&  operator_add_assign(QPoint* theWrappedObject, const QPoint&  p);
   QPoint&  operator_subtract_assign(QPoint* theWrappedObject, const QPoint&  p);
   QPoint&  operator_divide_assign(QPoint* theWrappedObject, qreal  c);
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QPoint* theWrappedObject, const QPoint&  p2);
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
   void setX(QPoint* theWrappedObject, int  x);
   void setY(QPoint* theWrappedObject, int  y);
   int  x(QPoint* theWrappedObject) const;
   int  y(QPoint* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPOINT_H
