#include "com_trolltech_qt_core0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qanimationgroup.h>
#include <qbasictimer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcalendar.h>
#include <qcborarray.h>
#include <qcborcommon.h>
#include <qcbormap.h>
#include <qcborstreamreader.h>
#include <qcborstreamwriter.h>
#include <qcborvalue.h>
#include <qcollator.h>
#include <qcommandlineoption.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdeadlinetimer.h>
#include <qiodevice.h>
#include <qjsonarray.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmetaobject.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qregularexpression.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qthread.h>
#include <qtranslator.h>
#include <qurl.h>
#include <quuid.h>
#include <qvector.h>

PythonQtShell_QAbstractAnimation::~PythonQtShell_QAbstractAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractAnimation::childEvent(QChildEvent*  event0)
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
  QAbstractAnimation::childEvent(event0);
}
void PythonQtShell_QAbstractAnimation::customEvent(QEvent*  event0)
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
  QAbstractAnimation::customEvent(event0);
}
int  PythonQtShell_QAbstractAnimation::duration() const
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
  return int();
}
bool  PythonQtShell_QAbstractAnimation::event(QEvent*  event0)
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
  return QAbstractAnimation::event(event0);
}
bool  PythonQtShell_QAbstractAnimation::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractAnimation::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractAnimation::timerEvent(QTimerEvent*  event0)
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
  QAbstractAnimation::timerEvent(event0);
}
void PythonQtShell_QAbstractAnimation::updateCurrentTime(int  currentTime0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&currentTime0};
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
void PythonQtShell_QAbstractAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
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
  QAbstractAnimation::updateDirection(direction0);
}
void PythonQtShell_QAbstractAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
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
  QAbstractAnimation::updateState(newState0, oldState1);
}
QAbstractAnimation* PythonQtWrapper_QAbstractAnimation::new_QAbstractAnimation(QObject*  parent)
{ 
return new PythonQtShell_QAbstractAnimation(parent); }

const QMetaObject* PythonQtShell_QAbstractAnimation::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractAnimation::staticMetaObject);
  } else {
    return &QAbstractAnimation::staticMetaObject;
  }
}
int PythonQtShell_QAbstractAnimation::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractAnimation::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
int  PythonQtWrapper_QAbstractAnimation::currentLoop(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoop());
}

int  PythonQtWrapper_QAbstractAnimation::currentLoopTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoopTime());
}

int  PythonQtWrapper_QAbstractAnimation::currentTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

QAbstractAnimation::Direction  PythonQtWrapper_QAbstractAnimation::direction(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QAbstractAnimation::duration(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAnimationGroup*  PythonQtWrapper_QAbstractAnimation::group(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

int  PythonQtWrapper_QAbstractAnimation::loopCount(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

void PythonQtWrapper_QAbstractAnimation::setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

void PythonQtWrapper_QAbstractAnimation::setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

QAbstractAnimation::State  PythonQtWrapper_QAbstractAnimation::state(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

int  PythonQtWrapper_QAbstractAnimation::totalDuration(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->totalDuration());
}

void PythonQtWrapper_QAbstractAnimation::updateCurrentTime(QAbstractAnimation* theWrappedObject, int  currentTime)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateCurrentTime(currentTime));
}

void PythonQtWrapper_QAbstractAnimation::updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QAbstractAnimation::updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}



PythonQtShell_QAbstractItemModel::~PythonQtShell_QAbstractItemModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QAbstractItemModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("buddy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::buddy(index0);
}
bool  PythonQtShell_QAbstractItemModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canDropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QAbstractItemModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canFetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::canFetchMore(parent0);
}
void PythonQtShell_QAbstractItemModel::childEvent(QChildEvent*  event0)
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
  QAbstractItemModel::childEvent(event0);
}
int  PythonQtShell_QAbstractItemModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("columnCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return int();
}
void PythonQtShell_QAbstractItemModel::customEvent(QEvent*  event0)
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
  QAbstractItemModel::customEvent(event0);
}
QVariant  PythonQtShell_QAbstractItemModel::data(const QModelIndex&  index0, int  role1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&role1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QVariant();
}
bool  PythonQtShell_QAbstractItemModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QAbstractItemModel::event(QEvent*  event0)
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
  return QAbstractItemModel::event(event0);
}
bool  PythonQtShell_QAbstractItemModel::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractItemModel::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractItemModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("fetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractItemModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QAbstractItemModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::flags(index0);
}
bool  PythonQtShell_QAbstractItemModel::hasChildren(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("hasChildren");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::hasChildren(parent0);
}
QVariant  PythonQtShell_QAbstractItemModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("headerData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QAbstractItemModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("index");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QModelIndex();
}
bool  PythonQtShell_QAbstractItemModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QAbstractItemModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QAbstractItemModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("itemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QAbstractItemModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("match");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue{};
      void* args[6] = {nullptr, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QAbstractItemModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue{};
      void* args[2] = {nullptr, (void*)&indexes0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QAbstractItemModel::mimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::mimeTypes();
}
bool  PythonQtShell_QAbstractItemModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QAbstractItemModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QModelIndex  PythonQtShell_QAbstractItemModel::parent(const QModelIndex&  child0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("parent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&child0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QModelIndex();
}
bool  PythonQtShell_QAbstractItemModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QAbstractItemModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QAbstractItemModel::revert()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("revert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractItemModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QAbstractItemModel::roleNames() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("roleNames");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHash<int , QByteArray >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::roleNames();
}
int  PythonQtShell_QAbstractItemModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("rowCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return int();
}
bool  PythonQtShell_QAbstractItemModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&value1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QAbstractItemModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setHeaderData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QAbstractItemModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setItemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&roles1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::setItemData(index0, roles1);
}
QModelIndex  PythonQtShell_QAbstractItemModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sibling");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&idx2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QAbstractItemModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sort");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&column0, (void*)&order1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractItemModel::sort(column0, order1);
}
QSize  PythonQtShell_QAbstractItemModel::span(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("span");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::span(index0);
}
bool  PythonQtShell_QAbstractItemModel::submit()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("submit");
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
  return QAbstractItemModel::submit();
}
Qt::DropActions  PythonQtShell_QAbstractItemModel::supportedDragActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDragActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QAbstractItemModel::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractItemModel::supportedDropActions();
}
void PythonQtShell_QAbstractItemModel::timerEvent(QTimerEvent*  event0)
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
  QAbstractItemModel::timerEvent(event0);
}
QAbstractItemModel* PythonQtWrapper_QAbstractItemModel::new_QAbstractItemModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractItemModel(parent); }

const QMetaObject* PythonQtShell_QAbstractItemModel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractItemModel::staticMetaObject);
  } else {
    return &QAbstractItemModel::staticMetaObject;
  }
}
int PythonQtShell_QAbstractItemModel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractItemModel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QAbstractItemModel::beginInsertColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginInsertColumns(parent, first, last));
}

void PythonQtWrapper_QAbstractItemModel::beginInsertRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginInsertRows(parent, first, last));
}

bool  PythonQtWrapper_QAbstractItemModel::beginMoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationColumn)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn));
}

bool  PythonQtWrapper_QAbstractItemModel::beginMoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceFirst, int  sourceLast, const QModelIndex&  destinationParent, int  destinationRow)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow));
}

void PythonQtWrapper_QAbstractItemModel::beginRemoveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginRemoveColumns(parent, first, last));
}

void PythonQtWrapper_QAbstractItemModel::beginRemoveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent, int  first, int  last)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginRemoveRows(parent, first, last));
}

void PythonQtWrapper_QAbstractItemModel::beginResetModel(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_beginResetModel());
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->buddy(index));
}

bool  PythonQtWrapper_QAbstractItemModel::canDropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->canDropMimeData(data, action, row, column, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( theWrappedObject->canFetchMore(parent));
}

void PythonQtWrapper_QAbstractItemModel::changePersistentIndex(QAbstractItemModel* theWrappedObject, const QModelIndex&  from, const QModelIndex&  to)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_changePersistentIndex(from, to));
}

void PythonQtWrapper_QAbstractItemModel::changePersistentIndexList(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  from, const QList<QModelIndex >&  to)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_changePersistentIndexList(from, to));
}

int  PythonQtWrapper_QAbstractItemModel::columnCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( theWrappedObject->columnCount(parent));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, quintptr  id) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_createIndex(row, column, id));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::createIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, void*  data) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_createIndex(row, column, data));
}

QVariant  PythonQtWrapper_QAbstractItemModel::data(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, int  role) const
{
  return ( theWrappedObject->data(index, role));
}

bool  PythonQtWrapper_QAbstractItemModel::decodeData(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent, QDataStream&  stream)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_decodeData(row, column, parent, stream));
}

bool  PythonQtWrapper_QAbstractItemModel::dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->dropMimeData(data, action, row, column, parent));
}

void PythonQtWrapper_QAbstractItemModel::encodeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes, QDataStream&  stream) const
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_encodeData(indexes, stream));
}

void PythonQtWrapper_QAbstractItemModel::endInsertColumns(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endInsertColumns());
}

void PythonQtWrapper_QAbstractItemModel::endInsertRows(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endInsertRows());
}

void PythonQtWrapper_QAbstractItemModel::endMoveColumns(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endMoveColumns());
}

void PythonQtWrapper_QAbstractItemModel::endMoveRows(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endMoveRows());
}

void PythonQtWrapper_QAbstractItemModel::endRemoveColumns(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endRemoveColumns());
}

void PythonQtWrapper_QAbstractItemModel::endRemoveRows(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endRemoveRows());
}

void PythonQtWrapper_QAbstractItemModel::endResetModel(QAbstractItemModel* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_endResetModel());
}

void PythonQtWrapper_QAbstractItemModel::fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent)
{
  ( theWrappedObject->fetchMore(parent));
}

Qt::ItemFlags  PythonQtWrapper_QAbstractItemModel::flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->flags(index));
}

bool  PythonQtWrapper_QAbstractItemModel::hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( theWrappedObject->hasChildren(parent));
}

bool  PythonQtWrapper_QAbstractItemModel::hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->hasIndex(row, column, parent));
}

QVariant  PythonQtWrapper_QAbstractItemModel::headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( theWrappedObject->headerData(section, orientation, role));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::index(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->index(row, column, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertColumn(column, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertColumns(column, count, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertRow(row, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertRows(row, count, parent));
}

QMap<int , QVariant >  PythonQtWrapper_QAbstractItemModel::itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->itemData(index));
}

QList<QModelIndex >  PythonQtWrapper_QAbstractItemModel::match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
  return ( theWrappedObject->match(start, role, value, hits, flags));
}

PythonQtPassOwnershipToPython<QMimeData*  > PythonQtWrapper_QAbstractItemModel::mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const
{
  return ( theWrappedObject->mimeData(indexes));
}

QStringList  PythonQtWrapper_QAbstractItemModel::mimeTypes(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->mimeTypes());
}

bool  PythonQtWrapper_QAbstractItemModel::moveColumn(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, const QModelIndex&  destinationParent, int  destinationChild)
{
  return ( theWrappedObject->moveColumn(sourceParent, sourceColumn, destinationParent, destinationChild));
}

bool  PythonQtWrapper_QAbstractItemModel::moveColumns(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceColumn, int  count, const QModelIndex&  destinationParent, int  destinationChild)
{
  return ( theWrappedObject->moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild));
}

