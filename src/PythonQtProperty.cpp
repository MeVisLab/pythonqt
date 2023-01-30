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

#include "PythonQtProperty.h"
#include "PythonQtSignal.h"
#include "PythonQtConversion.h"

int PythonQtProperty_init(PyObject *object, PyObject *args, PyObject *kw)
{
  PythonQtProperty* self = (PythonQtProperty*)object;
  self->data = new PythonQtPropertyData();
  PythonQtPropertyData* data = self->data;

  PyObject* type = nullptr;
  static const char *kwlist[] =
  {
    "type",
    "fget", "fset", "freset", "fdel",
    "doc",
    "designable", "scriptable", "stored", "user", "constant", "final",
    "notify",
    nullptr
  };

  if (!PyArg_ParseTupleAndKeywords(args, kw,
    "O|OOOOObbbbbbO!:QtCore.QProperty", (char**)kwlist,
    &type,
    &(data->fget), &(data->fset), &(data->freset), &(data->fdel),
    &(data->doc),
    &(data->designable), &(data->scriptable), &(data->stored), &(data->user), &(data->constant), &(data->final),
    &PythonQtSignalFunction_Type, &(data->notify)))
  {
    return 0;
  }

  data->cppType = PythonQtConv::getCPPTypeName(type);
  if (data->cppType.isEmpty()) {
    PyErr_Format(PyExc_TypeError, "Unknown Property type: %s", type->ob_type->tp_name);
    return -1;
  }

  if (data->fget == Py_None) {
    data->fget = nullptr;
  }
  if (data->fset == Py_None) {
    data->fset = nullptr;
  }
  if (data->freset == Py_None) {
    data->freset = nullptr;
  }
  if (data->fdel == Py_None) {
    data->fdel = nullptr;
  }
  if (data->doc == Py_None) {
    data->doc = nullptr;
  }
  if (data->fdel) {
    std::cerr << "Property: fdel is not yet supported!" << std::endl;
  }

  Py_XINCREF(data->fget);
  Py_XINCREF(data->fset);
  Py_XINCREF(data->freset);
  Py_XINCREF(data->fdel);
  Py_XINCREF(data->notify);
  Py_XINCREF(data->doc);

  return 1;
}

void PythonQtProperty_dealloc(PyObject* object)
{
  PythonQtProperty* self = (PythonQtProperty*)object;

  Py_CLEAR(self->data->fget);
  Py_CLEAR(self->data->fset);
  Py_CLEAR(self->data->freset);
  Py_CLEAR(self->data->fdel);
  Py_CLEAR(self->data->notify);
  Py_CLEAR(self->data->doc);

  delete self->data;
  self->data = nullptr;
  Py_TYPE(object)->tp_free(object);
}

PyObject* PythonQtProperty_setter(PyObject* object, PyObject* func)
{
  PythonQtProperty* self = (PythonQtProperty*)object;
  if (PyFunction_Check(func)) {
    if (self->data->fset) {
      Py_DECREF(self->data->fset);
    }
    Py_INCREF(func);
    self->data->fset = func;

    // return ourselves, so that setter can be used as a decorator
    Py_INCREF(object);
    return object;
  } else {
    PyErr_SetString(PyExc_TypeError, "Property needs a callable as fset.");
    return nullptr;
  }
}

PyObject* PythonQtProperty_getter(PyObject* object, PyObject* func)
{
  PythonQtProperty* self = (PythonQtProperty*)object;
  if (PyFunction_Check(func)) {
    if (self->data->fget) {
      Py_DECREF(self->data->fget);
    }
    Py_INCREF(func);
    self->data->fget = func;

    // return ourselves, so that setter can be used as a decorator
    Py_INCREF(object);
    return object;
  } else {
    PyErr_SetString(PyExc_TypeError, "Property needs a callable as fget.");
    return nullptr;
  }
}

PyObject* PythonQtProperty_call(PyObject* object, PyObject* args, PyObject* kw)
{
  Q_UNUSED(kw)
  if (PyTuple_Size(args) == 1) {
    PyObject *func = PyTuple_GetItem(args, 0);
    return PythonQtProperty_getter(object, func);
  } else {
    PyErr_SetString(PyExc_TypeError, "Property expects a single callable.");
    return nullptr;
  }
}

static PyMethodDef PythonQtProperty_methods[] = {
  { "setter", (PyCFunction)PythonQtProperty_setter, METH_O, "Sets the fset function." },
  { "getter", (PyCFunction)PythonQtProperty_getter, METH_O, "Sets the fget function." },
  { "write", (PyCFunction)PythonQtProperty_setter, METH_O, "Sets the fset function." },
  { "read", (PyCFunction)PythonQtProperty_getter, METH_O, "Sets the fget function." },
  { nullptr, nullptr, 0, nullptr }  /* Sentinel */
};


