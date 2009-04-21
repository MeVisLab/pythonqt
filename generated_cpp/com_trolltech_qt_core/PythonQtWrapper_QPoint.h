#ifndef PYTHONQTWRAPPER_QPOINT_H
#define PYTHONQTWRAPPER_QPOINT_H

#include <qpoint.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qpoint.h>

class PythonQtWrapper_QPoint : public QObject
{ Q_OBJECT
public:
public slots:
QPoint* new_QPoint();
QPoint* new_QPoint(int  xpos, int  ypos);
QPoint* new_QPoint(const QPoint& other) {
QPoint* a = new QPoint();
*((QPoint*)a) = other;
return a; }
void delete_QPoint(QPoint* obj) { delete obj; } 
   int  manhattanLength(QPoint* theWrappedObject) const;
   void setY(QPoint* theWrappedObject, int  y);
   QPoint&  operator_subtract_assign(QPoint* theWrappedObject, const QPoint&  p);
   QPoint&  operator_add_assign(QPoint* theWrappedObject, const QPoint&  p);
   int  x(QPoint* theWrappedObject) const;
   bool  isNull(QPoint* theWrappedObject) const;
   void setX(QPoint* theWrappedObject, int  x);
   QPoint&  operator_multiply_assign(QPoint* theWrappedObject, qreal  c);
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   QPoint&  operator_divide_assign(QPoint* theWrappedObject, qreal  c);
   bool  operator_equal(QPoint* theWrappedObject, const QPoint&  p2);
   int  y(QPoint* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPOINT_H