bool  PythonQtWrapper_QAbstractItemModel::moveRow(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, const QModelIndex&  destinationParent, int  destinationChild)
{
  return ( theWrappedObject->moveRow(sourceParent, sourceRow, destinationParent, destinationChild));
}

bool  PythonQtWrapper_QAbstractItemModel::moveRows(QAbstractItemModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild)
{
  return ( theWrappedObject->moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::parent(QAbstractItemModel* theWrappedObject, const QModelIndex&  child) const
{
  return ( theWrappedObject->parent(child));
}

QList<QModelIndex >  PythonQtWrapper_QAbstractItemModel::persistentIndexList(QAbstractItemModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_persistentIndexList());
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeColumn(column, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeRow(row, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeRows(row, count, parent));
}

QHash<int , QByteArray >  PythonQtWrapper_QAbstractItemModel::roleNames(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->roleNames());
}

int  PythonQtWrapper_QAbstractItemModel::rowCount(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( theWrappedObject->rowCount(parent));
}

bool  PythonQtWrapper_QAbstractItemModel::setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
  return ( theWrappedObject->setData(index, value, role));
}

bool  PythonQtWrapper_QAbstractItemModel::setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
  return ( theWrappedObject->setHeaderData(section, orientation, value, role));
}

bool  PythonQtWrapper_QAbstractItemModel::setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
  return ( theWrappedObject->setItemData(index, roles));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
  return ( theWrappedObject->sibling(row, column, idx));
}

void PythonQtWrapper_QAbstractItemModel::sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( theWrappedObject->sort(column, order));
}

QSize  PythonQtWrapper_QAbstractItemModel::span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->span(index));
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDragActions(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->supportedDragActions());
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDropActions(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->supportedDropActions());
}



PythonQtShell_QAbstractListModel::~PythonQtShell_QAbstractListModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QAbstractListModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("buddy");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::buddy(index0);
}
bool  PythonQtShell_QAbstractListModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canDropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QAbstractListModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canFetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::canFetchMore(parent0);
}
void PythonQtShell_QAbstractListModel::childEvent(QChildEvent*  event0)
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
  QAbstractListModel::childEvent(event0);
}
void PythonQtShell_QAbstractListModel::customEvent(QEvent*  event0)
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
  QAbstractListModel::customEvent(event0);
}
QVariant  PythonQtShell_QAbstractListModel::data(const QModelIndex&  index0, int  role1) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("data");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&role1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QVariant();
}
bool  PythonQtShell_QAbstractListModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("dropMimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&data0, (void*)&action1, (void*)&row2, (void*)&column3, (void*)&parent4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QAbstractListModel::event(QEvent*  event0)
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
  return QAbstractListModel::event(event0);
}
bool  PythonQtShell_QAbstractListModel::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractListModel::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractListModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("fetchMore");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractListModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QAbstractListModel::flags(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("flags");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::flags(index0);
}
QVariant  PythonQtShell_QAbstractListModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("headerData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue{};
      void* args[4] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QAbstractListModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("index");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::index(row0, column1, parent2);
}
bool  PythonQtShell_QAbstractListModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QAbstractListModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("insertRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QAbstractListModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("itemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::itemData(index0);
}
QList<QModelIndex >  PythonQtShell_QAbstractListModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("match");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue{};
      void* args[6] = {nullptr, (void*)&start0, (void*)&role1, (void*)&value2, (void*)&hits3, (void*)&flags4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QAbstractListModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue{};
      void* args[2] = {nullptr, (void*)&indexes0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QAbstractListModel::mimeTypes() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("mimeTypes");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QStringList"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::mimeTypes();
}
bool  PythonQtShell_QAbstractListModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceColumn1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QAbstractListModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("moveRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue{};
      void* args[6] = {nullptr, (void*)&sourceParent0, (void*)&sourceRow1, (void*)&count2, (void*)&destinationParent3, (void*)&destinationChild4};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QAbstractListModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeColumns");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&column0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QAbstractListModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("removeRows");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&count1, (void*)&parent2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QAbstractListModel::revert()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("revert");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractListModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QAbstractListModel::roleNames() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("roleNames");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QHash<int , QByteArray >"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QHash<int , QByteArray > returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::roleNames();
}
int  PythonQtShell_QAbstractListModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("rowCount");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue{};
      void* args[2] = {nullptr, (void*)&parent0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return int();
}
bool  PythonQtShell_QAbstractListModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue{};
      void* args[4] = {nullptr, (void*)&index0, (void*)&value1, (void*)&role2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QAbstractListModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setHeaderData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue{};
      void* args[5] = {nullptr, (void*)&section0, (void*)&orientation1, (void*)&value2, (void*)&role3};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QAbstractListModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("setItemData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue{};
      void* args[3] = {nullptr, (void*)&index0, (void*)&roles1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::setItemData(index0, roles1);
}
QModelIndex  PythonQtShell_QAbstractListModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sibling");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue{};
      void* args[4] = {nullptr, (void*)&row0, (void*)&column1, (void*)&idx2};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QAbstractListModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("sort");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      void* args[3] = {nullptr, (void*)&column0, (void*)&order1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QAbstractListModel::sort(column0, order1);
}
QSize  PythonQtShell_QAbstractListModel::span(const QModelIndex&  index0) const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("span");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue{};
      void* args[2] = {nullptr, (void*)&index0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::span(index0);
}
bool  PythonQtShell_QAbstractListModel::submit()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("submit");
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
  return QAbstractListModel::submit();
}
Qt::DropActions  PythonQtShell_QAbstractListModel::supportedDragActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDragActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QAbstractListModel::supportedDropActions() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("supportedDropActions");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"Qt::DropActions"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      Qt::DropActions returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QAbstractListModel::supportedDropActions();
}
void PythonQtShell_QAbstractListModel::timerEvent(QTimerEvent*  event0)
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
  QAbstractListModel::timerEvent(event0);
}
QAbstractListModel* PythonQtWrapper_QAbstractListModel::new_QAbstractListModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractListModel(parent); }

const QMetaObject* PythonQtShell_QAbstractListModel::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractListModel::staticMetaObject);
  } else {
    return &QAbstractListModel::staticMetaObject;
  }
}
int PythonQtShell_QAbstractListModel::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractListModel::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


PythonQtShell_QAbstractState::~PythonQtShell_QAbstractState() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractState::childEvent(QChildEvent*  event0)
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
  QAbstractState::childEvent(event0);
}
void PythonQtShell_QAbstractState::customEvent(QEvent*  event0)
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
  QAbstractState::customEvent(event0);
}
bool  PythonQtShell_QAbstractState::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QAbstractState::event(e0);
}
bool  PythonQtShell_QAbstractState::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractState::eventFilter(watched0, event1);
}
void PythonQtShell_QAbstractState::onEntry(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onEntry");
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
  
}
void PythonQtShell_QAbstractState::onExit(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onExit");
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
  
}
void PythonQtShell_QAbstractState::timerEvent(QTimerEvent*  event0)
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
  QAbstractState::timerEvent(event0);
}
QAbstractState* PythonQtWrapper_QAbstractState::new_QAbstractState(QState*  parent)
{ 
return new PythonQtShell_QAbstractState(parent); }

const QMetaObject* PythonQtShell_QAbstractState::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractState::staticMetaObject);
  } else {
    return &QAbstractState::staticMetaObject;
  }
}
int PythonQtShell_QAbstractState::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractState::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QAbstractState::active(QAbstractState* theWrappedObject) const
{
  return ( theWrappedObject->active());
}

QStateMachine*  PythonQtWrapper_QAbstractState::machine(QAbstractState* theWrappedObject) const
{
  return ( theWrappedObject->machine());
}

void PythonQtWrapper_QAbstractState::onEntry(QAbstractState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QAbstractState::onExit(QAbstractState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->promoted_onExit(event));
}

QState*  PythonQtWrapper_QAbstractState::parentState(QAbstractState* theWrappedObject) const
{
  return ( theWrappedObject->parentState());
}



PythonQtShell_QAbstractTransition::~PythonQtShell_QAbstractTransition() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractTransition::childEvent(QChildEvent*  event0)
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
  QAbstractTransition::childEvent(event0);
}
void PythonQtShell_QAbstractTransition::customEvent(QEvent*  event0)
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
  QAbstractTransition::customEvent(event0);
}
bool  PythonQtShell_QAbstractTransition::event(QEvent*  e0)
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
      void* args[2] = {nullptr, (void*)&e0};
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
  return QAbstractTransition::event(e0);
}
bool  PythonQtShell_QAbstractTransition::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAbstractTransition::eventFilter(watched0, event1);
}
bool  PythonQtShell_QAbstractTransition::eventTest(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("eventTest");
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
            PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
void PythonQtShell_QAbstractTransition::onTransition(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("onTransition");
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
  
}
void PythonQtShell_QAbstractTransition::timerEvent(QTimerEvent*  event0)
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
  QAbstractTransition::timerEvent(event0);
}
QAbstractTransition* PythonQtWrapper_QAbstractTransition::new_QAbstractTransition(QState*  sourceState)
{ 
return new PythonQtShell_QAbstractTransition(sourceState); }

const QMetaObject* PythonQtShell_QAbstractTransition::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAbstractTransition::staticMetaObject);
  } else {
    return &QAbstractTransition::staticMetaObject;
  }
}
int PythonQtShell_QAbstractTransition::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAbstractTransition::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QAbstractTransition::addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addAnimation(animation));
}

QList<QAbstractAnimation* >  PythonQtWrapper_QAbstractTransition::animations(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->animations());
}

bool  PythonQtWrapper_QAbstractTransition::eventTest(QAbstractTransition* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->promoted_eventTest(event));
}

QStateMachine*  PythonQtWrapper_QAbstractTransition::machine(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->machine());
}

void PythonQtWrapper_QAbstractTransition::onTransition(QAbstractTransition* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->promoted_onTransition(event));
}

void PythonQtWrapper_QAbstractTransition::removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeAnimation(animation));
}

void PythonQtWrapper_QAbstractTransition::setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target)
{
  ( theWrappedObject->setTargetState(target));
}

void PythonQtWrapper_QAbstractTransition::setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets)
{
  ( theWrappedObject->setTargetStates(targets));
}

void PythonQtWrapper_QAbstractTransition::setTransitionType(QAbstractTransition* theWrappedObject, QAbstractTransition::TransitionType  type)
{
  ( theWrappedObject->setTransitionType(type));
}

QState*  PythonQtWrapper_QAbstractTransition::sourceState(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->sourceState());
}

QAbstractState*  PythonQtWrapper_QAbstractTransition::targetState(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->targetState());
}

QList<QAbstractState* >  PythonQtWrapper_QAbstractTransition::targetStates(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->targetStates());
}

QAbstractTransition::TransitionType  PythonQtWrapper_QAbstractTransition::transitionType(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->transitionType());
}



PythonQtShell_QAnimationGroup::~PythonQtShell_QAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAnimationGroup::childEvent(QChildEvent*  event0)
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
  QAnimationGroup::childEvent(event0);
}
void PythonQtShell_QAnimationGroup::customEvent(QEvent*  event0)
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
  QAnimationGroup::customEvent(event0);
}
int  PythonQtShell_QAnimationGroup::duration() const
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
  return int();
}
bool  PythonQtShell_QAnimationGroup::event(QEvent*  event0)
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
  return QAnimationGroup::event(event0);
}
bool  PythonQtShell_QAnimationGroup::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAnimationGroup::eventFilter(watched0, event1);
}
void PythonQtShell_QAnimationGroup::timerEvent(QTimerEvent*  event0)
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
  QAnimationGroup::timerEvent(event0);
}
void PythonQtShell_QAnimationGroup::updateCurrentTime(int  currentTime0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("updateCurrentTime");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {nullptr, (void*)&currentTime0};
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
void PythonQtShell_QAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
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
  QAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
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
  QAnimationGroup::updateState(newState0, oldState1);
}
QAnimationGroup* PythonQtWrapper_QAnimationGroup::new_QAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QAnimationGroup(parent); }

