#include "PythonQtWrapper_QItemEditorFactory.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qitemeditorfactory.h>
#include <qwidget.h>

QWidget*  PythonQtShell_QItemEditorFactory::createEditor(QVariant::Type  type, QWidget*  parent) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createEditor");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWidget*" , "QVariant::Type" , "QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QWidget* returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createEditor", methodInfo, result);
        } else {
          returnValue = *((QWidget**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemEditorFactory::createEditor(type, parent);
}
QByteArray  PythonQtShell_QItemEditorFactory::valuePropertyName(QVariant::Type  type) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "valuePropertyName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QByteArray" , "QVariant::Type"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QByteArray returnValue;
    void* args[2] = {NULL, (void*)&type};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("valuePropertyName", methodInfo, result);
        } else {
          returnValue = *((QByteArray*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QItemEditorFactory::valuePropertyName(type);
}
QItemEditorFactory* PythonQtWrapper_QItemEditorFactory::new_QItemEditorFactory()
{ 
return new PythonQtShell_QItemEditorFactory(); }

void PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_setDefaultFactory(QItemEditorFactory*  factory)
{
  (QItemEditorFactory::setDefaultFactory(factory));
}

const QItemEditorFactory*  PythonQtWrapper_QItemEditorFactory::static_QItemEditorFactory_defaultFactory()
{
  return (QItemEditorFactory::defaultFactory());
}

void PythonQtWrapper_QItemEditorFactory::registerEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QItemEditorCreatorBase*  creator)
{
  ( theWrappedObject->registerEditor(type, creator));
}

QByteArray  PythonQtWrapper_QItemEditorFactory::valuePropertyName(QItemEditorFactory* theWrappedObject, QVariant::Type  type) const
{
  return ( ((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->promoted_valuePropertyName(type));
}

QWidget*  PythonQtWrapper_QItemEditorFactory::createEditor(QItemEditorFactory* theWrappedObject, QVariant::Type  type, QWidget*  parent) const
{
  return ( ((PythonQtPublicPromoter_QItemEditorFactory*)theWrappedObject)->promoted_createEditor(type, parent));
}

