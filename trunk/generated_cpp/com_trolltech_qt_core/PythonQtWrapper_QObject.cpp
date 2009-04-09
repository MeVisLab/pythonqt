#include "PythonQtWrapper_QObject.h"

#include <QVarLengthArray>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>

QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new QObject(parent); }

bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
return theWrappedObject->blockSignals(b);
}

const QList<QObject* >&  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
return theWrappedObject->children();
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject)
{
theWrappedObject->dumpObjectInfo();
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject)
{
theWrappedObject->dumpObjectTree();
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
return theWrappedObject->dynamicPropertyNames();
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  arg__1)
{
return theWrappedObject->event(arg__1);
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
return theWrappedObject->eventFilter(arg__1, arg__2);
}

bool  PythonQtWrapper_QObject::inherits(QObject* theWrappedObject, const char*  classname) const
{
return theWrappedObject->inherits(classname);
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
theWrappedObject->installEventFilter(arg__1);
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
return theWrappedObject->isWidgetType();
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
theWrappedObject->killTimer(id);
}

void PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread)
{
theWrappedObject->moveToThread(thread);
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
return theWrappedObject->objectName();
}

QObject*  PythonQtWrapper_QObject::parent(QObject* theWrappedObject) const
{
return theWrappedObject->parent();
}

QVariant  PythonQtWrapper_QObject::property(QObject* theWrappedObject, const char*  name) const
{
return theWrappedObject->property(name);
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
theWrappedObject->removeEventFilter(arg__1);
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, const QString&  name)
{
theWrappedObject->setObjectName(name);
}

void PythonQtWrapper_QObject::setParent(QObject* theWrappedObject, QObject*  arg__1)
{
theWrappedObject->setParent(arg__1);
}

bool  PythonQtWrapper_QObject::setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value)
{
return theWrappedObject->setProperty(name, value);
}

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
return theWrappedObject->signalsBlocked();
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval)
{
return theWrappedObject->startTimer(interval);
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
return theWrappedObject->thread();
}

