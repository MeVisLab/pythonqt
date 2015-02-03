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
#include <qftp.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttp.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qnetworkaccessmanager.h>
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
#include <qsslerror.h>
#include <qstringlist.h>
#include <qtcpsocket.h>
#include <qurl.h>
#include <qurlinfo.h>

PythonQtShell_QAbstractNetworkCache::~PythonQtShell_QAbstractNetworkCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QAbstractNetworkCache::cacheSize() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("cacheSize");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return qint64();
}
void PythonQtShell_QAbstractNetworkCache::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QAbstractNetworkCache::childEvent(arg__1);
}
void PythonQtShell_QAbstractNetworkCache::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
void PythonQtShell_QAbstractNetworkCache::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QAbstractNetworkCache::customEvent(arg__1);
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::data(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return 0;
}
bool  PythonQtShell_QAbstractNetworkCache::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QAbstractNetworkCache::event(arg__1);
}
bool  PythonQtShell_QAbstractNetworkCache::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QAbstractNetworkCache::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractNetworkCache::insert(QIODevice*  device0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
QNetworkCacheMetaData  PythonQtShell_QAbstractNetworkCache::metaData(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkCacheMetaData();
}
QIODevice*  PythonQtShell_QAbstractNetworkCache::prepare(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return 0;
}
bool  PythonQtShell_QAbstractNetworkCache::remove(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("remove");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return bool();
}
void PythonQtShell_QAbstractNetworkCache::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QAbstractNetworkCache::timerEvent(arg__1);
}
void PythonQtShell_QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
QAbstractNetworkCache* PythonQtWrapper_QAbstractNetworkCache::new_QAbstractNetworkCache(QObject*  parent)
{ 
return new PythonQtShell_QAbstractNetworkCache(parent); }

qint64  PythonQtWrapper_QAbstractNetworkCache::cacheSize(QAbstractNetworkCache* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_cacheSize());
}

void PythonQtWrapper_QAbstractNetworkCache::clear(QAbstractNetworkCache* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_clear());
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_data(url));
}

void PythonQtWrapper_QAbstractNetworkCache::insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device)
{
  ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_insert(device));
}

QNetworkCacheMetaData  PythonQtWrapper_QAbstractNetworkCache::metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_metaData(url));
}

QIODevice*  PythonQtWrapper_QAbstractNetworkCache::prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  return ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_prepare(metaData));
}

bool  PythonQtWrapper_QAbstractNetworkCache::remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_remove(url));
}

void PythonQtWrapper_QAbstractNetworkCache::updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  ( ((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->promoted_updateMetaData(metaData));
}



PythonQtShell_QAbstractSocket::~PythonQtShell_QAbstractSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QAbstractSocket::atEnd() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atEnd");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QAbstractSocket::atEnd();
}
qint64  PythonQtShell_QAbstractSocket::bytesAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::bytesAvailable();
}
qint64  PythonQtShell_QAbstractSocket::bytesToWrite() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesToWrite");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::bytesToWrite();
}
bool  PythonQtShell_QAbstractSocket::canReadLine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canReadLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QAbstractSocket::canReadLine();
}
void PythonQtShell_QAbstractSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QAbstractSocket::childEvent(arg__1);
}
void PythonQtShell_QAbstractSocket::close()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QAbstractSocket::close();
}
void PythonQtShell_QAbstractSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QAbstractSocket::customEvent(arg__1);
}
bool  PythonQtShell_QAbstractSocket::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QAbstractSocket::event(arg__1);
}
bool  PythonQtShell_QAbstractSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QAbstractSocket::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QAbstractSocket::isSequential() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isSequential");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QAbstractSocket::isSequential();
}
bool  PythonQtShell_QAbstractSocket::open(QIODevice::OpenMode  mode0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("open");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QAbstractSocket::open(mode0);
}
qint64  PythonQtShell_QAbstractSocket::pos() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pos");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::pos();
}
qint64  PythonQtShell_QAbstractSocket::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QAbstractSocket::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readLineData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QAbstractSocket::reset()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QAbstractSocket::reset();
}
bool  PythonQtShell_QAbstractSocket::seek(qint64  pos0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("seek");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QAbstractSocket::seek(pos0);
}
qint64  PythonQtShell_QAbstractSocket::size() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("size");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::size();
}
void PythonQtShell_QAbstractSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QAbstractSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QAbstractSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForBytesWritten");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QAbstractSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QAbstractSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForReadyRead");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QAbstractSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QAbstractSocket::writeData(const char*  data0, qint64  len1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("writeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QAbstractSocket::writeData(data0, len1);
}
QAbstractSocket* PythonQtWrapper_QAbstractSocket::new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent)
{ 
return new PythonQtShell_QAbstractSocket(socketType, parent); }

void PythonQtWrapper_QAbstractSocket::abort(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

bool  PythonQtWrapper_QAbstractSocket::atEnd(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_atEnd());
}

