#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qfile.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmutex.h>
#include <qobject.h>
#include <qreadwritelock.h>
#include <qrunnable.h>
#include <qsignalmapper.h>
#include <qsocketnotifier.h>
#include <qstringlist.h>
#include <qstringmatcher.h>
#include <qsystemsemaphore.h>
#include <qtconcurrentreducekernel.h>
#include <qtconcurrentthreadengine.h>
#include <qtemporaryfile.h>
#include <qtextboundaryfinder.h>
#include <qtextcodec.h>
#include <qtextstream.h>
#include <qthreadpool.h>
#include <qtimeline.h>
#include <qtimer.h>
#include <qtranslator.h>
#include <quuid.h>
#include <qvector.h>
#include <qwaitcondition.h>
#include <qxmlstream.h>

void PythonQtShell_QSignalMapper::timerEvent(QTimerEvent*  arg__1)
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
  QSignalMapper::timerEvent(arg__1);
}
bool  PythonQtShell_QSignalMapper::event(QEvent*  arg__1)
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
  return QSignalMapper::event(arg__1);
}
void PythonQtShell_QSignalMapper::childEvent(QChildEvent*  arg__1)
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
  QSignalMapper::childEvent(arg__1);
}
void PythonQtShell_QSignalMapper::customEvent(QEvent*  arg__1)
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
  QSignalMapper::customEvent(arg__1);
}
bool  PythonQtShell_QSignalMapper::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSignalMapper::eventFilter(arg__1, arg__2);
}
QSignalMapper* PythonQtWrapper_QSignalMapper::new_QSignalMapper(QObject*  parent)
{ 
return new PythonQtShell_QSignalMapper(parent); }

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, QObject*  object) const
{
  return ( theWrappedObject->mapping(object));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, int  id) const
{
  return ( theWrappedObject->mapping(id));
}

QObject*  PythonQtWrapper_QSignalMapper::mapping(QSignalMapper* theWrappedObject, const QString&  text) const
{
  return ( theWrappedObject->mapping(text));
}

void PythonQtWrapper_QSignalMapper::removeMappings(QSignalMapper* theWrappedObject, QObject*  sender)
{
  ( theWrappedObject->removeMappings(sender));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, QObject*  object)
{
  ( theWrappedObject->setMapping(sender, object));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, const QString&  text)
{
  ( theWrappedObject->setMapping(sender, text));
}

void PythonQtWrapper_QSignalMapper::setMapping(QSignalMapper* theWrappedObject, QObject*  sender, int  id)
{
  ( theWrappedObject->setMapping(sender, id));
}



bool  PythonQtShell_QSocketNotifier::event(QEvent*  arg__1)
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
  return QSocketNotifier::event(arg__1);
}
void PythonQtShell_QSocketNotifier::timerEvent(QTimerEvent*  arg__1)
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
  QSocketNotifier::timerEvent(arg__1);
}
void PythonQtShell_QSocketNotifier::childEvent(QChildEvent*  arg__1)
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
  QSocketNotifier::childEvent(arg__1);
}
void PythonQtShell_QSocketNotifier::customEvent(QEvent*  arg__1)
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
  QSocketNotifier::customEvent(arg__1);
}
bool  PythonQtShell_QSocketNotifier::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QSocketNotifier::eventFilter(arg__1, arg__2);
}
QSocketNotifier* PythonQtWrapper_QSocketNotifier::new_QSocketNotifier(int  socket, QSocketNotifier::Type  arg__2, QObject*  parent)
{ 
return new PythonQtShell_QSocketNotifier(socket, arg__2, parent); }

int  PythonQtWrapper_QSocketNotifier::socket(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->socket());
}

bool  PythonQtWrapper_QSocketNotifier::event(QSocketNotifier* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QSocketNotifier*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QSocketNotifier::isEnabled(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->isEnabled());
}

