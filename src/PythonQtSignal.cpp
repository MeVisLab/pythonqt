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
// \file    PythonQtSignal.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2012-02
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtSignal.h"
#include "PythonQtInstanceWrapper.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMisc.h"
#include "PythonQtConversion.h"
#include "PythonQtSlot.h"

#include <iostream>

#include <exception>
#include <stdexcept>

#include <QByteArray>

//-----------------------------------------------------------------------------------

static PythonQtSignalFunctionObject* PythonQtSignal_free_list = nullptr;

PyObject* PythonQtSignalFunction_Call(PyObject* func, PyObject* args, PyObject* kw)
{
  PythonQtSignalFunctionObject* f = (PythonQtSignalFunctionObject*)func;
  return PythonQtMemberFunction_Call(f->m_ml, f->m_self, args, kw);
}

PyObject* PythonQtSignalFunction_tpNew(PyTypeObject* subtype, PyObject* args, PyObject* kwds)
{
  Q_UNUSED(subtype)
  Q_UNUSED(args)
  Q_UNUSED(kwds)
  return PythonQtSignalFunction_New(nullptr, nullptr, nullptr);
}

PyObject* PythonQtSignalFunction_New(PythonQtSlotInfo* ml, PyObject* self, PyObject* module)
{
  PythonQtSignalFunctionObject* op;
  op = PythonQtSignal_free_list;
  if (op != nullptr) {
    PythonQtSignal_free_list = (PythonQtSignalFunctionObject*)(op->m_self);
    PyObject_INIT(op, &PythonQtSignalFunction_Type);
  } else {
    op = PyObject_GC_New(PythonQtSignalFunctionObject, &PythonQtSignalFunction_Type);
    if (op == nullptr)
      return nullptr;
  }
  op->_dynamicInfo = nullptr;
  op->m_ml = ml;
  Py_XINCREF(self);
  op->m_self = self;
  Py_XINCREF(module);
  op->m_module = module;
  PyObject_GC_Track(op);
  return (PyObject*)op;
}

/* Methods (the standard built-in methods, that is) */

static void meth_dealloc(PyObject* o)
{
  PyObject_GC_UnTrack(o);
  auto m = reinterpret_cast<PythonQtSignalFunctionObject*>(o);
  if (m->_dynamicInfo) {
    delete m->_dynamicInfo;
    m->_dynamicInfo = nullptr;
  }
  Py_XDECREF(m->m_self);
  Py_XDECREF(m->m_module);
  m->m_self = (PyObject*)PythonQtSignal_free_list;
  PythonQtSignal_free_list = m;
}

static PyObject* meth_get__doc__(PythonQtSignalFunctionObject* /*m*/, void* /*closure*/)
{
  Py_RETURN_NONE;
}

static PyObject* meth_get__name__(PythonQtSignalFunctionObject* m, void* /*closure*/)
{
  if (m->m_ml) {
    return PyUnicode_FromString(m->m_ml->signature());
  } else {
    return PyUnicode_FromString("Signal");
  }
}

static int meth_traverse(PythonQtSignalFunctionObject* m, visitproc visit, void* arg)
{
  int err;
  if (m->m_self != nullptr) {
    err = visit(m->m_self, arg);
    if (err)
      return err;
  }
  if (m->m_module != nullptr) {
    err = visit(m->m_module, arg);
    if (err)
      return err;
  }
  return 0;
}

static PyObject* meth_get__self__(PythonQtSignalFunctionObject* m, void* /*closure*/)
{
  PyObject* self;
  self = m->m_self;
  if (self == nullptr)
    self = Py_None;
  Py_INCREF(self);
  return self;
}

static PyGetSetDef meth_getsets[] = {
  {const_cast<char*>("__doc__"), (getter)meth_get__doc__, nullptr, nullptr},
  {const_cast<char*>("__name__"), (getter)meth_get__name__, nullptr, nullptr},
  {const_cast<char*>("__self__"), (getter)meth_get__self__, nullptr, nullptr},
  {nullptr, nullptr, nullptr, nullptr},
};

#if PY_MAJOR_VERSION == 2 && PY_MINOR_VERSION < 6
  #define PY_WRITE_RESTRICTED WRITE_RESTRICTED
#endif

#define OFF(x) offsetof(PythonQtSignalFunctionObject, x)

static PyMemberDef meth_members[] = {{const_cast<char*>("__module__"), T_OBJECT, OFF(m_module), PY_WRITE_RESTRICTED},
  {nullptr}};