qint64  PythonQtWrapper_QAbstractSocket::bytesAvailable(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_bytesAvailable());
}

qint64  PythonQtWrapper_QAbstractSocket::bytesToWrite(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_bytesToWrite());
}

bool  PythonQtWrapper_QAbstractSocket::canReadLine(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_canReadLine());
}

void PythonQtWrapper_QAbstractSocket::close(QAbstractSocket* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_close());
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(address, port, mode));
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(hostName, port, mode));
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

bool  PythonQtWrapper_QAbstractSocket::isSequential(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_isSequential());
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

qint64  PythonQtWrapper_QAbstractSocket::readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_readData(data, maxlen));
}

qint64  PythonQtWrapper_QAbstractSocket::readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

void PythonQtWrapper_QAbstractSocket::setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalAddress(address));
}

void PythonQtWrapper_QAbstractSocket::setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_setLocalPort(port));
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

bool  PythonQtWrapper_QAbstractSocket::setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state, QIODevice::OpenMode  openMode)
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

int  PythonQtWrapper_QAbstractSocket::socketDescriptor(QAbstractSocket* theWrappedObject) const
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

bool  PythonQtWrapper_QAbstractSocket::waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForConnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

qint64  PythonQtWrapper_QAbstractSocket::writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_writeData(data, len));
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

void PythonQtWrapper_QAuthenticator::setUser(QAuthenticator* theWrappedObject, const QString&  user)
{
  ( theWrappedObject->setUser(user));
}

QString  PythonQtWrapper_QAuthenticator::user(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->user());
}



PythonQtShell_QFtp::~PythonQtShell_QFtp() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFtp::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QFtp::childEvent(arg__1);
}
void PythonQtShell_QFtp::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QFtp::customEvent(arg__1);
}
bool  PythonQtShell_QFtp::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QFtp::event(arg__1);
}
bool  PythonQtShell_QFtp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QFtp::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QFtp::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QFtp::timerEvent(arg__1);
}
QFtp* PythonQtWrapper_QFtp::new_QFtp(QObject*  parent)
{ 
return new PythonQtShell_QFtp(parent); }

qint64  PythonQtWrapper_QFtp::bytesAvailable(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

int  PythonQtWrapper_QFtp::cd(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->cd(dir));
}

void PythonQtWrapper_QFtp::clearPendingCommands(QFtp* theWrappedObject)
{
  ( theWrappedObject->clearPendingCommands());
}

int  PythonQtWrapper_QFtp::close(QFtp* theWrappedObject)
{
  return ( theWrappedObject->close());
}

int  PythonQtWrapper_QFtp::connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
  return ( theWrappedObject->connectToHost(host, port));
}

QFtp::Command  PythonQtWrapper_QFtp::currentCommand(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentCommand());
}

QIODevice*  PythonQtWrapper_QFtp::currentDevice(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentDevice());
}

int  PythonQtWrapper_QFtp::currentId(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

QFtp::Error  PythonQtWrapper_QFtp::error(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QFtp::errorString(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QFtp::get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev, QFtp::TransferType  type)
{
  return ( theWrappedObject->get(file, dev, type));
}

bool  PythonQtWrapper_QFtp::hasPendingCommands(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingCommands());
}

int  PythonQtWrapper_QFtp::list(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->list(dir));
}

int  PythonQtWrapper_QFtp::login(QFtp* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->login(user, password));
}

int  PythonQtWrapper_QFtp::mkdir(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->mkdir(dir));
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type)
{
  return ( theWrappedObject->put(dev, file, type));
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type)
{
  return ( theWrappedObject->put(data, file, type));
}

int  PythonQtWrapper_QFtp::rawCommand(QFtp* theWrappedObject, const QString&  command)
{
  return ( theWrappedObject->rawCommand(command));
}

qint64  PythonQtWrapper_QFtp::read(QFtp* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( theWrappedObject->read(data, maxlen));
}

QByteArray  PythonQtWrapper_QFtp::readAll(QFtp* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

int  PythonQtWrapper_QFtp::remove(QFtp* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->remove(file));
}

int  PythonQtWrapper_QFtp::rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname)
{
  return ( theWrappedObject->rename(oldname, newname));
}

int  PythonQtWrapper_QFtp::rmdir(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->rmdir(dir));
}

int  PythonQtWrapper_QFtp::setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
  return ( theWrappedObject->setProxy(host, port));
}

int  PythonQtWrapper_QFtp::setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode)
{
  return ( theWrappedObject->setTransferMode(mode));
}

QFtp::State  PythonQtWrapper_QFtp::state(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->state());
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

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr)
{
  ( theWrappedObject->setAddress(ip4Addr));
}

void PythonQtWrapper_QHostAddress::setScopeId(QHostAddress* theWrappedObject, const QString&  id)
{
  ( theWrappedObject->setScopeId(id));
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv4Address());
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