const QMetaObject* PythonQtShell_QAnimationGroup::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAnimationGroup::staticMetaObject);
  } else {
    return &QAnimationGroup::staticMetaObject;
  }
}
int PythonQtShell_QAnimationGroup::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAnimationGroup::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
void PythonQtWrapper_QAnimationGroup::addAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation)
{
  ( theWrappedObject->addAnimation(animation));
}

QAbstractAnimation*  PythonQtWrapper_QAnimationGroup::animationAt(QAnimationGroup* theWrappedObject, int  index) const
{
  return ( theWrappedObject->animationAt(index));
}

int  PythonQtWrapper_QAnimationGroup::animationCount(QAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->animationCount());
}

void PythonQtWrapper_QAnimationGroup::clear(QAnimationGroup* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QAnimationGroup::indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const
{
  return ( theWrappedObject->indexOfAnimation(animation));
}

void PythonQtWrapper_QAnimationGroup::insertAnimation(QAnimationGroup* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QAbstractAnimation* >  animation)
{
  ( theWrappedObject->insertAnimation(index, animation));
}

void PythonQtWrapper_QAnimationGroup::removeAnimation(QAnimationGroup* theWrappedObject, PythonQtPassOwnershipToPython<QAbstractAnimation* >  animation)
{
  ( theWrappedObject->removeAnimation(animation));
}

PythonQtPassOwnershipToPython<QAbstractAnimation*  > PythonQtWrapper_QAnimationGroup::takeAnimation(QAnimationGroup* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeAnimation(index));
}



QApplicationStateChangeEvent* PythonQtWrapper_QApplicationStateChangeEvent::new_QApplicationStateChangeEvent(Qt::ApplicationState  state)
{ 
return new QApplicationStateChangeEvent(state); }

Qt::ApplicationState  PythonQtWrapper_QApplicationStateChangeEvent::applicationState(QApplicationStateChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->applicationState());
}



PythonQtShell_QBasicMutex::~PythonQtShell_QBasicMutex() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QBasicMutex* PythonQtWrapper_QBasicMutex::new_QBasicMutex()
{ 
return new PythonQtShell_QBasicMutex(); }

bool  PythonQtWrapper_QBasicMutex::isRecursive(QBasicMutex* theWrappedObject)
{
  return ( theWrappedObject->isRecursive());
}

bool  PythonQtWrapper_QBasicMutex::isRecursive(QBasicMutex* theWrappedObject) const
{
  return ( theWrappedObject->isRecursive());
}

void PythonQtWrapper_QBasicMutex::lock(QBasicMutex* theWrappedObject)
{
  ( theWrappedObject->lock());
}

bool  PythonQtWrapper_QBasicMutex::tryLock(QBasicMutex* theWrappedObject)
{
  return ( theWrappedObject->tryLock());
}

bool  PythonQtWrapper_QBasicMutex::try_lock(QBasicMutex* theWrappedObject)
{
  return ( theWrappedObject->try_lock());
}

void PythonQtWrapper_QBasicMutex::unlock(QBasicMutex* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QBasicTimer* PythonQtWrapper_QBasicTimer::new_QBasicTimer()
{ 
return new QBasicTimer(); }

QBasicTimer* PythonQtWrapper_QBasicTimer::new_QBasicTimer(const QBasicTimer&  arg__1)
{ 
return new QBasicTimer(arg__1); }

bool  PythonQtWrapper_QBasicTimer::isActive(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

QBasicTimer*  PythonQtWrapper_QBasicTimer::operator_assign(QBasicTimer* theWrappedObject, const QBasicTimer&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

void PythonQtWrapper_QBasicTimer::start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj)
{
  ( theWrappedObject->start(msec, obj));
}

void PythonQtWrapper_QBasicTimer::start(QBasicTimer* theWrappedObject, int  msec, Qt::TimerType  timerType, QObject*  obj)
{
  ( theWrappedObject->start(msec, timerType, obj));
}

void PythonQtWrapper_QBasicTimer::stop(QBasicTimer* theWrappedObject)
{
  ( theWrappedObject->stop());
}

void PythonQtWrapper_QBasicTimer::swap(QBasicTimer* theWrappedObject, QBasicTimer&  other)
{
  ( theWrappedObject->swap(other));
}

int  PythonQtWrapper_QBasicTimer::timerId(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}



PythonQtShell_QBuffer::~PythonQtShell_QBuffer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QBuffer::atEnd() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("atEnd");
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
  return QBuffer::atEnd();
}
qint64  PythonQtShell_QBuffer::bytesAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::bytesAvailable();
}
qint64  PythonQtShell_QBuffer::bytesToWrite() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("bytesToWrite");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::bytesToWrite();
}
bool  PythonQtShell_QBuffer::canReadLine() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("canReadLine");
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
  return QBuffer::canReadLine();
}
void PythonQtShell_QBuffer::childEvent(QChildEvent*  event0)
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
  QBuffer::childEvent(event0);
}
void PythonQtShell_QBuffer::close()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("close");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={""};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); }
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QBuffer::close();
}
void PythonQtShell_QBuffer::connectNotify(const QMetaMethod&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("connectNotify");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QMetaMethod&"};
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
  QBuffer::connectNotify(arg__1);
}
void PythonQtShell_QBuffer::customEvent(QEvent*  event0)
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
  QBuffer::customEvent(event0);
}
void PythonQtShell_QBuffer::disconnectNotify(const QMetaMethod&  arg__1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("disconnectNotify");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "const QMetaMethod&"};
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
  QBuffer::disconnectNotify(arg__1);
}
bool  PythonQtShell_QBuffer::event(QEvent*  event0)
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
  return QBuffer::event(event0);
}
bool  PythonQtShell_QBuffer::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QBuffer::eventFilter(watched0, event1);
}
bool  PythonQtShell_QBuffer::isSequential() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("isSequential");
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
  return QBuffer::isSequential();
}
bool  PythonQtShell_QBuffer::open(QIODevice::OpenMode  openMode0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("open");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&openMode0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::open(openMode0);
}
qint64  PythonQtShell_QBuffer::pos() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("pos");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::pos();
}
qint64  PythonQtShell_QBuffer::readData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::readData(data0, maxlen1);
}
qint64  PythonQtShell_QBuffer::readLineData(char*  data0, qint64  maxlen1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("readLineData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&maxlen1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QBuffer::reset()
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("reset");
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
  return QBuffer::reset();
}
bool  PythonQtShell_QBuffer::seek(qint64  off0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("seek");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&off0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::seek(off0);
}
qint64  PythonQtShell_QBuffer::size() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("size");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      qint64 returnValue{};
      void* args[1] = {nullptr};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::size();
}
void PythonQtShell_QBuffer::timerEvent(QTimerEvent*  event0)
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
  QBuffer::timerEvent(event0);
}
bool  PythonQtShell_QBuffer::waitForBytesWritten(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForBytesWritten");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QBuffer::waitForReadyRead(int  msecs0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("waitForReadyRead");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "int"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue{};
      void* args[2] = {nullptr, (void*)&msecs0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QBuffer::writeData(const char*  data0, qint64  len1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (Py_REFCNT((PyObject*)_wrapper) > 0) {
    static PyObject* name = PyString_FromString("writeData");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"qint64" , "const char*" , "qint64"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      qint64 returnValue{};
      void* args[3] = {nullptr, (void*)&data0, (void*)&len1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, nullptr, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==nullptr) {
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
  return QBuffer::writeData(data0, len1);
}
QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QByteArray*  buf, QObject*  parent)
{ 
return new PythonQtShell_QBuffer(buf, parent); }

QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QObject*  parent)
{ 
return new PythonQtShell_QBuffer(parent); }

const QMetaObject* PythonQtShell_QBuffer::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QBuffer::staticMetaObject);
  } else {
    return &QBuffer::staticMetaObject;
  }
}
int PythonQtShell_QBuffer::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QBuffer::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
const QByteArray*  PythonQtWrapper_QBuffer::buffer(QBuffer* theWrappedObject) const
{
  return &( theWrappedObject->buffer());
}

void PythonQtWrapper_QBuffer::connectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1)
{
  ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_connectNotify(arg__1));
}

const QByteArray*  PythonQtWrapper_QBuffer::data(QBuffer* theWrappedObject) const
{
  return &( theWrappedObject->data());
}

void PythonQtWrapper_QBuffer::disconnectNotify(QBuffer* theWrappedObject, const QMetaMethod&  arg__1)
{
  ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_disconnectNotify(arg__1));
}

void PythonQtWrapper_QBuffer::setBuffer(QBuffer* theWrappedObject, QByteArray*  a)
{
  ( theWrappedObject->setBuffer(a));
}

void PythonQtWrapper_QBuffer::setData(QBuffer* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->setData(data));
}



QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher()
{ 
return new QByteArrayMatcher(); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArray&  pattern)
{ 
return new QByteArrayMatcher(pattern); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const QByteArrayMatcher&  other)
{ 
return new QByteArrayMatcher(other); }

QByteArrayMatcher* PythonQtWrapper_QByteArrayMatcher::new_QByteArrayMatcher(const char*  pattern, int  length)
{ 
return new QByteArrayMatcher(pattern, length); }

int  PythonQtWrapper_QByteArrayMatcher::indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from) const
{
  return ( theWrappedObject->indexIn(ba, from));
}

int  PythonQtWrapper_QByteArrayMatcher::indexIn(QByteArrayMatcher* theWrappedObject, const char*  str, int  len, int  from) const
{
  return ( theWrappedObject->indexIn(str, len, from));
}

QByteArray  PythonQtWrapper_QByteArrayMatcher::pattern(QByteArrayMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

void PythonQtWrapper_QByteArrayMatcher::setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}



PythonQtShell_QByteArray__FromBase64Result::~PythonQtShell_QByteArray__FromBase64Result() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QByteArray::FromBase64Result* PythonQtWrapper_QByteArray__FromBase64Result::new_QByteArray__FromBase64Result()
{ 
return new PythonQtShell_QByteArray__FromBase64Result(); }

bool  PythonQtWrapper_QByteArray__FromBase64Result::operator_cast_bool(QByteArray::FromBase64Result* theWrappedObject) const
{
  return ( theWrappedObject->operator bool());
}

bool  PythonQtWrapper_QByteArray__FromBase64Result::__ne__(QByteArray::FromBase64Result* theWrappedObject, const QByteArray::FromBase64Result&  rhs)
{
  return ( (*theWrappedObject)!= rhs);
}

QByteArray*  PythonQtWrapper_QByteArray__FromBase64Result::__mul__(QByteArray::FromBase64Result* theWrappedObject)
{
  return &( theWrappedObject->operator*());
}

const QByteArray*  PythonQtWrapper_QByteArray__FromBase64Result::__mul__(QByteArray::FromBase64Result* theWrappedObject) const
{
  return &( theWrappedObject->operator*());
}

bool  PythonQtWrapper_QByteArray__FromBase64Result::__eq__(QByteArray::FromBase64Result* theWrappedObject, const QByteArray::FromBase64Result&  rhs)
{
  return ( (*theWrappedObject)== rhs);
}

