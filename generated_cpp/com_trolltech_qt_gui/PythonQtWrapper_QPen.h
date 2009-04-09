#ifndef PYTHONQTWRAPPER_QPEN_H
#define PYTHONQTWRAPPER_QPEN_H

#include <qpen.h>
#include <QObject>

#include <QBrush>
#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qpen.h>
#include <qvector.h>

class PythonQtWrapper_QPen : public QObject
{ Q_OBJECT
public:
public slots:
QPen* new_QPen();
QPen* new_QPen(Qt::PenStyle  arg__1);
QPen* new_QPen(const QBrush&  brush, qreal  width, Qt::PenStyle  s = Qt::SolidLine, Qt::PenCapStyle  c = Qt::SquareCap, Qt::PenJoinStyle  j = Qt::BevelJoin);
QPen* new_QPen(const QColor&  color);
QPen* new_QPen(const QPen&  pen);
void delete_QPen(QPen* obj) { delete obj; } 
   QBrush  brush(QPen* theWrappedObject) const;
   Qt::PenCapStyle  capStyle(QPen* theWrappedObject) const;
   QColor  color(QPen* theWrappedObject) const;
   qreal  dashOffset(QPen* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPen* theWrappedObject) const;
   bool  isCosmetic(QPen* theWrappedObject) const;
   bool  isSolid(QPen* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPen* theWrappedObject) const;
   qreal  miterLimit(QPen* theWrappedObject) const;
   void writeTo(QPen* theWrappedObject, QDataStream&  arg__1);
   bool  operator_equal(QPen* theWrappedObject, const QPen&  p) const;
   void readFrom(QPen* theWrappedObject, QDataStream&  arg__1);
   void setBrush(QPen* theWrappedObject, const QBrush&  brush);
   void setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs);
   void setColor(QPen* theWrappedObject, const QColor&  color);
   void setCosmetic(QPen* theWrappedObject, bool  cosmetic);
   void setDashOffset(QPen* theWrappedObject, qreal  doffset);
   void setDashPattern(QPen* theWrappedObject, const QVector<qreal >&  pattern);
   void setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs);
   void setMiterLimit(QPen* theWrappedObject, qreal  limit);
   void setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1);
   void setWidth(QPen* theWrappedObject, int  width);
   void setWidthF(QPen* theWrappedObject, qreal  width);
   Qt::PenStyle  style(QPen* theWrappedObject) const;
   int  width(QPen* theWrappedObject) const;
   qreal  widthF(QPen* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPEN_H
