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

#include "PythonQtSlotDecorator.h"
#include "PythonQtConversion.h"

int PythonQtSlotDecorator_init(PyObject *object, PyObject *args, PyObject *kw)
{
  PythonQtSlotDecorator* self = (PythonQtSlotDecorator*)object;
  self->returnType = new QByteArray();
  self->args = new QByteArray();

  char* argName = nullptr;
  PyObject* argResult = nullptr;

  static const char* kwlist[] = {"name", "result", nullptr};
  static PyObject* emptyTuple = PyTuple_New(0);
  if (!PyArg_ParseTupleAndKeywords(emptyTuple, kw, "|sO:QtCore.Slot", (char**) kwlist, &argName, &argResult)) {
    return 0;
  }

  if (argName) {
    std::cerr << "Slot name keyword is currently not supported! Ignoring name: " << argName << std::endl;
  }

  if (argResult) {
    QByteArray typeName = PythonQtConv::getCPPTypeName(argResult);
    if (!typeName.isEmpty()) {
      *self->returnType = typeName;
    } else {
      PyErr_Format(PyExc_TypeError, "Unknown Slot return type: %s", argResult->ob_type->tp_name);
      return -1;
    }
  } else {
    *self->returnType = "void";
  }

  QList<QByteArray> argList;
 
  Py_ssize_t argc = PyTuple_Size(args);
  for (Py_ssize_t i = 0; i < argc; i++) {
    PyObject *argType = PyTuple_GET_ITEM(args, i);
    QByteArray typeName = PythonQtConv::getCPPTypeName(argType);
    if (!typeName.isEmpty()) {
      argList << typeName;
    } else {
      PyErr_Format(PyExc_TypeError, "Unknown Slot argument type: %s", argType->ob_type->tp_name);
      return -1;
    }
  }

  *self->args = argList.join(",");
  
  return 1;
}

PyObject* PythonQtSlotDecorator_call(PyObject* object, PyObject* args, PyObject* kw)
{
  Q_UNUSED(kw)
  PythonQtSlotDecorator* self = (PythonQtSlotDecorator*)object;
  PyObject* function = PyTuple_GetItem(args, 0);

  if (PyFunction_Check(function)) {
    PyObject* funcName = ((PyFunctionObject*)function)->func_name;
    QByteArray slotName = PyString_AsString(funcName);

    QByteArray returnType = QMetaObject::normalizedType(self->returnType->constData());
    QByteArray signature = returnType + " " + slotName + "(" + *self->args + ")";

    static PyObject* qtSlots = PyString_FromString("_qtSlots");
    PyObject* signatures = nullptr;
    if (!PyObject_HasAttr(function, qtSlots)) {
      // create a new list
      signatures = PyList_New(0);
      PyObject_SetAttr(function, qtSlots, signatures);
      Py_DECREF(signatures);
    } else {
      // use the existing list
      signatures = PyObject_GetAttr(function, qtSlots);
    }

    // append the signature to the list
    PyObject* pySignature = PyString_FromString(signature);
    PyList_Append(signatures, pySignature);
    Py_DECREF(pySignature);

    delete self->returnType;
    delete self->args;
  }

  // we need to incref, because we need to return a new reference
  Py_INCREF(function);
  return function;
}


PyDoc_STRVAR(PythonQtSlotDecorator_doc,
  "Slot(*types, result=type) -> Slot\n");

PyTypeObject PythonQtSlotDecorator_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "PythonQt.QtCore.Slot",          /*tp_name*/
    sizeof(PythonQtSlotDecorator),   /*tp_basicsize*/
    0,                          /*tp_itemsize*/
    nullptr,                    /*tp_dealloc*/
    0,                          /*tp_vectorcall_offset*/
    nullptr,                    /*tp_getattr*/
    nullptr,                    /*tp_setattr*/
    nullptr,                    /*tp_compare*/
    nullptr,                    /*tp_repr*/
    nullptr,                    /*tp_as_number*/
    nullptr,                    /*tp_as_sequence*/
    nullptr,                    /*tp_as_mapping*/
    nullptr,                    /*tp_hash */
    PythonQtSlotDecorator_call, /*tp_call*/
    nullptr,                    /*tp_str*/
    nullptr,                    /*tp_getattro*/
    nullptr,                    /*tp_setattro*/
    nullptr,                    /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,         /*tp_flags*/
    PythonQtSlotDecorator_doc,  /*tp_doc */
    nullptr,                    /*tp_traverse */
    nullptr,                    /*tp_clear */
    nullptr,                    /*tp_richcompare */
    0,                          /*tp_weaklistoffset */
    nullptr,                    /*tp_iter */
    nullptr,                    /*tp_iternext */
    nullptr,                    /*tp_methods */
    nullptr,                    /*tp_members */
    nullptr,                    /*tp_getset */
    nullptr,                    /*tp_base */
    nullptr,                    /*tp_dict */
    nullptr,                    /*tp_descr_get */
    nullptr,                    /*tp_descr_set */
    0,                          /*tp_dictoffset */
    PythonQtSlotDecorator_init, /*tp_init */
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
