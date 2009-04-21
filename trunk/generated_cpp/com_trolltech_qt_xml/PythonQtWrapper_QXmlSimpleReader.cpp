#include "PythonQtWrapper_QXmlSimpleReader.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qxml.h>

QXmlDTDHandler*  PythonQtShell_QXmlSimpleReader::DTDHandler() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "DTDHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "DTDHandler(QXmlSimpleReader*)");
      QXmlDTDHandler*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlDTDHandler* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::DTDHandler();
}
QXmlContentHandler*  PythonQtShell_QXmlSimpleReader::contentHandler() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contentHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "contentHandler(QXmlSimpleReader*)");
      QXmlContentHandler*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlContentHandler* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::contentHandler();
}
QXmlDeclHandler*  PythonQtShell_QXmlSimpleReader::declHandler() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "declHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "declHandler(QXmlSimpleReader*)");
      QXmlDeclHandler*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlDeclHandler* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::declHandler();
}
QXmlEntityResolver*  PythonQtShell_QXmlSimpleReader::entityResolver() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "entityResolver");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "entityResolver(QXmlSimpleReader*)");
      QXmlEntityResolver*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlEntityResolver* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::entityResolver();
}
QXmlErrorHandler*  PythonQtShell_QXmlSimpleReader::errorHandler() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "errorHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "errorHandler(QXmlSimpleReader*)");
      QXmlErrorHandler*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlErrorHandler* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::errorHandler();
}
bool  PythonQtShell_QXmlSimpleReader::feature(const QString&  name, bool*  ok) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "feature");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "feature(QXmlSimpleReader*,const QString& ,bool* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&name, (void*)&ok};
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
  return QXmlSimpleReader::feature(name, ok);
}
bool  PythonQtShell_QXmlSimpleReader::hasFeature(const QString&  name) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasFeature");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "hasFeature(QXmlSimpleReader*,const QString& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&name};
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
  return QXmlSimpleReader::hasFeature(name);
}
bool  PythonQtShell_QXmlSimpleReader::hasProperty(const QString&  name) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasProperty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "hasProperty(QXmlSimpleReader*,const QString& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&name};
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
  return QXmlSimpleReader::hasProperty(name);
}
QXmlLexicalHandler*  PythonQtShell_QXmlSimpleReader::lexicalHandler() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "lexicalHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "lexicalHandler(QXmlSimpleReader*)");
      QXmlLexicalHandler*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QXmlLexicalHandler* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::lexicalHandler();
}
bool  PythonQtShell_QXmlSimpleReader::parse(const QXmlInputSource&  input)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parse");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "parse(QXmlSimpleReader*,const QXmlInputSource& )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&input};
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
  return QXmlSimpleReader::parse(input);
}
bool  PythonQtShell_QXmlSimpleReader::parse(const QXmlInputSource*  input)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parse");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "parse(QXmlSimpleReader*,const QXmlInputSource* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&input};
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
  return QXmlSimpleReader::parse(input);
}
bool  PythonQtShell_QXmlSimpleReader::parse(const QXmlInputSource*  input, bool  incremental)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parse");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "parse(QXmlSimpleReader*,const QXmlInputSource* ,bool )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&input, (void*)&incremental};
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
  return QXmlSimpleReader::parse(input, incremental);
}
bool  PythonQtShell_QXmlSimpleReader::parseContinue()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "parseContinue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "parseContinue(QXmlSimpleReader*)");
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
  return QXmlSimpleReader::parseContinue();
}
void*  PythonQtShell_QXmlSimpleReader::property(const QString&  name, bool*  ok) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "property");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "property(QXmlSimpleReader*,const QString& ,bool* )");
      void*  returnValue;
    void* args[3] = {NULL, (void*)&name, (void*)&ok};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((void* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QXmlSimpleReader::property(name, ok);
}
void PythonQtShell_QXmlSimpleReader::setContentHandler(QXmlContentHandler*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setContentHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setContentHandler(QXmlSimpleReader*,QXmlContentHandler* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setContentHandler(handler);
}
void PythonQtShell_QXmlSimpleReader::setDTDHandler(QXmlDTDHandler*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setDTDHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setDTDHandler(QXmlSimpleReader*,QXmlDTDHandler* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setDTDHandler(handler);
}
void PythonQtShell_QXmlSimpleReader::setDeclHandler(QXmlDeclHandler*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setDeclHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setDeclHandler(QXmlSimpleReader*,QXmlDeclHandler* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setDeclHandler(handler);
}
void PythonQtShell_QXmlSimpleReader::setEntityResolver(QXmlEntityResolver*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setEntityResolver");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setEntityResolver(QXmlSimpleReader*,QXmlEntityResolver* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setEntityResolver(handler);
}
void PythonQtShell_QXmlSimpleReader::setErrorHandler(QXmlErrorHandler*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setErrorHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setErrorHandler(QXmlSimpleReader*,QXmlErrorHandler* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setErrorHandler(handler);
}
void PythonQtShell_QXmlSimpleReader::setFeature(const QString&  name, bool  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setFeature");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setFeature(QXmlSimpleReader*,const QString& ,bool )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setFeature(name, value);
}
void PythonQtShell_QXmlSimpleReader::setLexicalHandler(QXmlLexicalHandler*  handler)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setLexicalHandler");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setLexicalHandler(QXmlSimpleReader*,QXmlLexicalHandler* )");
    void* args[2] = {NULL, (void*)&handler};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setLexicalHandler(handler);
}
void PythonQtShell_QXmlSimpleReader::setProperty(const QString&  name, void*  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setProperty");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSimpleReader::staticMetaObject,
      "setProperty(QXmlSimpleReader*,const QString& ,void* )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSimpleReader::setProperty(name, value);
}
QXmlSimpleReader* PythonQtWrapper_QXmlSimpleReader::new_QXmlSimpleReader()
{ 
return new PythonQtShell_QXmlSimpleReader(); }

QXmlDeclHandler*  PythonQtWrapper_QXmlSimpleReader::declHandler(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_declHandler();
}

void PythonQtWrapper_QXmlSimpleReader::setEntityResolver(QXmlSimpleReader* theWrappedObject, QXmlEntityResolver*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setEntityResolver(handler);
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource&  input)
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_parse(input);
}

void PythonQtWrapper_QXmlSimpleReader::setLexicalHandler(QXmlSimpleReader* theWrappedObject, QXmlLexicalHandler*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setLexicalHandler(handler);
}

QXmlLexicalHandler*  PythonQtWrapper_QXmlSimpleReader::lexicalHandler(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_lexicalHandler();
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input, bool  incremental)
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_parse(input, incremental);
}

bool  PythonQtWrapper_QXmlSimpleReader::parseContinue(QXmlSimpleReader* theWrappedObject)
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_parseContinue();
}