int PythonQtSignalFunction_init(PyObject* object, PyObject* args, PyObject* kw)
{
  Q_UNUSED(kw)
  PythonQtSignalFunctionObject* self = (PythonQtSignalFunctionObject*)object;
  self->_dynamicInfo = new PythonQtDynamicSignalInfo();

  QList<QByteArray> argList;
  Py_ssize_t argc = PyTuple_Size(args);
  for (Py_ssize_t i = 0; i < argc; i++) {
    PyObject* argType = PyTuple_GET_ITEM(args, i);
    if (!PythonQtConv::isStringType(argType->ob_type) && PySequence_Check(argType)) {
      // it is not a string and a sequence, so it defines an overload
      int count = PySequence_Size(argType);
      if (count >= 0) {
        QList<QByteArray> localArgList;
        PyObject* value;
        for (int i = 0; i < count; i++) {
          value = PySequence_GetItem(argType, i);

          QByteArray typeName = PythonQtConv::getCPPTypeName(value);
          if (!typeName.isEmpty()) {
            localArgList << typeName;
          } else {
            PyErr_Format(PyExc_TypeError, "Unknown Signal argument type: %s", value->ob_type->tp_name);
            return -1;
          }
          Py_XDECREF(value);
        }
        self->_dynamicInfo->signatures << localArgList.join(",");
      }
    } else {
      // normal signature (not given as overload sequences)
      QByteArray typeName = PythonQtConv::getCPPTypeName(argType);
      if (!typeName.isEmpty()) {
        argList << typeName;
      } else {
        PyErr_Format(PyExc_TypeError, "Unknown Signal argument type: %s", argType->ob_type->tp_name);
        return -1;
      }
    }
  }
  if (!argList.isEmpty()) {
    self->_dynamicInfo->signatures << argList.join(",");
  }

  if (self->_dynamicInfo->signatures.isEmpty()) {
    // add empty signature
    self->_dynamicInfo->signatures << "";
  }
  return 1;
}

static PyObject* PythonQtSignalFunction_parameterTypes(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_parameterTypes(type->m_ml);
}

static PyObject* PythonQtSignalFunction_parameterNames(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_parameterNames(type->m_ml);
}

static PyObject* PythonQtSignalFunction_typeName(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_typeName(type->m_ml);
}

// Find out if we can connect directly to the given Python object, without creating a separate receiver.
// If yes, provide target object and signature for the connect call.
static bool extractSignalTarget(PyObject* object, QObject*& targetObj, QByteArray& targetSignature)
{
  static PyObject* qtSlots = PyUnicode_FromString("_qtSlots");
  if (PyObject_TypeCheck(object, &PythonQtSignalFunction_Type)) {
    PythonQtSignalFunctionObject* type = (PythonQtSignalFunctionObject*)object;
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*)type->m_self;
    if (self->_obj) {
      // connecting to another signal
      targetObj = self->_obj;
      targetSignature = QByteArray("2") + type->m_ml->signature();
      return true;
    }
  } else if (PyMethod_Check(object)) {
    PyObject* instance = PyMethod_Self(object);
    if (PyObject_TypeCheck(instance, &PythonQtInstanceWrapper_Type)) {
      PythonQtInstanceWrapper* typedInstance = (PythonQtInstanceWrapper*)instance;
      if (!typedInstance->_wrappedPtr) {
        // It's a QObject-derived class
        targetObj = typedInstance->_obj;
        PyObject* function = PyMethod_Function(object);
        if (PyObject_HasAttr(function, qtSlots)) {
          // connecting to a slot
          PyObject* signatures = PyObject_GetAttr(function, qtSlots);
          Py_ssize_t count = PyList_Size(signatures);
          // TODO: Find the best matching signature;
          // currently we only connect to the actual slot if only one slot signature is associated
          // with this callable - if there are more, we just connect to the callable and let
          // the callable figure the arguments out - but in this case Qt::DirectConnection is
          // used instead of Qt::AutoConnection, which can be suprising if threads are involved.
          if (count == 1) {
            PyObject* signature = PyList_GET_ITEM(signatures, 0);
            // Retrieve slot signature
            QByteArray sig = PyUnicode_AsUTF8(signature);
            targetSignature = QByteArray("1") + sig.split(' ')[1]; // include slot prefix
            return true;
          }
        }
      }
    }
  }
  return false;
}

