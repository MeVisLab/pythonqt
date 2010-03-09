#include "com_trolltech_qt_core0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDateTime>
#include <QDir>
#include <QNoImplicitBoolCast>
#include <QSize>
#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qabstractstate.h>
#include <qabstracttransition.h>
#include <qanimationgroup.h>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qeasingcurve.h>
#include <qeventtransition.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qfinalstate.h>
#include <qhistorystate.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qsize.h>
#include <qstate.h>
#include <qstatemachine.h>
#include <qstringlist.h>
#include <qtranslator.h>
#include <qurl.h>

bool  PythonQtShell_QAbstractAnimation::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
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
  return QAbstractAnimation::event(event);
}
void PythonQtShell_QAbstractAnimation::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractAnimation::updateDirection(direction);
}
int  PythonQtShell_QAbstractAnimation::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return int();
}
void PythonQtShell_QAbstractAnimation::updateCurrentTime(int  currentTime)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&currentTime};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractAnimation::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractAnimation::updateState(newState, oldState);
}
bool  PythonQtShell_QAbstractAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractAnimation::childEvent(QChildEvent*  arg__1)
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
  QAbstractAnimation::childEvent(arg__1);
}
void PythonQtShell_QAbstractAnimation::customEvent(QEvent*  arg__1)
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
  QAbstractAnimation::customEvent(arg__1);
}
void PythonQtShell_QAbstractAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractAnimation::timerEvent(arg__1);
}
QAbstractAnimation* PythonQtWrapper_QAbstractAnimation::new_QAbstractAnimation(QObject*  parent)
{ 
return new PythonQtShell_QAbstractAnimation(parent); }

bool  PythonQtWrapper_QAbstractAnimation::event(QAbstractAnimation* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QAbstractAnimation::updateDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QAbstractAnimation::setLoopCount(QAbstractAnimation* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

QAbstractAnimation::Direction  PythonQtWrapper_QAbstractAnimation::direction(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->direction());
}

int  PythonQtWrapper_QAbstractAnimation::totalDuration(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->totalDuration());
}

int  PythonQtWrapper_QAbstractAnimation::loopCount(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QAbstractAnimation::currentLoop(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoop());
}

void PythonQtWrapper_QAbstractAnimation::setDirection(QAbstractAnimation* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( theWrappedObject->setDirection(direction));
}

int  PythonQtWrapper_QAbstractAnimation::currentTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentTime());
}

QAbstractAnimation::State  PythonQtWrapper_QAbstractAnimation::state(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

int  PythonQtWrapper_QAbstractAnimation::currentLoopTime(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->currentLoopTime());
}

QAnimationGroup*  PythonQtWrapper_QAbstractAnimation::group(QAbstractAnimation* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

void PythonQtWrapper_QAbstractAnimation::updateState(QAbstractAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QAbstractAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}



bool  PythonQtShell_QAbstractItemModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractItemModel::insertRows(row, count, parent);
}
QVariant  PythonQtShell_QAbstractItemModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
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
  }
}
  return QAbstractItemModel::headerData(section, orientation, role);
}
QSize  PythonQtShell_QAbstractItemModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractItemModel::span(index);
}
QMap<int , QVariant >  PythonQtShell_QAbstractItemModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractItemModel::itemData(index);
}
QVariant  PythonQtShell_QAbstractItemModel::data(const QModelIndex&  index, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&role};
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
  }
}
  return QVariant();
}
QModelIndex  PythonQtShell_QAbstractItemModel::parent(const QModelIndex&  child) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&child};
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
  }
}
  return QModelIndex();
}
bool  PythonQtShell_QAbstractItemModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  }
}
  return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
}
QMimeData*  PythonQtShell_QAbstractItemModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  }
}
  return QAbstractItemModel::mimeData(indexes);
}
int  PythonQtShell_QAbstractItemModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return int();
}
bool  PythonQtShell_QAbstractItemModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractItemModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QAbstractItemModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
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
  }
}
  return QAbstractItemModel::setItemData(index, roles);
}
void PythonQtShell_QAbstractItemModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemModel::sort(column, order);
}
QList<QModelIndex >  PythonQtShell_QAbstractItemModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
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
  }
}
  return QAbstractItemModel::match(start, role, value, hits, flags);
}
bool  PythonQtShell_QAbstractItemModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QAbstractItemModel::submit();
}
bool  PythonQtShell_QAbstractItemModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractItemModel::removeRows(row, count, parent);
}
bool  PythonQtShell_QAbstractItemModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
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
  }
}
  return QAbstractItemModel::setHeaderData(section, orientation, value, role);
}
Qt::DropActions  PythonQtShell_QAbstractItemModel::supportedDropActions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportedDropActions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractItemModel::supportedDropActions();
}
void PythonQtShell_QAbstractItemModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractItemModel::fetchMore(parent);
}
bool  PythonQtShell_QAbstractItemModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractItemModel::insertColumns(column, count, parent);
}
void PythonQtShell_QAbstractItemModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
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
  QAbstractItemModel::revert();
}
QModelIndex  PythonQtShell_QAbstractItemModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractItemModel::buddy(index);
}
bool  PythonQtShell_QAbstractItemModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return QAbstractItemModel::canFetchMore(parent);
}
QStringList  PythonQtShell_QAbstractItemModel::mimeTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractItemModel::mimeTypes();
}
int  PythonQtShell_QAbstractItemModel::columnCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "columnCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return int();
}
bool  PythonQtShell_QAbstractItemModel::hasChildren(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasChildren");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return QAbstractItemModel::hasChildren(parent);
}
Qt::ItemFlags  PythonQtShell_QAbstractItemModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractItemModel::flags(index);
}
bool  PythonQtShell_QAbstractItemModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
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
  }
}
  return QAbstractItemModel::setData(index, value, role);
}
QModelIndex  PythonQtShell_QAbstractItemModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
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
  }
}
  return QModelIndex();
}
bool  PythonQtShell_QAbstractItemModel::event(QEvent*  arg__1)
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
  return QAbstractItemModel::event(arg__1);
}
bool  PythonQtShell_QAbstractItemModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractItemModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractItemModel::childEvent(QChildEvent*  arg__1)
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
  QAbstractItemModel::childEvent(arg__1);
}
void PythonQtShell_QAbstractItemModel::customEvent(QEvent*  arg__1)
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
  QAbstractItemModel::customEvent(arg__1);
}
void PythonQtShell_QAbstractItemModel::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractItemModel::timerEvent(arg__1);
}
QAbstractItemModel* PythonQtWrapper_QAbstractItemModel::new_QAbstractItemModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractItemModel(parent); }

bool  PythonQtWrapper_QAbstractItemModel::insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_insertRows(row, count, parent));
}

QVariant  PythonQtWrapper_QAbstractItemModel::headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

QSize  PythonQtWrapper_QAbstractItemModel::span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_span(index));
}

QMap<int , QVariant >  PythonQtWrapper_QAbstractItemModel::itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_itemData(index));
}

QObject*  PythonQtWrapper_QAbstractItemModel::parent(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeColumn(column, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_dropMimeData(data, action, row, column, parent));
}

QMimeData*  PythonQtWrapper_QAbstractItemModel::mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_mimeData(indexes));
}

bool  PythonQtWrapper_QAbstractItemModel::insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertRow(row, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_setItemData(index, roles));
}

void PythonQtWrapper_QAbstractItemModel::sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_sort(column, order));
}

QList<QModelIndex >  PythonQtWrapper_QAbstractItemModel::match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_match(start, role, value, hits, flags));
}

bool  PythonQtWrapper_QAbstractItemModel::removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_removeRows(row, count, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_setHeaderData(section, orientation, value, role));
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDropActions(QAbstractItemModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_supportedDropActions());
}

void PythonQtWrapper_QAbstractItemModel::fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent)
{
  ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_fetchMore(parent));
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_insertColumns(column, count, parent));
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
  return ( theWrappedObject->sibling(row, column, idx));
}

bool  PythonQtWrapper_QAbstractItemModel::insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent)
{
  return ( theWrappedObject->insertColumn(column, parent));
}

const QHash<int , QByteArray >*  PythonQtWrapper_QAbstractItemModel::roleNames(QAbstractItemModel* theWrappedObject) const
{
  return &( theWrappedObject->roleNames());
}

QModelIndex  PythonQtWrapper_QAbstractItemModel::buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_buddy(index));
}

void PythonQtWrapper_QAbstractItemModel::setSupportedDragActions(QAbstractItemModel* theWrappedObject, Qt::DropActions  arg__1)
{
  ( theWrappedObject->setSupportedDragActions(arg__1));
}

bool  PythonQtWrapper_QAbstractItemModel::canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_canFetchMore(parent));
}

bool  PythonQtWrapper_QAbstractItemModel::hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( theWrappedObject->hasIndex(row, column, parent));
}

QStringList  PythonQtWrapper_QAbstractItemModel::mimeTypes(QAbstractItemModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_mimeTypes());
}

bool  PythonQtWrapper_QAbstractItemModel::removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent)
{
  return ( theWrappedObject->removeRow(row, parent));
}

bool  PythonQtWrapper_QAbstractItemModel::hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_hasChildren(parent));
}

Qt::ItemFlags  PythonQtWrapper_QAbstractItemModel::flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_flags(index));
}

Qt::DropActions  PythonQtWrapper_QAbstractItemModel::supportedDragActions(QAbstractItemModel* theWrappedObject) const
{
  return ( theWrappedObject->supportedDragActions());
}

bool  PythonQtWrapper_QAbstractItemModel::setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role)
{
  return ( ((PythonQtPublicPromoter_QAbstractItemModel*)theWrappedObject)->promoted_setData(index, value, role));
}



