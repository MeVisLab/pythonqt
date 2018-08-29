#include "com_trolltech_qt_network1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatetime.h>
#include <qevent.h>
#include <qhostaddress.h>
#include <qiodevice.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkconfiguration.h>
#include <qnetworkdatagram.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkrequest.h>
#include <qnetworksession.h>
#include <qobject.h>
#include <qpair.h>
#include <qsslcertificate.h>
#include <qsslcertificateextension.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslellipticcurve.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qsslsocket.h>
#include <qstringlist.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurl.h>
#include <qvector.h>

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



PythonQtShell_QNetworkSession::~PythonQtShell_QNetworkSession() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QNetworkSession::childEvent(QChildEvent*  event0)
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
  QNetworkSession::childEvent(event0);
}
void PythonQtShell_QNetworkSession::connectNotify(const QMetaMethod&  signal0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("connectNotify");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QMetaMethod&"};
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
}
  QNetworkSession::connectNotify(signal0);
}
void PythonQtShell_QNetworkSession::customEvent(QEvent*  event0)
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
  QNetworkSession::customEvent(event0);
}
void PythonQtShell_QNetworkSession::disconnectNotify(const QMetaMethod&  signal0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("disconnectNotify");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QMetaMethod&"};
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
}
  QNetworkSession::disconnectNotify(signal0);
}
bool  PythonQtShell_QNetworkSession::event(QEvent*  event0)
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
  return QNetworkSession::event(event0);
}
bool  PythonQtShell_QNetworkSession::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QNetworkSession::eventFilter(watched0, event1);
}
void PythonQtShell_QNetworkSession::timerEvent(QTimerEvent*  event0)
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
  QNetworkSession::timerEvent(event0);
}
QNetworkSession* PythonQtWrapper_QNetworkSession::new_QNetworkSession(const QNetworkConfiguration&  connConfig, QObject*  parent)
{ 
return new PythonQtShell_QNetworkSession(connConfig, parent); }

const QMetaObject* PythonQtShell_QNetworkSession::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QNetworkSession::staticMetaObject);
  } else {
    return &QNetworkSession::staticMetaObject;
  }
}
int PythonQtShell_QNetworkSession::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QNetworkSession::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
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

void PythonQtWrapper_QNetworkSession::connectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal)
{
  ( ((PythonQtPublicPromoter_QNetworkSession*)theWrappedObject)->promoted_connectNotify(signal));
}

void PythonQtWrapper_QNetworkSession::disconnectNotify(QNetworkSession* theWrappedObject, const QMetaMethod&  signal)
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

QNetworkSession::UsagePolicies  PythonQtWrapper_QNetworkSession::usagePolicies(QNetworkSession* theWrappedObject) const
{
  return ( theWrappedObject->usagePolicies());
}

bool  PythonQtWrapper_QNetworkSession::waitForOpened(QNetworkSession* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForOpened(msecs));
}



#ifndef QT_NO_SSL
#endif


#ifndef QT_NO_SSL
QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(QIODevice*  device, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(device, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QByteArray&  data, QSsl::EncodingFormat  format)
{ 
return new QSslCertificate(data, format); }

QSslCertificate* PythonQtWrapper_QSslCertificate::new_QSslCertificate(const QSslCertificate&  other)
{ 
return new QSslCertificate(other); }

void PythonQtWrapper_QSslCertificate::clear(QSslCertificate* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QByteArray  PythonQtWrapper_QSslCertificate::digest(QSslCertificate* theWrappedObject, QCryptographicHash::Algorithm  algorithm) const
{
  return ( theWrappedObject->digest(algorithm));
}

QDateTime  PythonQtWrapper_QSslCertificate::effectiveDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->effectiveDate());
}

QDateTime  PythonQtWrapper_QSslCertificate::expiryDate(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->expiryDate());
}

QList<QSslCertificateExtension >  PythonQtWrapper_QSslCertificate::extensions(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->extensions());
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromData(const QByteArray&  data, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromData(data, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromDevice(QIODevice*  device, QSsl::EncodingFormat  format)
{
  return (QSslCertificate::fromDevice(device, format));
}

QList<QSslCertificate >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_fromPath(const QString&  path, QSsl::EncodingFormat  format, QRegExp::PatternSyntax  syntax)
{
  return (QSslCertificate::fromPath(path, format, syntax));
}

Qt::HANDLE  PythonQtWrapper_QSslCertificate::handle(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QSslCertificate::static_QSslCertificate_importPkcs12(QIODevice*  device, QSslKey*  key, QSslCertificate*  cert, QList<QSslCertificate >*  caCertificates, const QByteArray&  passPhrase)
{
  return (QSslCertificate::importPkcs12(device, key, cert, caCertificates, passPhrase));
}

bool  PythonQtWrapper_QSslCertificate::isBlacklisted(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isBlacklisted());
}

bool  PythonQtWrapper_QSslCertificate::isNull(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QSslCertificate::isSelfSigned(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->isSelfSigned());
}

QStringList  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->issuerInfo(info));
}

QStringList  PythonQtWrapper_QSslCertificate::issuerInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const
{
  return ( theWrappedObject->issuerInfo(attribute));
}

QList<QByteArray >  PythonQtWrapper_QSslCertificate::issuerInfoAttributes(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->issuerInfoAttributes());
}

bool  PythonQtWrapper_QSslCertificate::__ne__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslCertificate*  PythonQtWrapper_QSslCertificate::operator_assign(QSslCertificate* theWrappedObject, const QSslCertificate&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslCertificate::__eq__(QSslCertificate* theWrappedObject, const QSslCertificate&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSslKey  PythonQtWrapper_QSslCertificate::publicKey(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->publicKey());
}

QByteArray  PythonQtWrapper_QSslCertificate::serialNumber(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->serialNumber());
}

QMultiMap<QSsl::AlternativeNameEntryType , QString >  PythonQtWrapper_QSslCertificate::subjectAlternativeNames(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->subjectAlternativeNames());
}

QStringList  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, QSslCertificate::SubjectInfo  info) const
{
  return ( theWrappedObject->subjectInfo(info));
}

QStringList  PythonQtWrapper_QSslCertificate::subjectInfo(QSslCertificate* theWrappedObject, const QByteArray&  attribute) const
{
  return ( theWrappedObject->subjectInfo(attribute));
}

