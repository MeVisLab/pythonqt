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
// \file    PythonQtSlot.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtBoolResult.h"

static int PythonQtBoolResult_init(PythonQtBoolResultObject *self, PyObject* args, PyObject*)
{
  if (args && PyTuple_Size(args)>0) {
    PyErr_SetString(PyExc_ValueError, "No arguments supported for BoolResult!");
    return -1;
  }
  self->_value = false;
  return 0;
}

static PyObject *PythonQtBoolResult_repr(PythonQtBoolResultObject *obj)
{
  PythonQtBoolResultObject* wrapper = (PythonQtBoolResultObject*)obj;
  return PyString_FromString(wrapper->_value?"BoolResult(True)":"BoolResult(False)");
}

static int PythonQtBoolResult_nonzero(PyObject *obj)
{
  PythonQtBoolResultObject* wrapper = (PythonQtBoolResultObject*)obj;
  return wrapper->_value;
}

// we override nb_nonzero, so that one can do 'if' expressions to test for a NULL ptr
static PyNumberMethods PythonQtBoolResult_as_number = {
  nullptr,      /* nb_add */
  nullptr,      /* nb_subtract */
  nullptr,      /* nb_multiply */
#ifndef PY3K
  nullptr,      /* nb_divide */
#endif
  nullptr,      /* nb_remainder */
  nullptr,      /* nb_divmod */
  nullptr,      /* nb_power */
  nullptr,      /* nb_negative */
  nullptr,      /* nb_positive */
  nullptr,      /* nb_absolute */
  PythonQtBoolResult_nonzero,      /* nb_nonzero / nb_bool in Py3K */
  nullptr,      /* nb_invert */
  nullptr,      /* nb_lshift */
  nullptr,      /* nb_rshift */
  nullptr,      /* nb_and */
  nullptr,      /* nb_xor */
  nullptr,      /* nb_or */
#ifndef PY3K   
  nullptr,      /* nb_coerce */
#endif
  nullptr,      /* nb_int */
  nullptr,      /* nb_long  / nb_reserved in Py3K */
  nullptr,      /* nb_float */
#ifndef PY3K
  nullptr,      /* nb_oct */
  nullptr,      /* nb_hex */
#endif
  nullptr,      /* nb_inplace_add */
  nullptr,      /* nb_inplace_subtract */
  nullptr,      /* nb_inplace_multiply */
#ifndef PY3K
  nullptr,      /* nb_inplace_divide */
#endif
  nullptr,      /* nb_inplace_remainder */
  nullptr,      /* nb_inplace_power */
  nullptr,      /* nb_inplace_lshift */
  nullptr,      /* nb_inplace_rshift */
  nullptr,      /* nb_inplace_and */
  nullptr,      /* nb_inplace_xor */
  nullptr,      /* nb_inplace_or */
  nullptr,      /* nb_floor_divide */
  nullptr,      /* nb_true_divide */
  nullptr,      /* nb_inplace_floor_divide */
  nullptr,      /* nb_inplace_true_divide */
#ifdef PY3K
  nullptr,      /* nb_index in Py3K */
#endif
};

PyTypeObject PythonQtBoolResult_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "BoolResult",
    sizeof(PythonQtBoolResultObject),
    0,
    nullptr,      /* tp_dealloc */
    0,            /* tp_vectorcall_offset */
    nullptr,      /* tp_getattr */
    nullptr,      /* tp_setattr */
    nullptr,
    (reprfunc)PythonQtBoolResult_repr,      /* tp_repr */
    &PythonQtBoolResult_as_number,          /* tp_as_number */
    nullptr,      /* tp_as_sequence */
    nullptr,      /* tp_as_mapping */
    nullptr,      /* tp_hash */
    nullptr,      /* tp_call */
    nullptr,      /* tp_str */
    nullptr,      /* tp_getattro */
    nullptr,      /* tp_setattro */
    nullptr,      /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,/* tp_flags */
    "Result object that is useful for bool* arguments",     /* tp_doc */
    nullptr,      /* tp_traverse */
    nullptr,      /* tp_clear */
    nullptr,      /* tp_richcompare */
    0,            /* tp_weaklistoffset */
    nullptr,      /* tp_iter */
    nullptr,      /* tp_iternext */
    nullptr,      /* tp_methods */
    nullptr,      /* tp_members */
    nullptr,      /* tp_getset */
    nullptr,      /* tp_base */
    nullptr,      /* tp_dict */
    nullptr,      /* tp_descr_get */
    nullptr,      /* tp_descr_set */
    0,            /* tp_dictoffset */
    (initproc)&PythonQtBoolResult_init,      /* tp_init */
};

