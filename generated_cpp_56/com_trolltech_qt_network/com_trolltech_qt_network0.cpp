#include "com_trolltech_qt_network0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdnslookup.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkconfigmanager.h>
#include <qnetworkconfiguration.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qstringlist.h>
#include <qurl.h>

PythonQtShell_QAbstractNetworkCache::~PythonQtShell_QAbstractNetworkCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QAbstractNetworkCache::cacheSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cacheSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cacheSize", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return qint64();
}
void PythonQtShell_QAbstractNetworkCache::childEvent(QChildEvent*  event0)
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
  QAbstractNetworkCache::childEvent(event0);
}
void PythonQtShell_QAbstractNetworkCache::clear()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clear");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
void PythonQtShell_QAbstractNetworkCache::customEvent(QEvent*  event0)
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
  QAbstractNetworkCache::customEvent(event0);
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::data(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
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
  return 0;
}
bool  PythonQtShell_QAbstractNetworkCache::event(QEvent*  event0)
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
  return QAbstractNetworkCache::event(event0);
}
bool  PythonQtShell_QAbstractNetworkCache::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractNetworkCache::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractNetworkCache::insert(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("insert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QNetworkCacheMetaData  PythonQtShell_QAbstractNetworkCache::metaData(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkCacheMetaData" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QNetworkCacheMetaData returnValue;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
          } else {
            returnValue = *((QNetworkCacheMetaData*)args[0]);
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
  return QNetworkCacheMetaData();
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::prepare(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("prepare");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
      void* args[2] = {NULL, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
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
  return 0;
}
bool  PythonQtShell_QAbstractNetworkCache::remove(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("remove");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("remove", methodInfo, result);
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
  return bool();
}
void PythonQtShell_QAbstractNetworkCache::timerEvent(QTimerEvent*  event0)
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
  QAbstractNetworkCache::timerEvent(event0);
}
void PythonQtShell_QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
QAbstractNetworkCache* PythonQtWrapper_QAbstractNetworkCache::new_QAbstractNetworkCache(QObject*  parent)
{ 
return new PythonQtShell_QAbstractNetworkCache(parent); }

const QMetaObject* PythonQtShell_QAbstractNetworkCache::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractNetworkCache::staticMetaObject);
  } else {
    return &QAbstractNetworkCache::staticMetaObject;
  }
}
int PythonQtShell_QAbstractNetworkCache::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractNetworkCache::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
qint64  PythonQtWrapper_QAbstractNetworkCache::cacheSize(QAbstractNetworkCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheSize());
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->data(url));
}

void PythonQtWrapper_QAbstractNetworkCache::insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->insert(device));
}

QNetworkCacheMetaData  PythonQtWrapper_QAbstractNetworkCache::metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->metaData(url));
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  return ( theWrappedObject->prepare(metaData));
}

bool  PythonQtWrapper_QAbstractNetworkCache::remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( theWrappedObject->remove(url));
}

void PythonQtWrapper_QAbstractNetworkCache::updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  ( theWrappedObject->updateMetaData(metaData));
}



PythonQtShell_QAbstractSocket::~PythonQtShell_QAbstractSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QAbstractSocket::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
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
  return QAbstractSocket::atEnd();
}
qint64  PythonQtShell_QAbstractSocket::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::bytesAvailable();
}
qint64  PythonQtShell_QAbstractSocket::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::bytesToWrite();
}
bool  PythonQtShell_QAbstractSocket::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
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
  return QAbstractSocket::canReadLine();
}
void PythonQtShell_QAbstractSocket::childEvent(QChildEvent*  event0)
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
  QAbstractSocket::childEvent(event0);
}
void PythonQtShell_QAbstractSocket::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::close();
}
void PythonQtShell_QAbstractSocket::connectToHost(const QHostAddress&  address0, unsigned short  port1, QIODevice::OpenMode  mode2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("connectToHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QHostAddress&" , "unsigned short" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      void* args[4] = {NULL, (void*)&address0, (void*)&port1, (void*)&mode2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::connectToHost(address0, port1, mode2);
}
void PythonQtShell_QAbstractSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("connectToHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "unsigned short" , "QIODevice::OpenMode" , "QAbstractSocket::NetworkLayerProtocol"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {NULL, (void*)&hostName0, (void*)&port1, (void*)&mode2, (void*)&protocol3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QAbstractSocket::customEvent(QEvent*  event0)
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
  QAbstractSocket::customEvent(event0);
}
void PythonQtShell_QAbstractSocket::disconnectFromHost()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("disconnectFromHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::disconnectFromHost();
}
bool  PythonQtShell_QAbstractSocket::event(QEvent*  event0)
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
  return QAbstractSocket::event(event0);
}
bool  PythonQtShell_QAbstractSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAbstractSocket::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
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
  return QAbstractSocket::isSequential();
}
bool  PythonQtShell_QAbstractSocket::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
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
  return QAbstractSocket::open(mode0);
}
qint64  PythonQtShell_QAbstractSocket::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::pos();
}
qint64  PythonQtShell_QAbstractSocket::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QAbstractSocket::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QAbstractSocket::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
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
  return QAbstractSocket::reset();
}
void PythonQtShell_QAbstractSocket::resume()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resume");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::resume();
}
bool  PythonQtShell_QAbstractSocket::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
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
  return QAbstractSocket::seek(pos0);
}
void PythonQtShell_QAbstractSocket::setReadBufferSize(qint64  size0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setReadBufferSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&size0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QAbstractSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODevice::OpenMode  openMode2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSocketDescriptor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qintptr" , "QAbstractSocket::SocketState" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&socketDescriptor0, (void*)&state1, (void*)&openMode2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setSocketDescriptor", methodInfo, result);
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
  return QAbstractSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QAbstractSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSocketOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractSocket::SocketOption" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&option0, (void*)&value1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QAbstractSocket::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::size();
}
qintptr  PythonQtShell_QAbstractSocket::socketDescriptor() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("socketDescriptor");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qintptr returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("socketDescriptor", methodInfo, result);
          } else {
            returnValue = *((qintptr*)args[0]);
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
  return QAbstractSocket::socketDescriptor();
}
QVariant  PythonQtShell_QAbstractSocket::socketOption(QAbstractSocket::SocketOption  option0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("socketOption");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "QAbstractSocket::SocketOption"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
      void* args[2] = {NULL, (void*)&option0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("socketOption", methodInfo, result);
          } else {
            returnValue = *((QVariant*)args[0]);
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
  return QAbstractSocket::socketOption(option0);
}
void PythonQtShell_QAbstractSocket::timerEvent(QTimerEvent*  event0)
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
  QAbstractSocket::timerEvent(event0);
}
bool  PythonQtShell_QAbstractSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
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
  return QAbstractSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForConnected(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForConnected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForConnected", methodInfo, result);
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
  return QAbstractSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForDisconnected(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForDisconnected");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForDisconnected", methodInfo, result);
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
  return QAbstractSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
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
  return QAbstractSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QAbstractSocket::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QAbstractSocket::writeData(data0, len1);
}
QAbstractSocket* PythonQtWrapper_QAbstractSocket::new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent)
{ 
return new PythonQtShell_QAbstractSocket(socketType, parent); }

const QMetaObject* PythonQtShell_QAbstractSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractSocket::staticMetaObject);
  } else {
    return &QAbstractSocket::staticMetaObject;
  }
}
int PythonQtShell_QAbstractSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QAbstractSocket::abort(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

bool  PythonQtWrapper_QAbstractSocket::bind(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(address, port, mode));
}

bool  PythonQtWrapper_QAbstractSocket::bind(QAbstractSocket* theWrappedObject, unsigned short  port, QAbstractSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(port, mode));
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(address, port, mode));
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHost(hostName, port, mode, protocol));
}

void PythonQtWrapper_QAbstractSocket::disconnectFromHost(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromHost());
}

QAbstractSocket::SocketError  PythonQtWrapper_QAbstractSocket::error(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QAbstractSocket::flush(QAbstractSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

bool  PythonQtWrapper_QAbstractSocket::isValid(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QHostAddress  PythonQtWrapper_QAbstractSocket::localAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localAddress());
}

unsigned short  PythonQtWrapper_QAbstractSocket::localPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

QAbstractSocket::PauseModes  PythonQtWrapper_QAbstractSocket::pauseMode(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->pauseMode());
}

QHostAddress  PythonQtWrapper_QAbstractSocket::peerAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerAddress());
}

QString  PythonQtWrapper_QAbstractSocket::peerName(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerName());
}

unsigned short  PythonQtWrapper_QAbstractSocket::peerPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

QNetworkProxy  PythonQtWrapper_QAbstractSocket::proxy(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

qint64  PythonQtWrapper_QAbstractSocket::readBufferSize(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

void PythonQtWrapper_QAbstractSocket::resume(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->resume());
}

void PythonQtWrapper_QAbstractSocket::setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalAddress(address));
}

void PythonQtWrapper_QAbstractSocket::setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalPort(port));
}