PythonQtShell_QHttp::~PythonQtShell_QHttp() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHttp::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QHttp::childEvent(arg__1);
}
void PythonQtShell_QHttp::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QHttp::customEvent(arg__1);
}
bool  PythonQtShell_QHttp::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QHttp::event(arg__1);
}
bool  PythonQtShell_QHttp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QHttp::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHttp::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QHttp::timerEvent(arg__1);
}
QHttp* PythonQtWrapper_QHttp::new_QHttp(QObject*  parent)
{ 
return new PythonQtShell_QHttp(parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QHttp(hostname, mode, port, parent); }

QHttp* PythonQtWrapper_QHttp::new_QHttp(const QString&  hostname, unsigned short  port, QObject*  parent)
{ 
return new PythonQtShell_QHttp(hostname, port, parent); }

qint64  PythonQtWrapper_QHttp::bytesAvailable(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

void PythonQtWrapper_QHttp::clearPendingRequests(QHttp* theWrappedObject)
{
  ( theWrappedObject->clearPendingRequests());
}

int  PythonQtWrapper_QHttp::close(QHttp* theWrappedObject)
{
  return ( theWrappedObject->close());
}

QIODevice*  PythonQtWrapper_QHttp::currentDestinationDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentDestinationDevice());
}

int  PythonQtWrapper_QHttp::currentId(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

QHttpRequestHeader  PythonQtWrapper_QHttp::currentRequest(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentRequest());
}

QIODevice*  PythonQtWrapper_QHttp::currentSourceDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentSourceDevice());
}

QHttp::Error  PythonQtWrapper_QHttp::error(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QHttp::errorString(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QHttp::get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to)
{
  return ( theWrappedObject->get(path, to));
}

bool  PythonQtWrapper_QHttp::hasPendingRequests(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingRequests());
}

int  PythonQtWrapper_QHttp::head(QHttp* theWrappedObject, const QString&  path)
{
  return ( theWrappedObject->head(path));
}

QHttpResponseHeader  PythonQtWrapper_QHttp::lastResponse(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->lastResponse());
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

qint64  PythonQtWrapper_QHttp::read(QHttp* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( theWrappedObject->read(data, maxlen));
}

QByteArray  PythonQtWrapper_QHttp::readAll(QHttp* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device, QIODevice*  to)
{
  return ( theWrappedObject->request(header, device, to));
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->request(header, data, to));
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, mode, port));
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, port));
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy)
{
  return ( theWrappedObject->setProxy(proxy));
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setProxy(host, port, username, password));
}

int  PythonQtWrapper_QHttp::setSocket(QHttp* theWrappedObject, QTcpSocket*  socket)
{
  return ( theWrappedObject->setSocket(socket));
}

int  PythonQtWrapper_QHttp::setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setUser(username, password));
}

QHttp::State  PythonQtWrapper_QHttp::state(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->state());
}



PythonQtShell_QHttpHeader::~PythonQtShell_QHttpHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QHttpHeader::majorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("majorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("majorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return int();
}
int  PythonQtShell_QHttpHeader::minorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("minorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return int();
}
bool  PythonQtShell_QHttpHeader::parseLine(const QString&  line0, int  number1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("parseLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line0, (void*)&number1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parseLine", methodInfo, result);
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
  return QHttpHeader::parseLine(line0, number1);
}
QString  PythonQtShell_QHttpHeader::toString() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("toString");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("toString", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
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
  return QHttpHeader::toString();
}
QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader()
{ 
return new PythonQtShell_QHttpHeader(); }

QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpHeader(str); }

void PythonQtWrapper_QHttpHeader::addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addValue(key, value));
}

QStringList  PythonQtWrapper_QHttpHeader::allValues(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->allValues(key));
}

uint  PythonQtWrapper_QHttpHeader::contentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentLength());
}

QString  PythonQtWrapper_QHttpHeader::contentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentType());
}

bool  PythonQtWrapper_QHttpHeader::hasContentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentLength());
}

bool  PythonQtWrapper_QHttpHeader::hasContentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentType());
}

bool  PythonQtWrapper_QHttpHeader::hasKey(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasKey(key));
}

bool  PythonQtWrapper_QHttpHeader::isValid(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QStringList  PythonQtWrapper_QHttpHeader::keys(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

int  PythonQtWrapper_QHttpHeader::majorVersion(QHttpHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_majorVersion());
}

int  PythonQtWrapper_QHttpHeader::minorVersion(QHttpHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_minorVersion());
}

bool  PythonQtWrapper_QHttpHeader::parse(QHttpHeader* theWrappedObject, const QString&  str)
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_parse(str));
}

bool  PythonQtWrapper_QHttpHeader::parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

void PythonQtWrapper_QHttpHeader::removeAllValues(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllValues(key));
}

