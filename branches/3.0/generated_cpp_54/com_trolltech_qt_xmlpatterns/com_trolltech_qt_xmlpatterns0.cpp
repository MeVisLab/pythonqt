#include "com_trolltech_qt_xmlpatterns0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qsourcelocation.h>
#include <qtextcodec.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>
#include <qxmlschema.h>
#include <qxmlschemavalidator.h>

PythonQtShell_QAbstractMessageHandler::~PythonQtShell_QAbstractMessageHandler() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractMessageHandler::childEvent(QChildEvent*  arg__1)
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
  QAbstractMessageHandler::childEvent(arg__1);
}
void PythonQtShell_QAbstractMessageHandler::customEvent(QEvent*  arg__1)
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
  QAbstractMessageHandler::customEvent(arg__1);
}
bool  PythonQtShell_QAbstractMessageHandler::event(QEvent*  arg__1)
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
  return QAbstractMessageHandler::event(arg__1);
}
bool  PythonQtShell_QAbstractMessageHandler::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractMessageHandler::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QAbstractMessageHandler::handleMessage(QtMsgType  type0, const QString&  description1, const QUrl&  identifier2, const QSourceLocation&  sourceLocation3)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("handleMessage");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "QtMsgType" , "const QString&" , "const QUrl&" , "const QSourceLocation&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(5, argumentList);
    void* args[5] = {NULL, (void*)&type0, (void*)&description1, (void*)&identifier2, (void*)&sourceLocation3};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QAbstractMessageHandler::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractMessageHandler::timerEvent(arg__1);
}
QAbstractMessageHandler* PythonQtWrapper_QAbstractMessageHandler::new_QAbstractMessageHandler(QObject*  parent)
{ 
return new PythonQtShell_QAbstractMessageHandler(parent); }

void PythonQtWrapper_QAbstractMessageHandler::handleMessage(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation)
{
  ( ((PythonQtPublicPromoter_QAbstractMessageHandler*)theWrappedObject)->promoted_handleMessage(type, description, identifier, sourceLocation));
}

void PythonQtWrapper_QAbstractMessageHandler::message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation)
{
  ( theWrappedObject->message(type, description, identifier, sourceLocation));
}



