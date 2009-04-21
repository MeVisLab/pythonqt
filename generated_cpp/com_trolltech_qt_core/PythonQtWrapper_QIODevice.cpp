#include "PythonQtWrapper_QIODevice.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>

bool  PythonQtShell_QIODevice::atEnd() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atEnd");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "atEnd(QIODevice*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QIODevice::atEnd();
}
qint64  PythonQtShell_QIODevice::bytesAvailable() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesAvailable");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "bytesAvailable(QIODevice*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIODevice::bytesAvailable();
}
qint64  PythonQtShell_QIODevice::bytesToWrite() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "bytesToWrite");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "bytesToWrite(QIODevice*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIODevice::bytesToWrite();
}
bool  PythonQtShell_QIODevice::canReadLine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canReadLine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "canReadLine(QIODevice*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QIODevice::canReadLine();
}
void PythonQtShell_QIODevice::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "childEvent(QIODevice*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIODevice::childEvent(arg__1);
}
void PythonQtShell_QIODevice::close()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "close");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "close(QIODevice*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIODevice::close();
}
void PythonQtShell_QIODevice::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "customEvent(QIODevice*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIODevice::customEvent(arg__1);
}
bool  PythonQtShell_QIODevice::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "event(QIODevice*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QIODevice::event(arg__1);
}
bool  PythonQtShell_QIODevice::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "eventFilter(QIODevice*,QObject* ,QEvent* )");
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
  return QIODevice::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QIODevice::isSequential() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isSequential");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "isSequential(QIODevice*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QIODevice::isSequential();
}
bool  PythonQtShell_QIODevice::open(QIODevice::OpenMode  mode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "open(QIODevice*,QIODevice::OpenMode )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&mode};
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
  return QIODevice::open(mode);
}
qint64  PythonQtShell_QIODevice::pos() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "pos");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "pos(QIODevice*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIODevice::pos();
}
qint64  PythonQtShell_QIODevice::readData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "readData(QIODevice*,char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  qint64  result;
return result;
}
qint64  PythonQtShell_QIODevice::readLineData(char*  data, qint64  maxlen)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "readLineData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "readLineData(QIODevice*,char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&maxlen};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIODevice::readLineData(data, maxlen);
}
bool  PythonQtShell_QIODevice::reset()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reset");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "reset(QIODevice*)");
      bool  returnValue;
    void* args[1] = {NULL};
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
  return QIODevice::reset();
}
bool  PythonQtShell_QIODevice::seek(qint64  pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "seek(QIODevice*,qint64 )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&pos};
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
  return QIODevice::seek(pos);
}
qint64  PythonQtShell_QIODevice::size() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "size");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "size(QIODevice*)");
      qint64  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QIODevice::size();
}
void PythonQtShell_QIODevice::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "timerEvent(QIODevice*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QIODevice::timerEvent(arg__1);
}
bool  PythonQtShell_QIODevice::waitForBytesWritten(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForBytesWritten");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "waitForBytesWritten(QIODevice*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  return QIODevice::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QIODevice::waitForReadyRead(int  msecs)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "waitForReadyRead");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "waitForReadyRead(QIODevice*,int )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&msecs};
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
  return QIODevice::waitForReadyRead(msecs);
}
qint64  PythonQtShell_QIODevice::writeData(const char*  data, qint64  len)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "writeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QIODevice::staticMetaObject,
      "writeData(QIODevice*,const char* ,qint64 )");
      qint64  returnValue;
    void* args[3] = {NULL, (void*)&data, (void*)&len};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((qint64 *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  qint64  result;
return result;
}
QIODevice* PythonQtWrapper_QIODevice::new_QIODevice()
{ 
return new PythonQtShell_QIODevice(); }

QIODevice* PythonQtWrapper_QIODevice::new_QIODevice(QObject*  parent)
{ 
return new PythonQtShell_QIODevice(parent); }

bool  PythonQtWrapper_QIODevice::isWritable(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).isWritable();
}

qint64  PythonQtWrapper_QIODevice::pos(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).pos();
}

bool  PythonQtWrapper_QIODevice::putChar(QIODevice* theWrappedObject, char  c)
{
return  (*theWrappedObject).putChar(c);
}

QByteArray  PythonQtWrapper_QIODevice::read(QIODevice* theWrappedObject, qint64  maxlen)
{
return  (*theWrappedObject).read(maxlen);
}

QString  PythonQtWrapper_QIODevice::errorString(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).errorString();
}

bool  PythonQtWrapper_QIODevice::isSequential(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).isSequential();
}

QByteArray  PythonQtWrapper_QIODevice::peek(QIODevice* theWrappedObject, qint64  maxlen)
{
return  (*theWrappedObject).peek(maxlen);
}

qint64  PythonQtWrapper_QIODevice::size(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).size();
}

bool  PythonQtWrapper_QIODevice::isTextModeEnabled(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).isTextModeEnabled();
}

qint64  PythonQtWrapper_QIODevice::readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
return  (*((PythonQtPublicPromoter_QIODevice*)theWrappedObject)).readLineData(data, maxlen);
}

bool  PythonQtWrapper_QIODevice::isOpen(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).isOpen();
}

void PythonQtWrapper_QIODevice::close(QIODevice* theWrappedObject)
{
 (*theWrappedObject).close();
}

bool  PythonQtWrapper_QIODevice::reset(QIODevice* theWrappedObject)
{
return  (*theWrappedObject).reset();
}

qint64  PythonQtWrapper_QIODevice::bytesAvailable(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).bytesAvailable();
}

QIODevice::OpenMode  PythonQtWrapper_QIODevice::openMode(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).openMode();
}

qint64  PythonQtWrapper_QIODevice::bytesToWrite(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).bytesToWrite();
}

bool  PythonQtWrapper_QIODevice::isReadable(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).isReadable();
}

void PythonQtWrapper_QIODevice::setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled)
{
 (*theWrappedObject).setTextModeEnabled(enabled);
}

bool  PythonQtWrapper_QIODevice::waitForBytesWritten(QIODevice* theWrappedObject, int  msecs)
{
return  (*theWrappedObject).waitForBytesWritten(msecs);
}

bool  PythonQtWrapper_QIODevice::open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode)
{
return  (*theWrappedObject).open(mode);
}

QByteArray  PythonQtWrapper_QIODevice::readAll(QIODevice* theWrappedObject)
{
return  (*theWrappedObject).readAll();
}

bool  PythonQtWrapper_QIODevice::atEnd(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).atEnd();
}

bool  PythonQtWrapper_QIODevice::seek(QIODevice* theWrappedObject, qint64  pos)
{
return  (*theWrappedObject).seek(pos);
}

bool  PythonQtWrapper_QIODevice::getChar(QIODevice* theWrappedObject, char*  c)
{
return  (*theWrappedObject).getChar(c);
}

QByteArray  PythonQtWrapper_QIODevice::readLine(QIODevice* theWrappedObject, qint64  maxlen)
{
return  (*theWrappedObject).readLine(maxlen);
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const QByteArray&  data)
{
return  (*theWrappedObject).write(data);
}

bool  PythonQtWrapper_QIODevice::canReadLine(QIODevice* theWrappedObject) const
{
return  (*theWrappedObject).canReadLine();
}

void PythonQtWrapper_QIODevice::ungetChar(QIODevice* theWrappedObject, char  c)
{
 (*theWrappedObject).ungetChar(c);
}

bool  PythonQtWrapper_QIODevice::waitForReadyRead(QIODevice* theWrappedObject, int  msecs)
{
return  (*theWrappedObject).waitForReadyRead(msecs);
}