void*  PythonQtWrapper_QXmlSimpleReader::property(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_property(name, ok);
}

void PythonQtWrapper_QXmlSimpleReader::setFeature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool  value)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setFeature(name, value);
}

bool  PythonQtWrapper_QXmlSimpleReader::feature(QXmlSimpleReader* theWrappedObject, const QString&  name, bool*  ok) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_feature(name, ok);
}

void PythonQtWrapper_QXmlSimpleReader::setProperty(QXmlSimpleReader* theWrappedObject, const QString&  name, void*  value)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setProperty(name, value);
}

QXmlContentHandler*  PythonQtWrapper_QXmlSimpleReader::contentHandler(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_contentHandler();
}

QXmlEntityResolver*  PythonQtWrapper_QXmlSimpleReader::entityResolver(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_entityResolver();
}

bool  PythonQtWrapper_QXmlSimpleReader::hasProperty(QXmlSimpleReader* theWrappedObject, const QString&  name) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_hasProperty(name);
}

void PythonQtWrapper_QXmlSimpleReader::setErrorHandler(QXmlSimpleReader* theWrappedObject, QXmlErrorHandler*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setErrorHandler(handler);
}

QXmlDTDHandler*  PythonQtWrapper_QXmlSimpleReader::DTDHandler(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_DTDHandler();
}

QXmlErrorHandler*  PythonQtWrapper_QXmlSimpleReader::errorHandler(QXmlSimpleReader* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_errorHandler();
}

bool  PythonQtWrapper_QXmlSimpleReader::parse(QXmlSimpleReader* theWrappedObject, const QXmlInputSource*  input)
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_parse(input);
}

void PythonQtWrapper_QXmlSimpleReader::setContentHandler(QXmlSimpleReader* theWrappedObject, QXmlContentHandler*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setContentHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setDTDHandler(QXmlSimpleReader* theWrappedObject, QXmlDTDHandler*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setDTDHandler(handler);
}

void PythonQtWrapper_QXmlSimpleReader::setDeclHandler(QXmlSimpleReader* theWrappedObject, QXmlDeclHandler*  handler)
{
 ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_setDeclHandler(handler);
}

bool  PythonQtWrapper_QXmlSimpleReader::hasFeature(QXmlSimpleReader* theWrappedObject, const QString&  name) const
{
return  ((PythonQtPublicPromoter_QXmlSimpleReader*)theWrappedObject)->promoted_hasFeature(name);
}