void PythonQtWrapper_QAbstractSocket::setPauseMode(QAbstractSocket* theWrappedObject, QAbstractSocket::PauseModes  pauseMode)
{
  ( theWrappedObject->setPauseMode(pauseMode));
}

void PythonQtWrapper_QAbstractSocket::setPeerAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerAddress(address));
}

void PythonQtWrapper_QAbstractSocket::setPeerName(QAbstractSocket* theWrappedObject, const QString&  name)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerName(name));
}

void PythonQtWrapper_QAbstractSocket::setPeerPort(QAbstractSocket* theWrappedObject, unsigned short  port)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setPeerPort(port));
}

void PythonQtWrapper_QAbstractSocket::setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

void PythonQtWrapper_QAbstractSocket::setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

bool  PythonQtWrapper_QAbstractSocket::setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state, QIODevice::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, state, openMode));
}

void PythonQtWrapper_QAbstractSocket::setSocketError(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketError  socketError)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setSocketError(socketError));
}

void PythonQtWrapper_QAbstractSocket::setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value)
{
  ( theWrappedObject->setSocketOption(option, value));
}

void PythonQtWrapper_QAbstractSocket::setSocketState(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketState  state)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setSocketState(state));
}

qintptr  PythonQtWrapper_QAbstractSocket::socketDescriptor(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QVariant  PythonQtWrapper_QAbstractSocket::socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option)
{
  return ( theWrappedObject->socketOption(option));
}

QAbstractSocket::SocketType  PythonQtWrapper_QAbstractSocket::socketType(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketType());
}

QAbstractSocket::SocketState  PythonQtWrapper_QAbstractSocket::state(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QAbstractSocket::waitForConnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}



QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator()
{ 
return new QAuthenticator(); }

QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator(const QAuthenticator&  other)
{ 
return new QAuthenticator(other); }

bool  PythonQtWrapper_QAuthenticator::isNull(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QAuthenticator::__ne__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QAuthenticator::__eq__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVariant  PythonQtWrapper_QAuthenticator::option(QAuthenticator* theWrappedObject, const QString&  opt) const
{
  return ( theWrappedObject->option(opt));
}

QHash<QString , QVariant >  PythonQtWrapper_QAuthenticator::options(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->options());
}

QString  PythonQtWrapper_QAuthenticator::password(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

QString  PythonQtWrapper_QAuthenticator::realm(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->realm());
}

void PythonQtWrapper_QAuthenticator::setOption(QAuthenticator* theWrappedObject, const QString&  opt, const QVariant&  value)
{
  ( theWrappedObject->setOption(opt, value));
}

void PythonQtWrapper_QAuthenticator::setPassword(QAuthenticator* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QAuthenticator::setRealm(QAuthenticator* theWrappedObject, const QString&  realm)
{
  ( theWrappedObject->setRealm(realm));
}

void PythonQtWrapper_QAuthenticator::setUser(QAuthenticator* theWrappedObject, const QString&  user)
{
  ( theWrappedObject->setUser(user));
}

QString  PythonQtWrapper_QAuthenticator::user(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->user());
}



QDnsDomainNameRecord* PythonQtWrapper_QDnsDomainNameRecord::new_QDnsDomainNameRecord()
{ 
return new QDnsDomainNameRecord(); }

QDnsDomainNameRecord* PythonQtWrapper_QDnsDomainNameRecord::new_QDnsDomainNameRecord(const QDnsDomainNameRecord&  other)
{ 
return new QDnsDomainNameRecord(other); }

QString  PythonQtWrapper_QDnsDomainNameRecord::name(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsDomainNameRecord*  PythonQtWrapper_QDnsDomainNameRecord::operator_assign(QDnsDomainNameRecord* theWrappedObject, const QDnsDomainNameRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsDomainNameRecord::swap(QDnsDomainNameRecord* theWrappedObject, QDnsDomainNameRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsDomainNameRecord::timeToLive(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QString  PythonQtWrapper_QDnsDomainNameRecord::value(QDnsDomainNameRecord* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QDnsHostAddressRecord* PythonQtWrapper_QDnsHostAddressRecord::new_QDnsHostAddressRecord()
{ 
return new QDnsHostAddressRecord(); }

QDnsHostAddressRecord* PythonQtWrapper_QDnsHostAddressRecord::new_QDnsHostAddressRecord(const QDnsHostAddressRecord&  other)
{ 
return new QDnsHostAddressRecord(other); }

QString  PythonQtWrapper_QDnsHostAddressRecord::name(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsHostAddressRecord*  PythonQtWrapper_QDnsHostAddressRecord::operator_assign(QDnsHostAddressRecord* theWrappedObject, const QDnsHostAddressRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsHostAddressRecord::swap(QDnsHostAddressRecord* theWrappedObject, QDnsHostAddressRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsHostAddressRecord::timeToLive(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QHostAddress  PythonQtWrapper_QDnsHostAddressRecord::value(QDnsHostAddressRecord* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



PythonQtShell_QDnsLookup::~PythonQtShell_QDnsLookup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QDnsLookup::childEvent(QChildEvent*  event0)
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
  QDnsLookup::childEvent(event0);
}
void PythonQtShell_QDnsLookup::customEvent(QEvent*  event0)
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
  QDnsLookup::customEvent(event0);
}
bool  PythonQtShell_QDnsLookup::event(QEvent*  event0)
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
  return QDnsLookup::event(event0);
}
bool  PythonQtShell_QDnsLookup::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QDnsLookup::eventFilter(watched0, event1);
}
void PythonQtShell_QDnsLookup::timerEvent(QTimerEvent*  event0)
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
  QDnsLookup::timerEvent(event0);
}
QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(type, name, nameserver, parent); }

QDnsLookup* PythonQtWrapper_QDnsLookup::new_QDnsLookup(QObject*  parent)
{ 
return new PythonQtShell_QDnsLookup(parent); }

const QMetaObject* PythonQtShell_QDnsLookup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QDnsLookup::staticMetaObject);
  } else {
    return &QDnsLookup::staticMetaObject;
  }
}
int PythonQtShell_QDnsLookup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QDnsLookup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::canonicalNameRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->canonicalNameRecords());
}

QDnsLookup::Error  PythonQtWrapper_QDnsLookup::error(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QDnsLookup::errorString(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QList<QDnsHostAddressRecord >  PythonQtWrapper_QDnsLookup::hostAddressRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->hostAddressRecords());
}

bool  PythonQtWrapper_QDnsLookup::isFinished(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

QList<QDnsMailExchangeRecord >  PythonQtWrapper_QDnsLookup::mailExchangeRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->mailExchangeRecords());
}

QString  PythonQtWrapper_QDnsLookup::name(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::nameServerRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameServerRecords());
}

QHostAddress  PythonQtWrapper_QDnsLookup::nameserver(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->nameserver());
}

QList<QDnsDomainNameRecord >  PythonQtWrapper_QDnsLookup::pointerRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->pointerRecords());
}

QList<QDnsServiceRecord >  PythonQtWrapper_QDnsLookup::serviceRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->serviceRecords());
}

void PythonQtWrapper_QDnsLookup::setName(QDnsLookup* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QDnsLookup::setNameserver(QDnsLookup* theWrappedObject, const QHostAddress&  nameserver)
{
  ( theWrappedObject->setNameserver(nameserver));
}

void PythonQtWrapper_QDnsLookup::setType(QDnsLookup* theWrappedObject, QDnsLookup::Type  arg__1)
{
  ( theWrappedObject->setType(arg__1));
}

QList<QDnsTextRecord >  PythonQtWrapper_QDnsLookup::textRecords(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->textRecords());
}

QDnsLookup::Type  PythonQtWrapper_QDnsLookup::type(QDnsLookup* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



QDnsMailExchangeRecord* PythonQtWrapper_QDnsMailExchangeRecord::new_QDnsMailExchangeRecord()
{ 
return new QDnsMailExchangeRecord(); }

QDnsMailExchangeRecord* PythonQtWrapper_QDnsMailExchangeRecord::new_QDnsMailExchangeRecord(const QDnsMailExchangeRecord&  other)
{ 
return new QDnsMailExchangeRecord(other); }

QString  PythonQtWrapper_QDnsMailExchangeRecord::exchange(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->exchange());
}