QList<QByteArray >  PythonQtWrapper_QSslCertificate::subjectInfoAttributes(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->subjectInfoAttributes());
}

void PythonQtWrapper_QSslCertificate::swap(QSslCertificate* theWrappedObject, QSslCertificate&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QSslCertificate::toDer(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toDer());
}

QByteArray  PythonQtWrapper_QSslCertificate::toPem(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toPem());
}

QString  PythonQtWrapper_QSslCertificate::toText(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->toText());
}

QList<QSslError >  PythonQtWrapper_QSslCertificate::static_QSslCertificate_verify(QList<QSslCertificate >  certificateChain, const QString&  hostName)
{
  return (QSslCertificate::verify(certificateChain, hostName));
}

QByteArray  PythonQtWrapper_QSslCertificate::version(QSslCertificate* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QString PythonQtWrapper_QSslCertificate::py_toString(QSslCertificate* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslCertificateExtension* PythonQtWrapper_QSslCertificateExtension::new_QSslCertificateExtension()
{ 
return new QSslCertificateExtension(); }

QSslCertificateExtension* PythonQtWrapper_QSslCertificateExtension::new_QSslCertificateExtension(const QSslCertificateExtension&  other)
{ 
return new QSslCertificateExtension(other); }

bool  PythonQtWrapper_QSslCertificateExtension::isCritical(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->isCritical());
}

bool  PythonQtWrapper_QSslCertificateExtension::isSupported(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->isSupported());
}

QString  PythonQtWrapper_QSslCertificateExtension::name(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QString  PythonQtWrapper_QSslCertificateExtension::oid(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->oid());
}

QSslCertificateExtension*  PythonQtWrapper_QSslCertificateExtension::operator_assign(QSslCertificateExtension* theWrappedObject, const QSslCertificateExtension&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QSslCertificateExtension::swap(QSslCertificateExtension* theWrappedObject, QSslCertificateExtension&  other)
{
  ( theWrappedObject->swap(other));
}

QVariant  PythonQtWrapper_QSslCertificateExtension::value(QSslCertificateExtension* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

#endif


#ifndef QT_NO_SSL
QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher()
{ 
return new QSslCipher(); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QSslCipher&  other)
{ 
return new QSslCipher(other); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QString&  name)
{ 
return new QSslCipher(name); }

QSslCipher* PythonQtWrapper_QSslCipher::new_QSslCipher(const QString&  name, QSsl::SslProtocol  protocol)
{ 
return new QSslCipher(name, protocol); }

QString  PythonQtWrapper_QSslCipher::authenticationMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->authenticationMethod());
}

QString  PythonQtWrapper_QSslCipher::encryptionMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->encryptionMethod());
}

bool  PythonQtWrapper_QSslCipher::isNull(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QSslCipher::keyExchangeMethod(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->keyExchangeMethod());
}

QString  PythonQtWrapper_QSslCipher::name(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QSslCipher::__ne__(QSslCipher* theWrappedObject, const QSslCipher&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslCipher*  PythonQtWrapper_QSslCipher::operator_assign(QSslCipher* theWrappedObject, const QSslCipher&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslCipher::__eq__(QSslCipher* theWrappedObject, const QSslCipher&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSsl::SslProtocol  PythonQtWrapper_QSslCipher::protocol(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QString  PythonQtWrapper_QSslCipher::protocolString(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->protocolString());
}

int  PythonQtWrapper_QSslCipher::supportedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->supportedBits());
}

void PythonQtWrapper_QSslCipher::swap(QSslCipher* theWrappedObject, QSslCipher&  other)
{
  ( theWrappedObject->swap(other));
}

int  PythonQtWrapper_QSslCipher::usedBits(QSslCipher* theWrappedObject) const
{
  return ( theWrappedObject->usedBits());
}

QString PythonQtWrapper_QSslCipher::py_toString(QSslCipher* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
PythonQtShell_QSslConfiguration::~PythonQtShell_QSslConfiguration() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QSslConfiguration* PythonQtWrapper_QSslConfiguration::new_QSslConfiguration()
{ 
return new PythonQtShell_QSslConfiguration(); }

QSslConfiguration* PythonQtWrapper_QSslConfiguration::new_QSslConfiguration(const QSslConfiguration&  other)
{ 
return new PythonQtShell_QSslConfiguration(other); }

QList<QByteArray >  PythonQtWrapper_QSslConfiguration::allowedNextProtocols(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->allowedNextProtocols());
}

QMap<QByteArray , QVariant >  PythonQtWrapper_QSslConfiguration::backendConfiguration(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->backendConfiguration());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::caCertificates(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->caCertificates());
}

QList<QSslCipher >  PythonQtWrapper_QSslConfiguration::ciphers(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ciphers());
}

QSslConfiguration  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_defaultConfiguration()
{
  return (QSslConfiguration::defaultConfiguration());
}

QVector<QSslEllipticCurve >  PythonQtWrapper_QSslConfiguration::ellipticCurves(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ellipticCurves());
}

QSslKey  PythonQtWrapper_QSslConfiguration::ephemeralServerKey(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->ephemeralServerKey());
}

bool  PythonQtWrapper_QSslConfiguration::isNull(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QSslCertificate  PythonQtWrapper_QSslConfiguration::localCertificate(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->localCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::localCertificateChain(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->localCertificateChain());
}

QByteArray  PythonQtWrapper_QSslConfiguration::nextNegotiatedProtocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->nextNegotiatedProtocol());
}

QSslConfiguration::NextProtocolNegotiationStatus  PythonQtWrapper_QSslConfiguration::nextProtocolNegotiationStatus(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->nextProtocolNegotiationStatus());
}

bool  PythonQtWrapper_QSslConfiguration::__ne__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslConfiguration*  PythonQtWrapper_QSslConfiguration::operator_assign(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslConfiguration::__eq__(QSslConfiguration* theWrappedObject, const QSslConfiguration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QSslCertificate  PythonQtWrapper_QSslConfiguration::peerCertificate(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::peerCertificateChain(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificateChain());
}

int  PythonQtWrapper_QSslConfiguration::peerVerifyDepth(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyDepth());
}

QSslSocket::PeerVerifyMode  PythonQtWrapper_QSslConfiguration::peerVerifyMode(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyMode());
}

