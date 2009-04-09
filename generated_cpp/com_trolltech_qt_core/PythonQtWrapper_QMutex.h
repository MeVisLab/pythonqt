#ifndef PYTHONQTWRAPPER_QMUTEX_H
#define PYTHONQTWRAPPER_QMUTEX_H

#include <qmutex.h>
#include <QObject>

#include <QVariant>
#include <qmutex.h>

class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   void lock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   void unlock(QMutex* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QMUTEX_H