static PyObject* PythonQtSignalFunction_connect(PythonQtSignalFunctionObject* type, PyObject* args)
{
  if (PyObject_TypeCheck(type->m_self, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*)type->m_self;
    if (self->_obj) {
      Py_ssize_t argc = PyTuple_Size(args);
      QByteArray sourceSignature = QByteArray("2") + type->m_ml->signature();
      if (argc == 1) {
        // connect with Python callable
        PyObject* callable = PyTuple_GET_ITEM(args, 0);
        QObject* targetObj;
        QByteArray targetSignature;
        if (extractSignalTarget(callable, targetObj, targetSignature)) {
          // Do a regular signal/slot (or signal/signal) connect.
          QObject::connect(self->_obj, sourceSignature, targetObj, targetSignature, Qt::AutoConnection);
          return PythonQtConv::GetPyBool(true);
        } else {
          bool result = PythonQt::self()->addSignalHandler(self->_obj, sourceSignature, callable);
          return PythonQtConv::GetPyBool(result);
        }
      } else {
        PyErr_SetString(PyExc_ValueError, "Called connect with wrong number of arguments");
      }
    }
  }
  return nullptr;
}

static PyObject* PythonQtSignalFunction_disconnect(PythonQtSignalFunctionObject* type, PyObject* args)
{
  if (PyObject_TypeCheck(type->m_self, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*)type->m_self;
    if (self->_obj) {
      Py_ssize_t argc = PyTuple_Size(args);
      QByteArray sourceSignature = QByteArray("2") + type->m_ml->signature();
      if (argc == 1) {
        // disconnect with Python callable
        PyObject* callable = PyTuple_GET_ITEM(args, 0);
        QObject* targetObj;
        QByteArray targetSignature;
        if (extractSignalTarget(callable, targetObj, targetSignature)) {
          // Do a regular signal/slot (or signal/signal) disconnect.
          QObject::disconnect(self->_obj, sourceSignature, targetObj, targetSignature);
          return PythonQtConv::GetPyBool(true);
        } else {
          bool result = PythonQt::self()->removeSignalHandler(self->_obj, sourceSignature, callable);
          return PythonQtConv::GetPyBool(result);
        }
      } else if (argc == 0) {
        bool result = PythonQt::self()->removeSignalHandler(self->_obj, sourceSignature, nullptr);
        result |= QObject::disconnect(self->_obj, sourceSignature, nullptr, nullptr);
        return PythonQtConv::GetPyBool(result);
      } else {
        PyErr_SetString(PyExc_ValueError, "Called disconnect with wrong number of arguments");
      }
    }
  }
  return nullptr;
}

static PyObject* PythonQtSignalFunction_emit(PythonQtSignalFunctionObject* func, PyObject* args)
{
  PythonQtSignalFunctionObject* f = (PythonQtSignalFunctionObject*)func;
  return PythonQtMemberFunction_Call(f->m_ml, f->m_self, args, nullptr);
}

static PyMethodDef meth_methods[] = {
  {"parameterTypes", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_parameterTypes)),
    METH_NOARGS, "Returns a tuple of tuples of the C++ parameter types for all overloads of the signal"},
  {"parameterNames", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_parameterNames)),
    METH_NOARGS,
    "Returns a tuple of tuples of the C++ parameter type names (if available), for all overloads of the signal"},
  {"typeName", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_typeName)), METH_NOARGS,
    "Returns a tuple of the C++ return value types of each signal overload"},
  {"connect", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_connect)), METH_VARARGS,
    "Connects the signal to the Python callable"},
  {"disconnect", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_disconnect)),
    METH_VARARGS, "Disconnects the signal from the given Python callable or disconnects all if no argument is passed."},
  {"emit", reinterpret_cast<PyCFunction>(reinterpret_cast<void*>(PythonQtSignalFunction_emit)), METH_VARARGS,
    "Emits the signal with given arguments"},
  {nullptr, nullptr, 0, nullptr} /* Sentinel */
};

static PyObject* meth_repr(PythonQtSignalFunctionObject* f)
{
  if (!f->m_ml) {
    // TODO
    return PyUnicode_FromString("Signal");
  }
  if (f->m_self->ob_type == &PythonQtClassWrapper_Type) {
    PythonQtClassWrapper* self = (PythonQtClassWrapper*)f->m_self;
    return PyUnicode_FromFormat("<unbound qt signal %s of %s type>", f->m_ml->slotName().constData(),
      self->classInfo()->className().constData());
  } else {
    return PyUnicode_FromFormat("<qt signal %s of %s instance at %p>", f->m_ml->slotName().constData(),
      f->m_self->ob_type->tp_name, f->m_self);
  }
}

