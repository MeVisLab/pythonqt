#ifndef PYTHONQTWRAPPER_QPEN_H
#define PYTHONQTWRAPPER_QPEN_H

#include <qpen.h>
#include <QObject>

#include <PythonQt.h>

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
   bool  isSolid(QPen* theWrappedObject) const;
   void readFrom(QPen* theWrappedObject, QDataStream&  arg__1);
   void setWidthF(QPen* theWrappedObject, qreal  width);
   void setColor(QPen* theWrappedObject, const QColor&  color);
   Qt::PenCapStyle  capStyle(QPen* theWrappedObject) const;
   QBrush  brush(QPen* theWrappedObject) const;
   qreal  dashOffset(QPen* theWrappedObject) const;
   void setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs);
   void setMiterLimit(QPen* theWrappedObject, qreal  limit);
   void writeTo(QPen* theWrappedObject, QDataStream&  arg__1);
   bool  isCosmetic(QPen* theWrappedObject) const;
   void setDashOffset(QPen* theWrappedObject, qreal  doffset);
   void setCosmetic(QPen* theWrappedObject, bool  cosmetic);
   int  width(QPen* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPen* theWrappedObject) const;
   void setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1);
   void setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs);
   void setDashPattern(QPen* theWrappedObject, const QVector<qreal >&  pattern);
   Qt::PenStyle  style(QPen* theWrappedObject) const;
   QColor  color(QPen* theWrappedObject) const;
   qreal  widthF(QPen* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPen* theWrappedObject) const;
   void setWidth(QPen* theWrappedObject, int  width);
   bool  operator_equal(QPen* theWrappedObject, const QPen&  p) const;
   void setBrush(QPen* theWrappedObject, const QBrush&  brush);
   qreal  miterLimit(QPen* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPEN_H
