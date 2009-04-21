#include "PythonQtWrapper_QRunnable.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>

void PythonQtShell_QRunnable::run()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "run");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QRunnable::staticMetaObject,
      "run(QRunnable*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
QRunnable* PythonQtWrapper_QRunnable::new_QRunnable()
{ 
return new PythonQtShell_QRunnable(); }

bool  PythonQtWrapper_QRunnable::autoDelete(QRunnable* theWrappedObject) const
{
return  theWrappedObject->autoDelete();
}

void PythonQtWrapper_QRunnable::setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete)
{
 theWrappedObject->setAutoDelete(_autoDelete);
}