QByteArray  PythonQtWrapper_QSslConfiguration::preSharedKeyIdentityHint(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->preSharedKeyIdentityHint());
}

QSslKey  PythonQtWrapper_QSslConfiguration::privateKey(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->privateKey());
}

QSsl::SslProtocol  PythonQtWrapper_QSslConfiguration::protocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QSslCipher  PythonQtWrapper_QSslConfiguration::sessionCipher(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionCipher());
}

QSsl::SslProtocol  PythonQtWrapper_QSslConfiguration::sessionProtocol(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionProtocol());
}

QByteArray  PythonQtWrapper_QSslConfiguration::sessionTicket(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionTicket());
}

int  PythonQtWrapper_QSslConfiguration::sessionTicketLifeTimeHint(QSslConfiguration* theWrappedObject) const
{
  return ( theWrappedObject->sessionTicketLifeTimeHint());
}

void PythonQtWrapper_QSslConfiguration::setAllowedNextProtocols(QSslConfiguration* theWrappedObject, QList<QByteArray >  protocols)
{
  ( theWrappedObject->setAllowedNextProtocols(protocols));
}

void PythonQtWrapper_QSslConfiguration::setBackendConfiguration(QSslConfiguration* theWrappedObject, const QMap<QByteArray , QVariant >&  backendConfiguration)
{
  ( theWrappedObject->setBackendConfiguration(backendConfiguration));
}

void PythonQtWrapper_QSslConfiguration::setBackendConfigurationOption(QSslConfiguration* theWrappedObject, const QByteArray&  name, const QVariant&  value)
{
  ( theWrappedObject->setBackendConfigurationOption(name, value));
}

void PythonQtWrapper_QSslConfiguration::setCaCertificates(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  certificates)
{
  ( theWrappedObject->setCaCertificates(certificates));
}

void PythonQtWrapper_QSslConfiguration::setCiphers(QSslConfiguration* theWrappedObject, const QList<QSslCipher >&  ciphers)
{
  ( theWrappedObject->setCiphers(ciphers));
}

void PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_setDefaultConfiguration(const QSslConfiguration&  configuration)
{
  (QSslConfiguration::setDefaultConfiguration(configuration));
}

void PythonQtWrapper_QSslConfiguration::setEllipticCurves(QSslConfiguration* theWrappedObject, const QVector<QSslEllipticCurve >&  curves)
{
  ( theWrappedObject->setEllipticCurves(curves));
}

void PythonQtWrapper_QSslConfiguration::setLocalCertificate(QSslConfiguration* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->setLocalCertificate(certificate));
}

void PythonQtWrapper_QSslConfiguration::setLocalCertificateChain(QSslConfiguration* theWrappedObject, const QList<QSslCertificate >&  localChain)
{
  ( theWrappedObject->setLocalCertificateChain(localChain));
}

void PythonQtWrapper_QSslConfiguration::setPeerVerifyDepth(QSslConfiguration* theWrappedObject, int  depth)
{
  ( theWrappedObject->setPeerVerifyDepth(depth));
}

void PythonQtWrapper_QSslConfiguration::setPeerVerifyMode(QSslConfiguration* theWrappedObject, QSslSocket::PeerVerifyMode  mode)
{
  ( theWrappedObject->setPeerVerifyMode(mode));
}

void PythonQtWrapper_QSslConfiguration::setPreSharedKeyIdentityHint(QSslConfiguration* theWrappedObject, const QByteArray&  hint)
{
  ( theWrappedObject->setPreSharedKeyIdentityHint(hint));
}

void PythonQtWrapper_QSslConfiguration::setPrivateKey(QSslConfiguration* theWrappedObject, const QSslKey&  key)
{
  ( theWrappedObject->setPrivateKey(key));
}

void PythonQtWrapper_QSslConfiguration::setProtocol(QSslConfiguration* theWrappedObject, QSsl::SslProtocol  protocol)
{
  ( theWrappedObject->setProtocol(protocol));
}

void PythonQtWrapper_QSslConfiguration::setSessionTicket(QSslConfiguration* theWrappedObject, const QByteArray&  sessionTicket)
{
  ( theWrappedObject->setSessionTicket(sessionTicket));
}

void PythonQtWrapper_QSslConfiguration::setSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option, bool  on)
{
  ( theWrappedObject->setSslOption(option, on));
}

QList<QSslCipher >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_supportedCiphers()
{
  return (QSslConfiguration::supportedCiphers());
}

QVector<QSslEllipticCurve >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_supportedEllipticCurves()
{
  return (QSslConfiguration::supportedEllipticCurves());
}

void PythonQtWrapper_QSslConfiguration::swap(QSslConfiguration* theWrappedObject, QSslConfiguration&  other)
{
  ( theWrappedObject->swap(other));
}

QList<QSslCertificate >  PythonQtWrapper_QSslConfiguration::static_QSslConfiguration_systemCaCertificates()
{
  return (QSslConfiguration::systemCaCertificates());
}

bool  PythonQtWrapper_QSslConfiguration::testSslOption(QSslConfiguration* theWrappedObject, QSsl::SslOption  option) const
{
  return ( theWrappedObject->testSslOption(option));
}

#endif


#ifndef QT_NO_SSL
QSslEllipticCurve* PythonQtWrapper_QSslEllipticCurve::new_QSslEllipticCurve()
{ 
return new QSslEllipticCurve(); }

QSslEllipticCurve  PythonQtWrapper_QSslEllipticCurve::static_QSslEllipticCurve_fromLongName(const QString&  name)
{
  return (QSslEllipticCurve::fromLongName(name));
}

QSslEllipticCurve  PythonQtWrapper_QSslEllipticCurve::static_QSslEllipticCurve_fromShortName(const QString&  name)
{
  return (QSslEllipticCurve::fromShortName(name));
}

bool  PythonQtWrapper_QSslEllipticCurve::isTlsNamedCurve(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->isTlsNamedCurve());
}

bool  PythonQtWrapper_QSslEllipticCurve::isValid(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QSslEllipticCurve::longName(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->longName());
}

