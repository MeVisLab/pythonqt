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

static PythonQtSignalFunctionObject *PythonQtSignal_free_list = NULL;

PyObject *PythonQtSignalFunction_Call(PyObject *func, PyObject *args, PyObject *kw)
{
  PythonQtSignalFunctionObject* f = (PythonQtSignalFunctionObject*)func;
  return PythonQtMemberFunction_Call(f->m_ml, f->m_self, args, kw);
}

PyObject *PythonQtSignalFunction_tpNew(PyTypeObject *subtype, PyObject *args, PyObject *kwds)
{
  return PythonQtSignalFunction_New(NULL, NULL, NULL);
}

PyObject *
PythonQtSignalFunction_New(PythonQtSlotInfo *ml, PyObject *self, PyObject *module)
{
  PythonQtSignalFunctionObject *op;
  op = PythonQtSignal_free_list;
  if (op != NULL) {
    PythonQtSignal_free_list = (PythonQtSignalFunctionObject *)(op->m_self);
    PyObject_INIT(op, &PythonQtSignalFunction_Type);
  }
  else {
    op = PyObject_GC_New(PythonQtSignalFunctionObject, &PythonQtSignalFunction_Type);
    if (op == NULL)
      return NULL;
  }
  op->_dynamicInfo = NULL;
  op->m_ml = ml;
  Py_XINCREF(self);
  op->m_self = self;
  Py_XINCREF(module);
  op->m_module = module;
  PyObject_GC_Track(op);
  return (PyObject *)op;
}

/* Methods (the standard built-in methods, that is) */

static void
meth_dealloc(PythonQtSignalFunctionObject *m)
{
  PyObject_GC_UnTrack(m);
  if (m->_dynamicInfo) {
    delete m->_dynamicInfo;
    m->_dynamicInfo = NULL;
  }
  Py_XDECREF(m->m_self);
  Py_XDECREF(m->m_module);
  m->m_self = (PyObject *)PythonQtSignal_free_list;
  PythonQtSignal_free_list = m;
}