void PythonQtWrapper_QByteArray__FromBase64Result::swap(QByteArray::FromBase64Result* theWrappedObject, QByteArray::FromBase64Result&  other)
{
  ( theWrappedObject->swap(other));
}



QCalendar* PythonQtWrapper_QCalendar::new_QCalendar()
{ 
return new QCalendar(); }

QCalendar* PythonQtWrapper_QCalendar::new_QCalendar(QCalendar::System  system)
{ 
return new QCalendar(system); }

QCalendar* PythonQtWrapper_QCalendar::new_QCalendar(QLatin1String  name)
{ 
return new QCalendar(name); }

QCalendar* PythonQtWrapper_QCalendar::new_QCalendar(QStringView  name)
{ 
return new QCalendar(name); }

QStringList  PythonQtWrapper_QCalendar::static_QCalendar_availableCalendars()
{
  return (QCalendar::availableCalendars());
}

QDate  PythonQtWrapper_QCalendar::dateFromParts(QCalendar* theWrappedObject, const QCalendar::YearMonthDay&  parts) const
{
  return ( theWrappedObject->dateFromParts(parts));
}

QDate  PythonQtWrapper_QCalendar::dateFromParts(QCalendar* theWrappedObject, int  year, int  month, int  day) const
{
  return ( theWrappedObject->dateFromParts(year, month, day));
}

QString  PythonQtWrapper_QCalendar::dateTimeToString(QCalendar* theWrappedObject, QStringView  format, const QDateTime&  datetime, const QDate&  dateOnly, const QTime&  timeOnly, const QLocale&  locale) const
{
  return ( theWrappedObject->dateTimeToString(format, datetime, dateOnly, timeOnly, locale));
}

int  PythonQtWrapper_QCalendar::dayOfWeek(QCalendar* theWrappedObject, QDate  date) const
{
  return ( theWrappedObject->dayOfWeek(date));
}

int  PythonQtWrapper_QCalendar::daysInMonth(QCalendar* theWrappedObject, int  month, int  year) const
{
  return ( theWrappedObject->daysInMonth(month, year));
}

int  PythonQtWrapper_QCalendar::daysInYear(QCalendar* theWrappedObject, int  year) const
{
  return ( theWrappedObject->daysInYear(year));
}

bool  PythonQtWrapper_QCalendar::hasYearZero(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->hasYearZero());
}

bool  PythonQtWrapper_QCalendar::isDateValid(QCalendar* theWrappedObject, int  year, int  month, int  day) const
{
  return ( theWrappedObject->isDateValid(year, month, day));
}

bool  PythonQtWrapper_QCalendar::isGregorian(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isGregorian());
}

bool  PythonQtWrapper_QCalendar::isLeapYear(QCalendar* theWrappedObject, int  year) const
{
  return ( theWrappedObject->isLeapYear(year));
}

bool  PythonQtWrapper_QCalendar::isLunar(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isLunar());
}

bool  PythonQtWrapper_QCalendar::isLuniSolar(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isLuniSolar());
}

bool  PythonQtWrapper_QCalendar::isProleptic(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isProleptic());
}

bool  PythonQtWrapper_QCalendar::isSolar(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isSolar());
}

bool  PythonQtWrapper_QCalendar::isValid(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QCalendar::maximumDaysInMonth(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->maximumDaysInMonth());
}

int  PythonQtWrapper_QCalendar::maximumMonthsInYear(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->maximumMonthsInYear());
}

int  PythonQtWrapper_QCalendar::minimumDaysInMonth(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->minimumDaysInMonth());
}

QString  PythonQtWrapper_QCalendar::monthName(QCalendar* theWrappedObject, const QLocale&  locale, int  month, int  year, QLocale::FormatType  format) const
{
  return ( theWrappedObject->monthName(locale, month, year, format));
}

int  PythonQtWrapper_QCalendar::monthsInYear(QCalendar* theWrappedObject, int  year) const
{
  return ( theWrappedObject->monthsInYear(year));
}