void PythonQtWrapper_QHttpHeader::removeValue(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeValue(key));
}

void PythonQtWrapper_QHttpHeader::setContentLength(QHttpHeader* theWrappedObject, int  len)
{
  ( theWrappedObject->setContentLength(len));
}

void PythonQtWrapper_QHttpHeader::setContentType(QHttpHeader* theWrappedObject, const QString&  type)
{
  ( theWrappedObject->setContentType(type));
}

void PythonQtWrapper_QHttpHeader::setValid(QHttpHeader* theWrappedObject, bool  arg__1)
{
  ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_setValid(arg__1));
}

void PythonQtWrapper_QHttpHeader::setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->setValue(key, value));
}

void PythonQtWrapper_QHttpHeader::setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values)
{
  ( theWrappedObject->setValues(values));
}

QString  PythonQtWrapper_QHttpHeader::toString(QHttpHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_toString());
}

QString  PythonQtWrapper_QHttpHeader::value(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QHttpHeader::values(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->values());
}

QString PythonQtWrapper_QHttpHeader::py_toString(QHttpHeader* obj) { return obj->toString(); }


PythonQtShell_QHttpMultiPart::~PythonQtShell_QHttpMultiPart() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHttpMultiPart::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QHttpMultiPart::childEvent(arg__1);
}
void PythonQtShell_QHttpMultiPart::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QHttpMultiPart::customEvent(arg__1);
}
bool  PythonQtShell_QHttpMultiPart::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QHttpMultiPart::event(arg__1);
}
bool  PythonQtShell_QHttpMultiPart::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QHttpMultiPart::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHttpMultiPart::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QHttpMultiPart::timerEvent(arg__1);
}
QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(contentType, parent); }

QHttpMultiPart* PythonQtWrapper_QHttpMultiPart::new_QHttpMultiPart(QObject*  parent)
{ 
return new PythonQtShell_QHttpMultiPart(parent); }

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



PythonQtShell_QHttpRequestHeader::~PythonQtShell_QHttpRequestHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QHttpRequestHeader::majorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("majorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("majorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return QHttpRequestHeader::majorVersion();
}
int  PythonQtShell_QHttpRequestHeader::minorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("minorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return QHttpRequestHeader::minorVersion();
}
bool  PythonQtShell_QHttpRequestHeader::parseLine(const QString&  line0, int  number1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("parseLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line0, (void*)&number1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parseLine", methodInfo, result);
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
  return QHttpRequestHeader::parseLine(line0, number1);
}
QString  PythonQtShell_QHttpRequestHeader::toString() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("toString");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("toString", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
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
  return QHttpRequestHeader::toString();
}
QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader()
{ 
return new PythonQtShell_QHttpRequestHeader(); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QHttpRequestHeader&  header)
{ 
return new PythonQtShell_QHttpRequestHeader(header); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{ 
return new PythonQtShell_QHttpRequestHeader(method, path, majorVer, minorVer); }

QHttpRequestHeader* PythonQtWrapper_QHttpRequestHeader::new_QHttpRequestHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpRequestHeader(str); }

int  PythonQtWrapper_QHttpRequestHeader::majorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_majorVersion());
}

QString  PythonQtWrapper_QHttpRequestHeader::method(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

int  PythonQtWrapper_QHttpRequestHeader::minorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_minorVersion());
}

bool  PythonQtWrapper_QHttpRequestHeader::parseLine(QHttpRequestHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

QString  PythonQtWrapper_QHttpRequestHeader::path(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QHttpRequestHeader::setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{
  ( theWrappedObject->setRequest(method, path, majorVer, minorVer));
}

QString  PythonQtWrapper_QHttpRequestHeader::toString(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_toString());
}

QString PythonQtWrapper_QHttpRequestHeader::py_toString(QHttpRequestHeader* obj) { return obj->toString(); }


PythonQtShell_QHttpResponseHeader::~PythonQtShell_QHttpResponseHeader() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
int  PythonQtShell_QHttpResponseHeader::majorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("majorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("majorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return QHttpResponseHeader::majorVersion();
}
int  PythonQtShell_QHttpResponseHeader::minorVersion() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("minorVersion");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("minorVersion", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
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
  return QHttpResponseHeader::minorVersion();
}
bool  PythonQtShell_QHttpResponseHeader::parseLine(const QString&  line0, int  number1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("parseLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line0, (void*)&number1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("parseLine", methodInfo, result);
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
  return QHttpResponseHeader::parseLine(line0, number1);
}
QString  PythonQtShell_QHttpResponseHeader::toString() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("toString");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("toString", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
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
  return QHttpResponseHeader::toString();
}
QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader()
{ 
return new PythonQtShell_QHttpResponseHeader(); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QHttpResponseHeader&  header)
{ 
return new PythonQtShell_QHttpResponseHeader(header); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpResponseHeader(str); }

QHttpResponseHeader* PythonQtWrapper_QHttpResponseHeader::new_QHttpResponseHeader(int  code, const QString&  text, int  majorVer, int  minorVer)
{ 
return new PythonQtShell_QHttpResponseHeader(code, text, majorVer, minorVer); }

int  PythonQtWrapper_QHttpResponseHeader::majorVersion(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_majorVersion());
}

int  PythonQtWrapper_QHttpResponseHeader::minorVersion(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_minorVersion());
}

