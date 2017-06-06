#include "com_trolltech_qt_core1.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QStringList>
#include <QUrl>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractanimation.h>
#include <qabstractitemmodel.h>
#include <qanimationgroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qeasingcurve.h>
#include <qfileinfo.h>
#include <qidentityproxymodel.h>
#include <qiodevice.h>
#include <qitemselectionmodel.h>
#include <qjsonarray.h>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>
#include <qlibrary.h>
#include <qlist.h>
#include <qlogging.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qmimedata.h>
#include <qmimedatabase.h>
#include <qmimetype.h>
#include <qmutex.h>
#include <qobject.h>
#include <qpair.h>
#include <qparallelanimationgroup.h>
#include <qpauseanimation.h>
#include <qprocess.h>
#include <qpropertyanimation.h>
#include <qreadwritelock.h>
#include <qregularexpression.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvector.h>

PythonQtShell_QIdentityProxyModel::~PythonQtShell_QIdentityProxyModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QModelIndex  PythonQtShell_QIdentityProxyModel::buddy(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::buddy(index0);
}
bool  PythonQtShell_QIdentityProxyModel::canDropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canDropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::canDropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::canFetchMore(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("canFetchMore");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::canFetchMore(parent0);
}
void PythonQtShell_QIdentityProxyModel::childEvent(QChildEvent*  arg__1)
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
  QIdentityProxyModel::childEvent(arg__1);
}
int  PythonQtShell_QIdentityProxyModel::columnCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("columnCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QIdentityProxyModel::columnCount(parent0);
}
void PythonQtShell_QIdentityProxyModel::customEvent(QEvent*  arg__1)
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
  QIdentityProxyModel::customEvent(arg__1);
}
QVariant  PythonQtShell_QIdentityProxyModel::data(const QModelIndex&  proxyIndex0, int  role1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::data(proxyIndex0, role1);
}
bool  PythonQtShell_QIdentityProxyModel::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("dropMimeData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QMimeData*" , "Qt::DropAction" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::dropMimeData(data0, action1, row2, column3, parent4);
}
bool  PythonQtShell_QIdentityProxyModel::event(QEvent*  arg__1)
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
  return QIdentityProxyModel::event(arg__1);
}
bool  PythonQtShell_QIdentityProxyModel::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QIdentityProxyModel::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QIdentityProxyModel::fetchMore(const QModelIndex&  parent0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QIdentityProxyModel::fetchMore(parent0);
}
Qt::ItemFlags  PythonQtShell_QIdentityProxyModel::flags(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::flags(index0);
}
bool  PythonQtShell_QIdentityProxyModel::hasChildren(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasChildren");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::hasChildren(parent0);
}
QVariant  PythonQtShell_QIdentityProxyModel::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::headerData(section0, orientation1, role2);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::index(row0, column1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::insertColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("insertRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::insertRows(row0, count1, parent2);
}
QMap<int , QVariant >  PythonQtShell_QIdentityProxyModel::itemData(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::itemData(index0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapFromSource(const QModelIndex&  sourceIndex0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mapFromSource(sourceIndex0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionFromSource(const QItemSelection&  selection0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mapSelectionFromSource(selection0);
}
QItemSelection  PythonQtShell_QIdentityProxyModel::mapSelectionToSource(const QItemSelection&  selection0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mapSelectionToSource(selection0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::mapToSource(const QModelIndex&  proxyIndex0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mapToSource(proxyIndex0);
}
QList<QModelIndex >  PythonQtShell_QIdentityProxyModel::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::match(start0, role1, value2, hits3, flags4);
}
QMimeData*  PythonQtShell_QIdentityProxyModel::mimeData(const QList<QModelIndex >&  indexes0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mimeData(indexes0);
}
QStringList  PythonQtShell_QIdentityProxyModel::mimeTypes() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::mimeTypes();
}
bool  PythonQtShell_QIdentityProxyModel::moveColumns(const QModelIndex&  sourceParent0, int  sourceColumn1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::moveColumns(sourceParent0, sourceColumn1, count2, destinationParent3, destinationChild4);
}
bool  PythonQtShell_QIdentityProxyModel::moveRows(const QModelIndex&  sourceParent0, int  sourceRow1, int  count2, const QModelIndex&  destinationParent3, int  destinationChild4)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("moveRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "int" , "int" , "const QModelIndex&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(6, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::moveRows(sourceParent0, sourceRow1, count2, destinationParent3, destinationChild4);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::parent(const QModelIndex&  child0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::parent(child0);
}
bool  PythonQtShell_QIdentityProxyModel::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeColumns");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::removeColumns(column0, count1, parent2);
}
bool  PythonQtShell_QIdentityProxyModel::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("removeRows");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::removeRows(row0, count1, parent2);
}
void PythonQtShell_QIdentityProxyModel::revert()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QIdentityProxyModel::revert();
}
QHash<int , QByteArray >  PythonQtShell_QIdentityProxyModel::roleNames() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::roleNames();
}
int  PythonQtShell_QIdentityProxyModel::rowCount(const QModelIndex&  parent0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("rowCount");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"int" , "const QModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue;
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
  return QIdentityProxyModel::rowCount(parent0);
}
bool  PythonQtShell_QIdentityProxyModel::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::setData(index0, value1, role2);
}
bool  PythonQtShell_QIdentityProxyModel::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setHeaderData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "int" , "Qt::Orientation" , "const QVariant&" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::setHeaderData(section0, orientation1, value2, role3);
}
bool  PythonQtShell_QIdentityProxyModel::setItemData(const QModelIndex&  index0, const QMap<int , QVariant >&  roles1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setItemData");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QModelIndex&" , "const QMap<int , QVariant >&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
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
  return QIdentityProxyModel::setItemData(index0, roles1);
}
void PythonQtShell_QIdentityProxyModel::setSourceModel(QAbstractItemModel*  sourceModel0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QIdentityProxyModel::setSourceModel(sourceModel0);
}
QModelIndex  PythonQtShell_QIdentityProxyModel::sibling(int  row0, int  column1, const QModelIndex&  idx2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::sibling(row0, column1, idx2);
}
void PythonQtShell_QIdentityProxyModel::sort(int  column0, Qt::SortOrder  order1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  QIdentityProxyModel::sort(column0, order1);
}
QSize  PythonQtShell_QIdentityProxyModel::span(const QModelIndex&  index0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::span(index0);
}
bool  PythonQtShell_QIdentityProxyModel::submit()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("submit");
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
  return QIdentityProxyModel::submit();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDragActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::supportedDragActions();
}
Qt::DropActions  PythonQtShell_QIdentityProxyModel::supportedDropActions() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QIdentityProxyModel::supportedDropActions();
}
void PythonQtShell_QIdentityProxyModel::timerEvent(QTimerEvent*  arg__1)
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
  QIdentityProxyModel::timerEvent(arg__1);
}
QIdentityProxyModel* PythonQtWrapper_QIdentityProxyModel::new_QIdentityProxyModel(QObject*  parent)
{ 
return new PythonQtShell_QIdentityProxyModel(parent); }