QString  PythonQtWrapper_QCalendar::name(QCalendar* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

QCalendar::YearMonthDay  PythonQtWrapper_QCalendar::partsFromDate(QCalendar* theWrappedObject, QDate  date) const
{
  return ( theWrappedObject->partsFromDate(date));
}

QString  PythonQtWrapper_QCalendar::standaloneMonthName(QCalendar* theWrappedObject, const QLocale&  locale, int  month, int  year, QLocale::FormatType  format) const
{
  return ( theWrappedObject->standaloneMonthName(locale, month, year, format));
}

QString  PythonQtWrapper_QCalendar::standaloneWeekDayName(QCalendar* theWrappedObject, const QLocale&  locale, int  day, QLocale::FormatType  format) const
{
  return ( theWrappedObject->standaloneWeekDayName(locale, day, format));
}

QString  PythonQtWrapper_QCalendar::weekDayName(QCalendar* theWrappedObject, const QLocale&  locale, int  day, QLocale::FormatType  format) const
{
  return ( theWrappedObject->weekDayName(locale, day, format));
}



PythonQtShell_QCalendar__YearMonthDay::~PythonQtShell_QCalendar__YearMonthDay() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCalendar::YearMonthDay* PythonQtWrapper_QCalendar__YearMonthDay::new_QCalendar__YearMonthDay()
{ 
return new PythonQtShell_QCalendar__YearMonthDay(); }

QCalendar::YearMonthDay* PythonQtWrapper_QCalendar__YearMonthDay::new_QCalendar__YearMonthDay(int  y, int  m, int  d)
{ 
return new PythonQtShell_QCalendar__YearMonthDay(y, m, d); }

bool  PythonQtWrapper_QCalendar__YearMonthDay::isValid(QCalendar::YearMonthDay* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}



QCborArray* PythonQtWrapper_QCborArray::new_QCborArray()
{ 
return new QCborArray(); }

QCborArray* PythonQtWrapper_QCborArray::new_QCborArray(const QCborArray&  other)
{ 
return new QCborArray(other); }

void PythonQtWrapper_QCborArray::append(QCborArray* theWrappedObject, const QCborValue&  value)
{
  ( theWrappedObject->append(value));
}

QCborValue  PythonQtWrapper_QCborArray::at(QCborArray* theWrappedObject, qsizetype  i) const
{
  return ( theWrappedObject->at(i));
}

void PythonQtWrapper_QCborArray::clear(QCborArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QCborArray::compare(QCborArray* theWrappedObject, const QCborArray&  other) const
{
  return ( theWrappedObject->compare(other));
}

bool  PythonQtWrapper_QCborArray::contains(QCborArray* theWrappedObject, const QCborValue&  value) const
{
  return ( theWrappedObject->contains(value));
}

bool  PythonQtWrapper_QCborArray::empty(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QCborValue  PythonQtWrapper_QCborArray::first(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->first());
}

QCborArray  PythonQtWrapper_QCborArray::static_QCborArray_fromJsonArray(const QJsonArray&  array)
{
  return (QCborArray::fromJsonArray(array));
}

QCborArray  PythonQtWrapper_QCborArray::static_QCborArray_fromStringList(const QStringList&  list)
{
  return (QCborArray::fromStringList(list));
}

QCborArray  PythonQtWrapper_QCborArray::static_QCborArray_fromVariantList(const QList<QVariant >&  list)
{
  return (QCborArray::fromVariantList(list));
}

void PythonQtWrapper_QCborArray::insert(QCborArray* theWrappedObject, qsizetype  i, const QCborValue&  value)
{
  ( theWrappedObject->insert(i, value));
}

bool  PythonQtWrapper_QCborArray::isEmpty(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QCborValue  PythonQtWrapper_QCborArray::last(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->last());
}

bool  PythonQtWrapper_QCborArray::__ne__(QCborArray* theWrappedObject, const QCborArray&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QCborArray  PythonQtWrapper_QCborArray::__add__(QCborArray* theWrappedObject, const QCborValue&  v) const
{
  return ( (*theWrappedObject)+ v);
}

QCborArray*  PythonQtWrapper_QCborArray::__iadd__(QCborArray* theWrappedObject, const QCborValue&  v)
{
  return &( (*theWrappedObject)+= v);
}

bool  PythonQtWrapper_QCborArray::__lt__(QCborArray* theWrappedObject, const QCborArray&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QCborArray::writeTo(QCborArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QCborArray*  PythonQtWrapper_QCborArray::__lshift__(QCborArray* theWrappedObject, const QCborValue&  v)
{
  return &( (*theWrappedObject) <<v);
}

QCborArray*  PythonQtWrapper_QCborArray::operator_assign(QCborArray* theWrappedObject, const QCborArray&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCborArray::__eq__(QCborArray* theWrappedObject, const QCborArray&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QCborArray::readFrom(QCborArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QCborValue  PythonQtWrapper_QCborArray::operator_subscript(QCborArray* theWrappedObject, qsizetype  i) const
{
  return ( (*theWrappedObject)[i]);
}

void PythonQtWrapper_QCborArray::pop_back(QCborArray* theWrappedObject)
{
  ( theWrappedObject->pop_back());
}

void PythonQtWrapper_QCborArray::pop_front(QCborArray* theWrappedObject)
{
  ( theWrappedObject->pop_front());
}

void PythonQtWrapper_QCborArray::prepend(QCborArray* theWrappedObject, const QCborValue&  value)
{
  ( theWrappedObject->prepend(value));
}

void PythonQtWrapper_QCborArray::push_back(QCborArray* theWrappedObject, const QCborValue&  t)
{
  ( theWrappedObject->push_back(t));
}

void PythonQtWrapper_QCborArray::push_front(QCborArray* theWrappedObject, const QCborValue&  t)
{
  ( theWrappedObject->push_front(t));
}

void PythonQtWrapper_QCborArray::removeAt(QCborArray* theWrappedObject, qsizetype  i)
{
  ( theWrappedObject->removeAt(i));
}

void PythonQtWrapper_QCborArray::removeFirst(QCborArray* theWrappedObject)
{
  ( theWrappedObject->removeFirst());
}

void PythonQtWrapper_QCborArray::removeLast(QCborArray* theWrappedObject)
{
  ( theWrappedObject->removeLast());
}

qsizetype  PythonQtWrapper_QCborArray::size(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QCborArray::swap(QCborArray* theWrappedObject, QCborArray&  other)
{
  ( theWrappedObject->swap(other));
}

QCborValue  PythonQtWrapper_QCborArray::takeAt(QCborArray* theWrappedObject, qsizetype  i)
{
  return ( theWrappedObject->takeAt(i));
}

QCborValue  PythonQtWrapper_QCborArray::takeFirst(QCborArray* theWrappedObject)
{
  return ( theWrappedObject->takeFirst());
}

QCborValue  PythonQtWrapper_QCborArray::takeLast(QCborArray* theWrappedObject)
{
  return ( theWrappedObject->takeLast());
}

QCborValue  PythonQtWrapper_QCborArray::toCborValue(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->toCborValue());
}

QJsonArray  PythonQtWrapper_QCborArray::toJsonArray(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->toJsonArray());
}

QList<QVariant >  PythonQtWrapper_QCborArray::toVariantList(QCborArray* theWrappedObject) const
{
  return ( theWrappedObject->toVariantList());
}

QString PythonQtWrapper_QCborArray::py_toString(QCborArray* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QCborError::~PythonQtShell_QCborError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCborError* PythonQtWrapper_QCborError::new_QCborError()
{ 
return new PythonQtShell_QCborError(); }

QString  PythonQtWrapper_QCborError::toString(QCborError* theWrappedObject) const
{
  return ( theWrappedObject->toString());
}

QString PythonQtWrapper_QCborError::py_toString(QCborError* obj) { return obj->toString(); }


QCborMap* PythonQtWrapper_QCborMap::new_QCborMap()
{ 
return new QCborMap(); }

QCborMap* PythonQtWrapper_QCborMap::new_QCborMap(const QCborMap&  other)
{ 
return new QCborMap(other); }

void PythonQtWrapper_QCborMap::clear(QCborMap* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QCborMap::compare(QCborMap* theWrappedObject, const QCborMap&  other) const
{
  return ( theWrappedObject->compare(other));
}

bool  PythonQtWrapper_QCborMap::contains(QCborMap* theWrappedObject, const QCborValue&  key) const
{
  return ( theWrappedObject->contains(key));
}

bool  PythonQtWrapper_QCborMap::contains(QCborMap* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->contains(key));
}

bool  PythonQtWrapper_QCborMap::contains(QCborMap* theWrappedObject, qint64  key) const
{
  return ( theWrappedObject->contains(key));
}

bool  PythonQtWrapper_QCborMap::empty(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->empty());
}

QCborMap  PythonQtWrapper_QCborMap::static_QCborMap_fromJsonObject(const QJsonObject&  o)
{
  return (QCborMap::fromJsonObject(o));
}

QCborMap  PythonQtWrapper_QCborMap::static_QCborMap_fromVariantHash(const QHash<QString , QVariant >&  hash)
{
  return (QCborMap::fromVariantHash(hash));
}

QCborMap  PythonQtWrapper_QCborMap::static_QCborMap_fromVariantMap(const QMap<QString , QVariant >&  map)
{
  return (QCborMap::fromVariantMap(map));
}

bool  PythonQtWrapper_QCborMap::isEmpty(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QVector<QCborValue >  PythonQtWrapper_QCborMap::keys(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

bool  PythonQtWrapper_QCborMap::__ne__(QCborMap* theWrappedObject, const QCborMap&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QCborMap::__lt__(QCborMap* theWrappedObject, const QCborMap&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QCborMap::writeTo(QCborMap* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QCborMap*  PythonQtWrapper_QCborMap::operator_assign(QCborMap* theWrappedObject, const QCborMap&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCborMap::__eq__(QCborMap* theWrappedObject, const QCborMap&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QCborMap::readFrom(QCborMap* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QCborValue  PythonQtWrapper_QCborMap::operator_subscript(QCborMap* theWrappedObject, const QCborValue&  key) const
{
  return ( (*theWrappedObject)[key]);
}

const QCborValue  PythonQtWrapper_QCborMap::operator_subscript(QCborMap* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

const QCborValue  PythonQtWrapper_QCborMap::operator_subscript(QCborMap* theWrappedObject, qint64  key) const
{
  return ( (*theWrappedObject)[key]);
}

void PythonQtWrapper_QCborMap::remove(QCborMap* theWrappedObject, const QCborValue&  key)
{
  ( theWrappedObject->remove(key));
}

void PythonQtWrapper_QCborMap::remove(QCborMap* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->remove(key));
}

void PythonQtWrapper_QCborMap::remove(QCborMap* theWrappedObject, qint64  key)
{
  ( theWrappedObject->remove(key));
}

qsizetype  PythonQtWrapper_QCborMap::size(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QCborMap::swap(QCborMap* theWrappedObject, QCborMap&  other)
{
  ( theWrappedObject->swap(other));
}

QCborValue  PythonQtWrapper_QCborMap::take(QCborMap* theWrappedObject, const QCborValue&  key)
{
  return ( theWrappedObject->take(key));
}

QCborValue  PythonQtWrapper_QCborMap::take(QCborMap* theWrappedObject, const QString&  key)
{
  return ( theWrappedObject->take(key));
}

QCborValue  PythonQtWrapper_QCborMap::take(QCborMap* theWrappedObject, qint64  key)
{
  return ( theWrappedObject->take(key));
}

QCborValue  PythonQtWrapper_QCborMap::toCborValue(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->toCborValue());
}

QJsonObject  PythonQtWrapper_QCborMap::toJsonObject(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->toJsonObject());
}

QHash<QString , QVariant >  PythonQtWrapper_QCborMap::toVariantHash(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->toVariantHash());
}

QMap<QString , QVariant >  PythonQtWrapper_QCborMap::toVariantMap(QCborMap* theWrappedObject) const
{
  return ( theWrappedObject->toVariantMap());
}

QCborValue  PythonQtWrapper_QCborMap::value(QCborMap* theWrappedObject, const QCborValue&  key) const
{
  return ( theWrappedObject->value(key));
}

QCborValue  PythonQtWrapper_QCborMap::value(QCborMap* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->value(key));
}

QCborValue  PythonQtWrapper_QCborMap::value(QCborMap* theWrappedObject, qint64  key) const
{
  return ( theWrappedObject->value(key));
}

QString PythonQtWrapper_QCborMap::py_toString(QCborMap* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QCborParserError::~PythonQtShell_QCborParserError() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QCborParserError* PythonQtWrapper_QCborParserError::new_QCborParserError()
{ 
return new PythonQtShell_QCborParserError(); }

QString  PythonQtWrapper_QCborParserError::errorString(QCborParserError* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}



QCborStreamReader* PythonQtWrapper_QCborStreamReader::new_QCborStreamReader()
{ 
return new QCborStreamReader(); }

QCborStreamReader* PythonQtWrapper_QCborStreamReader::new_QCborStreamReader(QIODevice*  device)
{ 
return new QCborStreamReader(device); }

QCborStreamReader* PythonQtWrapper_QCborStreamReader::new_QCborStreamReader(const QByteArray&  data)
{ 
return new QCborStreamReader(data); }

QCborStreamReader* PythonQtWrapper_QCborStreamReader::new_QCborStreamReader(const char*  data, qsizetype  len)
{ 
return new QCborStreamReader(data, len); }

QCborStreamReader* PythonQtWrapper_QCborStreamReader::new_QCborStreamReader(const unsigned char*  data, qsizetype  len)
{ 
return new QCborStreamReader(data, len); }

void PythonQtWrapper_QCborStreamReader::addData(QCborStreamReader* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

void PythonQtWrapper_QCborStreamReader::addData(QCborStreamReader* theWrappedObject, const char*  data, qsizetype  len)
{
  ( theWrappedObject->addData(data, len));
}

void PythonQtWrapper_QCborStreamReader::addData(QCborStreamReader* theWrappedObject, const unsigned char*  data, qsizetype  len)
{
  ( theWrappedObject->addData(data, len));
}

void PythonQtWrapper_QCborStreamReader::clear(QCborStreamReader* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QCborStreamReader::containerDepth(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->containerDepth());
}

qint64  PythonQtWrapper_QCborStreamReader::currentOffset(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->currentOffset());
}

qsizetype  PythonQtWrapper_QCborStreamReader::currentStringChunkSize(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->currentStringChunkSize());
}

QIODevice*  PythonQtWrapper_QCborStreamReader::device(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QCborStreamReader::enterContainer(QCborStreamReader* theWrappedObject)
{
  return ( theWrappedObject->enterContainer());
}

bool  PythonQtWrapper_QCborStreamReader::hasNext(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

bool  PythonQtWrapper_QCborStreamReader::isArray(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QCborStreamReader::isBool(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isBool());
}

bool  PythonQtWrapper_QCborStreamReader::isByteArray(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isByteArray());
}

bool  PythonQtWrapper_QCborStreamReader::isContainer(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isContainer());
}

bool  PythonQtWrapper_QCborStreamReader::isDouble(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isDouble());
}

bool  PythonQtWrapper_QCborStreamReader::isFalse(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isFalse());
}

bool  PythonQtWrapper_QCborStreamReader::isFloat(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isFloat());
}

bool  PythonQtWrapper_QCborStreamReader::isFloat16(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isFloat16());
}

bool  PythonQtWrapper_QCborStreamReader::isInteger(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isInteger());
}

bool  PythonQtWrapper_QCborStreamReader::isInvalid(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isInvalid());
}

bool  PythonQtWrapper_QCborStreamReader::isLengthKnown(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isLengthKnown());
}

bool  PythonQtWrapper_QCborStreamReader::isMap(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isMap());
}

bool  PythonQtWrapper_QCborStreamReader::isNegativeInteger(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isNegativeInteger());
}

bool  PythonQtWrapper_QCborStreamReader::isNull(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QCborStreamReader::isSimpleType(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isSimpleType());
}

bool  PythonQtWrapper_QCborStreamReader::isSimpleType(QCborStreamReader* theWrappedObject, QCborSimpleType  st) const
{
  return ( theWrappedObject->isSimpleType(st));
}

bool  PythonQtWrapper_QCborStreamReader::isString(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QCborStreamReader::isTag(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isTag());
}

bool  PythonQtWrapper_QCborStreamReader::isTrue(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isTrue());
}

bool  PythonQtWrapper_QCborStreamReader::isUndefined(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QCborStreamReader::isUnsignedInteger(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isUnsignedInteger());
}

bool  PythonQtWrapper_QCborStreamReader::isValid(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QCborError  PythonQtWrapper_QCborStreamReader::lastError(QCborStreamReader* theWrappedObject)
{
  return ( theWrappedObject->lastError());
}

bool  PythonQtWrapper_QCborStreamReader::leaveContainer(QCborStreamReader* theWrappedObject)
{
  return ( theWrappedObject->leaveContainer());
}

quint64  PythonQtWrapper_QCborStreamReader::length(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QCborStreamReader::next(QCborStreamReader* theWrappedObject, int  maxRecursion)
{
  return ( theWrappedObject->next(maxRecursion));
}

QCborStreamReader::Type  PythonQtWrapper_QCborStreamReader::parentContainerType(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->parentContainerType());
}

void PythonQtWrapper_QCborStreamReader::reparse(QCborStreamReader* theWrappedObject)
{
  ( theWrappedObject->reparse());
}

void PythonQtWrapper_QCborStreamReader::reset(QCborStreamReader* theWrappedObject)
{
  ( theWrappedObject->reset());
}

void PythonQtWrapper_QCborStreamReader::setDevice(QCborStreamReader* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

bool  PythonQtWrapper_QCborStreamReader::toBool(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toBool());
}

double  PythonQtWrapper_QCborStreamReader::toDouble(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toDouble());
}

float  PythonQtWrapper_QCborStreamReader::toFloat(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toFloat());
}

qint64  PythonQtWrapper_QCborStreamReader::toInteger(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toInteger());
}

QCborSimpleType  PythonQtWrapper_QCborStreamReader::toSimpleType(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toSimpleType());
}

quint64  PythonQtWrapper_QCborStreamReader::toUnsignedInteger(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->toUnsignedInteger());
}

QCborStreamReader::Type  PythonQtWrapper_QCborStreamReader::type(QCborStreamReader* theWrappedObject) const
{
  return ( theWrappedObject->type());
}



QCborStreamWriter* PythonQtWrapper_QCborStreamWriter::new_QCborStreamWriter(QByteArray*  data)
{ 
return new QCborStreamWriter(data); }

QCborStreamWriter* PythonQtWrapper_QCborStreamWriter::new_QCborStreamWriter(QIODevice*  device)
{ 
return new QCborStreamWriter(device); }

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, QCborKnownTags  tag)
{
  ( theWrappedObject->append(tag));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, QCborSimpleType  st)
{
  ( theWrappedObject->append(st));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, QLatin1String  str)
{
  ( theWrappedObject->append(str));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, QStringView  str)
{
  ( theWrappedObject->append(str));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, bool  b)
{
  ( theWrappedObject->append(b));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, const QByteArray&  ba)
{
  ( theWrappedObject->append(ba));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, double  d)
{
  ( theWrappedObject->append(d));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, float  f)
{
  ( theWrappedObject->append(f));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, int  i)
{
  ( theWrappedObject->append(i));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, qint64  i)
{
  ( theWrappedObject->append(i));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, quint64  u)
{
  ( theWrappedObject->append(u));
}