QSocketNotifier::Type  PythonQtWrapper_QSocketNotifier::type(QSocketNotifier* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher()
{ 
return new QStringMatcher(); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QString&  pattern, Qt::CaseSensitivity  cs)
{ 
return new QStringMatcher(pattern, cs); }

QStringMatcher* PythonQtWrapper_QStringMatcher::new_QStringMatcher(const QStringMatcher&  other)
{ 
return new QStringMatcher(other); }

void PythonQtWrapper_QStringMatcher::setPattern(QStringMatcher* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

int  PythonQtWrapper_QStringMatcher::indexIn(QStringMatcher* theWrappedObject, const QString&  str, int  from) const
{
  return ( theWrappedObject->indexIn(str, from));
}

QString  PythonQtWrapper_QStringMatcher::pattern(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

Qt::CaseSensitivity  PythonQtWrapper_QStringMatcher::caseSensitivity(QStringMatcher* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

void PythonQtWrapper_QStringMatcher::setCaseSensitivity(QStringMatcher* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}



QSystemSemaphore* PythonQtWrapper_QSystemSemaphore::new_QSystemSemaphore(const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{ 
return new QSystemSemaphore(key, initialValue, mode); }

QSystemSemaphore::SystemSemaphoreError  PythonQtWrapper_QSystemSemaphore::error(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QSystemSemaphore::errorString(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QSystemSemaphore::key(QSystemSemaphore* theWrappedObject) const
{
  return ( theWrappedObject->key());
}

bool  PythonQtWrapper_QSystemSemaphore::acquire(QSystemSemaphore* theWrappedObject)
{
  return ( theWrappedObject->acquire());
}

bool  PythonQtWrapper_QSystemSemaphore::release(QSystemSemaphore* theWrappedObject, int  n)
{
  return ( theWrappedObject->release(n));
}

void PythonQtWrapper_QSystemSemaphore::setKey(QSystemSemaphore* theWrappedObject, const QString&  key, int  initialValue, QSystemSemaphore::AccessMode  mode)
{
  ( theWrappedObject->setKey(key, initialValue, mode));
}



QAbstractFileEngine*  PythonQtShell_QTemporaryFile::fileEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fileEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QAbstractFileEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractFileEngine* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("fileEngine", methodInfo, result);
        } else {
          returnValue = *((QAbstractFileEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTemporaryFile::fileEngine();
}
bool  PythonQtShell_QTemporaryFile::open(QIODevice::OpenMode  flags)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&flags};
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
  return QTemporaryFile::open(flags);
}
void PythonQtShell_QTemporaryFile::close()
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
  QTemporaryFile::close();
}
qint64  PythonQtShell_QTemporaryFile::readData(char*  data, qint64  maxlen)
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
  return QTemporaryFile::readData(data, maxlen);
}
qint64  PythonQtShell_QTemporaryFile::readLineData(char*  data, qint64  maxlen)
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
  return QTemporaryFile::readLineData(data, maxlen);
}
bool  PythonQtShell_QTemporaryFile::atEnd() const
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
  return QTemporaryFile::atEnd();
}
bool  PythonQtShell_QTemporaryFile::isSequential() const
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
  return QTemporaryFile::isSequential();
}
bool  PythonQtShell_QTemporaryFile::seek(qint64  offset)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&offset};
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
  return QTemporaryFile::seek(offset);
}
qint64  PythonQtShell_QTemporaryFile::size() const
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
  return QTemporaryFile::size();
}
qint64  PythonQtShell_QTemporaryFile::pos() const
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
  return QTemporaryFile::pos();
}
qint64  PythonQtShell_QTemporaryFile::writeData(const char*  data, qint64  len)
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
  return QTemporaryFile::writeData(data, len);
}
bool  PythonQtShell_QTemporaryFile::reset()
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
  return QTemporaryFile::reset();
}
qint64  PythonQtShell_QTemporaryFile::bytesAvailable() const
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
  return QTemporaryFile::bytesAvailable();
}
qint64  PythonQtShell_QTemporaryFile::bytesToWrite() const
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
  return QTemporaryFile::bytesToWrite();
}
bool  PythonQtShell_QTemporaryFile::waitForBytesWritten(int  msecs)
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
  return QTemporaryFile::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QTemporaryFile::canReadLine() const
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
  return QTemporaryFile::canReadLine();
}
bool  PythonQtShell_QTemporaryFile::waitForReadyRead(int  msecs)
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
  return QTemporaryFile::waitForReadyRead(msecs);
}
void PythonQtShell_QTemporaryFile::timerEvent(QTimerEvent*  arg__1)
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
  QTemporaryFile::timerEvent(arg__1);
}
bool  PythonQtShell_QTemporaryFile::event(QEvent*  arg__1)
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
  return QTemporaryFile::event(arg__1);
}
void PythonQtShell_QTemporaryFile::childEvent(QChildEvent*  arg__1)
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
  QTemporaryFile::childEvent(arg__1);
}
void PythonQtShell_QTemporaryFile::customEvent(QEvent*  arg__1)
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
  QTemporaryFile::customEvent(arg__1);
}
bool  PythonQtShell_QTemporaryFile::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTemporaryFile::eventFilter(arg__1, arg__2);
}
QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile()
{ 
return new PythonQtShell_QTemporaryFile(); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(parent); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName)
{ 
return new PythonQtShell_QTemporaryFile(templateName); }

QTemporaryFile* PythonQtWrapper_QTemporaryFile::new_QTemporaryFile(const QString&  templateName, QObject*  parent)
{ 
return new PythonQtShell_QTemporaryFile(templateName, parent); }

QString  PythonQtWrapper_QTemporaryFile::fileTemplate(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileTemplate());
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(QFile&  file)
{
  return (QTemporaryFile::createLocalFile(file));
}

void PythonQtWrapper_QTemporaryFile::setFileTemplate(QTemporaryFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileTemplate(name));
}

void PythonQtWrapper_QTemporaryFile::setAutoRemove(QTemporaryFile* theWrappedObject, bool  b)
{
  ( theWrappedObject->setAutoRemove(b));
}

bool  PythonQtWrapper_QTemporaryFile::autoRemove(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->autoRemove());
}

QAbstractFileEngine*  PythonQtWrapper_QTemporaryFile::fileEngine(QTemporaryFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->promoted_fileEngine());
}

QString  PythonQtWrapper_QTemporaryFile::fileName(QTemporaryFile* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QTemporaryFile*  PythonQtWrapper_QTemporaryFile::static_QTemporaryFile_createLocalFile(const QString&  fileName)
{
  return (QTemporaryFile::createLocalFile(fileName));
}

bool  PythonQtWrapper_QTemporaryFile::open(QTemporaryFile* theWrappedObject, QIODevice::OpenMode  flags)
{
  return ( ((PythonQtPublicPromoter_QTemporaryFile*)theWrappedObject)->promoted_open(flags));
}

bool  PythonQtWrapper_QTemporaryFile::open(QTemporaryFile* theWrappedObject)
{
  return ( theWrappedObject->open());
}



QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder()
{ 
return new QTextBoundaryFinder(); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType  type, const QString&  string)
{ 
return new QTextBoundaryFinder(type, string); }

QTextBoundaryFinder* PythonQtWrapper_QTextBoundaryFinder::new_QTextBoundaryFinder(const QTextBoundaryFinder&  other)
{ 
return new QTextBoundaryFinder(other); }

int  PythonQtWrapper_QTextBoundaryFinder::toPreviousBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toPreviousBoundary());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isValid(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextBoundaryFinder::string(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->string());
}

bool  PythonQtWrapper_QTextBoundaryFinder::isAtBoundary(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->isAtBoundary());
}

QTextBoundaryFinder::BoundaryReasons  PythonQtWrapper_QTextBoundaryFinder::boundaryReasons(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->boundaryReasons());
}

int  PythonQtWrapper_QTextBoundaryFinder::toNextBoundary(QTextBoundaryFinder* theWrappedObject)
{
  return ( theWrappedObject->toNextBoundary());
}

int  PythonQtWrapper_QTextBoundaryFinder::position(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QTextBoundaryFinder::BoundaryType  PythonQtWrapper_QTextBoundaryFinder::type(QTextBoundaryFinder* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QTextBoundaryFinder::toEnd(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toEnd());
}

void PythonQtWrapper_QTextBoundaryFinder::toStart(QTextBoundaryFinder* theWrappedObject)
{
  ( theWrappedObject->toStart());
}

void PythonQtWrapper_QTextBoundaryFinder::setPosition(QTextBoundaryFinder* theWrappedObject, int  position)
{
  ( theWrappedObject->setPosition(position));
}



QList<QByteArray >  PythonQtShell_QTextCodec::aliases() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "aliases");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("aliases", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTextCodec::aliases();
}
QString  PythonQtShell_QTextCodec::convertToUnicode(const char*  in, int  length, QTextCodec::ConverterState*  state) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "convertToUnicode");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const char*" , "int" , "QTextCodec::ConverterState*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QString returnValue;
    void* args[4] = {NULL, (void*)&in, (void*)&length, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("convertToUnicode", methodInfo, result);
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
  QString result;
return result;
}
QByteArray  PythonQtShell_QTextCodec::name() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "name");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QByteArray returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QByteArray result;
return result;
}
int  PythonQtShell_QTextCodec::mibEnum() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mibEnum");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("mibEnum", methodInfo, result);
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
QByteArray  PythonQtShell_QTextCodec::convertFromUnicode(const QChar*  in, int  length, QTextCodec::ConverterState*  state) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "convertFromUnicode");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray" , "const QChar*" , "int" , "QTextCodec::ConverterState*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QByteArray returnValue;
    void* args[4] = {NULL, (void*)&in, (void*)&length, (void*)&state};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("convertFromUnicode", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QByteArray result;
return result;
}
bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, QChar  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