bool  PythonQtWrapper_QHttpResponseHeader::parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

QString  PythonQtWrapper_QHttpResponseHeader::reasonPhrase(QHttpResponseHeader* theWrappedObject) const
{
  return ( theWrappedObject->reasonPhrase());
}

void PythonQtWrapper_QHttpResponseHeader::setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text, int  majorVer, int  minorVer)
{
  ( theWrappedObject->setStatusLine(code, text, majorVer, minorVer));
}

int  PythonQtWrapper_QHttpResponseHeader::statusCode(QHttpResponseHeader* theWrappedObject) const
{
  return ( theWrappedObject->statusCode());
}

QString  PythonQtWrapper_QHttpResponseHeader::toString(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_toString());
}

QString PythonQtWrapper_QHttpResponseHeader::py_toString(QHttpResponseHeader* obj) { return obj->toString(); }


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
void PythonQtShell_QLocalServer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QLocalServer::childEvent(arg__1);
}
void PythonQtShell_QLocalServer::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QLocalServer::customEvent(arg__1);
}
bool  PythonQtShell_QLocalServer::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QLocalServer::event(arg__1);
}
bool  PythonQtShell_QLocalServer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QLocalServer::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QLocalServer::hasPendingConnections() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasPendingConnections");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QLocalServer::hasPendingConnections();
}
void PythonQtShell_QLocalServer::incomingConnection(quintptr  socketDescriptor0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QLocalServer::incomingConnection(socketDescriptor0);
}
QLocalSocket*  PythonQtShell_QLocalServer::nextPendingConnection()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QLocalServer::nextPendingConnection();
}
void PythonQtShell_QLocalServer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QLocalServer::timerEvent(arg__1);
}
QLocalServer* PythonQtWrapper_QLocalServer::new_QLocalServer(QObject*  parent)
{ 
return new PythonQtShell_QLocalServer(parent); }

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
  return ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_hasPendingConnections());
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

int  PythonQtWrapper_QLocalServer::maxPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QLocalSocket*  PythonQtWrapper_QLocalServer::nextPendingConnection(QLocalServer* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_nextPendingConnection());
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
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atEnd");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QLocalSocket::atEnd();
}
qint64  PythonQtShell_QLocalSocket::bytesAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::bytesAvailable();
}
qint64  PythonQtShell_QLocalSocket::bytesToWrite() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesToWrite");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::bytesToWrite();
}
bool  PythonQtShell_QLocalSocket::canReadLine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canReadLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QLocalSocket::canReadLine();
}
void PythonQtShell_QLocalSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QLocalSocket::childEvent(arg__1);
}
void PythonQtShell_QLocalSocket::close()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QLocalSocket::close();
}
void PythonQtShell_QLocalSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QLocalSocket::customEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QLocalSocket::event(arg__1);
}
bool  PythonQtShell_QLocalSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QLocalSocket::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QLocalSocket::isSequential() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isSequential");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QLocalSocket::isSequential();
}
bool  PythonQtShell_QLocalSocket::open(QIODevice::OpenMode  mode0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("open");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QLocalSocket::open(mode0);
}
qint64  PythonQtShell_QLocalSocket::pos() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pos");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::pos();
}
qint64  PythonQtShell_QLocalSocket::readData(char*  arg__1, qint64  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::readData(arg__1, arg__2);
}
qint64  PythonQtShell_QLocalSocket::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readLineData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QLocalSocket::reset()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QLocalSocket::reset();
}
bool  PythonQtShell_QLocalSocket::seek(qint64  pos0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("seek");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QLocalSocket::seek(pos0);
}
qint64  PythonQtShell_QLocalSocket::size() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("size");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::size();
}
void PythonQtShell_QLocalSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QLocalSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::waitForBytesWritten(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForBytesWritten");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QLocalSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QLocalSocket::waitForReadyRead(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForReadyRead");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QLocalSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QLocalSocket::writeData(const char*  arg__1, qint64  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("writeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QLocalSocket::writeData(arg__1, arg__2);
}
QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new PythonQtShell_QLocalSocket(parent); }

void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

qint64  PythonQtWrapper_QLocalSocket::bytesAvailable(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesAvailable());
}

qint64  PythonQtWrapper_QLocalSocket::bytesToWrite(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesToWrite());
}

bool  PythonQtWrapper_QLocalSocket::canReadLine(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_canReadLine());
}

void PythonQtWrapper_QLocalSocket::close(QLocalSocket* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_close());
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