bool  PythonQtShell_QAbstractListModel::dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
    void* args[6] = {NULL, (void*)&data, (void*)&action, (void*)&row, (void*)&column, (void*)&parent};
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
  }
}
  return QAbstractListModel::dropMimeData(data, action, row, column, parent);
}
QModelIndex  PythonQtShell_QAbstractListModel::index(int  row, int  column, const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "index");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QModelIndex returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&column, (void*)&parent};
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
  }
}
  return QAbstractListModel::index(row, column, parent);
}
bool  PythonQtShell_QAbstractListModel::canFetchMore(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canFetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return QAbstractListModel::canFetchMore(parent);
}
bool  PythonQtShell_QAbstractListModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractListModel::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QAbstractListModel::setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setItemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&roles};
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
  }
}
  return QAbstractListModel::setItemData(index, roles);
}
bool  PythonQtShell_QAbstractListModel::submit()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "submit");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("submit", methodInfo, result);
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
  return QAbstractListModel::submit();
}
bool  PythonQtShell_QAbstractListModel::setData(const QModelIndex&  index, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&index, (void*)&value, (void*)&role};
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
  }
}
  return QAbstractListModel::setData(index, value, role);
}
bool  PythonQtShell_QAbstractListModel::setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setHeaderData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
    void* args[5] = {NULL, (void*)&section, (void*)&orientation, (void*)&value, (void*)&role};
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
  }
}
  return QAbstractListModel::setHeaderData(section, orientation, value, role);
}
QMap<int , QVariant >  PythonQtShell_QAbstractListModel::itemData(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMap<int , QVariant >" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMap<int , QVariant > returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractListModel::itemData(index);
}
void PythonQtShell_QAbstractListModel::revert()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "revert");
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
  QAbstractListModel::revert();
}
QMimeData*  PythonQtShell_QAbstractListModel::mimeData(const QList<QModelIndex >&  indexes) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*" , "const QList<QModelIndex >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QMimeData* returnValue;
    void* args[2] = {NULL, (void*)&indexes};
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
  }
}
  return QAbstractListModel::mimeData(indexes);
}
QStringList  PythonQtShell_QAbstractListModel::mimeTypes() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mimeTypes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractListModel::mimeTypes();
}
void PythonQtShell_QAbstractListModel::sort(int  column, Qt::SortOrder  order)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "sort");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "Qt::SortOrder"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&column, (void*)&order};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractListModel::sort(column, order);
}
bool  PythonQtShell_QAbstractListModel::removeColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractListModel::removeColumns(column, count, parent);
}
bool  PythonQtShell_QAbstractListModel::removeRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "removeRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractListModel::removeRows(row, count, parent);
}
QModelIndex  PythonQtShell_QAbstractListModel::buddy(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "buddy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QModelIndex returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractListModel::buddy(index);
}
bool  PythonQtShell_QAbstractListModel::insertColumns(int  column, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertColumns");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&column, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractListModel::insertColumns(column, count, parent);
}
Qt::ItemFlags  PythonQtShell_QAbstractListModel::flags(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "flags");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"Qt::ItemFlags" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      Qt::ItemFlags returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractListModel::flags(index);
}
void PythonQtShell_QAbstractListModel::fetchMore(const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fetchMore");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAbstractListModel::fetchMore(parent);
}
QList<QModelIndex >  PythonQtShell_QAbstractListModel::match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "match");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QModelIndex >" , "const QModelIndex&" , "int" , "const QVariant&" , "int" , "Qt::MatchFlags"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      QList<QModelIndex > returnValue;
    void* args[6] = {NULL, (void*)&start, (void*)&role, (void*)&value, (void*)&hits, (void*)&flags};
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
  }
}
  return QAbstractListModel::match(start, role, value, hits, flags);
}
int  PythonQtShell_QAbstractListModel::rowCount(const QModelIndex&  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "rowCount");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
    void* args[2] = {NULL, (void*)&parent};
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
  }
}
  return int();
}
QVariant  PythonQtShell_QAbstractListModel::headerData(int  section, Qt::Orientation  orientation, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "headerData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "Qt::Orientation" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&section, (void*)&orientation, (void*)&role};
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
  }
}
  return QAbstractListModel::headerData(section, orientation, role);
}
QSize  PythonQtShell_QAbstractListModel::span(const QModelIndex&  index) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "span");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QSize returnValue;
    void* args[2] = {NULL, (void*)&index};
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
  }
}
  return QAbstractListModel::span(index);
}
Qt::DropActions  PythonQtShell_QAbstractListModel::supportedDropActions() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "supportedDropActions");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QAbstractListModel::supportedDropActions();
}
bool  PythonQtShell_QAbstractListModel::insertRows(int  row, int  count, const QModelIndex&  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertRows");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
    void* args[4] = {NULL, (void*)&row, (void*)&count, (void*)&parent};
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
  }
}
  return QAbstractListModel::insertRows(row, count, parent);
}
QVariant  PythonQtShell_QAbstractListModel::data(const QModelIndex&  index, int  role) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "data");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&index, (void*)&role};
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
  }
}
  return QVariant();
}
bool  PythonQtShell_QAbstractListModel::event(QEvent*  arg__1)
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
  return QAbstractListModel::event(arg__1);
}
void PythonQtShell_QAbstractListModel::childEvent(QChildEvent*  arg__1)
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
  QAbstractListModel::childEvent(arg__1);
}
void PythonQtShell_QAbstractListModel::customEvent(QEvent*  arg__1)
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
  QAbstractListModel::customEvent(arg__1);
}
void PythonQtShell_QAbstractListModel::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractListModel::timerEvent(arg__1);
}
QAbstractListModel* PythonQtWrapper_QAbstractListModel::new_QAbstractListModel(QObject*  parent)
{ 
return new PythonQtShell_QAbstractListModel(parent); }

bool  PythonQtWrapper_QAbstractListModel::dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->promoted_dropMimeData(data, action, row, column, parent));
}

QModelIndex  PythonQtWrapper_QAbstractListModel::index(QAbstractListModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QAbstractListModel*)theWrappedObject)->promoted_index(row, column, parent));
}



bool  PythonQtShell_QAbstractState::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QAbstractState::event(e);
}
void PythonQtShell_QAbstractState::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractState::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
bool  PythonQtShell_QAbstractState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractState::childEvent(QChildEvent*  arg__1)
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
  QAbstractState::childEvent(arg__1);
}
void PythonQtShell_QAbstractState::customEvent(QEvent*  arg__1)
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
  QAbstractState::customEvent(arg__1);
}
void PythonQtShell_QAbstractState::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractState::timerEvent(arg__1);
}
QStateMachine*  PythonQtWrapper_QAbstractState::machine(QAbstractState* theWrappedObject) const
{
  return ( theWrappedObject->machine());
}

bool  PythonQtWrapper_QAbstractState::event(QAbstractState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QAbstractState*)theWrappedObject)->promoted_event(e));
}

QState*  PythonQtWrapper_QAbstractState::parentState(QAbstractState* theWrappedObject) const
{
  return ( theWrappedObject->parentState());
}



bool  PythonQtShell_QAbstractTransition::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QAbstractTransition::event(e);
}
bool  PythonQtShell_QAbstractTransition::eventTest(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventTest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
  return bool();
}
void PythonQtShell_QAbstractTransition::onTransition(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onTransition");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAbstractTransition::customEvent(QEvent*  arg__1)
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
  QAbstractTransition::customEvent(arg__1);
}
void PythonQtShell_QAbstractTransition::childEvent(QChildEvent*  arg__1)
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
  QAbstractTransition::childEvent(arg__1);
}
bool  PythonQtShell_QAbstractTransition::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractTransition::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractTransition::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractTransition::timerEvent(arg__1);
}
QAbstractTransition* PythonQtWrapper_QAbstractTransition::new_QAbstractTransition(QState*  sourceState)
{ 
return new PythonQtShell_QAbstractTransition(sourceState); }

bool  PythonQtWrapper_QAbstractTransition::event(QAbstractTransition* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QAbstractTransition*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QAbstractTransition::setTargetState(QAbstractTransition* theWrappedObject, QAbstractState*  target)
{
  ( theWrappedObject->setTargetState(target));
}

QStateMachine*  PythonQtWrapper_QAbstractTransition::machine(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->machine());
}

void PythonQtWrapper_QAbstractTransition::removeAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeAnimation(animation));
}

void PythonQtWrapper_QAbstractTransition::addAnimation(QAbstractTransition* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addAnimation(animation));
}

QAbstractState*  PythonQtWrapper_QAbstractTransition::targetState(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->targetState());
}

void PythonQtWrapper_QAbstractTransition::setTargetStates(QAbstractTransition* theWrappedObject, const QList<QAbstractState* >&  targets)
{
  ( theWrappedObject->setTargetStates(targets));
}

QState*  PythonQtWrapper_QAbstractTransition::sourceState(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->sourceState());
}

QList<QAbstractState* >  PythonQtWrapper_QAbstractTransition::targetStates(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->targetStates());
}

QList<QAbstractAnimation* >  PythonQtWrapper_QAbstractTransition::animations(QAbstractTransition* theWrappedObject) const
{
  return ( theWrappedObject->animations());
}



bool  PythonQtShell_QAnimationGroup::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
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
  return QAnimationGroup::event(event);
}
void PythonQtShell_QAnimationGroup::updateCurrentTime(int  currentTime)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateCurrentTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&currentTime};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QAnimationGroup::updateState(QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState, (void*)&oldState};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAnimationGroup::updateState(newState, oldState);
}
int  PythonQtShell_QAnimationGroup::duration() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "duration");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("duration", methodInfo, result);
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
  return int();
}
void PythonQtShell_QAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "updateDirection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QAnimationGroup::updateDirection(direction);
}
bool  PythonQtShell_QAnimationGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAnimationGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAnimationGroup::childEvent(QChildEvent*  arg__1)
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
  QAnimationGroup::childEvent(arg__1);
}
void PythonQtShell_QAnimationGroup::customEvent(QEvent*  arg__1)
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
  QAnimationGroup::customEvent(arg__1);
}
void PythonQtShell_QAnimationGroup::timerEvent(QTimerEvent*  arg__1)
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
  QAnimationGroup::timerEvent(arg__1);
}
QAnimationGroup* PythonQtWrapper_QAnimationGroup::new_QAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QAnimationGroup(parent); }

int  PythonQtWrapper_QAnimationGroup::animationCount(QAnimationGroup* theWrappedObject) const
{
  return ( theWrappedObject->animationCount());
}

void PythonQtWrapper_QAnimationGroup::removeAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->removeAnimation(animation));
}

bool  PythonQtWrapper_QAnimationGroup::event(QAnimationGroup* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QAnimationGroup*)theWrappedObject)->promoted_event(event));
}

QAbstractAnimation*  PythonQtWrapper_QAnimationGroup::takeAnimation(QAnimationGroup* theWrappedObject, int  index)
{
  return ( theWrappedObject->takeAnimation(index));
}

void PythonQtWrapper_QAnimationGroup::clear(QAnimationGroup* theWrappedObject)
{
  ( theWrappedObject->clear());
}

int  PythonQtWrapper_QAnimationGroup::indexOfAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation) const
{
  return ( theWrappedObject->indexOfAnimation(animation));
}

QAbstractAnimation*  PythonQtWrapper_QAnimationGroup::animationAt(QAnimationGroup* theWrappedObject, int  index) const
{
  return ( theWrappedObject->animationAt(index));
}

void PythonQtWrapper_QAnimationGroup::addAnimation(QAnimationGroup* theWrappedObject, QAbstractAnimation*  animation)
{
  ( theWrappedObject->addAnimation(animation));
}

void PythonQtWrapper_QAnimationGroup::insertAnimation(QAnimationGroup* theWrappedObject, int  index, QAbstractAnimation*  animation)
{
  ( theWrappedObject->insertAnimation(index, animation));
}



QBasicTimer* PythonQtWrapper_QBasicTimer::new_QBasicTimer()
{ 
return new QBasicTimer(); }

void PythonQtWrapper_QBasicTimer::stop(QBasicTimer* theWrappedObject)
{
  ( theWrappedObject->stop());
}

bool  PythonQtWrapper_QBasicTimer::isActive(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->isActive());
}

