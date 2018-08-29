#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QDir>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qfile.h>
#include <qfiledevice.h>
#include <qfileinfo.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlibrary.h>
#include <qlist.h>
#include <qlockfile.h>
#include <qlogging.h>
#include <qmargins.h>
#include <qmessageauthenticationcode.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qrect.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvector.h>

PythonQtShell_QFileDevice::~PythonQtShell_QFileDevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QFileDevice::atEnd() const
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
  return QFileDevice::atEnd();
}
qint64  PythonQtShell_QFileDevice::bytesAvailable() const
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
  return QFileDevice::bytesAvailable();
}
qint64  PythonQtShell_QFileDevice::bytesToWrite() const
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
  return QFileDevice::bytesToWrite();
}
bool  PythonQtShell_QFileDevice::canReadLine() const
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
  return QFileDevice::canReadLine();
}
void PythonQtShell_QFileDevice::childEvent(QChildEvent*  event0)
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
  QFileDevice::childEvent(event0);
}
void PythonQtShell_QFileDevice::close()
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
  QFileDevice::close();
}
void PythonQtShell_QFileDevice::customEvent(QEvent*  event0)
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
  QFileDevice::customEvent(event0);
}
bool  PythonQtShell_QFileDevice::event(QEvent*  event0)
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
  return QFileDevice::event(event0);
}
bool  PythonQtShell_QFileDevice::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFileDevice::eventFilter(watched0, event1);
}
QString  PythonQtShell_QFileDevice::fileName() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fileName");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("fileName", methodInfo, result);
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
}
  return QFileDevice::fileName();
}
bool  PythonQtShell_QFileDevice::isSequential() const
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
  return QFileDevice::isSequential();
}
bool  PythonQtShell_QFileDevice::open(QIODevice::OpenMode  mode0)
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
  return QFileDevice::open(mode0);
}
QFileDevice::Permissions  PythonQtShell_QFileDevice::permissions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("permissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QFileDevice::Permissions returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("permissions", methodInfo, result);
          } else {
            returnValue = *((QFileDevice::Permissions*)args[0]);
          }
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
  return QFileDevice::permissions();
}
qint64  PythonQtShell_QFileDevice::pos() const
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
  return QFileDevice::pos();
}
qint64  PythonQtShell_QFileDevice::readData(char*  data0, qint64  maxlen1)
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
  return QFileDevice::readData(data0, maxlen1);
}
qint64  PythonQtShell_QFileDevice::readLineData(char*  data0, qint64  maxlen1)
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
  return QFileDevice::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QFileDevice::reset()
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
  return QFileDevice::reset();
}
bool  PythonQtShell_QFileDevice::resize(qint64  sz0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("resize");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&sz0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resize", methodInfo, result);
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
  return QFileDevice::resize(sz0);
}
bool  PythonQtShell_QFileDevice::seek(qint64  offset0)
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
      void* args[2] = {NULL, (void*)&offset0};
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
  return QFileDevice::seek(offset0);
}
bool  PythonQtShell_QFileDevice::setPermissions(QFileDevice::Permissions  permissionSpec0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setPermissions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QFileDevice::Permissions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&permissionSpec0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setPermissions", methodInfo, result);
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
  return QFileDevice::setPermissions(permissionSpec0);
}
qint64  PythonQtShell_QFileDevice::size() const
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
  return QFileDevice::size();
}
void PythonQtShell_QFileDevice::timerEvent(QTimerEvent*  event0)
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
  QFileDevice::timerEvent(event0);
}
bool  PythonQtShell_QFileDevice::waitForBytesWritten(int  msecs0)
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
  return QFileDevice::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QFileDevice::waitForReadyRead(int  msecs0)
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
  return QFileDevice::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QFileDevice::writeData(const char*  data0, qint64  len1)
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
  return QFileDevice::writeData(data0, len1);
}
QFileDevice* PythonQtWrapper_QFileDevice::new_QFileDevice()
{ 
return new PythonQtShell_QFileDevice(); }

QFileDevice* PythonQtWrapper_QFileDevice::new_QFileDevice(QObject*  parent)
{ 
return new PythonQtShell_QFileDevice(parent); }

const QMetaObject* PythonQtShell_QFileDevice::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileDevice::staticMetaObject);
  } else {
    return &QFileDevice::staticMetaObject;
  }
}
int PythonQtShell_QFileDevice::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileDevice::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QFileDevice::FileError  PythonQtWrapper_QFileDevice::error(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QFileDevice::fileName(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QFileDevice::flush(QFileDevice* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

int  PythonQtWrapper_QFileDevice::handle(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

uchar*  PythonQtWrapper_QFileDevice::map(QFileDevice* theWrappedObject, qint64  offset, qint64  size, QFileDevice::MemoryMapFlags  flags)
{
  return ( theWrappedObject->map(offset, size, flags));
}

QFileDevice::Permissions  PythonQtWrapper_QFileDevice::permissions(QFileDevice* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

bool  PythonQtWrapper_QFileDevice::resize(QFileDevice* theWrappedObject, qint64  sz)
{
  return ( theWrappedObject->resize(sz));
}

bool  PythonQtWrapper_QFileDevice::setPermissions(QFileDevice* theWrappedObject, QFileDevice::Permissions  permissionSpec)
{
  return ( theWrappedObject->setPermissions(permissionSpec));
}

bool  PythonQtWrapper_QFileDevice::unmap(QFileDevice* theWrappedObject, uchar*  address)
{
  return ( theWrappedObject->unmap(address));
}

void PythonQtWrapper_QFileDevice::unsetError(QFileDevice* theWrappedObject)
{
  ( theWrappedObject->unsetError());
}



QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo()
{ 
return new QFileInfo(); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QDir&  dir, const QString&  file)
{ 
return new QFileInfo(dir, file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFile&  file)
{ 
return new QFileInfo(file); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QFileInfo&  fileinfo)
{ 
return new QFileInfo(fileinfo); }

QFileInfo* PythonQtWrapper_QFileInfo::new_QFileInfo(const QString&  file)
{ 
return new QFileInfo(file); }

QDir  PythonQtWrapper_QFileInfo::absoluteDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteDir());
}

QString  PythonQtWrapper_QFileInfo::absoluteFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

QString  PythonQtWrapper_QFileInfo::absolutePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absolutePath());
}

QString  PythonQtWrapper_QFileInfo::baseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->baseName());
}

QString  PythonQtWrapper_QFileInfo::bundleName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->bundleName());
}

bool  PythonQtWrapper_QFileInfo::caching(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->caching());
}

QString  PythonQtWrapper_QFileInfo::canonicalFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalFilePath());
}

QString  PythonQtWrapper_QFileInfo::canonicalPath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalPath());
}

QString  PythonQtWrapper_QFileInfo::completeBaseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeBaseName());
}

QString  PythonQtWrapper_QFileInfo::completeSuffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeSuffix());
}

QDateTime  PythonQtWrapper_QFileInfo::created(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->created());
}

QDir  PythonQtWrapper_QFileInfo::dir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->dir());
}

bool  PythonQtWrapper_QFileInfo::exists(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

bool  PythonQtWrapper_QFileInfo::static_QFileInfo_exists(const QString&  file)
{
  return (QFileInfo::exists(file));
}

QString  PythonQtWrapper_QFileInfo::fileName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QFileInfo::filePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

QString  PythonQtWrapper_QFileInfo::group(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

uint  PythonQtWrapper_QFileInfo::groupId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->groupId());
}

bool  PythonQtWrapper_QFileInfo::isAbsolute(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isAbsolute());
}

bool  PythonQtWrapper_QFileInfo::isBundle(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isBundle());
}

bool  PythonQtWrapper_QFileInfo::isDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDir());
}

bool  PythonQtWrapper_QFileInfo::isExecutable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isExecutable());
}

bool  PythonQtWrapper_QFileInfo::isFile(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isFile());
}

bool  PythonQtWrapper_QFileInfo::isHidden(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

bool  PythonQtWrapper_QFileInfo::isNativePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isNativePath());
}

bool  PythonQtWrapper_QFileInfo::isReadable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QFileInfo::isRelative(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

bool  PythonQtWrapper_QFileInfo::isRoot(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRoot());
}

bool  PythonQtWrapper_QFileInfo::isSymLink(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymLink());
}

bool  PythonQtWrapper_QFileInfo::isWritable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QDateTime  PythonQtWrapper_QFileInfo::lastModified(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

QDateTime  PythonQtWrapper_QFileInfo::lastRead(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastRead());
}

bool  PythonQtWrapper_QFileInfo::makeAbsolute(QFileInfo* theWrappedObject)
{
  return ( theWrappedObject->makeAbsolute());
}