QList<QByteArray >  PythonQtWrapper_QTextCodec::aliases(QTextCodec* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextCodec*)theWrappedObject)->promoted_aliases());
}

QString  PythonQtWrapper_QTextCodec::toUnicode(QTextCodec* theWrappedObject, const QByteArray&  arg__1) const
{
  return ( theWrappedObject->toUnicode(arg__1));
}

QList<int >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableMibs()
{
  return (QTextCodec::availableMibs());
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForCStrings()
{
  return (QTextCodec::codecForCStrings());
}

QList<QByteArray >  PythonQtWrapper_QTextCodec::static_QTextCodec_availableCodecs()
{
  return (QTextCodec::availableCodecs());
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForLocale()
{
  return (QTextCodec::codecForLocale());
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForMib(int  mib)
{
  return (QTextCodec::codecForMib(mib));
}

QTextDecoder*  PythonQtWrapper_QTextCodec::makeDecoder(QTextCodec* theWrappedObject) const
{
  return ( theWrappedObject->makeDecoder());
}

QTextEncoder*  PythonQtWrapper_QTextCodec::makeEncoder(QTextCodec* theWrappedObject) const
{
  return ( theWrappedObject->makeEncoder());
}

QByteArray  PythonQtWrapper_QTextCodec::fromUnicode(QTextCodec* theWrappedObject, const QString&  uc) const
{
  return ( theWrappedObject->fromUnicode(uc));
}

bool  PythonQtWrapper_QTextCodec::canEncode(QTextCodec* theWrappedObject, const QString&  arg__1) const
{
  return ( theWrappedObject->canEncode(arg__1));
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForCStrings(QTextCodec*  c)
{
  (QTextCodec::setCodecForCStrings(c));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const QByteArray&  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForName(const char*  name)
{
  return (QTextCodec::codecForName(name));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba, QTextCodec*  defaultCodec)
{
  return (QTextCodec::codecForHtml(ba, defaultCodec));
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForTr(QTextCodec*  c)
{
  (QTextCodec::setCodecForTr(c));
}

void PythonQtWrapper_QTextCodec::static_QTextCodec_setCodecForLocale(QTextCodec*  c)
{
  (QTextCodec::setCodecForLocale(c));
}

QTextCodec*  PythonQtWrapper_QTextCodec::static_QTextCodec_codecForHtml(const QByteArray&  ba)
{
  return (QTextCodec::codecForHtml(ba));
}



void PythonQtShell_QTextCodecPlugin::timerEvent(QTimerEvent*  arg__1)
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
  QTextCodecPlugin::timerEvent(arg__1);
}
QList<QByteArray >  PythonQtShell_QTextCodecPlugin::names() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "names");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("names", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QList<QByteArray > result;
return result;
}
QList<int >  PythonQtShell_QTextCodecPlugin::mibEnums() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mibEnums");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<int >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<int > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mibEnums", methodInfo, result);
        } else {
          returnValue = *((QList<int >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QList<int > result;
return result;
}
QList<QByteArray >  PythonQtShell_QTextCodecPlugin::aliases() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "aliases");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("aliases", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QList<QByteArray > result;
return result;
}
QTextCodec*  PythonQtShell_QTextCodecPlugin::createForName(const QByteArray&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createForName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTextCodec*" , "const QByteArray&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextCodec* returnValue;
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createForName", methodInfo, result);
        } else {
          returnValue = *((QTextCodec**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QTextCodec* result;
return result;
}
QTextCodec*  PythonQtShell_QTextCodecPlugin::createForMib(int  mib)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createForMib");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTextCodec*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextCodec* returnValue;
    void* args[2] = {NULL, (void*)&mib};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createForMib", methodInfo, result);
        } else {
          returnValue = *((QTextCodec**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QTextCodec* result;
return result;
}
bool  PythonQtShell_QTextCodecPlugin::event(QEvent*  arg__1)
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
  return QTextCodecPlugin::event(arg__1);
}
void PythonQtShell_QTextCodecPlugin::childEvent(QChildEvent*  arg__1)
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
  QTextCodecPlugin::childEvent(arg__1);
}
void PythonQtShell_QTextCodecPlugin::customEvent(QEvent*  arg__1)
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
  QTextCodecPlugin::customEvent(arg__1);
}
bool  PythonQtShell_QTextCodecPlugin::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextCodecPlugin::eventFilter(arg__1, arg__2);
}
QTextCodecPlugin* PythonQtWrapper_QTextCodecPlugin::new_QTextCodecPlugin(QObject*  parent)
{ 
return new PythonQtShell_QTextCodecPlugin(parent); }



QTextDecoder* PythonQtWrapper_QTextDecoder::new_QTextDecoder(const QTextCodec*  codec)
{ 
return new QTextDecoder(codec); }

QString  PythonQtWrapper_QTextDecoder::toUnicode(QTextDecoder* theWrappedObject, const QByteArray&  ba)
{
  return ( theWrappedObject->toUnicode(ba));
}

bool  PythonQtWrapper_QTextDecoder::hasFailure(QTextDecoder* theWrappedObject) const
{
  return ( theWrappedObject->hasFailure());
}



QTextEncoder* PythonQtWrapper_QTextEncoder::new_QTextEncoder(const QTextCodec*  codec)
{ 
return new QTextEncoder(codec); }

QByteArray  PythonQtWrapper_QTextEncoder::fromUnicode(QTextEncoder* theWrappedObject, const QString&  str)
{
  return ( theWrappedObject->fromUnicode(str));
}



QTextStream* PythonQtWrapper_QTextStream::new_QTextStream()
{ 
return new PythonQtShell_QTextStream(); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(QIODevice*  device)
{ 
return new PythonQtShell_QTextStream(device); }

QTextStream* PythonQtWrapper_QTextStream::new_QTextStream(const QByteArray&  array, QIODevice::OpenMode  openMode)
{ 
return new PythonQtShell_QTextStream(array, openMode); }

QTextStream*  PythonQtWrapper_QTextStream::writeByte(QTextStream* theWrappedObject, char  ch)
{
  return &( (*theWrappedObject) <<ch);
}

void PythonQtWrapper_QTextStream::setIntegerBase(QTextStream* theWrappedObject, int  base)
{
  ( theWrappedObject->setIntegerBase(base));
}

void PythonQtWrapper_QTextStream::setGenerateByteOrderMark(QTextStream* theWrappedObject, bool  generate)
{
  ( theWrappedObject->setGenerateByteOrderMark(generate));
}

int  PythonQtWrapper_QTextStream::integerBase(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->integerBase());
}

QString  PythonQtWrapper_QTextStream::readLine(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

int  PythonQtWrapper_QTextStream::fieldWidth(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldWidth());
}

QIODevice*  PythonQtWrapper_QTextStream::device(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

int  PythonQtWrapper_QTextStream::realNumberPrecision(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberPrecision());
}

QTextStream::FieldAlignment  PythonQtWrapper_QTextStream::fieldAlignment(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->fieldAlignment());
}

void PythonQtWrapper_QTextStream::skipWhiteSpace(QTextStream* theWrappedObject)
{
  ( theWrappedObject->skipWhiteSpace());
}

void PythonQtWrapper_QTextStream::setNumberFlags(QTextStream* theWrappedObject, QTextStream::NumberFlags  flags)
{
  ( theWrappedObject->setNumberFlags(flags));
}

bool  PythonQtWrapper_QTextStream::autoDetectUnicode(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->autoDetectUnicode());
}