int  PythonQtWrapper_QBasicTimer::timerId(QBasicTimer* theWrappedObject) const
{
  return ( theWrappedObject->timerId());
}

void PythonQtWrapper_QBasicTimer::start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj)
{
  ( theWrappedObject->start(msec, obj));
}



qint64  PythonQtShell_QBuffer::pos() const
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
  return QBuffer::pos();
}
bool  PythonQtShell_QBuffer::seek(qint64  off)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "seek");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "qint64"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&off};
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
  return QBuffer::seek(off);
}
void PythonQtShell_QBuffer::close()
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
  QBuffer::close();
}
bool  PythonQtShell_QBuffer::open(QIODevice::OpenMode  openMode)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "open");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QIODevice::OpenMode"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&openMode};
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
  return QBuffer::open(openMode);
}
qint64  PythonQtShell_QBuffer::writeData(const char*  data, qint64  len)
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
  return QBuffer::writeData(data, len);
}
bool  PythonQtShell_QBuffer::canReadLine() const
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
  return QBuffer::canReadLine();
}
qint64  PythonQtShell_QBuffer::size() const
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
  return QBuffer::size();
}
bool  PythonQtShell_QBuffer::atEnd() const
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
  return QBuffer::atEnd();
}
qint64  PythonQtShell_QBuffer::readData(char*  data, qint64  maxlen)
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
  return QBuffer::readData(data, maxlen);
}
qint64  PythonQtShell_QBuffer::bytesAvailable() const
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
  return QBuffer::bytesAvailable();
}
bool  PythonQtShell_QBuffer::reset()
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
  return QBuffer::reset();
}
bool  PythonQtShell_QBuffer::waitForBytesWritten(int  msecs)
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
  return QBuffer::waitForBytesWritten(msecs);
}
qint64  PythonQtShell_QBuffer::readLineData(char*  data, qint64  maxlen)
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
  return QBuffer::readLineData(data, maxlen);
}
qint64  PythonQtShell_QBuffer::bytesToWrite() const
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
  return QBuffer::bytesToWrite();
}
bool  PythonQtShell_QBuffer::isSequential() const
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
  return QBuffer::isSequential();
}
bool  PythonQtShell_QBuffer::waitForReadyRead(int  msecs)
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
  return QBuffer::waitForReadyRead(msecs);
}
bool  PythonQtShell_QBuffer::event(QEvent*  arg__1)
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
  return QBuffer::event(arg__1);
}
bool  PythonQtShell_QBuffer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QBuffer::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QBuffer::childEvent(QChildEvent*  arg__1)
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
  QBuffer::childEvent(arg__1);
}
void PythonQtShell_QBuffer::customEvent(QEvent*  arg__1)
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
  QBuffer::customEvent(arg__1);
}
void PythonQtShell_QBuffer::timerEvent(QTimerEvent*  arg__1)
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
  QBuffer::timerEvent(arg__1);
}
QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QByteArray*  buf, QObject*  parent)
{ 
return new PythonQtShell_QBuffer(buf, parent); }

QBuffer* PythonQtWrapper_QBuffer::new_QBuffer(QObject*  parent)
{ 
return new PythonQtShell_QBuffer(parent); }

qint64  PythonQtWrapper_QBuffer::pos(QBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_pos());
}

bool  PythonQtWrapper_QBuffer::seek(QBuffer* theWrappedObject, qint64  off)
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_seek(off));
}

void PythonQtWrapper_QBuffer::setData(QBuffer* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->setData(data));
}

void PythonQtWrapper_QBuffer::setBuffer(QBuffer* theWrappedObject, QByteArray*  a)
{
  ( theWrappedObject->setBuffer(a));
}

void PythonQtWrapper_QBuffer::close(QBuffer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_close());
}

bool  PythonQtWrapper_QBuffer::open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode)
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_open(openMode));
}

qint64  PythonQtWrapper_QBuffer::writeData(QBuffer* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_writeData(data, len));
}

bool  PythonQtWrapper_QBuffer::canReadLine(QBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_canReadLine());
}

qint64  PythonQtWrapper_QBuffer::size(QBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_size());
}

bool  PythonQtWrapper_QBuffer::atEnd(QBuffer* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_atEnd());
}

qint64  PythonQtWrapper_QBuffer::readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QBuffer*)theWrappedObject)->promoted_readData(data, maxlen));
}



QByteArray* PythonQtWrapper_QByteArray::new_QByteArray()
{ 
return new QByteArray(); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(const QByteArray&  arg__1)
{ 
return new QByteArray(arg__1); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(const char*  arg__1)
{ 
return new QByteArray(arg__1); }

QByteArray* PythonQtWrapper_QByteArray::new_QByteArray(int  size, char  c)
{ 
return new QByteArray(size, c); }

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, short  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

bool  PythonQtWrapper_QByteArray::__lt__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)< s2);
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->indexOf(s, from));
}

QByteArray*  PythonQtWrapper_QByteArray::remove(QByteArray* theWrappedObject, int  index, int  len)
{
  return &( theWrappedObject->remove(index, len));
}

QByteArray  PythonQtWrapper_QByteArray::toHex(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toHex());
}

QList<QByteArray >  PythonQtWrapper_QByteArray::split(QByteArray* theWrappedObject, char  sep) const
{
  return ( theWrappedObject->split(sep));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  c, const QString&  after)
{
  return &( theWrappedObject->replace(c, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, char  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray  PythonQtWrapper_QByteArray::right(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->right(len));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, const char*  before, int  bsize, const char*  after, int  asize)
{
  return &( theWrappedObject->replace(before, bsize, after, asize));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after)
{
  return &( theWrappedObject->replace(before, after));
}

QByteArray*  PythonQtWrapper_QByteArray::replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s)
{
  return &( theWrappedObject->replace(index, len, s));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->indexOf(a, from));
}

void PythonQtWrapper_QByteArray::reserve(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->reserve(size));
}

QByteArray  PythonQtWrapper_QByteArray::rightJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->rightJustified(width, fill, truncate));
}

QByteArray  PythonQtWrapper_QByteArray::mid(QByteArray* theWrappedObject, int  index, int  len) const
{
  return ( theWrappedObject->mid(index, len));
}

int  PythonQtWrapper_QByteArray::indexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->indexOf(c, from));
}

int  PythonQtWrapper_QByteArray::size(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

double  PythonQtWrapper_QByteArray::toDouble(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toDouble(ok));
}

QByteArray  PythonQtWrapper_QByteArray::toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude, const QByteArray&  include, char  percent) const
{
  return ( theWrappedObject->toPercentEncoding(exclude, include, percent));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->append(s, len));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->append(a));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, const QString&  s)
{
  return &( theWrappedObject->append(s));
}

QByteArray  PythonQtWrapper_QByteArray::left(QByteArray* theWrappedObject, int  len) const
{
  return ( theWrappedObject->left(len));
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->count(c));
}

int  PythonQtWrapper_QByteArray::capacity(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->capacity());
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from) const
{
  return ( theWrappedObject->lastIndexOf(s, from));
}

int  PythonQtWrapper_QByteArray::count(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->count(a));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from) const
{
  return ( theWrappedObject->lastIndexOf(a, from));
}

int  PythonQtWrapper_QByteArray::lastIndexOf(QByteArray* theWrappedObject, char  c, int  from) const
{
  return ( theWrappedObject->lastIndexOf(c, from));
}

bool  PythonQtWrapper_QByteArray::__le__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)<= s2);
}

QByteArray  PythonQtWrapper_QByteArray::trimmed(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->trimmed());
}

float  PythonQtWrapper_QByteArray::toFloat(QByteArray* theWrappedObject, bool*  ok) const
{
  return ( theWrappedObject->toFloat(ok));
}

QByteArray*  PythonQtWrapper_QByteArray::append(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->append(c));
}

bool  PythonQtWrapper_QByteArray::__eq__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)== s2);
}

QByteArray*  PythonQtWrapper_QByteArray::fill(QByteArray* theWrappedObject, char  c, int  size)
{
  return &( theWrappedObject->fill(c, size));
}

char  PythonQtWrapper_QByteArray::at(QByteArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

int  PythonQtWrapper_QByteArray::length(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromHex(const QByteArray&  hexEncoded)
{
  return (QByteArray::fromHex(hexEncoded));
}

bool  PythonQtWrapper_QByteArray::__ge__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)>= s2);
}

int  PythonQtWrapper_QByteArray::toInt(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toInt(ok, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

ushort  PythonQtWrapper_QByteArray::toUShort(QByteArray* theWrappedObject, bool*  ok, int  base) const
{
  return ( theWrappedObject->toUShort(ok, base));
}

QByteArray  PythonQtWrapper_QByteArray::repeated(QByteArray* theWrappedObject, int  times) const
{
  return ( theWrappedObject->repeated(times));
}

bool  PythonQtWrapper_QByteArray::isEmpty(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent)
{
  return (QByteArray::fromPercentEncoding(pctEncoded, percent));
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const char*  s, int  len)
{
  return &( theWrappedObject->prepend(s, len));
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->startsWith(c));
}

bool  PythonQtWrapper_QByteArray::__ne__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)!= s2);
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, const QByteArray&  a)
{
  return &( theWrappedObject->prepend(a));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_fromBase64(const QByteArray&  base64)
{
  return (QByteArray::fromBase64(base64));
}

bool  PythonQtWrapper_QByteArray::startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->startsWith(a));
}

void PythonQtWrapper_QByteArray::squeeze(QByteArray* theWrappedObject)
{
  ( theWrappedObject->squeeze());
}