QString  PythonQtWrapper_QDnsMailExchangeRecord::name(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsMailExchangeRecord*  PythonQtWrapper_QDnsMailExchangeRecord::operator_assign(QDnsMailExchangeRecord* theWrappedObject, const QDnsMailExchangeRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

unsigned short  PythonQtWrapper_QDnsMailExchangeRecord::preference(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->preference());
}

void PythonQtWrapper_QDnsMailExchangeRecord::swap(QDnsMailExchangeRecord* theWrappedObject, QDnsMailExchangeRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsMailExchangeRecord::timeToLive(QDnsMailExchangeRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}



QDnsServiceRecord* PythonQtWrapper_QDnsServiceRecord::new_QDnsServiceRecord()
{ 
return new QDnsServiceRecord(); }

QDnsServiceRecord* PythonQtWrapper_QDnsServiceRecord::new_QDnsServiceRecord(const QDnsServiceRecord&  other)
{ 
return new QDnsServiceRecord(other); }

QString  PythonQtWrapper_QDnsServiceRecord::name(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsServiceRecord*  PythonQtWrapper_QDnsServiceRecord::operator_assign(QDnsServiceRecord* theWrappedObject, const QDnsServiceRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::port(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::priority(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

void PythonQtWrapper_QDnsServiceRecord::swap(QDnsServiceRecord* theWrappedObject, QDnsServiceRecord&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QDnsServiceRecord::target(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->target());
}

unsigned int  PythonQtWrapper_QDnsServiceRecord::timeToLive(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

unsigned short  PythonQtWrapper_QDnsServiceRecord::weight(QDnsServiceRecord* theWrappedObject) const
{
  return ( theWrappedObject->weight());
}



QDnsTextRecord* PythonQtWrapper_QDnsTextRecord::new_QDnsTextRecord()
{ 
return new QDnsTextRecord(); }

QDnsTextRecord* PythonQtWrapper_QDnsTextRecord::new_QDnsTextRecord(const QDnsTextRecord&  other)
{ 
return new QDnsTextRecord(other); }

QString  PythonQtWrapper_QDnsTextRecord::name(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QDnsTextRecord*  PythonQtWrapper_QDnsTextRecord::operator_assign(QDnsTextRecord* theWrappedObject, const QDnsTextRecord&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QDnsTextRecord::swap(QDnsTextRecord* theWrappedObject, QDnsTextRecord&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QDnsTextRecord::timeToLive(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->timeToLive());
}

QList<QByteArray >  PythonQtWrapper_QDnsTextRecord::values(QDnsTextRecord* theWrappedObject) const
{
  return ( theWrappedObject->values());
}



QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress()
{ 
return new QHostAddress(); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(QHostAddress::SpecialAddress  address)
{ 
return new QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QHostAddress&  copy)
{ 
return new QHostAddress(copy); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QIPv6Address&  ip6Addr)
{ 
return new QHostAddress(ip6Addr); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const QString&  address)
{ 
return new QHostAddress(address); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(const unsigned char*  ip6Addr)
{ 
return new QHostAddress(ip6Addr); }

QHostAddress* PythonQtWrapper_QHostAddress::new_QHostAddress(unsigned int  ip4Addr)
{ 
return new QHostAddress(ip4Addr); }

void PythonQtWrapper_QHostAddress::clear(QHostAddress* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QHostAddress::isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const
{
  return ( theWrappedObject->isInSubnet(subnet, netmask));
}

bool  PythonQtWrapper_QHostAddress::isInSubnet(QHostAddress* theWrappedObject, const QPair<QHostAddress , int >&  subnet) const
{
  return ( theWrappedObject->isInSubnet(subnet));
}

bool  PythonQtWrapper_QHostAddress::isLoopback(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isLoopback());
}

bool  PythonQtWrapper_QHostAddress::isMulticast(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isMulticast());
}

bool  PythonQtWrapper_QHostAddress::isNull(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QHostAddress::__ne__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
  return ( (*theWrappedObject)!= address);
}

bool  PythonQtWrapper_QHostAddress::__ne__(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
  return ( (*theWrappedObject)!= address);
}

void PythonQtWrapper_QHostAddress::writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QHostAddress::__eq__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
  return ( (*theWrappedObject)== address);
}

bool  PythonQtWrapper_QHostAddress::__eq__(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
  return ( (*theWrappedObject)== address);
}

void PythonQtWrapper_QHostAddress::readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QPair<QHostAddress , int >  PythonQtWrapper_QHostAddress::static_QHostAddress_parseSubnet(const QString&  subnet)
{
  return (QHostAddress::parseSubnet(subnet));
}

QAbstractSocket::NetworkLayerProtocol  PythonQtWrapper_QHostAddress::protocol(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QString  PythonQtWrapper_QHostAddress::scopeId(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->scopeId());
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr)
{
  ( theWrappedObject->setAddress(ip6Addr));
}

bool  PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QString&  address)
{
  return ( theWrappedObject->setAddress(address));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const unsigned char*  ip6Addr)
{
  ( theWrappedObject->setAddress(ip6Addr));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr)
{
  ( theWrappedObject->setAddress(ip4Addr));
}

void PythonQtWrapper_QHostAddress::setScopeId(QHostAddress* theWrappedObject, const QString&  id)
{
  ( theWrappedObject->setScopeId(id));
}

void PythonQtWrapper_QHostAddress::swap(QHostAddress* theWrappedObject, QHostAddress&  other)
{
  ( theWrappedObject->swap(other));
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv4Address());
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toIPv4Address(ok));
}

QIPv6Address  PythonQtWrapper_QHostAddress::toIPv6Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv6Address());
}

QString  PythonQtWrapper_QHostAddress::toString(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString PythonQtWrapper_QHostAddress::py_toString(QHostAddress* obj) { return obj->toString(); }


QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(const QHostInfo&  d)
{ 
return new QHostInfo(d); }

QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(int  lookupId)
{ 
return new QHostInfo(lookupId); }

void PythonQtWrapper_QHostInfo::static_QHostInfo_abortHostLookup(int  lookupId)
{
  (QHostInfo::abortHostLookup(lookupId));
}

QList<QHostAddress >  PythonQtWrapper_QHostInfo::addresses(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->addresses());
}

QHostInfo::HostInfoError  PythonQtWrapper_QHostInfo::error(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QHostInfo::errorString(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QHostInfo  PythonQtWrapper_QHostInfo::static_QHostInfo_fromName(const QString&  name)
{
  return (QHostInfo::fromName(name));
}

QString  PythonQtWrapper_QHostInfo::hostName(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localDomainName()
{
  return (QHostInfo::localDomainName());
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localHostName()
{
  return (QHostInfo::localHostName());
}

int  PythonQtWrapper_QHostInfo::static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member)
{
  return (QHostInfo::lookupHost(name, receiver, member));
}

int  PythonQtWrapper_QHostInfo::lookupId(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->lookupId());
}

void PythonQtWrapper_QHostInfo::setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses)
{
  ( theWrappedObject->setAddresses(addresses));
}

void PythonQtWrapper_QHostInfo::setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error)
{
  ( theWrappedObject->setError(error));
}

void PythonQtWrapper_QHostInfo::setErrorString(QHostInfo* theWrappedObject, const QString&  errorString)
{
  ( theWrappedObject->setErrorString(errorString));
}

void PythonQtWrapper_QHostInfo::setHostName(QHostInfo* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setHostName(name));
}

void PythonQtWrapper_QHostInfo::setLookupId(QHostInfo* theWrappedObject, int  id)
{
  ( theWrappedObject->setLookupId(id));
}



PythonQtShell_QHttpMultiPart::~PythonQtShell_QHttpMultiPart() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHttpMultiPart::childEvent(QChildEvent*  event0)
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
  QHttpMultiPart::childEvent(event0);
}
void PythonQtShell_QHttpMultiPart::customEvent(QEvent*  event0)
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
  QHttpMultiPart::customEvent(event0);
}
bool  PythonQtShell_QHttpMultiPart::event(QEvent*  event0)
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
  return QHttpMultiPart::event(event0);
}
bool  PythonQtShell_QHttpMultiPart::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QHttpMultiPart::eventFilter(watched0, event1);
}
void PythonQtShell_QHttpMultiPart::timerEvent(QTimerEvent*  event0)
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
  QHttpMultiPart::timerEvent(event0);
}
QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(contentType, parent); }

QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(parent); }

const QMetaObject* PythonQtShell_QHttpMultiPart::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHttpMultiPart::staticMetaObject);
  } else {
    return &QHttpMultiPart::staticMetaObject;
  }
}
int PythonQtShell_QHttpMultiPart::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHttpMultiPart::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QHttpMultiPart::append(QHttpMultiPart* theWrappedObject, const QHttpPart&  httpPart)
{
  ( theWrappedObject->append(httpPart));
}

QByteArray  PythonQtWrapper_QHttpMultiPart::boundary(QHttpMultiPart* theWrappedObject) const
{
  return ( theWrappedObject->boundary());
}

void PythonQtWrapper_QHttpMultiPart::setBoundary(QHttpMultiPart* theWrappedObject, const QByteArray&  boundary)
{
  ( theWrappedObject->setBoundary(boundary));
}

void PythonQtWrapper_QHttpMultiPart::setContentType(QHttpMultiPart* theWrappedObject, QHttpMultiPart::ContentType  contentType)
{
  ( theWrappedObject->setContentType(contentType));
}



QHttpPart* PythonQtWrapper_QHttpPart::new_QHttpPart()
{ 
return new QHttpPart(); }

QHttpPart* PythonQtWrapper_QHttpPart::new_QHttpPart(const QHttpPart&  other)
{ 
return new QHttpPart(other); }