bool  PythonQtWrapper_QSslEllipticCurve::__eq__(QSslEllipticCurve* theWrappedObject, QSslEllipticCurve  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

QString  PythonQtWrapper_QSslEllipticCurve::shortName(QSslEllipticCurve* theWrappedObject) const
{
  return ( theWrappedObject->shortName());
}

QString PythonQtWrapper_QSslEllipticCurve::py_toString(QSslEllipticCurve* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslError* PythonQtWrapper_QSslError::new_QSslError()
{ 
return new QSslError(); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(QSslError::SslError  error)
{ 
return new QSslError(error); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(QSslError::SslError  error, const QSslCertificate&  certificate)
{ 
return new QSslError(error, certificate); }

QSslError* PythonQtWrapper_QSslError::new_QSslError(const QSslError&  other)
{ 
return new QSslError(other); }

QSslCertificate  PythonQtWrapper_QSslError::certificate(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->certificate());
}

QSslError::SslError  PythonQtWrapper_QSslError::error(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSslError::errorString(QSslError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QSslError::__ne__(QSslError* theWrappedObject, const QSslError&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QSslError*  PythonQtWrapper_QSslError::operator_assign(QSslError* theWrappedObject, const QSslError&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslError::__eq__(QSslError* theWrappedObject, const QSslError&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSslError::swap(QSslError* theWrappedObject, QSslError&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QSslError::py_toString(QSslError* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslKey* PythonQtWrapper_QSslKey::new_QSslKey()
{ 
return new QSslKey(); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(QIODevice*  device, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, QSsl::KeyType  type, const QByteArray&  passPhrase)
{ 
return new QSslKey(device, algorithm, format, type, passPhrase); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(Qt::HANDLE  handle, QSsl::KeyType  type)
{ 
return new QSslKey(handle, type); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(const QByteArray&  encoded, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, QSsl::KeyType  type, const QByteArray&  passPhrase)
{ 
return new QSslKey(encoded, algorithm, format, type, passPhrase); }

QSslKey* PythonQtWrapper_QSslKey::new_QSslKey(const QSslKey&  other)
{ 
return new QSslKey(other); }

QSsl::KeyAlgorithm  PythonQtWrapper_QSslKey::algorithm(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->algorithm());
}

void PythonQtWrapper_QSslKey::clear(QSslKey* theWrappedObject)
{
  ( theWrappedObject->clear());
}

Qt::HANDLE  PythonQtWrapper_QSslKey::handle(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QSslKey::isNull(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QSslKey::length(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QSslKey::__ne__(QSslKey* theWrappedObject, const QSslKey&  key) const
{
  return ( (*theWrappedObject)!= key);
}

QSslKey*  PythonQtWrapper_QSslKey::operator_assign(QSslKey* theWrappedObject, const QSslKey&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QSslKey::__eq__(QSslKey* theWrappedObject, const QSslKey&  key) const
{
  return ( (*theWrappedObject)== key);
}

void PythonQtWrapper_QSslKey::swap(QSslKey* theWrappedObject, QSslKey&  other)
{
  ( theWrappedObject->swap(other));
}

QByteArray  PythonQtWrapper_QSslKey::toDer(QSslKey* theWrappedObject, const QByteArray&  passPhrase) const
{
  return ( theWrappedObject->toDer(passPhrase));
}

QByteArray  PythonQtWrapper_QSslKey::toPem(QSslKey* theWrappedObject, const QByteArray&  passPhrase) const
{
  return ( theWrappedObject->toPem(passPhrase));
}

QSsl::KeyType  PythonQtWrapper_QSslKey::type(QSslKey* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QSslKey::py_toString(QSslKey* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}

#endif


#ifndef QT_NO_SSL
QSslPreSharedKeyAuthenticator* PythonQtWrapper_QSslPreSharedKeyAuthenticator::new_QSslPreSharedKeyAuthenticator()
{ 
return new QSslPreSharedKeyAuthenticator(); }

QSslPreSharedKeyAuthenticator* PythonQtWrapper_QSslPreSharedKeyAuthenticator::new_QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator&  authenticator)
{ 
return new QSslPreSharedKeyAuthenticator(authenticator); }

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::identity(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->identity());
}

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::identityHint(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->identityHint());
}

int  PythonQtWrapper_QSslPreSharedKeyAuthenticator::maximumIdentityLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->maximumIdentityLength());
}

int  PythonQtWrapper_QSslPreSharedKeyAuthenticator::maximumPreSharedKeyLength(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->maximumPreSharedKeyLength());
}

QSslPreSharedKeyAuthenticator*  PythonQtWrapper_QSslPreSharedKeyAuthenticator::operator_assign(QSslPreSharedKeyAuthenticator* theWrappedObject, const QSslPreSharedKeyAuthenticator&  authenticator)
{
  return &( (*theWrappedObject)= authenticator);
}

QByteArray  PythonQtWrapper_QSslPreSharedKeyAuthenticator::preSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->preSharedKey());
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::setIdentity(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  identity)
{
  ( theWrappedObject->setIdentity(identity));
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::setPreSharedKey(QSslPreSharedKeyAuthenticator* theWrappedObject, const QByteArray&  preSharedKey)
{
  ( theWrappedObject->setPreSharedKey(preSharedKey));
}

void PythonQtWrapper_QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator* theWrappedObject, QSslPreSharedKeyAuthenticator&  other)
{
  ( theWrappedObject->swap(other));
}

#endif


#ifndef QT_NO_SSL
PythonQtShell_QSslSocket::~PythonQtShell_QSslSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QSslSocket::atEnd() const
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
  return QSslSocket::atEnd();
}
qint64  PythonQtShell_QSslSocket::bytesAvailable() const
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
  return QSslSocket::bytesAvailable();
}
qint64  PythonQtShell_QSslSocket::bytesToWrite() const
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
  return QSslSocket::bytesToWrite();
}
bool  PythonQtShell_QSslSocket::canReadLine() const
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
  return QSslSocket::canReadLine();
}
void PythonQtShell_QSslSocket::childEvent(QChildEvent*  event0)
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
  QSslSocket::childEvent(event0);
}
void PythonQtShell_QSslSocket::close()
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
  QSslSocket::close();
}
void PythonQtShell_QSslSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  openMode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("connectToHost");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QString&" , "unsigned short" , "QIODevice::OpenMode" , "QAbstractSocket::NetworkLayerProtocol"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      void* args[5] = {NULL, (void*)&hostName0, (void*)&port1, (void*)&openMode2, (void*)&protocol3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSslSocket::connectToHost(hostName0, port1, openMode2, protocol3);
}
void PythonQtShell_QSslSocket::customEvent(QEvent*  event0)
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
  QSslSocket::customEvent(event0);
}
void PythonQtShell_QSslSocket::disconnectFromHost()
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
  QSslSocket::disconnectFromHost();
}
bool  PythonQtShell_QSslSocket::event(QEvent*  event0)
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
  return QSslSocket::event(event0);
}
bool  PythonQtShell_QSslSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QSslSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QSslSocket::isSequential() const
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
  return QSslSocket::isSequential();
}
bool  PythonQtShell_QSslSocket::open(QIODevice::OpenMode  mode0)
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
  return QSslSocket::open(mode0);
}
qint64  PythonQtShell_QSslSocket::pos() const
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
  return QSslSocket::pos();
}
qint64  PythonQtShell_QSslSocket::readData(char*  data0, qint64  maxlen1)
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
  return QSslSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QSslSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QSslSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QSslSocket::reset()
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
  return QSslSocket::reset();
}
void PythonQtShell_QSslSocket::resume()
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
  QSslSocket::resume();
}
bool  PythonQtShell_QSslSocket::seek(qint64  pos0)
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
  return QSslSocket::seek(pos0);
}
void PythonQtShell_QSslSocket::setReadBufferSize(qint64  size0)
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
  QSslSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QSslSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODevice::OpenMode  openMode2)
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
  return QSslSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QSslSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QSslSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QSslSocket::size() const
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
  return QSslSocket::size();
}
qintptr  PythonQtShell_QSslSocket::socketDescriptor() const
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
  return QSslSocket::socketDescriptor();
}
QVariant  PythonQtShell_QSslSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QSslSocket::socketOption(option0);
}
void PythonQtShell_QSslSocket::timerEvent(QTimerEvent*  event0)
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
  QSslSocket::timerEvent(event0);
}
bool  PythonQtShell_QSslSocket::waitForBytesWritten(int  msecs0)
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
  return QSslSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForConnected(int  msecs0)
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
  return QSslSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForDisconnected(int  msecs0)
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
  return QSslSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QSslSocket::waitForReadyRead(int  msecs0)
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
  return QSslSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QSslSocket::writeData(const char*  data0, qint64  len1)
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
  return QSslSocket::writeData(data0, len1);
}
QSslSocket* PythonQtWrapper_QSslSocket::new_QSslSocket(QObject*  parent)
{ 
return new PythonQtShell_QSslSocket(parent); }