QByteArray*  PythonQtWrapper_QByteArray::prepend(QByteArray* theWrappedObject, char  c)
{
  return &( theWrappedObject->prepend(c));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, qulonglong  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, double  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, float  arg__1, char  f, int  prec)
{
  return &( theWrappedObject->setNum(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, int  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray*  PythonQtWrapper_QByteArray::setNum(QByteArray* theWrappedObject, ushort  arg__1, int  base)
{
  return &( theWrappedObject->setNum(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::simplified(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->simplified());
}

void PythonQtWrapper_QByteArray::resize(QByteArray* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

QByteArray  PythonQtWrapper_QByteArray::toUpper(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toUpper());
}

QByteArray  PythonQtWrapper_QByteArray::toLower(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toLower());
}

void PythonQtWrapper_QByteArray::truncate(QByteArray* theWrappedObject, int  pos)
{
  ( theWrappedObject->truncate(pos));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(qlonglong  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(qulonglong  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(double  arg__1, char  f, int  prec)
{
  return (QByteArray::number(arg__1, f, prec));
}

QByteArray*  PythonQtWrapper_QByteArray::operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QByteArray  PythonQtWrapper_QByteArray::leftJustified(QByteArray* theWrappedObject, int  width, char  fill, bool  truncate) const
{
  return ( theWrappedObject->leftJustified(width, fill, truncate));
}

void PythonQtWrapper_QByteArray::chop(QByteArray* theWrappedObject, int  n)
{
  ( theWrappedObject->chop(n));
}

void PythonQtWrapper_QByteArray::clear(QByteArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QByteArray::__gt__(QByteArray* theWrappedObject, const QString&  s2) const
{
  return ( (*theWrappedObject)> s2);
}

bool  PythonQtWrapper_QByteArray::isNull(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QByteArray  PythonQtWrapper_QByteArray::static_QByteArray_number(int  arg__1, int  base)
{
  return (QByteArray::number(arg__1, base));
}

QByteArray  PythonQtWrapper_QByteArray::toBase64(QByteArray* theWrappedObject) const
{
  return ( theWrappedObject->toBase64());
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->endsWith(c));
}

bool  PythonQtWrapper_QByteArray::endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->endsWith(a));
}

QBool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, const QByteArray&  a) const
{
  return ( theWrappedObject->contains(a));
}

QBool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, char  c) const
{
  return ( theWrappedObject->contains(c));
}

QBool  PythonQtWrapper_QByteArray::contains(QByteArray* theWrappedObject, const char*  a) const
{
  return ( theWrappedObject->contains(a));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QString&  s)
{
  return &( theWrappedObject->insert(i, s));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a)
{
  return &( theWrappedObject->insert(i, a));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, const char*  s, int  len)
{
  return &( theWrappedObject->insert(i, s, len));
}

QByteArray*  PythonQtWrapper_QByteArray::insert(QByteArray* theWrappedObject, int  i, char  c)
{
  return &( theWrappedObject->insert(i, c));
}

bool  PythonQtWrapper_QByteArray::__le__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)<= a2);
}

bool  PythonQtWrapper_QByteArray::__eq__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)== a2);
}

bool  PythonQtWrapper_QByteArray::__ge__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)>= a2);
}

bool  PythonQtWrapper_QByteArray::__gt__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)> a2);
}

bool  PythonQtWrapper_QByteArray::__lt__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)< a2);
}

const QString  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QString&  s)
{
  return ( (*theWrappedObject)+ s);
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, char  a2)
{
  return ( (*theWrappedObject)+ a2);
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const char*  a2)
{
  return ( (*theWrappedObject)+ a2);
}

const QByteArray  PythonQtWrapper_QByteArray::__add__(QByteArray* theWrappedObject, const QByteArray&  a2)
{
  return ( (*theWrappedObject)+ a2);
}

void PythonQtWrapper_QByteArray::writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QByteArray::readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
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

void PythonQtWrapper_QByteArrayMatcher::setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

int  PythonQtWrapper_QByteArrayMatcher::indexIn(QByteArrayMatcher* theWrappedObject, const char*  str, int  len, int  from) const
{
  return ( theWrappedObject->indexIn(str, len, from));
}

int  PythonQtWrapper_QByteArrayMatcher::indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from) const
{
  return ( theWrappedObject->indexIn(ba, from));
}

QByteArray  PythonQtWrapper_QByteArrayMatcher::pattern(QByteArrayMatcher* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}



QChildEvent* PythonQtWrapper_QChildEvent::new_QChildEvent(QEvent::Type  type, QObject*  child)
{ 
return new PythonQtShell_QChildEvent(type, child); }

bool  PythonQtWrapper_QChildEvent::removed(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->removed());
}

QObject*  PythonQtWrapper_QChildEvent::child(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->child());
}

bool  PythonQtWrapper_QChildEvent::added(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->added());
}

bool  PythonQtWrapper_QChildEvent::polished(QChildEvent* theWrappedObject) const
{
  return ( theWrappedObject->polished());
}



bool  PythonQtShell_QCoreApplication::event(QEvent*  arg__1)
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
  return QCoreApplication::event(arg__1);
}
bool  PythonQtShell_QCoreApplication::notify(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "notify");
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
          PythonQt::priv()->handleVirtualOverloadReturnError("notify", methodInfo, result);
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
  return QCoreApplication::notify(arg__1, arg__2);
}
bool  PythonQtShell_QCoreApplication::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QCoreApplication::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QCoreApplication::childEvent(QChildEvent*  arg__1)
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
  QCoreApplication::childEvent(arg__1);
}
void PythonQtShell_QCoreApplication::customEvent(QEvent*  arg__1)
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
  QCoreApplication::customEvent(arg__1);
}
void PythonQtShell_QCoreApplication::timerEvent(QTimerEvent*  arg__1)
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
  QCoreApplication::timerEvent(arg__1);
}
QStringList  PythonQtWrapper_QCoreApplication::static_QCoreApplication_libraryPaths()
{
  return (QCoreApplication::libraryPaths());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver)
{
  (QCoreApplication::removePostedEvents(receiver));
}

