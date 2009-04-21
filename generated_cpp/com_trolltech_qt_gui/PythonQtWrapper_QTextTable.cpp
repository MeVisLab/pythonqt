#include "PythonQtWrapper_QTextTable.h"

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
#include <qtexttable.h>

void PythonQtShell_QTextTable::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextTable::staticMetaObject,
      "childEvent(QTextTable*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextTable::childEvent(arg__1);
}
void PythonQtShell_QTextTable::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextTable::staticMetaObject,
      "customEvent(QTextTable*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextTable::customEvent(arg__1);
}
bool  PythonQtShell_QTextTable::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextTable::staticMetaObject,
      "event(QTextTable*,QEvent* )");
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
  return QTextTable::event(arg__1);
}
bool  PythonQtShell_QTextTable::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextTable::staticMetaObject,
      "eventFilter(QTextTable*,QObject* ,QEvent* )");
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
  return QTextTable::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextTable::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QTextTable::staticMetaObject,
      "timerEvent(QTextTable*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QTextTable::timerEvent(arg__1);
}
QTextTable* PythonQtWrapper_QTextTable::new_QTextTable(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextTable(doc); }

int  PythonQtWrapper_QTextTable::columns(QTextTable* theWrappedObject) const
{
return  (*theWrappedObject).columns();
}

void PythonQtWrapper_QTextTable::insertRows(QTextTable* theWrappedObject, int  pos, int  num)
{
 (*theWrappedObject).insertRows(pos, num);
}

QTextCursor  PythonQtWrapper_QTextTable::rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return  (*theWrappedObject).rowEnd(c);
}

void PythonQtWrapper_QTextTable::setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format)
{
 (*theWrappedObject).setFormat(format);
}

QTextTableFormat  PythonQtWrapper_QTextTable::format(QTextTable* theWrappedObject) const
{
return  (*theWrappedObject).format();
}

void PythonQtWrapper_QTextTable::insertColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
 (*theWrappedObject).insertColumns(pos, num);
}

void PythonQtWrapper_QTextTable::resize(QTextTable* theWrappedObject, int  rows, int  cols)
{
 (*theWrappedObject).resize(rows, cols);
}

QTextCursor  PythonQtWrapper_QTextTable::rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return  (*theWrappedObject).rowStart(c);
}

void PythonQtWrapper_QTextTable::splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
 (*theWrappedObject).splitCell(row, col, numRows, numCols);
}

void PythonQtWrapper_QTextTable::removeColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
 (*theWrappedObject).removeColumns(pos, num);
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  position) const
{
return  (*theWrappedObject).cellAt(position);
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  row, int  col) const
{
return  (*theWrappedObject).cellAt(row, col);
}

void PythonQtWrapper_QTextTable::removeRows(QTextTable* theWrappedObject, int  pos, int  num)
{
 (*theWrappedObject).removeRows(pos, num);
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
 (*theWrappedObject).mergeCells(row, col, numRows, numCols);
}

int  PythonQtWrapper_QTextTable::rows(QTextTable* theWrappedObject) const
{
return  (*theWrappedObject).rows();
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
return  (*theWrappedObject).cellAt(c);
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor)
{
 (*theWrappedObject).mergeCells(cursor);
}

