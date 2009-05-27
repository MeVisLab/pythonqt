#include "PythonQtWrapper_QTextFrame.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QTextCursor>
#include <QTextFrame>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>

void PythonQtShell_QTextFrame::childEvent(QChildEvent*  arg__1)
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
  QTextFrame::childEvent(arg__1);
}
void PythonQtShell_QTextFrame::customEvent(QEvent*  arg__1)
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
  QTextFrame::customEvent(arg__1);
}
bool  PythonQtShell_QTextFrame::event(QEvent*  arg__1)
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
  return QTextFrame::event(arg__1);
}
bool  PythonQtShell_QTextFrame::eventFilter(QObject*  arg__1, QEvent*  arg__2)
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
  return QTextFrame::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextFrame::timerEvent(QTimerEvent*  arg__1)
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
  QTextFrame::timerEvent(arg__1);
}
QTextFrame* PythonQtWrapper_QTextFrame::new_QTextFrame(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextFrame(doc); }

void PythonQtWrapper_QTextFrame::setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format)
{
  ( theWrappedObject->setFrameFormat(format));
}

QTextFrame::iterator  PythonQtWrapper_QTextFrame::begin(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QTextFrameFormat  PythonQtWrapper_QTextFrame::frameFormat(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameFormat());
}

int  PythonQtWrapper_QTextFrame::lastPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

QTextCursor  PythonQtWrapper_QTextFrame::lastCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

QTextFrame*  PythonQtWrapper_QTextFrame::parentFrame(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

QTextFrame::iterator  PythonQtWrapper_QTextFrame::end(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextFrame::firstCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextFrame::firstPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QList<QTextFrame* >  PythonQtWrapper_QTextFrame::childFrames(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