bool  PythonQtWrapper_QHttpPart::__ne__(QHttpPart* theWrappedObject, const QHttpPart&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QHttpPart*  PythonQtWrapper_QHttpPart::operator_assign(QHttpPart* theWrappedObject, const QHttpPart&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QHttpPart::__eq__(QHttpPart* theWrappedObject, const QHttpPart&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QHttpPart::setBody(QHttpPart* theWrappedObject, const QByteArray&  body)
{
  ( theWrappedObject->setBody(body));
}

void PythonQtWrapper_QHttpPart::setBodyDevice(QHttpPart* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setBodyDevice(device));
}

void PythonQtWrapper_QHttpPart::setHeader(QHttpPart* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QHttpPart::setRawHeader(QHttpPart* theWrappedObject, const QByteArray&  headerName, const QByteArray&  headerValue)
{
  ( theWrappedObject->setRawHeader(headerName, headerValue));
}

void PythonQtWrapper_QHttpPart::swap(QHttpPart* theWrappedObject, QHttpPart&  other)
{
  ( theWrappedObject->swap(other));
}



PythonQtShell_QIPv6Address::~PythonQtShell_QIPv6Address() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QIPv6Address* PythonQtWrapper_QIPv6Address::new_QIPv6Address()
{ 
return new PythonQtShell_QIPv6Address(); }



PythonQtShell_QLocalServer::~PythonQtShell_QLocalServer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLocalServer::childEvent(QChildEvent*  event0)
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
  QLocalServer::childEvent(event0);
}
void PythonQtShell_QLocalServer::customEvent(QEvent*  event0)
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
  QLocalServer::customEvent(event0);
}
bool  PythonQtShell_QLocalServer::event(QEvent*  event0)
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
  return QLocalServer::event(event0);
}
bool  PythonQtShell_QLocalServer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLocalServer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QLocalServer::hasPendingConnections() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasPendingConnections");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasPendingConnections", methodInfo, result);
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
  return QLocalServer::hasPendingConnections();
}
void PythonQtShell_QLocalServer::incomingConnection(quintptr  socketDescriptor0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("incomingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "quintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&socketDescriptor0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalServer::incomingConnection(socketDescriptor0);
}
QLocalSocket*  PythonQtShell_QLocalServer::nextPendingConnection()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nextPendingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QLocalSocket*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QLocalSocket* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nextPendingConnection", methodInfo, result);
          } else {
            returnValue = *((QLocalSocket**)args[0]);
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
  return QLocalServer::nextPendingConnection();
}
void PythonQtShell_QLocalServer::timerEvent(QTimerEvent*  event0)
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
  QLocalServer::timerEvent(event0);
}
QLocalServer* PythonQtWrapper_QLocalServer::new_QLocalServer(QObject*  parent)
{ 
return new PythonQtShell_QLocalServer(parent); }

const QMetaObject* PythonQtShell_QLocalServer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLocalServer::staticMetaObject);
  } else {
    return &QLocalServer::staticMetaObject;
  }
}
int PythonQtShell_QLocalServer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLocalServer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QLocalServer::close(QLocalServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QLocalServer::errorString(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QLocalServer::fullServerName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

bool  PythonQtWrapper_QLocalServer::hasPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingConnections());
}

void PythonQtWrapper_QLocalServer::incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor)
{
  ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_incomingConnection(socketDescriptor));
}

bool  PythonQtWrapper_QLocalServer::isListening(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->listen(name));
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, qintptr  socketDescriptor)
{
  return ( theWrappedObject->listen(socketDescriptor));
}

int  PythonQtWrapper_QLocalServer::maxPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QLocalSocket*  PythonQtWrapper_QLocalServer::nextPendingConnection(QLocalServer* theWrappedObject)
{
  return ( theWrappedObject->nextPendingConnection());
}

bool  PythonQtWrapper_QLocalServer::static_QLocalServer_removeServer(const QString&  name)
{
  return (QLocalServer::removeServer(name));
}

QAbstractSocket::SocketError  PythonQtWrapper_QLocalServer::serverError(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

QString  PythonQtWrapper_QLocalServer::serverName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

void PythonQtWrapper_QLocalServer::setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

void PythonQtWrapper_QLocalServer::setSocketOptions(QLocalServer* theWrappedObject, QLocalServer::SocketOptions  options)
{
  ( theWrappedObject->setSocketOptions(options));
}

QLocalServer::SocketOptions  PythonQtWrapper_QLocalServer::socketOptions(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->socketOptions());
}

bool  PythonQtWrapper_QLocalServer::waitForNewConnection(QLocalServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}



PythonQtShell_QLocalSocket::~PythonQtShell_QLocalSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QLocalSocket::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
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
  return QLocalSocket::atEnd();
}
qint64  PythonQtShell_QLocalSocket::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::bytesAvailable();
}
qint64  PythonQtShell_QLocalSocket::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::bytesToWrite();
}
bool  PythonQtShell_QLocalSocket::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
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
  return QLocalSocket::canReadLine();
}
void PythonQtShell_QLocalSocket::childEvent(QChildEvent*  event0)
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
  QLocalSocket::childEvent(event0);
}
void PythonQtShell_QLocalSocket::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QLocalSocket::close();
}
void PythonQtShell_QLocalSocket::customEvent(QEvent*  event0)
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
  QLocalSocket::customEvent(event0);
}
bool  PythonQtShell_QLocalSocket::event(QEvent*  event0)
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
  return QLocalSocket::event(event0);
}
bool  PythonQtShell_QLocalSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLocalSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QLocalSocket::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
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
  return QLocalSocket::isSequential();
}
bool  PythonQtShell_QLocalSocket::open(QIODevice::OpenMode  openMode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&openMode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
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
  return QLocalSocket::open(openMode0);
}
qint64  PythonQtShell_QLocalSocket::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::pos();
}
qint64  PythonQtShell_QLocalSocket::readData(char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::readData(arg__1, arg__2);
}
qint64  PythonQtShell_QLocalSocket::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QLocalSocket::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
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
  return QLocalSocket::reset();
}
bool  PythonQtShell_QLocalSocket::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
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
  return QLocalSocket::seek(pos0);
}
qint64  PythonQtShell_QLocalSocket::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::size();
}
void PythonQtShell_QLocalSocket::timerEvent(QTimerEvent*  event0)
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
  QLocalSocket::timerEvent(event0);
}
bool  PythonQtShell_QLocalSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
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
  return QLocalSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QLocalSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
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
  return QLocalSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QLocalSocket::writeData(const char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QLocalSocket::writeData(arg__1, arg__2);
}
QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new PythonQtShell_QLocalSocket(parent); }

const QMetaObject* PythonQtShell_QLocalSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLocalSocket::staticMetaObject);
  } else {
    return &QLocalSocket::staticMetaObject;
  }
}
int PythonQtShell_QLocalSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLocalSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, QIODevice::OpenMode  openMode)
{
  ( theWrappedObject->connectToServer(openMode));
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode)
{
  ( theWrappedObject->connectToServer(name, openMode));
}

void PythonQtWrapper_QLocalSocket::disconnectFromServer(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromServer());
}

QLocalSocket::LocalSocketError  PythonQtWrapper_QLocalSocket::error(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QLocalSocket::flush(QLocalSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

QString  PythonQtWrapper_QLocalSocket::fullServerName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

void PythonQtWrapper_QLocalSocket::setServerName(QLocalSocket* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setServerName(name));
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, qintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODevice::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode));
}

qintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}



PythonQtShell_QNetworkAccessManager::~PythonQtShell_QNetworkAccessManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkAccessManager::childEvent(QChildEvent*  event0)
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
  QNetworkAccessManager::childEvent(event0);
}
QNetworkReply*  PythonQtShell_QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("createRequest");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkReply*" , "QNetworkAccessManager::Operation" , "const QNetworkRequest&" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QNetworkReply* returnValue;
      void* args[4] = {NULL, (void*)&op0, (void*)&request1, (void*)&outgoingData2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("createRequest", methodInfo, result);
          } else {
            returnValue = *((QNetworkReply**)args[0]);
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
  return QNetworkAccessManager::createRequest(op0, request1, outgoingData2);
}
void PythonQtShell_QNetworkAccessManager::customEvent(QEvent*  event0)
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
  QNetworkAccessManager::customEvent(event0);
}
bool  PythonQtShell_QNetworkAccessManager::event(QEvent*  event0)
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
  return QNetworkAccessManager::event(event0);
}
bool  PythonQtShell_QNetworkAccessManager::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkAccessManager::eventFilter(watched0, event1);
}
void PythonQtShell_QNetworkAccessManager::timerEvent(QTimerEvent*  event0)
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
  QNetworkAccessManager::timerEvent(event0);
}
QNetworkAccessManager* PythonQtWrapper_QNetworkAccessManager::new_QNetworkAccessManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkAccessManager(parent); }

