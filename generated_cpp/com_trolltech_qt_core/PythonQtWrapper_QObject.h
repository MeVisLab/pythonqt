#ifndef PYTHONQTWRAPPER_QOBJECT_H
#define PYTHONQTWRAPPER_QOBJECT_H

#include <qobject.h>
#include <QObject>

#include <PythonQt.h>

#include <QVarLengthArray>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = 0):QObject(parent),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void timerEvent(QTimerEvent*  arg__1) { QObject::timerEvent(arg__1); }
inline void childEvent(QChildEvent*  arg__1) { QObject::childEvent(arg__1); }
inline void customEvent(QEvent*  arg__1) { QObject::customEvent(arg__1); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  signalsBlocked(QObject* theWrappedObject) const;
   bool  setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value);
   void killTimer(QObject* theWrappedObject, int  id);
   void dumpObjectTree(QObject* theWrappedObject);
   QVariant  property(QObject* theWrappedObject, const char*  name) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1);
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   QObject*  parent(QObject* theWrappedObject) const;
   void setParent(QObject* theWrappedObject, QObject*  arg__1);
   void childEvent(QObject* theWrappedObject, QChildEvent*  arg__1);
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   int  startTimer(QObject* theWrappedObject, int  interval);
   QString  objectName(QObject* theWrappedObject) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   bool  inherits(QObject* theWrappedObject, const char*  classname) const;
   void customEvent(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  isWidgetType(QObject* theWrappedObject) const;
   QThread*  thread(QObject* theWrappedObject) const;
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   void dumpObjectInfo(QObject* theWrappedObject);
   const QList<QObject* >&  children(QObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QOBJECT_H
