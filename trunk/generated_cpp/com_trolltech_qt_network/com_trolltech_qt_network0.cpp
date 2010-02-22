#include "com_trolltech_qt_network0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QVariant>
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
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkcookie.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qstringlist.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qudpsocket.h>
#include <qurl.h>
#include <qurlinfo.h>

bool  PythonQtShell_QAbstractSocket::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::canReadLine();
}
qint64  PythonQtShell_QAbstractSocket::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QAbstractSocket::readLineData(data, maxlen);
}
qint64  PythonQtShell_QAbstractSocket::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::bytesAvailable();
}
bool  PythonQtShell_QAbstractSocket::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QAbstractSocket::waitForReadyRead(msecs);
}
void PythonQtShell_QAbstractSocket::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSocket::close();
}
bool  PythonQtShell_QAbstractSocket::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::atEnd();
}
bool  PythonQtShell_QAbstractSocket::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::isSequential();
}
qint64  PythonQtShell_QAbstractSocket::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QAbstractSocket::readData(data, maxlen);
}
bool  PythonQtShell_QAbstractSocket::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QAbstractSocket::waitForBytesWritten(msecs);
}
qint64  PythonQtShell_QAbstractSocket::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
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
  }
}
  return QAbstractSocket::writeData(data, len);
}
qint64  PythonQtShell_QAbstractSocket::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::bytesToWrite();
}
bool  PythonQtShell_QAbstractSocket::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  }
}
  return QAbstractSocket::seek(pos);
}
bool  PythonQtShell_QAbstractSocket::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::reset();
}
qint64  PythonQtShell_QAbstractSocket::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::size();
}
bool  PythonQtShell_QAbstractSocket::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  }
}
  return QAbstractSocket::open(mode);
}
qint64  PythonQtShell_QAbstractSocket::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::pos();
}
void PythonQtShell_QAbstractSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QAbstractSocket::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::event(arg__1);
}
void PythonQtShell_QAbstractSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSocket::childEvent(arg__1);
}
void PythonQtShell_QAbstractSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractSocket::customEvent(arg__1);
}
bool  PythonQtShell_QAbstractSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractSocket::eventFilter(arg__1, arg__2);
}
QAbstractSocket* PythonQtWrapper_QAbstractSocket::new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent)
{ 
return new PythonQtShell_QAbstractSocket(socketType, parent); }

bool  PythonQtWrapper_QAbstractSocket::setSocketDescriptor(QAbstractSocket* theWrappedObject, int  socketDescriptor, QAbstractSocket::SocketState  state, QIODevice::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, state, openMode));
}

unsigned short  PythonQtWrapper_QAbstractSocket::localPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localPort());
}

bool  PythonQtWrapper_QAbstractSocket::canReadLine(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_canReadLine());
}

qint64  PythonQtWrapper_QAbstractSocket::readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

int  PythonQtWrapper_QAbstractSocket::socketDescriptor(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QAbstractSocket::SocketError  PythonQtWrapper_QAbstractSocket::error(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

void PythonQtWrapper_QAbstractSocket::disconnectFromHost(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromHost());
}

qint64  PythonQtWrapper_QAbstractSocket::bytesAvailable(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_bytesAvailable());
}

bool  PythonQtWrapper_QAbstractSocket::waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}

QHostAddress  PythonQtWrapper_QAbstractSocket::localAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->localAddress());
}

QString  PythonQtWrapper_QAbstractSocket::peerName(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerName());
}

unsigned short  PythonQtWrapper_QAbstractSocket::peerPort(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerPort());
}

void PythonQtWrapper_QAbstractSocket::close(QAbstractSocket* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_close());
}

void PythonQtWrapper_QAbstractSocket::setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

bool  PythonQtWrapper_QAbstractSocket::atEnd(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_atEnd());
}

QAbstractSocket::SocketType  PythonQtWrapper_QAbstractSocket::socketType(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketType());
}

QAbstractSocket::SocketState  PythonQtWrapper_QAbstractSocket::state(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(address, port, mode));
}

QHostAddress  PythonQtWrapper_QAbstractSocket::peerAddress(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->peerAddress());
}

void PythonQtWrapper_QAbstractSocket::connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->connectToHost(hostName, port, mode));
}

QNetworkProxy  PythonQtWrapper_QAbstractSocket::proxy(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

bool  PythonQtWrapper_QAbstractSocket::isSequential(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_isSequential());
}

qint64  PythonQtWrapper_QAbstractSocket::readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_readData(data, maxlen));
}

bool  PythonQtWrapper_QAbstractSocket::waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QAbstractSocket::waitForConnected(QAbstractSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

void PythonQtWrapper_QAbstractSocket::abort(QAbstractSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

bool  PythonQtWrapper_QAbstractSocket::flush(QAbstractSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

qint64  PythonQtWrapper_QAbstractSocket::readBufferSize(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

void PythonQtWrapper_QAbstractSocket::setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

bool  PythonQtWrapper_QAbstractSocket::isValid(QAbstractSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qint64  PythonQtWrapper_QAbstractSocket::writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_writeData(data, len));
}

qint64  PythonQtWrapper_QAbstractSocket::bytesToWrite(QAbstractSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->promoted_bytesToWrite());
}



QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator()
{ 
return new QAuthenticator(); }

QAuthenticator* PythonQtWrapper_QAuthenticator::new_QAuthenticator(const QAuthenticator&  other)
{ 
return new QAuthenticator(other); }

QString  PythonQtWrapper_QAuthenticator::password(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

void PythonQtWrapper_QAuthenticator::setUser(QAuthenticator* theWrappedObject, const QString&  user)
{
  ( theWrappedObject->setUser(user));
}

void PythonQtWrapper_QAuthenticator::setPassword(QAuthenticator* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

QString  PythonQtWrapper_QAuthenticator::realm(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->realm());
}

bool  PythonQtWrapper_QAuthenticator::operator_equal(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QAuthenticator::user(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->user());
}

bool  PythonQtWrapper_QAuthenticator::isNull(QAuthenticator* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}



void PythonQtShell_QFtp::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::timerEvent(arg__1);
}
bool  PythonQtShell_QFtp::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QFtp::event(arg__1);
}
void PythonQtShell_QFtp::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::childEvent(arg__1);
}
void PythonQtShell_QFtp::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFtp::customEvent(arg__1);
}
bool  PythonQtShell_QFtp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QFtp::eventFilter(arg__1, arg__2);
}
QFtp* PythonQtWrapper_QFtp::new_QFtp(QObject*  parent)
{ 
return new PythonQtShell_QFtp(parent); }

QIODevice*  PythonQtWrapper_QFtp::currentDevice(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentDevice());
}

QFtp::Command  PythonQtWrapper_QFtp::currentCommand(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentCommand());
}

int  PythonQtWrapper_QFtp::setTransferMode(QFtp* theWrappedObject, QFtp::TransferMode  mode)
{
  return ( theWrappedObject->setTransferMode(mode));
}

QFtp::Error  PythonQtWrapper_QFtp::error(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QFtp::cd(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->cd(dir));
}