const QMetaObject* PythonQtShell_QNetworkAccessManager::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkAccessManager::staticMetaObject);
  } else {
    return &QNetworkAccessManager::staticMetaObject;
  }
}
int PythonQtShell_QNetworkAccessManager::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkAccessManager::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QNetworkConfiguration  PythonQtWrapper_QNetworkAccessManager::activeConfiguration(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->activeConfiguration());
}

QAbstractNetworkCache*  PythonQtWrapper_QNetworkAccessManager::cache(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cache());
}

void PythonQtWrapper_QNetworkAccessManager::clearAccessCache(QNetworkAccessManager* theWrappedObject)
{
  ( theWrappedObject->clearAccessCache());
}

QNetworkConfiguration  PythonQtWrapper_QNetworkAccessManager::configuration(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
}

void PythonQtWrapper_QNetworkAccessManager::connectToHost(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port)
{
  ( theWrappedObject->connectToHost(hostName, port));
}

void PythonQtWrapper_QNetworkAccessManager::connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port, const QSslConfiguration&  sslConfiguration)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, sslConfiguration));
}

QNetworkCookieJar*  PythonQtWrapper_QNetworkAccessManager::cookieJar(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cookieJar());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
  return ( ((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->promoted_createRequest(op, request, outgoingData));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->deleteResource(request));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->get(request));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->head(request));
}

QNetworkAccessManager::NetworkAccessibility  PythonQtWrapper_QNetworkAccessManager::networkAccessible(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessible());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart)
{
  return ( theWrappedObject->post(request, multiPart));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkProxy  PythonQtWrapper_QNetworkAccessManager::proxy(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

QNetworkProxyFactory*  PythonQtWrapper_QNetworkAccessManager::proxyFactory(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxyFactory());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart)
{
  return ( theWrappedObject->put(request, multiPart));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QIODevice*  data)
{
  return ( theWrappedObject->sendCustomRequest(request, verb, data));
}

void PythonQtWrapper_QNetworkAccessManager::setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache)
{
  ( theWrappedObject->setCache(cache));
}

void PythonQtWrapper_QNetworkAccessManager::setConfiguration(QNetworkAccessManager* theWrappedObject, const QNetworkConfiguration&  config)
{
  ( theWrappedObject->setConfiguration(config));
}

void PythonQtWrapper_QNetworkAccessManager::setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar)
{
  ( theWrappedObject->setCookieJar(cookieJar));
}

void PythonQtWrapper_QNetworkAccessManager::setNetworkAccessible(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::NetworkAccessibility  accessible)
{
  ( theWrappedObject->setNetworkAccessible(accessible));
}

void PythonQtWrapper_QNetworkAccessManager::setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy)
{
  ( theWrappedObject->setProxy(proxy));
}

void PythonQtWrapper_QNetworkAccessManager::setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory)
{
  ( theWrappedObject->setProxyFactory(factory));
}

QStringList  PythonQtWrapper_QNetworkAccessManager::supportedSchemes(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->supportedSchemes());
}



QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry()
{ 
return new QNetworkAddressEntry(); }

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry(const QNetworkAddressEntry&  other)
{ 
return new QNetworkAddressEntry(other); }

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::broadcast(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->broadcast());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::ip(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->ip());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::netmask(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->netmask());
}

bool  PythonQtWrapper_QNetworkAddressEntry::__ne__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkAddressEntry::__eq__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QNetworkAddressEntry::prefixLength(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->prefixLength());
}

void PythonQtWrapper_QNetworkAddressEntry::setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast)
{
  ( theWrappedObject->setBroadcast(newBroadcast));
}

void PythonQtWrapper_QNetworkAddressEntry::setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp)
{
  ( theWrappedObject->setIp(newIp));
}

void PythonQtWrapper_QNetworkAddressEntry::setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask)
{
  ( theWrappedObject->setNetmask(newNetmask));
}

void PythonQtWrapper_QNetworkAddressEntry::setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length)
{
  ( theWrappedObject->setPrefixLength(length));
}

void PythonQtWrapper_QNetworkAddressEntry::swap(QNetworkAddressEntry* theWrappedObject, QNetworkAddressEntry&  other)
{
  ( theWrappedObject->swap(other));
}



QNetworkCacheMetaData* PythonQtWrapper_QNetworkCacheMetaData::new_QNetworkCacheMetaData()
{ 
return new QNetworkCacheMetaData(); }

QNetworkCacheMetaData* PythonQtWrapper_QNetworkCacheMetaData::new_QNetworkCacheMetaData(const QNetworkCacheMetaData&  other)
{ 
return new QNetworkCacheMetaData(other); }

QHash<QNetworkRequest::Attribute , QVariant >  PythonQtWrapper_QNetworkCacheMetaData::attributes(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

QDateTime  PythonQtWrapper_QNetworkCacheMetaData::expirationDate(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::isValid(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QDateTime  PythonQtWrapper_QNetworkCacheMetaData::lastModified(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::__ne__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const
{
  return ( (*theWrappedObject)!= other);
}

void PythonQtWrapper_QNetworkCacheMetaData::writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QNetworkCacheMetaData::__eq__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QNetworkCacheMetaData::readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QList<QPair<QByteArray , QByteArray >  >  PythonQtWrapper_QNetworkCacheMetaData::rawHeaders(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaders());
}

bool  PythonQtWrapper_QNetworkCacheMetaData::saveToDisk(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->saveToDisk());
}

void PythonQtWrapper_QNetworkCacheMetaData::setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes)
{
  ( theWrappedObject->setAttributes(attributes));
}

void PythonQtWrapper_QNetworkCacheMetaData::setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime)
{
  ( theWrappedObject->setExpirationDate(dateTime));
}

void PythonQtWrapper_QNetworkCacheMetaData::setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime)
{
  ( theWrappedObject->setLastModified(dateTime));
}

void PythonQtWrapper_QNetworkCacheMetaData::setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  headers)
{
  ( theWrappedObject->setRawHeaders(headers));
}

void PythonQtWrapper_QNetworkCacheMetaData::setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow)
{
  ( theWrappedObject->setSaveToDisk(allow));
}

void PythonQtWrapper_QNetworkCacheMetaData::setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QNetworkCacheMetaData::swap(QNetworkCacheMetaData* theWrappedObject, QNetworkCacheMetaData&  other)
{
  ( theWrappedObject->swap(other));
}

QUrl  PythonQtWrapper_QNetworkCacheMetaData::url(QNetworkCacheMetaData* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QNetworkConfiguration* PythonQtWrapper_QNetworkConfiguration::new_QNetworkConfiguration()
{ 
return new QNetworkConfiguration(); }

QNetworkConfiguration* PythonQtWrapper_QNetworkConfiguration::new_QNetworkConfiguration(const QNetworkConfiguration&  other)
{ 
return new QNetworkConfiguration(other); }

QNetworkConfiguration::BearerType  PythonQtWrapper_QNetworkConfiguration::bearerType(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->bearerType());
}

QNetworkConfiguration::BearerType  PythonQtWrapper_QNetworkConfiguration::bearerTypeFamily(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->bearerTypeFamily());
}

QString  PythonQtWrapper_QNetworkConfiguration::bearerTypeName(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->bearerTypeName());
}

QList<QNetworkConfiguration >  PythonQtWrapper_QNetworkConfiguration::children(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->children());
}

QString  PythonQtWrapper_QNetworkConfiguration::identifier(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->identifier());
}

bool  PythonQtWrapper_QNetworkConfiguration::isRoamingAvailable(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->isRoamingAvailable());
}

bool  PythonQtWrapper_QNetworkConfiguration::isValid(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QNetworkConfiguration::name(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QNetworkConfiguration::__ne__(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QNetworkConfiguration*  PythonQtWrapper_QNetworkConfiguration::operator_assign(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QNetworkConfiguration::__eq__(QNetworkConfiguration* theWrappedObject, const QNetworkConfiguration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QNetworkConfiguration::Purpose  PythonQtWrapper_QNetworkConfiguration::purpose(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->purpose());
}

QNetworkConfiguration::StateFlags  PythonQtWrapper_QNetworkConfiguration::state(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QNetworkConfiguration::swap(QNetworkConfiguration* theWrappedObject, QNetworkConfiguration&  other)
{
  ( theWrappedObject->swap(other));
}

QNetworkConfiguration::Type  PythonQtWrapper_QNetworkConfiguration::type(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QNetworkConfigurationManager::~PythonQtShell_QNetworkConfigurationManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkConfigurationManager::childEvent(QChildEvent*  event0)
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
  QNetworkConfigurationManager::childEvent(event0);
}
void PythonQtShell_QNetworkConfigurationManager::customEvent(QEvent*  event0)
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
  QNetworkConfigurationManager::customEvent(event0);
}
bool  PythonQtShell_QNetworkConfigurationManager::event(QEvent*  event0)
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
  return QNetworkConfigurationManager::event(event0);
}
bool  PythonQtShell_QNetworkConfigurationManager::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkConfigurationManager::eventFilter(watched0, event1);
}
void PythonQtShell_QNetworkConfigurationManager::timerEvent(QTimerEvent*  event0)
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
  QNetworkConfigurationManager::timerEvent(event0);
}
QNetworkConfigurationManager* PythonQtWrapper_QNetworkConfigurationManager::new_QNetworkConfigurationManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkConfigurationManager(parent); }

