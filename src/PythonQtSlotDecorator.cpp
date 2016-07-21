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

  char* argName = 0;
  PyObject* argResult = 0;

  static const char* kwlist[] = {"name", "result", 0};
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
  PythonQtSlotDecorator* self = (PythonQtSlotDecorator*)object;
  PyObject* function = PyTuple_GetItem(args, 0);

  if (PyFunction_Check(function)) {
    PyObject* funcName = ((PyFunctionObject*)function)->func_name;
    QByteArray slotName = PyString_AsString(funcName);

    QByteArray returnType = QMetaObject::normalizedType(self->returnType->constData());
    QByteArray signature = returnType + " " + slotName + "(" + *self->args + ")";

    static PyObject* qtSlots = PyString_FromString("_qtSlots");
    PyObject* signatures = NULL;
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
    "PythonQt.QtCore.Slot",     /*tp_name*/
    sizeof(PythonQtSlotDecorator),/*tp_basicsize*/
    0,                          /*tp_itemsize*/
    0,                          /*tp_dealloc*/
    0,                          /*tp_print*/
    0,                          /*tp_getattr*/
    0,                          /*tp_setattr*/
    0,                          /*tp_compare*/
    0,                          /*tp_repr*/
    0,                          /*tp_as_number*/
    0,                          /*tp_as_sequence*/
    0,                          /*tp_as_mapping*/
    0,                          /*tp_hash */
    PythonQtSlotDecorator_call,   /*tp_call*/
    0,                          /*tp_str*/
    0,                          /*tp_getattro*/
    0,                          /*tp_setattro*/
    0,                          /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,         /*tp_flags*/
    PythonQtSlotDecorator_doc,  /*tp_doc */
    0,                          /*tp_traverse */
    0,                          /*tp_clear */
    0,                          /*tp_richcompare */
    0,                          /*tp_weaklistoffset */
    0,                          /*tp_iter */
    0,                          /*tp_iternext */
    0,                          /*tp_methods */
    0,                          /*tp_members */
    0,                          /*tp_getset */
    0,                          /*tp_base */
    0,                          /*tp_dict */
    0,                          /*tp_descr_get */
    0,                          /*tp_descr_set */
    0,                          /*tp_dictoffset */
    PythonQtSlotDecorator_init,   /*tp_init */
    0,                          /*tp_alloc */
    PyType_GenericNew,          /*tp_new */
    0,                          /*tp_free */
    0,                          /*tp_is_gc */
    0,                          /*tp_bases */
    0,                          /*tp_mro */
    0,                          /*tp_cache */
    0,                          /*tp_subclasses */
    0,                          /*tp_weaklist */
    0,                          /*tp_del */
};