void PythonQtWrapper_QCborStreamWriter::append(QCborStreamWriter* theWrappedObject, uint  u)
{
  ( theWrappedObject->append(u));
}

void PythonQtWrapper_QCborStreamWriter::appendByteString(QCborStreamWriter* theWrappedObject, const char*  data, qsizetype  len)
{
  ( theWrappedObject->appendByteString(data, len));
}

void PythonQtWrapper_QCborStreamWriter::appendNull(QCborStreamWriter* theWrappedObject)
{
  ( theWrappedObject->appendNull());
}

void PythonQtWrapper_QCborStreamWriter::appendTextString(QCborStreamWriter* theWrappedObject, const char*  utf8, qsizetype  len)
{
  ( theWrappedObject->appendTextString(utf8, len));
}

void PythonQtWrapper_QCborStreamWriter::appendUndefined(QCborStreamWriter* theWrappedObject)
{
  ( theWrappedObject->appendUndefined());
}

QIODevice*  PythonQtWrapper_QCborStreamWriter::device(QCborStreamWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

bool  PythonQtWrapper_QCborStreamWriter::endArray(QCborStreamWriter* theWrappedObject)
{
  return ( theWrappedObject->endArray());
}

bool  PythonQtWrapper_QCborStreamWriter::endMap(QCborStreamWriter* theWrappedObject)
{
  return ( theWrappedObject->endMap());
}

void PythonQtWrapper_QCborStreamWriter::setDevice(QCborStreamWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QCborStreamWriter::startArray(QCborStreamWriter* theWrappedObject)
{
  ( theWrappedObject->startArray());
}

void PythonQtWrapper_QCborStreamWriter::startArray(QCborStreamWriter* theWrappedObject, quint64  count)
{
  ( theWrappedObject->startArray(count));
}

void PythonQtWrapper_QCborStreamWriter::startMap(QCborStreamWriter* theWrappedObject)
{
  ( theWrappedObject->startMap());
}

void PythonQtWrapper_QCborStreamWriter::startMap(QCborStreamWriter* theWrappedObject, quint64  count)
{
  ( theWrappedObject->startMap(count));
}



QCborValue* PythonQtWrapper_QCborValue::new_QCborValue()
{ 
return new QCborValue(); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(QCborKnownTags  t_, const QCborValue&  tv)
{ 
return new QCborValue(t_, tv); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(QCborSimpleType  st)
{ 
return new QCborValue(st); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(QCborValue::Type  t_)
{ 
return new QCborValue(t_); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(bool  b_)
{ 
return new QCborValue(b_); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QByteArray&  ba)
{ 
return new QCborValue(ba); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QCborArray&  a)
{ 
return new QCborValue(a); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QCborMap&  m)
{ 
return new QCborValue(m); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QCborValue&  other)
{ 
return new QCborValue(other); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QDateTime&  dt)
{ 
return new QCborValue(dt); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QRegularExpression&  rx)
{ 
return new QCborValue(rx); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QString&  s)
{ 
return new QCborValue(s); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QUrl&  url)
{ 
return new QCborValue(url); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const QUuid&  uuid)
{ 
return new QCborValue(uuid); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(const char*  s)
{ 
return new QCborValue(s); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(double  v)
{ 
return new QCborValue(v); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(int  i)
{ 
return new QCborValue(i); }

QCborValue* PythonQtWrapper_QCborValue::new_QCborValue(qint64  i)
{ 
return new QCborValue(i); }

int  PythonQtWrapper_QCborValue::compare(QCborValue* theWrappedObject, const QCborValue&  other) const
{
  return ( theWrappedObject->compare(other));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromCbor(QCborStreamReader&  reader)
{
  return (QCborValue::fromCbor(reader));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromCbor(const QByteArray&  ba, QCborParserError*  error)
{
  return (QCborValue::fromCbor(ba, error));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromCbor(const char*  data, qsizetype  len, QCborParserError*  error)
{
  return (QCborValue::fromCbor(data, len, error));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromCbor(const unsigned char*  data, qsizetype  len, QCborParserError*  error)
{
  return (QCborValue::fromCbor(data, len, error));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromJsonValue(const QJsonValue&  v)
{
  return (QCborValue::fromJsonValue(v));
}

QCborValue  PythonQtWrapper_QCborValue::static_QCborValue_fromVariant(const QVariant&  variant)
{
  return (QCborValue::fromVariant(variant));
}

bool  PythonQtWrapper_QCborValue::isArray(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isArray());
}

bool  PythonQtWrapper_QCborValue::isBool(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isBool());
}

bool  PythonQtWrapper_QCborValue::isByteArray(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isByteArray());
}

bool  PythonQtWrapper_QCborValue::isContainer(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isContainer());
}

bool  PythonQtWrapper_QCborValue::isDateTime(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isDateTime());
}

bool  PythonQtWrapper_QCborValue::isDouble(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isDouble());
}

bool  PythonQtWrapper_QCborValue::isFalse(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isFalse());
}

bool  PythonQtWrapper_QCborValue::isInteger(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isInteger());
}

bool  PythonQtWrapper_QCborValue::isInvalid(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isInvalid());
}

bool  PythonQtWrapper_QCborValue::isMap(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isMap());
}

bool  PythonQtWrapper_QCborValue::isNull(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QCborValue::isRegularExpression(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isRegularExpression());
}

bool  PythonQtWrapper_QCborValue::isSimpleType(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isSimpleType());
}

bool  PythonQtWrapper_QCborValue::isSimpleType(QCborValue* theWrappedObject, QCborSimpleType  st) const
{
  return ( theWrappedObject->isSimpleType(st));
}

bool  PythonQtWrapper_QCborValue::isString(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isString());
}

bool  PythonQtWrapper_QCborValue::isTag(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isTag());
}

bool  PythonQtWrapper_QCborValue::isTrue(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isTrue());
}

bool  PythonQtWrapper_QCborValue::isUndefined(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isUndefined());
}

bool  PythonQtWrapper_QCborValue::isUrl(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isUrl());
}

bool  PythonQtWrapper_QCborValue::isUuid(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->isUuid());
}

bool  PythonQtWrapper_QCborValue::__ne__(QCborValue* theWrappedObject, const QCborValue&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QCborValue::__lt__(QCborValue* theWrappedObject, const QCborValue&  other) const
{
  return ( (*theWrappedObject)< other);
}

void PythonQtWrapper_QCborValue::writeTo(QCborValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

QCborValue*  PythonQtWrapper_QCborValue::operator_assign(QCborValue* theWrappedObject, const QCborValue&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QCborValue::__eq__(QCborValue* theWrappedObject, const QCborValue&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QCborValue::readFrom(QCborValue* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

const QCborValue  PythonQtWrapper_QCborValue::operator_subscript(QCborValue* theWrappedObject, const QString&  key) const
{
  return ( (*theWrappedObject)[key]);
}

const QCborValue  PythonQtWrapper_QCborValue::operator_subscript(QCborValue* theWrappedObject, qint64  key) const
{
  return ( (*theWrappedObject)[key]);
}

void PythonQtWrapper_QCborValue::swap(QCborValue* theWrappedObject, QCborValue&  other)
{
  ( theWrappedObject->swap(other));
}

QCborValue  PythonQtWrapper_QCborValue::taggedValue(QCborValue* theWrappedObject, const QCborValue&  defaultValue) const
{
  return ( theWrappedObject->taggedValue(defaultValue));
}

QCborArray  PythonQtWrapper_QCborValue::toArray(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->toArray());
}

QCborArray  PythonQtWrapper_QCborValue::toArray(QCborValue* theWrappedObject, const QCborArray&  defaultValue) const
{
  return ( theWrappedObject->toArray(defaultValue));
}

bool  PythonQtWrapper_QCborValue::toBool(QCborValue* theWrappedObject, bool  defaultValue) const
{
  return ( theWrappedObject->toBool(defaultValue));
}

QByteArray  PythonQtWrapper_QCborValue::toByteArray(QCborValue* theWrappedObject, const QByteArray&  defaultValue) const
{
  return ( theWrappedObject->toByteArray(defaultValue));
}

void PythonQtWrapper_QCborValue::toCbor(QCborValue* theWrappedObject, QCborStreamWriter&  writer, QCborValue::EncodingOptions  opt)
{
  ( theWrappedObject->toCbor(writer, opt));
}

QByteArray  PythonQtWrapper_QCborValue::toCbor(QCborValue* theWrappedObject, QCborValue::EncodingOptions  opt)
{
  return ( theWrappedObject->toCbor(opt));
}

QDateTime  PythonQtWrapper_QCborValue::toDateTime(QCborValue* theWrappedObject, const QDateTime&  defaultValue) const
{
  return ( theWrappedObject->toDateTime(defaultValue));
}

QString  PythonQtWrapper_QCborValue::toDiagnosticNotation(QCborValue* theWrappedObject, QCborValue::DiagnosticNotationOptions  opts) const
{
  return ( theWrappedObject->toDiagnosticNotation(opts));
}

double  PythonQtWrapper_QCborValue::toDouble(QCborValue* theWrappedObject, double  defaultValue) const
{
  return ( theWrappedObject->toDouble(defaultValue));
}

qint64  PythonQtWrapper_QCborValue::toInteger(QCborValue* theWrappedObject, qint64  defaultValue) const
{
  return ( theWrappedObject->toInteger(defaultValue));
}

QJsonValue  PythonQtWrapper_QCborValue::toJsonValue(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->toJsonValue());
}

QCborMap  PythonQtWrapper_QCborValue::toMap(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->toMap());
}

QCborMap  PythonQtWrapper_QCborValue::toMap(QCborValue* theWrappedObject, const QCborMap&  defaultValue) const
{
  return ( theWrappedObject->toMap(defaultValue));
}

QRegularExpression  PythonQtWrapper_QCborValue::toRegularExpression(QCborValue* theWrappedObject, const QRegularExpression&  defaultValue) const
{
  return ( theWrappedObject->toRegularExpression(defaultValue));
}

QCborSimpleType  PythonQtWrapper_QCborValue::toSimpleType(QCborValue* theWrappedObject, QCborSimpleType  defaultValue) const
{
  return ( theWrappedObject->toSimpleType(defaultValue));
}

QString  PythonQtWrapper_QCborValue::toString(QCborValue* theWrappedObject, const QString&  defaultValue) const
{
  return ( theWrappedObject->toString(defaultValue));
}

QUrl  PythonQtWrapper_QCborValue::toUrl(QCborValue* theWrappedObject, const QUrl&  defaultValue) const
{
  return ( theWrappedObject->toUrl(defaultValue));
}

QUuid  PythonQtWrapper_QCborValue::toUuid(QCborValue* theWrappedObject, const QUuid&  defaultValue) const
{
  return ( theWrappedObject->toUuid(defaultValue));
}

QVariant  PythonQtWrapper_QCborValue::toVariant(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->toVariant());
}

QCborValue::Type  PythonQtWrapper_QCborValue::type(QCborValue* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QCborValue::py_toString(QCborValue* obj) { return obj->toString(); }


PythonQtShell_QChildEvent::~PythonQtShell_QChildEvent() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QChildEvent* PythonQtWrapper_QChildEvent::new_QChildEvent(QEvent::Type  type, QObject*  child)
{ 
return new PythonQtShell_QChildEvent(type, child); }

bool  PythonQtWrapper_QChildEvent::added(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->added());
}

QObject*  PythonQtWrapper_QChildEvent::child(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->child());
}