int  PythonQtWrapper_QIdentityProxyModel::columnCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_columnCount(parent));
}

bool  PythonQtWrapper_QIdentityProxyModel::dropMimeData(QIdentityProxyModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_dropMimeData(data, action, row, column, parent));
}

QVariant  PythonQtWrapper_QIdentityProxyModel::headerData(QIdentityProxyModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_headerData(section, orientation, role));
}

QModelIndex  PythonQtWrapper_QIdentityProxyModel::index(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_index(row, column, parent));
}

bool  PythonQtWrapper_QIdentityProxyModel::insertColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_insertColumns(column, count, parent));
}

bool  PythonQtWrapper_QIdentityProxyModel::insertRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_insertRows(row, count, parent));
}

QModelIndex  PythonQtWrapper_QIdentityProxyModel::mapFromSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  sourceIndex) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_mapFromSource(sourceIndex));
}

QItemSelection  PythonQtWrapper_QIdentityProxyModel::mapSelectionFromSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_mapSelectionFromSource(selection));
}

QItemSelection  PythonQtWrapper_QIdentityProxyModel::mapSelectionToSource(QIdentityProxyModel* theWrappedObject, const QItemSelection&  selection) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_mapSelectionToSource(selection));
}

QModelIndex  PythonQtWrapper_QIdentityProxyModel::mapToSource(QIdentityProxyModel* theWrappedObject, const QModelIndex&  proxyIndex) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_mapToSource(proxyIndex));
}

QList<QModelIndex >  PythonQtWrapper_QIdentityProxyModel::match(QIdentityProxyModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_match(start, role, value, hits, flags));
}

QModelIndex  PythonQtWrapper_QIdentityProxyModel::parent(QIdentityProxyModel* theWrappedObject, const QModelIndex&  child) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_parent(child));
}

bool  PythonQtWrapper_QIdentityProxyModel::removeColumns(QIdentityProxyModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_removeColumns(column, count, parent));
}

bool  PythonQtWrapper_QIdentityProxyModel::removeRows(QIdentityProxyModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent)
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_removeRows(row, count, parent));
}

int  PythonQtWrapper_QIdentityProxyModel::rowCount(QIdentityProxyModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_rowCount(parent));
}

void PythonQtWrapper_QIdentityProxyModel::setSourceModel(QIdentityProxyModel* theWrappedObject, QAbstractItemModel*  sourceModel)
{
  ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_setSourceModel(sourceModel));
}

QModelIndex  PythonQtWrapper_QIdentityProxyModel::sibling(QIdentityProxyModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const
{
  return ( ((PythonQtPublicPromoter_QIdentityProxyModel*)theWrappedObject)->promoted_sibling(row, column, idx));
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

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(double  n)
{ 
return new QJsonValue(n); }

QJsonValue* PythonQtWrapper_QJsonValue::new_QJsonValue(int  n)
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
void PythonQtShell_QLibrary::childEvent(QChildEvent*  arg__1)
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
  QLibrary::childEvent(arg__1);
}
void PythonQtShell_QLibrary::customEvent(QEvent*  arg__1)
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
  QLibrary::customEvent(arg__1);
}
bool  PythonQtShell_QLibrary::event(QEvent*  arg__1)
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
  return QLibrary::event(arg__1);
}
bool  PythonQtShell_QLibrary::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QLibrary::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QLibrary::timerEvent(QTimerEvent*  arg__1)
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
  QLibrary::timerEvent(arg__1);
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

void PythonQtWrapper_QMessageLogger::critical(QMessageLogger* theWrappedObject, const char*  msg) const
{
  ( theWrappedObject->critical(msg));
}

void PythonQtWrapper_QMessageLogger::debug(QMessageLogger* theWrappedObject, const char*  msg) const
{
  ( theWrappedObject->debug(msg));
}