const QMetaObject* PythonQtShell_QNetworkConfigurationManager::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkConfigurationManager::staticMetaObject);
  } else {
    return &QNetworkConfigurationManager::staticMetaObject;
  }
}
int PythonQtShell_QNetworkConfigurationManager::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkConfigurationManager::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QNetworkConfiguration >  PythonQtWrapper_QNetworkConfigurationManager::allConfigurations(QNetworkConfigurationManager* theWrappedObject, QNetworkConfiguration::StateFlags  flags) const
{
  return ( theWrappedObject->allConfigurations(flags));
}

QNetworkConfigurationManager::Capabilities  PythonQtWrapper_QNetworkConfigurationManager::capabilities(QNetworkConfigurationManager* theWrappedObject) const
{
  return ( theWrappedObject->capabilities());
}

QNetworkConfiguration  PythonQtWrapper_QNetworkConfigurationManager::configurationFromIdentifier(QNetworkConfigurationManager* theWrappedObject, const QString&  identifier) const
{
  return ( theWrappedObject->configurationFromIdentifier(identifier));
}

QNetworkConfiguration  PythonQtWrapper_QNetworkConfigurationManager::defaultConfiguration(QNetworkConfigurationManager* theWrappedObject) const
{
  return ( theWrappedObject->defaultConfiguration());
}

bool  PythonQtWrapper_QNetworkConfigurationManager::isOnline(QNetworkConfigurationManager* theWrappedObject) const
{
  return ( theWrappedObject->isOnline());
}



QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QByteArray&  name, const QByteArray&  value)
{ 
return new QNetworkCookie(name, value); }

QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QNetworkCookie&  other)
{ 
return new QNetworkCookie(other); }

QString  PythonQtWrapper_QNetworkCookie::domain(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->domain());
}

QDateTime  PythonQtWrapper_QNetworkCookie::expirationDate(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

bool  PythonQtWrapper_QNetworkCookie::hasSameIdentifier(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( theWrappedObject->hasSameIdentifier(other));
}

bool  PythonQtWrapper_QNetworkCookie::isHttpOnly(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isHttpOnly());
}

bool  PythonQtWrapper_QNetworkCookie::isSecure(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSecure());
}

bool  PythonQtWrapper_QNetworkCookie::isSessionCookie(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSessionCookie());
}

QByteArray  PythonQtWrapper_QNetworkCookie::name(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QNetworkCookie::normalize(QNetworkCookie* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->normalize(url));
}

bool  PythonQtWrapper_QNetworkCookie::__ne__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkCookie::__eq__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)== other);
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookie::static_QNetworkCookie_parseCookies(const QByteArray&  cookieString)
{
  return (QNetworkCookie::parseCookies(cookieString));
}

QString  PythonQtWrapper_QNetworkCookie::path(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QNetworkCookie::setDomain(QNetworkCookie* theWrappedObject, const QString&  domain)
{
  ( theWrappedObject->setDomain(domain));
}

void PythonQtWrapper_QNetworkCookie::setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date)
{
  ( theWrappedObject->setExpirationDate(date));
}

void PythonQtWrapper_QNetworkCookie::setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setHttpOnly(enable));
}

void PythonQtWrapper_QNetworkCookie::setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName)
{
  ( theWrappedObject->setName(cookieName));
}

void PythonQtWrapper_QNetworkCookie::setPath(QNetworkCookie* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

void PythonQtWrapper_QNetworkCookie::setSecure(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSecure(enable));
}

void PythonQtWrapper_QNetworkCookie::setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value)
{
  ( theWrappedObject->setValue(value));
}

void PythonQtWrapper_QNetworkCookie::swap(QNetworkCookie* theWrappedObject, QNetworkCookie&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QNetworkCookie::toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form) const
{
  return ( theWrappedObject->toRawForm(form));
}

QByteArray  PythonQtWrapper_QNetworkCookie::value(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

QString PythonQtWrapper_QNetworkCookie::py_toString(QNetworkCookie* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QNetworkCookieJar::~PythonQtShell_QNetworkCookieJar() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkCookieJar::childEvent(QChildEvent*  event0)
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
  QNetworkCookieJar::childEvent(event0);
}
QList<QNetworkCookie >  PythonQtShell_QNetworkCookieJar::cookiesForUrl(const QUrl&  url0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cookiesForUrl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QNetworkCookie >" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkCookie > returnValue;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cookiesForUrl", methodInfo, result);
          } else {
            returnValue = *((QList<QNetworkCookie >*)args[0]);
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
  return QNetworkCookieJar::cookiesForUrl(url0);
}
void PythonQtShell_QNetworkCookieJar::customEvent(QEvent*  event0)
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
  QNetworkCookieJar::customEvent(event0);
}
bool  PythonQtShell_QNetworkCookieJar::deleteCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("deleteCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("deleteCookie", methodInfo, result);
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
  return QNetworkCookieJar::deleteCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::event(QEvent*  event0)
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
  return QNetworkCookieJar::event(event0);
}
bool  PythonQtShell_QNetworkCookieJar::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkCookieJar::eventFilter(watched0, event1);
}
bool  PythonQtShell_QNetworkCookieJar::insertCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("insertCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertCookie", methodInfo, result);
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
  return QNetworkCookieJar::insertCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setCookiesFromUrl");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QList<QNetworkCookie >&" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&cookieList0, (void*)&url1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setCookiesFromUrl", methodInfo, result);
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
  return QNetworkCookieJar::setCookiesFromUrl(cookieList0, url1);
}
void PythonQtShell_QNetworkCookieJar::timerEvent(QTimerEvent*  event0)
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
  QNetworkCookieJar::timerEvent(event0);
}
bool  PythonQtShell_QNetworkCookieJar::updateCookie(const QNetworkCookie&  cookie0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&cookie0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("updateCookie", methodInfo, result);
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
  return QNetworkCookieJar::updateCookie(cookie0);
}
bool  PythonQtShell_QNetworkCookieJar::validateCookie(const QNetworkCookie&  cookie0, const QUrl&  url1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("validateCookie");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QNetworkCookie&" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&cookie0, (void*)&url1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("validateCookie", methodInfo, result);
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
  return QNetworkCookieJar::validateCookie(cookie0, url1);
}
QNetworkCookieJar* PythonQtWrapper_QNetworkCookieJar::new_QNetworkCookieJar(QObject*  parent)
{ 
return new PythonQtShell_QNetworkCookieJar(parent); }

const QMetaObject* PythonQtShell_QNetworkCookieJar::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkCookieJar::staticMetaObject);
  } else {
    return &QNetworkCookieJar::staticMetaObject;
  }
}
int PythonQtShell_QNetworkCookieJar::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkCookieJar::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::allCookies(QNetworkCookieJar* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_allCookies());
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->cookiesForUrl(url));
}

bool  PythonQtWrapper_QNetworkCookieJar::deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->deleteCookie(cookie));
}

bool  PythonQtWrapper_QNetworkCookieJar::insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->insertCookie(cookie));
}

void PythonQtWrapper_QNetworkCookieJar::setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList)
{
  ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_setAllCookies(cookieList));
}

bool  PythonQtWrapper_QNetworkCookieJar::setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
  return ( theWrappedObject->setCookiesFromUrl(cookieList, url));
}

bool  PythonQtWrapper_QNetworkCookieJar::updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie)
{
  return ( theWrappedObject->updateCookie(cookie));
}

bool  PythonQtWrapper_QNetworkCookieJar::validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_validateCookie(cookie, url));
}