bool  PythonQtWrapper_QCoreApplication::event(QCoreApplication* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->promoted_event(arg__1));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationDirPath()
{
  return (QCoreApplication::applicationDirPath());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_flush()
{
  (QCoreApplication::flush());
}

qint64  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationPid()
{
  return (QCoreApplication::applicationPid());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationName(const QString&  orgName)
{
  (QCoreApplication::setOrganizationName(orgName));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on)
{
  (QCoreApplication::setAttribute(attribute, on));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationFilePath()
{
  return (QCoreApplication::applicationFilePath());
}

int  PythonQtWrapper_QCoreApplication::static_QCoreApplication_exec()
{
  return (QCoreApplication::exec());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation, QCoreApplication::Encoding  encoding)
{
  return (QCoreApplication::translate(context, key, disambiguation, encoding));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_translate(const char*  context, const char*  key, const char*  disambiguation, QCoreApplication::Encoding  encoding, int  n)
{
  return (QCoreApplication::translate(context, key, disambiguation, encoding, n));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_startingUp()
{
  return (QCoreApplication::startingUp());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_hasPendingEvents()
{
  return (QCoreApplication::hasPendingEvents());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationVersion()
{
  return (QCoreApplication::applicationVersion());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_addLibraryPath(const QString&  arg__1)
{
  (QCoreApplication::addLibraryPath(arg__1));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event, int  priority)
{
  (QCoreApplication::postEvent(receiver, event, priority));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event)
{
  (QCoreApplication::postEvent(receiver, event));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event)
{
  return (QCoreApplication::sendEvent(receiver, event));
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute)
{
  return (QCoreApplication::testAttribute(attribute));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type)
{
  (QCoreApplication::sendPostedEvents(receiver, event_type));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_sendPostedEvents()
{
  (QCoreApplication::sendPostedEvents());
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationDomain()
{
  return (QCoreApplication::organizationDomain());
}

bool  PythonQtWrapper_QCoreApplication::notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QCoreApplication*)theWrappedObject)->promoted_notify(arg__1, arg__2));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType)
{
  (QCoreApplication::removePostedEvents(receiver, eventType));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationName(const QString&  application)
{
  (QCoreApplication::setApplicationName(application));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeLibraryPath(const QString&  arg__1)
{
  (QCoreApplication::removeLibraryPath(arg__1));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime)
{
  (QCoreApplication::processEvents(flags, maxtime));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_organizationName()
{
  return (QCoreApplication::organizationName());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags)
{
  (QCoreApplication::processEvents(flags));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain)
{
  (QCoreApplication::setOrganizationDomain(orgDomain));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1)
{
  (QCoreApplication::setLibraryPaths(arg__1));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_removeTranslator(QTranslator*  messageFile)
{
  (QCoreApplication::removeTranslator(messageFile));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_installTranslator(QTranslator*  messageFile)
{
  (QCoreApplication::installTranslator(messageFile));
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_setApplicationVersion(const QString&  version)
{
  (QCoreApplication::setApplicationVersion(version));
}

QString  PythonQtWrapper_QCoreApplication::static_QCoreApplication_applicationName()
{
  return (QCoreApplication::applicationName());
}

QCoreApplication*  PythonQtWrapper_QCoreApplication::static_QCoreApplication_instance()
{
  return (QCoreApplication::instance());
}

bool  PythonQtWrapper_QCoreApplication::static_QCoreApplication_closingDown()
{
  return (QCoreApplication::closingDown());
}

void PythonQtWrapper_QCoreApplication::static_QCoreApplication_exit(int  retcode)
{
  (QCoreApplication::exit(retcode));
}



QCryptographicHash* PythonQtWrapper_QCryptographicHash::new_QCryptographicHash(QCryptographicHash::Algorithm  method)
{ 
return new QCryptographicHash(method); }

void PythonQtWrapper_QCryptographicHash::reset(QCryptographicHash* theWrappedObject)
{
  ( theWrappedObject->reset());
}

QByteArray  PythonQtWrapper_QCryptographicHash::result(QCryptographicHash* theWrappedObject) const
{
  return ( theWrappedObject->result());
}

void PythonQtWrapper_QCryptographicHash::addData(QCryptographicHash* theWrappedObject, const QByteArray&  data)
{
  ( theWrappedObject->addData(data));
}

QByteArray  PythonQtWrapper_QCryptographicHash::static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method)
{
  return (QCryptographicHash::hash(data, method));
}



QDataStream* PythonQtWrapper_QDataStream::new_QDataStream()
{ 
return new PythonQtShell_QDataStream(); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags)
{ 
return new PythonQtShell_QDataStream(arg__1, flags); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(QIODevice*  arg__1)
{ 
return new PythonQtShell_QDataStream(arg__1); }

QDataStream* PythonQtWrapper_QDataStream::new_QDataStream(const QByteArray&  arg__1)
{ 
return new PythonQtShell_QDataStream(arg__1); }

int  PythonQtWrapper_QDataStream::skipRawData(QDataStream* theWrappedObject, int  len)
{
  return ( theWrappedObject->skipRawData(len));
}

QIODevice*  PythonQtWrapper_QDataStream::device(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QDataStream*  PythonQtWrapper_QDataStream::writeLongLong(QDataStream* theWrappedObject, qint64  i)
{
  return &( (*theWrappedObject) <<i);
}

QDataStream*  PythonQtWrapper_QDataStream::readDouble(QDataStream* theWrappedObject, double&  f)
{
  return &( (*theWrappedObject) >>f);
}

void PythonQtWrapper_QDataStream::resetStatus(QDataStream* theWrappedObject)
{
  ( theWrappedObject->resetStatus());
}

QDataStream*  PythonQtWrapper_QDataStream::readFloat(QDataStream* theWrappedObject, float&  f)
{
  return &( (*theWrappedObject) >>f);
}

QDataStream*  PythonQtWrapper_QDataStream::readBoolean(QDataStream* theWrappedObject, bool&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream*  PythonQtWrapper_QDataStream::readLongLong(QDataStream* theWrappedObject, qint64&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream*  PythonQtWrapper_QDataStream::readInt(QDataStream* theWrappedObject, int&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream*  PythonQtWrapper_QDataStream::readUShort(QDataStream* theWrappedObject, unsigned short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream*  PythonQtWrapper_QDataStream::readShort(QDataStream* theWrappedObject, short&  i)
{
  return &( (*theWrappedObject) >>i);
}

QDataStream*  PythonQtWrapper_QDataStream::writeShort(QDataStream* theWrappedObject, short  i)
{
  return &( (*theWrappedObject) <<i);
}

QDataStream*  PythonQtWrapper_QDataStream::writeFloat(QDataStream* theWrappedObject, float  f)
{
  return &( (*theWrappedObject) <<f);
}

QDataStream*  PythonQtWrapper_QDataStream::writeDouble(QDataStream* theWrappedObject, double  f)
{
  return &( (*theWrappedObject) <<f);
}

QDataStream*  PythonQtWrapper_QDataStream::writeInt(QDataStream* theWrappedObject, int  i)
{
  return &( (*theWrappedObject) <<i);
}

QDataStream*  PythonQtWrapper_QDataStream::writeBoolean(QDataStream* theWrappedObject, bool  i)
{
  return &( (*theWrappedObject) <<i);
}

bool  PythonQtWrapper_QDataStream::atEnd(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

void PythonQtWrapper_QDataStream::unsetDevice(QDataStream* theWrappedObject)
{
  ( theWrappedObject->unsetDevice());
}

void PythonQtWrapper_QDataStream::setFloatingPointPrecision(QDataStream* theWrappedObject, QDataStream::FloatingPointPrecision  precision)
{
  ( theWrappedObject->setFloatingPointPrecision(precision));
}

void PythonQtWrapper_QDataStream::setVersion(QDataStream* theWrappedObject, int  arg__1)
{
  ( theWrappedObject->setVersion(arg__1));
}

QDataStream::Status  PythonQtWrapper_QDataStream::status(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

void PythonQtWrapper_QDataStream::setStatus(QDataStream* theWrappedObject, QDataStream::Status  status)
{
  ( theWrappedObject->setStatus(status));
}

QDataStream::FloatingPointPrecision  PythonQtWrapper_QDataStream::floatingPointPrecision(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->floatingPointPrecision());
}

int  PythonQtWrapper_QDataStream::version(QDataStream* theWrappedObject) const
{
  return ( theWrappedObject->version());
}

void PythonQtWrapper_QDataStream::setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1)
{
  ( theWrappedObject->setDevice(arg__1));
}



QDir* PythonQtWrapper_QDir::new_QDir(const QDir&  arg__1)
{ 
return new QDir(arg__1); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path)
{ 
return new QDir(path); }

QDir* PythonQtWrapper_QDir::new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort, QDir::Filters  filter)
{ 
return new QDir(path, nameFilter, sort, filter); }

bool  PythonQtWrapper_QDir::cd(QDir* theWrappedObject, const QString&  dirName)
{
  return ( theWrappedObject->cd(dirName));
}

bool  PythonQtWrapper_QDir::remove(QDir* theWrappedObject, const QString&  fileName)
{
  return ( theWrappedObject->remove(fileName));
}

bool  PythonQtWrapper_QDir::rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName)
{
  return ( theWrappedObject->rename(oldName, newName));
}

QDir::SortFlags  PythonQtWrapper_QDir::sorting(QDir* theWrappedObject) const
{
  return ( theWrappedObject->sorting());
}

QString  PythonQtWrapper_QDir::filePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->filePath(fileName));
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

bool  PythonQtWrapper_QDir::exists(QDir* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->exists(name));
}

uint  PythonQtWrapper_QDir::count(QDir* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QList<QFileInfo >  PythonQtWrapper_QDir::static_QDir_drives()
{
  return (QDir::drives());
}

bool  PythonQtWrapper_QDir::isRelative(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

QDir  PythonQtWrapper_QDir::static_QDir_home()
{
  return (QDir::home());
}

QChar  PythonQtWrapper_QDir::static_QDir_separator()
{
  return (QDir::separator());
}

bool  PythonQtWrapper_QDir::makeAbsolute(QDir* theWrappedObject)
{
  return ( theWrappedObject->makeAbsolute());
}

void PythonQtWrapper_QDir::static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths)
{
  (QDir::setSearchPaths(prefix, searchPaths));
}

bool  PythonQtWrapper_QDir::mkdir(QDir* theWrappedObject, const QString&  dirName) const
{
  return ( theWrappedObject->mkdir(dirName));
}

bool  PythonQtWrapper_QDir::rmpath(QDir* theWrappedObject, const QString&  dirPath) const
{
  return ( theWrappedObject->rmpath(dirPath));
}

QString  PythonQtWrapper_QDir::operator_subscript(QDir* theWrappedObject, int  arg__1) const
{
  return ( (*theWrappedObject)[arg__1]);
}

bool  PythonQtWrapper_QDir::rmdir(QDir* theWrappedObject, const QString&  dirName) const
{
  return ( theWrappedObject->rmdir(dirName));
}

bool  PythonQtWrapper_QDir::static_QDir_isAbsolutePath(const QString&  path)
{
  return (QDir::isAbsolutePath(path));
}

QString  PythonQtWrapper_QDir::absolutePath(QDir* theWrappedObject) const
{
  return ( theWrappedObject->absolutePath());
}

QDir  PythonQtWrapper_QDir::static_QDir_temp()
{
  return (QDir::temp());
}

QDir  PythonQtWrapper_QDir::static_QDir_current()
{
  return (QDir::current());
}

QString  PythonQtWrapper_QDir::path(QDir* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

QString  PythonQtWrapper_QDir::dirName(QDir* theWrappedObject) const
{
  return ( theWrappedObject->dirName());
}

void PythonQtWrapper_QDir::setFilter(QDir* theWrappedObject, QDir::Filters  filter)
{
  ( theWrappedObject->setFilter(filter));
}

void PythonQtWrapper_QDir::setSorting(QDir* theWrappedObject, QDir::SortFlags  sort)
{
  ( theWrappedObject->setSorting(sort));
}

QString  PythonQtWrapper_QDir::static_QDir_rootPath()
{
  return (QDir::rootPath());
}

bool  PythonQtWrapper_QDir::static_QDir_setCurrent(const QString&  path)
{
  return (QDir::setCurrent(path));
}

QString  PythonQtWrapper_QDir::static_QDir_tempPath()
{
  return (QDir::tempPath());
}

bool  PythonQtWrapper_QDir::isReadable(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QDir::static_QDir_isRelativePath(const QString&  path)
{
  return (QDir::isRelativePath(path));
}

void PythonQtWrapper_QDir::setPath(QDir* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

QStringList  PythonQtWrapper_QDir::static_QDir_nameFiltersFromString(const QString&  nameFilter)
{
  return (QDir::nameFiltersFromString(nameFilter));
}

QString  PythonQtWrapper_QDir::relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->relativeFilePath(fileName));
}

bool  PythonQtWrapper_QDir::cdUp(QDir* theWrappedObject)
{
  return ( theWrappedObject->cdUp());
}

bool  PythonQtWrapper_QDir::mkpath(QDir* theWrappedObject, const QString&  dirPath) const
{
  return ( theWrappedObject->mkpath(dirPath));
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryInfoList(filters, sort));
}

QDir::Filters  PythonQtWrapper_QDir::filter(QDir* theWrappedObject) const
{
  return ( theWrappedObject->filter());
}

QString  PythonQtWrapper_QDir::static_QDir_cleanPath(const QString&  path)
{
  return (QDir::cleanPath(path));
}

QString  PythonQtWrapper_QDir::static_QDir_toNativeSeparators(const QString&  pathName)
{
  return (QDir::toNativeSeparators(pathName));
}

void PythonQtWrapper_QDir::setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters)
{
  ( theWrappedObject->setNameFilters(nameFilters));
}

void PythonQtWrapper_QDir::static_QDir_addSearchPath(const QString&  prefix, const QString&  path)
{
  (QDir::addSearchPath(prefix, path));
}

QList<QFileInfo >  PythonQtWrapper_QDir::entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryInfoList(nameFilters, filters, sort));
}

QString  PythonQtWrapper_QDir::canonicalPath(QDir* theWrappedObject) const
{
  return ( theWrappedObject->canonicalPath());
}

bool  PythonQtWrapper_QDir::__ne__(QDir* theWrappedObject, const QDir&  dir) const
{
  return ( (*theWrappedObject)!= dir);
}

QString  PythonQtWrapper_QDir::static_QDir_fromNativeSeparators(const QString&  pathName)
{
  return (QDir::fromNativeSeparators(pathName));
}

void PythonQtWrapper_QDir::refresh(QDir* theWrappedObject) const
{
  ( theWrappedObject->refresh());
}

QStringList  PythonQtWrapper_QDir::nameFilters(QDir* theWrappedObject) const
{
  return ( theWrappedObject->nameFilters());
}

QDir  PythonQtWrapper_QDir::static_QDir_root()
{
  return (QDir::root());
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QString&  filter, const QString&  fileName)
{
  return (QDir::match(filter, fileName));
}

bool  PythonQtWrapper_QDir::static_QDir_match(const QStringList&  filters, const QString&  fileName)
{
  return (QDir::match(filters, fileName));
}

QString  PythonQtWrapper_QDir::static_QDir_currentPath()
{
  return (QDir::currentPath());
}

bool  PythonQtWrapper_QDir::isRoot(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isRoot());
}

bool  PythonQtWrapper_QDir::__eq__(QDir* theWrappedObject, const QDir&  dir) const
{
  return ( (*theWrappedObject)== dir);
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryList(filters, sort));
}

bool  PythonQtWrapper_QDir::isAbsolute(QDir* theWrappedObject) const
{
  return ( theWrappedObject->isAbsolute());
}

QStringList  PythonQtWrapper_QDir::static_QDir_searchPaths(const QString&  prefix)
{
  return (QDir::searchPaths(prefix));
}

QStringList  PythonQtWrapper_QDir::entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters, QDir::SortFlags  sort) const
{
  return ( theWrappedObject->entryList(nameFilters, filters, sort));
}

QString  PythonQtWrapper_QDir::static_QDir_convertSeparators(const QString&  pathName)
{
  return (QDir::convertSeparators(pathName));
}

QString  PythonQtWrapper_QDir::absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const
{
  return ( theWrappedObject->absoluteFilePath(fileName));
}

QString  PythonQtWrapper_QDir::static_QDir_homePath()
{
  return (QDir::homePath());
}

QString PythonQtWrapper_QDir::py_toString(QDir* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags)
{ 
return new PythonQtShell_QDirIterator(dir, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags)
{ 
return new PythonQtShell_QDirIterator(path, filter, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags)
{ 
return new PythonQtShell_QDirIterator(path, flags); }

QDirIterator* PythonQtWrapper_QDirIterator::new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters, QDirIterator::IteratorFlags  flags)
{ 
return new PythonQtShell_QDirIterator(path, nameFilters, filters, flags); }

QString  PythonQtWrapper_QDirIterator::next(QDirIterator* theWrappedObject)
{
  return ( theWrappedObject->next());
}

bool  PythonQtWrapper_QDirIterator::hasNext(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->hasNext());
}

QFileInfo  PythonQtWrapper_QDirIterator::fileInfo(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileInfo());
}

QString  PythonQtWrapper_QDirIterator::path(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

QString  PythonQtWrapper_QDirIterator::fileName(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QString  PythonQtWrapper_QDirIterator::filePath(QDirIterator* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}



QDynamicPropertyChangeEvent* PythonQtWrapper_QDynamicPropertyChangeEvent::new_QDynamicPropertyChangeEvent(const QByteArray&  name)
{ 
return new QDynamicPropertyChangeEvent(name); }

QByteArray  PythonQtWrapper_QDynamicPropertyChangeEvent::propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}



QEasingCurve* PythonQtWrapper_QEasingCurve::new_QEasingCurve(QEasingCurve::Type  type)
{ 
return new QEasingCurve(type); }

QEasingCurve* PythonQtWrapper_QEasingCurve::new_QEasingCurve(const QEasingCurve&  other)
{ 
return new QEasingCurve(other); }

void PythonQtWrapper_QEasingCurve::setOvershoot(QEasingCurve* theWrappedObject, qreal  overshoot)
{
  ( theWrappedObject->setOvershoot(overshoot));
}

void PythonQtWrapper_QEasingCurve::setPeriod(QEasingCurve* theWrappedObject, qreal  period)
{
  ( theWrappedObject->setPeriod(period));
}

qreal  PythonQtWrapper_QEasingCurve::valueForProgress(QEasingCurve* theWrappedObject, qreal  progress) const
{
  return ( theWrappedObject->valueForProgress(progress));
}

QEasingCurve*  PythonQtWrapper_QEasingCurve::operator_assign(QEasingCurve* theWrappedObject, const QEasingCurve&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QEasingCurve::__ne__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const
{
  return ( (*theWrappedObject)!= other);
}

qreal  PythonQtWrapper_QEasingCurve::overshoot(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->overshoot());
}

void PythonQtWrapper_QEasingCurve::setType(QEasingCurve* theWrappedObject, QEasingCurve::Type  type)
{
  ( theWrappedObject->setType(type));
}

qreal  PythonQtWrapper_QEasingCurve::period(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->period());
}

bool  PythonQtWrapper_QEasingCurve::__eq__(QEasingCurve* theWrappedObject, const QEasingCurve&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QEasingCurve::setAmplitude(QEasingCurve* theWrappedObject, qreal  amplitude)
{
  ( theWrappedObject->setAmplitude(amplitude));
}

qreal  PythonQtWrapper_QEasingCurve::amplitude(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->amplitude());
}

QEasingCurve::Type  PythonQtWrapper_QEasingCurve::type(QEasingCurve* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

QString PythonQtWrapper_QEasingCurve::py_toString(QEasingCurve* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QEvent* PythonQtWrapper_QEvent::new_QEvent(QEvent::Type  type)
{ 
return new PythonQtShell_QEvent(type); }

bool  PythonQtWrapper_QEvent::spontaneous(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->spontaneous());
}

void PythonQtWrapper_QEvent::ignore(QEvent* theWrappedObject)
{
  ( theWrappedObject->ignore());
}

void PythonQtWrapper_QEvent::accept(QEvent* theWrappedObject)
{
  ( theWrappedObject->accept());
}

int  PythonQtWrapper_QEvent::static_QEvent_registerEventType(int  hint)
{
  return (QEvent::registerEventType(hint));
}

QEvent::Type  PythonQtWrapper_QEvent::type(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->type());
}

void PythonQtWrapper_QEvent::setAccepted(QEvent* theWrappedObject, bool  accepted)
{
  ( theWrappedObject->setAccepted(accepted));
}

bool  PythonQtWrapper_QEvent::isAccepted(QEvent* theWrappedObject) const
{
  return ( theWrappedObject->isAccepted());
}

QString PythonQtWrapper_QEvent::py_toString(QEvent* obj) {
  QString result;
  QDebug d(&result);
  d << obj;
  return result;
}



bool  PythonQtShell_QEventLoop::event(QEvent*  arg__1)
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
  return QEventLoop::event(arg__1);
}
bool  PythonQtShell_QEventLoop::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QEventLoop::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QEventLoop::childEvent(QChildEvent*  arg__1)
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
  QEventLoop::childEvent(arg__1);
}
void PythonQtShell_QEventLoop::customEvent(QEvent*  arg__1)
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
  QEventLoop::customEvent(arg__1);
}
void PythonQtShell_QEventLoop::timerEvent(QTimerEvent*  arg__1)
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
  QEventLoop::timerEvent(arg__1);
}
QEventLoop* PythonQtWrapper_QEventLoop::new_QEventLoop(QObject*  parent)
{ 
return new PythonQtShell_QEventLoop(parent); }

void PythonQtWrapper_QEventLoop::exit(QEventLoop* theWrappedObject, int  returnCode)
{
  ( theWrappedObject->exit(returnCode));
}

void PythonQtWrapper_QEventLoop::wakeUp(QEventLoop* theWrappedObject)
{
  ( theWrappedObject->wakeUp());
}

bool  PythonQtWrapper_QEventLoop::isRunning(QEventLoop* theWrappedObject) const
{
  return ( theWrappedObject->isRunning());
}

bool  PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
  return ( theWrappedObject->processEvents(flags));
}

void PythonQtWrapper_QEventLoop::processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime)
{
  ( theWrappedObject->processEvents(flags, maximumTime));
}

int  PythonQtWrapper_QEventLoop::exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags)
{
  return ( theWrappedObject->exec(flags));
}



