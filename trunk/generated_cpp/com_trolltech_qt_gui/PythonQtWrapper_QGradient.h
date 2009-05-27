#ifndef PYTHONQTWRAPPER_QGRADIENT_H
#define PYTHONQTWRAPPER_QGRADIENT_H

#include <qbrush.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qvector.h>

class PythonQtWrapper_QGradient : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CoordinateMode Spread Type )
enum CoordinateMode{
  LogicalMode = QGradient::LogicalMode,   StretchToDeviceMode = QGradient::StretchToDeviceMode,   ObjectBoundingMode = QGradient::ObjectBoundingMode};
enum Spread{
  PadSpread = QGradient::PadSpread,   ReflectSpread = QGradient::ReflectSpread,   RepeatSpread = QGradient::RepeatSpread};
enum Type{
  LinearGradient = QGradient::LinearGradient,   RadialGradient = QGradient::RadialGradient,   ConicalGradient = QGradient::ConicalGradient,   NoGradient = QGradient::NoGradient};
public slots:
QGradient* new_QGradient();
QGradient* new_QGradient(const QGradient& other) {
QGradient* a = new QGradient();
*((QGradient*)a) = other;
return a; }
void delete_QGradient(QGradient* obj) { delete obj; } 
   QVector<QPair<qreal , QColor >  >  stops(QGradient* theWrappedObject) const;
   QGradient::CoordinateMode  coordinateMode(QGradient* theWrappedObject) const;
   QGradient::Spread  spread(QGradient* theWrappedObject) const;
   void setColorAt(QGradient* theWrappedObject, qreal  pos, const QColor&  color);
   void setSpread(QGradient* theWrappedObject, QGradient::Spread  spread);
   QGradient::Type  type(QGradient* theWrappedObject) const;
   void setCoordinateMode(QGradient* theWrappedObject, QGradient::CoordinateMode  mode);
   void setStops(QGradient* theWrappedObject, const QVector<QPair<qreal , QColor >  >&  stops);
   bool  operator_equal(QGradient* theWrappedObject, const QGradient&  gradient) const;
};

#endif // PYTHONQTWRAPPER_QGRADIENT_H