bool  PythonQtWrapper_QTextStream::seek(QTextStream* theWrappedObject, qint64  pos)
{
  return ( theWrappedObject->seek(pos));
}

void PythonQtWrapper_QTextStream::reset(QTextStream* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QString  PythonQtWrapper_QTextStream::read(QTextStream* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

QTextStream::Status  PythonQtWrapper_QTextStream::status(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

qint64  PythonQtWrapper_QTextStream::pos(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->pos());
}

QTextStream::RealNumberNotation  PythonQtWrapper_QTextStream::realNumberNotation(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->realNumberNotation());
}

void PythonQtWrapper_QTextStream::setCodec(QTextStream* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QTextStream::flush(QTextStream* theWrappedObject)
{
  ( theWrappedObject->flush());
}

QTextCodec*  PythonQtWrapper_QTextStream::codec(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

void PythonQtWrapper_QTextStream::setPadChar(QTextStream* theWrappedObject, QChar  ch)
{
  ( theWrappedObject->setPadChar(ch));
}

QString  PythonQtWrapper_QTextStream::readAll(QTextStream* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

QTextStream::NumberFlags  PythonQtWrapper_QTextStream::numberFlags(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->numberFlags());
}

QTextStream*  PythonQtWrapper_QTextStream::readShort(QTextStream* theWrappedObject, signed short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readLongLong(QTextStream* theWrappedObject, qlonglong&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readUShort(QTextStream* theWrappedObject, unsigned short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeDouble(QTextStream* theWrappedObject, double  f)
{
  return &( (*theWrappedObject) <<f);
}

QChar  PythonQtWrapper_QTextStream::padChar(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->padChar());
}

void PythonQtWrapper_QTextStream::setFieldWidth(QTextStream* theWrappedObject, int  width)
{
  ( theWrappedObject->setFieldWidth(width));
}

void PythonQtWrapper_QTextStream::resetStatus(QTextStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

void PythonQtWrapper_QTextStream::setDevice(QTextStream* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

QTextStream*  PythonQtWrapper_QTextStream::writeString(QTextStream* theWrappedObject, const QString&  s)
{
  return &( (*theWrappedObject) <<s);
}

QTextStream*  PythonQtWrapper_QTextStream::writeByteArray(QTextStream* theWrappedObject, const QByteArray&  array)
{
  return &( (*theWrappedObject) <<array);
}

QTextStream*  PythonQtWrapper_QTextStream::writeFloat(QTextStream* theWrappedObject, float  f)
{
  return &( (*theWrappedObject) <<f);
}

QTextStream*  PythonQtWrapper_QTextStream::writeInt(QTextStream* theWrappedObject, signed int  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::writeShort(QTextStream* theWrappedObject, signed short  i)
{
  return &( (*theWrappedObject) <<i);
}

QTextStream*  PythonQtWrapper_QTextStream::readByte(QTextStream* theWrappedObject, char&  ch)
{
  return &( (*theWrappedObject) >>ch);
}

QTextStream*  PythonQtWrapper_QTextStream::writeBoolean(QTextStream* theWrappedObject, QBool  b)
{
  return &( (*theWrappedObject) <<b);
}

QTextStream*  PythonQtWrapper_QTextStream::readDouble(QTextStream* theWrappedObject, double&  f)
{
  return &( (*theWrappedObject) >>f);
}

QTextStream*  PythonQtWrapper_QTextStream::readFloat(QTextStream* theWrappedObject, float&  f)
{
  return &( (*theWrappedObject) >>f);
}

bool  PythonQtWrapper_QTextStream::atEnd(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

void PythonQtWrapper_QTextStream::setRealNumberNotation(QTextStream* theWrappedObject, QTextStream::RealNumberNotation  notation)
{
  ( theWrappedObject->setRealNumberNotation(notation));
}

QTextStream*  PythonQtWrapper_QTextStream::readInt(QTextStream* theWrappedObject, signed int&  i)
{
  return &( (*theWrappedObject) >>i);
}

QTextStream*  PythonQtWrapper_QTextStream::readUInt(QTextStream* theWrappedObject, unsigned int&  i)
{
  return &( (*theWrappedObject) >>i);
}

void PythonQtWrapper_QTextStream::setAutoDetectUnicode(QTextStream* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setAutoDetectUnicode(enabled));
}

void PythonQtWrapper_QTextStream::setRealNumberPrecision(QTextStream* theWrappedObject, int  precision)
{
  ( theWrappedObject->setRealNumberPrecision(precision));
}

void PythonQtWrapper_QTextStream::setFieldAlignment(QTextStream* theWrappedObject, QTextStream::FieldAlignment  alignment)
{
  ( theWrappedObject->setFieldAlignment(alignment));
}

void PythonQtWrapper_QTextStream::setStatus(QTextStream* theWrappedObject, QTextStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

bool  PythonQtWrapper_QTextStream::generateByteOrderMark(QTextStream* theWrappedObject) const
{
  return ( theWrappedObject->generateByteOrderMark());
}



void PythonQtShell_QThreadPool::timerEvent(QTimerEvent*  arg__1)
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
  QThreadPool::timerEvent(arg__1);
}
bool  PythonQtShell_QThreadPool::event(QEvent*  arg__1)
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
  return QThreadPool::event(arg__1);
}
void PythonQtShell_QThreadPool::childEvent(QChildEvent*  arg__1)
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
  QThreadPool::childEvent(arg__1);
}
void PythonQtShell_QThreadPool::customEvent(QEvent*  arg__1)
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
  QThreadPool::customEvent(arg__1);
}
bool  PythonQtShell_QThreadPool::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QThreadPool::eventFilter(arg__1, arg__2);
}
QThreadPool* PythonQtWrapper_QThreadPool::new_QThreadPool(QObject*  parent)
{ 
return new PythonQtShell_QThreadPool(parent); }

void PythonQtWrapper_QThreadPool::waitForDone(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->waitForDone());
}

void PythonQtWrapper_QThreadPool::setMaxThreadCount(QThreadPool* theWrappedObject, int  maxThreadCount)
{
  ( theWrappedObject->setMaxThreadCount(maxThreadCount));
}

QThreadPool*  PythonQtWrapper_QThreadPool::static_QThreadPool_globalInstance()
{
  return (QThreadPool::globalInstance());
}

bool  PythonQtWrapper_QThreadPool::tryStart(QThreadPool* theWrappedObject, QRunnable*  runnable)
{
  return ( theWrappedObject->tryStart(runnable));
}

int  PythonQtWrapper_QThreadPool::activeThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->activeThreadCount());
}

void PythonQtWrapper_QThreadPool::releaseThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->releaseThread());
}