const QMetaObject* PythonQtShell_QSslSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSslSocket::staticMetaObject);
  } else {
    return &QSslSocket::staticMetaObject;
  }
}
int PythonQtShell_QSslSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSslSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QSslSocket::abort(QSslSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

void PythonQtWrapper_QSslSocket::addCaCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->addCaCertificate(certificate));
}

void PythonQtWrapper_QSslSocket::addCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates)
{
  ( theWrappedObject->addCaCertificates(certificates));
}

bool  PythonQtWrapper_QSslSocket::addCaCertificates(QSslSocket* theWrappedObject, const QString&  path, QSsl::EncodingFormat  format, QRegExp::PatternSyntax  syntax)
{
  return ( theWrappedObject->addCaCertificates(path, format, syntax));
}

void PythonQtWrapper_QSslSocket::static_QSslSocket_addDefaultCaCertificate(const QSslCertificate&  certificate)
{
  (QSslSocket::addDefaultCaCertificate(certificate));
}

void PythonQtWrapper_QSslSocket::static_QSslSocket_addDefaultCaCertificates(const QList<QSslCertificate >&  certificates)
{
  (QSslSocket::addDefaultCaCertificates(certificates));
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_addDefaultCaCertificates(const QString&  path, QSsl::EncodingFormat  format, QRegExp::PatternSyntax  syntax)
{
  return (QSslSocket::addDefaultCaCertificates(path, format, syntax));
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::caCertificates(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->caCertificates());
}

QList<QSslCipher >  PythonQtWrapper_QSslSocket::ciphers(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->ciphers());
}

void PythonQtWrapper_QSslSocket::connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, mode, protocol));
}

void PythonQtWrapper_QSslSocket::connectToHostEncrypted(QSslSocket* theWrappedObject, const QString&  hostName, unsigned short  port, const QString&  sslPeerName, QIODevice::OpenMode  mode, QAbstractSocket::NetworkLayerProtocol  protocol)
{
  ( theWrappedObject->connectToHostEncrypted(hostName, port, sslPeerName, mode, protocol));
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::static_QSslSocket_defaultCaCertificates()
{
  return (QSslSocket::defaultCaCertificates());
}

QList<QSslCipher >  PythonQtWrapper_QSslSocket::static_QSslSocket_defaultCiphers()
{
  return (QSslSocket::defaultCiphers());
}

qint64  PythonQtWrapper_QSslSocket::encryptedBytesAvailable(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->encryptedBytesAvailable());
}

qint64  PythonQtWrapper_QSslSocket::encryptedBytesToWrite(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->encryptedBytesToWrite());
}

bool  PythonQtWrapper_QSslSocket::flush(QSslSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

void PythonQtWrapper_QSslSocket::ignoreSslErrors(QSslSocket* theWrappedObject, const QList<QSslError >&  errors)
{
  ( theWrappedObject->ignoreSslErrors(errors));
}

bool  PythonQtWrapper_QSslSocket::isEncrypted(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->isEncrypted());
}

QSslCertificate  PythonQtWrapper_QSslSocket::localCertificate(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->localCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::localCertificateChain(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->localCertificateChain());
}

QSslSocket::SslMode  PythonQtWrapper_QSslSocket::mode(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->mode());
}

QSslCertificate  PythonQtWrapper_QSslSocket::peerCertificate(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificate());
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::peerCertificateChain(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerCertificateChain());
}

int  PythonQtWrapper_QSslSocket::peerVerifyDepth(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyDepth());
}

QSslSocket::PeerVerifyMode  PythonQtWrapper_QSslSocket::peerVerifyMode(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyMode());
}

QString  PythonQtWrapper_QSslSocket::peerVerifyName(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerVerifyName());
}

QSslKey  PythonQtWrapper_QSslSocket::privateKey(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->privateKey());
}