bool  PythonQtWrapper_QChildEvent::polished(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->polished());
}

bool  PythonQtWrapper_QChildEvent::removed(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->removed());
}



QCollator* PythonQtWrapper_QCollator::new_QCollator()
{ 
return new QCollator(); }

QCollator* PythonQtWrapper_QCollator::new_QCollator(const QCollator&  arg__1)
{ 
return new QCollator(arg__1); }

QCollator* PythonQtWrapper_QCollator::new_QCollator(const QLocale&  locale)
{ 
return new QCollator(locale); }

Qt::CaseSensitivity  PythonQtWrapper_QCollator::caseSensitivity(QCollator* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

int  PythonQtWrapper_QCollator::compare(QCollator* theWrappedObject, const QChar*  s1, int  len1, const QChar*  s2, int  len2) const
{
  return ( theWrappedObject->compare(s1, len1, s2, len2));
}

int  PythonQtWrapper_QCollator::compare(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const
{
  return ( theWrappedObject->compare(s1, s2));
}

bool  PythonQtWrapper_QCollator::ignorePunctuation(QCollator* theWrappedObject) const
{
  return ( theWrappedObject->ignorePunctuation());
}

QLocale  PythonQtWrapper_QCollator::locale(QCollator* theWrappedObject) const
{
  return ( theWrappedObject->locale());
}

bool  PythonQtWrapper_QCollator::numericMode(QCollator* theWrappedObject) const
{
  return ( theWrappedObject->numericMode());
}

bool  PythonQtWrapper_QCollator::operator_cast_(QCollator* theWrappedObject, const QString&  s1, const QString&  s2) const
{
  return ( theWrappedObject->operator()(s1, s2));
}

QCollator*  PythonQtWrapper_QCollator::operator_assign(QCollator* theWrappedObject, const QCollator&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

void PythonQtWrapper_QCollator::setCaseSensitivity(QCollator* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

void PythonQtWrapper_QCollator::setIgnorePunctuation(QCollator* theWrappedObject, bool  on)
{
  ( theWrappedObject->setIgnorePunctuation(on));
}

void PythonQtWrapper_QCollator::setLocale(QCollator* theWrappedObject, const QLocale&  locale)
{
  ( theWrappedObject->setLocale(locale));
}

void PythonQtWrapper_QCollator::setNumericMode(QCollator* theWrappedObject, bool  on)
{
  ( theWrappedObject->setNumericMode(on));
}

QCollatorSortKey  PythonQtWrapper_QCollator::sortKey(QCollator* theWrappedObject, const QString&  string) const
{
  return ( theWrappedObject->sortKey(string));
}

void PythonQtWrapper_QCollator::swap(QCollator* theWrappedObject, QCollator&  other)
{
  ( theWrappedObject->swap(other));
}



QCollatorSortKey* PythonQtWrapper_QCollatorSortKey::new_QCollatorSortKey(const QCollatorSortKey&  other)
{ 
return new QCollatorSortKey(other); }

int  PythonQtWrapper_QCollatorSortKey::compare(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  key) const
{
  return ( theWrappedObject->compare(key));
}

bool  PythonQtWrapper_QCollatorSortKey::__lt__(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  rhs)
{
  return ( (*theWrappedObject)< rhs);
}

QCollatorSortKey*  PythonQtWrapper_QCollatorSortKey::operator_assign(QCollatorSortKey* theWrappedObject, const QCollatorSortKey&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QCollatorSortKey::swap(QCollatorSortKey* theWrappedObject, QCollatorSortKey&  other)
{
  ( theWrappedObject->swap(other));
}



QCommandLineOption* PythonQtWrapper_QCommandLineOption::new_QCommandLineOption(const QCommandLineOption&  other)
{ 
return new QCommandLineOption(other); }

QCommandLineOption* PythonQtWrapper_QCommandLineOption::new_QCommandLineOption(const QString&  name)
{ 
return new QCommandLineOption(name); }

QCommandLineOption* PythonQtWrapper_QCommandLineOption::new_QCommandLineOption(const QString&  name, const QString&  description, const QString&  valueName, const QString&  defaultValue)
{ 
return new QCommandLineOption(name, description, valueName, defaultValue); }

QCommandLineOption* PythonQtWrapper_QCommandLineOption::new_QCommandLineOption(const QStringList&  names)
{ 
return new QCommandLineOption(names); }

QCommandLineOption* PythonQtWrapper_QCommandLineOption::new_QCommandLineOption(const QStringList&  names, const QString&  description, const QString&  valueName, const QString&  defaultValue)
{ 
return new QCommandLineOption(names, description, valueName, defaultValue); }

QStringList  PythonQtWrapper_QCommandLineOption::defaultValues(QCommandLineOption* theWrappedObject) const
{
  return ( theWrappedObject->defaultValues());
}

QString  PythonQtWrapper_QCommandLineOption::description(QCommandLineOption* theWrappedObject) const
{
  return ( theWrappedObject->description());
}

bool  PythonQtWrapper_QCommandLineOption::isHidden(QCommandLineOption* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

QStringList  PythonQtWrapper_QCommandLineOption::names(QCommandLineOption* theWrappedObject) const
{
  return ( theWrappedObject->names());
}

QCommandLineOption*  PythonQtWrapper_QCommandLineOption::operator_assign(QCommandLineOption* theWrappedObject, const QCommandLineOption&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QCommandLineOption::setDefaultValue(QCommandLineOption* theWrappedObject, const QString&  defaultValue)
{
  ( theWrappedObject->setDefaultValue(defaultValue));
}

void PythonQtWrapper_QCommandLineOption::setDefaultValues(QCommandLineOption* theWrappedObject, const QStringList&  defaultValues)
{
  ( theWrappedObject->setDefaultValues(defaultValues));
}

void PythonQtWrapper_QCommandLineOption::setDescription(QCommandLineOption* theWrappedObject, const QString&  description)
{
  ( theWrappedObject->setDescription(description));
}

void PythonQtWrapper_QCommandLineOption::setHidden(QCommandLineOption* theWrappedObject, bool  hidden)
{
  ( theWrappedObject->setHidden(hidden));
}

void PythonQtWrapper_QCommandLineOption::setValueName(QCommandLineOption* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setValueName(name));
}

void PythonQtWrapper_QCommandLineOption::swap(QCommandLineOption* theWrappedObject, QCommandLineOption&  other)
{
  ( theWrappedObject->swap(other));
}

QString  PythonQtWrapper_QCommandLineOption::valueName(QCommandLineOption* theWrappedObject) const
{
  return ( theWrappedObject->valueName());
}



QCommandLineParser* PythonQtWrapper_QCommandLineParser::new_QCommandLineParser()
{ 
return new QCommandLineParser(); }

QCommandLineOption  PythonQtWrapper_QCommandLineParser::addHelpOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addHelpOption());
}

bool  PythonQtWrapper_QCommandLineParser::addOption(QCommandLineParser* theWrappedObject, const QCommandLineOption&  commandLineOption)
{
  return ( theWrappedObject->addOption(commandLineOption));
}

bool  PythonQtWrapper_QCommandLineParser::addOptions(QCommandLineParser* theWrappedObject, const QList<QCommandLineOption >&  options)
{
  return ( theWrappedObject->addOptions(options));
}

void PythonQtWrapper_QCommandLineParser::addPositionalArgument(QCommandLineParser* theWrappedObject, const QString&  name, const QString&  description, const QString&  syntax)
{
  ( theWrappedObject->addPositionalArgument(name, description, syntax));
}

QCommandLineOption  PythonQtWrapper_QCommandLineParser::addVersionOption(QCommandLineParser* theWrappedObject)
{
  return ( theWrappedObject->addVersionOption());
}

QString  PythonQtWrapper_QCommandLineParser::applicationDescription(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->applicationDescription());
}

void PythonQtWrapper_QCommandLineParser::clearPositionalArguments(QCommandLineParser* theWrappedObject)
{
  ( theWrappedObject->clearPositionalArguments());
}

QString  PythonQtWrapper_QCommandLineParser::errorText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->errorText());
}

QString  PythonQtWrapper_QCommandLineParser::helpText(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->helpText());
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->isSet(option));
}

bool  PythonQtWrapper_QCommandLineParser::isSet(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->isSet(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::optionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->optionNames());
}

bool  PythonQtWrapper_QCommandLineParser::parse(QCommandLineParser* theWrappedObject, const QStringList&  arguments)
{
  return ( theWrappedObject->parse(arguments));
}

QStringList  PythonQtWrapper_QCommandLineParser::positionalArguments(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->positionalArguments());
}

void PythonQtWrapper_QCommandLineParser::process(QCommandLineParser* theWrappedObject, const QCoreApplication&  app)
{
  ( theWrappedObject->process(app));
}

void PythonQtWrapper_QCommandLineParser::process(QCommandLineParser* theWrappedObject, const QStringList&  arguments)
{
  ( theWrappedObject->process(arguments));
}

void PythonQtWrapper_QCommandLineParser::setApplicationDescription(QCommandLineParser* theWrappedObject, const QString&  description)
{
  ( theWrappedObject->setApplicationDescription(description));
}

void PythonQtWrapper_QCommandLineParser::setOptionsAfterPositionalArgumentsMode(QCommandLineParser* theWrappedObject, QCommandLineParser::OptionsAfterPositionalArgumentsMode  mode)
{
  ( theWrappedObject->setOptionsAfterPositionalArgumentsMode(mode));
}

void PythonQtWrapper_QCommandLineParser::setSingleDashWordOptionMode(QCommandLineParser* theWrappedObject, QCommandLineParser::SingleDashWordOptionMode  parsingMode)
{
  ( theWrappedObject->setSingleDashWordOptionMode(parsingMode));
}

void PythonQtWrapper_QCommandLineParser::showHelp(QCommandLineParser* theWrappedObject, int  exitCode)
{
  ( theWrappedObject->showHelp(exitCode));
}

void PythonQtWrapper_QCommandLineParser::showVersion(QCommandLineParser* theWrappedObject)
{
  ( theWrappedObject->showVersion());
}

QString  PythonQtWrapper_QCommandLineParser::static_QCommandLineParser_tr(const char*  sourceText, const char*  disambiguation, int  n)
{
  return (QCommandLineParser::tr(sourceText, disambiguation, n));
}

QString  PythonQtWrapper_QCommandLineParser::static_QCommandLineParser_trUtf8(const char*  sourceText, const char*  disambiguation, int  n)
{
  return (QCommandLineParser::trUtf8(sourceText, disambiguation, n));
}

QStringList  PythonQtWrapper_QCommandLineParser::unknownOptionNames(QCommandLineParser* theWrappedObject) const
{
  return ( theWrappedObject->unknownOptionNames());
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->value(option));
}

QString  PythonQtWrapper_QCommandLineParser::value(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->value(name));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QCommandLineOption&  option) const
{
  return ( theWrappedObject->values(option));
}

QStringList  PythonQtWrapper_QCommandLineParser::values(QCommandLineParser* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->values(name));
}



