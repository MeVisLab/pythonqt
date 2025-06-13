#include "com_trolltech_qt_core4.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcborcommon.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdeadlinetimer.h>
#include <qeasingcurve.h>
#include <qlist.h>
#include <qlocale.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qreadwritelock.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qurl.h>
#include <qurlquery.h>
#include <quuid.h>
#include <qvector.h>

PythonQtShell_QTimer::~PythonQtShell_QTimer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTimer::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::childEvent(event0);
}
void PythonQtShell_QTimer::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::customEvent(event0);
}
bool  PythonQtShell_QTimer::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QTimer::event(event0);
}
bool  PythonQtShell_QTimer::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QTimer::eventFilter(watched0, event1);
}
void PythonQtShell_QTimer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTimer::timerEvent(arg__1);
}
QTimer* PythonQtWrapper_QTimer::new_QTimer(QObject*  parent)
{ 
return new PythonQtShell_QTimer(parent); }

const QMetaObject* PythonQtShell_QTimer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTimer::staticMetaObject);
  } else {
    return &QTimer::staticMetaObject;
  }
}
int PythonQtShell_QTimer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTimer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QTimer::interval(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->interval());
}

bool  PythonQtWrapper_QTimer::isActive(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

bool  PythonQtWrapper_QTimer::isSingleShot(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->isSingleShot());
}

int  PythonQtWrapper_QTimer::remainingTime(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->remainingTime());
}

void PythonQtWrapper_QTimer::setInterval(QTimer* theWrappedObject, int  msec)
{
  ( theWrappedObject->setInterval(msec));
}

void PythonQtWrapper_QTimer::setSingleShot(QTimer* theWrappedObject, bool  singleShot)
{
  ( theWrappedObject->setSingleShot(singleShot));
}

void PythonQtWrapper_QTimer::setTimerType(QTimer* theWrappedObject, Qt::TimerType  atype)
{
  ( theWrappedObject->setTimerType(atype));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, Qt::TimerType  timerType, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, timerType, receiver, member));
}

void PythonQtWrapper_QTimer::static_QTimer_singleShot(int  msec, const QObject*  receiver, const char*  member)
{
  (QTimer::singleShot(msec, receiver, member));
}

int  PythonQtWrapper_QTimer::timerId(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

Qt::TimerType  PythonQtWrapper_QTimer::timerType(QTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerType());
}



PythonQtShell_QTimerEvent::~PythonQtShell_QTimerEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QTimerEvent* PythonQtWrapper_QTimerEvent::new_QTimerEvent(int  timerId)
{ 
return new PythonQtShell_QTimerEvent(timerId); }

int  PythonQtWrapper_QTimerEvent::timerId(QTimerEvent* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



PythonQtShell_QTranslator::~PythonQtShell_QTranslator() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QTranslator::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::childEvent(event0);
}
void PythonQtShell_QTranslator::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::customEvent(event0);
}
bool  PythonQtShell_QTranslator::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QTranslator::event(event0);
}
bool  PythonQtShell_QTranslator::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QTranslator::eventFilter(watched0, event1);
}
bool  PythonQtShell_QTranslator::isEmpty() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("isEmpty");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isEmpty", methodInfo, result);
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
  return QTranslator::isEmpty();
}
void PythonQtShell_QTranslator::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QTranslator::timerEvent(event0);
}
QString  PythonQtShell_QTranslator::translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, int  n3) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("translate");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const char*" , "const char*" , "const char*" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      QString returnValue{};
      void* args[5] = {nullptr, (void*)&context0, (void*)&sourceText1, (void*)&disambiguation2, (void*)&n3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("translate", methodInfo, result);
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
  return QTranslator::translate(context0, sourceText1, disambiguation2, n3);
}
QTranslator* PythonQtWrapper_QTranslator::new_QTranslator(QObject*  parent)
{ 
return new PythonQtShell_QTranslator(parent); }