qint64  PythonQtWrapper_QFtp::bytesAvailable(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

int  PythonQtWrapper_QFtp::currentId(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

int  PythonQtWrapper_QFtp::remove(QFtp* theWrappedObject, const QString&  file)
{
  return ( theWrappedObject->remove(file));
}

int  PythonQtWrapper_QFtp::rename(QFtp* theWrappedObject, const QString&  oldname, const QString&  newname)
{
  return ( theWrappedObject->rename(oldname, newname));
}

int  PythonQtWrapper_QFtp::close(QFtp* theWrappedObject)
{
  return ( theWrappedObject->close());
}

int  PythonQtWrapper_QFtp::login(QFtp* theWrappedObject, const QString&  user, const QString&  password)
{
  return ( theWrappedObject->login(user, password));
}

bool  PythonQtWrapper_QFtp::hasPendingCommands(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingCommands());
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, QIODevice*  dev, const QString&  file, QFtp::TransferType  type)
{
  return ( theWrappedObject->put(dev, file, type));
}

int  PythonQtWrapper_QFtp::get(QFtp* theWrappedObject, const QString&  file, QIODevice*  dev, QFtp::TransferType  type)
{
  return ( theWrappedObject->get(file, dev, type));
}

int  PythonQtWrapper_QFtp::rmdir(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->rmdir(dir));
}

QString  PythonQtWrapper_QFtp::errorString(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QFtp::mkdir(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->mkdir(dir));
}

int  PythonQtWrapper_QFtp::connectToHost(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
  return ( theWrappedObject->connectToHost(host, port));
}

QFtp::State  PythonQtWrapper_QFtp::state(QFtp* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

int  PythonQtWrapper_QFtp::put(QFtp* theWrappedObject, const QByteArray&  data, const QString&  file, QFtp::TransferType  type)
{
  return ( theWrappedObject->put(data, file, type));
}

QByteArray  PythonQtWrapper_QFtp::readAll(QFtp* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

void PythonQtWrapper_QFtp::clearPendingCommands(QFtp* theWrappedObject)
{
  ( theWrappedObject->clearPendingCommands());
}

int  PythonQtWrapper_QFtp::rawCommand(QFtp* theWrappedObject, const QString&  command)
{
  return ( theWrappedObject->rawCommand(command));
}

int  PythonQtWrapper_QFtp::setProxy(QFtp* theWrappedObject, const QString&  host, unsigned short  port)
{
  return ( theWrappedObject->setProxy(host, port));
}

int  PythonQtWrapper_QFtp::list(QFtp* theWrappedObject, const QString&  dir)
{
  return ( theWrappedObject->list(dir));
}

qint64  PythonQtWrapper_QFtp::read(QFtp* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( theWrappedObject->read(data, maxlen));
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

bool  PythonQtWrapper_QHostAddress::isNull(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr)
{
  ( theWrappedObject->setAddress(ip6Addr));
}

void PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr)
{
  ( theWrappedObject->setAddress(ip4Addr));
}

bool  PythonQtWrapper_QHostAddress::operator_equal(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const
{
  return ( (*theWrappedObject)== address);
}

QIPv6Address  PythonQtWrapper_QHostAddress::toIPv6Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv6Address());
}

QString  PythonQtWrapper_QHostAddress::toString(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

unsigned int  PythonQtWrapper_QHostAddress::toIPv4Address(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->toIPv4Address());
}

QAbstractSocket::NetworkLayerProtocol  PythonQtWrapper_QHostAddress::protocol(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->protocol());
}

bool  PythonQtWrapper_QHostAddress::operator_equal(QHostAddress* theWrappedObject, const QHostAddress&  address) const
{
  return ( (*theWrappedObject)== address);
}

bool  PythonQtWrapper_QHostAddress::setAddress(QHostAddress* theWrappedObject, const QString&  address)
{
  return ( theWrappedObject->setAddress(address));
}

void PythonQtWrapper_QHostAddress::setScopeId(QHostAddress* theWrappedObject, const QString&  id)
{
  ( theWrappedObject->setScopeId(id));
}

QString  PythonQtWrapper_QHostAddress::scopeId(QHostAddress* theWrappedObject) const
{
  return ( theWrappedObject->scopeId());
}

void PythonQtWrapper_QHostAddress::writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QHostAddress::readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(const QHostInfo&  d)
{ 
return new QHostInfo(d); }

QHostInfo* PythonQtWrapper_QHostInfo::new_QHostInfo(int  lookupId)
{ 
return new QHostInfo(lookupId); }

void PythonQtWrapper_QHostInfo::setErrorString(QHostInfo* theWrappedObject, const QString&  errorString)
{
  ( theWrappedObject->setErrorString(errorString));
}

QHostInfo  PythonQtWrapper_QHostInfo::static_QHostInfo_fromName(const QString&  name)
{
  return (QHostInfo::fromName(name));
}

QString  PythonQtWrapper_QHostInfo::static_QHostInfo_localHostName()
{
  return (QHostInfo::localHostName());
}

int  PythonQtWrapper_QHostInfo::lookupId(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->lookupId());
}

void PythonQtWrapper_QHostInfo::static_QHostInfo_abortHostLookup(int  lookupId)
{
  (QHostInfo::abortHostLookup(lookupId));
}

void PythonQtWrapper_QHostInfo::setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses)
{
  ( theWrappedObject->setAddresses(addresses));
}

QString  PythonQtWrapper_QHostInfo::hostName(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

QList<QHostAddress >  PythonQtWrapper_QHostInfo::addresses(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->addresses());
}

QHostInfo::HostInfoError  PythonQtWrapper_QHostInfo::error(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

void PythonQtWrapper_QHostInfo::setLookupId(QHostInfo* theWrappedObject, int  id)
{
  ( theWrappedObject->setLookupId(id));
}

void PythonQtWrapper_QHostInfo::setHostName(QHostInfo* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setHostName(name));
}

void PythonQtWrapper_QHostInfo::setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error)
{
  ( theWrappedObject->setError(error));
}

QString  PythonQtWrapper_QHostInfo::errorString(QHostInfo* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QHostInfo::static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member)
{
  return (QHostInfo::lookupHost(name, receiver, member));
}



void PythonQtShell_QHttp::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHttp::timerEvent(arg__1);
}
bool  PythonQtShell_QHttp::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttp::event(arg__1);
}
void PythonQtShell_QHttp::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHttp::childEvent(arg__1);
}
void PythonQtShell_QHttp::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHttp::customEvent(arg__1);
}
bool  PythonQtShell_QHttp::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttp::eventFilter(arg__1, arg__2);
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

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QNetworkProxy&  proxy)
{
  return ( theWrappedObject->setProxy(proxy));
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, QIODevice*  device, QIODevice*  to)
{
  return ( theWrappedObject->request(header, device, to));
}

QIODevice*  PythonQtWrapper_QHttp::currentSourceDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentSourceDevice());
}

QHttp::State  PythonQtWrapper_QHttp::state(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QHttpResponseHeader  PythonQtWrapper_QHttp::lastResponse(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->lastResponse());
}