void PythonQtWrapper_QCoreApplication::static_QCoreApplication_addLibraryPath(const QString&  arg__1)
{
  (QCoreApplication::addLibraryPath(arg__1));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationDirPath()
{
  return (QCoreApplication::applicationDirPath());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationFilePath()
{
  return (QCoreApplication::applicationFilePath());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationName()
{
  return (QCoreApplication::applicationName());
}

qint64  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationPid()
{
  return (QCoreApplication::applicationPid());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationVersion()
{
  return (QCoreApplication::applicationVersion());
}

QStringList  PythonQtWrapper_QCoreApplication::static_QCoreApplication_arguments()
{
  return (QCoreApplication::arguments());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_closingDown()
{
  return (QCoreApplication::closingDown());
}

QAbstractEventDispatcher*  PythonQtWrapper_QCoreApplication::static_QCoreApplication_eventDispatcher()
{
  return (QCoreApplication::eventDispatcher());
}

int  PythonQtWrapper_QCoreApplication::static_QCoreApplication_exec()
{
  return (QCoreApplication::exec());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_exit(int  retcode)
{
  (QCoreApplication::exit(retcode));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_flush()
{
  (QCoreApplication::flush());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_hasPendingEvents()
{
  return (QCoreApplication::hasPendingEvents());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_installTranslator(QTranslator*  messageFile)
{
  return (QCoreApplication::installTranslator(messageFile));
}

QCoreApplication*  PythonQtWrapper_QCoreApplication::static_QCoreApplication_instance()
{
  return (QCoreApplication::instance());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_isQuitLockEnabled()
{
  return (QCoreApplication::isQuitLockEnabled());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_isSetuidAllowed()
{
  return (QCoreApplication::isSetuidAllowed());
}

QStringList  PythonQtWrapper_QCoreApplication::static_QCoreApplication_libraryPaths()
{
  return (QCoreApplication::libraryPaths());
}

bool  PythonQtWrapper_QCoreApplication::notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( theWrappedObject->notify(arg__1, arg__2));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationDomain()
{
  return (QCoreApplication::organizationDomain());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationName()
{
  return (QCoreApplication::organizationName());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, PythonQtPassOwnershipToCPP<QEvent* >  event, int  priority)
{
  (QCoreApplication::postEvent(receiver, event, priority));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags)
{
  (QCoreApplication::processEvents(flags));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime)
{
  (QCoreApplication::processEvents(flags, maxtime));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeLibraryPath(const QString&  arg__1)
{
  (QCoreApplication::removeLibraryPath(arg__1));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType)
{
  (QCoreApplication::removePostedEvents(receiver, eventType));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeTranslator(QTranslator*  messageFile)
{
  return (QCoreApplication::removeTranslator(messageFile));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event)
{
  return (QCoreApplication::sendEvent(receiver, event));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type)
{
  (QCoreApplication::sendPostedEvents(receiver, event_type));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationName(const QString&  application)
{
  (QCoreApplication::setApplicationName(application));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationVersion(const QString&  version)
{
  (QCoreApplication::setApplicationVersion(version));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on)
{
  (QCoreApplication::setAttribute(attribute, on));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setEventDispatcher(QAbstractEventDispatcher*  eventDispatcher)
{
  (QCoreApplication::setEventDispatcher(eventDispatcher));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1)
{
  (QCoreApplication::setLibraryPaths(arg__1));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain)
{
  (QCoreApplication::setOrganizationDomain(orgDomain));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationName(const QString&  orgName)
{
  (QCoreApplication::setOrganizationName(orgName));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setQuitLockEnabled(bool  enabled)
{
  (QCoreApplication::setQuitLockEnabled(enabled));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setSetuidAllowed(bool  allow)
{
  (QCoreApplication::setSetuidAllowed(allow));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_startingUp()
{
  return (QCoreApplication::startingUp());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute)
{
  return (QCoreApplication::testAttribute(attribute));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation, int  n)
{
  return (QCoreApplication::translate(context, key, disambiguation, n));
}



QCryptographicHash* PythonQtWrapper_QCryptographicHash::new_QCryptographicHash(QCryptographicHash::Algorithm  method)
{ 
return new QCryptographicHash(method); }

bool  PythonQtWrapper_QCryptographicHash::addData(QCryptographicHash* theWrappedObject, QIODevice*  device)
{
  return ( theWrappedObject->addData(device));
}

void PythonQtWrapper_QCryptographicHash::addData(QCryptographicHash* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

QByteArray  PythonQtWrapper_QCryptographicHash::static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method)
{
  return (QCryptographicHash::hash(data, method));
}

int  PythonQtWrapper_QCryptographicHash::static_QCryptographicHash_hashLength(QCryptographicHash::Algorithm  method)
{
  return (QCryptographicHash::hashLength(method));
}

void PythonQtWrapper_QCryptographicHash::reset(QCryptographicHash* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QCryptographicHash::result(QCryptographicHash* theWrappedObject) const
{
  return ( theWrappedObject->result());
}



QDataStream* PythonQtWrapper_QDataStream::new_QDataStream()
{ 
return new QDataStream(); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags)
{ 
return new QDataStream(arg__1, flags); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QIODevice*  arg__1)
{ 
return new QDataStream(arg__1); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(const QByteArray&  arg__1)
{ 
return new QDataStream(arg__1); }

void PythonQtWrapper_QDataStream::abortTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->abortTransaction());
}

bool  PythonQtWrapper_QDataStream::atEnd(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

QDataStream::ByteOrder  PythonQtWrapper_QDataStream::byteOrder(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->byteOrder());
}

bool  PythonQtWrapper_QDataStream::commitTransaction(QDataStream* theWrappedObject)
{
  return ( theWrappedObject->commitTransaction());
}

QIODevice*  PythonQtWrapper_QDataStream::device(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QDataStream::FloatingPointPrecision  PythonQtWrapper_QDataStream::floatingPointPrecision(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->floatingPointPrecision());
}

void PythonQtWrapper_QDataStream::resetStatus(QDataStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

void PythonQtWrapper_QDataStream::rollbackTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->rollbackTransaction());
}

void PythonQtWrapper_QDataStream::setByteOrder(QDataStream* theWrappedObject, QDataStream::ByteOrder  arg__1)
{
  ( theWrappedObject->setByteOrder(arg__1));
}

void PythonQtWrapper_QDataStream::setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1)
{
  ( theWrappedObject->setDevice(arg__1));
}

void PythonQtWrapper_QDataStream::setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision)
{
  ( theWrappedObject->setFloatingPointPrecision(precision));
}

void PythonQtWrapper_QDataStream::setStatus(QDataStream* theWrappedObject, QDataStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

void PythonQtWrapper_QDataStream::setVersion(QDataStream* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setVersion(arg__1));
}

int  PythonQtWrapper_QDataStream::skipRawData(QDataStream* theWrappedObject, int  len)
{
  return ( theWrappedObject->skipRawData(len));
}

void PythonQtWrapper_QDataStream::startTransaction(QDataStream* theWrappedObject)
{
  ( theWrappedObject->startTransaction());
}

QDataStream::Status  PythonQtWrapper_QDataStream::status(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QDataStream::unsetDevice(QDataStream* theWrappedObject)
{
  ( theWrappedObject->unsetDevice());
}

int  PythonQtWrapper_QDataStream::version(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->version());
}



QDeadlineTimer* PythonQtWrapper_QDeadlineTimer::new_QDeadlineTimer(QDeadlineTimer::ForeverConstant  arg__1, Qt::TimerType  type_)
{ 
return new QDeadlineTimer(arg__1, type_); }

QDeadlineTimer* PythonQtWrapper_QDeadlineTimer::new_QDeadlineTimer(Qt::TimerType  type_)
{ 
return new QDeadlineTimer(type_); }

QDeadlineTimer* PythonQtWrapper_QDeadlineTimer::new_QDeadlineTimer(qint64  msecs, Qt::TimerType  type)
{ 
return new QDeadlineTimer(msecs, type); }

QDeadlineTimer  PythonQtWrapper_QDeadlineTimer::static_QDeadlineTimer_addNSecs(QDeadlineTimer  dt, qint64  nsecs)
{
  return (QDeadlineTimer::addNSecs(dt, nsecs));
}

QDeadlineTimer  PythonQtWrapper_QDeadlineTimer::static_QDeadlineTimer_current(Qt::TimerType  timerType)
{
  return (QDeadlineTimer::current(timerType));
}

qint64  PythonQtWrapper_QDeadlineTimer::deadline(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->deadline());
}

qint64  PythonQtWrapper_QDeadlineTimer::deadlineNSecs(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->deadlineNSecs());
}

bool  PythonQtWrapper_QDeadlineTimer::hasExpired(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->hasExpired());
}

bool  PythonQtWrapper_QDeadlineTimer::isForever(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->isForever());
}

bool  PythonQtWrapper_QDeadlineTimer::__ne__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)!= d2);
}

QDeadlineTimer*  PythonQtWrapper_QDeadlineTimer::__iadd__(QDeadlineTimer* theWrappedObject, qint64  msecs)
{
  return &( (*theWrappedObject)+= msecs);
}

qint64  PythonQtWrapper_QDeadlineTimer::__sub__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  dt2)
{
  return ( (*theWrappedObject)- dt2);
}

QDeadlineTimer  PythonQtWrapper_QDeadlineTimer::__sub__(QDeadlineTimer* theWrappedObject, qint64  msecs)
{
  return ( (*theWrappedObject)- msecs);
}

QDeadlineTimer*  PythonQtWrapper_QDeadlineTimer::__isub__(QDeadlineTimer* theWrappedObject, qint64  msecs)
{
  return &( (*theWrappedObject)-= msecs);
}

bool  PythonQtWrapper_QDeadlineTimer::__lt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)< d2);
}

bool  PythonQtWrapper_QDeadlineTimer::__le__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)<= d2);
}

bool  PythonQtWrapper_QDeadlineTimer::__eq__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)== d2);
}

bool  PythonQtWrapper_QDeadlineTimer::__gt__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)> d2);
}

bool  PythonQtWrapper_QDeadlineTimer::__ge__(QDeadlineTimer* theWrappedObject, QDeadlineTimer  d2)
{
  return ( (*theWrappedObject)>= d2);
}

qint64  PythonQtWrapper_QDeadlineTimer::remainingTime(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->remainingTime());
}

qint64  PythonQtWrapper_QDeadlineTimer::remainingTimeNSecs(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->remainingTimeNSecs());
}

void PythonQtWrapper_QDeadlineTimer::setDeadline(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  timerType)
{
  ( theWrappedObject->setDeadline(msecs, timerType));
}

void PythonQtWrapper_QDeadlineTimer::setPreciseDeadline(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs, Qt::TimerType  type)
{
  ( theWrappedObject->setPreciseDeadline(secs, nsecs, type));
}

void PythonQtWrapper_QDeadlineTimer::setPreciseRemainingTime(QDeadlineTimer* theWrappedObject, qint64  secs, qint64  nsecs, Qt::TimerType  type)
{
  ( theWrappedObject->setPreciseRemainingTime(secs, nsecs, type));
}

void PythonQtWrapper_QDeadlineTimer::setRemainingTime(QDeadlineTimer* theWrappedObject, qint64  msecs, Qt::TimerType  type)
{
  ( theWrappedObject->setRemainingTime(msecs, type));
}

void PythonQtWrapper_QDeadlineTimer::setTimerType(QDeadlineTimer* theWrappedObject, Qt::TimerType  type)
{
  ( theWrappedObject->setTimerType(type));
}

void PythonQtWrapper_QDeadlineTimer::swap(QDeadlineTimer* theWrappedObject, QDeadlineTimer&  other)
{
  ( theWrappedObject->swap(other));
}

Qt::TimerType  PythonQtWrapper_QDeadlineTimer::timerType(QDeadlineTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerType());
}