QString  PythonQtWrapper_QFileInfo::owner(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->owner());
}

uint  PythonQtWrapper_QFileInfo::ownerId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->ownerId());
}

QString  PythonQtWrapper_QFileInfo::path(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

bool  PythonQtWrapper_QFileInfo::permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const
{
  return ( theWrappedObject->permission(permissions));
}

QFile::Permissions  PythonQtWrapper_QFileInfo::permissions(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

void PythonQtWrapper_QFileInfo::refresh(QFileInfo* theWrappedObject)
{
  ( theWrappedObject->refresh());
}

void PythonQtWrapper_QFileInfo::setCaching(QFileInfo* theWrappedObject, bool  on)
{
  ( theWrappedObject->setCaching(on));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file)
{
  ( theWrappedObject->setFile(dir, file));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QFile&  file)
{
  ( theWrappedObject->setFile(file));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFile(file));
}

qint64  PythonQtWrapper_QFileInfo::size(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QString  PythonQtWrapper_QFileInfo::suffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->suffix());
}

void PythonQtWrapper_QFileInfo::swap(QFileInfo* theWrappedObject, QFileInfo&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QFileInfo::symLinkTarget(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->symLinkTarget());
}



PythonQtShell_QFileSelector::~PythonQtShell_QFileSelector() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFileSelector::childEvent(QChildEvent*  event0)
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
  QFileSelector::childEvent(event0);
}
void PythonQtShell_QFileSelector::customEvent(QEvent*  event0)
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
  QFileSelector::customEvent(event0);
}
bool  PythonQtShell_QFileSelector::event(QEvent*  event0)
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
  return QFileSelector::event(event0);
}
bool  PythonQtShell_QFileSelector::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFileSelector::eventFilter(watched0, event1);
}
void PythonQtShell_QFileSelector::timerEvent(QTimerEvent*  event0)
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
  QFileSelector::timerEvent(event0);
}
QFileSelector* PythonQtWrapper_QFileSelector::new_QFileSelector(QObject*  parent)
{ 
return new PythonQtShell_QFileSelector(parent); }

const QMetaObject* PythonQtShell_QFileSelector::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileSelector::staticMetaObject);
  } else {
    return &QFileSelector::staticMetaObject;
  }
}
int PythonQtShell_QFileSelector::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileSelector::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QStringList  PythonQtWrapper_QFileSelector::allSelectors(QFileSelector* theWrappedObject) const
{
  return ( theWrappedObject->allSelectors());
}

QStringList  PythonQtWrapper_QFileSelector::extraSelectors(QFileSelector* theWrappedObject) const
{
  return ( theWrappedObject->extraSelectors());
}

QString  PythonQtWrapper_QFileSelector::select(QFileSelector* theWrappedObject, const QString&  filePath) const
{
  return ( theWrappedObject->select(filePath));
}

QUrl  PythonQtWrapper_QFileSelector::select(QFileSelector* theWrappedObject, const QUrl&  filePath) const
{
  return ( theWrappedObject->select(filePath));
}

void PythonQtWrapper_QFileSelector::setExtraSelectors(QFileSelector* theWrappedObject, const QStringList&  list)
{
  ( theWrappedObject->setExtraSelectors(list));
}



PythonQtShell_QFileSystemWatcher::~PythonQtShell_QFileSystemWatcher() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFileSystemWatcher::childEvent(QChildEvent*  event0)
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
  QFileSystemWatcher::childEvent(event0);
}
void PythonQtShell_QFileSystemWatcher::customEvent(QEvent*  event0)
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
  QFileSystemWatcher::customEvent(event0);
}
bool  PythonQtShell_QFileSystemWatcher::event(QEvent*  event0)
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
  return QFileSystemWatcher::event(event0);
}
bool  PythonQtShell_QFileSystemWatcher::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFileSystemWatcher::eventFilter(watched0, event1);
}
void PythonQtShell_QFileSystemWatcher::timerEvent(QTimerEvent*  event0)
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
  QFileSystemWatcher::timerEvent(event0);
}
QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(parent); }

QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(paths, parent); }

const QMetaObject* PythonQtShell_QFileSystemWatcher::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFileSystemWatcher::staticMetaObject);
  } else {
    return &QFileSystemWatcher::staticMetaObject;
  }
}
int PythonQtShell_QFileSystemWatcher::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFileSystemWatcher::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QFileSystemWatcher::addPath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->addPath(file));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  return ( theWrappedObject->addPaths(files));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::directories(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->directories());
}

QStringList  PythonQtWrapper_QFileSystemWatcher::files(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->files());
}

bool  PythonQtWrapper_QFileSystemWatcher::removePath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->removePath(file));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  return ( theWrappedObject->removePaths(files));
}



PythonQtShell_QFinalState::~PythonQtShell_QFinalState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QFinalState::childEvent(QChildEvent*  event0)
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
  QFinalState::childEvent(event0);
}
void PythonQtShell_QFinalState::customEvent(QEvent*  event0)
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
  QFinalState::customEvent(event0);
}
bool  PythonQtShell_QFinalState::event(QEvent*  e0)
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
      void* args[2] = {NULL, (void*)&e0};
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
  return QFinalState::event(e0);
}
bool  PythonQtShell_QFinalState::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QFinalState::eventFilter(watched0, event1);
}
void PythonQtShell_QFinalState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onEntry");
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
  QFinalState::onEntry(event0);
}
void PythonQtShell_QFinalState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onExit");
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
  QFinalState::onExit(event0);
}
void PythonQtShell_QFinalState::timerEvent(QTimerEvent*  event0)
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
  QFinalState::timerEvent(event0);
}
QFinalState* PythonQtWrapper_QFinalState::new_QFinalState(QState*  parent)
{ 
return new PythonQtShell_QFinalState(parent); }

const QMetaObject* PythonQtShell_QFinalState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QFinalState::staticMetaObject);
  } else {
    return &QFinalState::staticMetaObject;
  }
}
int PythonQtShell_QFinalState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QFinalState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QHistoryState::~PythonQtShell_QHistoryState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QHistoryState::childEvent(QChildEvent*  event0)
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
  QHistoryState::childEvent(event0);
}
void PythonQtShell_QHistoryState::customEvent(QEvent*  event0)
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
  QHistoryState::customEvent(event0);
}
bool  PythonQtShell_QHistoryState::event(QEvent*  e0)
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
      void* args[2] = {NULL, (void*)&e0};
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
  return QHistoryState::event(e0);
}
bool  PythonQtShell_QHistoryState::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QHistoryState::eventFilter(watched0, event1);
}
void PythonQtShell_QHistoryState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onEntry");
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
  QHistoryState::onEntry(event0);
}
void PythonQtShell_QHistoryState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("onExit");
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
  QHistoryState::onExit(event0);
}
void PythonQtShell_QHistoryState::timerEvent(QTimerEvent*  event0)
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
  QHistoryState::timerEvent(event0);
}
QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent)
{ 
return new PythonQtShell_QHistoryState(type, parent); }

QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QState*  parent)
{ 
return new PythonQtShell_QHistoryState(parent); }

const QMetaObject* PythonQtShell_QHistoryState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QHistoryState::staticMetaObject);
  } else {
    return &QHistoryState::staticMetaObject;
  }
}
int PythonQtShell_QHistoryState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QHistoryState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAbstractState*  PythonQtWrapper_QHistoryState::defaultState(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultState());
}

QAbstractTransition*  PythonQtWrapper_QHistoryState::defaultTransition(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultTransition());
}

QHistoryState::HistoryType  PythonQtWrapper_QHistoryState::historyType(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->historyType());
}

void PythonQtWrapper_QHistoryState::setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setDefaultState(state));
}

void PythonQtWrapper_QHistoryState::setDefaultTransition(QHistoryState* theWrappedObject, QAbstractTransition*  transition)
{
  ( theWrappedObject->setDefaultTransition(transition));
}

void PythonQtWrapper_QHistoryState::setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type)
{
  ( theWrappedObject->setHistoryType(type));
}