PythonQtShell_QAbstractUriResolver::~PythonQtShell_QAbstractUriResolver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractUriResolver::childEvent(QChildEvent*  arg__1)
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
  QAbstractUriResolver::childEvent(arg__1);
}
void PythonQtShell_QAbstractUriResolver::customEvent(QEvent*  arg__1)
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
  QAbstractUriResolver::customEvent(arg__1);
}
bool  PythonQtShell_QAbstractUriResolver::event(QEvent*  arg__1)
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
  return QAbstractUriResolver::event(arg__1);
}
bool  PythonQtShell_QAbstractUriResolver::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QAbstractUriResolver::eventFilter(arg__1, arg__2);
}
QUrl  PythonQtShell_QAbstractUriResolver::resolve(const QUrl&  relative0, const QUrl&  baseURI1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("resolve");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QUrl" , "const QUrl&" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QUrl returnValue;
    void* args[3] = {NULL, (void*)&relative0, (void*)&baseURI1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("resolve", methodInfo, result);
        } else {
          returnValue = *((QUrl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QUrl();
}
void PythonQtShell_QAbstractUriResolver::timerEvent(QTimerEvent*  arg__1)
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
  QAbstractUriResolver::timerEvent(arg__1);
}
QAbstractUriResolver* PythonQtWrapper_QAbstractUriResolver::new_QAbstractUriResolver(QObject*  parent)
{ 
return new PythonQtShell_QAbstractUriResolver(parent); }

QUrl  PythonQtWrapper_QAbstractUriResolver::resolve(QAbstractUriResolver* theWrappedObject, const QUrl&  relative, const QUrl&  baseURI) const
{
  return ( ((PythonQtPublicPromoter_QAbstractUriResolver*)theWrappedObject)->promoted_resolve(relative, baseURI));
}



PythonQtShell_QAbstractXmlNodeModel::~PythonQtShell_QAbstractXmlNodeModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVector<QXmlNodeModelIndex >  PythonQtShell_QAbstractXmlNodeModel::attributes(const QXmlNodeModelIndex&  element0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("attributes");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlNodeModelIndex >" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlNodeModelIndex > returnValue;
    void* args[2] = {NULL, (void*)&element0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("attributes", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlNodeModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QVector<QXmlNodeModelIndex >();
}
QUrl  PythonQtShell_QAbstractXmlNodeModel::baseUri(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("baseUri");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QUrl" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QUrl returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("baseUri", methodInfo, result);
        } else {
          returnValue = *((QUrl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QUrl();
}
QXmlNodeModelIndex::DocumentOrder  PythonQtShell_QAbstractXmlNodeModel::compareOrder(const QXmlNodeModelIndex&  ni10, const QXmlNodeModelIndex&  ni21) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("compareOrder");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex::DocumentOrder" , "const QXmlNodeModelIndex&" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QXmlNodeModelIndex::DocumentOrder returnValue;
    void* args[3] = {NULL, (void*)&ni10, (void*)&ni21};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("compareOrder", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex::DocumentOrder*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex::DocumentOrder();
}
QUrl  PythonQtShell_QAbstractXmlNodeModel::documentUri(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentUri");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QUrl" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QUrl returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("documentUri", methodInfo, result);
        } else {
          returnValue = *((QUrl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QUrl();
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::elementById(const QXmlName&  NCName0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("elementById");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[2] = {NULL, (void*)&NCName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("elementById", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex();
}
bool  PythonQtShell_QAbstractXmlNodeModel::isDeepEqual(const QXmlNodeModelIndex&  ni10, const QXmlNodeModelIndex&  ni21) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("isDeepEqual");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"bool" , "const QXmlNodeModelIndex&" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&ni10, (void*)&ni21};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("isDeepEqual", methodInfo, result);
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
  return QAbstractXmlNodeModel::isDeepEqual(ni10, ni21);
}
QXmlNodeModelIndex::NodeKind  PythonQtShell_QAbstractXmlNodeModel::kind(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("kind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex::NodeKind" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex::NodeKind returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("kind", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex::NodeKind*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex::NodeKind();
}
QXmlName  PythonQtShell_QAbstractXmlNodeModel::name(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("name");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlName" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlName returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
        } else {
          returnValue = *((QXmlName*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlName();
}
QVector<QXmlName >  PythonQtShell_QAbstractXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceBindings");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlName >" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlName > returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("namespaceBindings", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlName >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QVector<QXmlName >();
}
short  PythonQtShell_QAbstractXmlNodeModel::namespaceForPrefix(const QXmlNodeModelIndex&  ni0, const short  prefix1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceForPrefix");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"short" , "const QXmlNodeModelIndex&" , "const short"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      short returnValue;
    void* args[3] = {NULL, (void*)&ni0, (void*)&prefix1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("namespaceForPrefix", methodInfo, result);
        } else {
          returnValue = *((short*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QAbstractXmlNodeModel::namespaceForPrefix(ni0, prefix1);
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis0, const QXmlNodeModelIndex&  origin1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextFromSimpleAxis");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "QAbstractXmlNodeModel::SimpleAxis" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[3] = {NULL, (void*)&axis0, (void*)&origin1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nextFromSimpleAxis", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex();
}
QVector<QXmlNodeModelIndex >  PythonQtShell_QAbstractXmlNodeModel::nodesByIdref(const QXmlName&  NCName0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nodesByIdref");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlNodeModelIndex >" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlNodeModelIndex > returnValue;
    void* args[2] = {NULL, (void*)&NCName0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nodesByIdref", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlNodeModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QVector<QXmlNodeModelIndex >();
}
QXmlNodeModelIndex  PythonQtShell_QAbstractXmlNodeModel::root(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("root");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("root", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex();
}
QString  PythonQtShell_QAbstractXmlNodeModel::stringValue(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stringValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stringValue", methodInfo, result);
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
  return QString();
}
QVariant  PythonQtShell_QAbstractXmlNodeModel::typedValue(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("typedValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("typedValue", methodInfo, result);
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
  return QVariant();
}
QAbstractXmlNodeModel* PythonQtWrapper_QAbstractXmlNodeModel::new_QAbstractXmlNodeModel()
{ 
return new PythonQtShell_QAbstractXmlNodeModel(); }

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QAbstractXmlNodeModel::attributes(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  element) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_attributes(element));
}

QUrl  PythonQtWrapper_QAbstractXmlNodeModel::baseUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_baseUri(ni));
}

QXmlNodeModelIndex::DocumentOrder  PythonQtWrapper_QAbstractXmlNodeModel::compareOrder(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_compareOrder(ni1, ni2));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::createIndex(QAbstractXmlNodeModel* theWrappedObject, qint64  data) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_createIndex(data));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::createIndex(QAbstractXmlNodeModel* theWrappedObject, qint64  data, qint64  additionalData) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_createIndex(data, additionalData));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::createIndex(QAbstractXmlNodeModel* theWrappedObject, void*  pointer, qint64  additionalData) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_createIndex(pointer, additionalData));
}

QUrl  PythonQtWrapper_QAbstractXmlNodeModel::documentUri(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_documentUri(ni));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::elementById(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_elementById(NCName));
}

QXmlNodeModelIndex::NodeKind  PythonQtWrapper_QAbstractXmlNodeModel::kind(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_kind(ni));
}

QXmlName  PythonQtWrapper_QAbstractXmlNodeModel::name(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  ni) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_name(ni));
}

QVector<QXmlName >  PythonQtWrapper_QAbstractXmlNodeModel::namespaceBindings(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_namespaceBindings(n));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel* theWrappedObject, QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_nextFromSimpleAxis(axis, origin));
}

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QAbstractXmlNodeModel::nodesByIdref(QAbstractXmlNodeModel* theWrappedObject, const QXmlName&  NCName) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_nodesByIdref(NCName));
}

QXmlNodeModelIndex  PythonQtWrapper_QAbstractXmlNodeModel::root(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_root(n));
}

QSourceLocation  PythonQtWrapper_QAbstractXmlNodeModel::sourceLocation(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  index) const
{
  return ( theWrappedObject->sourceLocation(index));
}

QString  PythonQtWrapper_QAbstractXmlNodeModel::stringValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_stringValue(n));
}