void PythonQtWrapper_QMessageLogger::fatal(QMessageLogger* theWrappedObject, const char*  msg) const
{
  ( theWrappedObject->fatal(msg));
}

void PythonQtWrapper_QMessageLogger::noDebug(QMessageLogger* theWrappedObject, const char*  arg__1) const
{
  ( theWrappedObject->noDebug(arg__1));
}

void PythonQtWrapper_QMessageLogger::warning(QMessageLogger* theWrappedObject, const char*  msg) const
{
  ( theWrappedObject->warning(msg));
}



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

bool  PythonQtWrapper_QMetaProperty::reset(QMetaProperty* theWrappedObject, QObject*  obj) const
{
  return ( theWrappedObject->reset(obj));
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



QMetaType* PythonQtWrapper_QMetaType::new_QMetaType(const int  type)
{ 
return new QMetaType(type); }

void*  PythonQtWrapper_QMetaType::static_QMetaType_construct(int  type, void*  where, const void*  copy)
{
  return (QMetaType::construct(type, where, copy));
}

void*  PythonQtWrapper_QMetaType::construct(QMetaType* theWrappedObject, void*  where, const void*  copy) const
{
  return ( theWrappedObject->construct(where, copy));
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

QMetaType::TypeFlags  PythonQtWrapper_QMetaType::flags(QMetaType* theWrappedObject) const
{
  return ( theWrappedObject->flags());
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



PythonQtShell_QMimeData::~PythonQtShell_QMimeData() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMimeData::childEvent(QChildEvent*  arg__1)
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
  QMimeData::childEvent(arg__1);
}
void PythonQtShell_QMimeData::customEvent(QEvent*  arg__1)
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
  QMimeData::customEvent(arg__1);
}
bool  PythonQtShell_QMimeData::event(QEvent*  arg__1)
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
  return QMimeData::event(arg__1);
}
bool  PythonQtShell_QMimeData::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QMimeData::eventFilter(arg__1, arg__2);
}
QStringList  PythonQtShell_QMimeData::formats() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QMimeData::formats();
}
bool  PythonQtShell_QMimeData::hasFormat(const QString&  mimetype0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("hasFormat");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QMimeData::hasFormat(mimetype0);
}
QVariant  PythonQtShell_QMimeData::retrieveData(const QString&  mimetype0, QVariant::Type  preferredType1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
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
  return QMimeData::retrieveData(mimetype0, preferredType1);
}
void PythonQtShell_QMimeData::timerEvent(QTimerEvent*  arg__1)
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
  QMimeData::timerEvent(arg__1);
}
QMimeData* PythonQtWrapper_QMimeData::new_QMimeData()
{ 
return new PythonQtShell_QMimeData(); }

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
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_formats());
}

bool  PythonQtWrapper_QMimeData::hasColor(QMimeData* theWrappedObject) const
{
  return ( theWrappedObject->hasColor());
}

bool  PythonQtWrapper_QMimeData::hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const
{
  return ( ((PythonQtPublicPromoter_QMimeData*)theWrappedObject)->promoted_hasFormat(mimetype));
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



PythonQtShell_QObject::~PythonQtShell_QObject() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QObject::childEvent(QChildEvent*  arg__1)
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
  QObject::childEvent(arg__1);
}
void PythonQtShell_QObject::customEvent(QEvent*  arg__1)
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
  QObject::customEvent(arg__1);
}
bool  PythonQtShell_QObject::event(QEvent*  arg__1)
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
  return QObject::event(arg__1);
}
bool  PythonQtShell_QObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QObject::timerEvent(QTimerEvent*  arg__1)
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
  QObject::timerEvent(arg__1);
}
QObject* PythonQtWrapper_QObject::new_QObject(QObject*  parent)
{ 
return new PythonQtShell_QObject(parent); }

bool  PythonQtWrapper_QObject::blockSignals(QObject* theWrappedObject, bool  b)
{
  return ( theWrappedObject->blockSignals(b));
}

void PythonQtWrapper_QObject::childEvent(QObject* theWrappedObject, QChildEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_childEvent(arg__1));
}

const QList<QObject* >*  PythonQtWrapper_QObject::children(QObject* theWrappedObject) const
{
  return &( theWrappedObject->children());
}

void PythonQtWrapper_QObject::customEvent(QObject* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_customEvent(arg__1));
}

void PythonQtWrapper_QObject::dumpObjectInfo(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectInfo());
}

void PythonQtWrapper_QObject::dumpObjectTree(QObject* theWrappedObject)
{
  ( theWrappedObject->dumpObjectTree());
}

QList<QByteArray >  PythonQtWrapper_QObject::dynamicPropertyNames(QObject* theWrappedObject) const
{
  return ( theWrappedObject->dynamicPropertyNames());
}

bool  PythonQtWrapper_QObject::event(QObject* theWrappedObject, QEvent*  arg__1)
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_event(arg__1));
}

bool  PythonQtWrapper_QObject::eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2)
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_eventFilter(arg__1, arg__2));
}

void PythonQtWrapper_QObject::installEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->installEventFilter(arg__1));
}

bool  PythonQtWrapper_QObject::isSignalConnected(QObject* theWrappedObject, const QMetaMethod&  signal) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_isSignalConnected(signal));
}

bool  PythonQtWrapper_QObject::isWidgetType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWidgetType());
}

bool  PythonQtWrapper_QObject::isWindowType(QObject* theWrappedObject) const
{
  return ( theWrappedObject->isWindowType());
}

