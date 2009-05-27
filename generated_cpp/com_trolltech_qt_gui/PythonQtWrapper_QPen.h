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
   QVector<qreal >  dashPattern(QPen* theWrappedObject) const;
   void writeTo(QPen* theWrappedObject, QDataStream&  arg__1);
   QBrush  brush(QPen* theWrappedObject) const;
   qreal  miterLimit(QPen* theWrappedObject) const;
   void setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs);
   void setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs);
   int  width(QPen* theWrappedObject) const;
   Qt::PenCapStyle  capStyle(QPen* theWrappedObject) const;
   void setWidthF(QPen* theWrappedObject, qreal  width);
   bool  isCosmetic(QPen* theWrappedObject) const;
   void readFrom(QPen* theWrappedObject, QDataStream&  arg__1);
   void setDashPattern(QPen* theWrappedObject, const QVector<qreal >&  pattern);
   qreal  widthF(QPen* theWrappedObject) const;
   void setDashOffset(QPen* theWrappedObject, qreal  doffset);
   bool  operator_equal(QPen* theWrappedObject, const QPen&  p) const;
   void setMiterLimit(QPen* theWrappedObject, qreal  limit);
   void setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1);
   QColor  color(QPen* theWrappedObject) const;
   void setCosmetic(QPen* theWrappedObject, bool  cosmetic);
   void setBrush(QPen* theWrappedObject, const QBrush&  brush);
   qreal  dashOffset(QPen* theWrappedObject) const;
   Qt::PenStyle  style(QPen* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPen* theWrappedObject) const;
   void setColor(QPen* theWrappedObject, const QColor&  color);
   bool  isSolid(QPen* theWrappedObject) const;
   void setWidth(QPen* theWrappedObject, int  width);
    QString toString(QPen*);
};

#endif // PYTHONQTWRAPPER_QPEN_H
