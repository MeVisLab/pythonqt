#ifndef PYTHONQTWRAPPER_QGRADIENT_H
#define PYTHONQTWRAPPER_QGRADIENT_H

#include <qbrush.h>
#include <QObject>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qvector.h>

class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
public slots:
QGradient* new_QGradient();
void delete_QGradient(QGradient* obj) { delete obj; } 
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   bool  operator_equal(QGradient* theWrappedObject, const QGradient&  gradient) const;
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
   void setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops);
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   QGradient::Type  type(QGradient* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QGRADIENT_H