QSsl::SslProtocol  PythonQtWrapper_QSslSocket::protocol(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

QSslCipher  PythonQtWrapper_QSslSocket::sessionCipher(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sessionCipher());
}

QSsl::SslProtocol  PythonQtWrapper_QSslSocket::sessionProtocol(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sessionProtocol());
}

void PythonQtWrapper_QSslSocket::setCaCertificates(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  certificates)
{
  ( theWrappedObject->setCaCertificates(certificates));
}

void PythonQtWrapper_QSslSocket::setCiphers(QSslSocket* theWrappedObject, const QList<QSslCipher >&  ciphers)
{
  ( theWrappedObject->setCiphers(ciphers));
}

void PythonQtWrapper_QSslSocket::setCiphers(QSslSocket* theWrappedObject, const QString&  ciphers)
{
  ( theWrappedObject->setCiphers(ciphers));
}

void PythonQtWrapper_QSslSocket::static_QSslSocket_setDefaultCaCertificates(const QList<QSslCertificate >&  certificates)
{
  (QSslSocket::setDefaultCaCertificates(certificates));
}

void PythonQtWrapper_QSslSocket::static_QSslSocket_setDefaultCiphers(const QList<QSslCipher >&  ciphers)
{
  (QSslSocket::setDefaultCiphers(ciphers));
}

void PythonQtWrapper_QSslSocket::setLocalCertificate(QSslSocket* theWrappedObject, const QSslCertificate&  certificate)
{
  ( theWrappedObject->setLocalCertificate(certificate));
}

void PythonQtWrapper_QSslSocket::setLocalCertificate(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::EncodingFormat  format)
{
  ( theWrappedObject->setLocalCertificate(fileName, format));
}

void PythonQtWrapper_QSslSocket::setLocalCertificateChain(QSslSocket* theWrappedObject, const QList<QSslCertificate >&  localChain)
{
  ( theWrappedObject->setLocalCertificateChain(localChain));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyDepth(QSslSocket* theWrappedObject, int  depth)
{
  ( theWrappedObject->setPeerVerifyDepth(depth));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyMode(QSslSocket* theWrappedObject, QSslSocket::PeerVerifyMode  mode)
{
  ( theWrappedObject->setPeerVerifyMode(mode));
}

void PythonQtWrapper_QSslSocket::setPeerVerifyName(QSslSocket* theWrappedObject, const QString&  hostName)
{
  ( theWrappedObject->setPeerVerifyName(hostName));
}

void PythonQtWrapper_QSslSocket::setPrivateKey(QSslSocket* theWrappedObject, const QSslKey&  key)
{
  ( theWrappedObject->setPrivateKey(key));
}

void PythonQtWrapper_QSslSocket::setPrivateKey(QSslSocket* theWrappedObject, const QString&  fileName, QSsl::KeyAlgorithm  algorithm, QSsl::EncodingFormat  format, const QByteArray&  passPhrase)
{
  ( theWrappedObject->setPrivateKey(fileName, algorithm, format, passPhrase));
}

void PythonQtWrapper_QSslSocket::setProtocol(QSslSocket* theWrappedObject, QSsl::SslProtocol  protocol)
{
  ( theWrappedObject->setProtocol(protocol));
}

void PythonQtWrapper_QSslSocket::setSslConfiguration(QSslSocket* theWrappedObject, const QSslConfiguration&  config)
{
  ( theWrappedObject->setSslConfiguration(config));
}

QSslConfiguration  PythonQtWrapper_QSslSocket::sslConfiguration(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sslConfiguration());
}

QList<QSslError >  PythonQtWrapper_QSslSocket::sslErrors(QSslSocket* theWrappedObject) const
{
  return ( theWrappedObject->sslErrors());
}

long  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryBuildVersionNumber()
{
  return (QSslSocket::sslLibraryBuildVersionNumber());
}

QString  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryBuildVersionString()
{
  return (QSslSocket::sslLibraryBuildVersionString());
}

long  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryVersionNumber()
{
  return (QSslSocket::sslLibraryVersionNumber());
}

QString  PythonQtWrapper_QSslSocket::static_QSslSocket_sslLibraryVersionString()
{
  return (QSslSocket::sslLibraryVersionString());
}

QList<QSslCipher >  PythonQtWrapper_QSslSocket::static_QSslSocket_supportedCiphers()
{
  return (QSslSocket::supportedCiphers());
}

bool  PythonQtWrapper_QSslSocket::static_QSslSocket_supportsSsl()
{
  return (QSslSocket::supportsSsl());
}

QList<QSslCertificate >  PythonQtWrapper_QSslSocket::static_QSslSocket_systemCaCertificates()
{
  return (QSslSocket::systemCaCertificates());
}

bool  PythonQtWrapper_QSslSocket::waitForEncrypted(QSslSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForEncrypted(msecs));
}

#endif


PythonQtShell_QTcpServer::~PythonQtShell_QTcpServer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTcpServer::childEvent(QChildEvent*  event0)
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
  QTcpServer::childEvent(event0);
}
void PythonQtShell_QTcpServer::customEvent(QEvent*  event0)
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
  QTcpServer::customEvent(event0);
}
bool  PythonQtShell_QTcpServer::event(QEvent*  event0)
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
  return QTcpServer::event(event0);
}
bool  PythonQtShell_QTcpServer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QTcpServer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTcpServer::hasPendingConnections() const
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
  return QTcpServer::hasPendingConnections();
}
void PythonQtShell_QTcpServer::incomingConnection(qintptr  handle0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("incomingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "qintptr"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&handle0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTcpServer::incomingConnection(handle0);
}
QTcpSocket*  PythonQtShell_QTcpServer::nextPendingConnection()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("nextPendingConnection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QTcpSocket*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QTcpSocket* returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("nextPendingConnection", methodInfo, result);
          } else {
            returnValue = *((QTcpSocket**)args[0]);
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
  return QTcpServer::nextPendingConnection();
}
void PythonQtShell_QTcpServer::timerEvent(QTimerEvent*  event0)
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
  QTcpServer::timerEvent(event0);
}
QTcpServer* PythonQtWrapper_QTcpServer::new_QTcpServer(QObject*  parent)
{ 
return new PythonQtShell_QTcpServer(parent); }