bool  PythonQtWrapper_QLocalSocket::isSequential(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_isSequential());
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

qint64  PythonQtWrapper_QLocalSocket::readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_readData(arg__1, arg__2));
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODevice::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode));
}

quintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QLocalSocket::waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

qint64  PythonQtWrapper_QLocalSocket::writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_writeData(arg__1, arg__2));
}



PythonQtShell_QNetworkAccessManager::~PythonQtShell_QNetworkAccessManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkAccessManager::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkAccessManager::childEvent(arg__1);
}
QNetworkReply*  PythonQtShell_QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkAccessManager::createRequest(op0, request1, outgoingData2);
}
void PythonQtShell_QNetworkAccessManager::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkAccessManager::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkAccessManager::event(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkAccessManager::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QNetworkAccessManager::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkAccessManager::timerEvent(arg__1);
}
QNetworkAccessManager* PythonQtWrapper_QNetworkAccessManager::new_QNetworkAccessManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkAccessManager(parent); }

QNetworkConfiguration  PythonQtWrapper_QNetworkAccessManager::activeConfiguration(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->activeConfiguration());
}

QAbstractNetworkCache*  PythonQtWrapper_QNetworkAccessManager::cache(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cache());
}

QNetworkConfiguration  PythonQtWrapper_QNetworkAccessManager::configuration(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
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

QString  PythonQtWrapper_QNetworkConfiguration::bearerName(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->bearerName());
}

QNetworkConfiguration::BearerType  PythonQtWrapper_QNetworkConfiguration::bearerType(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->bearerType());
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

QNetworkConfiguration::Type  PythonQtWrapper_QNetworkConfiguration::type(QNetworkConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



PythonQtShell_QNetworkConfigurationManager::~PythonQtShell_QNetworkConfigurationManager() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkConfigurationManager::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkConfigurationManager::childEvent(arg__1);
}
void PythonQtShell_QNetworkConfigurationManager::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkConfigurationManager::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkConfigurationManager::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkConfigurationManager::event(arg__1);
}
bool  PythonQtShell_QNetworkConfigurationManager::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkConfigurationManager::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QNetworkConfigurationManager::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkConfigurationManager::timerEvent(arg__1);
}
QNetworkConfigurationManager* PythonQtWrapper_QNetworkConfigurationManager::new_QNetworkConfigurationManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkConfigurationManager(parent); }

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
void PythonQtShell_QNetworkCookieJar::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkCookieJar::childEvent(arg__1);
}
QList<QNetworkCookie >  PythonQtShell_QNetworkCookieJar::cookiesForUrl(const QUrl&  url0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkCookieJar::cookiesForUrl(url0);
}
void PythonQtShell_QNetworkCookieJar::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkCookieJar::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkCookieJar::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkCookieJar::event(arg__1);
}
bool  PythonQtShell_QNetworkCookieJar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkCookieJar::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setCookiesFromUrl");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QList<QNetworkCookie >&" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
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
  return QNetworkCookieJar::setCookiesFromUrl(cookieList0, url1);
}
void PythonQtShell_QNetworkCookieJar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkCookieJar::timerEvent(arg__1);
}
QNetworkCookieJar* PythonQtWrapper_QNetworkCookieJar::new_QNetworkCookieJar(QObject*  parent)
{ 
return new PythonQtShell_QNetworkCookieJar(parent); }

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::allCookies(QNetworkCookieJar* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_allCookies());
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_cookiesForUrl(url));
}

void PythonQtWrapper_QNetworkCookieJar::setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList)
{
  ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_setAllCookies(cookieList));
}

bool  PythonQtWrapper_QNetworkCookieJar::setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_setCookiesFromUrl(cookieList, url));
}



PythonQtShell_QNetworkDiskCache::~PythonQtShell_QNetworkDiskCache() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
qint64  PythonQtShell_QNetworkDiskCache::cacheSize() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("cacheSize");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkDiskCache::cacheSize();
}
void PythonQtShell_QNetworkDiskCache::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkDiskCache::childEvent(arg__1);
}
void PythonQtShell_QNetworkDiskCache::clear()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkDiskCache::clear();
}
void PythonQtShell_QNetworkDiskCache::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkDiskCache::customEvent(arg__1);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::data(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkDiskCache::data(url0);
}
bool  PythonQtShell_QNetworkDiskCache::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkDiskCache::event(arg__1);
}
bool  PythonQtShell_QNetworkDiskCache::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkDiskCache::eventFilter(arg__1, arg__2);
}
qint64  PythonQtShell_QNetworkDiskCache::expire()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("expire");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkDiskCache::expire();
}
void PythonQtShell_QNetworkDiskCache::insert(QIODevice*  device0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkDiskCache::insert(device0);
}
QNetworkCacheMetaData  PythonQtShell_QNetworkDiskCache::metaData(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkDiskCache::metaData(url0);
}
QIODevice*  PythonQtShell_QNetworkDiskCache::prepare(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QNetworkDiskCache::prepare(metaData0);
}
bool  PythonQtShell_QNetworkDiskCache::remove(const QUrl&  url0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("remove");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QNetworkDiskCache::remove(url0);
}
void PythonQtShell_QNetworkDiskCache::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkDiskCache::timerEvent(arg__1);
}
void PythonQtShell_QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkDiskCache::updateMetaData(metaData0);
}
QNetworkDiskCache* PythonQtWrapper_QNetworkDiskCache::new_QNetworkDiskCache(QObject*  parent)
{ 
return new PythonQtShell_QNetworkDiskCache(parent); }