bool  PythonQtShell_QEventTransition::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QEventTransition::event(e);
}
void PythonQtShell_QEventTransition::onTransition(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onTransition");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QEventTransition::onTransition(event);
}
bool  PythonQtShell_QEventTransition::eventTest(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventTest");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventTest", methodInfo, result);
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
  return QEventTransition::eventTest(event);
}
bool  PythonQtShell_QEventTransition::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QEventTransition::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QEventTransition::childEvent(QChildEvent*  arg__1)
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
  QEventTransition::childEvent(arg__1);
}
void PythonQtShell_QEventTransition::customEvent(QEvent*  arg__1)
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
  QEventTransition::customEvent(arg__1);
}
void PythonQtShell_QEventTransition::timerEvent(QTimerEvent*  arg__1)
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
  QEventTransition::timerEvent(arg__1);
}
QEventTransition* PythonQtWrapper_QEventTransition::new_QEventTransition(QObject*  object, QEvent::Type  type, QState*  sourceState)
{ 
return new PythonQtShell_QEventTransition(object, type, sourceState); }

QEventTransition* PythonQtWrapper_QEventTransition::new_QEventTransition(QState*  sourceState)
{ 
return new PythonQtShell_QEventTransition(sourceState); }

void PythonQtWrapper_QEventTransition::setEventType(QEventTransition* theWrappedObject, QEvent::Type  type)
{
  ( theWrappedObject->setEventType(type));
}

void PythonQtWrapper_QEventTransition::setEventSource(QEventTransition* theWrappedObject, QObject*  object)
{
  ( theWrappedObject->setEventSource(object));
}

bool  PythonQtWrapper_QEventTransition::event(QEventTransition* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QEventTransition::onTransition(QEventTransition* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->promoted_onTransition(event));
}

QEvent::Type  PythonQtWrapper_QEventTransition::eventType(QEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->eventType());
}

QObject*  PythonQtWrapper_QEventTransition::eventSource(QEventTransition* theWrappedObject) const
{
  return ( theWrappedObject->eventSource());
}

bool  PythonQtWrapper_QEventTransition::eventTest(QEventTransition* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QEventTransition*)theWrappedObject)->promoted_eventTest(event));
}



QStringList  PythonQtShell_QFactoryInterface::keys() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keys");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStringList"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStringList returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("keys", methodInfo, result);
        } else {
          returnValue = *((QStringList*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QStringList();
}
QFactoryInterface* PythonQtWrapper_QFactoryInterface::new_QFactoryInterface()
{ 
return new PythonQtShell_QFactoryInterface(); }



bool  PythonQtShell_QFile::seek(qint64  offset)
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
  return QFile::seek(offset);
}
QAbstractFileEngine*  PythonQtShell_QFile::fileEngine() const
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
  return QFile::fileEngine();
}
qint64  PythonQtShell_QFile::readLineData(char*  data, qint64  maxlen)
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
  return QFile::readLineData(data, maxlen);
}
qint64  PythonQtShell_QFile::pos() const
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
  return QFile::pos();
}
qint64  PythonQtShell_QFile::size() const
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
  return QFile::size();
}
void PythonQtShell_QFile::close()
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
  QFile::close();
}
bool  PythonQtShell_QFile::atEnd() const
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
  return QFile::atEnd();
}
bool  PythonQtShell_QFile::open(QIODevice::OpenMode  flags)
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
  return QFile::open(flags);
}
bool  PythonQtShell_QFile::isSequential() const
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
  return QFile::isSequential();
}
qint64  PythonQtShell_QFile::readData(char*  data, qint64  maxlen)
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
  return QFile::readData(data, maxlen);
}
qint64  PythonQtShell_QFile::writeData(const char*  data, qint64  len)
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
  return QFile::writeData(data, len);
}
qint64  PythonQtShell_QFile::bytesAvailable() const
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
  return QFile::bytesAvailable();
}
bool  PythonQtShell_QFile::reset()
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
  return QFile::reset();
}
bool  PythonQtShell_QFile::waitForBytesWritten(int  msecs)
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
  return QFile::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QFile::canReadLine() const
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
  return QFile::canReadLine();
}
qint64  PythonQtShell_QFile::bytesToWrite() const
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
  return QFile::bytesToWrite();
}
bool  PythonQtShell_QFile::waitForReadyRead(int  msecs)
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
  return QFile::waitForReadyRead(msecs);
}
bool  PythonQtShell_QFile::event(QEvent*  arg__1)
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
  return QFile::event(arg__1);
}
bool  PythonQtShell_QFile::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QFile::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QFile::childEvent(QChildEvent*  arg__1)
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
  QFile::childEvent(arg__1);
}
void PythonQtShell_QFile::customEvent(QEvent*  arg__1)
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
  QFile::customEvent(arg__1);
}
void PythonQtShell_QFile::timerEvent(QTimerEvent*  arg__1)
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
  QFile::timerEvent(arg__1);
}
QFile* PythonQtWrapper_QFile::new_QFile()
{ 
return new PythonQtShell_QFile(); }

QFile* PythonQtWrapper_QFile::new_QFile(QObject*  parent)
{ 
return new PythonQtShell_QFile(parent); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name)
{ 
return new PythonQtShell_QFile(name); }

QFile* PythonQtWrapper_QFile::new_QFile(const QString&  name, QObject*  parent)
{ 
return new PythonQtShell_QFile(name, parent); }

int  PythonQtWrapper_QFile::handle(QFile* theWrappedObject) const
{
  return ( theWrappedObject->handle());
}

bool  PythonQtWrapper_QFile::static_QFile_copy(const QString&  fileName, const QString&  newName)
{
  return (QFile::copy(fileName, newName));
}

bool  PythonQtWrapper_QFile::static_QFile_resize(const QString&  filename, qint64  sz)
{
  return (QFile::resize(filename, sz));
}