const QMetaObject* PythonQtShell_QTcpServer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTcpServer::staticMetaObject);
  } else {
    return &QTcpServer::staticMetaObject;
  }
}
int PythonQtShell_QTcpServer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTcpServer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QTcpServer::addPendingConnection(QTcpServer* theWrappedObject, QTcpSocket*  socket)
{
  ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_addPendingConnection(socket));
}

void PythonQtWrapper_QTcpServer::close(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QTcpServer::errorString(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QTcpServer::hasPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingConnections());
}

void PythonQtWrapper_QTcpServer::incomingConnection(QTcpServer* theWrappedObject, qintptr  handle)
{
  ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_incomingConnection(handle));
}

bool  PythonQtWrapper_QTcpServer::isListening(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

bool  PythonQtWrapper_QTcpServer::listen(QTcpServer* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  return ( theWrappedObject->listen(address, port));
}

int  PythonQtWrapper_QTcpServer::maxPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QTcpSocket*  PythonQtWrapper_QTcpServer::nextPendingConnection(QTcpServer* theWrappedObject)
{
  return ( theWrappedObject->nextPendingConnection());
}

void PythonQtWrapper_QTcpServer::pauseAccepting(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->pauseAccepting());
}

QNetworkProxy  PythonQtWrapper_QTcpServer::proxy(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

void PythonQtWrapper_QTcpServer::resumeAccepting(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->resumeAccepting());
}

QHostAddress  PythonQtWrapper_QTcpServer::serverAddress(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverAddress());
}

QAbstractSocket::SocketError  PythonQtWrapper_QTcpServer::serverError(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

unsigned short  PythonQtWrapper_QTcpServer::serverPort(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverPort());
}

void PythonQtWrapper_QTcpServer::setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

void PythonQtWrapper_QTcpServer::setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

bool  PythonQtWrapper_QTcpServer::setSocketDescriptor(QTcpServer* theWrappedObject, qintptr  socketDescriptor)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor));
}

qintptr  PythonQtWrapper_QTcpServer::socketDescriptor(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

bool  PythonQtWrapper_QTcpServer::waitForNewConnection(QTcpServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}



PythonQtShell_QTcpSocket::~PythonQtShell_QTcpSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QTcpSocket::atEnd() const
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
  return QTcpSocket::atEnd();
}
qint64  PythonQtShell_QTcpSocket::bytesAvailable() const
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
  return QTcpSocket::bytesAvailable();
}
qint64  PythonQtShell_QTcpSocket::bytesToWrite() const
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
  return QTcpSocket::bytesToWrite();
}
bool  PythonQtShell_QTcpSocket::canReadLine() const
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
  return QTcpSocket::canReadLine();
}
void PythonQtShell_QTcpSocket::childEvent(QChildEvent*  event0)
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
  QTcpSocket::childEvent(event0);
}
void PythonQtShell_QTcpSocket::close()
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
  QTcpSocket::close();
}
void PythonQtShell_QTcpSocket::connectToHost(const QHostAddress&  address0, unsigned short  port1, QIODevice::OpenMode  mode2)
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
  QTcpSocket::connectToHost(address0, port1, mode2);
}
void PythonQtShell_QTcpSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
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
  QTcpSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QTcpSocket::customEvent(QEvent*  event0)
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
  QTcpSocket::customEvent(event0);
}
void PythonQtShell_QTcpSocket::disconnectFromHost()
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
  QTcpSocket::disconnectFromHost();
}
bool  PythonQtShell_QTcpSocket::event(QEvent*  event0)
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
  return QTcpSocket::event(event0);
}
bool  PythonQtShell_QTcpSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QTcpSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTcpSocket::isSequential() const
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
  return QTcpSocket::isSequential();
}
bool  PythonQtShell_QTcpSocket::open(QIODevice::OpenMode  mode0)
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
  return QTcpSocket::open(mode0);
}
qint64  PythonQtShell_QTcpSocket::pos() const
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
  return QTcpSocket::pos();
}
qint64  PythonQtShell_QTcpSocket::readData(char*  data0, qint64  maxlen1)
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
  return QTcpSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QTcpSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QTcpSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QTcpSocket::reset()
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
  return QTcpSocket::reset();
}
void PythonQtShell_QTcpSocket::resume()
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
  QTcpSocket::resume();
}
bool  PythonQtShell_QTcpSocket::seek(qint64  pos0)
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
  return QTcpSocket::seek(pos0);
}
void PythonQtShell_QTcpSocket::setReadBufferSize(qint64  size0)
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
  QTcpSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QTcpSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODevice::OpenMode  openMode2)
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
  return QTcpSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QTcpSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QTcpSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QTcpSocket::size() const
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
  return QTcpSocket::size();
}
qintptr  PythonQtShell_QTcpSocket::socketDescriptor() const
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
  return QTcpSocket::socketDescriptor();
}
QVariant  PythonQtShell_QTcpSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QTcpSocket::socketOption(option0);
}
void PythonQtShell_QTcpSocket::timerEvent(QTimerEvent*  event0)
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
  QTcpSocket::timerEvent(event0);
}
bool  PythonQtShell_QTcpSocket::waitForBytesWritten(int  msecs0)
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
  return QTcpSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForConnected(int  msecs0)
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
  return QTcpSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForDisconnected(int  msecs0)
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
  return QTcpSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QTcpSocket::waitForReadyRead(int  msecs0)
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
  return QTcpSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QTcpSocket::writeData(const char*  data0, qint64  len1)
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
  return QTcpSocket::writeData(data0, len1);
}
QTcpSocket* PythonQtWrapper_QTcpSocket::new_QTcpSocket(QObject*  parent)
{ 
return new PythonQtShell_QTcpSocket(parent); }