QString  PythonQtWrapper_QHttp::errorString(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

int  PythonQtWrapper_QHttp::get(QHttp* theWrappedObject, const QString&  path, QIODevice*  to)
{
  return ( theWrappedObject->get(path, to));
}

int  PythonQtWrapper_QHttp::setUser(QHttp* theWrappedObject, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setUser(username, password));
}

int  PythonQtWrapper_QHttp::setSocket(QHttp* theWrappedObject, QTcpSocket*  socket)
{
  return ( theWrappedObject->setSocket(socket));
}

int  PythonQtWrapper_QHttp::close(QHttp* theWrappedObject)
{
  return ( theWrappedObject->close());
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

int  PythonQtWrapper_QHttp::currentId(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentId());
}

qint64  PythonQtWrapper_QHttp::bytesAvailable(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->bytesAvailable());
}

QHttp::Error  PythonQtWrapper_QHttp::error(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QHttp::post(QHttp* theWrappedObject, const QString&  path, QIODevice*  data, QIODevice*  to)
{
  return ( theWrappedObject->post(path, data, to));
}

int  PythonQtWrapper_QHttp::head(QHttp* theWrappedObject, const QString&  path)
{
  return ( theWrappedObject->head(path));
}

QIODevice*  PythonQtWrapper_QHttp::currentDestinationDevice(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentDestinationDevice());
}

void PythonQtWrapper_QHttp::clearPendingRequests(QHttp* theWrappedObject)
{
  ( theWrappedObject->clearPendingRequests());
}

QByteArray  PythonQtWrapper_QHttp::readAll(QHttp* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, QHttp::ConnectionMode  mode, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, mode, port));
}

int  PythonQtWrapper_QHttp::setHost(QHttp* theWrappedObject, const QString&  hostname, unsigned short  port)
{
  return ( theWrappedObject->setHost(hostname, port));
}

int  PythonQtWrapper_QHttp::request(QHttp* theWrappedObject, const QHttpRequestHeader&  header, const QByteArray&  data, QIODevice*  to)
{
  return ( theWrappedObject->request(header, data, to));
}

QHttpRequestHeader  PythonQtWrapper_QHttp::currentRequest(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->currentRequest());
}

qint64  PythonQtWrapper_QHttp::read(QHttp* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( theWrappedObject->read(data, maxlen));
}

int  PythonQtWrapper_QHttp::setProxy(QHttp* theWrappedObject, const QString&  host, int  port, const QString&  username, const QString&  password)
{
  return ( theWrappedObject->setProxy(host, port, username, password));
}

bool  PythonQtWrapper_QHttp::hasPendingRequests(QHttp* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingRequests());
}



int  PythonQtShell_QHttpHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  int result;
return result;
}
QString  PythonQtShell_QHttpHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpHeader::toString();
}
int  PythonQtShell_QHttpHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  int result;
return result;
}
bool  PythonQtShell_QHttpHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
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
  }
}
  return QHttpHeader::parseLine(line, number);
}
QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader()
{ 
return new PythonQtShell_QHttpHeader(); }

QHttpHeader* PythonQtWrapper_QHttpHeader::new_QHttpHeader(const QString&  str)
{ 
return new PythonQtShell_QHttpHeader(str); }

void PythonQtWrapper_QHttpHeader::setContentLength(QHttpHeader* theWrappedObject, int  len)
{
  ( theWrappedObject->setContentLength(len));
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QHttpHeader::values(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->values());
}

bool  PythonQtWrapper_QHttpHeader::hasKey(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasKey(key));
}

bool  PythonQtWrapper_QHttpHeader::isValid(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QHttpHeader::toString(QHttpHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_toString());
}

bool  PythonQtWrapper_QHttpHeader::hasContentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentLength());
}

bool  PythonQtWrapper_QHttpHeader::hasContentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->hasContentType());
}

QStringList  PythonQtWrapper_QHttpHeader::allValues(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->allValues(key));
}

QString  PythonQtWrapper_QHttpHeader::contentType(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentType());
}

uint  PythonQtWrapper_QHttpHeader::contentLength(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->contentLength());
}

void PythonQtWrapper_QHttpHeader::addValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addValue(key, value));
}

void PythonQtWrapper_QHttpHeader::removeValue(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeValue(key));
}

QString  PythonQtWrapper_QHttpHeader::value(QHttpHeader* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

QStringList  PythonQtWrapper_QHttpHeader::keys(QHttpHeader* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

void PythonQtWrapper_QHttpHeader::setValues(QHttpHeader* theWrappedObject, const QList<QPair<QString , QString >  >&  values)
{
  ( theWrappedObject->setValues(values));
}

bool  PythonQtWrapper_QHttpHeader::parseLine(QHttpHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

void PythonQtWrapper_QHttpHeader::removeAllValues(QHttpHeader* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllValues(key));
}

void PythonQtWrapper_QHttpHeader::setValue(QHttpHeader* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->setValue(key, value));
}

void PythonQtWrapper_QHttpHeader::setContentType(QHttpHeader* theWrappedObject, const QString&  type)
{
  ( theWrappedObject->setContentType(type));
}



bool  PythonQtShell_QHttpRequestHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
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
  }
}
  return QHttpRequestHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpRequestHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpRequestHeader::toString();
}
int  PythonQtShell_QHttpRequestHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpRequestHeader::minorVersion();
}
int  PythonQtShell_QHttpRequestHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpRequestHeader::majorVersion();
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

QString  PythonQtWrapper_QHttpRequestHeader::method(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->method());
}

bool  PythonQtWrapper_QHttpRequestHeader::parseLine(QHttpRequestHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

QString  PythonQtWrapper_QHttpRequestHeader::toString(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_toString());
}

QString  PythonQtWrapper_QHttpRequestHeader::path(QHttpRequestHeader* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

int  PythonQtWrapper_QHttpRequestHeader::minorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_minorVersion());
}

void PythonQtWrapper_QHttpRequestHeader::setRequest(QHttpRequestHeader* theWrappedObject, const QString&  method, const QString&  path, int  majorVer, int  minorVer)
{
  ( theWrappedObject->setRequest(method, path, majorVer, minorVer));
}

int  PythonQtWrapper_QHttpRequestHeader::majorVersion(QHttpRequestHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpRequestHeader*)theWrappedObject)->promoted_majorVersion());
}



bool  PythonQtShell_QHttpResponseHeader::parseLine(const QString&  line, int  number)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&line, (void*)&number};
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
  }
}
  return QHttpResponseHeader::parseLine(line, number);
}
QString  PythonQtShell_QHttpResponseHeader::toString() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "toString");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpResponseHeader::toString();
}
int  PythonQtShell_QHttpResponseHeader::minorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "minorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpResponseHeader::minorVersion();
}
int  PythonQtShell_QHttpResponseHeader::majorVersion() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "majorVersion");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QHttpResponseHeader::majorVersion();
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

void PythonQtWrapper_QHttpResponseHeader::setStatusLine(QHttpResponseHeader* theWrappedObject, int  code, const QString&  text, int  majorVer, int  minorVer)
{
  ( theWrappedObject->setStatusLine(code, text, majorVer, minorVer));
}

bool  PythonQtWrapper_QHttpResponseHeader::parseLine(QHttpResponseHeader* theWrappedObject, const QString&  line, int  number)
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_parseLine(line, number));
}