void PythonQtWrapper_QObject::killTimer(QObject* theWrappedObject, int  id)
{
  ( theWrappedObject->killTimer(id));
}

void PythonQtWrapper_QObject::moveToThread(QObject* theWrappedObject, QThread*  thread)
{
  ( theWrappedObject->moveToThread(thread));
}

QString  PythonQtWrapper_QObject::objectName(QObject* theWrappedObject) const
{
  return ( theWrappedObject->objectName());
}

void PythonQtWrapper_QObject::removeEventFilter(QObject* theWrappedObject, QObject*  arg__1)
{
  ( theWrappedObject->removeEventFilter(arg__1));
}

QObject*  PythonQtWrapper_QObject::sender(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_sender());
}

int  PythonQtWrapper_QObject::senderSignalIndex(QObject* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_senderSignalIndex());
}

void PythonQtWrapper_QObject::setObjectName(QObject* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setObjectName(name));
}

bool  PythonQtWrapper_QObject::signalsBlocked(QObject* theWrappedObject) const
{
  return ( theWrappedObject->signalsBlocked());
}

int  PythonQtWrapper_QObject::startTimer(QObject* theWrappedObject, int  interval, Qt::TimerType  timerType)
{
  return ( theWrappedObject->startTimer(interval, timerType));
}

QThread*  PythonQtWrapper_QObject::thread(QObject* theWrappedObject) const
{
  return ( theWrappedObject->thread());
}

void PythonQtWrapper_QObject::timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QObject*)theWrappedObject)->promoted_timerEvent(arg__1));
}



PythonQtShell_QParallelAnimationGroup::~PythonQtShell_QParallelAnimationGroup() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QParallelAnimationGroup::childEvent(QChildEvent*  arg__1)
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
  QParallelAnimationGroup::childEvent(arg__1);
}
void PythonQtShell_QParallelAnimationGroup::customEvent(QEvent*  arg__1)
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
  QParallelAnimationGroup::customEvent(arg__1);
}
int  PythonQtShell_QParallelAnimationGroup::duration() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("duration");
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
  return QParallelAnimationGroup::duration();
}
bool  PythonQtShell_QParallelAnimationGroup::event(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QParallelAnimationGroup::event(event0);
}
bool  PythonQtShell_QParallelAnimationGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QParallelAnimationGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QParallelAnimationGroup::timerEvent(QTimerEvent*  arg__1)
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
  QParallelAnimationGroup::timerEvent(arg__1);
}
void PythonQtShell_QParallelAnimationGroup::updateCurrentTime(int  currentTime0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentTime");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&currentTime0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QParallelAnimationGroup::updateCurrentTime(currentTime0);
}
void PythonQtShell_QParallelAnimationGroup::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateDirection");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QParallelAnimationGroup::updateDirection(direction0);
}
void PythonQtShell_QParallelAnimationGroup::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QParallelAnimationGroup::updateState(newState0, oldState1);
}
QParallelAnimationGroup* PythonQtWrapper_QParallelAnimationGroup::new_QParallelAnimationGroup(QObject*  parent)
{ 
return new PythonQtShell_QParallelAnimationGroup(parent); }

int  PythonQtWrapper_QParallelAnimationGroup::duration(QParallelAnimationGroup* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_duration());
}

bool  PythonQtWrapper_QParallelAnimationGroup::event(QParallelAnimationGroup* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_event(event));
}

void PythonQtWrapper_QParallelAnimationGroup::updateCurrentTime(QParallelAnimationGroup* theWrappedObject, int  currentTime)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateCurrentTime(currentTime));
}

void PythonQtWrapper_QParallelAnimationGroup::updateDirection(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::Direction  direction)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateDirection(direction));
}

void PythonQtWrapper_QParallelAnimationGroup::updateState(QParallelAnimationGroup* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QParallelAnimationGroup*)theWrappedObject)->promoted_updateState(newState, oldState));
}



PythonQtShell_QPauseAnimation::~PythonQtShell_QPauseAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPauseAnimation::childEvent(QChildEvent*  arg__1)
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
  QPauseAnimation::childEvent(arg__1);
}
void PythonQtShell_QPauseAnimation::customEvent(QEvent*  arg__1)
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
  QPauseAnimation::customEvent(arg__1);
}
int  PythonQtShell_QPauseAnimation::duration() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("duration");
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
  return QPauseAnimation::duration();
}
bool  PythonQtShell_QPauseAnimation::event(QEvent*  e0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPauseAnimation::event(e0);
}
bool  PythonQtShell_QPauseAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPauseAnimation::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QPauseAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QPauseAnimation::timerEvent(arg__1);
}
void PythonQtShell_QPauseAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentTime");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
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
  QPauseAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPauseAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateDirection");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPauseAnimation::updateDirection(direction0);
}
void PythonQtShell_QPauseAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPauseAnimation::updateState(newState0, oldState1);
}
QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(parent); }

QPauseAnimation* PythonQtWrapper_QPauseAnimation::new_QPauseAnimation(int  msecs, QObject*  parent)
{ 
return new PythonQtShell_QPauseAnimation(msecs, parent); }

int  PythonQtWrapper_QPauseAnimation::duration(QPauseAnimation* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_duration());
}

bool  PythonQtWrapper_QPauseAnimation::event(QPauseAnimation* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_event(e));
}

void PythonQtWrapper_QPauseAnimation::setDuration(QPauseAnimation* theWrappedObject, int  msecs)
{
  ( theWrappedObject->setDuration(msecs));
}