QVariant  PythonQtWrapper_QAbstractXmlNodeModel::typedValue(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  n) const
{
  return ( ((PythonQtPublicPromoter_QAbstractXmlNodeModel*)theWrappedObject)->promoted_typedValue(n));
}



PythonQtShell_QAbstractXmlReceiver::~PythonQtShell_QAbstractXmlReceiver() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAbstractXmlReceiver::atomicValue(const QVariant&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atomicValue");
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
  
}
void PythonQtShell_QAbstractXmlReceiver::attribute(const QXmlName&  name0, const QStringRef&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("attribute");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QStringRef&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&name0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QAbstractXmlReceiver::characters(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("characters");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  
}
void PythonQtShell_QAbstractXmlReceiver::comment(const QString&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("comment");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
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
  
}
void PythonQtShell_QAbstractXmlReceiver::endDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endDocument");
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
void PythonQtShell_QAbstractXmlReceiver::endElement()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endElement");
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
void PythonQtShell_QAbstractXmlReceiver::endOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endOfSequence");
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
void PythonQtShell_QAbstractXmlReceiver::namespaceBinding(const QXmlName&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceBinding");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QAbstractXmlReceiver::processingInstruction(const QXmlName&  target0, const QString&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("processingInstruction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&target0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QAbstractXmlReceiver::startDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startDocument");
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
void PythonQtShell_QAbstractXmlReceiver::startElement(const QXmlName&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startElement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  
}
void PythonQtShell_QAbstractXmlReceiver::startOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startOfSequence");
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
void PythonQtShell_QAbstractXmlReceiver::whitespaceOnly(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("whitespaceOnly");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  QAbstractXmlReceiver::whitespaceOnly(value0);
}
QAbstractXmlReceiver* PythonQtWrapper_QAbstractXmlReceiver::new_QAbstractXmlReceiver()
{ 
return new PythonQtShell_QAbstractXmlReceiver(); }

void PythonQtWrapper_QAbstractXmlReceiver::atomicValue(QAbstractXmlReceiver* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_atomicValue(value));
}

void PythonQtWrapper_QAbstractXmlReceiver::attribute(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_attribute(name, value));
}

void PythonQtWrapper_QAbstractXmlReceiver::characters(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_characters(value));
}

void PythonQtWrapper_QAbstractXmlReceiver::comment(QAbstractXmlReceiver* theWrappedObject, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_comment(value));
}

void PythonQtWrapper_QAbstractXmlReceiver::endDocument(QAbstractXmlReceiver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_endDocument());
}

void PythonQtWrapper_QAbstractXmlReceiver::endElement(QAbstractXmlReceiver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_endElement());
}

void PythonQtWrapper_QAbstractXmlReceiver::endOfSequence(QAbstractXmlReceiver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_endOfSequence());
}

void PythonQtWrapper_QAbstractXmlReceiver::namespaceBinding(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_namespaceBinding(name));
}

void PythonQtWrapper_QAbstractXmlReceiver::processingInstruction(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  target, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_processingInstruction(target, value));
}

void PythonQtWrapper_QAbstractXmlReceiver::startDocument(QAbstractXmlReceiver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_startDocument());
}

void PythonQtWrapper_QAbstractXmlReceiver::startElement(QAbstractXmlReceiver* theWrappedObject, const QXmlName&  name)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_startElement(name));
}

void PythonQtWrapper_QAbstractXmlReceiver::startOfSequence(QAbstractXmlReceiver* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_startOfSequence());
}

void PythonQtWrapper_QAbstractXmlReceiver::whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QAbstractXmlReceiver*)theWrappedObject)->promoted_whitespaceOnly(value));
}