PythonQtShell_QIODevice::~PythonQtShell_QIODevice() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QIODevice::atEnd() const
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
  return QIODevice::atEnd();
}
qint64  PythonQtShell_QIODevice::bytesAvailable() const
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
  return QIODevice::bytesAvailable();
}
qint64  PythonQtShell_QIODevice::bytesToWrite() const
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
  return QIODevice::bytesToWrite();
}
bool  PythonQtShell_QIODevice::canReadLine() const
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
  return QIODevice::canReadLine();
}
void PythonQtShell_QIODevice::childEvent(QChildEvent*  event0)
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
  QIODevice::childEvent(event0);
}
void PythonQtShell_QIODevice::close()
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
  QIODevice::close();
}
void PythonQtShell_QIODevice::customEvent(QEvent*  event0)
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
  QIODevice::customEvent(event0);
}
bool  PythonQtShell_QIODevice::event(QEvent*  event0)
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
  return QIODevice::event(event0);
}
bool  PythonQtShell_QIODevice::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QIODevice::eventFilter(watched0, event1);
}
bool  PythonQtShell_QIODevice::isSequential() const
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
  return QIODevice::isSequential();
}
bool  PythonQtShell_QIODevice::open(QIODevice::OpenMode  mode0)
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
  return QIODevice::open(mode0);
}
qint64  PythonQtShell_QIODevice::pos() const
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
  return QIODevice::pos();
}
qint64  PythonQtShell_QIODevice::readData(char*  data0, qint64  maxlen1)
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
qint64  PythonQtShell_QIODevice::readLineData(char*  data0, qint64  maxlen1)
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
  return QIODevice::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QIODevice::reset()
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
  return QIODevice::reset();
}
bool  PythonQtShell_QIODevice::seek(qint64  pos0)
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
  return QIODevice::seek(pos0);
}
qint64  PythonQtShell_QIODevice::size() const
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
  return QIODevice::size();
}
void PythonQtShell_QIODevice::timerEvent(QTimerEvent*  event0)
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
  QIODevice::timerEvent(event0);
}
bool  PythonQtShell_QIODevice::waitForBytesWritten(int  msecs0)
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
  return QIODevice::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QIODevice::waitForReadyRead(int  msecs0)
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
  return QIODevice::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QIODevice::writeData(const char*  data0, qint64  len1)
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
  return qint64();
}
QIODevice* PythonQtWrapper_QIODevice::new_QIODevice()
{ 
return new PythonQtShell_QIODevice(); }

QIODevice* PythonQtWrapper_QIODevice::new_QIODevice(QObject*  parent)
{ 
return new PythonQtShell_QIODevice(parent); }

const QMetaObject* PythonQtShell_QIODevice::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QIODevice::staticMetaObject);
  } else {
    return &QIODevice::staticMetaObject;
  }
}
int PythonQtShell_QIODevice::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QIODevice::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QIODevice::atEnd(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

qint64  PythonQtWrapper_QIODevice::bytesAvailable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

qint64  PythonQtWrapper_QIODevice::bytesToWrite(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->bytesToWrite());
}

bool  PythonQtWrapper_QIODevice::canReadLine(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->canReadLine());
}

void PythonQtWrapper_QIODevice::close(QIODevice* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QIODevice::errorString(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QIODevice::getChar(QIODevice* theWrappedObject, char*  c)
{
  return ( theWrappedObject->getChar(c));
}

bool  PythonQtWrapper_QIODevice::isOpen(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QIODevice::isReadable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QIODevice::isSequential(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isSequential());
}

bool  PythonQtWrapper_QIODevice::isTextModeEnabled(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isTextModeEnabled());
}

bool  PythonQtWrapper_QIODevice::isWritable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

bool  PythonQtWrapper_QIODevice::open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode)
{
  return ( theWrappedObject->open(mode));
}

QIODevice::OpenMode  PythonQtWrapper_QIODevice::openMode(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->openMode());
}

QByteArray  PythonQtWrapper_QIODevice::peek(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->peek(maxlen));
}

qint64  PythonQtWrapper_QIODevice::pos(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

bool  PythonQtWrapper_QIODevice::putChar(QIODevice* theWrappedObject, char  c)
{
  return ( theWrappedObject->putChar(c));
}

QByteArray  PythonQtWrapper_QIODevice::read(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QByteArray  PythonQtWrapper_QIODevice::readAll(QIODevice* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

qint64  PythonQtWrapper_QIODevice::readData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_readData(data, maxlen));
}

QByteArray  PythonQtWrapper_QIODevice::readLine(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

qint64  PythonQtWrapper_QIODevice::readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

bool  PythonQtWrapper_QIODevice::reset(QIODevice* theWrappedObject)
{
  return ( theWrappedObject->reset());
}

bool  PythonQtWrapper_QIODevice::seek(QIODevice* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QIODevice::setErrorString(QIODevice* theWrappedObject, const QString&  errorString)
{
  ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_setErrorString(errorString));
}

void PythonQtWrapper_QIODevice::setOpenMode(QIODevice* theWrappedObject, QIODevice::OpenMode  openMode)
{
  ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_setOpenMode(openMode));
}

void PythonQtWrapper_QIODevice::setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setTextModeEnabled(enabled));
}

qint64  PythonQtWrapper_QIODevice::size(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QIODevice::ungetChar(QIODevice* theWrappedObject, char  c)
{
  ( theWrappedObject->ungetChar(c));
}

bool  PythonQtWrapper_QIODevice::waitForBytesWritten(QIODevice* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QIODevice::waitForReadyRead(QIODevice* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForReadyRead(msecs));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const QByteArray&  data)
{
  return ( theWrappedObject->write(data));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const char*  data)
{
  return ( theWrappedObject->write(data));
}

qint64  PythonQtWrapper_QIODevice::writeData(QIODevice* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_writeData(data, len));
}