static PyObject *
meth_get__doc__(PythonQtSignalFunctionObject * /*m*/, void * /*closure*/)
{
  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject *
meth_get__name__(PythonQtSignalFunctionObject *m, void * /*closure*/)
{
  if (m->m_ml) {
    return PyString_FromString(m->m_ml->signature());
  } else {
    return PyString_FromString("Signal");
  }
}

static int
meth_traverse(PythonQtSignalFunctionObject *m, visitproc visit, void *arg)
{
  int err;
  if (m->m_self != NULL) {
    err = visit(m->m_self, arg);
    if (err)
      return err;
  }
  if (m->m_module != NULL) {
    err = visit(m->m_module, arg);
    if (err)
      return err;
  }
  return 0;
}

static PyObject *
meth_get__self__(PythonQtSignalFunctionObject *m, void * /*closure*/)
{
  PyObject *self;
#ifndef PY3K
  if (PyEval_GetRestricted()) {
    PyErr_SetString(PyExc_RuntimeError,
      "method.__self__ not accessible in restricted mode");
    return NULL;
  }
#endif
  self = m->m_self;
  if (self == NULL)
    self = Py_None;
  Py_INCREF(self);
  return self;
}

static PyGetSetDef meth_getsets [] = {
  {const_cast<char*>("__doc__"),  (getter)meth_get__doc__,  NULL, NULL},
  {const_cast<char*>("__name__"), (getter)meth_get__name__, NULL, NULL},
  {const_cast<char*>("__self__"), (getter)meth_get__self__, NULL, NULL},
  {NULL, NULL, NULL,NULL},
};

#if PY_MAJOR_VERSION == 2 && PY_MINOR_VERSION < 6
#define PY_WRITE_RESTRICTED WRITE_RESTRICTED
#endif

#define OFF(x) offsetof(PythonQtSignalFunctionObject, x)

static PyMemberDef meth_members[] = {
  {const_cast<char*>("__module__"),    T_OBJECT,     OFF(m_module), PY_WRITE_RESTRICTED},
  {NULL}
};

int PythonQtSignalFunction_init(PyObject *object, PyObject *args, PyObject *kw)
{
  PythonQtSignalFunctionObject* self = (PythonQtSignalFunctionObject*)object;
  self->_dynamicInfo = new PythonQtDynamicSignalInfo();
  
  QList<QByteArray> argList;
  Py_ssize_t argc = PyTuple_Size(args);
  for (Py_ssize_t i = 0; i < argc; i++) {
    PyObject *argType = PyTuple_GET_ITEM(args, i);
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

static PyObject *PythonQtSignalFunction_parameterTypes(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_parameterTypes(type->m_ml);
}

static PyObject *PythonQtSignalFunction_parameterNames(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_parameterNames(type->m_ml);
}

static PyObject *PythonQtSignalFunction_typeName(PythonQtSignalFunctionObject* type)
{
  return PythonQtMemberFunction_typeName(type->m_ml);
}

static PyObject *PythonQtSignalFunction_connect(PythonQtSignalFunctionObject* type, PyObject *args)
{
  if (PyObject_TypeCheck(type->m_self, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*) type->m_self;
    if (self->_obj) {
      Py_ssize_t argc = PyTuple_Size(args);
      if (argc==1) {
        // connect with Python callable
        PyObject* callable = PyTuple_GET_ITEM(args, 0);
        bool result = PythonQt::self()->addSignalHandler(self->_obj, QByteArray("2") + type->m_ml->signature(), callable);
        return PythonQtConv::GetPyBool(result);
      } else {
        PyErr_SetString(PyExc_ValueError, "Called connect with wrong number of arguments");
      }
    }
  }
  return NULL;
}

static PyObject *PythonQtSignalFunction_disconnect(PythonQtSignalFunctionObject* type, PyObject *args)
{
  if (PyObject_TypeCheck(type->m_self, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*) type->m_self;
    if (self->_obj) {
      Py_ssize_t argc = PyTuple_Size(args);
      QByteArray signal = QByteArray("2") + type->m_ml->signature();
      if (argc==1) {
        // disconnect with Python callable
        PyObject* callable = PyTuple_GET_ITEM(args, 0);
        bool result = PythonQt::self()->removeSignalHandler(self->_obj, signal, callable);
        return PythonQtConv::GetPyBool(result);
      } else if (argc==0) {
        bool result = PythonQt::self()->removeSignalHandler(self->_obj, signal, NULL);
        result |= QObject::disconnect(self->_obj, signal, NULL, NULL);
        return PythonQtConv::GetPyBool(result);
      } else {
        PyErr_SetString(PyExc_ValueError, "Called disconnect with wrong number of arguments");
      }
    }
  }
  return NULL;
}

static PyObject *PythonQtSignalFunction_emit(PythonQtSignalFunctionObject* func, PyObject *args)
{
  PythonQtSignalFunctionObject* f = (PythonQtSignalFunctionObject*)func;
  return PythonQtMemberFunction_Call(f->m_ml, f->m_self, args, NULL);
}

static PyMethodDef meth_methods[] = {
  {"parameterTypes", (PyCFunction)PythonQtSignalFunction_parameterTypes, METH_NOARGS,
  "Returns a tuple of tuples of the C++ parameter types for all overloads of the signal"
  },
  {"parameterNames", (PyCFunction)PythonQtSignalFunction_parameterNames, METH_NOARGS,
  "Returns a tuple of tuples of the C++ parameter type names (if available), for all overloads of the signal"
  },
  {"typeName", (PyCFunction)PythonQtSignalFunction_typeName, METH_NOARGS,
  "Returns a tuple of the C++ return value types of each signal overload"
  },
  {"connect", (PyCFunction)PythonQtSignalFunction_connect, METH_VARARGS,
  "Connects the signal to the Python callable"
  },
  {"disconnect", (PyCFunction)PythonQtSignalFunction_disconnect, METH_VARARGS,
  "Disconnects the signal from the given Python callable or disconnects all if no argument is passed."
  },
  {"emit", (PyCFunction)PythonQtSignalFunction_emit, METH_VARARGS,
  "Emits the signal with given arguments"
  },
  {NULL, NULL, 0 , NULL}  /* Sentinel */
};

static PyObject *
meth_repr(PythonQtSignalFunctionObject *f)
{
  if (!f->m_ml) {
    // TODO
    return PyString_FromString("Signal");
  }
  if (f->m_self->ob_type == &PythonQtClassWrapper_Type) {
    PythonQtClassWrapper* self = (PythonQtClassWrapper*) f->m_self;
    return PyString_FromFormat("<unbound qt signal %s of %s type>",
      f->m_ml->slotName().data(),
      self->classInfo()->className().constData());
  } else {
    return PyString_FromFormat("<qt signal %s of %s instance at %p>",
      f->m_ml->slotName().data(),
      f->m_self->ob_type->tp_name,
      f->m_self);
  }
}

static int
meth_compare(PythonQtSignalFunctionObject *a, PythonQtSignalFunctionObject *b)
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

static long
meth_hash(PythonQtSignalFunctionObject *a)
{
  long x,y;
  if (a->m_self == NULL)
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
static PyObject*
meth_richcompare(PythonQtSignalFunctionObject *a, PythonQtSignalFunctionObject *b, int op)
{
  int x = meth_compare(a, b);
  bool r;
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

PyDoc_STRVAR(PythonQtSignalFunction_doc,
  "Signal(*types) -> Signal\n");

PyTypeObject PythonQtSignalFunction_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "QtCore.Signal",
    sizeof(PythonQtSignalFunctionObject),
    0,
    (destructor)meth_dealloc,     /* tp_dealloc */
    0,          /* tp_print */
    0,          /* tp_getattr */
    0,          /* tp_setattr */
#ifdef PY3K
    0,
#else
    (cmpfunc)meth_compare,      /* tp_compare */
#endif
    (reprfunc)meth_repr,      /* tp_repr */
    0,          /* tp_as_number */
    0,          /* tp_as_sequence */
    // TODO: implement tp_as_mapping to support overload resolution on the signal
    0,          /* tp_as_mapping */
    (hashfunc)meth_hash,      /* tp_hash */
    PythonQtSignalFunction_Call,      /* tp_call */
    0,          /* tp_str */
    PyObject_GenericGetAttr,    /* tp_getattro */
    0,          /* tp_setattro */
    0,          /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,/* tp_flags */
    PythonQtSignalFunction_doc,          /* tp_doc */
    (traverseproc)meth_traverse,    /* tp_traverse */
    0,          /* tp_clear */
    (richcmpfunc)meth_richcompare,          /* tp_richcompare */
    0,          /* tp_weaklistoffset */
    0,          /* tp_iter */
    0,          /* tp_iternext */
    meth_methods,          /* tp_methods */
    meth_members,       /* tp_members */
    meth_getsets,       /* tp_getset */
    0,          /* tp_base */
    0,          /* tp_dict */
    0,                          /*tp_descr_get */
    0,                          /*tp_descr_set */
    0,                          /*tp_dictoffset */
    PythonQtSignalFunction_init,   /*tp_init */
    0,                          /*tp_alloc */
    PythonQtSignalFunction_tpNew,          /*tp_new */
    0,                          /*tp_free */
    0,                          /*tp_is_gc */
    0,                          /*tp_bases */
    0,                          /*tp_mro */
    0,                          /*tp_cache */
    0,                          /*tp_subclasses */
    0,                          /*tp_weaklist */
    0,                          /*tp_del */

};

/* Clear out the free list */

void
PythonQtSignalFunction_Fini(void)
{
  while (PythonQtSignal_free_list) {
    PythonQtSignalFunctionObject *v = PythonQtSignal_free_list;
    PythonQtSignal_free_list = (PythonQtSignalFunctionObject *)(v->m_self);
    PyObject_GC_Del(v);
  }
}