PythonQtShell_QSimpleXmlNodeModel::~PythonQtShell_QSimpleXmlNodeModel() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QVector<QXmlNodeModelIndex >  PythonQtShell_QSimpleXmlNodeModel::attributes(const QXmlNodeModelIndex&  element0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("attributes");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlNodeModelIndex >" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlNodeModelIndex > returnValue;
    void* args[2] = {NULL, (void*)&element0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("attributes", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlNodeModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QVector<QXmlNodeModelIndex >();
}
QUrl  PythonQtShell_QSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex&  node0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("baseUri");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QUrl" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QUrl returnValue;
    void* args[2] = {NULL, (void*)&node0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("baseUri", methodInfo, result);
        } else {
          returnValue = *((QUrl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSimpleXmlNodeModel::baseUri(node0);
}
QXmlNodeModelIndex::DocumentOrder  PythonQtShell_QSimpleXmlNodeModel::compareOrder(const QXmlNodeModelIndex&  ni10, const QXmlNodeModelIndex&  ni21) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("compareOrder");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex::DocumentOrder" , "const QXmlNodeModelIndex&" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QXmlNodeModelIndex::DocumentOrder returnValue;
    void* args[3] = {NULL, (void*)&ni10, (void*)&ni21};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("compareOrder", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex::DocumentOrder*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex::DocumentOrder();
}
QUrl  PythonQtShell_QSimpleXmlNodeModel::documentUri(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("documentUri");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QUrl" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QUrl returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("documentUri", methodInfo, result);
        } else {
          returnValue = *((QUrl*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QUrl();
}
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::elementById(const QXmlName&  id0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("elementById");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[2] = {NULL, (void*)&id0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("elementById", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSimpleXmlNodeModel::elementById(id0);
}
QXmlNodeModelIndex::NodeKind  PythonQtShell_QSimpleXmlNodeModel::kind(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("kind");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex::NodeKind" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex::NodeKind returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("kind", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex::NodeKind*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex::NodeKind();
}
QXmlName  PythonQtShell_QSimpleXmlNodeModel::name(const QXmlNodeModelIndex&  ni0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("name");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlName" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlName returnValue;
    void* args[2] = {NULL, (void*)&ni0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("name", methodInfo, result);
        } else {
          returnValue = *((QXmlName*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlName();
}
QVector<QXmlName >  PythonQtShell_QSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex&  arg__1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceBindings");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlName >" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlName > returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("namespaceBindings", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlName >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSimpleXmlNodeModel::namespaceBindings(arg__1);
}
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis0, const QXmlNodeModelIndex&  origin1) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nextFromSimpleAxis");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "QAbstractXmlNodeModel::SimpleAxis" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[3] = {NULL, (void*)&axis0, (void*)&origin1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nextFromSimpleAxis", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex();
}
QVector<QXmlNodeModelIndex >  PythonQtShell_QSimpleXmlNodeModel::nodesByIdref(const QXmlName&  idref0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("nodesByIdref");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVector<QXmlNodeModelIndex >" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVector<QXmlNodeModelIndex > returnValue;
    void* args[2] = {NULL, (void*)&idref0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("nodesByIdref", methodInfo, result);
        } else {
          returnValue = *((QVector<QXmlNodeModelIndex >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QSimpleXmlNodeModel::nodesByIdref(idref0);
}
QXmlNodeModelIndex  PythonQtShell_QSimpleXmlNodeModel::root(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("root");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QXmlNodeModelIndex" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QXmlNodeModelIndex returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("root", methodInfo, result);
        } else {
          returnValue = *((QXmlNodeModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  } else {
    PyErr_Clear();
  }
}
  return QXmlNodeModelIndex();
}
QString  PythonQtShell_QSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex&  node0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("stringValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QString" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&node0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stringValue", methodInfo, result);
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
  return QSimpleXmlNodeModel::stringValue(node0);
}
QVariant  PythonQtShell_QSimpleXmlNodeModel::typedValue(const QXmlNodeModelIndex&  n0) const
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("typedValue");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"QVariant" , "const QXmlNodeModelIndex&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&n0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("typedValue", methodInfo, result);
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
  return QVariant();
}
QSimpleXmlNodeModel* PythonQtWrapper_QSimpleXmlNodeModel::new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool)
{ 
return new PythonQtShell_QSimpleXmlNodeModel(namePool); }

QUrl  PythonQtWrapper_QSimpleXmlNodeModel::baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
  return ( ((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->promoted_baseUri(node));
}

QXmlNodeModelIndex  PythonQtWrapper_QSimpleXmlNodeModel::elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const
{
  return ( ((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->promoted_elementById(id));
}

QXmlNamePool*  PythonQtWrapper_QSimpleXmlNodeModel::namePool(QSimpleXmlNodeModel* theWrappedObject) const
{
  return &( theWrappedObject->namePool());
}

QVector<QXmlName >  PythonQtWrapper_QSimpleXmlNodeModel::namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const
{
  return ( ((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->promoted_namespaceBindings(arg__1));
}

QVector<QXmlNodeModelIndex >  PythonQtWrapper_QSimpleXmlNodeModel::nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const
{
  return ( ((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->promoted_nodesByIdref(idref));
}

QString  PythonQtWrapper_QSimpleXmlNodeModel::stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const
{
  return ( ((PythonQtPublicPromoter_QSimpleXmlNodeModel*)theWrappedObject)->promoted_stringValue(node));
}



QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation()
{ 
return new QSourceLocation(); }

QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation(const QSourceLocation&  other)
{ 
return new QSourceLocation(other); }

QSourceLocation* PythonQtWrapper_QSourceLocation::new_QSourceLocation(const QUrl&  uri, int  line, int  column)
{ 
return new QSourceLocation(uri, line, column); }

qint64  PythonQtWrapper_QSourceLocation::column(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

bool  PythonQtWrapper_QSourceLocation::isNull(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

qint64  PythonQtWrapper_QSourceLocation::line(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->line());
}

bool  PythonQtWrapper_QSourceLocation::__ne__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QSourceLocation::__eq__(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const
{
  return ( (*theWrappedObject)== other);
}

void PythonQtWrapper_QSourceLocation::setColumn(QSourceLocation* theWrappedObject, qint64  newColumn)
{
  ( theWrappedObject->setColumn(newColumn));
}

void PythonQtWrapper_QSourceLocation::setLine(QSourceLocation* theWrappedObject, qint64  newLine)
{
  ( theWrappedObject->setLine(newLine));
}

void PythonQtWrapper_QSourceLocation::setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri)
{
  ( theWrappedObject->setUri(newUri));
}

QUrl  PythonQtWrapper_QSourceLocation::uri(QSourceLocation* theWrappedObject) const
{
  return ( theWrappedObject->uri());
}

QString PythonQtWrapper_QSourceLocation::py_toString(QSourceLocation* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QXmlFormatter::~PythonQtShell_QXmlFormatter() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QXmlFormatter::atomicValue(const QVariant&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atomicValue");
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
  QXmlFormatter::atomicValue(value0);
}
void PythonQtShell_QXmlFormatter::attribute(const QXmlName&  name0, const QStringRef&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("attribute");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QStringRef&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&name0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlFormatter::attribute(name0, value1);
}
void PythonQtShell_QXmlFormatter::characters(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("characters");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  QXmlFormatter::characters(value0);
}
void PythonQtShell_QXmlFormatter::comment(const QString&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("comment");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
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
  QXmlFormatter::comment(value0);
}
void PythonQtShell_QXmlFormatter::endDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endDocument");
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
  QXmlFormatter::endDocument();
}
void PythonQtShell_QXmlFormatter::endElement()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endElement");
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
  QXmlFormatter::endElement();
}
void PythonQtShell_QXmlFormatter::endOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endOfSequence");
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
  QXmlFormatter::endOfSequence();
}
void PythonQtShell_QXmlFormatter::namespaceBinding(const QXmlName&  nb0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceBinding");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&nb0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlFormatter::namespaceBinding(nb0);
}
void PythonQtShell_QXmlFormatter::processingInstruction(const QXmlName&  name0, const QString&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("processingInstruction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&name0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlFormatter::processingInstruction(name0, value1);
}
void PythonQtShell_QXmlFormatter::startDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startDocument");
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
  QXmlFormatter::startDocument();
}
void PythonQtShell_QXmlFormatter::startElement(const QXmlName&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startElement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlFormatter::startElement(name0);
}
void PythonQtShell_QXmlFormatter::startOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startOfSequence");
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
  QXmlFormatter::startOfSequence();
}
void PythonQtShell_QXmlFormatter::whitespaceOnly(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("whitespaceOnly");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  QXmlFormatter::whitespaceOnly(value0);
}
QXmlFormatter* PythonQtWrapper_QXmlFormatter::new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new PythonQtShell_QXmlFormatter(query, outputDevice); }

void PythonQtWrapper_QXmlFormatter::atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_atomicValue(value));
}

void PythonQtWrapper_QXmlFormatter::attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_attribute(name, value));
}

void PythonQtWrapper_QXmlFormatter::characters(QXmlFormatter* theWrappedObject, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_characters(value));
}

void PythonQtWrapper_QXmlFormatter::comment(QXmlFormatter* theWrappedObject, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_comment(value));
}

void PythonQtWrapper_QXmlFormatter::endDocument(QXmlFormatter* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endDocument());
}

void PythonQtWrapper_QXmlFormatter::endElement(QXmlFormatter* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endElement());
}

void PythonQtWrapper_QXmlFormatter::endOfSequence(QXmlFormatter* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endOfSequence());
}

int  PythonQtWrapper_QXmlFormatter::indentationDepth(QXmlFormatter* theWrappedObject) const
{
  return ( theWrappedObject->indentationDepth());
}

void PythonQtWrapper_QXmlFormatter::processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_processingInstruction(name, value));
}

void PythonQtWrapper_QXmlFormatter::setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth)
{
  ( theWrappedObject->setIndentationDepth(depth));
}

void PythonQtWrapper_QXmlFormatter::startDocument(QXmlFormatter* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startDocument());
}

void PythonQtWrapper_QXmlFormatter::startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startElement(name));
}