int  PythonQtWrapper_QHttpResponseHeader::statusCode(QHttpResponseHeader* theWrappedObject) const
{
  return ( theWrappedObject->statusCode());
}

QString  PythonQtWrapper_QHttpResponseHeader::toString(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_toString());
}

int  PythonQtWrapper_QHttpResponseHeader::minorVersion(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_minorVersion());
}

int  PythonQtWrapper_QHttpResponseHeader::majorVersion(QHttpResponseHeader* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QHttpResponseHeader*)theWrappedObject)->promoted_majorVersion());
}

QString  PythonQtWrapper_QHttpResponseHeader::reasonPhrase(QHttpResponseHeader* theWrappedObject) const
{
  return ( theWrappedObject->reasonPhrase());
}



QIPv6Address* PythonQtWrapper_QIPv6Address::new_QIPv6Address()
{ 
return new PythonQtShell_QIPv6Address(); }



QLocalSocket*  PythonQtShell_QLocalServer::nextPendingConnection()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextPendingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalServer::nextPendingConnection();
}
bool  PythonQtShell_QLocalServer::hasPendingConnections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasPendingConnections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalServer::hasPendingConnections();
}
void PythonQtShell_QLocalServer::incomingConnection(quintptr  socketDescriptor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "incomingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "quintptr"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&socketDescriptor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::incomingConnection(socketDescriptor);
}
void PythonQtShell_QLocalServer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::timerEvent(arg__1);
}
bool  PythonQtShell_QLocalServer::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalServer::event(arg__1);
}
void PythonQtShell_QLocalServer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::childEvent(arg__1);
}
void PythonQtShell_QLocalServer::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::customEvent(arg__1);
}
bool  PythonQtShell_QLocalServer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalServer::eventFilter(arg__1, arg__2);
}
QLocalServer* PythonQtWrapper_QLocalServer::new_QLocalServer(QObject*  parent)
{ 
return new PythonQtShell_QLocalServer(parent); }

bool  PythonQtWrapper_QLocalServer::waitForNewConnection(QLocalServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}

QAbstractSocket::SocketError  PythonQtWrapper_QLocalServer::serverError(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

int  PythonQtWrapper_QLocalServer::maxPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QString  PythonQtWrapper_QLocalServer::serverName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

bool  PythonQtWrapper_QLocalServer::isListening(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

QLocalSocket*  PythonQtWrapper_QLocalServer::nextPendingConnection(QLocalServer* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_nextPendingConnection());
}

void PythonQtWrapper_QLocalServer::close(QLocalServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

QString  PythonQtWrapper_QLocalServer::errorString(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

void PythonQtWrapper_QLocalServer::setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

bool  PythonQtWrapper_QLocalServer::hasPendingConnections(QLocalServer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_hasPendingConnections());
}

void PythonQtWrapper_QLocalServer::incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor)
{
  ( ((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->promoted_incomingConnection(socketDescriptor));
}

QString  PythonQtWrapper_QLocalServer::fullServerName(QLocalServer* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->listen(name));
}



bool  PythonQtShell_QLocalSocket::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::canReadLine();
}
qint64  PythonQtShell_QLocalSocket::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::bytesToWrite();
}
void PythonQtShell_QLocalSocket::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::close();
}
bool  PythonQtShell_QLocalSocket::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QLocalSocket::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QLocalSocket::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::isSequential();
}
bool  PythonQtShell_QLocalSocket::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QLocalSocket::waitForReadyRead(msecs);
}
qint64  PythonQtShell_QLocalSocket::writeData(const char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::writeData(arg__1, arg__2);
}
qint64  PythonQtShell_QLocalSocket::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::bytesAvailable();
}
qint64  PythonQtShell_QLocalSocket::readData(char*  arg__1, qint64  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::readData(arg__1, arg__2);
}
bool  PythonQtShell_QLocalSocket::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::reset();
}
bool  PythonQtShell_QLocalSocket::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::atEnd();
}
bool  PythonQtShell_QLocalSocket::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  }
}
  return QLocalSocket::seek(pos);
}
qint64  PythonQtShell_QLocalSocket::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::size();
}
qint64  PythonQtShell_QLocalSocket::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QLocalSocket::readLineData(data, maxlen);
}
bool  PythonQtShell_QLocalSocket::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  }
}
  return QLocalSocket::open(mode);
}
qint64  PythonQtShell_QLocalSocket::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::pos();
}
void PythonQtShell_QLocalSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::event(arg__1);
}
void PythonQtShell_QLocalSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::childEvent(arg__1);
}
void PythonQtShell_QLocalSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalSocket::customEvent(arg__1);
}
bool  PythonQtShell_QLocalSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QLocalSocket::eventFilter(arg__1, arg__2);
}
QLocalSocket* PythonQtWrapper_QLocalSocket::new_QLocalSocket(QObject*  parent)
{ 
return new PythonQtShell_QLocalSocket(parent); }

bool  PythonQtWrapper_QLocalSocket::canReadLine(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_canReadLine());
}

void PythonQtWrapper_QLocalSocket::disconnectFromServer(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->disconnectFromServer());
}

bool  PythonQtWrapper_QLocalSocket::waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForDisconnected(msecs));
}

qint64  PythonQtWrapper_QLocalSocket::bytesToWrite(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesToWrite());
}

void PythonQtWrapper_QLocalSocket::close(QLocalSocket* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_close());
}

bool  PythonQtWrapper_QLocalSocket::waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QLocalSocket::waitForConnected(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForConnected(msecs));
}

bool  PythonQtWrapper_QLocalSocket::isSequential(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_isSequential());
}

bool  PythonQtWrapper_QLocalSocket::isValid(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QLocalSocket::setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size)
{
  ( theWrappedObject->setReadBufferSize(size));
}

QString  PythonQtWrapper_QLocalSocket::serverName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->serverName());
}

qint64  PythonQtWrapper_QLocalSocket::readBufferSize(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

bool  PythonQtWrapper_QLocalSocket::waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

QLocalSocket::LocalSocketError  PythonQtWrapper_QLocalSocket::error(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QLocalSocket::LocalSocketState  PythonQtWrapper_QLocalSocket::state(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

quintptr  PythonQtWrapper_QLocalSocket::socketDescriptor(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

qint64  PythonQtWrapper_QLocalSocket::writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_writeData(arg__1, arg__2));
}

bool  PythonQtWrapper_QLocalSocket::setSocketDescriptor(QLocalSocket* theWrappedObject, quintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState, QIODevice::OpenMode  openMode)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor, socketState, openMode));
}

bool  PythonQtWrapper_QLocalSocket::flush(QLocalSocket* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

void PythonQtWrapper_QLocalSocket::connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode)
{
  ( theWrappedObject->connectToServer(name, openMode));
}

qint64  PythonQtWrapper_QLocalSocket::bytesAvailable(QLocalSocket* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_bytesAvailable());
}

QString  PythonQtWrapper_QLocalSocket::fullServerName(QLocalSocket* theWrappedObject) const
{
  return ( theWrappedObject->fullServerName());
}