static int meth_compare(PythonQtSignalFunctionObject* a, PythonQtSignalFunctionObject* b)
{
  if (a->m_self != b->m_self)
    return (a->m_self < b->m_self) ? -1 : 1;
  if (a->m_ml == b->m_ml)
    return 0;
  if (strcmp(a->m_ml->signature().constData(), b->m_ml->signature().constData()) < 0)
    return -1;
  else
    return 1;
}

static long meth_hash(PythonQtSignalFunctionObject* a)
{
  long x, y;
  if (a->m_self == nullptr)
    x = 0;
  else {
    x = PyObject_Hash(a->m_self);
    if (x == -1)
      return -1;
  }
  y = _Py_HashPointer((void*)(a->m_ml));
  if (y == -1)
    return -1;
  x ^= y;
  if (x == -1)
    x = -2;
  return x;
}

// for python 3.x
static PyObject* meth_richcompare(PythonQtSignalFunctionObject* a, PythonQtSignalFunctionObject* b, int op)
{
  int x = meth_compare(a, b);
  bool r = false;
  if (op == Py_LT)
    r = x < 0;
  else if (op == Py_LE)
    r = x < 1;
  else if (op == Py_EQ)
    r = x == 0;
  else if (op == Py_NE)
    r = x != 0;
  else if (op == Py_GE)
    r = x > -1;
  else if (op == Py_GT)
    r = x > 0;
  if (r)
    Py_RETURN_TRUE;
  else
    Py_RETURN_FALSE;
}

PyDoc_STRVAR(PythonQtSignalFunction_doc, "Signal(*types) -> Signal\n");

PyTypeObject PythonQtSignalFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0) /*tp_base*/
  "QtCore.Signal",                       /* tp_name */
  sizeof(PythonQtSignalFunctionObject),  /* tp_basicsize */
  0,                                     /* tp_itemsize */
  (destructor)meth_dealloc,              /* tp_dealloc */
  0,                                     /* tp_vectorcall_offset */
  nullptr,                               /* tp_getattr */
  nullptr,                               /* tp_setattr */
  nullptr,
  (reprfunc)meth_repr, /* tp_repr */
  nullptr,             /* tp_as_number */
  nullptr,             /* tp_as_sequence */
  // TODO: implement tp_as_mapping to support overload resolution on the signal
  nullptr,                                 /* tp_as_mapping */
  (hashfunc)meth_hash,                     /* tp_hash */
  PythonQtSignalFunction_Call,             /* tp_call */
  nullptr,                                 /* tp_str */
  PyObject_GenericGetAttr,                 /* tp_getattro */
  nullptr,                                 /* tp_setattro */
  nullptr,                                 /* tp_as_buffer */
  Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC, /* tp_flags */
  PythonQtSignalFunction_doc,              /* tp_doc */
  (traverseproc)meth_traverse,             /* tp_traverse */
  nullptr,                                 /* tp_clear */
  (richcmpfunc)meth_richcompare,           /* tp_richcompare */
  0,                                       /* tp_weaklistoffset */
  nullptr,                                 /* tp_iter */
  nullptr,                                 /* tp_iternext */
  meth_methods,                            /* tp_methods */
  meth_members,                            /* tp_members */
  meth_getsets,                            /* tp_getset */
  nullptr,                                 /* tp_base */
  nullptr,                                 /* tp_dict */
  nullptr,                                 /*tp_descr_get */
  nullptr,                                 /*tp_descr_set */
  0,                                       /*tp_dictoffset */
  PythonQtSignalFunction_init,             /*tp_init */
  nullptr,                                 /*tp_alloc */
  PythonQtSignalFunction_tpNew,            /*tp_new */
  nullptr,                                 /*tp_free */
  nullptr,                                 /*tp_is_gc */
  nullptr,                                 /*tp_bases */
  nullptr,                                 /*tp_mro */
  nullptr,                                 /*tp_cache */
  nullptr,                                 /*tp_subclasses */
  nullptr,                                 /*tp_weaklist */
  nullptr,                                 /*tp_del */

};

/* Clear out the free list */

void PythonQtSignalFunction_Fini(void)
{
  while (PythonQtSignal_free_list) {
    PythonQtSignalFunctionObject* v = PythonQtSignal_free_list;
    PythonQtSignal_free_list = (PythonQtSignalFunctionObject*)(v->m_self);
    PyObject_GC_Del(v);
  }
}