const QMetaObject* PythonQtShell_QTcpSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTcpSocket::staticMetaObject);
  } else {
    return &QTcpSocket::staticMetaObject;
  }
}
int PythonQtShell_QTcpSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTcpSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QUdpSocket::~PythonQtShell_QUdpSocket() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QUdpSocket::atEnd() const
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
  return QUdpSocket::atEnd();
}
qint64  PythonQtShell_QUdpSocket::bytesAvailable() const
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
  return QUdpSocket::bytesAvailable();
}
qint64  PythonQtShell_QUdpSocket::bytesToWrite() const
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
  return QUdpSocket::bytesToWrite();
}
bool  PythonQtShell_QUdpSocket::canReadLine() const
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
  return QUdpSocket::canReadLine();
}
void PythonQtShell_QUdpSocket::childEvent(QChildEvent*  event0)
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
  QUdpSocket::childEvent(event0);
}
void PythonQtShell_QUdpSocket::close()
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
  QUdpSocket::close();
}
void PythonQtShell_QUdpSocket::connectToHost(const QHostAddress&  address0, unsigned short  port1, QIODevice::OpenMode  mode2)
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
  QUdpSocket::connectToHost(address0, port1, mode2);
}
void PythonQtShell_QUdpSocket::connectToHost(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  mode2, QAbstractSocket::NetworkLayerProtocol  protocol3)
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
  QUdpSocket::connectToHost(hostName0, port1, mode2, protocol3);
}
void PythonQtShell_QUdpSocket::customEvent(QEvent*  event0)
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
  QUdpSocket::customEvent(event0);
}
void PythonQtShell_QUdpSocket::disconnectFromHost()
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
  QUdpSocket::disconnectFromHost();
}
bool  PythonQtShell_QUdpSocket::event(QEvent*  event0)
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
  return QUdpSocket::event(event0);
}
bool  PythonQtShell_QUdpSocket::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QUdpSocket::eventFilter(watched0, event1);
}
bool  PythonQtShell_QUdpSocket::isSequential() const
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
  return QUdpSocket::isSequential();
}
bool  PythonQtShell_QUdpSocket::open(QIODevice::OpenMode  mode0)
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
  return QUdpSocket::open(mode0);
}
qint64  PythonQtShell_QUdpSocket::pos() const
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
  return QUdpSocket::pos();
}
qint64  PythonQtShell_QUdpSocket::readData(char*  data0, qint64  maxlen1)
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
  return QUdpSocket::readData(data0, maxlen1);
}
qint64  PythonQtShell_QUdpSocket::readLineData(char*  data0, qint64  maxlen1)
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
  return QUdpSocket::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QUdpSocket::reset()
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
  return QUdpSocket::reset();
}
void PythonQtShell_QUdpSocket::resume()
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
  QUdpSocket::resume();
}
bool  PythonQtShell_QUdpSocket::seek(qint64  pos0)
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
  return QUdpSocket::seek(pos0);
}
void PythonQtShell_QUdpSocket::setReadBufferSize(qint64  size0)
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
  QUdpSocket::setReadBufferSize(size0);
}
bool  PythonQtShell_QUdpSocket::setSocketDescriptor(qintptr  socketDescriptor0, QAbstractSocket::SocketState  state1, QIODevice::OpenMode  openMode2)
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
  return QUdpSocket::setSocketDescriptor(socketDescriptor0, state1, openMode2);
}
void PythonQtShell_QUdpSocket::setSocketOption(QAbstractSocket::SocketOption  option0, const QVariant&  value1)
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
  QUdpSocket::setSocketOption(option0, value1);
}
qint64  PythonQtShell_QUdpSocket::size() const
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
  return QUdpSocket::size();
}
qintptr  PythonQtShell_QUdpSocket::socketDescriptor() const
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
  return QUdpSocket::socketDescriptor();
}
QVariant  PythonQtShell_QUdpSocket::socketOption(QAbstractSocket::SocketOption  option0)
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
  return QUdpSocket::socketOption(option0);
}
void PythonQtShell_QUdpSocket::timerEvent(QTimerEvent*  event0)
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
  QUdpSocket::timerEvent(event0);
}
bool  PythonQtShell_QUdpSocket::waitForBytesWritten(int  msecs0)
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
  return QUdpSocket::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForConnected(int  msecs0)
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
  return QUdpSocket::waitForConnected(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForDisconnected(int  msecs0)
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
  return QUdpSocket::waitForDisconnected(msecs0);
}
bool  PythonQtShell_QUdpSocket::waitForReadyRead(int  msecs0)
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
  return QUdpSocket::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QUdpSocket::writeData(const char*  data0, qint64  len1)
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
  return QUdpSocket::writeData(data0, len1);
}
QUdpSocket* PythonQtWrapper_QUdpSocket::new_QUdpSocket(QObject*  parent)
{ 
return new PythonQtShell_QUdpSocket(parent); }

const QMetaObject* PythonQtShell_QUdpSocket::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QUdpSocket::staticMetaObject);
  } else {
    return &QUdpSocket::staticMetaObject;
  }
}
int PythonQtShell_QUdpSocket::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QUdpSocket::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QUdpSocket::hasPendingDatagrams(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingDatagrams());
}

bool  PythonQtWrapper_QUdpSocket::joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress)
{
  return ( theWrappedObject->joinMulticastGroup(groupAddress));
}

bool  PythonQtWrapper_QUdpSocket::joinMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface)
{
  return ( theWrappedObject->joinMulticastGroup(groupAddress, iface));
}

bool  PythonQtWrapper_QUdpSocket::leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress)
{
  return ( theWrappedObject->leaveMulticastGroup(groupAddress));
}

bool  PythonQtWrapper_QUdpSocket::leaveMulticastGroup(QUdpSocket* theWrappedObject, const QHostAddress&  groupAddress, const QNetworkInterface&  iface)
{
  return ( theWrappedObject->leaveMulticastGroup(groupAddress, iface));
}

QNetworkInterface  PythonQtWrapper_QUdpSocket::multicastInterface(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->multicastInterface());
}

qint64  PythonQtWrapper_QUdpSocket::pendingDatagramSize(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->pendingDatagramSize());
}

qint64  PythonQtWrapper_QUdpSocket::readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host, unsigned short*  port)
{
  return ( theWrappedObject->readDatagram(data, maxlen, host, port));
}

QNetworkDatagram  PythonQtWrapper_QUdpSocket::receiveDatagram(QUdpSocket* theWrappedObject, qint64  maxSize)
{
  return ( theWrappedObject->receiveDatagram(maxSize));
}

void PythonQtWrapper_QUdpSocket::setMulticastInterface(QUdpSocket* theWrappedObject, const QNetworkInterface&  iface)
{
  ( theWrappedObject->setMulticastInterface(iface));
}

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port)
{
  return ( theWrappedObject->writeDatagram(datagram, host, port));
}

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QNetworkDatagram&  datagram)
{
  return ( theWrappedObject->writeDatagram(datagram));
}


