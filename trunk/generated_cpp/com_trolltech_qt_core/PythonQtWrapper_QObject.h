#ifndef PYTHONQTWRAPPER_QOBJECT_H
#define PYTHONQTWRAPPER_QOBJECT_H

#include <qobject.h>
#include <QObject>

#include <QVarLengthArray>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   const QList<QObject* >&  children(QObject* theWrappedObject) const;
   void dumpObjectInfo(QObject* theWrappedObject);
   void dumpObjectTree(QObject* theWrappedObject);
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   bool  inherits(QObject* theWrappedObject, const char*  classname) const;
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   bool  isWidgetType(QObject* theWrappedObject) const;
   void killTimer(QObject* theWrappedObject, int  id);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   QString  objectName(QObject* theWrappedObject) const;
   QObject*  parent(QObject* theWrappedObject) const;
   QVariant  property(QObject* theWrappedObject, const char*  name) const;
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   void setParent(QObject* theWrappedObject, QObject*  arg__1);
   bool  setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value);
   bool  signalsBlocked(QObject* theWrappedObject) const;
   int  startTimer(QObject* theWrappedObject, int  interval);
   QThread*  thread(QObject* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QOBJECT_H