void PythonQtWrapper_QLocalSocket::abort(QLocalSocket* theWrappedObject)
{
  ( theWrappedObject->abort());
}

qint64  PythonQtWrapper_QLocalSocket::readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2)
{
  return ( ((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->promoted_readData(arg__1, arg__2));
}



QNetworkReply*  PythonQtShell_QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createRequest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QNetworkReply*" , "QNetworkAccessManager::Operation" , "const QNetworkRequest&" , "QIODevice*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QNetworkReply* returnValue;
    void* args[4] = {NULL, (void*)&op, (void*)&request, (void*)&outgoingData};
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
  }
}
  return QNetworkAccessManager::createRequest(op, request, outgoingData);
}
void PythonQtShell_QNetworkAccessManager::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkAccessManager::timerEvent(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkAccessManager::event(arg__1);
}
void PythonQtShell_QNetworkAccessManager::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkAccessManager::childEvent(arg__1);
}
void PythonQtShell_QNetworkAccessManager::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkAccessManager::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkAccessManager::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkAccessManager::eventFilter(arg__1, arg__2);
}
QNetworkAccessManager* PythonQtWrapper_QNetworkAccessManager::new_QNetworkAccessManager(QObject*  parent)
{ 
return new PythonQtShell_QNetworkAccessManager(parent); }

void PythonQtWrapper_QNetworkAccessManager::setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy)
{
  ( theWrappedObject->setProxy(proxy));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->get(request));
}

QNetworkProxy  PythonQtWrapper_QNetworkAccessManager::proxy(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request)
{
  return ( theWrappedObject->head(request));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->post(request, data));
}

QNetworkCookieJar*  PythonQtWrapper_QNetworkAccessManager::cookieJar(QNetworkAccessManager* theWrappedObject) const
{
  return ( theWrappedObject->cookieJar());
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data)
{
  return ( theWrappedObject->put(request, data));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data)
{
  return ( theWrappedObject->put(request, data));
}

void PythonQtWrapper_QNetworkAccessManager::setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar)
{
  ( theWrappedObject->setCookieJar(cookieJar));
}

QNetworkReply*  PythonQtWrapper_QNetworkAccessManager::createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData)
{
  return ( ((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->promoted_createRequest(op, request, outgoingData));
}



QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry()
{ 
return new QNetworkAddressEntry(); }

QNetworkAddressEntry* PythonQtWrapper_QNetworkAddressEntry::new_QNetworkAddressEntry(const QNetworkAddressEntry&  other)
{ 
return new QNetworkAddressEntry(other); }

void PythonQtWrapper_QNetworkAddressEntry::setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast)
{
  ( theWrappedObject->setBroadcast(newBroadcast));
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::ip(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->ip());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::broadcast(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->broadcast());
}

QHostAddress  PythonQtWrapper_QNetworkAddressEntry::netmask(QNetworkAddressEntry* theWrappedObject) const
{
  return ( theWrappedObject->netmask());
}

void PythonQtWrapper_QNetworkAddressEntry::setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask)
{
  ( theWrappedObject->setNetmask(newNetmask));
}

void PythonQtWrapper_QNetworkAddressEntry::setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp)
{
  ( theWrappedObject->setIp(newIp));
}



QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QByteArray&  name, const QByteArray&  value)
{ 
return new QNetworkCookie(name, value); }

QNetworkCookie* PythonQtWrapper_QNetworkCookie::new_QNetworkCookie(const QNetworkCookie&  other)
{ 
return new QNetworkCookie(other); }

QDateTime  PythonQtWrapper_QNetworkCookie::expirationDate(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->expirationDate());
}

bool  PythonQtWrapper_QNetworkCookie::isSessionCookie(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSessionCookie());
}

void PythonQtWrapper_QNetworkCookie::setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName)
{
  ( theWrappedObject->setName(cookieName));
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookie::static_QNetworkCookie_parseCookies(const QByteArray&  cookieString)
{
  return (QNetworkCookie::parseCookies(cookieString));
}

QString  PythonQtWrapper_QNetworkCookie::domain(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->domain());
}

QByteArray  PythonQtWrapper_QNetworkCookie::name(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

bool  PythonQtWrapper_QNetworkCookie::isSecure(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->isSecure());
}

bool  PythonQtWrapper_QNetworkCookie::operator_equal(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const
{
  return ( (*theWrappedObject)== other);
}

QByteArray  PythonQtWrapper_QNetworkCookie::value(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

void PythonQtWrapper_QNetworkCookie::setSecure(QNetworkCookie* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setSecure(enable));
}

void PythonQtWrapper_QNetworkCookie::setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date)
{
  ( theWrappedObject->setExpirationDate(date));
}

void PythonQtWrapper_QNetworkCookie::setDomain(QNetworkCookie* theWrappedObject, const QString&  domain)
{
  ( theWrappedObject->setDomain(domain));
}

void PythonQtWrapper_QNetworkCookie::setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value)
{
  ( theWrappedObject->setValue(value));
}

void PythonQtWrapper_QNetworkCookie::setPath(QNetworkCookie* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

QByteArray  PythonQtWrapper_QNetworkCookie::toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form) const
{
  return ( theWrappedObject->toRawForm(form));
}

QString  PythonQtWrapper_QNetworkCookie::path(QNetworkCookie* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

QString PythonQtWrapper_QNetworkCookie::toString(QNetworkCookie* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



bool  PythonQtShell_QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setCookiesFromUrl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QList<QNetworkCookie >&" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&cookieList, (void*)&url};
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
  }
}
  return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
}
QList<QNetworkCookie >  PythonQtShell_QNetworkCookieJar::cookiesForUrl(const QUrl&  url) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "cookiesForUrl");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QNetworkCookie >" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QList<QNetworkCookie > returnValue;
    void* args[2] = {NULL, (void*)&url};
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
  }
}
  return QNetworkCookieJar::cookiesForUrl(url);
}
void PythonQtShell_QNetworkCookieJar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkCookieJar::timerEvent(arg__1);
}
bool  PythonQtShell_QNetworkCookieJar::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkCookieJar::event(arg__1);
}
void PythonQtShell_QNetworkCookieJar::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkCookieJar::childEvent(arg__1);
}
void PythonQtShell_QNetworkCookieJar::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkCookieJar::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkCookieJar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkCookieJar::eventFilter(arg__1, arg__2);
}
QNetworkCookieJar* PythonQtWrapper_QNetworkCookieJar::new_QNetworkCookieJar(QObject*  parent)
{ 
return new PythonQtShell_QNetworkCookieJar(parent); }

bool  PythonQtWrapper_QNetworkCookieJar::setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_setCookiesFromUrl(cookieList, url));
}