int  PythonQtWrapper_QThreadPool::maxThreadCount(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->maxThreadCount());
}

void PythonQtWrapper_QThreadPool::start(QThreadPool* theWrappedObject, QRunnable*  runnable, int  priority)
{
  ( theWrappedObject->start(runnable, priority));
}

void PythonQtWrapper_QThreadPool::reserveThread(QThreadPool* theWrappedObject)
{
  ( theWrappedObject->reserveThread());
}

void PythonQtWrapper_QThreadPool::setExpiryTimeout(QThreadPool* theWrappedObject, int  expiryTimeout)
{
  ( theWrappedObject->setExpiryTimeout(expiryTimeout));
}

int  PythonQtWrapper_QThreadPool::expiryTimeout(QThreadPool* theWrappedObject) const
{
  return ( theWrappedObject->expiryTimeout());
}



void PythonQtShell_QTimeLine::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTimeLine::timerEvent(event);
}
qreal  PythonQtShell_QTimeLine::valueForTime(int  msec) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "valueForTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"qreal" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      qreal returnValue;
    void* args[2] = {NULL, (void*)&msec};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("valueForTime", methodInfo, result);
        } else {
          returnValue = *((qreal*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QTimeLine::valueForTime(msec);
}
bool  PythonQtShell_QTimeLine::event(QEvent*  arg__1)
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
  return QTimeLine::event(arg__1);
}
void PythonQtShell_QTimeLine::childEvent(QChildEvent*  arg__1)
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
  QTimeLine::childEvent(arg__1);
}
void PythonQtShell_QTimeLine::customEvent(QEvent*  arg__1)
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
  QTimeLine::customEvent(arg__1);
}
bool  PythonQtShell_QTimeLine::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimeLine::eventFilter(arg__1, arg__2);
}
QTimeLine* PythonQtWrapper_QTimeLine::new_QTimeLine(int  duration, QObject*  parent)
{ 
return new PythonQtShell_QTimeLine(duration, parent); }

int  PythonQtWrapper_QTimeLine::loopCount(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QTimeLine::frameForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( theWrappedObject->frameForTime(msec));
}

void PythonQtWrapper_QTimeLine::setDirection(QTimeLine* theWrappedObject, QTimeLine::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

QTimeLine::CurveShape  PythonQtWrapper_QTimeLine::curveShape(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->curveShape());
}

void PythonQtWrapper_QTimeLine::setDuration(QTimeLine* theWrappedObject, int  duration)
{
  ( theWrappedObject->setDuration(duration));
}

int  PythonQtWrapper_QTimeLine::duration(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

void PythonQtWrapper_QTimeLine::timerEvent(QTimeLine* theWrappedObject, QTimerEvent*  event)
{
  ( ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_timerEvent(event));
}

void PythonQtWrapper_QTimeLine::setLoopCount(QTimeLine* theWrappedObject, int  count)
{
  ( theWrappedObject->setLoopCount(count));
}

int  PythonQtWrapper_QTimeLine::endFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->endFrame());
}

void PythonQtWrapper_QTimeLine::setFrameRange(QTimeLine* theWrappedObject, int  startFrame, int  endFrame)
{
  ( theWrappedObject->setFrameRange(startFrame, endFrame));
}

qreal  PythonQtWrapper_QTimeLine::valueForTime(QTimeLine* theWrappedObject, int  msec) const
{
  return ( ((PythonQtPublicPromoter_QTimeLine*)theWrappedObject)->promoted_valueForTime(msec));
}

void PythonQtWrapper_QTimeLine::setCurveShape(QTimeLine* theWrappedObject, QTimeLine::CurveShape  shape)
{
  ( theWrappedObject->setCurveShape(shape));
}

qreal  PythonQtWrapper_QTimeLine::currentValue(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QTimeLine::State  PythonQtWrapper_QTimeLine::state(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

void PythonQtWrapper_QTimeLine::setStartFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setStartFrame(frame));
}

int  PythonQtWrapper_QTimeLine::updateInterval(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->updateInterval());
}

void PythonQtWrapper_QTimeLine::setUpdateInterval(QTimeLine* theWrappedObject, int  interval)
{
  ( theWrappedObject->setUpdateInterval(interval));
}