const QMetaObject* PythonQtShell_QTranslator::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QTranslator::staticMetaObject);
  } else {
    return &QTranslator::staticMetaObject;
  }
}
int PythonQtShell_QTranslator::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QTranslator::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QString  PythonQtWrapper_QTranslator::filePath(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QTranslator::isEmpty(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTranslator::language(QTranslator* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QLocale&  locale, const QString&  filename, const QString&  prefix, const QString&  directory, const QString&  suffix)
{
  return ( theWrappedObject->load(locale, filename, prefix, directory, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const QString&  filename, const QString&  directory, const QString&  search_delimiters, const QString&  suffix)
{
  return ( theWrappedObject->load(filename, directory, search_delimiters, suffix));
}

bool  PythonQtWrapper_QTranslator::load(QTranslator* theWrappedObject, const uchar*  data, int  len, const QString&  directory)
{
  return ( theWrappedObject->load(data, len, directory));
}

QString  PythonQtWrapper_QTranslator::translate(QTranslator* theWrappedObject, const char*  context, const char*  sourceText, const char*  disambiguation, int  n) const
{
  return ( theWrappedObject->translate(context, sourceText, disambiguation, n));
}



QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery()
{ 
return new QUrlQuery(); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QString&  queryString)
{ 
return new QUrlQuery(queryString); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrl&  url)
{ 
return new QUrlQuery(url); }

QUrlQuery* PythonQtWrapper_QUrlQuery::new_QUrlQuery(const QUrlQuery&  other)
{ 
return new QUrlQuery(other); }

void PythonQtWrapper_QUrlQuery::addQueryItem(QUrlQuery* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addQueryItem(key, value));
}

QStringList  PythonQtWrapper_QUrlQuery::allQueryItemValues(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->allQueryItemValues(key, encoding));
}

void PythonQtWrapper_QUrlQuery::clear(QUrlQuery* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QChar  PythonQtWrapper_QUrlQuery::static_QUrlQuery_defaultQueryPairDelimiter()
{
  return (QUrlQuery::defaultQueryPairDelimiter());
}

QChar  PythonQtWrapper_QUrlQuery::static_QUrlQuery_defaultQueryValueDelimiter()
{
  return (QUrlQuery::defaultQueryValueDelimiter());
}

bool  PythonQtWrapper_QUrlQuery::hasQueryItem(QUrlQuery* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasQueryItem(key));
}

bool  PythonQtWrapper_QUrlQuery::isEmpty(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QUrlQuery::__ne__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QUrlQuery*  PythonQtWrapper_QUrlQuery::operator_assign(QUrlQuery* theWrappedObject, const QUrlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QUrlQuery::__eq__(QUrlQuery* theWrappedObject, const QUrlQuery&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QUrlQuery::query(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->query(encoding));
}

QString  PythonQtWrapper_QUrlQuery::queryItemValue(QUrlQuery* theWrappedObject, const QString&  key, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItemValue(key, encoding));
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QUrlQuery::queryItems(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->queryItems(encoding));
}

QChar  PythonQtWrapper_QUrlQuery::queryPairDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryPairDelimiter());
}

QChar  PythonQtWrapper_QUrlQuery::queryValueDelimiter(QUrlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryValueDelimiter());
}

void PythonQtWrapper_QUrlQuery::removeAllQueryItems(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllQueryItems(key));
}

void PythonQtWrapper_QUrlQuery::removeQueryItem(QUrlQuery* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeQueryItem(key));
}

void PythonQtWrapper_QUrlQuery::setQuery(QUrlQuery* theWrappedObject, const QString&  queryString)
{
  ( theWrappedObject->setQuery(queryString));
}

void PythonQtWrapper_QUrlQuery::setQueryDelimiters(QUrlQuery* theWrappedObject, QChar  valueDelimiter, QChar  pairDelimiter)
{
  ( theWrappedObject->setQueryDelimiters(valueDelimiter, pairDelimiter));
}

void PythonQtWrapper_QUrlQuery::setQueryItems(QUrlQuery* theWrappedObject, const QList<QPair<QString , QString >  >&  query)
{
  ( theWrappedObject->setQueryItems(query));
}