bool  PythonQtWrapper_QFile::static_QFile_exists(const QString&  fileName)
{
  return (QFile::exists(fileName));
}

bool  PythonQtWrapper_QFile::seek(QFile* theWrappedObject, qint64  offset)
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_seek(offset));
}

bool  PythonQtWrapper_QFile::exists(QFile* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

QAbstractFileEngine*  PythonQtWrapper_QFile::fileEngine(QFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_fileEngine());
}

qint64  PythonQtWrapper_QFile::readLineData(QFile* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

QFile::Permissions  PythonQtWrapper_QFile::static_QFile_permissions(const QString&  filename)
{
  return (QFile::permissions(filename));
}

qint64  PythonQtWrapper_QFile::pos(QFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_pos());
}

QFile::Permissions  PythonQtWrapper_QFile::permissions(QFile* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

QFile::FileError  PythonQtWrapper_QFile::error(QFile* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

bool  PythonQtWrapper_QFile::static_QFile_rename(const QString&  oldName, const QString&  newName)
{
  return (QFile::rename(oldName, newName));
}

QByteArray  PythonQtWrapper_QFile::static_QFile_encodeName(const QString&  fileName)
{
  return (QFile::encodeName(fileName));
}

bool  PythonQtWrapper_QFile::rename(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->rename(newName));
}

qint64  PythonQtWrapper_QFile::size(QFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_size());
}

QString  PythonQtWrapper_QFile::static_QFile_decodeName(const QByteArray&  localFileName)
{
  return (QFile::decodeName(localFileName));
}

void PythonQtWrapper_QFile::setFileName(QFile* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setFileName(name));
}

void PythonQtWrapper_QFile::close(QFile* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_close());
}

bool  PythonQtWrapper_QFile::atEnd(QFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_atEnd());
}

bool  PythonQtWrapper_QFile::static_QFile_link(const QString&  oldname, const QString&  newName)
{
  return (QFile::link(oldname, newName));
}

bool  PythonQtWrapper_QFile::link(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->link(newName));
}

bool  PythonQtWrapper_QFile::resize(QFile* theWrappedObject, qint64  sz)
{
  return ( theWrappedObject->resize(sz));
}

bool  PythonQtWrapper_QFile::open(QFile* theWrappedObject, QIODevice::OpenMode  flags)
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_open(flags));
}

QString  PythonQtWrapper_QFile::symLinkTarget(QFile* theWrappedObject) const
{
  return ( theWrappedObject->symLinkTarget());
}

bool  PythonQtWrapper_QFile::static_QFile_setPermissions(const QString&  filename, QFile::Permissions  permissionSpec)
{
  return (QFile::setPermissions(filename, permissionSpec));
}

QString  PythonQtWrapper_QFile::static_QFile_symLinkTarget(const QString&  fileName)
{
  return (QFile::symLinkTarget(fileName));
}

bool  PythonQtWrapper_QFile::setPermissions(QFile* theWrappedObject, QFile::Permissions  permissionSpec)
{
  return ( theWrappedObject->setPermissions(permissionSpec));
}

bool  PythonQtWrapper_QFile::isSequential(QFile* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_isSequential());
}

QString  PythonQtWrapper_QFile::fileName(QFile* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

qint64  PythonQtWrapper_QFile::readData(QFile* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_readData(data, maxlen));
}

bool  PythonQtWrapper_QFile::static_QFile_remove(const QString&  fileName)
{
  return (QFile::remove(fileName));
}

bool  PythonQtWrapper_QFile::remove(QFile* theWrappedObject)
{
  return ( theWrappedObject->remove());
}

bool  PythonQtWrapper_QFile::flush(QFile* theWrappedObject)
{
  return ( theWrappedObject->flush());
}

void PythonQtWrapper_QFile::unsetError(QFile* theWrappedObject)
{
  ( theWrappedObject->unsetError());
}

qint64  PythonQtWrapper_QFile::writeData(QFile* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QFile*)theWrappedObject)->promoted_writeData(data, len));
}

bool  PythonQtWrapper_QFile::copy(QFile* theWrappedObject, const QString&  newName)
{
  return ( theWrappedObject->copy(newName));
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

bool  PythonQtWrapper_QFileInfo::__eq__(QFileInfo* theWrappedObject, const QFileInfo&  fileinfo)
{
  return ( (*theWrappedObject)== fileinfo);
}

QString  PythonQtWrapper_QFileInfo::canonicalPath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalPath());
}

bool  PythonQtWrapper_QFileInfo::exists(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->exists());
}

QFile::Permissions  PythonQtWrapper_QFileInfo::permissions(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->permissions());
}

uint  PythonQtWrapper_QFileInfo::ownerId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->ownerId());
}

bool  PythonQtWrapper_QFileInfo::permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const
{
  return ( theWrappedObject->permission(permissions));
}

bool  PythonQtWrapper_QFileInfo::isRelative(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

bool  PythonQtWrapper_QFileInfo::isWritable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

qint64  PythonQtWrapper_QFileInfo::size(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

bool  PythonQtWrapper_QFileInfo::isSymLink(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isSymLink());
}

bool  PythonQtWrapper_QFileInfo::isRoot(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isRoot());
}

QString  PythonQtWrapper_QFileInfo::filePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->filePath());
}

bool  PythonQtWrapper_QFileInfo::__ne__(QFileInfo* theWrappedObject, const QFileInfo&  fileinfo)
{
  return ( (*theWrappedObject)!= fileinfo);
}

QString  PythonQtWrapper_QFileInfo::completeSuffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeSuffix());
}

QString  PythonQtWrapper_QFileInfo::suffix(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->suffix());
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file)
{
  ( theWrappedObject->setFile(dir, file));
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QFile&  file)
{
  ( theWrappedObject->setFile(file));
}

bool  PythonQtWrapper_QFileInfo::isExecutable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isExecutable());
}

QString  PythonQtWrapper_QFileInfo::absolutePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absolutePath());
}

bool  PythonQtWrapper_QFileInfo::caching(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->caching());
}

QString  PythonQtWrapper_QFileInfo::bundleName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->bundleName());
}

QString  PythonQtWrapper_QFileInfo::group(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->group());
}

QString  PythonQtWrapper_QFileInfo::completeBaseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->completeBaseName());
}

bool  PythonQtWrapper_QFileInfo::isFile(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isFile());
}

void PythonQtWrapper_QFileInfo::setFile(QFileInfo* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->setFile(file));
}

bool  PythonQtWrapper_QFileInfo::makeAbsolute(QFileInfo* theWrappedObject)
{
  return ( theWrappedObject->makeAbsolute());
}

bool  PythonQtWrapper_QFileInfo::isReadable(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

void PythonQtWrapper_QFileInfo::refresh(QFileInfo* theWrappedObject)
{
  ( theWrappedObject->refresh());
}

bool  PythonQtWrapper_QFileInfo::isHidden(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isHidden());
}

QString  PythonQtWrapper_QFileInfo::symLinkTarget(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->symLinkTarget());
}

bool  PythonQtWrapper_QFileInfo::isAbsolute(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isAbsolute());
}

QString  PythonQtWrapper_QFileInfo::baseName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->baseName());
}

QString  PythonQtWrapper_QFileInfo::owner(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->owner());
}

QString  PythonQtWrapper_QFileInfo::absoluteFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteFilePath());
}

void PythonQtWrapper_QFileInfo::setCaching(QFileInfo* theWrappedObject, bool  on)
{
  ( theWrappedObject->setCaching(on));
}

bool  PythonQtWrapper_QFileInfo::isDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isDir());
}

QString  PythonQtWrapper_QFileInfo::fileName(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QDateTime  PythonQtWrapper_QFileInfo::lastModified(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastModified());
}

QDir  PythonQtWrapper_QFileInfo::dir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->dir());
}

QDateTime  PythonQtWrapper_QFileInfo::lastRead(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->lastRead());
}

QDateTime  PythonQtWrapper_QFileInfo::created(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->created());
}

QDir  PythonQtWrapper_QFileInfo::absoluteDir(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->absoluteDir());
}

bool  PythonQtWrapper_QFileInfo::isBundle(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->isBundle());
}

QString  PythonQtWrapper_QFileInfo::path(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

QString  PythonQtWrapper_QFileInfo::canonicalFilePath(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->canonicalFilePath());
}

uint  PythonQtWrapper_QFileInfo::groupId(QFileInfo* theWrappedObject) const
{
  return ( theWrappedObject->groupId());
}



bool  PythonQtShell_QFileSystemWatcher::event(QEvent*  arg__1)
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
  return QFileSystemWatcher::event(arg__1);
}
bool  PythonQtShell_QFileSystemWatcher::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QFileSystemWatcher::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QFileSystemWatcher::childEvent(QChildEvent*  arg__1)
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
  QFileSystemWatcher::childEvent(arg__1);
}
void PythonQtShell_QFileSystemWatcher::customEvent(QEvent*  arg__1)
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
  QFileSystemWatcher::customEvent(arg__1);
}
void PythonQtShell_QFileSystemWatcher::timerEvent(QTimerEvent*  arg__1)
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
  QFileSystemWatcher::timerEvent(arg__1);
}
QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(parent); }

QFileSystemWatcher* PythonQtWrapper_QFileSystemWatcher::new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent)
{ 
return new PythonQtShell_QFileSystemWatcher(paths, parent); }

void PythonQtWrapper_QFileSystemWatcher::addPath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->addPath(file));
}

void PythonQtWrapper_QFileSystemWatcher::removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  ( theWrappedObject->removePaths(files));
}

void PythonQtWrapper_QFileSystemWatcher::addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files)
{
  ( theWrappedObject->addPaths(files));
}

QStringList  PythonQtWrapper_QFileSystemWatcher::files(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->files());
}

QStringList  PythonQtWrapper_QFileSystemWatcher::directories(QFileSystemWatcher* theWrappedObject) const
{
  return ( theWrappedObject->directories());
}

void PythonQtWrapper_QFileSystemWatcher::removePath(QFileSystemWatcher* theWrappedObject, const QString&  file)
{
  ( theWrappedObject->removePath(file));
}



bool  PythonQtShell_QFinalState::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QFinalState::event(e);
}
void PythonQtShell_QFinalState::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFinalState::onEntry(event);
}
void PythonQtShell_QFinalState::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QFinalState::onExit(event);
}
bool  PythonQtShell_QFinalState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QFinalState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QFinalState::childEvent(QChildEvent*  arg__1)
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
  QFinalState::childEvent(arg__1);
}
void PythonQtShell_QFinalState::customEvent(QEvent*  arg__1)
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
  QFinalState::customEvent(arg__1);
}
void PythonQtShell_QFinalState::timerEvent(QTimerEvent*  arg__1)
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
  QFinalState::timerEvent(arg__1);
}
QFinalState* PythonQtWrapper_QFinalState::new_QFinalState(QState*  parent)
{ 
return new PythonQtShell_QFinalState(parent); }

bool  PythonQtWrapper_QFinalState::event(QFinalState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QFinalState::onEntry(QFinalState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QFinalState::onExit(QFinalState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QFinalState*)theWrappedObject)->promoted_onExit(event));
}