void PythonQtWrapper_QXmlFormatter::startOfSequence(QXmlFormatter* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startOfSequence());
}



QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem()
{ 
return new QXmlItem(); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QVariant&  atomicValue)
{ 
return new QXmlItem(atomicValue); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlItem&  other)
{ 
return new QXmlItem(other); }

QXmlItem* PythonQtWrapper_QXmlItem::new_QXmlItem(const QXmlNodeModelIndex&  node)
{ 
return new QXmlItem(node); }

bool  PythonQtWrapper_QXmlItem::isAtomicValue(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isAtomicValue());
}

bool  PythonQtWrapper_QXmlItem::isNode(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isNode());
}

bool  PythonQtWrapper_QXmlItem::isNull(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QVariant  PythonQtWrapper_QXmlItem::toAtomicValue(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->toAtomicValue());
}

QXmlNodeModelIndex  PythonQtWrapper_QXmlItem::toNodeModelIndex(QXmlItem* theWrappedObject) const
{
  return ( theWrappedObject->toNodeModelIndex());
}



QXmlName* PythonQtWrapper_QXmlName::new_QXmlName()
{ 
return new QXmlName(); }

QXmlName* PythonQtWrapper_QXmlName::new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI, const QString&  prefix)
{ 
return new QXmlName(namePool, localName, namespaceURI, prefix); }