PythonQtShell_QNetworkDiskCache::~PythonQtShell_QNetworkDiskCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QNetworkDiskCache::cacheSize() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("cacheSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("cacheSize", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkDiskCache::cacheSize();
}
void PythonQtShell_QNetworkDiskCache::childEvent(QChildEvent*  event0)
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
  QNetworkDiskCache::childEvent(event0);
}
void PythonQtShell_QNetworkDiskCache::clear()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("clear");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkDiskCache::clear();
}
void PythonQtShell_QNetworkDiskCache::customEvent(QEvent*  event0)
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
  QNetworkDiskCache::customEvent(event0);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::data(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
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
  return QNetworkDiskCache::data(url0);
}
bool  PythonQtShell_QNetworkDiskCache::event(QEvent*  event0)
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
  return QNetworkDiskCache::event(event0);
}
bool  PythonQtShell_QNetworkDiskCache::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkDiskCache::eventFilter(watched0, event1);
}
qint64  PythonQtShell_QNetworkDiskCache::expire()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("expire");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("expire", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkDiskCache::expire();
}
void PythonQtShell_QNetworkDiskCache::insert(QIODevice*  device0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("insert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QIODevice*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&device0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkDiskCache::insert(device0);
}
QNetworkCacheMetaData  PythonQtShell_QNetworkDiskCache::metaData(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("metaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QNetworkCacheMetaData" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QNetworkCacheMetaData returnValue;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("metaData", methodInfo, result);
          } else {
            returnValue = *((QNetworkCacheMetaData*)args[0]);
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
  return QNetworkDiskCache::metaData(url0);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::prepare(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("prepare");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QIODevice*" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QIODevice* returnValue;
      void* args[2] = {NULL, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("prepare", methodInfo, result);
          } else {
            returnValue = *((QIODevice**)args[0]);
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
  return QNetworkDiskCache::prepare(metaData0);
}
bool  PythonQtShell_QNetworkDiskCache::remove(const QUrl&  url0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("remove");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QUrl&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&url0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("remove", methodInfo, result);
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
  return QNetworkDiskCache::remove(url0);
}
void PythonQtShell_QNetworkDiskCache::timerEvent(QTimerEvent*  event0)
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
  QNetworkDiskCache::timerEvent(event0);
}
void PythonQtShell_QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("updateMetaData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QNetworkCacheMetaData&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&metaData0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkDiskCache::updateMetaData(metaData0);
}
QNetworkDiskCache* PythonQtWrapper_QNetworkDiskCache::new_QNetworkDiskCache(QObject*  parent)
{ 
return new PythonQtShell_QNetworkDiskCache(parent); }

const QMetaObject* PythonQtShell_QNetworkDiskCache::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkDiskCache::staticMetaObject);
  } else {
    return &QNetworkDiskCache::staticMetaObject;
  }
}
int PythonQtShell_QNetworkDiskCache::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkDiskCache::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QNetworkDiskCache::cacheDirectory(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheDirectory());
}

qint64  PythonQtWrapper_QNetworkDiskCache::expire(QNetworkDiskCache* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_expire());
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->fileMetaData(fileName));
}

qint64  PythonQtWrapper_QNetworkDiskCache::maximumCacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->maximumCacheSize());
}

void PythonQtWrapper_QNetworkDiskCache::setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir)
{
  ( theWrappedObject->setCacheDirectory(cacheDir));
}

void PythonQtWrapper_QNetworkDiskCache::setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setMaximumCacheSize(size));
}



QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface()
{ 
return new QNetworkInterface(); }

QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface(const QNetworkInterface&  other)
{ 
return new QNetworkInterface(other); }

QList<QNetworkAddressEntry >  PythonQtWrapper_QNetworkInterface::addressEntries(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->addressEntries());
}

QList<QHostAddress >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allAddresses()
{
  return (QNetworkInterface::allAddresses());
}

QList<QNetworkInterface >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allInterfaces()
{
  return (QNetworkInterface::allInterfaces());
}

QNetworkInterface::InterfaceFlags  PythonQtWrapper_QNetworkInterface::flags(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

QString  PythonQtWrapper_QNetworkInterface::hardwareAddress(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->hardwareAddress());
}

QString  PythonQtWrapper_QNetworkInterface::humanReadableName(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->humanReadableName());
}

int  PythonQtWrapper_QNetworkInterface::index(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->index());
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromIndex(int  index)
{
  return (QNetworkInterface::interfaceFromIndex(index));
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromName(const QString&  name)
{
  return (QNetworkInterface::interfaceFromName(name));
}

bool  PythonQtWrapper_QNetworkInterface::isValid(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QNetworkInterface::name(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QNetworkInterface::swap(QNetworkInterface* theWrappedObject, QNetworkInterface&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QNetworkInterface::py_toString(QNetworkInterface* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy()
{ 
return new QNetworkProxy(); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName, unsigned short  port, const QString&  user, const QString&  password)
{ 
return new QNetworkProxy(type, hostName, port, user, password); }

QNetworkProxy* PythonQtWrapper_QNetworkProxy::new_QNetworkProxy(const QNetworkProxy&  other)
{ 
return new QNetworkProxy(other); }

QNetworkProxy  PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_applicationProxy()
{
  return (QNetworkProxy::applicationProxy());
}

QNetworkProxy::Capabilities  PythonQtWrapper_QNetworkProxy::capabilities(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->capabilities());
}

bool  PythonQtWrapper_QNetworkProxy::hasRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkProxy::header(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

QString  PythonQtWrapper_QNetworkProxy::hostName(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

bool  PythonQtWrapper_QNetworkProxy::isCachingProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isCachingProxy());
}

bool  PythonQtWrapper_QNetworkProxy::isTransparentProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isTransparentProxy());
}

bool  PythonQtWrapper_QNetworkProxy::__ne__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkProxy::__eq__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QNetworkProxy::password(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

unsigned short  PythonQtWrapper_QNetworkProxy::port(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

QByteArray  PythonQtWrapper_QNetworkProxy::rawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkProxy::rawHeaderList(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

void PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy)
{
  (QNetworkProxy::setApplicationProxy(proxy));
}

void PythonQtWrapper_QNetworkProxy::setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab)
{
  ( theWrappedObject->setCapabilities(capab));
}

void PythonQtWrapper_QNetworkProxy::setHeader(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QNetworkProxy::setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName)
{
  ( theWrappedObject->setHostName(hostName));
}

void PythonQtWrapper_QNetworkProxy::setPassword(QNetworkProxy* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

void PythonQtWrapper_QNetworkProxy::setPort(QNetworkProxy* theWrappedObject, unsigned short  port)
{
  ( theWrappedObject->setPort(port));
}

void PythonQtWrapper_QNetworkProxy::setRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkProxy::setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QNetworkProxy::setUser(QNetworkProxy* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUser(userName));
}

void PythonQtWrapper_QNetworkProxy::swap(QNetworkProxy* theWrappedObject, QNetworkProxy&  other)
{
  ( theWrappedObject->swap(other));
}

QNetworkProxy::ProxyType  PythonQtWrapper_QNetworkProxy::type(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QNetworkProxy::user(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->user());
}

QString PythonQtWrapper_QNetworkProxy::py_toString(QNetworkProxy* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QNetworkProxyFactory::~PythonQtShell_QNetworkProxyFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QNetworkProxy >  PythonQtShell_QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery&  query0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("queryProxy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QNetworkProxy >" , "const QNetworkProxyQuery&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkProxy > returnValue;
      void* args[2] = {NULL, (void*)&query0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("queryProxy", methodInfo, result);
          } else {
            returnValue = *((QList<QNetworkProxy >*)args[0]);
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
  return QList<QNetworkProxy >();
}
QNetworkProxyFactory* PythonQtWrapper_QNetworkProxyFactory::new_QNetworkProxyFactory()
{ 
return new PythonQtShell_QNetworkProxyFactory(); }

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::proxyForQuery(query));
}

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query)
{
  return ( theWrappedObject->queryProxy(query));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory)
{
  (QNetworkProxyFactory::setApplicationProxyFactory(factory));
}

void PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable)
{
  (QNetworkProxyFactory::setUseSystemConfiguration(enable));
}

QList<QNetworkProxy >  PythonQtWrapper_QNetworkProxyFactory::static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query)
{
  return (QNetworkProxyFactory::systemProxyForQuery(query));
}



QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery()
{ 
return new QNetworkProxyQuery(); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, const QString&  hostname, int  port, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(networkConfiguration, hostname, port, protocolTag, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(networkConfiguration, requestUrl, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkConfiguration&  networkConfiguration, unsigned short  bindPort, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(networkConfiguration, bindPort, protocolTag, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QNetworkProxyQuery&  other)
{ 
return new QNetworkProxyQuery(other); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(hostname, port, protocolTag, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(requestUrl, queryType); }

QNetworkProxyQuery* PythonQtWrapper_QNetworkProxyQuery::new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag, QNetworkProxyQuery::QueryType  queryType)
{ 
return new QNetworkProxyQuery(bindPort, protocolTag, queryType); }

int  PythonQtWrapper_QNetworkProxyQuery::localPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

QNetworkConfiguration  PythonQtWrapper_QNetworkProxyQuery::networkConfiguration(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->networkConfiguration());
}

bool  PythonQtWrapper_QNetworkProxyQuery::__ne__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkProxyQuery::__eq__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QNetworkProxyQuery::peerHostName(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerHostName());
}

int  PythonQtWrapper_QNetworkProxyQuery::peerPort(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

QString  PythonQtWrapper_QNetworkProxyQuery::protocolTag(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->protocolTag());
}

QNetworkProxyQuery::QueryType  PythonQtWrapper_QNetworkProxyQuery::queryType(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryType());
}

void PythonQtWrapper_QNetworkProxyQuery::setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setLocalPort(port));
}

void PythonQtWrapper_QNetworkProxyQuery::setNetworkConfiguration(QNetworkProxyQuery* theWrappedObject, const QNetworkConfiguration&  networkConfiguration)
{
  ( theWrappedObject->setNetworkConfiguration(networkConfiguration));
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname)
{
  ( theWrappedObject->setPeerHostName(hostname));
}

