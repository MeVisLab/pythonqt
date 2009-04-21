#include "PythonQtWrapper_QXmlSerializer.h"

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

void PythonQtShell_QXmlSerializer::atomicValue(const QVariant&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "atomicValue");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "atomicValue(QXmlSerializer*,const QVariant& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::atomicValue(value);
}
void PythonQtShell_QXmlSerializer::attribute(const QXmlName&  name, const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "attribute");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "attribute(QXmlSerializer*,const QXmlName& ,const QStringRef& )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::attribute(name, value);
}
void PythonQtShell_QXmlSerializer::characters(const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "characters");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "characters(QXmlSerializer*,const QStringRef& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::characters(value);
}
void PythonQtShell_QXmlSerializer::comment(const QString&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "comment");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "comment(QXmlSerializer*,const QString& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::comment(value);
}
void PythonQtShell_QXmlSerializer::endDocument()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endDocument");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "endDocument(QXmlSerializer*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::endDocument();
}
void PythonQtShell_QXmlSerializer::endElement()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endElement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "endElement(QXmlSerializer*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::endElement();
}
void PythonQtShell_QXmlSerializer::endOfSequence()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "endOfSequence");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "endOfSequence(QXmlSerializer*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::endOfSequence();
}
void PythonQtShell_QXmlSerializer::namespaceBinding(const QXmlName&  nb)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "namespaceBinding");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "namespaceBinding(QXmlSerializer*,const QXmlName& )");
    void* args[2] = {NULL, (void*)&nb};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::namespaceBinding(nb);
}
void PythonQtShell_QXmlSerializer::processingInstruction(const QXmlName&  name, const QString&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "processingInstruction");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "processingInstruction(QXmlSerializer*,const QXmlName& ,const QString& )");
    void* args[3] = {NULL, (void*)&name, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::processingInstruction(name, value);
}
void PythonQtShell_QXmlSerializer::startDocument()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startDocument");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "startDocument(QXmlSerializer*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::startDocument();
}
void PythonQtShell_QXmlSerializer::startElement(const QXmlName&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startElement");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "startElement(QXmlSerializer*,const QXmlName& )");
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::startElement(name);
}
void PythonQtShell_QXmlSerializer::startOfSequence()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "startOfSequence");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "startOfSequence(QXmlSerializer*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::startOfSequence();
}
void PythonQtShell_QXmlSerializer::whitespaceOnly(const QStringRef&  value)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "whitespaceOnly");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QXmlSerializer::staticMetaObject,
      "whitespaceOnly(QXmlSerializer*,const QStringRef& )");
    void* args[2] = {NULL, (void*)&value};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QXmlSerializer::whitespaceOnly(value);
}
QXmlSerializer* PythonQtWrapper_QXmlSerializer::new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice)
{ 
return new PythonQtShell_QXmlSerializer(query, outputDevice); }

void PythonQtWrapper_QXmlSerializer::attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value)
{
 (*theWrappedObject).attribute(name, value);
}

QIODevice*  PythonQtWrapper_QXmlSerializer::outputDevice(QXmlSerializer* theWrappedObject) const
{
return  (*theWrappedObject).outputDevice();
}

void PythonQtWrapper_QXmlSerializer::characters(QXmlSerializer* theWrappedObject, const QStringRef&  value)
{
 (*theWrappedObject).characters(value);
}

void PythonQtWrapper_QXmlSerializer::atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value)
{
 (*theWrappedObject).atomicValue(value);
}

void PythonQtWrapper_QXmlSerializer::startOfSequence(QXmlSerializer* theWrappedObject)
{
 (*theWrappedObject).startOfSequence();
}

const QTextCodec*  PythonQtWrapper_QXmlSerializer::codec(QXmlSerializer* theWrappedObject) const
{
return  (*theWrappedObject).codec();
}

void PythonQtWrapper_QXmlSerializer::setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec)
{
 (*theWrappedObject).setCodec(codec);
}

void PythonQtWrapper_QXmlSerializer::endDocument(QXmlSerializer* theWrappedObject)
{
 (*theWrappedObject).endDocument();
}

void PythonQtWrapper_QXmlSerializer::startDocument(QXmlSerializer* theWrappedObject)
{
 (*theWrappedObject).startDocument();
}

void PythonQtWrapper_QXmlSerializer::startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name)
{
 (*theWrappedObject).startElement(name);
}

void PythonQtWrapper_QXmlSerializer::endElement(QXmlSerializer* theWrappedObject)
{
 (*theWrappedObject).endElement();
}

void PythonQtWrapper_QXmlSerializer::endOfSequence(QXmlSerializer* theWrappedObject)
{
 (*theWrappedObject).endOfSequence();
}

void PythonQtWrapper_QXmlSerializer::processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value)
{
 (*theWrappedObject).processingInstruction(name, value);
}

void PythonQtWrapper_QXmlSerializer::comment(QXmlSerializer* theWrappedObject, const QString&  value)
{
 (*theWrappedObject).comment(value);
}

void PythonQtWrapper_QXmlSerializer::namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb)
{
 (*theWrappedObject).namespaceBinding(nb);
}

