#include "PythonQtWrapper_QUndoCommand.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qundostack.h>

int  PythonQtShell_QUndoCommand::id() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "id");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QUndoCommand::staticMetaObject,
      "id(QUndoCommand*)");
      int  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((int *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QUndoCommand::id();
}
bool  PythonQtShell_QUndoCommand::mergeWith(const QUndoCommand*  other)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mergeWith");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QUndoCommand::staticMetaObject,
      "mergeWith(QUndoCommand*,const QUndoCommand* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&other};
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
  return QUndoCommand::mergeWith(other);
}
void PythonQtShell_QUndoCommand::redo()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "redo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QUndoCommand::staticMetaObject,
      "redo(QUndoCommand*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoCommand::redo();
}
void PythonQtShell_QUndoCommand::undo()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "undo");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QUndoCommand::staticMetaObject,
      "undo(QUndoCommand*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QUndoCommand::undo();
}
QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(parent); }

QUndoCommand* PythonQtWrapper_QUndoCommand::new_QUndoCommand(const QString&  text, QUndoCommand*  parent)
{ 
return new PythonQtShell_QUndoCommand(text, parent); }

void PythonQtWrapper_QUndoCommand::undo(QUndoCommand* theWrappedObject)
{
 ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_undo();
}

void PythonQtWrapper_QUndoCommand::setText(QUndoCommand* theWrappedObject, const QString&  text)
{
 theWrappedObject->setText(text);
}

QString  PythonQtWrapper_QUndoCommand::text(QUndoCommand* theWrappedObject) const
{
return  theWrappedObject->text();
}

bool  PythonQtWrapper_QUndoCommand::mergeWith(QUndoCommand* theWrappedObject, const QUndoCommand*  other)
{
return  ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_mergeWith(other);
}

void PythonQtWrapper_QUndoCommand::redo(QUndoCommand* theWrappedObject)
{
 ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_redo();
}

const QUndoCommand*  PythonQtWrapper_QUndoCommand::child(QUndoCommand* theWrappedObject, int  index) const
{
return  theWrappedObject->child(index);
}

int  PythonQtWrapper_QUndoCommand::childCount(QUndoCommand* theWrappedObject) const
{
return  theWrappedObject->childCount();
}

int  PythonQtWrapper_QUndoCommand::id(QUndoCommand* theWrappedObject) const
{
return  ((PythonQtPublicPromoter_QUndoCommand*)theWrappedObject)->promoted_id();
}