void PythonQtWrapper_QUrlQuery::swap(QUrlQuery* theWrappedObject, QUrlQuery&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QUrlQuery::toString(QUrlQuery* theWrappedObject, QUrl::ComponentFormattingOptions  encoding) const
{
  return ( theWrappedObject->toString(encoding));
}

QString PythonQtWrapper_QUrlQuery::py_toString(QUrlQuery* obj) { return obj->toString(); }


PythonQtShell_QUuid::~PythonQtShell_QUuid() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QUuid* PythonQtWrapper_QUuid::new_QUuid()
{ 
return new PythonQtShell_QUuid(); }

QUuid* PythonQtWrapper_QUuid::new_QUuid(const QByteArray&  arg__1)
{ 
return new PythonQtShell_QUuid(arg__1); }

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

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV3(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV3(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QByteArray&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_createUuidV5(const QUuid&  ns, const QString&  baseData)
{
  return (QUuid::createUuidV5(ns, baseData));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_fromRfc4122(const QByteArray&  arg__1)
{
  return (QUuid::fromRfc4122(arg__1));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_fromString(QLatin1String  string)
{
  return (QUuid::fromString(string));
}

QUuid  PythonQtWrapper_QUuid::static_QUuid_fromString(QStringView  string)
{
  return (QUuid::fromString(string));
}

bool  PythonQtWrapper_QUuid::isNull(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QUuid::__ne__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)!= orig);
}

bool  PythonQtWrapper_QUuid::__lt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QUuid::writeTo(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

bool  PythonQtWrapper_QUuid::__le__(QUuid* theWrappedObject, const QUuid&  rhs)
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QUuid::__eq__(QUuid* theWrappedObject, const QUuid&  orig) const
{
  return ( (*theWrappedObject)== orig);
}

bool  PythonQtWrapper_QUuid::__gt__(QUuid* theWrappedObject, const QUuid&  other) const
{
  return ( (*theWrappedObject)> other);
}

bool  PythonQtWrapper_QUuid::__ge__(QUuid* theWrappedObject, const QUuid&  rhs)
{
  return ( (*theWrappedObject)>= rhs);
}

void PythonQtWrapper_QUuid::readFrom(QUuid* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QByteArray  PythonQtWrapper_QUuid::toByteArray(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toByteArray());
}

QByteArray  PythonQtWrapper_QUuid::toByteArray(QUuid* theWrappedObject, QUuid::StringFormat  mode) const
{
  return ( theWrappedObject->toByteArray(mode));
}

QByteArray  PythonQtWrapper_QUuid::toRfc4122(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toRfc4122());
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString  PythonQtWrapper_QUuid::toString(QUuid* theWrappedObject, QUuid::StringFormat  mode) const
{
  return ( theWrappedObject->toString(mode));
}

QUuid::Variant  PythonQtWrapper_QUuid::variant(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->variant());
}

QUuid::Version  PythonQtWrapper_QUuid::version(QUuid* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

QString PythonQtWrapper_QUuid::py_toString(QUuid* obj) { return obj->toString(); }


PythonQtShell_QVariantAnimation::~PythonQtShell_QVariantAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QVariantAnimation::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::childEvent(event0);
}
void PythonQtShell_QVariantAnimation::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::customEvent(event0);
}
int  PythonQtShell_QVariantAnimation::duration() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("duration");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return QVariantAnimation::duration();
}
bool  PythonQtShell_QVariantAnimation::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QVariantAnimation::event(event0);
}
bool  PythonQtShell_QVariantAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QVariantAnimation::eventFilter(watched0, event1);
}
QVariant  PythonQtShell_QVariantAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("interpolated");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&from0, (void*)&to1, (void*)&progress2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("interpolated", methodInfo, result);
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
  return QVariantAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QVariantAnimation::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::timerEvent(event0);
}
void PythonQtShell_QVariantAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&arg__1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QVariantAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateCurrentValue");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QVariant&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&value0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QVariantAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateDirection");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&direction0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateDirection(direction0);
}
void PythonQtShell_QVariantAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateState");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&newState0, (void*)&oldState1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QVariantAnimation::updateState(newState0, oldState1);
}
QVariantAnimation* PythonQtWrapper_QVariantAnimation::new_QVariantAnimation(QObject*  parent)
{ 
return new PythonQtShell_QVariantAnimation(parent); }

const QMetaObject* PythonQtShell_QVariantAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QVariantAnimation::staticMetaObject);
  } else {
    return &QVariantAnimation::staticMetaObject;
  }
}
int PythonQtShell_QVariantAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QVariantAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QVariant  PythonQtWrapper_QVariantAnimation::currentValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentValue());
}

QEasingCurve  PythonQtWrapper_QVariantAnimation::easingCurve(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->easingCurve());
}

QVariant  PythonQtWrapper_QVariantAnimation::endValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->endValue());
}

QVariant  PythonQtWrapper_QVariantAnimation::interpolated(QVariantAnimation* theWrappedObject, const QVariant&  from, const QVariant&  to, qreal  progress) const
{
  return ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_interpolated(from, to, progress));
}

