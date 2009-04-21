#include "PythonQtWrapper_QTextList.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>

void PythonQtShell_QTextList::blockFormatChanged(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockFormatChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "blockFormatChanged(QTextList*,const QTextBlock& )");
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockFormatChanged(block);
}
void PythonQtShell_QTextList::blockInserted(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "blockInserted(QTextList*,const QTextBlock& )");
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockInserted(block);
}
void PythonQtShell_QTextList::blockRemoved(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "blockRemoved(QTextList*,const QTextBlock& )");
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::blockRemoved(block);
}
void PythonQtShell_QTextList::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "childEvent(QTextList*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::childEvent(arg__1);
}
void PythonQtShell_QTextList::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "customEvent(QTextList*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::customEvent(arg__1);
}
bool  PythonQtShell_QTextList::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "event(QTextList*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
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
  return QTextList::event(arg__1);
}
bool  PythonQtShell_QTextList::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "eventFilter(QTextList*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
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
  return QTextList::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextList::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextList::staticMetaObject,
      "timerEvent(QTextList*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextList::timerEvent(arg__1);
}
QTextList* PythonQtWrapper_QTextList::new_QTextList(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextList(doc); }

void PythonQtWrapper_QTextList::add(QTextList* theWrappedObject, const QTextBlock&  block)
{
 (*theWrappedObject).add(block);
}

int  PythonQtWrapper_QTextList::itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
return  (*theWrappedObject).itemNumber(arg__1);
}

void PythonQtWrapper_QTextList::setFormat(QTextList* theWrappedObject, const QTextListFormat&  format)
{
 (*theWrappedObject).setFormat(format);
}

QString  PythonQtWrapper_QTextList::itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
return  (*theWrappedObject).itemText(arg__1);
}

QTextListFormat  PythonQtWrapper_QTextList::format(QTextList* theWrappedObject) const
{
return  (*theWrappedObject).format();
}

void PythonQtWrapper_QTextList::remove(QTextList* theWrappedObject, const QTextBlock&  arg__1)
{
 (*theWrappedObject).remove(arg__1);
}

int  PythonQtWrapper_QTextList::count(QTextList* theWrappedObject) const
{
return  (*theWrappedObject).count();
}

QTextBlock  PythonQtWrapper_QTextList::item(QTextList* theWrappedObject, int  i) const
{
return  (*theWrappedObject).item(i);
}

void PythonQtWrapper_QTextList::removeItem(QTextList* theWrappedObject, int  i)
{
 (*theWrappedObject).removeItem(i);
}