PythonQtShell_QIdentityProxyModel::~PythonQtShell_QIdentityProxyModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QIdentityProxyModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("buddy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("buddy", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::buddy(index0);
}
bool  PythonQtShell_QIdentityProxyModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canDropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue = 0;
      void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canDropMimeData", methodInfo, result);
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
  return QIdentityProxyModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("canFetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("canFetchMore", methodInfo, result);
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
  return QIdentityProxyModel::canFetchMore(parent0);
}
void PythonQtShell_QIdentityProxyModel::childEvent(QChildEvent*  event0)
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
  QIdentityProxyModel::childEvent(event0);
}
int  PythonQtShell_QIdentityProxyModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("columnCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("columnCount", methodInfo, result);
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
}
  return QIdentityProxyModel::columnCount(parent0);
}
void PythonQtShell_QIdentityProxyModel::customEvent(QEvent*  event0)
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
  QIdentityProxyModel::customEvent(event0);
}
QVariant  PythonQtShell_QIdentityProxyModel::data(const QModelIndex&  proxyIndex0, int  role1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
      void* args[3] = {NULL, (void*)&proxyIndex0, (void*)&role1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("data", methodInfo, result);
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
  return QIdentityProxyModel::data(proxyIndex0, role1);
}
bool  PythonQtShell_QIdentityProxyModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue = 0;
      void* args[6] = {NULL, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("dropMimeData", methodInfo, result);
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
  return QIdentityProxyModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::event(QEvent*  event0)
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
  return QIdentityProxyModel::event(event0);
}
bool  PythonQtShell_QIdentityProxyModel::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QIdentityProxyModel::eventFilter(watched0, event1);
}
void PythonQtShell_QIdentityProxyModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("fetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QIdentityProxyModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("flags", methodInfo, result);
          } else {
            returnValue = *((Qt::ItemFlags*)args[0]);
          }
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
  return QIdentityProxyModel::flags(index0);
}
bool  PythonQtShell_QIdentityProxyModel::hasChildren(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasChildren");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasChildren", methodInfo, result);
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
  return QIdentityProxyModel::hasChildren(parent0);
}
QVariant  PythonQtShell_QIdentityProxyModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("headerData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
      void* args[4] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("headerData", methodInfo, result);
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
  return QIdentityProxyModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("index");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
      void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("index", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::index(row0, column1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("insertColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertColumns", methodInfo, result);
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
  return QIdentityProxyModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("insertRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("insertRows", methodInfo, result);
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
  return QIdentityProxyModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QIdentityProxyModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("itemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("itemData", methodInfo, result);
          } else {
            returnValue = *((QMap<int , QVariant >*)args[0]);
          }
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
  return QIdentityProxyModel::itemData(index0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapFromSource(const QModelIndex&  sourceIndex0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mapFromSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
      void* args[2] = {NULL, (void*)&sourceIndex0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapFromSource", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::mapFromSource(sourceIndex0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionFromSource(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mapSelectionFromSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelection" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QItemSelection returnValue;
      void* args[2] = {NULL, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapSelectionFromSource", methodInfo, result);
          } else {
            returnValue = *((QItemSelection*)args[0]);
          }
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
  return QIdentityProxyModel::mapSelectionFromSource(selection0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionToSource(const QItemSelection&  selection0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mapSelectionToSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QItemSelection" , "const QItemSelection&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QItemSelection returnValue;
      void* args[2] = {NULL, (void*)&selection0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapSelectionToSource", methodInfo, result);
          } else {
            returnValue = *((QItemSelection*)args[0]);
          }
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
  return QIdentityProxyModel::mapSelectionToSource(selection0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapToSource(const QModelIndex&  proxyIndex0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mapToSource");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
      void* args[2] = {NULL, (void*)&proxyIndex0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mapToSource", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::mapToSource(proxyIndex0);
}
QList<QModelIndex >  PythonQtShell_QIdentityProxyModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("match");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
      void* args[6] = {NULL, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("match", methodInfo, result);
          } else {
            returnValue = *((QList<QModelIndex >*)args[0]);
          }
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
  return QIdentityProxyModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QIdentityProxyModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
      void* args[2] = {NULL, (void*)&indexes0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeData", methodInfo, result);
          } else {
            returnValue = *((QMimeData**)args[0]);
          }
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
  return QIdentityProxyModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QIdentityProxyModel::mimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("mimeTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("mimeTypes", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
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
  return QIdentityProxyModel::mimeTypes();
}
bool  PythonQtShell_QIdentityProxyModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("moveColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue = 0;
      void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveColumns", methodInfo, result);
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
  return QIdentityProxyModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QIdentityProxyModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("moveRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue = 0;
      void* args[6] = {NULL, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("moveRows", methodInfo, result);
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
  return QIdentityProxyModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::parent(const QModelIndex&  child0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("parent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
      void* args[2] = {NULL, (void*)&child0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("parent", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::parent(child0);
}
bool  PythonQtShell_QIdentityProxyModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("removeColumns", methodInfo, result);
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
  return QIdentityProxyModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("removeRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("removeRows", methodInfo, result);
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
  return QIdentityProxyModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QIdentityProxyModel::revert()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("revert");
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
  QIdentityProxyModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QIdentityProxyModel::roleNames() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("roleNames");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHash<int , QByteArray >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("roleNames", methodInfo, result);
          } else {
            returnValue = *((QHash<int , QByteArray >*)args[0]);
          }
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
  return QIdentityProxyModel::roleNames();
}
int  PythonQtShell_QIdentityProxyModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("rowCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
      void* args[2] = {NULL, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("rowCount", methodInfo, result);
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
}
  return QIdentityProxyModel::rowCount(parent0);
}
bool  PythonQtShell_QIdentityProxyModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue = 0;
      void* args[4] = {NULL, (void*)&index0, (void*)&value1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setData", methodInfo, result);
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
  return QIdentityProxyModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QIdentityProxyModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setHeaderData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue = 0;
      void* args[5] = {NULL, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setHeaderData", methodInfo, result);
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
  return QIdentityProxyModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QIdentityProxyModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setItemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&index0, (void*)&roles1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("setItemData", methodInfo, result);
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
  return QIdentityProxyModel::setItemData(index0, roles1);
}
void PythonQtShell_QIdentityProxyModel::setSourceModel(QAbstractItemModel*  sourceModel0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("setSourceModel");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractItemModel*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&sourceModel0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::setSourceModel(sourceModel0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sibling");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
      void* args[4] = {NULL, (void*)&row0, (void*)&column1, (void*)&idx2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("sibling", methodInfo, result);
          } else {
            returnValue = *((QModelIndex*)args[0]);
          }
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
  return QIdentityProxyModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QIdentityProxyModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("sort");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {NULL, (void*)&column0, (void*)&order1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QIdentityProxyModel::sort(column0, order1);
}
QSize  PythonQtShell_QIdentityProxyModel::span(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("span");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
      void* args[2] = {NULL, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("span", methodInfo, result);
          } else {
            returnValue = *((QSize*)args[0]);
          }
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
  return QIdentityProxyModel::span(index0);
}
bool  PythonQtShell_QIdentityProxyModel::submit()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("submit");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QIdentityProxyModel::submit();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDragActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedDragActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDragActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
          }
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
  return QIdentityProxyModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("supportedDropActions", methodInfo, result);
          } else {
            returnValue = *((Qt::DropActions*)args[0]);
          }
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
  return QIdentityProxyModel::supportedDropActions();
}
void PythonQtShell_QIdentityProxyModel::timerEvent(QTimerEvent*  event0)
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
  QIdentityProxyModel::timerEvent(event0);
}
QIdentityProxyModel* PythonQtWrapper_QIdentityProxyModel::new_QIdentityProxyModel(QObject*  parent)
{ 
return new PythonQtShell_QIdentityProxyModel(parent); }

const QMetaObject* PythonQtShell_QIdentityProxyModel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QIdentityProxyModel::staticMetaObject);
  } else {
    return &QIdentityProxyModel::staticMetaObject;
  }
}
int PythonQtShell_QIdentityProxyModel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QIdentityProxyModel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


QJsonArray* PythonQtWrapper_QJsonArray::new_QJsonArray()
{ 
return new QJsonArray(); }

QJsonArray* PythonQtWrapper_QJsonArray::new_QJsonArray(const QJsonArray&  other)
{ 
return new QJsonArray(other); }

void PythonQtWrapper_QJsonArray::append(QJsonArray* theWrappedObject, const QJsonValue&  value)
{
  ( theWrappedObject->append(value));
}

QJsonValue  PythonQtWrapper_QJsonArray::at(QJsonArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

bool  PythonQtWrapper_QJsonArray::contains(QJsonArray* theWrappedObject, const QJsonValue&  element) const
{
  return ( theWrappedObject->contains(element));
}

int  PythonQtWrapper_QJsonArray::count(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QJsonArray::empty(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QJsonValue  PythonQtWrapper_QJsonArray::first(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->first());
}

QJsonArray  PythonQtWrapper_QJsonArray::static_QJsonArray_fromStringList(const QStringList&  list)
{
  return (QJsonArray::fromStringList(list));
}

QJsonArray  PythonQtWrapper_QJsonArray::static_QJsonArray_fromVariantList(const QList<QVariant >&  list)
{
  return (QJsonArray::fromVariantList(list));
}

void PythonQtWrapper_QJsonArray::insert(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value)
{
  ( theWrappedObject->insert(i, value));
}

bool  PythonQtWrapper_QJsonArray::isEmpty(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QJsonValue  PythonQtWrapper_QJsonArray::last(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->last());
}

bool  PythonQtWrapper_QJsonArray::__ne__(QJsonArray* theWrappedObject, const QJsonArray&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QJsonArray  PythonQtWrapper_QJsonArray::__add__(QJsonArray* theWrappedObject, const QJsonValue&  v) const
{
  return ( (*theWrappedObject)+ v);
}

QJsonArray*  PythonQtWrapper_QJsonArray::__iadd__(QJsonArray* theWrappedObject, const QJsonValue&  v)
{
  return &( (*theWrappedObject)+= v);
}

QJsonArray*  PythonQtWrapper_QJsonArray::__lshift__(QJsonArray* theWrappedObject, const QJsonValue&  v)
{
  return &( (*theWrappedObject) <<v);
}

QJsonArray*  PythonQtWrapper_QJsonArray::operator_assign(QJsonArray* theWrappedObject, const QJsonArray&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonArray::__eq__(QJsonArray* theWrappedObject, const QJsonArray&  other) const
{
  return ( (*theWrappedObject)== other);
}

QJsonValue  PythonQtWrapper_QJsonArray::operator_subscript(QJsonArray* theWrappedObject, int  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QJsonArray::pop_back(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QJsonArray::pop_front(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QJsonArray::prepend(QJsonArray* theWrappedObject, const QJsonValue&  value)
{
  ( theWrappedObject->prepend(value));
}

void PythonQtWrapper_QJsonArray::push_back(QJsonArray* theWrappedObject, const QJsonValue&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QJsonArray::push_front(QJsonArray* theWrappedObject, const QJsonValue&  t)
{
  ( theWrappedObject->push_front(t));
}

void PythonQtWrapper_QJsonArray::removeAt(QJsonArray* theWrappedObject, int  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QJsonArray::removeFirst(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QJsonArray::removeLast(QJsonArray* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

void PythonQtWrapper_QJsonArray::replace(QJsonArray* theWrappedObject, int  i, const QJsonValue&  value)
{
  ( theWrappedObject->replace(i, value));
}

int  PythonQtWrapper_QJsonArray::size(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QJsonValue  PythonQtWrapper_QJsonArray::takeAt(QJsonArray* theWrappedObject, int  i)
{
  return ( theWrappedObject->takeAt(i));
}

QList<QVariant >  PythonQtWrapper_QJsonArray::toVariantList(QJsonArray* theWrappedObject) const
{
  return ( theWrappedObject->toVariantList());
}

QString PythonQtWrapper_QJsonArray::py_toString(QJsonArray* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QJsonDocument::~PythonQtShell_QJsonDocument() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument()
{ 
return new PythonQtShell_QJsonDocument(); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonArray&  array)
{ 
return new PythonQtShell_QJsonDocument(array); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonDocument&  other)
{ 
return new PythonQtShell_QJsonDocument(other); }

QJsonDocument* PythonQtWrapper_QJsonDocument::new_QJsonDocument(const QJsonObject&  object)
{ 
return new PythonQtShell_QJsonDocument(object); }

QJsonArray  PythonQtWrapper_QJsonDocument::array(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->array());
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromBinaryData(const QByteArray&  data, QJsonDocument::DataValidation  validation)
{
  return (QJsonDocument::fromBinaryData(data, validation));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromJson(const QByteArray&  json, QJsonParseError*  error)
{
  return (QJsonDocument::fromJson(json, error));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromRawData(const char*  data, int  size, QJsonDocument::DataValidation  validation)
{
  return (QJsonDocument::fromRawData(data, size, validation));
}

QJsonDocument  PythonQtWrapper_QJsonDocument::static_QJsonDocument_fromVariant(const QVariant&  variant)
{
  return (QJsonDocument::fromVariant(variant));
}

bool  PythonQtWrapper_QJsonDocument::isArray(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJsonDocument::isEmpty(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QJsonDocument::isNull(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJsonDocument::isObject(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

QJsonObject  PythonQtWrapper_QJsonDocument::object(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->object());
}

bool  PythonQtWrapper_QJsonDocument::__ne__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QJsonDocument*  PythonQtWrapper_QJsonDocument::operator_assign(QJsonDocument* theWrappedObject, const QJsonDocument&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonDocument::__eq__(QJsonDocument* theWrappedObject, const QJsonDocument&  other) const
{
  return ( (*theWrappedObject)== other);
}

const char*  PythonQtWrapper_QJsonDocument::rawData(QJsonDocument* theWrappedObject, int*  size) const
{
  return ( theWrappedObject->rawData(size));
}

void PythonQtWrapper_QJsonDocument::setArray(QJsonDocument* theWrappedObject, const QJsonArray&  array)
{
  ( theWrappedObject->setArray(array));
}

void PythonQtWrapper_QJsonDocument::setObject(QJsonDocument* theWrappedObject, const QJsonObject&  object)
{
  ( theWrappedObject->setObject(object));
}

QByteArray  PythonQtWrapper_QJsonDocument::toBinaryData(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toBinaryData());
}

QByteArray  PythonQtWrapper_QJsonDocument::toJson(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toJson());
}

QByteArray  PythonQtWrapper_QJsonDocument::toJson(QJsonDocument* theWrappedObject, QJsonDocument::JsonFormat  format) const
{
  return ( theWrappedObject->toJson(format));
}

QVariant  PythonQtWrapper_QJsonDocument::toVariant(QJsonDocument* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QString PythonQtWrapper_QJsonDocument::py_toString(QJsonDocument* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QJsonObject* PythonQtWrapper_QJsonObject::new_QJsonObject()
{ 
return new QJsonObject(); }

QJsonObject* PythonQtWrapper_QJsonObject::new_QJsonObject(const QJsonObject&  other)
{ 
return new QJsonObject(other); }

bool  PythonQtWrapper_QJsonObject::contains(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

int  PythonQtWrapper_QJsonObject::count(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

bool  PythonQtWrapper_QJsonObject::empty(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QJsonObject  PythonQtWrapper_QJsonObject::static_QJsonObject_fromVariantHash(const QHash<QString , QVariant >&  map)
{
  return (QJsonObject::fromVariantHash(map));
}

QJsonObject  PythonQtWrapper_QJsonObject::static_QJsonObject_fromVariantMap(const QMap<QString , QVariant >&  map)
{
  return (QJsonObject::fromVariantMap(map));
}

bool  PythonQtWrapper_QJsonObject::isEmpty(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QJsonObject::keys(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

int  PythonQtWrapper_QJsonObject::length(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QJsonObject::__ne__(QJsonObject* theWrappedObject, const QJsonObject&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QJsonObject*  PythonQtWrapper_QJsonObject::operator_assign(QJsonObject* theWrappedObject, const QJsonObject&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonObject::__eq__(QJsonObject* theWrappedObject, const QJsonObject&  other) const
{
  return ( (*theWrappedObject)== other);
}

QJsonValue  PythonQtWrapper_QJsonObject::operator_subscript(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

void PythonQtWrapper_QJsonObject::remove(QJsonObject* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

int  PythonQtWrapper_QJsonObject::size(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

QJsonValue  PythonQtWrapper_QJsonObject::take(QJsonObject* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->take(key));
}

QHash<QString , QVariant >  PythonQtWrapper_QJsonObject::toVariantHash(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->toVariantHash());
}

QMap<QString , QVariant >  PythonQtWrapper_QJsonObject::toVariantMap(QJsonObject* theWrappedObject) const
{
  return ( theWrappedObject->toVariantMap());
}

QJsonValue  PythonQtWrapper_QJsonObject::value(QJsonObject* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

QString PythonQtWrapper_QJsonObject::py_toString(QJsonObject* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QJsonParseError::~PythonQtShell_QJsonParseError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QJsonParseError* PythonQtWrapper_QJsonParseError::new_QJsonParseError()
{ 
return new PythonQtShell_QJsonParseError(); }

QString  PythonQtWrapper_QJsonParseError::errorString(QJsonParseError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}



QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(QJsonValue::Type  arg__1)
{ 
return new QJsonValue(arg__1); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(QLatin1String  s)
{ 
return new QJsonValue(s); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(bool  b)
{ 
return new QJsonValue(b); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonArray&  a)
{ 
return new QJsonValue(a); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonObject&  o)
{ 
return new QJsonValue(o); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QJsonValue&  other)
{ 
return new QJsonValue(other); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const QString&  s)
{ 
return new QJsonValue(s); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(const char*  s)
{ 
return new QJsonValue(s); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(double  n)
{ 
return new QJsonValue(n); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(int  n)
{ 
return new QJsonValue(n); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(qint64  n)
{ 
return new QJsonValue(n); }

QJsonValue  PythonQtWrapper_QJsonValue::static_QJsonValue_fromVariant(const QVariant&  variant)
{
  return (QJsonValue::fromVariant(variant));
}

bool  PythonQtWrapper_QJsonValue::isArray(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QJsonValue::isBool(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isBool());
}

bool  PythonQtWrapper_QJsonValue::isDouble(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isDouble());
}

bool  PythonQtWrapper_QJsonValue::isNull(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QJsonValue::isObject(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isObject());
}

bool  PythonQtWrapper_QJsonValue::isString(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QJsonValue::isUndefined(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QJsonValue::__ne__(QJsonValue* theWrappedObject, const QJsonValue&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QJsonValue*  PythonQtWrapper_QJsonValue::operator_assign(QJsonValue* theWrappedObject, const QJsonValue&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QJsonValue::__eq__(QJsonValue* theWrappedObject, const QJsonValue&  other) const
{
  return ( (*theWrappedObject)== other);
}

QJsonArray  PythonQtWrapper_QJsonValue::toArray(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toArray());
}

QJsonArray  PythonQtWrapper_QJsonValue::toArray(QJsonValue* theWrappedObject, const QJsonArray&  defaultValue) const
{
  return ( theWrappedObject->toArray(defaultValue));
}

bool  PythonQtWrapper_QJsonValue::toBool(QJsonValue* theWrappedObject, bool  defaultValue) const
{
  return ( theWrappedObject->toBool(defaultValue));
}

double  PythonQtWrapper_QJsonValue::toDouble(QJsonValue* theWrappedObject, double  defaultValue) const
{
  return ( theWrappedObject->toDouble(defaultValue));
}

int  PythonQtWrapper_QJsonValue::toInt(QJsonValue* theWrappedObject, int  defaultValue) const
{
  return ( theWrappedObject->toInt(defaultValue));
}

QJsonObject  PythonQtWrapper_QJsonValue::toObject(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toObject());
}

QJsonObject  PythonQtWrapper_QJsonValue::toObject(QJsonValue* theWrappedObject, const QJsonObject&  defaultValue) const
{
  return ( theWrappedObject->toObject(defaultValue));
}

QString  PythonQtWrapper_QJsonValue::toString(QJsonValue* theWrappedObject, const QString&  defaultValue) const
{
  return ( theWrappedObject->toString(defaultValue));
}

QVariant  PythonQtWrapper_QJsonValue::toVariant(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QJsonValue::Type  PythonQtWrapper_QJsonValue::type(QJsonValue* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QJsonValue::py_toString(QJsonValue* obj) { return obj->toString(); }


PythonQtShell_QLibrary::~PythonQtShell_QLibrary() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QLibrary::childEvent(QChildEvent*  event0)
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
  QLibrary::childEvent(event0);
}
void PythonQtShell_QLibrary::customEvent(QEvent*  event0)
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
  QLibrary::customEvent(event0);
}
bool  PythonQtShell_QLibrary::event(QEvent*  event0)
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
  return QLibrary::event(event0);
}
bool  PythonQtShell_QLibrary::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QLibrary::eventFilter(watched0, event1);
}
void PythonQtShell_QLibrary::timerEvent(QTimerEvent*  event0)
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
  QLibrary::timerEvent(event0);
}
QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(QObject*  parent)
{ 
return new PythonQtShell_QLibrary(parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, const QString&  version, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, version, parent); }

QLibrary* PythonQtWrapper_QLibrary::new_QLibrary(const QString&  fileName, int  verNum, QObject*  parent)
{ 
return new PythonQtShell_QLibrary(fileName, verNum, parent); }

const QMetaObject* PythonQtShell_QLibrary::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QLibrary::staticMetaObject);
  } else {
    return &QLibrary::staticMetaObject;
  }
}
int PythonQtShell_QLibrary::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QLibrary::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QLibrary::errorString(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QLibrary::fileName(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

bool  PythonQtWrapper_QLibrary::static_QLibrary_isLibrary(const QString&  fileName)
{
  return (QLibrary::isLibrary(fileName));
}

bool  PythonQtWrapper_QLibrary::isLoaded(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QLibrary::load(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->load());
}

QLibrary::LoadHints  PythonQtWrapper_QLibrary::loadHints(QLibrary* theWrappedObject) const
{
  return ( theWrappedObject->loadHints());
}

void PythonQtWrapper_QLibrary::setFileName(QLibrary* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, const QString&  version)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, version));
}

void PythonQtWrapper_QLibrary::setFileNameAndVersion(QLibrary* theWrappedObject, const QString&  fileName, int  verNum)
{
  ( theWrappedObject->setFileNameAndVersion(fileName, verNum));
}

void PythonQtWrapper_QLibrary::setLoadHints(QLibrary* theWrappedObject, QLibrary::LoadHints  hints)
{
  ( theWrappedObject->setLoadHints(hints));
}

bool  PythonQtWrapper_QLibrary::unload(QLibrary* theWrappedObject)
{
  return ( theWrappedObject->unload());
}



const char*  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_build()
{
  return (QLibraryInfo::build());
}

QDate  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildDate()
{
  return (QLibraryInfo::buildDate());
}

bool  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_isDebugBuild()
{
  return (QLibraryInfo::isDebugBuild());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensedProducts()
{
  return (QLibraryInfo::licensedProducts());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensee()
{
  return (QLibraryInfo::licensee());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1)
{
  return (QLibraryInfo::location(arg__1));
}

QStringList  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_platformPluginArguments(const QString&  platformName)
{
  return (QLibraryInfo::platformPluginArguments(platformName));
}



QLockFile* PythonQtWrapper_QLockFile::new_QLockFile(const QString&  fileName)
{ 
return new QLockFile(fileName); }

QLockFile::LockError  PythonQtWrapper_QLockFile::error(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QLockFile::getLockInfo(QLockFile* theWrappedObject, qint64*  pid, QString*  hostname, QString*  appname) const
{
  return ( theWrappedObject->getLockInfo(pid, hostname, appname));
}

bool  PythonQtWrapper_QLockFile::isLocked(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->isLocked());
}

bool  PythonQtWrapper_QLockFile::lock(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QLockFile::removeStaleLockFile(QLockFile* theWrappedObject)
{
  return ( theWrappedObject->removeStaleLockFile());
}

void PythonQtWrapper_QLockFile::setStaleLockTime(QLockFile* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setStaleLockTime(arg__1));
}

int  PythonQtWrapper_QLockFile::staleLockTime(QLockFile* theWrappedObject) const
{
  return ( theWrappedObject->staleLockTime());
}

bool  PythonQtWrapper_QLockFile::tryLock(QLockFile* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

void PythonQtWrapper_QLockFile::unlock(QLockFile* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF()
{ 
return new QMarginsF(); }

QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF(const QMargins&  margins)
{ 
return new QMarginsF(margins); }

QMarginsF* PythonQtWrapper_QMarginsF::new_QMarginsF(qreal  left, qreal  top, qreal  right, qreal  bottom)
{ 
return new QMarginsF(left, top, right, bottom); }

qreal  PythonQtWrapper_QMarginsF::bottom(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

bool  PythonQtWrapper_QMarginsF::isNull(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qreal  PythonQtWrapper_QMarginsF::left(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

QMarginsF  PythonQtWrapper_QMarginsF::__mul__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)* rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__imul__(QMarginsF* theWrappedObject, qreal  factor)
{
  return &( (*theWrappedObject)*= factor);
}

QMarginsF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QRectF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, const QRectF&  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QMarginsF  PythonQtWrapper_QMarginsF::__add__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)+ rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__iadd__(QMarginsF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)+= margins);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__iadd__(QMarginsF* theWrappedObject, qreal  addend)
{
  return &( (*theWrappedObject)+= addend);
}

QMarginsF  PythonQtWrapper_QMarginsF::__sub__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QMarginsF  PythonQtWrapper_QMarginsF::__sub__(QMarginsF* theWrappedObject, qreal  rhs)
{
  return ( (*theWrappedObject)- rhs);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__isub__(QMarginsF* theWrappedObject, const QMarginsF&  margins)
{
  return &( (*theWrappedObject)-= margins);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__isub__(QMarginsF* theWrappedObject, qreal  subtrahend)
{
  return &( (*theWrappedObject)-= subtrahend);
}

QMarginsF  PythonQtWrapper_QMarginsF::__div__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return ( (*theWrappedObject)/ divisor);
}

QMarginsF*  PythonQtWrapper_QMarginsF::__idiv__(QMarginsF* theWrappedObject, qreal  divisor)
{
  return &( (*theWrappedObject)/= divisor);
}

void PythonQtWrapper_QMarginsF::writeTo(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QMarginsF::__eq__(QMarginsF* theWrappedObject, const QMarginsF&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QMarginsF::readFrom(QMarginsF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

qreal  PythonQtWrapper_QMarginsF::right(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

void PythonQtWrapper_QMarginsF::setBottom(QMarginsF* theWrappedObject, qreal  bottom)
{
  ( theWrappedObject->setBottom(bottom));
}

void PythonQtWrapper_QMarginsF::setLeft(QMarginsF* theWrappedObject, qreal  left)
{
  ( theWrappedObject->setLeft(left));
}

void PythonQtWrapper_QMarginsF::setRight(QMarginsF* theWrappedObject, qreal  right)
{
  ( theWrappedObject->setRight(right));
}

void PythonQtWrapper_QMarginsF::setTop(QMarginsF* theWrappedObject, qreal  top)
{
  ( theWrappedObject->setTop(top));
}

QMargins  PythonQtWrapper_QMarginsF::toMargins(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->toMargins());
}

qreal  PythonQtWrapper_QMarginsF::top(QMarginsF* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

QString PythonQtWrapper_QMarginsF::py_toString(QMarginsF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMessageAuthenticationCode* PythonQtWrapper_QMessageAuthenticationCode::new_QMessageAuthenticationCode(QCryptographicHash::Algorithm  method, const QByteArray&  key)
{ 
return new QMessageAuthenticationCode(method, key); }

bool  PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QMessageAuthenticationCode::addData(QMessageAuthenticationCode* theWrappedObject, const char*  data, int  length)
{
  ( theWrappedObject->addData(data, length));
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::static_QMessageAuthenticationCode_hash(const QByteArray&  message, const QByteArray&  key, QCryptographicHash::Algorithm  method)
{
  return (QMessageAuthenticationCode::hash(message, key, method));
}

void PythonQtWrapper_QMessageAuthenticationCode::reset(QMessageAuthenticationCode* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QMessageAuthenticationCode::result(QMessageAuthenticationCode* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

void PythonQtWrapper_QMessageAuthenticationCode::setKey(QMessageAuthenticationCode* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->setKey(key));
}



PythonQtShell_QMessageLogContext::~PythonQtShell_QMessageLogContext() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QMessageLogContext* PythonQtWrapper_QMessageLogContext::new_QMessageLogContext()
{ 
return new PythonQtShell_QMessageLogContext(); }

QMessageLogContext* PythonQtWrapper_QMessageLogContext::new_QMessageLogContext(const char*  fileName, int  lineNumber, const char*  functionName, const char*  categoryName)
{ 
return new PythonQtShell_QMessageLogContext(fileName, lineNumber, functionName, categoryName); }



QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger()
{ 
return new QMessageLogger(); }

QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger(const char*  file, int  line, const char*  function)
{ 
return new QMessageLogger(file, line, function); }

QMessageLogger* PythonQtWrapper_QMessageLogger::new_QMessageLogger(const char*  file, int  line, const char*  function, const char*  category)
{ 
return new QMessageLogger(file, line, function, category); }



QMetaClassInfo* PythonQtWrapper_QMetaClassInfo::new_QMetaClassInfo()
{ 
return new QMetaClassInfo(); }

const QMetaObject*  PythonQtWrapper_QMetaClassInfo::enclosingMetaObject(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

const char*  PythonQtWrapper_QMetaClassInfo::name(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaClassInfo::value(QMetaClassInfo* theWrappedObject) const
{
  return ( theWrappedObject->value());
}



QMetaEnum* PythonQtWrapper_QMetaEnum::new_QMetaEnum()
{ 
return new QMetaEnum(); }

const QMetaObject*  PythonQtWrapper_QMetaEnum::enclosingMetaObject(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

bool  PythonQtWrapper_QMetaEnum::isFlag(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isFlag());
}

bool  PythonQtWrapper_QMetaEnum::isValid(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const char*  PythonQtWrapper_QMetaEnum::key(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->key(index));
}

int  PythonQtWrapper_QMetaEnum::keyCount(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->keyCount());
}

int  PythonQtWrapper_QMetaEnum::keyToValue(QMetaEnum* theWrappedObject, const char*  key, bool*  ok) const
{
  return ( theWrappedObject->keyToValue(key, ok));
}

int  PythonQtWrapper_QMetaEnum::keysToValue(QMetaEnum* theWrappedObject, const char*  keys, bool*  ok) const
{
  return ( theWrappedObject->keysToValue(keys, ok));
}

const char*  PythonQtWrapper_QMetaEnum::name(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

const char*  PythonQtWrapper_QMetaEnum::scope(QMetaEnum* theWrappedObject) const
{
  return ( theWrappedObject->scope());
}

int  PythonQtWrapper_QMetaEnum::value(QMetaEnum* theWrappedObject, int  index) const
{
  return ( theWrappedObject->value(index));
}

const char*  PythonQtWrapper_QMetaEnum::valueToKey(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKey(value));
}

QByteArray  PythonQtWrapper_QMetaEnum::valueToKeys(QMetaEnum* theWrappedObject, int  value) const
{
  return ( theWrappedObject->valueToKeys(value));
}



QMetaMethod* PythonQtWrapper_QMetaMethod::new_QMetaMethod()
{ 
return new QMetaMethod(); }

QMetaMethod::Access  PythonQtWrapper_QMetaMethod::access(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->access());
}

int  PythonQtWrapper_QMetaMethod::attributes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

const QMetaObject*  PythonQtWrapper_QMetaMethod::enclosingMetaObject(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

void PythonQtWrapper_QMetaMethod::getParameterTypes(QMetaMethod* theWrappedObject, int*  types) const
{
  ( theWrappedObject->getParameterTypes(types));
}

bool  PythonQtWrapper_QMetaMethod::isValid(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QMetaMethod::methodIndex(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodIndex());
}

QByteArray  PythonQtWrapper_QMetaMethod::methodSignature(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodSignature());
}

QMetaMethod::MethodType  PythonQtWrapper_QMetaMethod::methodType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->methodType());
}

QByteArray  PythonQtWrapper_QMetaMethod::name(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMetaMethod::__eq__(QMetaMethod* theWrappedObject, const QMetaMethod&  m2)
{
  return ( (*theWrappedObject)== m2);
}

int  PythonQtWrapper_QMetaMethod::parameterCount(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterCount());
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterNames(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterNames());
}

int  PythonQtWrapper_QMetaMethod::parameterType(QMetaMethod* theWrappedObject, int  index) const
{
  return ( theWrappedObject->parameterType(index));
}

QList<QByteArray >  PythonQtWrapper_QMetaMethod::parameterTypes(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->parameterTypes());
}

int  PythonQtWrapper_QMetaMethod::returnType(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->returnType());
}

int  PythonQtWrapper_QMetaMethod::revision(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

const char*  PythonQtWrapper_QMetaMethod::tag(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->tag());
}

const char*  PythonQtWrapper_QMetaMethod::typeName(QMetaMethod* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}



QMetaProperty* PythonQtWrapper_QMetaProperty::new_QMetaProperty()
{ 
return new QMetaProperty(); }

const QMetaObject*  PythonQtWrapper_QMetaProperty::enclosingMetaObject(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enclosingMetaObject());
}

QMetaEnum  PythonQtWrapper_QMetaProperty::enumerator(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->enumerator());
}

bool  PythonQtWrapper_QMetaProperty::hasNotifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasNotifySignal());
}

bool  PythonQtWrapper_QMetaProperty::hasStdCppSet(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->hasStdCppSet());
}

bool  PythonQtWrapper_QMetaProperty::isConstant(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isConstant());
}

bool  PythonQtWrapper_QMetaProperty::isDesignable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isDesignable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEditable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isEditable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isEnumType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isEnumType());
}

bool  PythonQtWrapper_QMetaProperty::isFinal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFinal());
}

bool  PythonQtWrapper_QMetaProperty::isFlagType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isFlagType());
}

bool  PythonQtWrapper_QMetaProperty::isReadable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QMetaProperty::isResettable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isResettable());
}

bool  PythonQtWrapper_QMetaProperty::isScriptable(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isScriptable(obj));
}

bool  PythonQtWrapper_QMetaProperty::isStored(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isStored(obj));
}

bool  PythonQtWrapper_QMetaProperty::isUser(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->isUser(obj));
}

bool  PythonQtWrapper_QMetaProperty::isValid(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaProperty::isWritable(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

const char*  PythonQtWrapper_QMetaProperty::name(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QMetaMethod  PythonQtWrapper_QMetaProperty::notifySignal(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignal());
}

int  PythonQtWrapper_QMetaProperty::notifySignalIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->notifySignalIndex());
}

int  PythonQtWrapper_QMetaProperty::propertyIndex(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->propertyIndex());
}

QVariant  PythonQtWrapper_QMetaProperty::read(QMetaProperty* theWrappedObject, const QObject*  obj) const
{
  return ( theWrappedObject->read(obj));
}

QVariant  PythonQtWrapper_QMetaProperty::readOnGadget(QMetaProperty* theWrappedObject, const void*  gadget) const
{
  return ( theWrappedObject->readOnGadget(gadget));
}

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
}

bool  PythonQtWrapper_QMetaProperty::resetOnGadget(QMetaProperty* theWrappedObject, void*  gadget) const
{
  return ( theWrappedObject->resetOnGadget(gadget));
}

int  PythonQtWrapper_QMetaProperty::revision(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QVariant::Type  PythonQtWrapper_QMetaProperty::type(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

const char*  PythonQtWrapper_QMetaProperty::typeName(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->typeName());
}

int  PythonQtWrapper_QMetaProperty::userType(QMetaProperty* theWrappedObject) const
{
  return ( theWrappedObject->userType());
}

bool  PythonQtWrapper_QMetaProperty::write(QMetaProperty* theWrappedObject, QObject*  obj, const QVariant&  value) const
{
  return ( theWrappedObject->write(obj, value));
}

bool  PythonQtWrapper_QMetaProperty::writeOnGadget(QMetaProperty* theWrappedObject, void*  gadget, const QVariant&  value) const
{
  return ( theWrappedObject->writeOnGadget(gadget, value));
}



QMetaType* PythonQtWrapper_QMetaType::new_QMetaType(const int  type)
{ 
return new QMetaType(type); }

bool  PythonQtWrapper_QMetaType::static_QMetaType_compare(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::compare(lhs, rhs, typeId, result));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, void*  where, const void*  copy)
{
  return (QMetaType::construct(type, where, copy));
}

void*  PythonQtWrapper_QMetaType::construct(QMetaType* theWrappedObject, void*  where, const void*  copy) const
{
  return ( theWrappedObject->construct(where, copy));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_convert(const void*  from, int  fromTypeId, void*  to, int  toTypeId)
{
  return (QMetaType::convert(from, fromTypeId, to, toTypeId));
}

void*  PythonQtWrapper_QMetaType::create(QMetaType* theWrappedObject, const void*  copy) const
{
  return ( theWrappedObject->create(copy));
}

void*  PythonQtWrapper_QMetaType::static_QMetaType_create(int  type, const void*  copy)
{
  return (QMetaType::create(type, copy));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destroy(int  type, void*  data)
{
  (QMetaType::destroy(type, data));
}

void PythonQtWrapper_QMetaType::destroy(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destroy(data));
}

void PythonQtWrapper_QMetaType::static_QMetaType_destruct(int  type, void*  where)
{
  (QMetaType::destruct(type, where));
}

void PythonQtWrapper_QMetaType::destruct(QMetaType* theWrappedObject, void*  data) const
{
  ( theWrappedObject->destruct(data));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_equals(const void*  lhs, const void*  rhs, int  typeId, int*  result)
{
  return (QMetaType::equals(lhs, rhs, typeId, result));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredComparators(int  typeId)
{
  return (QMetaType::hasRegisteredComparators(typeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredConverterFunction(int  fromTypeId, int  toTypeId)
{
  return (QMetaType::hasRegisteredConverterFunction(fromTypeId, toTypeId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_hasRegisteredDebugStreamOperator(int  typeId)
{
  return (QMetaType::hasRegisteredDebugStreamOperator(typeId));
}

bool  PythonQtWrapper_QMetaType::isRegistered(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isRegistered());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_isRegistered(int  type)
{
  return (QMetaType::isRegistered(type));
}

bool  PythonQtWrapper_QMetaType::isValid(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_load(QDataStream&  stream, int  type, void*  data)
{
  return (QMetaType::load(stream, type, data));
}

const QMetaObject*  PythonQtWrapper_QMetaType::metaObject(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->metaObject());
}

const QMetaObject*  PythonQtWrapper_QMetaType::static_QMetaType_metaObjectForType(int  type)
{
  return (QMetaType::metaObjectForType(type));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_registerNormalizedTypedef(const QByteArray&  normalizedTypeName, int  aliasId)
{
  return (QMetaType::registerNormalizedTypedef(normalizedTypeName, aliasId));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_registerTypedef(const char*  typeName, int  aliasId)
{
  return (QMetaType::registerTypedef(typeName, aliasId));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_save(QDataStream&  stream, int  type, const void*  data)
{
  return (QMetaType::save(stream, type, data));
}

int  PythonQtWrapper_QMetaType::sizeOf(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->sizeOf());
}

int  PythonQtWrapper_QMetaType::static_QMetaType_sizeOf(int  type)
{
  return (QMetaType::sizeOf(type));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const QByteArray&  typeName)
{
  return (QMetaType::type(typeName));
}

int  PythonQtWrapper_QMetaType::static_QMetaType_type(const char*  typeName)
{
  return (QMetaType::type(typeName));
}

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::static_QMetaType_typeFlags(int  type)
{
  return (QMetaType::typeFlags(type));
}

const char*  PythonQtWrapper_QMetaType::static_QMetaType_typeName(int  type)
{
  return (QMetaType::typeName(type));
}

bool  PythonQtWrapper_QMetaType::static_QMetaType_unregisterType(int  type)
{
  return (QMetaType::unregisterType(type));
}



PythonQtShell_QMimeData::~PythonQtShell_QMimeData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMimeData::childEvent(QChildEvent*  event0)
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
  QMimeData::childEvent(event0);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  event0)
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
  QMimeData::customEvent(event0);
}
bool  PythonQtShell_QMimeData::event(QEvent*  event0)
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
  return QMimeData::event(event0);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QMimeData::eventFilter(watched0, event1);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("formats");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("formats", methodInfo, result);
          } else {
            returnValue = *((QStringList*)args[0]);
          }
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
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("hasFormat");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&mimetype0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("hasFormat", methodInfo, result);
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
  return QMimeData::hasFormat(mimetype0);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype0, QVariant::Type  preferredType1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("retrieveData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QString&" , "QVariant::Type"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
      void* args[3] = {NULL, (void*)&mimetype0, (void*)&preferredType1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("retrieveData", methodInfo, result);
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
  return QMimeData::retrieveData(mimetype0, preferredType1);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  event0)
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
  QMimeData::timerEvent(event0);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

const QMetaObject* PythonQtShell_QMimeData::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMimeData::staticMetaObject);
  } else {
    return &QMimeData::staticMetaObject;
  }
}
int PythonQtShell_QMimeData::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMimeData::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->formats());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}



QMimeDatabase* PythonQtWrapper_QMimeDatabase::new_QMimeDatabase()
{ 
return new QMimeDatabase(); }

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::allMimeTypes(QMimeDatabase* theWrappedObject) const
{
  return ( theWrappedObject->allMimeTypes());
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForData(device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForData(QMimeDatabase* theWrappedObject, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForData(data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QFileInfo&  fileInfo, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileInfo, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFile(QMimeDatabase* theWrappedObject, const QString&  fileName, QMimeDatabase::MatchMode  mode) const
{
  return ( theWrappedObject->mimeTypeForFile(fileName, mode));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, QIODevice*  device) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, device));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForFileNameAndData(QMimeDatabase* theWrappedObject, const QString&  fileName, const QByteArray&  data) const
{
  return ( theWrappedObject->mimeTypeForFileNameAndData(fileName, data));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForName(QMimeDatabase* theWrappedObject, const QString&  nameOrAlias) const
{
  return ( theWrappedObject->mimeTypeForName(nameOrAlias));
}

QMimeType  PythonQtWrapper_QMimeDatabase::mimeTypeForUrl(QMimeDatabase* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->mimeTypeForUrl(url));
}

QList<QMimeType >  PythonQtWrapper_QMimeDatabase::mimeTypesForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->mimeTypesForFileName(fileName));
}

QString  PythonQtWrapper_QMimeDatabase::suffixForFileName(QMimeDatabase* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->suffixForFileName(fileName));
}



QMimeType* PythonQtWrapper_QMimeType::new_QMimeType()
{ 
return new QMimeType(); }

QMimeType* PythonQtWrapper_QMimeType::new_QMimeType(const QMimeType&  other)
{ 
return new QMimeType(other); }

QStringList  PythonQtWrapper_QMimeType::aliases(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->aliases());
}

QStringList  PythonQtWrapper_QMimeType::allAncestors(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->allAncestors());
}

QString  PythonQtWrapper_QMimeType::comment(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->comment());
}

QString  PythonQtWrapper_QMimeType::filterString(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->filterString());
}

QString  PythonQtWrapper_QMimeType::genericIconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->genericIconName());
}

QStringList  PythonQtWrapper_QMimeType::globPatterns(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->globPatterns());
}

QString  PythonQtWrapper_QMimeType::iconName(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->iconName());
}

bool  PythonQtWrapper_QMimeType::inherits(QMimeType* theWrappedObject, const QString&  mimeTypeName) const
{
  return ( theWrappedObject->inherits(mimeTypeName));
}

bool  PythonQtWrapper_QMimeType::isDefault(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

bool  PythonQtWrapper_QMimeType::isValid(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QMimeType::name(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QMimeType::__ne__(QMimeType* theWrappedObject, const QMimeType&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QMimeType*  PythonQtWrapper_QMimeType::operator_assign(QMimeType* theWrappedObject, const QMimeType&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QMimeType::__eq__(QMimeType* theWrappedObject, const QMimeType&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringList  PythonQtWrapper_QMimeType::parentMimeTypes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->parentMimeTypes());
}

QString  PythonQtWrapper_QMimeType::preferredSuffix(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->preferredSuffix());
}

QStringList  PythonQtWrapper_QMimeType::suffixes(QMimeType* theWrappedObject) const
{
  return ( theWrappedObject->suffixes());
}

void PythonQtWrapper_QMimeType::swap(QMimeType* theWrappedObject, QMimeType&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QMimeType::py_toString(QMimeType* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

QModelIndex  PythonQtWrapper_QModelIndex::child(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalPointer());
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QModelIndex::__ne__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QModelIndex::__lt__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QModelIndex::__eq__(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

QString PythonQtWrapper_QModelIndex::py_toString(QModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QMutex* PythonQtWrapper_QMutex::new_QMutex(QMutex::RecursionMode  mode)
{ 
return new QMutex(mode); }

void PythonQtWrapper_QMutex::lock(QMutex* theWrappedObject)
{
  ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QMutex::tryLock(QMutex* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLock(timeout));
}

void PythonQtWrapper_QMutex::unlock(QMutex* theWrappedObject)
{
  ( theWrappedObject->unlock());
}