void PythonQtWrapper_QPauseAnimation::updateCurrentTime(QPauseAnimation* theWrappedObject, int  arg__1)
{
  ( ((PythonQtPublicPromoter_QPauseAnimation*)theWrappedObject)->promoted_updateCurrentTime(arg__1));
}



QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex()
{ 
return new QPersistentModelIndex(); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QModelIndex&  index)
{ 
return new QPersistentModelIndex(index); }

QPersistentModelIndex* PythonQtWrapper_QPersistentModelIndex::new_QPersistentModelIndex(const QPersistentModelIndex&  other)
{ 
return new QPersistentModelIndex(other); }

QModelIndex  PythonQtWrapper_QPersistentModelIndex::child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->child(row, column));
}

int  PythonQtWrapper_QPersistentModelIndex::column(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

QVariant  PythonQtWrapper_QPersistentModelIndex::data(QPersistentModelIndex* theWrappedObject, int  role) const
{
  return ( theWrappedObject->data(role));
}

Qt::ItemFlags  PythonQtWrapper_QPersistentModelIndex::flags(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->flags());
}

quintptr  PythonQtWrapper_QPersistentModelIndex::internalId(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->internalId());
}

bool  PythonQtWrapper_QPersistentModelIndex::isValid(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

const QAbstractItemModel*  PythonQtWrapper_QPersistentModelIndex::model(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->operator const QModelIndex&());
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__ne__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__lt__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QPersistentModelIndex::__eq__(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::parent(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->parent());
}

int  PythonQtWrapper_QPersistentModelIndex::row(QPersistentModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

QModelIndex  PythonQtWrapper_QPersistentModelIndex::sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const
{
  return ( theWrappedObject->sibling(row, column));
}

void PythonQtWrapper_QPersistentModelIndex::swap(QPersistentModelIndex* theWrappedObject, QPersistentModelIndex&  other)
{
  ( theWrappedObject->swap(other));
}

QString PythonQtWrapper_QPersistentModelIndex::py_toString(QPersistentModelIndex* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QProcess::~PythonQtShell_QProcess() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
bool  PythonQtShell_QProcess::atEnd() const
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
  return QProcess::atEnd();
}
qint64  PythonQtShell_QProcess::bytesAvailable() const
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
  return QProcess::bytesAvailable();
}
qint64  PythonQtShell_QProcess::bytesToWrite() const
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
  return QProcess::bytesToWrite();
}
bool  PythonQtShell_QProcess::canReadLine() const
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
  return QProcess::canReadLine();
}
void PythonQtShell_QProcess::childEvent(QChildEvent*  arg__1)
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
  QProcess::childEvent(arg__1);
}
void PythonQtShell_QProcess::close()
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
  QProcess::close();
}
void PythonQtShell_QProcess::customEvent(QEvent*  arg__1)
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
  QProcess::customEvent(arg__1);
}
bool  PythonQtShell_QProcess::event(QEvent*  arg__1)
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
  return QProcess::event(arg__1);
}
bool  PythonQtShell_QProcess::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QProcess::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QProcess::isSequential() const
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
  return QProcess::isSequential();
}
bool  PythonQtShell_QProcess::open(QIODevice::OpenMode  mode0)
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
  return QProcess::open(mode0);
}
qint64  PythonQtShell_QProcess::pos() const
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
  return QProcess::pos();
}
qint64  PythonQtShell_QProcess::readData(char*  data0, qint64  maxlen1)
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
  return QProcess::readData(data0, maxlen1);
}
qint64  PythonQtShell_QProcess::readLineData(char*  data0, qint64  maxlen1)
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
  return QProcess::readLineData(data0, maxlen1);
}
bool  PythonQtShell_QProcess::reset()
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
  return QProcess::reset();
}
bool  PythonQtShell_QProcess::seek(qint64  pos0)
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
  return QProcess::seek(pos0);
}
void PythonQtShell_QProcess::setupChildProcess()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("setupChildProcess");
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
  QProcess::setupChildProcess();
}
qint64  PythonQtShell_QProcess::size() const
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
  return QProcess::size();
}
void PythonQtShell_QProcess::timerEvent(QTimerEvent*  arg__1)
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
  QProcess::timerEvent(arg__1);
}
bool  PythonQtShell_QProcess::waitForBytesWritten(int  msecs0)
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
  return QProcess::waitForBytesWritten(msecs0);
}
bool  PythonQtShell_QProcess::waitForReadyRead(int  msecs0)
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
  return QProcess::waitForReadyRead(msecs0);
}
qint64  PythonQtShell_QProcess::writeData(const char*  data0, qint64  len1)
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
  return QProcess::writeData(data0, len1);
}
QProcess* PythonQtWrapper_QProcess::new_QProcess(QObject*  parent)
{ 
return new PythonQtShell_QProcess(parent); }

QStringList  PythonQtWrapper_QProcess::arguments(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->arguments());
}

bool  PythonQtWrapper_QProcess::atEnd(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_atEnd());
}

qint64  PythonQtWrapper_QProcess::bytesAvailable(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_bytesAvailable());
}

qint64  PythonQtWrapper_QProcess::bytesToWrite(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_bytesToWrite());
}

bool  PythonQtWrapper_QProcess::canReadLine(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_canReadLine());
}

void PythonQtWrapper_QProcess::close(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_close());
}

void PythonQtWrapper_QProcess::closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->closeReadChannel(channel));
}

void PythonQtWrapper_QProcess::closeWriteChannel(QProcess* theWrappedObject)
{
  ( theWrappedObject->closeWriteChannel());
}