void PythonQtWrapper_QNetworkProxyQuery::setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port)
{
  ( theWrappedObject->setPeerPort(port));
}

void PythonQtWrapper_QNetworkProxyQuery::setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag)
{
  ( theWrappedObject->setProtocolTag(protocolTag));
}

void PythonQtWrapper_QNetworkProxyQuery::setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type)
{
  ( theWrappedObject->setQueryType(type));
}

void PythonQtWrapper_QNetworkProxyQuery::setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QNetworkProxyQuery::swap(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery&  other)
{
  ( theWrappedObject->swap(other));
}

QUrl  PythonQtWrapper_QNetworkProxyQuery::url(QNetworkProxyQuery* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QNetworkReply::~PythonQtShell_QNetworkReply() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkReply::abort()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("abort");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  
}
bool  PythonQtShell_QNetworkReply::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("atEnd");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("atEnd", methodInfo, result);
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
  return QNetworkReply::atEnd();
}
qint64  PythonQtShell_QNetworkReply::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesAvailable", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::bytesAvailable();
}
qint64  PythonQtShell_QNetworkReply::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("bytesToWrite", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::bytesToWrite();
}
bool  PythonQtShell_QNetworkReply::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canReadLine", methodInfo, result);
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
  return QNetworkReply::canReadLine();
}
void PythonQtShell_QNetworkReply::childEvent(QChildEvent*  event0)
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
  QNetworkReply::childEvent(event0);
}
void PythonQtShell_QNetworkReply::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::close();
}
void PythonQtShell_QNetworkReply::customEvent(QEvent*  event0)
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
  QNetworkReply::customEvent(event0);
}
bool  PythonQtShell_QNetworkReply::event(QEvent*  event0)
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
  return QNetworkReply::event(event0);
}
bool  PythonQtShell_QNetworkReply::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkReply::eventFilter(watched0, event1);
}
void PythonQtShell_QNetworkReply::ignoreSslErrors()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("ignoreSslErrors");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::ignoreSslErrors();
}
void PythonQtShell_QNetworkReply::ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("ignoreSslErrorsImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QList<QSslError >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::ignoreSslErrorsImplementation(arg__1);
}
bool  PythonQtShell_QNetworkReply::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isSequential");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isSequential", methodInfo, result);
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
  return QNetworkReply::isSequential();
}
bool  PythonQtShell_QNetworkReply::open(QIODevice::OpenMode  mode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&mode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("open", methodInfo, result);
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
  return QNetworkReply::open(mode0);
}
qint64  PythonQtShell_QNetworkReply::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("pos", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::pos();
}
qint64  PythonQtShell_QNetworkReply::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return qint64();
}
qint64  PythonQtShell_QNetworkReply::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("readLineData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QNetworkReply::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("reset");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("reset", methodInfo, result);
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
  return QNetworkReply::reset();
}
bool  PythonQtShell_QNetworkReply::seek(qint64  pos0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&pos0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("seek", methodInfo, result);
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
  return QNetworkReply::seek(pos0);
}
void PythonQtShell_QNetworkReply::setReadBufferSize(qint64  size0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setReadBufferSize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&size0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::setReadBufferSize(size0);
}
void PythonQtShell_QNetworkReply::setSslConfigurationImplementation(const QSslConfiguration&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSslConfigurationImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QSslConfiguration&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::setSslConfigurationImplementation(arg__1);
}
qint64  PythonQtShell_QNetworkReply::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("size", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::size();
}
void PythonQtShell_QNetworkReply::sslConfigurationImplementation(QSslConfiguration&  arg__1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sslConfigurationImplementation");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QSslConfiguration&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QNetworkReply::sslConfigurationImplementation(arg__1);
}
void PythonQtShell_QNetworkReply::timerEvent(QTimerEvent*  event0)
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
  QNetworkReply::timerEvent(event0);
}
bool  PythonQtShell_QNetworkReply::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForBytesWritten", methodInfo, result);
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
  return QNetworkReply::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QNetworkReply::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("waitForReadyRead", methodInfo, result);
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
  return QNetworkReply::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QNetworkReply::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue = 0;
      void* args[3] = {NULL, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("writeData", methodInfo, result);
          } else {
            returnValue = *((qint64*)args[0]);
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
  return QNetworkReply::writeData(data0, len1);
}
QNetworkReply* PythonQtWrapper_QNetworkReply::new_QNetworkReply(QObject*  parent)
{ 
return new PythonQtShell_QNetworkReply(parent); }

const QMetaObject* PythonQtShell_QNetworkReply::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkReply::staticMetaObject);
  } else {
    return &QNetworkReply::staticMetaObject;
  }
}
int PythonQtShell_QNetworkReply::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkReply::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QNetworkReply::attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const
{
  return ( theWrappedObject->attribute(code));
}

QNetworkReply::NetworkError  PythonQtWrapper_QNetworkReply::error(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QNetworkReply::hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkReply::header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

void PythonQtWrapper_QNetworkReply::ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_ignoreSslErrorsImplementation(arg__1));
}

bool  PythonQtWrapper_QNetworkReply::isFinished(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QNetworkReply::isRunning(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

QNetworkAccessManager*  PythonQtWrapper_QNetworkReply::manager(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->manager());
}

QNetworkAccessManager::Operation  PythonQtWrapper_QNetworkReply::operation(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->operation());
}

QByteArray  PythonQtWrapper_QNetworkReply::rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkReply::rawHeaderList(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

const QList<QPair<QByteArray , QByteArray >  >*  PythonQtWrapper_QNetworkReply::rawHeaderPairs(QNetworkReply* theWrappedObject) const
{
  return &( theWrappedObject->rawHeaderPairs());
}

qint64  PythonQtWrapper_QNetworkReply::readBufferSize(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

QNetworkRequest  PythonQtWrapper_QNetworkReply::request(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->request());
}

void PythonQtWrapper_QNetworkReply::setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setAttribute(code, value));
}

void PythonQtWrapper_QNetworkReply::setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setError(errorCode, errorString));
}

void PythonQtWrapper_QNetworkReply::setFinished(QNetworkReply* theWrappedObject, bool  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setFinished(arg__1));
}

void PythonQtWrapper_QNetworkReply::setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setHeader(header, value));
}

void PythonQtWrapper_QNetworkReply::setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setOperation(operation));
}

void PythonQtWrapper_QNetworkReply::setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkReply::setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

void PythonQtWrapper_QNetworkReply::setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setRequest(request));
}

void PythonQtWrapper_QNetworkReply::setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setSslConfigurationImplementation(arg__1));
}

void PythonQtWrapper_QNetworkReply::setUrl(QNetworkReply* theWrappedObject, const QUrl&  url)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setUrl(url));
}

void PythonQtWrapper_QNetworkReply::sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_sslConfigurationImplementation(arg__1));
}

QUrl  PythonQtWrapper_QNetworkReply::url(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QNetworkRequest&  other)
{ 
return new QNetworkRequest(other); }

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QUrl&  url)
{ 
return new QNetworkRequest(url); }

QVariant  PythonQtWrapper_QNetworkRequest::attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->attribute(code, defaultValue));
}

bool  PythonQtWrapper_QNetworkRequest::hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QVariant  PythonQtWrapper_QNetworkRequest::header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

int  PythonQtWrapper_QNetworkRequest::maximumRedirectsAllowed(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->maximumRedirectsAllowed());
}

bool  PythonQtWrapper_QNetworkRequest::__ne__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QNetworkRequest::__eq__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
  return ( (*theWrappedObject)== other);
}

QObject*  PythonQtWrapper_QNetworkRequest::originatingObject(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->originatingObject());
}

QNetworkRequest::Priority  PythonQtWrapper_QNetworkRequest::priority(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->priority());
}

QByteArray  PythonQtWrapper_QNetworkRequest::rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

QList<QByteArray >  PythonQtWrapper_QNetworkRequest::rawHeaderList(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

void PythonQtWrapper_QNetworkRequest::setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
  ( theWrappedObject->setAttribute(code, value));
}

void PythonQtWrapper_QNetworkRequest::setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

void PythonQtWrapper_QNetworkRequest::setMaximumRedirectsAllowed(QNetworkRequest* theWrappedObject, int  maximumRedirectsAllowed)
{
  ( theWrappedObject->setMaximumRedirectsAllowed(maximumRedirectsAllowed));
}

void PythonQtWrapper_QNetworkRequest::setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->setOriginatingObject(object));
}

void PythonQtWrapper_QNetworkRequest::setPriority(QNetworkRequest* theWrappedObject, QNetworkRequest::Priority  priority)
{
  ( theWrappedObject->setPriority(priority));
}

void PythonQtWrapper_QNetworkRequest::setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setRawHeader(headerName, value));
}

void PythonQtWrapper_QNetworkRequest::setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

void PythonQtWrapper_QNetworkRequest::swap(QNetworkRequest* theWrappedObject, QNetworkRequest&  other)
{
  ( theWrappedObject->swap(other));
}

QUrl  PythonQtWrapper_QNetworkRequest::url(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}


