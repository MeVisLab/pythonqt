#include "PythonQtWrapper_QSimpleXmlNodeModel.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>

QVector<QXmlNodeModelIndex >  PythonQtShell_QSimpleXmlNodeModel::attributes(const QXmlNodeModelIndex&  element) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "attributes");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "attributes(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QUrl  PythonQtShell_QSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex&  node) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "baseUri");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "baseUri(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
      QUrl  returnValue;
    void* args[2] = {NULL, (void*)&node};
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
  return QSimpleXmlNodeModel::baseUri(node);
}
QXmlNodeModelIndex::DocumentOrder  PythonQtShell_QSimpleXmlNodeModel::compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "compareOrder");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "compareOrder(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& ,const QXmlNodeModelIndex& )");
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
QUrl  PythonQtShell_QSimpleXmlNodeModel::documentUri(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "documentUri");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "documentUri(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::elementById(const QXmlName&  id) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "elementById");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "elementById(QSimpleXmlNodeModel*,const QXmlName& )");
      QXmlNodeModelIndex  returnValue;
    void* args[2] = {NULL, (void*)&id};
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
  return QSimpleXmlNodeModel::elementById(id);
}
QXmlNodeModelIndex::NodeKind  PythonQtShell_QSimpleXmlNodeModel::kind(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "kind");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "kind(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QXmlName  PythonQtShell_QSimpleXmlNodeModel::name(const QXmlNodeModelIndex&  ni) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "name");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "name(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QVector<QXmlName >  PythonQtShell_QSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "namespaceBindings");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "namespaceBindings(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
      QVector<QXmlName >  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QSimpleXmlNodeModel::namespaceBindings(arg__1);
}
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextFromSimpleAxis");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "nextFromSimpleAxis(QSimpleXmlNodeModel*,QAbstractXmlNodeModel::SimpleAxis ,const QXmlNodeModelIndex& )");
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
QVector<QXmlNodeModelIndex >  PythonQtShell_QSimpleXmlNodeModel::nodesByIdref(const QXmlName&  idref) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nodesByIdref");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "nodesByIdref(QSimpleXmlNodeModel*,const QXmlName& )");
      QVector<QXmlNodeModelIndex >  returnValue;
    void* args[2] = {NULL, (void*)&idref};
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
  return QSimpleXmlNodeModel::nodesByIdref(idref);
}
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::root(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "root");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "root(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QString  PythonQtShell_QSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex&  node) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stringValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "stringValue(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
      QString  returnValue;
    void* args[2] = {NULL, (void*)&node};
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
  return QSimpleXmlNodeModel::stringValue(node);
}
QVariant  PythonQtShell_QSimpleXmlNodeModel::typedValue(const QXmlNodeModelIndex&  n) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "typedValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject,
      "typedValue(QSimpleXmlNodeModel*,const QXmlNodeModelIndex& )");
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
QSimpleXmlNodeModel* PythonQtWrapper_QSimpleXmlNodeModel::new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool)
{ 
return new PythonQtShell_QSimpleXmlNodeModel(namePool); }

QUrl  PythonQtWrapper_QSimpleXmlNodeModel::baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
return  (*theWrappedObject).baseUri(node);
}

QVector<QXmlName >  PythonQtWrapper_QSimpleXmlNodeModel::namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const
{
return  (*theWrappedObject).namespaceBindings(arg__1);
}

QXmlNamePool&  PythonQtWrapper_QSimpleXmlNodeModel::namePool(QSimpleXmlNodeModel* theWrappedObject) const
{
return  (*theWrappedObject).namePool();
}

QString  PythonQtWrapper_QSimpleXmlNodeModel::stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
return  (*theWrappedObject).stringValue(node);
}

QXmlNodeModelIndex  PythonQtWrapper_QSimpleXmlNodeModel::elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const
{
return  (*theWrappedObject).elementById(id);
}

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QSimpleXmlNodeModel::nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const
{
return  (*theWrappedObject).nodesByIdref(idref);
}