QXmlName  PythonQtWrapper_QXmlName::static_QXmlName_fromClarkName(const QString&  clarkName, const QXmlNamePool&  namePool)
{
  return (QXmlName::fromClarkName(clarkName, namePool));
}

bool  PythonQtWrapper_QXmlName::static_QXmlName_isNCName(const QString&  candidate)
{
  return (QXmlName::isNCName(candidate));
}

bool  PythonQtWrapper_QXmlName::isNull(QXmlName* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QString  PythonQtWrapper_QXmlName::localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
  return ( theWrappedObject->localName(query));
}

QString  PythonQtWrapper_QXmlName::namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
  return ( theWrappedObject->namespaceUri(query));
}

bool  PythonQtWrapper_QXmlName::__ne__(QXmlName* theWrappedObject, const QXmlName&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlName::__eq__(QXmlName* theWrappedObject, const QXmlName&  other) const
{
  return ( (*theWrappedObject)== other);
}

QString  PythonQtWrapper_QXmlName::prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
  return ( theWrappedObject->prefix(query));
}

QString  PythonQtWrapper_QXmlName::toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const
{
  return ( theWrappedObject->toClarkName(query));
}



QXmlNamePool* PythonQtWrapper_QXmlNamePool::new_QXmlNamePool()
{ 
return new QXmlNamePool(); }

QXmlNamePool* PythonQtWrapper_QXmlNamePool::new_QXmlNamePool(const QXmlNamePool&  other)
{ 
return new QXmlNamePool(other); }



QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex()
{ 
return new QXmlNodeModelIndex(); }

QXmlNodeModelIndex* PythonQtWrapper_QXmlNodeModelIndex::new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other)
{ 
return new QXmlNodeModelIndex(other); }

qint64  PythonQtWrapper_QXmlNodeModelIndex::additionalData(QXmlNodeModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->additionalData());
}

qint64  PythonQtWrapper_QXmlNodeModelIndex::data(QXmlNodeModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->data());
}

bool  PythonQtWrapper_QXmlNodeModelIndex::isNull(QXmlNodeModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

const QAbstractXmlNodeModel*  PythonQtWrapper_QXmlNodeModelIndex::model(QXmlNodeModelIndex* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

bool  PythonQtWrapper_QXmlNodeModelIndex::__ne__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QXmlNodeModelIndex::__eq__(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const
{
  return ( (*theWrappedObject)== other);
}



QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery()
{ 
return new QXmlQuery(); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np)
{ 
return new QXmlQuery(queryLanguage, np); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlNamePool&  np)
{ 
return new QXmlQuery(np); }

QXmlQuery* PythonQtWrapper_QXmlQuery::new_QXmlQuery(const QXmlQuery&  other)
{ 
return new QXmlQuery(other); }

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(localName, arg__2));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(localName, value));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query)
{
  ( theWrappedObject->bindVariable(localName, query));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2)
{
  ( theWrappedObject->bindVariable(name, arg__2));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value)
{
  ( theWrappedObject->bindVariable(name, value));
}

void PythonQtWrapper_QXmlQuery::bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query)
{
  ( theWrappedObject->bindVariable(name, query));
}

bool  PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const
{
  return ( theWrappedObject->evaluateTo(target));
}

bool  PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const
{
  return ( theWrappedObject->evaluateTo(output));
}

void PythonQtWrapper_QXmlQuery::evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const
{
  ( theWrappedObject->evaluateTo(result));
}

QXmlName  PythonQtWrapper_QXmlQuery::initialTemplateName(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->initialTemplateName());
}