int  PythonQtWrapper_QTimeLine::currentTime(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

void PythonQtWrapper_QTimeLine::setEndFrame(QTimeLine* theWrappedObject, int  frame)
{
  ( theWrappedObject->setEndFrame(frame));
}

int  PythonQtWrapper_QTimeLine::currentFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

QTimeLine::Direction  PythonQtWrapper_QTimeLine::direction(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QTimeLine::startFrame(QTimeLine* theWrappedObject) const
{
  return ( theWrappedObject->startFrame());
}



void PythonQtShell_QTimer::timerEvent(QTimerEvent*  arg__1)
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
  QTimer::timerEvent(arg__1);
}
bool  PythonQtShell_QTimer::event(QEvent*  arg__1)
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
  return QTimer::event(arg__1);
}
void PythonQtShell_QTimer::childEvent(QChildEvent*  arg__1)
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
  QTimer::childEvent(arg__1);
}
void PythonQtShell_QTimer::customEvent(QEvent*  arg__1)
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
  QTimer::customEvent(arg__1);
}
bool  PythonQtShell_QTimer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTimer::eventFilter(arg__1, arg__2);
}
QTimer* PythonQtWrapper_QTimer::new_QTimer(QObject*  parent)
{ 
return new PythonQtShell_QTimer(parent); }

int  PythonQtWrapper_QTimer::timerId(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

void PythonQtWrapper_QTimer::setSingleShot(QTimer* theWrappedObject, bool  singleShot)
{
  ( theWrappedObject->setSingleShot(singleShot));
}

bool  PythonQtWrapper_QTimer::isActive(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QTimer::isSingleShot(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isSingleShot());
}

void PythonQtWrapper_QTimer::setInterval(QTimer* theWrappedObject, int  msec)
{
  ( theWrappedObject->setInterval(msec));
}

void PythonQtWrapper_QTimer::timerEvent(QTimer* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTimer*)theWrappedObject)->promoted_timerEvent(arg__1));
}

int  PythonQtWrapper_QTimer::interval(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->interval());
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, receiver, member));
}



QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new PythonQtShell_QTimerEvent(timerId); }

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



bool  PythonQtShell_QTranslator::isEmpty() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "isEmpty");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QTranslator::isEmpty();
}
QString  PythonQtShell_QTranslator::translate(const char*  context, const char*  sourceText, const char*  comment) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "translate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const char*" , "const char*" , "const char*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QString returnValue;
    void* args[4] = {NULL, (void*)&context, (void*)&sourceText, (void*)&comment};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("translate", methodInfo, result);
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
  return QTranslator::translate(context, sourceText, comment);
}
bool  PythonQtShell_QTranslator::event(QEvent*  arg__1)
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
  return QTranslator::event(arg__1);
}
void PythonQtShell_QTranslator::timerEvent(QTimerEvent*  arg__1)
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
  QTranslator::timerEvent(arg__1);
}
void PythonQtShell_QTranslator::childEvent(QChildEvent*  arg__1)
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
  QTranslator::childEvent(arg__1);
}
void PythonQtShell_QTranslator::customEvent(QEvent*  arg__1)
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
  QTranslator::customEvent(arg__1);
}
bool  PythonQtShell_QTranslator::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTranslator::eventFilter(arg__1, arg__2);
}
QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new PythonQtShell_QTranslator(parent); }

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->promoted_isEmpty());
}

QString  PythonQtWrapper_QTranslator::translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  comment) const
{
  return ( ((PythonQtPublicPromoter_QTranslator*)theWrappedObject)->promoted_translate(context, sourceText, comment));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
  return ( theWrappedObject->load(filename, directory, search_delimiters, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len)
{
  return ( theWrappedObject->load(data, len));
}



QUuid* PythonQtWrapper_QUuid::new_QUuid()
{ 
return new PythonQtShell_QUuid(); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(const QString&  arg__1)
{ 
return new PythonQtShell_QUuid(arg__1); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(uint  l, ushort  w1, ushort  w2, uchar  b1, uchar  b2, uchar  b3, uchar  b4, uchar  b5, uchar  b6, uchar  b7, uchar  b8)
{ 
return new PythonQtShell_QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8); }

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuid()
{
  return (QUuid::createUuid());
}

QUuid::Version  PythonQtWrapper_QUuid::version(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

bool  PythonQtWrapper_QUuid::operator_less(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)< other);
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

bool  PythonQtWrapper_QUuid::operator_equal(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)== orig);
}

QUuid::Variant  PythonQtWrapper_QUuid::variant(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->variant());
}