QList<QNetworkCookie >  PythonQtWrapper_QNetworkCookieJar::cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const
{
  return ( ((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->promoted_cookiesForUrl(url));
}



QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface()
{ 
return new QNetworkInterface(); }

QNetworkInterface* PythonQtWrapper_QNetworkInterface::new_QNetworkInterface(const QNetworkInterface&  other)
{ 
return new QNetworkInterface(other); }

QList<QHostAddress >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allAddresses()
{
  return (QNetworkInterface::allAddresses());
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromName(const QString&  name)
{
  return (QNetworkInterface::interfaceFromName(name));
}

QString  PythonQtWrapper_QNetworkInterface::name(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QList<QNetworkInterface >  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_allInterfaces()
{
  return (QNetworkInterface::allInterfaces());
}

QString  PythonQtWrapper_QNetworkInterface::hardwareAddress(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->hardwareAddress());
}

QNetworkInterface  PythonQtWrapper_QNetworkInterface::static_QNetworkInterface_interfaceFromIndex(int  index)
{
  return (QNetworkInterface::interfaceFromIndex(index));
}

QNetworkInterface::InterfaceFlags  PythonQtWrapper_QNetworkInterface::flags(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

bool  PythonQtWrapper_QNetworkInterface::isValid(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QList<QNetworkAddressEntry >  PythonQtWrapper_QNetworkInterface::addressEntries(QNetworkInterface* theWrappedObject) const
{
  return ( theWrappedObject->addressEntries());
}

QString PythonQtWrapper_QNetworkInterface::toString(QNetworkInterface* obj) {
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

bool  PythonQtWrapper_QNetworkProxy::isTransparentProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isTransparentProxy());
}

unsigned short  PythonQtWrapper_QNetworkProxy::port(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

void PythonQtWrapper_QNetworkProxy::setPassword(QNetworkProxy* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

QString  PythonQtWrapper_QNetworkProxy::hostName(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->hostName());
}

void PythonQtWrapper_QNetworkProxy::static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy)
{
  (QNetworkProxy::setApplicationProxy(proxy));
}

void PythonQtWrapper_QNetworkProxy::setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type)
{
  ( theWrappedObject->setType(type));
}

bool  PythonQtWrapper_QNetworkProxy::operator_equal(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QNetworkProxy::user(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->user());
}

bool  PythonQtWrapper_QNetworkProxy::isCachingProxy(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->isCachingProxy());
}

QString  PythonQtWrapper_QNetworkProxy::password(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

void PythonQtWrapper_QNetworkProxy::setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName)
{
  ( theWrappedObject->setHostName(hostName));
}

QNetworkProxy::ProxyType  PythonQtWrapper_QNetworkProxy::type(QNetworkProxy* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QNetworkProxy::setPort(QNetworkProxy* theWrappedObject, unsigned short  port)
{
  ( theWrappedObject->setPort(port));
}

void PythonQtWrapper_QNetworkProxy::setUser(QNetworkProxy* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUser(userName));
}



void PythonQtShell_QNetworkReply::setReadBufferSize(qint64  size)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setReadBufferSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&size};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::setReadBufferSize(size);
}
bool  PythonQtShell_QNetworkReply::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::isSequential();
}
void PythonQtShell_QNetworkReply::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::close();
}
qint64  PythonQtShell_QNetworkReply::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
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
  }
}
  return QNetworkReply::writeData(data, len);
}
void PythonQtShell_QNetworkReply::abort()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "abort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QNetworkReply::ignoreSslErrors()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ignoreSslErrors");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::ignoreSslErrors();
}
qint64  PythonQtShell_QNetworkReply::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QNetworkReply::readLineData(data, maxlen);
}
bool  PythonQtShell_QNetworkReply::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::reset();
}
qint64  PythonQtShell_QNetworkReply::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::size();
}
qint64  PythonQtShell_QNetworkReply::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::bytesAvailable();
}
qint64  PythonQtShell_QNetworkReply::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::bytesToWrite();
}
bool  PythonQtShell_QNetworkReply::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QNetworkReply::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QNetworkReply::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::canReadLine();
}
bool  PythonQtShell_QNetworkReply::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::atEnd();
}
bool  PythonQtShell_QNetworkReply::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  }
}
  return QNetworkReply::seek(pos);
}
bool  PythonQtShell_QNetworkReply::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  }
}
  return QNetworkReply::open(mode);
}
bool  PythonQtShell_QNetworkReply::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QNetworkReply::waitForReadyRead(msecs);
}
qint64  PythonQtShell_QNetworkReply::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::pos();
}
qint64  PythonQtShell_QNetworkReply::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  qint64 result;
return result;
}
void PythonQtShell_QNetworkReply::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::timerEvent(arg__1);
}
bool  PythonQtShell_QNetworkReply::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::event(arg__1);
}
void PythonQtShell_QNetworkReply::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::childEvent(arg__1);
}
void PythonQtShell_QNetworkReply::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QNetworkReply::customEvent(arg__1);
}
bool  PythonQtShell_QNetworkReply::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QNetworkReply::eventFilter(arg__1, arg__2);
}
void PythonQtWrapper_QNetworkReply::setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_setReadBufferSize(size));
}

QNetworkAccessManager::Operation  PythonQtWrapper_QNetworkReply::operation(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->operation());
}

qint64  PythonQtWrapper_QNetworkReply::readBufferSize(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->readBufferSize());
}

QByteArray  PythonQtWrapper_QNetworkReply::rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

bool  PythonQtWrapper_QNetworkReply::isSequential(QNetworkReply* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_isSequential());
}

QVariant  PythonQtWrapper_QNetworkReply::header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

QList<QByteArray >  PythonQtWrapper_QNetworkReply::rawHeaderList(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

bool  PythonQtWrapper_QNetworkReply::hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

QNetworkRequest  PythonQtWrapper_QNetworkReply::request(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->request());
}

void PythonQtWrapper_QNetworkReply::close(QNetworkReply* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_close());
}

QNetworkReply::NetworkError  PythonQtWrapper_QNetworkReply::error(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QNetworkAccessManager*  PythonQtWrapper_QNetworkReply::manager(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->manager());
}

qint64  PythonQtWrapper_QNetworkReply::writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->promoted_writeData(data, len));
}

QUrl  PythonQtWrapper_QNetworkReply::url(QNetworkReply* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QVariant  PythonQtWrapper_QNetworkReply::attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const
{
  return ( theWrappedObject->attribute(code));
}



QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QNetworkRequest&  other)
{ 
return new QNetworkRequest(other); }

QNetworkRequest* PythonQtWrapper_QNetworkRequest::new_QNetworkRequest(const QUrl&  url)
{ 
return new QNetworkRequest(url); }

void PythonQtWrapper_QNetworkRequest::setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value)
{
  ( theWrappedObject->setHeader(header, value));
}

QList<QByteArray >  PythonQtWrapper_QNetworkRequest::rawHeaderList(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->rawHeaderList());
}

QByteArray  PythonQtWrapper_QNetworkRequest::rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->rawHeader(headerName));
}

void PythonQtWrapper_QNetworkRequest::setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setUrl(url));
}

QVariant  PythonQtWrapper_QNetworkRequest::attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue) const
{
  return ( theWrappedObject->attribute(code, defaultValue));
}

void PythonQtWrapper_QNetworkRequest::setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value)
{
  ( theWrappedObject->setRawHeader(headerName, value));
}

bool  PythonQtWrapper_QNetworkRequest::hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const
{
  return ( theWrappedObject->hasRawHeader(headerName));
}

