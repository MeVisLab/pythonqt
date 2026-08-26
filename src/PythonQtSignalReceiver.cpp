/*
 *
 *  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtSignalReceiver.cpp
// \author  Florian Link
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtSignalReceiver.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"
#include "PythonQtConversion.h"
#include <QMetaObject>
#include <QMetaMethod>

void PythonQtSignalTarget::call(void** arguments) const
{
  PYTHONQT_GIL_SCOPE
  PyObject* result = call(_callable, methodInfo(), arguments);
  if (result) {
    PythonQt::priv()->checkAndRunCoroutine(result);
    Py_DECREF(result);
  }
}

PyObject* PythonQtSignalTarget::call(PyObject* callable, const PythonQtMethodInfo* methodInfos, void** arguments,
  bool skipFirstArgumentOfMethodInfo)
{
  Q_UNUSED(skipFirstArgumentOfMethodInfo)

  // Note: we check if the callable is a PyFunctionObject and has a fixed number of arguments
  // if that is the case, we only pass these arguments to python and skip the additional arguments from the signal

  int numPythonArgs = -1;
  if (PyFunction_Check(callable)) {
    PyObject* o = callable;
    PyFunctionObject* func = (PyFunctionObject*)o;
    PyCodeObject* code = (PyCodeObject*)func->func_code;
    if (!(code->co_flags & CO_VARARGS)) {
      numPythonArgs = code->co_argcount;
    } else {
      // variable numbers of arguments allowed
    }
  } else if (PyMethod_Check(callable)) {
    PyObject* o = callable;
    PyMethodObject* method = (PyMethodObject*)o;
    if (PyFunction_Check(method->im_func)) {
      PyFunctionObject* func = (PyFunctionObject*)method->im_func;
      PyCodeObject* code = (PyCodeObject*)func->func_code;
      if (!(code->co_flags & CO_VARARGS)) {
        numPythonArgs = code->co_argcount - 1; // we subtract one because the first is "self"
      } else {
        // variable numbers of arguments allowed
      }
    }
  }

  const PythonQtMethodInfo* m = methodInfos;
  // parameterCount includes return value:
  int count = m->parameterCount();
  if (numPythonArgs != -1) {
    if (count > numPythonArgs + 1) {
      // take less arguments
      count = numPythonArgs + 1;
    }
  }

  PyObject* pargs = nullptr;
  if (count > 1) {
    pargs = PyTuple_New(count - 1);
  }
  bool err = false;
  // transform Qt values to Python
  const QList<PythonQtMethodInfo::ParameterInfo>& params = m->parameters();
  for (int i = 1; i < count; i++) {
    const PythonQtMethodInfo::ParameterInfo& param = params.at(i);
    PyObject* arg = PythonQtConv::ConvertQtValueToPython(param, arguments[i]);
    if (arg && (param.pointerCount == 1) && (param.name == "PyObject")) {
      // ConvertQtValueToPython does not ref-count the PyObject, so we have to
      // do it ourselves...
      Py_INCREF(arg);
    }
    if (arg) {
      // steals reference, no unref
      PyTuple_SetItem(pargs, i - 1, arg);
    } else {
      err = true;
      break;
    }
  }

  PyObject* result = nullptr;
  if (!err) {
    PyErr_Clear();
    result = PyObject_CallObject(callable, pargs);
    if (result) {
      // ok
    } else {
      PythonQt::self()->handleError();
    }
  }
  if (pargs) {
    // free the arguments again
    Py_DECREF(pargs);
  }

  return result;
}

bool PythonQtSignalTarget::isSame(PyObject* callable) const
{
  return PyObject_RichCompareBool(callable, _callable, Py_EQ);
}

//------------------------------------------------------------------------------

int PythonQtSignalReceiver::_slotCount = 0;

PythonQtSignalReceiver::PythonQtSignalReceiver(QObject* sender, int signalId, PyObject* callable)
  : _sender(sender)
  , _signalId(signalId)
  , _alreadyRemoved(false)
{
  static int destroyedSignalId = []() -> int {
    int id = QObject::staticMetaObject.indexOfSignal("destroyed(QObject*)");
    if (id == -1) {
      std::cerr << "PythonQt: could not find destroyed signal index, should never happen!" << std::endl;
    }
    // while we are already thread-safe: also determine _slotCount
    _slotCount = PythonQtSignalReceiver::staticMetaObject.methodOffset();
    return id;
  }();

  // fetch the class info for object, since we will need it for correct enum resolution in signals
  auto metaObject = _sender->metaObject();
  PythonQtClassInfo* senderClassInfo = PythonQt::priv()->getClassInfo(metaObject);
  if (!senderClassInfo || !senderClassInfo->isQObject()) {
    PythonQt::self()->registerClass(metaObject);
    senderClassInfo = PythonQt::priv()->getClassInfo(metaObject);
  }
  // force decorator/enum creation
  senderClassInfo->decorator();

  QMetaMethod meta = _sender->metaObject()->method(_signalId);
  const PythonQtMethodInfo* signalInfo = PythonQtMethodInfo::getCachedMethodInfo(meta, senderClassInfo);
  _target = PythonQtSignalTarget(signalInfo, callable);
  // now connect to ourself with the next free slot id
  QMetaObject::connect(_sender, _signalId, this, _slotCount, Qt::AutoConnection, nullptr);
  // also connect to destroyed signal of sender, so we can remove the receiver accordingly
  // (but with QueuedConnection, in case the original connect is to the destroyed signal too,
  // so that the callable is guaranteed to be called before this receiver is destroyed!)
  QMetaObject::connect(_sender, destroyedSignalId, this, _slotCount + 1, Qt::QueuedConnection, nullptr);

  // Check if the callable is a method of a QObject instance:
  if (PyMethod_Check(callable)) {
    PyObject* instance = PyMethod_Self(callable);
    if (PyObject_TypeCheck(instance, &PythonQtInstanceWrapper_Type)) {
      PythonQtInstanceWrapper* typedInstance = (PythonQtInstanceWrapper*)instance;
      if (!typedInstance->_wrappedPtr) {
        // It's a QObject-derived class
        QObject* targetObj = typedInstance->_obj;
        // move the receiver to the same thread as the "self" of the callable
        moveToThread(targetObj->thread());
        // make the receiver a child of this object, so it will automatically change threads with it,
        // and also will be deleted with it
        setParent(targetObj);
      }
    }
  }
}

PythonQtSignalReceiver::~PythonQtSignalReceiver()
{
  if (!_alreadyRemoved) {
    // remove from list of all receiver objects
    PythonQt::self()->priv()->removeSignalReceiver(this);
  }
}

bool PythonQtSignalReceiver::isSameCallable(PyObject* callable) const
{
  return _target.isSame(callable);
}

int PythonQtSignalReceiver::getSignalIndex(QObject* sender, const char* signal)
{
  int sigId = sender->metaObject()->indexOfSignal(signal + 1);
  if (sigId < 0) {
    QByteArray tmpSig = QMetaObject::normalizedSignature(signal + 1);
    sigId = sender->metaObject()->indexOfSignal(tmpSig);
  }
  return sigId;
}

void PythonQtSignalReceiver::markAsRemoved()
{
  _alreadyRemoved = true;
  // disconnect from potential parent, to prevent situations where the receiver is deleted recursively
  // a second time via the connected callable, whose refcount might go to 0 in the destructor
  setParent(nullptr);
}

int PythonQtSignalReceiver::qt_metacall(QMetaObject::Call c, int id, void** arguments)
{
  //  mlabDebugConst("PythonQt", "PythonQtSignalReceiver invoke " << _sender->className() << " " << _sender->name() << " " << id);
  if (c != QMetaObject::InvokeMetaMethod) {
    return QObject::qt_metacall(c, id, arguments);
  }

  if (!_alreadyRemoved) {
    if (id == _slotCount) {
      _target.call(arguments);
    } else if (id == _slotCount + 1) {
      // disconnect from potential parent, to prevent situations where the receiver is deleted recursively
      // a second time via the connected callable, whose refcount might go to 0 in the destructor
      setParent(nullptr);
      // sender was destroyed
      delete this;
    }
  }
  return 0;
}
