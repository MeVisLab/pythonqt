#ifndef PYTHONQTWRAPPER_QBASICTIMER_H
#define PYTHONQTWRAPPER_QBASICTIMER_H

#include <qbasictimer.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qobject.h>

class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer& other) {
QBasicTimer* a = new QBasicTimer();
*((QBasicTimer*)a) = other;
return a; }
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; } 
   void stop(QBasicTimer* theWrappedObject);
   bool  isActive(QBasicTimer* theWrappedObject) const;
   int  timerId(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
};

#endif // PYTHONQTWRAPPER_QBASICTIMER_H