bool  PythonQtShell_QHistoryState::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&e};
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
  return QHistoryState::event(e);
}
void PythonQtShell_QHistoryState::onEntry(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onEntry");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHistoryState::onEntry(event);
}
void PythonQtShell_QHistoryState::onExit(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "onExit");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QHistoryState::onExit(event);
}
bool  PythonQtShell_QHistoryState::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QHistoryState::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QHistoryState::childEvent(QChildEvent*  arg__1)
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
  QHistoryState::childEvent(arg__1);
}
void PythonQtShell_QHistoryState::customEvent(QEvent*  arg__1)
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
  QHistoryState::customEvent(arg__1);
}
void PythonQtShell_QHistoryState::timerEvent(QTimerEvent*  arg__1)
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
  QHistoryState::timerEvent(arg__1);
}
QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QHistoryState::HistoryType  type, QState*  parent)
{ 
return new PythonQtShell_QHistoryState(type, parent); }

QHistoryState* PythonQtWrapper_QHistoryState::new_QHistoryState(QState*  parent)
{ 
return new PythonQtShell_QHistoryState(parent); }

void PythonQtWrapper_QHistoryState::setHistoryType(QHistoryState* theWrappedObject, QHistoryState::HistoryType  type)
{
  ( theWrappedObject->setHistoryType(type));
}

QAbstractState*  PythonQtWrapper_QHistoryState::defaultState(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->defaultState());
}

bool  PythonQtWrapper_QHistoryState::event(QHistoryState* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QHistoryState::onEntry(QHistoryState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_onEntry(event));
}

void PythonQtWrapper_QHistoryState::setDefaultState(QHistoryState* theWrappedObject, QAbstractState*  state)
{
  ( theWrappedObject->setDefaultState(state));
}

void PythonQtWrapper_QHistoryState::onExit(QHistoryState* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QHistoryState*)theWrappedObject)->promoted_onExit(event));
}

QHistoryState::HistoryType  PythonQtWrapper_QHistoryState::historyType(QHistoryState* theWrappedObject) const
{
  return ( theWrappedObject->historyType());
}



bool  PythonQtShell_QIODevice::canReadLine() const
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
  return QIODevice::canReadLine();
}
qint64  PythonQtShell_QIODevice::readLineData(char*  data, qint64  maxlen)
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
  return QIODevice::readLineData(data, maxlen);
}
bool  PythonQtShell_QIODevice::seek(qint64  pos)
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
  return QIODevice::seek(pos);
}
qint64  PythonQtShell_QIODevice::pos() const
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
  return QIODevice::pos();
}
qint64  PythonQtShell_QIODevice::bytesAvailable() const
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
  return QIODevice::bytesAvailable();
}
qint64  PythonQtShell_QIODevice::size() const
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
  return QIODevice::size();
}
bool  PythonQtShell_QIODevice::waitForReadyRead(int  msecs)
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
  return QIODevice::waitForReadyRead(msecs);
}
void PythonQtShell_QIODevice::close()
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
  QIODevice::close();
}
bool  PythonQtShell_QIODevice::atEnd() const
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
  return QIODevice::atEnd();
}
bool  PythonQtShell_QIODevice::open(QIODevice::OpenMode  mode)
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
  return QIODevice::open(mode);
}
qint64  PythonQtShell_QIODevice::readData(char*  data, qint64  maxlen)
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
  return qint64();
}
bool  PythonQtShell_QIODevice::isSequential() const
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
  return QIODevice::isSequential();
}
bool  PythonQtShell_QIODevice::waitForBytesWritten(int  msecs)
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
  return QIODevice::waitForBytesWritten(msecs);
}
bool  PythonQtShell_QIODevice::reset()
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
  return QIODevice::reset();
}
qint64  PythonQtShell_QIODevice::writeData(const char*  data, qint64  len)
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
  return qint64();
}
qint64  PythonQtShell_QIODevice::bytesToWrite() const
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
  return QIODevice::bytesToWrite();
}
bool  PythonQtShell_QIODevice::event(QEvent*  arg__1)
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
  return QIODevice::event(arg__1);
}
bool  PythonQtShell_QIODevice::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QIODevice::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QIODevice::childEvent(QChildEvent*  arg__1)
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
  QIODevice::childEvent(arg__1);
}
void PythonQtShell_QIODevice::customEvent(QEvent*  arg__1)
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
  QIODevice::customEvent(arg__1);
}
void PythonQtShell_QIODevice::timerEvent(QTimerEvent*  arg__1)
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
  QIODevice::timerEvent(arg__1);
}
QIODevice* PythonQtWrapper_QIODevice::new_QIODevice()
{ 
return new PythonQtShell_QIODevice(); }

QIODevice* PythonQtWrapper_QIODevice::new_QIODevice(QObject*  parent)
{ 
return new PythonQtShell_QIODevice(parent); }

bool  PythonQtWrapper_QIODevice::canReadLine(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_canReadLine());
}

qint64  PythonQtWrapper_QIODevice::readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_readLineData(data, maxlen));
}

QByteArray  PythonQtWrapper_QIODevice::readLine(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->readLine(maxlen));
}

bool  PythonQtWrapper_QIODevice::seek(QIODevice* theWrappedObject, qint64  pos)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_seek(pos));
}

qint64  PythonQtWrapper_QIODevice::pos(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_pos());
}

qint64  PythonQtWrapper_QIODevice::bytesAvailable(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_bytesAvailable());
}

bool  PythonQtWrapper_QIODevice::isOpen(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isOpen());
}

bool  PythonQtWrapper_QIODevice::getChar(QIODevice* theWrappedObject, char*  c)
{
  return ( theWrappedObject->getChar(c));
}

bool  PythonQtWrapper_QIODevice::isWritable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

qint64  PythonQtWrapper_QIODevice::size(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_size());
}

bool  PythonQtWrapper_QIODevice::waitForReadyRead(QIODevice* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

void PythonQtWrapper_QIODevice::close(QIODevice* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_close());
}

QIODevice::OpenMode  PythonQtWrapper_QIODevice::openMode(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->openMode());
}

void PythonQtWrapper_QIODevice::ungetChar(QIODevice* theWrappedObject, char  c)
{
  ( theWrappedObject->ungetChar(c));
}

void PythonQtWrapper_QIODevice::setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled)
{
  ( theWrappedObject->setTextModeEnabled(enabled));
}

bool  PythonQtWrapper_QIODevice::atEnd(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_atEnd());
}

QString  PythonQtWrapper_QIODevice::errorString(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QIODevice::putChar(QIODevice* theWrappedObject, char  c)
{
  return ( theWrappedObject->putChar(c));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const QByteArray&  data)
{
  return ( theWrappedObject->write(data));
}

qint64  PythonQtWrapper_QIODevice::write(QIODevice* theWrappedObject, const char*  data)
{
  return ( theWrappedObject->write(data));
}

bool  PythonQtWrapper_QIODevice::isReadable(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QIODevice::open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_open(mode));
}

bool  PythonQtWrapper_QIODevice::isTextModeEnabled(QIODevice* theWrappedObject) const
{
  return ( theWrappedObject->isTextModeEnabled());
}

QByteArray  PythonQtWrapper_QIODevice::peek(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->peek(maxlen));
}

bool  PythonQtWrapper_QIODevice::isSequential(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_isSequential());
}

QByteArray  PythonQtWrapper_QIODevice::readAll(QIODevice* theWrappedObject)
{
  return ( theWrappedObject->readAll());
}

bool  PythonQtWrapper_QIODevice::waitForBytesWritten(QIODevice* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QIODevice::reset(QIODevice* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_reset());
}

QByteArray  PythonQtWrapper_QIODevice::read(QIODevice* theWrappedObject, qint64  maxlen)
{
  return ( theWrappedObject->read(maxlen));
}

qint64  PythonQtWrapper_QIODevice::bytesToWrite(QIODevice* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QIODevice*)theWrappedObject)->promoted_bytesToWrite());
}



QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensedProducts()
{
  return (QLibraryInfo::licensedProducts());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1)
{
  return (QLibraryInfo::location(arg__1));
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildKey()
{
  return (QLibraryInfo::buildKey());
}

QString  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_licensee()
{
  return (QLibraryInfo::licensee());
}

QDate  PythonQtWrapper_QLibraryInfo::static_QLibraryInfo_buildDate()
{
  return (QLibraryInfo::buildDate());
}



bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFormat");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&mimetype};
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
  }
}
  return QMimeData::hasFormat(mimetype);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "retrieveData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "const QString&" , "QVariant::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&mimetype, (void*)&preferredType};
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
  }
}
  return QMimeData::retrieveData(mimetype, preferredType);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "formats");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
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
  }
}
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::event(QEvent*  arg__1)
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
  return QMimeData::event(arg__1);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMimeData::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QMimeData::childEvent(QChildEvent*  arg__1)
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
  QMimeData::childEvent(arg__1);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  arg__1)
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
  QMimeData::customEvent(arg__1);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  arg__1)
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
  QMimeData::timerEvent(arg__1);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

void PythonQtWrapper_QMimeData::setImageData(QMimeData* theWrappedObject, const QVariant&  image)
{
  ( theWrappedObject->setImageData(image));
}

QVariant  PythonQtWrapper_QMimeData::imageData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->imageData());
}

bool  PythonQtWrapper_QMimeData::hasHtml(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasHtml());
}

bool  PythonQtWrapper_QMimeData::hasUrls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasUrls());
}

bool  PythonQtWrapper_QMimeData::hasImage(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasImage());
}

QVariant  PythonQtWrapper_QMimeData::colorData(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->colorData());
}

QByteArray  PythonQtWrapper_QMimeData::data(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( theWrappedObject->data(mimetype));
}

void PythonQtWrapper_QMimeData::setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data)
{
  ( theWrappedObject->setData(mimetype, data));
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_hasFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

void PythonQtWrapper_QMimeData::removeFormat(QMimeData* theWrappedObject, const QString&  mimetype)
{
  ( theWrappedObject->removeFormat(mimetype));
}

bool  PythonQtWrapper_QMimeData::hasText(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasText());
}

QString  PythonQtWrapper_QMimeData::text(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

QVariant  PythonQtWrapper_QMimeData::retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_retrieveData(mimetype, preferredType));
}

QStringList  PythonQtWrapper_QMimeData::formats(QMimeData* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_formats());
}

void PythonQtWrapper_QMimeData::setHtml(QMimeData* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

QList<QUrl >  PythonQtWrapper_QMimeData::urls(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->urls());
}

void PythonQtWrapper_QMimeData::setColorData(QMimeData* theWrappedObject, const QVariant&  color)
{
  ( theWrappedObject->setColorData(color));
}

void PythonQtWrapper_QMimeData::setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls)
{
  ( theWrappedObject->setUrls(urls));
}

QString  PythonQtWrapper_QMimeData::html(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->html());
}

void PythonQtWrapper_QMimeData::clear(QMimeData* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QMimeData::setText(QMimeData* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setText(text));
}


