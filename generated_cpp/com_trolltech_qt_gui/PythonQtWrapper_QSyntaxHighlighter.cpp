#include "PythonQtWrapper_QSyntaxHighlighter.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qlist.h>
#include <qobject.h>
#include <qsyntaxhighlighter.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextobject.h>

void PythonQtShell_QSyntaxHighlighter::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "childEvent(QSyntaxHighlighter*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSyntaxHighlighter::childEvent(arg__1);
}
void PythonQtShell_QSyntaxHighlighter::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "customEvent(QSyntaxHighlighter*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSyntaxHighlighter::customEvent(arg__1);
}
bool  PythonQtShell_QSyntaxHighlighter::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "event(QSyntaxHighlighter*,QEvent* )");
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
  return QSyntaxHighlighter::event(arg__1);
}
bool  PythonQtShell_QSyntaxHighlighter::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "eventFilter(QSyntaxHighlighter*,QObject* ,QEvent* )");
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
  return QSyntaxHighlighter::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QSyntaxHighlighter::highlightBlock(const QString&  text)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "highlightBlock");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "highlightBlock(QSyntaxHighlighter*,const QString& )");
    void* args[2] = {NULL, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_QSyntaxHighlighter::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QSyntaxHighlighter::staticMetaObject,
      "timerEvent(QSyntaxHighlighter*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QSyntaxHighlighter::timerEvent(arg__1);
}
QSyntaxHighlighter* PythonQtWrapper_QSyntaxHighlighter::new_QSyntaxHighlighter(QObject*  parent)
{ 
return new PythonQtShell_QSyntaxHighlighter(parent); }

QSyntaxHighlighter* PythonQtWrapper_QSyntaxHighlighter::new_QSyntaxHighlighter(QTextDocument*  parent)
{ 
return new PythonQtShell_QSyntaxHighlighter(parent); }

QSyntaxHighlighter* PythonQtWrapper_QSyntaxHighlighter::new_QSyntaxHighlighter(QTextEdit*  parent)
{ 
return new PythonQtShell_QSyntaxHighlighter(parent); }

QTextDocument*  PythonQtWrapper_QSyntaxHighlighter::document(QSyntaxHighlighter* theWrappedObject) const
{
return  (*theWrappedObject).document();
}

void PythonQtWrapper_QSyntaxHighlighter::setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc)
{
 (*theWrappedObject).setDocument(doc);
}