QStringList  PythonQtWrapper_QProcess::environment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->environment());
}

QProcess::ProcessError  PythonQtWrapper_QProcess::error(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program)
{
  return (QProcess::execute(program));
}

int  PythonQtWrapper_QProcess::static_QProcess_execute(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::execute(program, arguments));
}

int  PythonQtWrapper_QProcess::exitCode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitCode());
}

QProcess::ExitStatus  PythonQtWrapper_QProcess::exitStatus(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->exitStatus());
}

bool  PythonQtWrapper_QProcess::isSequential(QProcess* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_isSequential());
}

QProcess::ProcessChannelMode  PythonQtWrapper_QProcess::processChannelMode(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processChannelMode());
}

QProcessEnvironment  PythonQtWrapper_QProcess::processEnvironment(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->processEnvironment());
}

QString  PythonQtWrapper_QProcess::program(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->program());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardError(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardError());
}

QByteArray  PythonQtWrapper_QProcess::readAllStandardOutput(QProcess* theWrappedObject)
{
  return ( theWrappedObject->readAllStandardOutput());
}

QProcess::ProcessChannel  PythonQtWrapper_QProcess::readChannel(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->readChannel());
}

qint64  PythonQtWrapper_QProcess::readData(QProcess* theWrappedObject, char*  data, qint64  maxlen)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_readData(data, maxlen));
}

void PythonQtWrapper_QProcess::setEnvironment(QProcess* theWrappedObject, const QStringList&  environment)
{
  ( theWrappedObject->setEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode)
{
  ( theWrappedObject->setProcessChannelMode(mode));
}

void PythonQtWrapper_QProcess::setProcessEnvironment(QProcess* theWrappedObject, const QProcessEnvironment&  environment)
{
  ( theWrappedObject->setProcessEnvironment(environment));
}

void PythonQtWrapper_QProcess::setProcessState(QProcess* theWrappedObject, QProcess::ProcessState  state)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setProcessState(state));
}

void PythonQtWrapper_QProcess::setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel)
{
  ( theWrappedObject->setReadChannel(channel));
}

void PythonQtWrapper_QProcess::setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardErrorFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setStandardInputFile(fileName));
}

void PythonQtWrapper_QProcess::setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->setStandardOutputFile(fileName, mode));
}

void PythonQtWrapper_QProcess::setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination)
{
  ( theWrappedObject->setStandardOutputProcess(destination));
}

void PythonQtWrapper_QProcess::setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir)
{
  ( theWrappedObject->setWorkingDirectory(dir));
}

void PythonQtWrapper_QProcess::setupChildProcess(QProcess* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_setupChildProcess());
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  command, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(command, mode));
}

void PythonQtWrapper_QProcess::start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode)
{
  ( theWrappedObject->start(program, arguments, mode));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program)
{
  return (QProcess::startDetached(program));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments)
{
  return (QProcess::startDetached(program, arguments));
}

bool  PythonQtWrapper_QProcess::static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid)
{
  return (QProcess::startDetached(program, arguments, workingDirectory, pid));
}

QProcess::ProcessState  PythonQtWrapper_QProcess::state(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->state());
}

QStringList  PythonQtWrapper_QProcess::static_QProcess_systemEnvironment()
{
  return (QProcess::systemEnvironment());
}

bool  PythonQtWrapper_QProcess::waitForBytesWritten(QProcess* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_waitForBytesWritten(msecs));
}

bool  PythonQtWrapper_QProcess::waitForFinished(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForFinished(msecs));
}

bool  PythonQtWrapper_QProcess::waitForReadyRead(QProcess* theWrappedObject, int  msecs)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_waitForReadyRead(msecs));
}

bool  PythonQtWrapper_QProcess::waitForStarted(QProcess* theWrappedObject, int  msecs)
{
  return ( theWrappedObject->waitForStarted(msecs));
}

QString  PythonQtWrapper_QProcess::workingDirectory(QProcess* theWrappedObject) const
{
  return ( theWrappedObject->workingDirectory());
}

qint64  PythonQtWrapper_QProcess::writeData(QProcess* theWrappedObject, const char*  data, qint64  len)
{
  return ( ((PythonQtPublicPromoter_QProcess*)theWrappedObject)->promoted_writeData(data, len));
}



QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment()
{ 
return new QProcessEnvironment(); }

QProcessEnvironment* PythonQtWrapper_QProcessEnvironment::new_QProcessEnvironment(const QProcessEnvironment&  other)
{ 
return new QProcessEnvironment(other); }

void PythonQtWrapper_QProcessEnvironment::clear(QProcessEnvironment* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QProcessEnvironment::contains(QProcessEnvironment* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->contains(name));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  e)
{
  ( theWrappedObject->insert(e));
}

void PythonQtWrapper_QProcessEnvironment::insert(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  value)
{
  ( theWrappedObject->insert(name, value));
}

bool  PythonQtWrapper_QProcessEnvironment::isEmpty(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QStringList  PythonQtWrapper_QProcessEnvironment::keys(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->keys());
}

