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
   bool  operator_equal(QPoint* theWrappedObject, const QPoint&  p2);
   void setY(QPoint* theWrappedObject, int  y);
   QPoint*  operator_add_assign(QPoint* theWrappedObject, const QPoint&  p);
   QPoint*  operator_multiply_assign(QPoint* theWrappedObject, qreal  c);
   bool  isNull(QPoint* theWrappedObject) const;
   void writeTo(QPoint* theWrappedObject, QDataStream&  arg__1);
   int  y(QPoint* theWrappedObject) const;
   int  manhattanLength(QPoint* theWrappedObject) const;
   QPoint*  operator_subtract_assign(QPoint* theWrappedObject, const QPoint&  p);
   void setX(QPoint* theWrappedObject, int  x);
   QPoint*  operator_divide_assign(QPoint* theWrappedObject, qreal  c);
   int  x(QPoint* theWrappedObject) const;
   void readFrom(QPoint* theWrappedObject, QDataStream&  arg__1);
    QString toString(QPoint*);
};

#endif // PYTHONQTWRAPPER_QPOINT_H
