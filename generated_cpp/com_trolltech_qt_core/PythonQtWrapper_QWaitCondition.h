#ifndef PYTHONQTWRAPPER_QWAITCONDITION_H
#define PYTHONQTWRAPPER_QWAITCONDITION_H

#include <qwaitcondition.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qmutex.h>
#include <qreadwritelock.h>
#include <qwaitcondition.h>

class PythonQtWrapper_QWaitCondition : public QObject
{ Q_OBJECT
public:
public slots:
QWaitCondition* new_QWaitCondition();
void delete_QWaitCondition(QWaitCondition* obj) { delete obj; } 
   bool  wait(QWaitCondition* theWrappedObject, QReadWriteLock*  readWriteLock, unsigned long  time = 0xffffffffUL);
   void wakeAll(QWaitCondition* theWrappedObject);
   void wakeOne(QWaitCondition* theWrappedObject);
   bool  wait(QWaitCondition* theWrappedObject, QMutex*  mutex, unsigned long  time = 0xffffffffUL);
};

#endif // PYTHONQTWRAPPER_QWAITCONDITION_H
