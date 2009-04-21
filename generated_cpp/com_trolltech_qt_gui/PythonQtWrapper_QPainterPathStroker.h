#ifndef PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H
#define PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H

#include <qpainterpath.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qpainterpath.h>
#include <qvector.h>

class PythonQtWrapper_QPainterPathStroker : public QObject
{ Q_OBJECT
public:
public slots:
QPainterPathStroker* new_QPainterPathStroker();
void delete_QPainterPathStroker(QPainterPathStroker* obj) { delete obj; } 
   QPainterPath  createStroke(QPainterPathStroker* theWrappedObject, const QPainterPath&  path) const;
   void setDashPattern(QPainterPathStroker* theWrappedObject, Qt::PenStyle  arg__1);
   qreal  dashOffset(QPainterPathStroker* theWrappedObject) const;
   void setCapStyle(QPainterPathStroker* theWrappedObject, Qt::PenCapStyle  style);
   void setDashPattern(QPainterPathStroker* theWrappedObject, const QVector<qreal >&  dashPattern);
   void setJoinStyle(QPainterPathStroker* theWrappedObject, Qt::PenJoinStyle  style);
   Qt::PenCapStyle  capStyle(QPainterPathStroker* theWrappedObject) const;
   qreal  curveThreshold(QPainterPathStroker* theWrappedObject) const;
   Qt::PenJoinStyle  joinStyle(QPainterPathStroker* theWrappedObject) const;
   void setWidth(QPainterPathStroker* theWrappedObject, qreal  width);
   QVector<qreal >  dashPattern(QPainterPathStroker* theWrappedObject) const;
   void setMiterLimit(QPainterPathStroker* theWrappedObject, qreal  length);
   void setCurveThreshold(QPainterPathStroker* theWrappedObject, qreal  threshold);
   qreal  miterLimit(QPainterPathStroker* theWrappedObject) const;
   void setDashOffset(QPainterPathStroker* theWrappedObject, qreal  offset);
   qreal  width(QPainterPathStroker* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QPAINTERPATHSTROKER_H
