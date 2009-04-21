#ifndef PYTHONQTWRAPPER_QCONICALGRADIENT_H
#define PYTHONQTWRAPPER_QCONICALGRADIENT_H

#include <qbrush.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; } 
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   qreal  angle(QConicalGradient* theWrappedObject) const;
   QPointF  center(QConicalGradient* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QCONICALGRADIENT_H
