#ifndef PYTHONQTWRAPPER_QREADWRITELOCK_H
#define PYTHONQTWRAPPER_QREADWRITELOCK_H

#include <qreadwritelock.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qreadwritelock.h>

class PythonQtWrapper_QReadWriteLock : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QReadWriteLock::NonRecursive,   Recursive = QReadWriteLock::Recursive};
public slots:
QReadWriteLock* new_QReadWriteLock();
QReadWriteLock* new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode);
void delete_QReadWriteLock(QReadWriteLock* obj) { delete obj; } 
   void lockForRead(QReadWriteLock* theWrappedObject);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout);
   void lockForWrite(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject);
   void unlock(QReadWriteLock* theWrappedObject);
   bool  tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout);
   bool  tryLockForWrite(QReadWriteLock* theWrappedObject);
};

#endif // PYTHONQTWRAPPER_QREADWRITELOCK_H
