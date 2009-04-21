#ifndef PYTHONQTWRAPPER_QLINEARGRADIENT_H
#define PYTHONQTWRAPPER_QLINEARGRADIENT_H

#include <qbrush.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbrush.h>
#include <qcolor.h>
#include <qpair.h>
#include <qpoint.h>
#include <qvector.h>

class PythonQtWrapper_QLinearGradient : public QObject
{ Q_OBJECT
public:
public slots:
QLinearGradient* new_QLinearGradient();
QLinearGradient* new_QLinearGradient(const QPointF&  start, const QPointF&  finalStop);
QLinearGradient* new_QLinearGradient(qreal  xStart, qreal  yStart, qreal  xFinalStop, qreal  yFinalStop);
QLinearGradient* new_QLinearGradient(const QLinearGradient& other) {
QLinearGradient* a = new QLinearGradient();
*((QLinearGradient*)a) = other;
return a; }
void delete_QLinearGradient(QLinearGradient* obj) { delete obj; } 
   void setStart(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   void setFinalStop(QLinearGradient* theWrappedObject, const QPointF&  stop);
   void setFinalStop(QLinearGradient* theWrappedObject, qreal  x, qreal  y);
   QPointF  start(QLinearGradient* theWrappedObject) const;
   void setStart(QLinearGradient* theWrappedObject, const QPointF&  start);
   QPointF  finalStop(QLinearGradient* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QLINEARGRADIENT_H