bool  PythonQtWrapper_QXmlQuery::isValid(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlQuery::messageHandler(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

QXmlNamePool  PythonQtWrapper_QXmlQuery::namePool(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

QNetworkAccessManager*  PythonQtWrapper_QXmlQuery::networkAccessManager(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QXmlQuery*  PythonQtWrapper_QXmlQuery::operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other)
{
  return &( (*theWrappedObject)= other);
}

QXmlQuery::QueryLanguage  PythonQtWrapper_QXmlQuery::queryLanguage(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->queryLanguage());
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, QIODevice*  document)
{
  return ( theWrappedObject->setFocus(document));
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QString&  focus)
{
  return ( theWrappedObject->setFocus(focus));
}

bool  PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI)
{
  return ( theWrappedObject->setFocus(documentURI));
}

void PythonQtWrapper_QXmlQuery::setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item)
{
  ( theWrappedObject->setFocus(item));
}

void PythonQtWrapper_QXmlQuery::setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setInitialTemplateName(name));
}

void PythonQtWrapper_QXmlQuery::setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name)
{
  ( theWrappedObject->setInitialTemplateName(name));
}

void PythonQtWrapper_QXmlQuery::setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler)
{
  ( theWrappedObject->setMessageHandler(messageHandler));
}

void PythonQtWrapper_QXmlQuery::setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager)
{
  ( theWrappedObject->setNetworkAccessManager(newManager));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI)
{
  ( theWrappedObject->setQuery(sourceCode, documentURI));
}

void PythonQtWrapper_QXmlQuery::setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI)
{
  ( theWrappedObject->setQuery(queryURI, baseURI));
}

void PythonQtWrapper_QXmlQuery::setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlQuery::uriResolver(QXmlQuery* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}



PythonQtShell_QXmlResultItems::~PythonQtShell_QXmlResultItems() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
QXmlResultItems* PythonQtWrapper_QXmlResultItems::new_QXmlResultItems()
{ 
return new PythonQtShell_QXmlResultItems(); }

QXmlItem  PythonQtWrapper_QXmlResultItems::current(QXmlResultItems* theWrappedObject) const
{
  return ( theWrappedObject->current());
}

bool  PythonQtWrapper_QXmlResultItems::hasError(QXmlResultItems* theWrappedObject) const
{
  return ( theWrappedObject->hasError());
}

QXmlItem  PythonQtWrapper_QXmlResultItems::next(QXmlResultItems* theWrappedObject)
{
  return ( theWrappedObject->next());
}



QXmlSchema* PythonQtWrapper_QXmlSchema::new_QXmlSchema()
{ 
return new QXmlSchema(); }

QXmlSchema* PythonQtWrapper_QXmlSchema::new_QXmlSchema(const QXmlSchema&  other)
{ 
return new QXmlSchema(other); }

QUrl  PythonQtWrapper_QXmlSchema::documentUri(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->documentUri());
}

bool  PythonQtWrapper_QXmlSchema::isValid(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri)
{
  return ( theWrappedObject->load(source, documentUri));
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri)
{
  return ( theWrappedObject->load(data, documentUri));
}

bool  PythonQtWrapper_QXmlSchema::load(QXmlSchema* theWrappedObject, const QUrl&  source)
{
  return ( theWrappedObject->load(source));
}

QAbstractMessageHandler*  PythonQtWrapper_QXmlSchema::messageHandler(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

QXmlNamePool  PythonQtWrapper_QXmlSchema::namePool(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

QNetworkAccessManager*  PythonQtWrapper_QXmlSchema::networkAccessManager(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

QXmlSchema*  PythonQtWrapper_QXmlSchema::operator_assign(QXmlSchema* theWrappedObject, const QXmlSchema&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QXmlSchema::setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler)
{
  ( theWrappedObject->setMessageHandler(handler));
}

void PythonQtWrapper_QXmlSchema::setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager)
{
  ( theWrappedObject->setNetworkAccessManager(networkmanager));
}

void PythonQtWrapper_QXmlSchema::setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlSchema::uriResolver(QXmlSchema* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}



QXmlSchemaValidator* PythonQtWrapper_QXmlSchemaValidator::new_QXmlSchemaValidator()
{ 
return new QXmlSchemaValidator(); }

QXmlSchemaValidator* PythonQtWrapper_QXmlSchemaValidator::new_QXmlSchemaValidator(const QXmlSchema&  schema)
{ 
return new QXmlSchemaValidator(schema); }

QAbstractMessageHandler*  PythonQtWrapper_QXmlSchemaValidator::messageHandler(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->messageHandler());
}

QXmlNamePool  PythonQtWrapper_QXmlSchemaValidator::namePool(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->namePool());
}

QNetworkAccessManager*  PythonQtWrapper_QXmlSchemaValidator::networkAccessManager(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->networkAccessManager());
}

void PythonQtWrapper_QXmlSchemaValidator::setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler)
{
  ( theWrappedObject->setMessageHandler(handler));
}

void PythonQtWrapper_QXmlSchemaValidator::setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager)
{
  ( theWrappedObject->setNetworkAccessManager(networkmanager));
}