bool  PythonQtWrapper_QProcessEnvironment::__ne__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QProcessEnvironment*  PythonQtWrapper_QProcessEnvironment::operator_assign(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QProcessEnvironment::__eq__(QProcessEnvironment* theWrappedObject, const QProcessEnvironment&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QProcessEnvironment::remove(QProcessEnvironment* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->remove(name));
}

void PythonQtWrapper_QProcessEnvironment::swap(QProcessEnvironment* theWrappedObject, QProcessEnvironment&  other)
{
  ( theWrappedObject->swap(other));
}

QProcessEnvironment  PythonQtWrapper_QProcessEnvironment::static_QProcessEnvironment_systemEnvironment()
{
  return (QProcessEnvironment::systemEnvironment());
}

QStringList  PythonQtWrapper_QProcessEnvironment::toStringList(QProcessEnvironment* theWrappedObject) const
{
  return ( theWrappedObject->toStringList());
}

QString  PythonQtWrapper_QProcessEnvironment::value(QProcessEnvironment* theWrappedObject, const QString&  name, const QString&  defaultValue) const
{
  return ( theWrappedObject->value(name, defaultValue));
}



PythonQtShell_QPropertyAnimation::~PythonQtShell_QPropertyAnimation() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QPropertyAnimation::childEvent(QChildEvent*  arg__1)
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
  QPropertyAnimation::childEvent(arg__1);
}
void PythonQtShell_QPropertyAnimation::customEvent(QEvent*  arg__1)
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
  QPropertyAnimation::customEvent(arg__1);
}
int  PythonQtShell_QPropertyAnimation::duration() const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("duration");
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
  return QPropertyAnimation::duration();
}
bool  PythonQtShell_QPropertyAnimation::event(QEvent*  event0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("event");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
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
  return QPropertyAnimation::event(event0);
}
bool  PythonQtShell_QPropertyAnimation::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QPropertyAnimation::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QPropertyAnimation::interpolated(const QVariant&  from0, const QVariant&  to1, qreal  progress2) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("interpolated");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QVariant&" , "const QVariant&" , "qreal"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(4, argumentList);
      QVariant returnValue;
    void* args[4] = {NULL, (void*)&from0, (void*)&to1, (void*)&progress2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
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
  return QPropertyAnimation::interpolated(from0, to1, progress2);
}
void PythonQtShell_QPropertyAnimation::timerEvent(QTimerEvent*  arg__1)
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
  QPropertyAnimation::timerEvent(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentTime(int  arg__1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentTime");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "int"};
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
  QPropertyAnimation::updateCurrentTime(arg__1);
}
void PythonQtShell_QPropertyAnimation::updateCurrentValue(const QVariant&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateCurrentValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QVariant&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&value0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPropertyAnimation::updateCurrentValue(value0);
}
void PythonQtShell_QPropertyAnimation::updateDirection(QAbstractAnimation::Direction  direction0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateDirection");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::Direction"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&direction0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPropertyAnimation::updateDirection(direction0);
}
void PythonQtShell_QPropertyAnimation::updateState(QAbstractAnimation::State  newState0, QAbstractAnimation::State  oldState1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("updateState");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QAbstractAnimation::State" , "QAbstractAnimation::State"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&newState0, (void*)&oldState1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QPropertyAnimation::updateState(newState0, oldState1);
}
QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(parent); }

QPropertyAnimation* PythonQtWrapper_QPropertyAnimation::new_QPropertyAnimation(QObject*  target, const QByteArray&  propertyName, QObject*  parent)
{ 
return new PythonQtShell_QPropertyAnimation(target, propertyName, parent); }

bool  PythonQtWrapper_QPropertyAnimation::event(QPropertyAnimation* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_event(event));
}

QByteArray  PythonQtWrapper_QPropertyAnimation::propertyName(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->propertyName());
}

void PythonQtWrapper_QPropertyAnimation::setPropertyName(QPropertyAnimation* theWrappedObject, const QByteArray&  propertyName)
{
  ( theWrappedObject->setPropertyName(propertyName));
}

void PythonQtWrapper_QPropertyAnimation::setTargetObject(QPropertyAnimation* theWrappedObject, QObject*  target)
{
  ( theWrappedObject->setTargetObject(target));
}

QObject*  PythonQtWrapper_QPropertyAnimation::targetObject(QPropertyAnimation* theWrappedObject) const
{
  return ( theWrappedObject->targetObject());
}

void PythonQtWrapper_QPropertyAnimation::updateCurrentValue(QPropertyAnimation* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_updateCurrentValue(value));
}

void PythonQtWrapper_QPropertyAnimation::updateState(QPropertyAnimation* theWrappedObject, QAbstractAnimation::State  newState, QAbstractAnimation::State  oldState)
{
  ( ((PythonQtPublicPromoter_QPropertyAnimation*)theWrappedObject)->promoted_updateState(newState, oldState));
}



QReadWriteLock* PythonQtWrapper_QReadWriteLock::new_QReadWriteLock(QReadWriteLock::RecursionMode  recursionMode)
{ 
return new QReadWriteLock(recursionMode); }

void PythonQtWrapper_QReadWriteLock::lockForRead(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForRead());
}

void PythonQtWrapper_QReadWriteLock::lockForWrite(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->lockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForRead());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForRead(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForRead(timeout));
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject)
{
  return ( theWrappedObject->tryLockForWrite());
}

bool  PythonQtWrapper_QReadWriteLock::tryLockForWrite(QReadWriteLock* theWrappedObject, int  timeout)
{
  return ( theWrappedObject->tryLockForWrite(timeout));
}

void PythonQtWrapper_QReadWriteLock::unlock(QReadWriteLock* theWrappedObject)
{
  ( theWrappedObject->unlock());
}



QRegularExpression* PythonQtWrapper_QRegularExpression::new_QRegularExpression()
{ 
return new QRegularExpression(); }

