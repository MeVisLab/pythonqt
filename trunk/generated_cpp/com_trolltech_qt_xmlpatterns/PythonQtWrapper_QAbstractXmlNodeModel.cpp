#include "PythonQtWrapper_QAbstractXmlNodeModel.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>

QVector<QXmlNodeModelIndex >  PythonQtShell_QAbstractXmlNodeModel::attributes(const QXmlNodeModelIndex&  element) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "attributes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "attributes(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QVector<QXmlNodeModelIndex >  returnValue;
    void* args[2] = {NULL, (void*)&element};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVector<QXmlNodeModelIndex > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QVector<QXmlNodeModelIndex >  result;
return result;
}
QUrl  PythonQtShell_QAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "baseUri");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "baseUri(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QUrl  returnValue;
    void* args[2] = {NULL, (void*)&ni};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QUrl *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QUrl  result;
return result;
}
QXmlNodeModelIndex::DocumentOrder  PythonQtShell_QAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "compareOrder");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "compareOrder(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& ,const QXmlNodeModelIndex& )");
      QXmlNodeModelIndex::DocumentOrder  returnValue;
    void* args[3] = {NULL, (void*)&ni1, (void*)&ni2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlNodeModelIndex::DocumentOrder *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlNodeModelIndex::DocumentOrder  result;
return result;
}
QUrl  PythonQtShell_QAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "documentUri");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "documentUri(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QUrl  returnValue;
    void* args[2] = {NULL, (void*)&ni};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QUrl *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QUrl  result;
return result;
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::elementById(const QXmlName&  NCName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "elementById");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "elementById(QAbstractXmlNodeModel*,const QXmlName& )");
      QXmlNodeModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&NCName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlNodeModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlNodeModelIndex  result;
return result;
}
QXmlNodeModelIndex::NodeKind  PythonQtShell_QAbstractXmlNodeModel::kind(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "kind");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "kind(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QXmlNodeModelIndex::NodeKind  returnValue;
    void* args[2] = {NULL, (void*)&ni};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlNodeModelIndex::NodeKind *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlNodeModelIndex::NodeKind  result;
return result;
}
QXmlName  PythonQtShell_QAbstractXmlNodeModel::name(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "name");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "name(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QXmlName  returnValue;
    void* args[2] = {NULL, (void*)&ni};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlName *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlName  result;
return result;
}
QVector<QXmlName >  PythonQtShell_QAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "namespaceBindings");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "namespaceBindings(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QVector<QXmlName >  returnValue;
    void* args[2] = {NULL, (void*)&n};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVector<QXmlName > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QVector<QXmlName >  result;
return result;
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextFromSimpleAxis");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "nextFromSimpleAxis(QAbstractXmlNodeModel*,QAbstractXmlNodeModel::SimpleAxis ,const QXmlNodeModelIndex& )");
      QXmlNodeModelIndex  returnValue;
    void* args[3] = {NULL, (void*)&axis, (void*)&origin};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlNodeModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlNodeModelIndex  result;
return result;
}
QVector<QXmlNodeModelIndex >  PythonQtShell_QAbstractXmlNodeModel::nodesByIdref(const QXmlName&  NCName) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nodesByIdref");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "nodesByIdref(QAbstractXmlNodeModel*,const QXmlName& )");
      QVector<QXmlNodeModelIndex >  returnValue;
    void* args[2] = {NULL, (void*)&NCName};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVector<QXmlNodeModelIndex > *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QVector<QXmlNodeModelIndex >  result;
return result;
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::root(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "root");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "root(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QXmlNodeModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&n};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlNodeModelIndex *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QXmlNodeModelIndex  result;
return result;
}
QString  PythonQtShell_QAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stringValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "stringValue(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QString  returnValue;
    void* args[2] = {NULL, (void*)&n};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QString *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QString  result;
return result;
}
QVariant  PythonQtShell_QAbstractXmlNodeModel::typedValue(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "typedValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject,
      "typedValue(QAbstractXmlNodeModel*,const QXmlNodeModelIndex& )");
      QVariant  returnValue;
    void* args[2] = {NULL, (void*)&n};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QVariant *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  QVariant  result;
return result;
}
QAbstractXmlNodeModel* PythonQtWrapper_QAbstractXmlNodeModel::new_QAbstractXmlNodeModel()
{ 
return new PythonQtShell_QAbstractXmlNodeModel(); }