bool  PythonQtWrapper_QUuid::isNull(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QUuid::writeTo(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUuid::readFrom(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QWaitCondition* PythonQtWrapper_QWaitCondition::new_QWaitCondition()
{ 
return new QWaitCondition(); }

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  readWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(readWriteLock, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  mutex, unsigned long  time)
{
  return ( theWrappedObject->wait(mutex, time));
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute()
{ 
return new QXmlStreamAttribute(); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value)
{ 
return new QXmlStreamAttribute(namespaceUri, name, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value)
{ 
return new QXmlStreamAttribute(qualifiedName, value); }

QXmlStreamAttribute* PythonQtWrapper_QXmlStreamAttribute::new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1)
{ 
return new QXmlStreamAttribute(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamAttribute::prefix(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::qualifiedName(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

bool  PythonQtWrapper_QXmlStreamAttribute::isDefault(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->isDefault());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::namespaceUri(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::value(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

bool  PythonQtWrapper_QXmlStreamAttribute::operator_equal(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamAttribute::name(QXmlStreamAttribute* theWrappedObject) const
{
  return ( theWrappedObject->name());
}



QXmlStreamAttributes* PythonQtWrapper_QXmlStreamAttributes::new_QXmlStreamAttributes()
{ 
return new PythonQtShell_QXmlStreamAttributes(); }

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const
{
  return ( theWrappedObject->value(namespaceUri, name));
}

QStringRef  PythonQtWrapper_QXmlStreamAttributes::value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const
{
  return ( theWrappedObject->value(qualifiedName));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->append(attribute));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->append(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamAttributes::append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->append(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamAttributes::resize(QXmlStreamAttributes* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

void PythonQtWrapper_QXmlStreamAttributes::prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t)
{
  ( theWrappedObject->prepend(t));
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  length) const
{
  return ( theWrappedObject->mid(pos, length));
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::last(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->last());
}

QVector<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list)
{
  return (QXmlStreamAttributes::fromList(list));
}

bool  PythonQtWrapper_QXmlStreamAttributes::contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->contains(t));
}

void PythonQtWrapper_QXmlStreamAttributes::clear(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QXmlStreamAttributes::empty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::at(QXmlStreamAttributes* theWrappedObject, int  i) const
{
  return &( theWrappedObject->at(i));
}

int  PythonQtWrapper_QXmlStreamAttributes::lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
  return ( theWrappedObject->lastIndexOf(t, from));
}

int  PythonQtWrapper_QXmlStreamAttributes::capacity(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const
{
  return ( theWrappedObject->count(t));
}

int  PythonQtWrapper_QXmlStreamAttributes::count(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QVector<QXmlStreamAttribute >*  PythonQtWrapper_QXmlStreamAttributes::fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size)
{
  return &( theWrappedObject->fill(t, size));
}

const QXmlStreamAttribute*  PythonQtWrapper_QXmlStreamAttributes::first(QXmlStreamAttributes* theWrappedObject) const
{
  return &( theWrappedObject->first());
}

int  PythonQtWrapper_QXmlStreamAttributes::indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from) const
{
  return ( theWrappedObject->indexOf(t, from));
}

bool  PythonQtWrapper_QXmlStreamAttributes::isEmpty(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QXmlStreamAttributes::operator_equal(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const
{
  return ( (*theWrappedObject)== v);
}

void PythonQtWrapper_QXmlStreamAttributes::setSharable(QXmlStreamAttributes* theWrappedObject, bool  sharable)
{
  ( theWrappedObject->setSharable(sharable));
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i)
{
  ( theWrappedObject->remove(i));
}

void PythonQtWrapper_QXmlStreamAttributes::remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n)
{
  ( theWrappedObject->remove(i, n));
}

void PythonQtWrapper_QXmlStreamAttributes::replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t)
{
  ( theWrappedObject->replace(i, t));
}

void PythonQtWrapper_QXmlStreamAttributes::reserve(QXmlStreamAttributes* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

QList<QXmlStreamAttribute >  PythonQtWrapper_QXmlStreamAttributes::toList(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->toList());
}

void PythonQtWrapper_QXmlStreamAttributes::squeeze(QXmlStreamAttributes* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

int  PythonQtWrapper_QXmlStreamAttributes::size(QXmlStreamAttributes* theWrappedObject) const
{
  return ( theWrappedObject->size());
}



QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration()
{ 
return new QXmlStreamEntityDeclaration(); }

QXmlStreamEntityDeclaration* PythonQtWrapper_QXmlStreamEntityDeclaration::new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1)
{ 
return new QXmlStreamEntityDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::publicId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::notationName(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->notationName());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::value(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->value());
}

bool  PythonQtWrapper_QXmlStreamEntityDeclaration::operator_equal(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::name(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamEntityDeclaration::systemId(QXmlStreamEntityDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId, const QString&  systemId)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resolveEntity");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue;
    void* args[3] = {NULL, (void*)&publicId, (void*)&systemId};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveEntity(publicId, systemId);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resolveUndeclaredEntity");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( ((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->promoted_resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( ((PythonQtPublicPromoter_QXmlStreamEntityResolver*)theWrappedObject)->promoted_resolveUndeclaredEntity(name));
}



QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration()
{ 
return new QXmlStreamNamespaceDeclaration(); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri)
{ 
return new QXmlStreamNamespaceDeclaration(prefix, namespaceUri); }

QXmlStreamNamespaceDeclaration* PythonQtWrapper_QXmlStreamNamespaceDeclaration::new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1)
{ 
return new QXmlStreamNamespaceDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

QStringRef  PythonQtWrapper_QXmlStreamNamespaceDeclaration::namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

bool  PythonQtWrapper_QXmlStreamNamespaceDeclaration::operator_equal(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}



QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration()
{ 
return new QXmlStreamNotationDeclaration(); }

QXmlStreamNotationDeclaration* PythonQtWrapper_QXmlStreamNotationDeclaration::new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1)
{ 
return new QXmlStreamNotationDeclaration(arg__1); }

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::publicId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->publicId());
}

bool  PythonQtWrapper_QXmlStreamNotationDeclaration::operator_equal(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const
{
  return ( (*theWrappedObject)== other);
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::name(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QStringRef  PythonQtWrapper_QXmlStreamNotationDeclaration::systemId(QXmlStreamNotationDeclaration* theWrappedObject) const
{
  return ( theWrappedObject->systemId());
}



QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader()
{ 
return new QXmlStreamReader(); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(QIODevice*  device)
{ 
return new QXmlStreamReader(device); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QByteArray&  data)
{ 
return new QXmlStreamReader(data); }

QXmlStreamReader* PythonQtWrapper_QXmlStreamReader::new_QXmlStreamReader(const QString&  data)
{ 
return new QXmlStreamReader(data); }

QXmlStreamReader::Error  PythonQtWrapper_QXmlStreamReader::error(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

qint64  PythonQtWrapper_QXmlStreamReader::characterOffset(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->characterOffset());
}

void PythonQtWrapper_QXmlStreamReader::setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setNamespaceProcessing(arg__1));
}

bool  PythonQtWrapper_QXmlStreamReader::isCDATA(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCDATA());
}

qint64  PythonQtWrapper_QXmlStreamReader::lineNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

void PythonQtWrapper_QXmlStreamReader::setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver)
{
  ( theWrappedObject->setEntityResolver(resolver));
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions)
{
  ( theWrappedObject->addExtraNamespaceDeclarations(extraNamespaceDeclaractions));
}

bool  PythonQtWrapper_QXmlStreamReader::hasError(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

QIODevice*  PythonQtWrapper_QXmlStreamReader::device(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QXmlStreamReader::clear(QXmlStreamReader* theWrappedObject)
{
  ( theWrappedObject->clear());
}

qint64  PythonQtWrapper_QXmlStreamReader::columnNumber(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

bool  PythonQtWrapper_QXmlStreamReader::isDTD(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isDTD());
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::readNext(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readNext());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::namespaceUri(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceUri());
}

QVector<QXmlStreamNamespaceDeclaration >  PythonQtWrapper_QXmlStreamReader::namespaceDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceDeclarations());
}

bool  PythonQtWrapper_QXmlStreamReader::isStandaloneDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStandaloneDocument());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdName());
}

bool  PythonQtWrapper_QXmlStreamReader::isComment(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isComment());
}

QString  PythonQtWrapper_QXmlStreamReader::tokenString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenString());
}

QString  PythonQtWrapper_QXmlStreamReader::readElementText(QXmlStreamReader* theWrappedObject)
{
  return ( theWrappedObject->readElementText());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdPublicId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdPublicId());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionData(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionData());
}

bool  PythonQtWrapper_QXmlStreamReader::isEndDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndDocument());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::processingInstructionTarget(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->processingInstructionTarget());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::qualifiedName(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->qualifiedName());
}