void PythonQtWrapper_QXmlSchemaValidator::setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema)
{
  ( theWrappedObject->setSchema(schema));
}

void PythonQtWrapper_QXmlSchemaValidator::setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver)
{
  ( theWrappedObject->setUriResolver(resolver));
}

const QAbstractUriResolver*  PythonQtWrapper_QXmlSchemaValidator::uriResolver(QXmlSchemaValidator* theWrappedObject) const
{
  return ( theWrappedObject->uriResolver());
}

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri) const
{
  return ( theWrappedObject->validate(source, documentUri));
}

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri) const
{
  return ( theWrappedObject->validate(data, documentUri));
}

bool  PythonQtWrapper_QXmlSchemaValidator::validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const
{
  return ( theWrappedObject->validate(source));
}



PythonQtShell_QXmlSerializer::~PythonQtShell_QXmlSerializer() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QXmlSerializer::atomicValue(const QVariant&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("atomicValue");
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
  QXmlSerializer::atomicValue(value0);
}
void PythonQtShell_QXmlSerializer::attribute(const QXmlName&  name0, const QStringRef&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("attribute");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QStringRef&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&name0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlSerializer::attribute(name0, value1);
}
void PythonQtShell_QXmlSerializer::characters(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("characters");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  QXmlSerializer::characters(value0);
}
void PythonQtShell_QXmlSerializer::comment(const QString&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("comment");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QString&"};
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
  QXmlSerializer::comment(value0);
}
void PythonQtShell_QXmlSerializer::endDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endDocument");
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
  QXmlSerializer::endDocument();
}
void PythonQtShell_QXmlSerializer::endElement()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endElement");
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
  QXmlSerializer::endElement();
}
void PythonQtShell_QXmlSerializer::endOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("endOfSequence");
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
  QXmlSerializer::endOfSequence();
}
void PythonQtShell_QXmlSerializer::namespaceBinding(const QXmlName&  nb0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("namespaceBinding");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&nb0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlSerializer::namespaceBinding(nb0);
}
void PythonQtShell_QXmlSerializer::processingInstruction(const QXmlName&  name0, const QString&  value1)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("processingInstruction");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&name0, (void*)&value1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlSerializer::processingInstruction(name0, value1);
}
void PythonQtShell_QXmlSerializer::startDocument()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startDocument");
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
  QXmlSerializer::startDocument();
}
void PythonQtShell_QXmlSerializer::startElement(const QXmlName&  name0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startElement");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QXmlName&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name0};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  } else {
    PyErr_Clear();
  }
}
  QXmlSerializer::startElement(name0);
}
void PythonQtShell_QXmlSerializer::startOfSequence()
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("startOfSequence");
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
  QXmlSerializer::startOfSequence();
}
void PythonQtShell_QXmlSerializer::whitespaceOnly(const QStringRef&  value0)
{
if (_wrapper && (((PyObject*)_wrapper)->ob_refcnt > 0)) {
  static PyObject* name = PyString_FromString("whitespaceOnly");
  PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
  if (obj) {
    static const char* argumentList[] ={"" , "const QStringRef&"};
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
  QXmlSerializer::whitespaceOnly(value0);
}
QXmlSerializer* PythonQtWrapper_QXmlSerializer::new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new PythonQtShell_QXmlSerializer(query, outputDevice); }

void PythonQtWrapper_QXmlSerializer::atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_atomicValue(value));
}

void PythonQtWrapper_QXmlSerializer::attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_attribute(name, value));
}

void PythonQtWrapper_QXmlSerializer::characters(QXmlSerializer* theWrappedObject, const QStringRef&  value)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_characters(value));
}

const QTextCodec*  PythonQtWrapper_QXmlSerializer::codec(QXmlSerializer* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

void PythonQtWrapper_QXmlSerializer::comment(QXmlSerializer* theWrappedObject, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_comment(value));
}

void PythonQtWrapper_QXmlSerializer::endDocument(QXmlSerializer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_endDocument());
}

void PythonQtWrapper_QXmlSerializer::endElement(QXmlSerializer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_endElement());
}

void PythonQtWrapper_QXmlSerializer::endOfSequence(QXmlSerializer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_endOfSequence());
}

void PythonQtWrapper_QXmlSerializer::namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_namespaceBinding(nb));
}

QIODevice*  PythonQtWrapper_QXmlSerializer::outputDevice(QXmlSerializer* theWrappedObject) const
{
  return ( theWrappedObject->outputDevice());
}

void PythonQtWrapper_QXmlSerializer::processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_processingInstruction(name, value));
}

void PythonQtWrapper_QXmlSerializer::setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QXmlSerializer::startDocument(QXmlSerializer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_startDocument());
}

void PythonQtWrapper_QXmlSerializer::startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_startElement(name));
}

void PythonQtWrapper_QXmlSerializer::startOfSequence(QXmlSerializer* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QXmlSerializer*)theWrappedObject)->promoted_startOfSequence());
}