bool  PythonQtWrapper_QNetworkRequest::operator_equal(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const
{
  return ( (*theWrappedObject)== other);
}

QUrl  PythonQtWrapper_QNetworkRequest::url(QNetworkRequest* theWrappedObject) const
{
  return ( theWrappedObject->url());
}

QVariant  PythonQtWrapper_QNetworkRequest::header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const
{
  return ( theWrappedObject->header(header));
}

void PythonQtWrapper_QNetworkRequest::setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value)
{
  ( theWrappedObject->setAttribute(code, value));
}





QTcpSocket*  PythonQtShell_QTcpServer::nextPendingConnection()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextPendingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpServer::nextPendingConnection();
}
bool  PythonQtShell_QTcpServer::hasPendingConnections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasPendingConnections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpServer::hasPendingConnections();
}
void PythonQtShell_QTcpServer::incomingConnection(int  handle)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "incomingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&handle};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::incomingConnection(handle);
}
void PythonQtShell_QTcpServer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::timerEvent(arg__1);
}
bool  PythonQtShell_QTcpServer::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpServer::event(arg__1);
}
void PythonQtShell_QTcpServer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::childEvent(arg__1);
}
void PythonQtShell_QTcpServer::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpServer::customEvent(arg__1);
}
bool  PythonQtShell_QTcpServer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpServer::eventFilter(arg__1, arg__2);
}
QTcpServer* PythonQtWrapper_QTcpServer::new_QTcpServer(QObject*  parent)
{ 
return new PythonQtShell_QTcpServer(parent); }

int  PythonQtWrapper_QTcpServer::maxPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->maxPendingConnections());
}

QAbstractSocket::SocketError  PythonQtWrapper_QTcpServer::serverError(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverError());
}

bool  PythonQtWrapper_QTcpServer::waitForNewConnection(QTcpServer* theWrappedObject, int  msec, bool*  timedOut)
{
  return ( theWrappedObject->waitForNewConnection(msec, timedOut));
}

QTcpSocket*  PythonQtWrapper_QTcpServer::nextPendingConnection(QTcpServer* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_nextPendingConnection());
}

bool  PythonQtWrapper_QTcpServer::isListening(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->isListening());
}

QHostAddress  PythonQtWrapper_QTcpServer::serverAddress(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverAddress());
}

unsigned short  PythonQtWrapper_QTcpServer::serverPort(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->serverPort());
}

bool  PythonQtWrapper_QTcpServer::setSocketDescriptor(QTcpServer* theWrappedObject, int  socketDescriptor)
{
  return ( theWrappedObject->setSocketDescriptor(socketDescriptor));
}

void PythonQtWrapper_QTcpServer::setMaxPendingConnections(QTcpServer* theWrappedObject, int  numConnections)
{
  ( theWrappedObject->setMaxPendingConnections(numConnections));
}

int  PythonQtWrapper_QTcpServer::socketDescriptor(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->socketDescriptor());
}

QNetworkProxy  PythonQtWrapper_QTcpServer::proxy(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->proxy());
}

void PythonQtWrapper_QTcpServer::setProxy(QTcpServer* theWrappedObject, const QNetworkProxy&  networkProxy)
{
  ( theWrappedObject->setProxy(networkProxy));
}

void PythonQtWrapper_QTcpServer::close(QTcpServer* theWrappedObject)
{
  ( theWrappedObject->close());
}

bool  PythonQtWrapper_QTcpServer::hasPendingConnections(QTcpServer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_hasPendingConnections());
}

QString  PythonQtWrapper_QTcpServer::errorString(QTcpServer* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QTcpServer::listen(QTcpServer* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  return ( theWrappedObject->listen(address, port));
}

void PythonQtWrapper_QTcpServer::incomingConnection(QTcpServer* theWrappedObject, int  handle)
{
  ( ((PythonQtPublicPromoter_QTcpServer*)theWrappedObject)->promoted_incomingConnection(handle));
}



qint64  PythonQtShell_QTcpSocket::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QTcpSocket::readLineData(data, maxlen);
}
bool  PythonQtShell_QTcpSocket::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::canReadLine();
}
bool  PythonQtShell_QTcpSocket::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::atEnd();
}
qint64  PythonQtShell_QTcpSocket::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QTcpSocket::readData(data, maxlen);
}
bool  PythonQtShell_QTcpSocket::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QTcpSocket::waitForReadyRead(msecs);
}
bool  PythonQtShell_QTcpSocket::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QTcpSocket::waitForBytesWritten(msecs);
}
qint64  PythonQtShell_QTcpSocket::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::bytesAvailable();
}
qint64  PythonQtShell_QTcpSocket::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
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
  }
}
  return QTcpSocket::writeData(data, len);
}
void PythonQtShell_QTcpSocket::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpSocket::close();
}
qint64  PythonQtShell_QTcpSocket::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::bytesToWrite();
}
bool  PythonQtShell_QTcpSocket::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::isSequential();
}
qint64  PythonQtShell_QTcpSocket::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::size();
}
bool  PythonQtShell_QTcpSocket::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::reset();
}
bool  PythonQtShell_QTcpSocket::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  }
}
  return QTcpSocket::seek(pos);
}
bool  PythonQtShell_QTcpSocket::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  }
}
  return QTcpSocket::open(mode);
}
qint64  PythonQtShell_QTcpSocket::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::pos();
}
void PythonQtShell_QTcpSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QTcpSocket::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::event(arg__1);
}
void PythonQtShell_QTcpSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpSocket::childEvent(arg__1);
}
void PythonQtShell_QTcpSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTcpSocket::customEvent(arg__1);
}
bool  PythonQtShell_QTcpSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QTcpSocket::eventFilter(arg__1, arg__2);
}
QTcpSocket* PythonQtWrapper_QTcpSocket::new_QTcpSocket(QObject*  parent)
{ 
return new PythonQtShell_QTcpSocket(parent); }



bool  PythonQtShell_QUdpSocket::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::reset();
}
qint64  PythonQtShell_QUdpSocket::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QUdpSocket::readLineData(data, maxlen);
}
bool  PythonQtShell_QUdpSocket::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::canReadLine();
}
bool  PythonQtShell_QUdpSocket::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::atEnd();
}
qint64  PythonQtShell_QUdpSocket::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
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
  }
}
  return QUdpSocket::readData(data, maxlen);
}
bool  PythonQtShell_QUdpSocket::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QUdpSocket::waitForReadyRead(msecs);
}
bool  PythonQtShell_QUdpSocket::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  }
}
  return QUdpSocket::waitForBytesWritten(msecs);
}
qint64  PythonQtShell_QUdpSocket::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::bytesAvailable();
}
qint64  PythonQtShell_QUdpSocket::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
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
  }
}
  return QUdpSocket::writeData(data, len);
}
void PythonQtShell_QUdpSocket::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUdpSocket::close();
}
qint64  PythonQtShell_QUdpSocket::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::bytesToWrite();
}
bool  PythonQtShell_QUdpSocket::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::isSequential();
}
qint64  PythonQtShell_QUdpSocket::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::size();
}
bool  PythonQtShell_QUdpSocket::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  }
}
  return QUdpSocket::seek(pos);
}
bool  PythonQtShell_QUdpSocket::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  }
}
  return QUdpSocket::open(mode);
}
qint64  PythonQtShell_QUdpSocket::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::pos();
}
void PythonQtShell_QUdpSocket::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUdpSocket::timerEvent(arg__1);
}
bool  PythonQtShell_QUdpSocket::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::event(arg__1);
}
void PythonQtShell_QUdpSocket::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUdpSocket::childEvent(arg__1);
}
void PythonQtShell_QUdpSocket::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUdpSocket::customEvent(arg__1);
}
bool  PythonQtShell_QUdpSocket::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QUdpSocket::eventFilter(arg__1, arg__2);
}
QUdpSocket* PythonQtWrapper_QUdpSocket::new_QUdpSocket(QObject*  parent)
{ 
return new PythonQtShell_QUdpSocket(parent); }