static PyObject *PythonQtProperty_get_doc(PythonQtProperty* self, void * /*closure*/)
{
  if (self->data->doc) {
    Py_INCREF(self->data->doc);
    return self->data->doc;
  } else {
    //TODO: we could get the doc string from the fget method if no doc string is given...
    Py_INCREF(Py_None);
    return Py_None;
  }
}

static PyGetSetDef PythonQtProperty_getsets[] = {
  { const_cast<char*>("__doc__"),  (getter)PythonQtProperty_get_doc,  nullptr, nullptr },
  { nullptr, nullptr, nullptr,nullptr },
};

PyDoc_STRVAR(PythonQtProperty_doc,
  "Property(type, fget=None, fset=None, freset=None, fdel=None, doc=None,\n"
  "         designable=True, scriptable=True, stored=True, user=False,\n"
  "         constant=False, final=False, notify=None) -> Property\n");

PyTypeObject PythonQtProperty_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "PythonQt.QtCore.Property", /*tp_name*/
    sizeof(PythonQtProperty),   /*tp_basicsize*/
    0,                          /*tp_itemsize*/
    PythonQtProperty_dealloc,   /*tp_dealloc*/
    0,                          /*tp_vectorcall_offset*/
    nullptr,                    /*tp_getattr*/
    nullptr,                    /*tp_setattr*/
    nullptr,                    /*tp_compare*/
    nullptr,                    /*tp_repr*/
    nullptr,                    /*tp_as_number*/
    nullptr,                    /*tp_as_sequence*/
    nullptr,                    /*tp_as_mapping*/
    nullptr,                    /*tp_hash */
    PythonQtProperty_call,      /*tp_call*/
    nullptr,                    /*tp_str*/
    nullptr,                    /*tp_getattro*/
    nullptr,                    /*tp_setattro*/
    nullptr,                    /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,         /*tp_flags*/
    PythonQtProperty_doc,       /*tp_doc */
    nullptr,                    /*tp_traverse */
    nullptr,                    /*tp_clear */
    nullptr,                    /*tp_richcompare */
    0,                          /*tp_weaklistoffset */
    nullptr,                    /*tp_iter */
    nullptr,                    /*tp_iternext */
    PythonQtProperty_methods,   /*tp_methods */
    nullptr,                    /*tp_members */
    PythonQtProperty_getsets,   /*tp_getset */
    nullptr,                    /*tp_base */
    nullptr,                    /*tp_dict */
    nullptr,                    /*tp_descr_get */
    nullptr,                    /*tp_descr_set */
    0,                          /*tp_dictoffset */
    PythonQtProperty_init,      /*tp_init */
    nullptr,                    /*tp_alloc */
    PyType_GenericNew,          /*tp_new */
    nullptr,                    /*tp_free */
    nullptr,                    /*tp_is_gc */
    nullptr,                    /*tp_bases */
    nullptr,                    /*tp_mro */
    nullptr,                    /*tp_cache */
    nullptr,                    /*tp_subclasses */
    nullptr,                    /*tp_weaklist */
    nullptr,                    /*tp_del */
};

bool PythonQtPropertyData::callSetter(PyObject* wrapper, PyObject* newValue)
{
  if (fset) {
    PyObject* pyargs = PyTuple_New(2);
    PyTuple_SET_ITEM(pyargs, 0, wrapper);
    PyTuple_SET_ITEM(pyargs, 1, newValue);
    Py_INCREF(wrapper);
    Py_INCREF(newValue);

    PyObject* result = PyObject_CallObject(fset, pyargs);

    bool ok = (result != nullptr);
    Py_XDECREF(result);
    Py_DECREF(pyargs);
    return ok;
  } else {
    PyErr_Format(PyExc_TypeError, "Property is read only.");
    return false;
  }
}

PyObject* PythonQtPropertyData::callGetter(PyObject* wrapper)
{
  if (fget) {
    PyObject* pyargs = PyTuple_New(1);
    PyTuple_SET_ITEM(pyargs, 0, wrapper);
    Py_INCREF(wrapper);
    PyObject* value = PyObject_CallObject(fget, pyargs);
    Py_DECREF(pyargs);
    return value;
  } else {
    PyErr_Format(PyExc_TypeError, "Property is write only.");
    return nullptr;
  }
}

bool PythonQtPropertyData::callReset(PyObject* wrapper)
{
  if (freset) {
    PyObject* pyargs = PyTuple_New(1);
    PyTuple_SET_ITEM(pyargs, 0, wrapper);
    Py_INCREF(wrapper);
    PyObject* result = PyObject_CallObject(freset, pyargs);
    bool ok = (result != nullptr);
    Py_XDECREF(result);
    Py_DECREF(pyargs);
    return ok; 
  } else {
    PyErr_Format(PyExc_TypeError, "Property is not resettable.");
    return false;
  }
}
