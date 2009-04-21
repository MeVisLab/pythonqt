#include "PythonQtWrapper_QXmlFormatter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qiodevice.h>
#include <qtextcodec.h>
#include <qxmlname.h>
#include <qxmlquery.h>

void PythonQtShell_QXmlFormatter::atomicValue(const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atomicValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "atomicValue(QXmlFormatter*,const QVariant& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::atomicValue(value);
}
void PythonQtShell_QXmlFormatter::attribute(const QXmlName&  name, const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "attribute");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "attribute(QXmlFormatter*,const QXmlName& ,const QStringRef& )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::attribute(name, value);
}
void PythonQtShell_QXmlFormatter::characters(const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "characters");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "characters(QXmlFormatter*,const QStringRef& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::characters(value);
}
void PythonQtShell_QXmlFormatter::comment(const QString&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "comment");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "comment(QXmlFormatter*,const QString& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::comment(value);
}
void PythonQtShell_QXmlFormatter::endDocument()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endDocument");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "endDocument(QXmlFormatter*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::endDocument();
}
void PythonQtShell_QXmlFormatter::endElement()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endElement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "endElement(QXmlFormatter*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::endElement();
}
void PythonQtShell_QXmlFormatter::endOfSequence()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endOfSequence");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "endOfSequence(QXmlFormatter*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::endOfSequence();
}
void PythonQtShell_QXmlFormatter::namespaceBinding(const QXmlName&  nb)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "namespaceBinding");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "namespaceBinding(QXmlFormatter*,const QXmlName& )");
    void* args[2] = {NULL, (void*)&nb};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::namespaceBinding(nb);
}
void PythonQtShell_QXmlFormatter::processingInstruction(const QXmlName&  name, const QString&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "processingInstruction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "processingInstruction(QXmlFormatter*,const QXmlName& ,const QString& )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::processingInstruction(name, value);
}
void PythonQtShell_QXmlFormatter::startDocument()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDocument");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "startDocument(QXmlFormatter*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::startDocument();
}
void PythonQtShell_QXmlFormatter::startElement(const QXmlName&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startElement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "startElement(QXmlFormatter*,const QXmlName& )");
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::startElement(name);
}
void PythonQtShell_QXmlFormatter::startOfSequence()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startOfSequence");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "startOfSequence(QXmlFormatter*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::startOfSequence();
}
void PythonQtShell_QXmlFormatter::whitespaceOnly(const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "whitespaceOnly");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlFormatter::staticMetaObject,
      "whitespaceOnly(QXmlFormatter*,const QStringRef& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlFormatter::whitespaceOnly(value);
}
QXmlFormatter* PythonQtWrapper_QXmlFormatter::new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new PythonQtShell_QXmlFormatter(query, outputDevice); }

void PythonQtWrapper_QXmlFormatter::attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_attribute(name, value);
}

void PythonQtWrapper_QXmlFormatter::endDocument(QXmlFormatter* theWrappedObject)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endDocument();
}

int  PythonQtWrapper_QXmlFormatter::indentationDepth(QXmlFormatter* theWrappedObject) const
{
return  theWrappedObject->indentationDepth();
}

void PythonQtWrapper_QXmlFormatter::endOfSequence(QXmlFormatter* theWrappedObject)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endOfSequence();
}

void PythonQtWrapper_QXmlFormatter::startOfSequence(QXmlFormatter* theWrappedObject)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startOfSequence();
}

void PythonQtWrapper_QXmlFormatter::setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth)
{
 theWrappedObject->setIndentationDepth(depth);
}

void PythonQtWrapper_QXmlFormatter::characters(QXmlFormatter* theWrappedObject, const QStringRef&  value)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_characters(value);
}

void PythonQtWrapper_QXmlFormatter::startDocument(QXmlFormatter* theWrappedObject)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startDocument();
}

void PythonQtWrapper_QXmlFormatter::processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_processingInstruction(name, value);
}

void PythonQtWrapper_QXmlFormatter::startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_startElement(name);
}

void PythonQtWrapper_QXmlFormatter::atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_atomicValue(value);
}

void PythonQtWrapper_QXmlFormatter::comment(QXmlFormatter* theWrappedObject, const QString&  value)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_comment(value);
}

void PythonQtWrapper_QXmlFormatter::endElement(QXmlFormatter* theWrappedObject)
{
 ((PythonQtPublicPromoter_QXmlFormatter*)theWrappedObject)->promoted_endElement();
}

