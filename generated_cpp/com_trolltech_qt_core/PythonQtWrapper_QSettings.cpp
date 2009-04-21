#include "PythonQtWrapper_QSettings.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>

void PythonQtShell_QSettings::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSettings::staticMetaObject,
      "childEvent(QSettings*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSettings::childEvent(arg__1);
}
void PythonQtShell_QSettings::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSettings::staticMetaObject,
      "customEvent(QSettings*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSettings::customEvent(arg__1);
}
bool  PythonQtShell_QSettings::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSettings::staticMetaObject,
      "event(QSettings*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSettings::event(event);
}
bool  PythonQtShell_QSettings::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSettings::staticMetaObject,
      "eventFilter(QSettings*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QSettings::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSettings::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSettings::staticMetaObject,
      "timerEvent(QSettings*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSettings::timerEvent(arg__1);
}
QSettings* PythonQtWrapper_QSettings::new_QSettings(QObject*  parent)
{ 
return new PythonQtShell_QSettings(parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(format, scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(scope, organization, application, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent)
{ 
return new PythonQtShell_QSettings(fileName, format, parent); }

QSettings* PythonQtWrapper_QSettings::new_QSettings(const QString&  organization, const QString&  application, QObject*  parent)
{ 
return new PythonQtShell_QSettings(organization, application, parent); }

bool  PythonQtWrapper_QSettings::fallbacksEnabled(QSettings* theWrappedObject) const
{
return  theWrappedObject->fallbacksEnabled();
}

QString  PythonQtWrapper_QSettings::fileName(QSettings* theWrappedObject) const
{
return  theWrappedObject->fileName();
}

void PythonQtWrapper_QSettings::sync(QSettings* theWrappedObject)
{
 theWrappedObject->sync();
}

QSettings::Format  PythonQtWrapper_QSettings::format(QSettings* theWrappedObject) const
{
return  theWrappedObject->format();
}

bool  PythonQtWrapper_QSettings::contains(QSettings* theWrappedObject, const QString&  key) const
{
return  theWrappedObject->contains(key);
}

void PythonQtWrapper_QSettings::endArray(QSettings* theWrappedObject)
{
 theWrappedObject->endArray();
}

QString  PythonQtWrapper_QSettings::applicationName(QSettings* theWrappedObject) const
{
return  theWrappedObject->applicationName();
}

QString  PythonQtWrapper_QSettings::group(QSettings* theWrappedObject) const
{
return  theWrappedObject->group();
}

QSettings::Scope  PythonQtWrapper_QSettings::scope(QSettings* theWrappedObject) const
{
return  theWrappedObject->scope();
}

void PythonQtWrapper_QSettings::static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path)
{
QSettings::setPath(format, scope, path);
}

bool  PythonQtWrapper_QSettings::event(QSettings* theWrappedObject, QEvent*  event)
{
return  ((PythonQtPublicPromoter_QSettings*)theWrappedObject)->promoted_event(event);
}

QSettings::Format  PythonQtWrapper_QSettings::static_QSettings_defaultFormat()
{
return QSettings::defaultFormat();
}

void PythonQtWrapper_QSettings::setFallbacksEnabled(QSettings* theWrappedObject, bool  b)
{
 theWrappedObject->setFallbacksEnabled(b);
}

int  PythonQtWrapper_QSettings::beginReadArray(QSettings* theWrappedObject, const QString&  prefix)
{
return  theWrappedObject->beginReadArray(prefix);
}

bool  PythonQtWrapper_QSettings::isWritable(QSettings* theWrappedObject) const
{
return  theWrappedObject->isWritable();
}

void PythonQtWrapper_QSettings::static_QSettings_setDefaultFormat(QSettings::Format  format)
{
QSettings::setDefaultFormat(format);
}

QStringList  PythonQtWrapper_QSettings::childGroups(QSettings* theWrappedObject) const
{
return  theWrappedObject->childGroups();
}

void PythonQtWrapper_QSettings::setArrayIndex(QSettings* theWrappedObject, int  i)
{
 theWrappedObject->setArrayIndex(i);
}

void PythonQtWrapper_QSettings::setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value)
{
 theWrappedObject->setValue(key, value);
}

QSettings::Status  PythonQtWrapper_QSettings::status(QSettings* theWrappedObject) const
{
return  theWrappedObject->status();
}

void PythonQtWrapper_QSettings::endGroup(QSettings* theWrappedObject)
{
 theWrappedObject->endGroup();
}

void PythonQtWrapper_QSettings::remove(QSettings* theWrappedObject, const QString&  key)
{
 theWrappedObject->remove(key);
}

QVariant  PythonQtWrapper_QSettings::value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue) const
{
return  theWrappedObject->value(key, defaultValue);
}

QStringList  PythonQtWrapper_QSettings::allKeys(QSettings* theWrappedObject) const
{
return  theWrappedObject->allKeys();
}

void PythonQtWrapper_QSettings::beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size)
{
 theWrappedObject->beginWriteArray(prefix, size);
}

void PythonQtWrapper_QSettings::clear(QSettings* theWrappedObject)
{
 theWrappedObject->clear();
}

QStringList  PythonQtWrapper_QSettings::childKeys(QSettings* theWrappedObject) const
{
return  theWrappedObject->childKeys();
}

QString  PythonQtWrapper_QSettings::organizationName(QSettings* theWrappedObject) const
{
return  theWrappedObject->organizationName();
}

void PythonQtWrapper_QSettings::beginGroup(QSettings* theWrappedObject, const QString&  prefix)
{
 theWrappedObject->beginGroup(prefix);
}