QString  PythonQtWrapper_QNetworkDiskCache::cacheDirectory(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->cacheDirectory());
}

qint64  PythonQtWrapper_QNetworkDiskCache::cacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_cacheSize());
}

void PythonQtWrapper_QNetworkDiskCache::clear(QNetworkDiskCache* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_clear());
}

QIODevice*  PythonQtWrapper_QNetworkDiskCache::data(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_data(url));
}

qint64  PythonQtWrapper_QNetworkDiskCache::expire(QNetworkDiskCache* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_expire());
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->fileMetaData(fileName));
}

void PythonQtWrapper_QNetworkDiskCache::insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device)
{
  ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_insert(device));
}

qint64  PythonQtWrapper_QNetworkDiskCache::maximumCacheSize(QNetworkDiskCache* theWrappedObject) const
{
  return ( theWrappedObject->maximumCacheSize());
}

QNetworkCacheMetaData  PythonQtWrapper_QNetworkDiskCache::metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_metaData(url));
}

QIODevice*  PythonQtWrapper_QNetworkDiskCache::prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_prepare(metaData));
}

bool  PythonQtWrapper_QNetworkDiskCache::remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_remove(url));
}

void PythonQtWrapper_QNetworkDiskCache::setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir)
{
  ( theWrappedObject->setCacheDirectory(cacheDir));
}

void PythonQtWrapper_QNetworkDiskCache::setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setMaximumCacheSize(size));
}

void PythonQtWrapper_QNetworkDiskCache::updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData)
{
  ( ((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->promoted_updateMetaData(metaData));
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

void PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy)
{
  (QNetworkProxy::setApplicationProxy(proxy));
}

void PythonQtWrapper_QNetworkProxy::setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab)
{
  ( theWrappedObject->setCapabilities(capab));
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

void PythonQtWrapper_QNetworkProxy::setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type)
{
  ( theWrappedObject->setType(type));
}

void PythonQtWrapper_QNetworkProxy::setUser(QNetworkProxy* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUser(userName));
}

QNetworkProxy::ProxyType  PythonQtWrapper_QNetworkProxy::type(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString  PythonQtWrapper_QNetworkProxy::user(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->user());
}



PythonQtShell_QNetworkProxyFactory::~PythonQtShell_QNetworkProxyFactory() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QList<QNetworkProxy >  PythonQtShell_QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery&  query0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return ( ((PythonQtPublicPromoter_QNetworkProxyFactory*)theWrappedObject)->promoted_queryProxy(query));
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
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
bool  PythonQtShell_QNetworkReply::atEnd() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atEnd");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QNetworkReply::atEnd();
}
qint64  PythonQtShell_QNetworkReply::bytesAvailable() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesAvailable");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::bytesAvailable();
}
qint64  PythonQtShell_QNetworkReply::bytesToWrite() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("bytesToWrite");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::bytesToWrite();
}
bool  PythonQtShell_QNetworkReply::canReadLine() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canReadLine");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QNetworkReply::canReadLine();
}
void PythonQtShell_QNetworkReply::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkReply::childEvent(arg__1);
}
void PythonQtShell_QNetworkReply::close()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkReply::close();
}
void PythonQtShell_QNetworkReply::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkReply::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkReply::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkReply::event(arg__1);
}
bool  PythonQtShell_QNetworkReply::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkReply::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QNetworkReply::ignoreSslErrors()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkReply::ignoreSslErrors();
}
bool  PythonQtShell_QNetworkReply::isSequential() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isSequential");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QNetworkReply::isSequential();
}
bool  PythonQtShell_QNetworkReply::open(QIODevice::OpenMode  mode0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("open");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QNetworkReply::open(mode0);
}
qint64  PythonQtShell_QNetworkReply::pos() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("pos");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::pos();
}
qint64  PythonQtShell_QNetworkReply::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return qint64();
}
qint64  PythonQtShell_QNetworkReply::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("readLineData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QNetworkReply::reset()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("reset");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue;
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
  return QNetworkReply::reset();
}
bool  PythonQtShell_QNetworkReply::seek(qint64  pos0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("seek");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QNetworkReply::seek(pos0);
}
void PythonQtShell_QNetworkReply::setReadBufferSize(qint64  size0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QNetworkReply::setReadBufferSize(size0);
}
qint64  PythonQtShell_QNetworkReply::size() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("size");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::size();
}
void PythonQtShell_QNetworkReply::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkReply::timerEvent(arg__1);
}
bool  PythonQtShell_QNetworkReply::waitForBytesWritten(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForBytesWritten");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QNetworkReply::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QNetworkReply::waitForReadyRead(int  msecs0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("waitForReadyRead");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QNetworkReply::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QNetworkReply::writeData(const char*  data0, qint64  len1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("writeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
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
  return QNetworkReply::writeData(data0, len1);
}
QNetworkReply* PythonQtWrapper_QNetworkReply::new_QNetworkReply(QObject*  parent)
{ 
return new PythonQtShell_QNetworkReply(parent); }