qint64  PythonQtWrapper_QUdpSocket::writeDatagram(QUdpSocket* theWrappedObject, const QByteArray&  datagram, const QHostAddress&  host, unsigned short  port)
{
  return ( theWrappedObject->writeDatagram(datagram, host, port));
}

bool  PythonQtWrapper_QUdpSocket::hasPendingDatagrams(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->hasPendingDatagrams());
}

qint64  PythonQtWrapper_QUdpSocket::pendingDatagramSize(QUdpSocket* theWrappedObject) const
{
  return ( theWrappedObject->pendingDatagramSize());
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, unsigned short  port, QUdpSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(port, mode));
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QUdpSocket::BindMode  mode)
{
  return ( theWrappedObject->bind(address, port, mode));
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, unsigned short  port)
{
  return ( theWrappedObject->bind(port));
}

bool  PythonQtWrapper_QUdpSocket::bind(QUdpSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port)
{
  return ( theWrappedObject->bind(address, port));
}

qint64  PythonQtWrapper_QUdpSocket::readDatagram(QUdpSocket* theWrappedObject, char*  data, qint64  maxlen, QHostAddress*  host, unsigned short*  port)
{
  return ( theWrappedObject->readDatagram(data, maxlen, host, port));
}



void PythonQtShell_QUrlInfo::setFile(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setFile");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setFile(b);
}
void PythonQtShell_QUrlInfo::setWritable(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setWritable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setWritable(b);
}
void PythonQtShell_QUrlInfo::setName(const QString&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setName(name);
}
void PythonQtShell_QUrlInfo::setReadable(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setReadable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setReadable(b);
}
void PythonQtShell_QUrlInfo::setPermissions(int  p)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setPermissions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&p};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setPermissions(p);
}
void PythonQtShell_QUrlInfo::setGroup(const QString&  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setGroup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setGroup(s);
}
void PythonQtShell_QUrlInfo::setSize(qint64  size)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSize");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&size};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setSize(size);
}
void PythonQtShell_QUrlInfo::setLastModified(const QDateTime&  dt)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLastModified");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QDateTime&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&dt};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setLastModified(dt);
}
void PythonQtShell_QUrlInfo::setDir(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setDir");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setDir(b);
}
void PythonQtShell_QUrlInfo::setOwner(const QString&  s)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setOwner");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&s};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setOwner(s);
}
void PythonQtShell_QUrlInfo::setSymLink(bool  b)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSymLink");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&b};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUrlInfo::setSymLink(b);
}
QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo()
{ 
return new PythonQtShell_QUrlInfo(); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QString&  name, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new PythonQtShell_QUrlInfo(name, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrl&  url, int  permissions, const QString&  owner, const QString&  group, qint64  size, const QDateTime&  lastModified, const QDateTime&  lastRead, bool  isDir, bool  isFile, bool  isSymLink, bool  isWritable, bool  isReadable, bool  isExecutable)
{ 
return new PythonQtShell_QUrlInfo(url, permissions, owner, group, size, lastModified, lastRead, isDir, isFile, isSymLink, isWritable, isReadable, isExecutable); }

QUrlInfo* PythonQtWrapper_QUrlInfo::new_QUrlInfo(const QUrlInfo&  ui)
{ 
return new PythonQtShell_QUrlInfo(ui); }

bool  PythonQtWrapper_QUrlInfo::isSymLink(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymLink());
}

void PythonQtWrapper_QUrlInfo::setFile(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setFile(b));
}

bool  PythonQtWrapper_QUrlInfo::isValid(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QUrlInfo::isWritable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

void PythonQtWrapper_QUrlInfo::setWritable(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setWritable(b));
}

void PythonQtWrapper_QUrlInfo::setName(QUrlInfo* theWrappedObject, const QString&  name)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setName(name));
}

QString  PythonQtWrapper_QUrlInfo::name(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QUrlInfo::setReadable(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setReadable(b));
}

bool  PythonQtWrapper_QUrlInfo::isDir(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDir());
}

void PythonQtWrapper_QUrlInfo::setPermissions(QUrlInfo* theWrappedObject, int  p)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setPermissions(p));
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_equal(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::equal(i1, i2, sortBy));
}

QDateTime  PythonQtWrapper_QUrlInfo::lastModified(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

bool  PythonQtWrapper_QUrlInfo::isExecutable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isExecutable());
}

void PythonQtWrapper_QUrlInfo::setLastRead(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
  ( theWrappedObject->setLastRead(dt));
}

void PythonQtWrapper_QUrlInfo::setGroup(QUrlInfo* theWrappedObject, const QString&  s)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setGroup(s));
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_greaterThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::greaterThan(i1, i2, sortBy));
}

bool  PythonQtWrapper_QUrlInfo::operator_equal(QUrlInfo* theWrappedObject, const QUrlInfo&  i) const
{
  return ( (*theWrappedObject)== i);
}

QString  PythonQtWrapper_QUrlInfo::owner(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->owner());
}

void PythonQtWrapper_QUrlInfo::setSize(QUrlInfo* theWrappedObject, qint64  size)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setSize(size));
}

void PythonQtWrapper_QUrlInfo::setLastModified(QUrlInfo* theWrappedObject, const QDateTime&  dt)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setLastModified(dt));
}

void PythonQtWrapper_QUrlInfo::setDir(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setDir(b));
}

bool  PythonQtWrapper_QUrlInfo::isFile(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isFile());
}

bool  PythonQtWrapper_QUrlInfo::isReadable(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

void PythonQtWrapper_QUrlInfo::setOwner(QUrlInfo* theWrappedObject, const QString&  s)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setOwner(s));
}

QString  PythonQtWrapper_QUrlInfo::group(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

qint64  PythonQtWrapper_QUrlInfo::size(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QUrlInfo::static_QUrlInfo_lessThan(const QUrlInfo&  i1, const QUrlInfo&  i2, int  sortBy)
{
  return (QUrlInfo::lessThan(i1, i2, sortBy));
}

int  PythonQtWrapper_QUrlInfo::permissions(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

QDateTime  PythonQtWrapper_QUrlInfo::lastRead(QUrlInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastRead());
}

void PythonQtWrapper_QUrlInfo::setSymLink(QUrlInfo* theWrappedObject, bool  b)
{
  ( ((PythonQtPublicPromoter_QUrlInfo*)theWrappedObject)->promoted_setSymLink(b));
}


