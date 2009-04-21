#ifndef PYTHONQTWRAPPER_QLINE_H
#define PYTHONQTWRAPPER_QLINE_H

#include <qline.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qdatastream.h>
#include <qline.h>
#include <qpoint.h>

class PythonQtWrapper_QLine : public QObject
{ Q_OBJECT
public:
public slots:
QLine* new_QLine();
QLine* new_QLine(const QPoint&  pt1, const QPoint&  pt2);
QLine* new_QLine(int  x1, int  y1, int  x2, int  y2);
QLine* new_QLine(const QLine& other) {
QLine* a = new QLine();
*((QLine*)a) = other;
return a; }
void delete_QLine(QLine* obj) { delete obj; } 
   int  dx(QLine* theWrappedObject) const;
   void setP1(QLine* theWrappedObject, const QPoint&  p1);
   int  x1(QLine* theWrappedObject) const;
   void translate(QLine* theWrappedObject, int  dx, int  dy);
   int  x2(QLine* theWrappedObject) const;
   bool  operator_equal(QLine* theWrappedObject, const QLine&  d) const;
   void setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void readFrom(QLine* theWrappedObject, QDataStream&  arg__1);
   int  y1(QLine* theWrappedObject) const;
   QPoint  p2(QLine* theWrappedObject) const;
   void translate(QLine* theWrappedObject, const QPoint&  p);
   void setP2(QLine* theWrappedObject, const QPoint&  p2);
   bool  isNull(QLine* theWrappedObject) const;
   QLine  translated(QLine* theWrappedObject, const QPoint&  p) const;
   void setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   int  dy(QLine* theWrappedObject) const;
   void writeTo(QLine* theWrappedObject, QDataStream&  arg__1);
   QPoint  p1(QLine* theWrappedObject) const;
   QLine  translated(QLine* theWrappedObject, int  dx, int  dy) const;
   int  y2(QLine* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLINE_H
