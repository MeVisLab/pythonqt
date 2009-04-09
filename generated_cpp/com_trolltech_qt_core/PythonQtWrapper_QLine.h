#ifndef PYTHONQTWRAPPER_QLINE_H
#define PYTHONQTWRAPPER_QLINE_H

#include <qline.h>
#include <QObject>

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
void delete_QLine(QLine* obj) { delete obj; } 
   int  dx(QLine* theWrappedObject) const;
   int  dy(QLine* theWrappedObject) const;
   bool  isNull(QLine* theWrappedObject) const;
   void writeTo(QLine* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QLine* theWrappedObject, const QLine&  d) const;
   void readFrom(QLine* theWrappedObject, QDataStream&  arg__1);
   QPoint  p1(QLine* theWrappedObject) const;
   QPoint  p2(QLine* theWrappedObject) const;
   void setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2);
   void setP1(QLine* theWrappedObject, const QPoint&  p1);
   void setP2(QLine* theWrappedObject, const QPoint&  p2);
   void setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2);
   void translate(QLine* theWrappedObject, const QPoint&  p);
   void translate(QLine* theWrappedObject, int  dx, int  dy);
   QLine  translated(QLine* theWrappedObject, const QPoint&  p) const;
   QLine  translated(QLine* theWrappedObject, int  dx, int  dy) const;
   int  x1(QLine* theWrappedObject) const;
   int  x2(QLine* theWrappedObject) const;
   int  y1(QLine* theWrappedObject) const;
   int  y2(QLine* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLINE_H