QVariant  PythonQtWrapper_QVariantAnimation::keyValueAt(QVariantAnimation* theWrappedObject, qreal  step) const
{
  return ( theWrappedObject->keyValueAt(step));
}

QVector<QPair<qreal , QVariant >  >  PythonQtWrapper_QVariantAnimation::keyValues(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->keyValues());
}

void PythonQtWrapper_QVariantAnimation::setDuration(QVariantAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QVariantAnimation::setEasingCurve(QVariantAnimation* theWrappedObject, const QEasingCurve&  easing)
{
  ( theWrappedObject->setEasingCurve(easing));
}

void PythonQtWrapper_QVariantAnimation::setEndValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setEndValue(value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValueAt(QVariantAnimation* theWrappedObject, qreal  step, const QVariant&  value)
{
  ( theWrappedObject->setKeyValueAt(step, value));
}

void PythonQtWrapper_QVariantAnimation::setKeyValues(QVariantAnimation* theWrappedObject, const QVector<QPair<qreal , QVariant >  >&  values)
{
  ( theWrappedObject->setKeyValues(values));
}

void PythonQtWrapper_QVariantAnimation::setStartValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( theWrappedObject->setStartValue(value));
}

QVariant  PythonQtWrapper_QVariantAnimation::startValue(QVariantAnimation* theWrappedObject) const
{
  return ( theWrappedObject->startValue());
}

void PythonQtWrapper_QVariantAnimation::updateCurrentValue(QVariantAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QVariantAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}



QWaitCondition* PythonQtWrapper_QWaitCondition::new_QWaitCondition()
{ 
return new QWaitCondition(); }

void PythonQtWrapper_QWaitCondition::notify_all(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_all());
}

void PythonQtWrapper_QWaitCondition::notify_one(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->notify_one());
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedMutex, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QMutex*  lockedMutex, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedMutex, time));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, QDeadlineTimer  deadline)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, deadline));
}

bool  PythonQtWrapper_QWaitCondition::wait(QWaitCondition* theWrappedObject, QReadWriteLock*  lockedReadWriteLock, unsigned long  time)
{
  return ( theWrappedObject->wait(lockedReadWriteLock, time));
}

void PythonQtWrapper_QWaitCondition::wakeAll(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeAll());
}

void PythonQtWrapper_QWaitCondition::wakeOne(QWaitCondition* theWrappedObject)
{
  ( theWrappedObject->wakeOne());
}



QWriteLocker* PythonQtWrapper_QWriteLocker::new_QWriteLocker(QReadWriteLock*  readWriteLock)
{ 
return new QWriteLocker(readWriteLock); }

QReadWriteLock*  PythonQtWrapper_QWriteLocker::readWriteLock(QWriteLocker* theWrappedObject) const
{
  return ( theWrappedObject->readWriteLock());
}

void PythonQtWrapper_QWriteLocker::relock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->relock());
}

void PythonQtWrapper_QWriteLocker::unlock(QWriteLocker* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



PythonQtShell_QXmlStreamEntityResolver::~PythonQtShell_QXmlStreamEntityResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveEntity(const QString&  publicId0, const QString&  systemId1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("resolveEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QString returnValue{};
      void* args[3] = {nullptr, (void*)&publicId0, (void*)&systemId1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveEntity(publicId0, systemId1);
}
QString  PythonQtShell_QXmlStreamEntityResolver::resolveUndeclaredEntity(const QString&  name0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("resolveUndeclaredEntity");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QString" , "const QString&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue{};
      void* args[2] = {nullptr, (void*)&name0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
            PythonQt::priv()->handleVirtualOverloadReturnError("resolveUndeclaredEntity", methodInfo, result);
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
  return QXmlStreamEntityResolver::resolveUndeclaredEntity(name0);
}
QXmlStreamEntityResolver* PythonQtWrapper_QXmlStreamEntityResolver::new_QXmlStreamEntityResolver()
{ 
return new PythonQtShell_QXmlStreamEntityResolver(); }

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  publicId, const QString&  systemId)
{
  return ( theWrappedObject->resolveEntity(publicId, systemId));
}

QString  PythonQtWrapper_QXmlStreamEntityResolver::resolveUndeclaredEntity(QXmlStreamEntityResolver* theWrappedObject, const QString&  name)
{
  return ( theWrappedObject->resolveUndeclaredEntity(name));
}