bool  PythonQtWrapper_QXmlStreamReader::atEnd(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QString  PythonQtWrapper_QXmlStreamReader::errorString(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QXmlStreamEntityResolver*  PythonQtWrapper_QXmlStreamReader::entityResolver(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityResolver());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartDocument(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartDocument());
}

QVector<QXmlStreamEntityDeclaration >  PythonQtWrapper_QXmlStreamReader::entityDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->entityDeclarations());
}

bool  PythonQtWrapper_QXmlStreamReader::isEntityReference(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEntityReference());
}

QXmlStreamReader::TokenType  PythonQtWrapper_QXmlStreamReader::tokenType(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->tokenType());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentVersion(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentVersion());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::prefix(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->prefix());
}

bool  PythonQtWrapper_QXmlStreamReader::isProcessingInstruction(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isProcessingInstruction());
}

void PythonQtWrapper_QXmlStreamReader::addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction)
{
  ( theWrappedObject->addExtraNamespaceDeclaration(extraNamespaceDeclaraction));
}

bool  PythonQtWrapper_QXmlStreamReader::isWhitespace(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isWhitespace());
}

bool  PythonQtWrapper_QXmlStreamReader::isStartElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isStartElement());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::documentEncoding(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->documentEncoding());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::dtdSystemId(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->dtdSystemId());
}

void PythonQtWrapper_QXmlStreamReader::raiseError(QXmlStreamReader* theWrappedObject, const QString&  message)
{
  ( theWrappedObject->raiseError(message));
}

bool  PythonQtWrapper_QXmlStreamReader::namespaceProcessing(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->namespaceProcessing());
}

bool  PythonQtWrapper_QXmlStreamReader::isCharacters(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isCharacters());
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QXmlStreamReader::setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

QStringRef  PythonQtWrapper_QXmlStreamReader::text(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

void PythonQtWrapper_QXmlStreamReader::addData(QXmlStreamReader* theWrappedObject, const QString&  data)
{
  ( theWrappedObject->addData(data));
}

bool  PythonQtWrapper_QXmlStreamReader::isEndElement(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isEndElement());
}

QXmlStreamAttributes  PythonQtWrapper_QXmlStreamReader::attributes(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->attributes());
}

QStringRef  PythonQtWrapper_QXmlStreamReader::name(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QVector<QXmlStreamNotationDeclaration >  PythonQtWrapper_QXmlStreamReader::notationDeclarations(QXmlStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->notationDeclarations());
}



QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter()
{ 
return new QXmlStreamWriter(); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QByteArray*  array)
{ 
return new QXmlStreamWriter(array); }

QXmlStreamWriter* PythonQtWrapper_QXmlStreamWriter::new_QXmlStreamWriter(QIODevice*  device)
{ 
return new QXmlStreamWriter(device); }

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute)
{
  ( theWrappedObject->writeAttribute(attribute));
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, const char*  codecName)
{
  ( theWrappedObject->setCodec(codecName));
}

int  PythonQtWrapper_QXmlStreamWriter::autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormattingIndent());
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version)
{
  ( theWrappedObject->writeStartDocument(version));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeStartDocument());
}

void PythonQtWrapper_QXmlStreamWriter::setCodec(QXmlStreamWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

QIODevice*  PythonQtWrapper_QXmlStreamWriter::device(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

void PythonQtWrapper_QXmlStreamWriter::writeEndDocument(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndDocument());
}

void PythonQtWrapper_QXmlStreamWriter::writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->writeEntityReference(name));
}

void PythonQtWrapper_QXmlStreamWriter::writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri)
{
  ( theWrappedObject->writeDefaultNamespace(namespaceUri));
}

QTextCodec*  PythonQtWrapper_QXmlStreamWriter::codec(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

void PythonQtWrapper_QXmlStreamWriter::writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeComment(text));
}

bool  PythonQtWrapper_QXmlStreamWriter::autoFormatting(QXmlStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value)
{
  ( theWrappedObject->writeAttribute(qualifiedName, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value)
{
  ( theWrappedObject->writeAttribute(namespaceUri, name, value));
}

void PythonQtWrapper_QXmlStreamWriter::writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd)
{
  ( theWrappedObject->writeDTD(dtd));
}

void PythonQtWrapper_QXmlStreamWriter::writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCDATA(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text)
{
  ( theWrappedObject->writeTextElement(namespaceUri, name, text));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spaces)
{
  ( theWrappedObject->setAutoFormattingIndent(spaces));
}

void PythonQtWrapper_QXmlStreamWriter::writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text)
{
  ( theWrappedObject->writeTextElement(qualifiedName, text));
}

void PythonQtWrapper_QXmlStreamWriter::writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix)
{
  ( theWrappedObject->writeNamespace(namespaceUri, prefix));
}

void PythonQtWrapper_QXmlStreamWriter::setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1)
{
  ( theWrappedObject->setAutoFormatting(arg__1));
}

void PythonQtWrapper_QXmlStreamWriter::writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes)
{
  ( theWrappedObject->writeAttributes(attributes));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeStartElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeStartElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->writeCharacters(text));
}

void PythonQtWrapper_QXmlStreamWriter::writeEndElement(QXmlStreamWriter* theWrappedObject)
{
  ( theWrappedObject->writeEndElement());
}

void PythonQtWrapper_QXmlStreamWriter::writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data)
{
  ( theWrappedObject->writeProcessingInstruction(target, data));
}

void PythonQtWrapper_QXmlStreamWriter::writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader)
{
  ( theWrappedObject->writeCurrentToken(reader));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name)
{
  ( theWrappedObject->writeEmptyElement(namespaceUri, name));
}

void PythonQtWrapper_QXmlStreamWriter::writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName)
{
  ( theWrappedObject->writeEmptyElement(qualifiedName));
}

void PythonQtWrapper_QXmlStreamWriter::setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}




