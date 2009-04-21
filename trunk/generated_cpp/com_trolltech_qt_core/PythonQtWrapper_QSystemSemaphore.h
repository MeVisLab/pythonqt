#ifndef PYTHONQTWRAPPER_QSYSTEMSEMAPHORE_H
#define PYTHONQTWRAPPER_QSYSTEMSEMAPHORE_H

#include <qsystemsemaphore.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qsystemsemaphore.h>

class PythonQtWrapper_QSystemSemaphore : public QObject
{ Q_OBJECT
public:
Q_ENUMS(AccessMode SystemSemaphoreError )
enum AccessMode{
  Open = QSystemSemaphore::Open,   Create = QSystemSemaphore::Create};
enum SystemSemaphoreError{
  NoError = QSystemSemaphore::NoError,   PermissionDenied = QSystemSemaphore::PermissionDenied,   KeyError = QSystemSemaphore::KeyError,   AlreadyExists = QSystemSemaphore::AlreadyExists,   NotFound = QSystemSemaphore::NotFound,   OutOfResources = QSystemSemaphore::OutOfResources,   UnknownError = QSystemSemaphore::UnknownError};
public slots:
QSystemSemaphore* new_QSystemSemaphore(const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
void delete_QSystemSemaphore(QSystemSemaphore* obj) { delete obj; } 
   void setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue = 0, QSystemSemaphore::AccessMode  mode = QSystemSemaphore::Open);
   bool  acquire(QSystemSemaphore* theWrappedObject);
   bool  release(QSystemSemaphore* theWrappedObject, int  n = 1);
   QString  key(QSystemSemaphore* theWrappedObject) const;
   QSystemSemaphore::SystemSemaphoreError  error(QSystemSemaphore* theWrappedObject) const;
   QString  errorString(QSystemSemaphore* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QSYSTEMSEMAPHORE_H