void PythonQtWrapper_QNetworkReply::abort(QNetworkReply* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_abort());
}

QVariant  PythonQtWrapper_QNetworkReply::attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const
{
  return ( theWrappedObject->attribute(code));
}

void PythonQtWrapper_QNetworkReply::close(QNetworkReply* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_close());
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

void PythonQtWrapper_QNetworkReply::ignoreSslErrors(QNetworkReply* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_ignoreSslErrors());
}

bool  PythonQtWrapper_QNetworkReply::isFinished(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isFinished());
}

bool  PythonQtWrapper_QNetworkReply::isRunning(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

bool  PythonQtWrapper_QNetworkReply::isSequential(QNetworkReply* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_isSequential());
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
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setReadBufferSize(size));
}

void PythonQtWrapper_QNetworkReply::setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setRequest(request));
}

void PythonQtWrapper_QNetworkReply::setUrl(QNetworkReply* theWrappedObject, const QUrl&  url)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setUrl(url));
}

QUrl  PythonQtWrapper_QNetworkReply::url(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

qint64  PythonQtWrapper_QNetworkReply::writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_writeData(data, len));
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

QUrl  PythonQtWrapper_QNetworkRequest::url(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}



PythonQtShell_QNetworkSession::~PythonQtShell_QNetworkSession() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkSession::childEvent(QChildEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("childEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
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
  QNetworkSession::childEvent(arg__1);
}
void PythonQtShell_QNetworkSession::connectNotify(const char*  signal0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("connectNotify");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const char*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&signal0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QNetworkSession::connectNotify(signal0);
}
void PythonQtShell_QNetworkSession::customEvent(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("customEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QEvent*"};
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
  QNetworkSession::customEvent(arg__1);
}
void PythonQtShell_QNetworkSession::disconnectNotify(const char*  signal0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("disconnectNotify");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const char*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&signal0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QNetworkSession::disconnectNotify(signal0);
}
bool  PythonQtShell_QNetworkSession::event(QEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QNetworkSession::event(arg__1);
}
bool  PythonQtShell_QNetworkSession::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("eventFilter");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QNetworkSession::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QNetworkSession::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("timerEvent");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
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
  QNetworkSession::timerEvent(arg__1);
}
QNetworkSession* PythonQtWrapper_QNetworkSession::new_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent)
{ 
return new PythonQtShell_QNetworkSession(connConfig, parent); }

quint64  PythonQtWrapper_QNetworkSession::activeTime(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->activeTime());
}

quint64  PythonQtWrapper_QNetworkSession::bytesReceived(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->bytesReceived());
}

quint64  PythonQtWrapper_QNetworkSession::bytesWritten(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->bytesWritten());
}

QNetworkConfiguration  PythonQtWrapper_QNetworkSession::configuration(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->configuration());
}

void PythonQtWrapper_QNetworkSession::connectNotify(QNetworkSession* theWrappedObject, const char*  signal)
{
  ( ((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->promoted_connectNotify(signal));
}

void PythonQtWrapper_QNetworkSession::disconnectNotify(QNetworkSession* theWrappedObject, const char*  signal)
{
  ( ((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->promoted_disconnectNotify(signal));
}

QNetworkSession::SessionError  PythonQtWrapper_QNetworkSession::error(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QNetworkSession::errorString(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QNetworkInterface  PythonQtWrapper_QNetworkSession::interface(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->interface());
}

bool  PythonQtWrapper_QNetworkSession::isOpen(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

QVariant  PythonQtWrapper_QNetworkSession::sessionProperty(QNetworkSession* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->sessionProperty(key));
}

void PythonQtWrapper_QNetworkSession::setSessionProperty(QNetworkSession* theWrappedObject, const QString&  key, const QVariant&  value)
{
  ( theWrappedObject->setSessionProperty(key, value));
}

QNetworkSession::State  PythonQtWrapper_QNetworkSession::state(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

bool  PythonQtWrapper_QNetworkSession::waitForOpened(QNetworkSession* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForOpened(msecs));
}


