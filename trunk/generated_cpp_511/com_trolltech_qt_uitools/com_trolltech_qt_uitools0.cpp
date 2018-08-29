#include "com_trolltech_qt_uitools0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdir.h>
#include <qevent.h>
#include <qiodevice.h>
#include <qlayout.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qstringlist.h>
#include <quiloader.h>
#include <qwidget.h>

PythonQtShell_QUiLoader::~PythonQtShell_QUiLoader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QUiLoader::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUiLoader::childEvent(event0);
}
QAction*  PythonQtShell_QUiLoader::createAction(QObject*  parent0, const QString&  name1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createAction");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QAction*" , "QObject*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QAction* returnValue;
      void* args[3] = {NULL, (void*)&parent0, (void*)&name1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createAction", methodInfo, result);
          } else {
            returnValue = *((QAction**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::createAction(parent0, name1);
}
QActionGroup*  PythonQtShell_QUiLoader::createActionGroup(QObject*  parent0, const QString&  name1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createActionGroup");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QActionGroup*" , "QObject*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QActionGroup* returnValue;
      void* args[3] = {NULL, (void*)&parent0, (void*)&name1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createActionGroup", methodInfo, result);
          } else {
            returnValue = *((QActionGroup**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::createActionGroup(parent0, name1);
}
QLayout*  PythonQtShell_QUiLoader::createLayout(const QString&  className0, QObject*  parent1, const QString&  name2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createLayout");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLayout*" , "const QString&" , "QObject*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QLayout* returnValue;
      void* args[4] = {NULL, (void*)&className0, (void*)&parent1, (void*)&name2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createLayout", methodInfo, result);
          } else {
            returnValue = *((QLayout**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::createLayout(className0, parent1, name2);
}
QWidget*  PythonQtShell_QUiLoader::createWidget(const QString&  className0, QWidget*  parent1, const QString&  name2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createWidget");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QWidget*" , "const QString&" , "QWidget*" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QWidget* returnValue;
      void* args[4] = {NULL, (void*)&className0, (void*)&parent1, (void*)&name2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createWidget", methodInfo, result);
          } else {
            returnValue = *((QWidget**)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::createWidget(className0, parent1, name2);
}
void PythonQtShell_QUiLoader::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUiLoader::customEvent(event0);
}
bool  PythonQtShell_QUiLoader::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::event(event0);
}
bool  PythonQtShell_QUiLoader::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QUiLoader::eventFilter(watched0, event1);
}
void PythonQtShell_QUiLoader::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QUiLoader::timerEvent(event0);
}
QUiLoader* PythonQtWrapper_QUiLoader::new_QUiLoader(QObject*  parent)
{ 
return new PythonQtShell_QUiLoader(parent); }

const QMetaObject* PythonQtShell_QUiLoader::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QUiLoader::staticMetaObject);
  } else {
    return &QUiLoader::staticMetaObject;
  }
}
int PythonQtShell_QUiLoader::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QUiLoader::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QUiLoader::addPluginPath(QUiLoader* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->addPluginPath(path));
}

QStringList  PythonQtWrapper_QUiLoader::availableLayouts(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->availableLayouts());
}

QStringList  PythonQtWrapper_QUiLoader::availableWidgets(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->availableWidgets());
}

void PythonQtWrapper_QUiLoader::clearPluginPaths(QUiLoader* theWrappedObject)
{
  ( theWrappedObject->clearPluginPaths());
}

QAction*  PythonQtWrapper_QUiLoader::createAction(QUiLoader* theWrappedObject, QObject*  parent, const QString&  name)
{
  return ( theWrappedObject->createAction(parent, name));
}

QActionGroup*  PythonQtWrapper_QUiLoader::createActionGroup(QUiLoader* theWrappedObject, QObject*  parent, const QString&  name)
{
  return ( theWrappedObject->createActionGroup(parent, name));
}

QLayout*  PythonQtWrapper_QUiLoader::createLayout(QUiLoader* theWrappedObject, const QString&  className, QObject*  parent, const QString&  name)
{
  return ( theWrappedObject->createLayout(className, parent, name));
}

QWidget*  PythonQtWrapper_QUiLoader::createWidget(QUiLoader* theWrappedObject, const QString&  className, QWidget*  parent, const QString&  name)
{
  return ( theWrappedObject->createWidget(className, parent, name));
}

QString  PythonQtWrapper_QUiLoader::errorString(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QUiLoader::isLanguageChangeEnabled(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->isLanguageChangeEnabled());
}

bool  PythonQtWrapper_QUiLoader::isTranslationEnabled(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->isTranslationEnabled());
}

QWidget*  PythonQtWrapper_QUiLoader::load(QUiLoader* theWrappedObject, QIODevice*  device, QWidget*  parentWidget)
{
  return ( theWrappedObject->load(device, parentWidget));
}

QStringList  PythonQtWrapper_QUiLoader::pluginPaths(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->pluginPaths());
}

void PythonQtWrapper_QUiLoader::setLanguageChangeEnabled(QUiLoader* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setLanguageChangeEnabled(enabled));
}

void PythonQtWrapper_QUiLoader::setTranslationEnabled(QUiLoader* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setTranslationEnabled(enabled));
}

void PythonQtWrapper_QUiLoader::setWorkingDirectory(QUiLoader* theWrappedObject, const QDir&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

QDir  PythonQtWrapper_QUiLoader::workingDirectory(QUiLoader* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}