QRegularExpression* PythonQtWrapper_QRegularExpression::new_QRegularExpression(const QRegularExpression&  re)
{ 
return new QRegularExpression(re); }

QRegularExpression* PythonQtWrapper_QRegularExpression::new_QRegularExpression(const QString&  pattern, QRegularExpression::PatternOptions  options)
{ 
return new QRegularExpression(pattern, options); }

int  PythonQtWrapper_QRegularExpression::captureCount(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->captureCount());
}

QString  PythonQtWrapper_QRegularExpression::errorString(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QRegularExpression::static_QRegularExpression_escape(const QString&  str)
{
  return (QRegularExpression::escape(str));
}

QRegularExpressionMatchIterator  PythonQtWrapper_QRegularExpression::globalMatch(QRegularExpression* theWrappedObject, const QString&  subject, int  offset, QRegularExpression::MatchType  matchType, QRegularExpression::MatchOptions  matchOptions) const
{
  return ( theWrappedObject->globalMatch(subject, offset, matchType, matchOptions));
}

bool  PythonQtWrapper_QRegularExpression::isValid(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRegularExpressionMatch  PythonQtWrapper_QRegularExpression::match(QRegularExpression* theWrappedObject, const QString&  subject, int  offset, QRegularExpression::MatchType  matchType, QRegularExpression::MatchOptions  matchOptions) const
{
  return ( theWrappedObject->match(subject, offset, matchType, matchOptions));
}

bool  PythonQtWrapper_QRegularExpression::__ne__(QRegularExpression* theWrappedObject, const QRegularExpression&  re) const
{
  return ( (*theWrappedObject)!= re);
}

void PythonQtWrapper_QRegularExpression::writeTo(QRegularExpression* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

QRegularExpression*  PythonQtWrapper_QRegularExpression::operator_assign(QRegularExpression* theWrappedObject, const QRegularExpression&  re)
{
  return &( (*theWrappedObject)= re);
}

bool  PythonQtWrapper_QRegularExpression::__eq__(QRegularExpression* theWrappedObject, const QRegularExpression&  re) const
{
  return ( (*theWrappedObject)== re);
}

void PythonQtWrapper_QRegularExpression::readFrom(QRegularExpression* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}

QString  PythonQtWrapper_QRegularExpression::pattern(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

int  PythonQtWrapper_QRegularExpression::patternErrorOffset(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->patternErrorOffset());
}

QRegularExpression::PatternOptions  PythonQtWrapper_QRegularExpression::patternOptions(QRegularExpression* theWrappedObject) const
{
  return ( theWrappedObject->patternOptions());
}

void PythonQtWrapper_QRegularExpression::setPattern(QRegularExpression* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

void PythonQtWrapper_QRegularExpression::setPatternOptions(QRegularExpression* theWrappedObject, QRegularExpression::PatternOptions  options)
{
  ( theWrappedObject->setPatternOptions(options));
}

void PythonQtWrapper_QRegularExpression::swap(QRegularExpression* theWrappedObject, QRegularExpression&  re)
{
  ( theWrappedObject->swap(re));
}

QString PythonQtWrapper_QRegularExpression::py_toString(QRegularExpression* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRegularExpressionMatch* PythonQtWrapper_QRegularExpressionMatch::new_QRegularExpressionMatch(const QRegularExpressionMatch&  match)
{ 
return new QRegularExpressionMatch(match); }

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->captured(name));
}

QString  PythonQtWrapper_QRegularExpressionMatch::captured(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->captured(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedEnd(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedEnd(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedEnd(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedLength(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedLength(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedLength(nth));
}

QStringRef  PythonQtWrapper_QRegularExpressionMatch::capturedRef(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedRef(name));
}

QStringRef  PythonQtWrapper_QRegularExpressionMatch::capturedRef(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedRef(nth));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, const QString&  name) const
{
  return ( theWrappedObject->capturedStart(name));
}

int  PythonQtWrapper_QRegularExpressionMatch::capturedStart(QRegularExpressionMatch* theWrappedObject, int  nth) const
{
  return ( theWrappedObject->capturedStart(nth));
}

QStringList  PythonQtWrapper_QRegularExpressionMatch::capturedTexts(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->capturedTexts());
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::hasPartialMatch(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->hasPartialMatch());
}

bool  PythonQtWrapper_QRegularExpressionMatch::isValid(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRegularExpressionMatch::lastCapturedIndex(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->lastCapturedIndex());
}

QRegularExpression::MatchOptions  PythonQtWrapper_QRegularExpressionMatch::matchOptions(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchOptions());
}

QRegularExpression::MatchType  PythonQtWrapper_QRegularExpressionMatch::matchType(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->matchType());
}

QRegularExpressionMatch*  PythonQtWrapper_QRegularExpressionMatch::operator_assign(QRegularExpressionMatch* theWrappedObject, const QRegularExpressionMatch&  match)
{
  return &( (*theWrappedObject)= match);
}

QRegularExpression  PythonQtWrapper_QRegularExpressionMatch::regularExpression(QRegularExpressionMatch* theWrappedObject) const
{
  return ( theWrappedObject->regularExpression());
}

void PythonQtWrapper_QRegularExpressionMatch::swap(QRegularExpressionMatch* theWrappedObject, QRegularExpressionMatch&  match)
{
  ( theWrappedObject->swap(match));
}

QString PythonQtWrapper_QRegularExpressionMatch::py_toString(QRegularExpressionMatch* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


