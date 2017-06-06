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
  0,      /* nb_add */
  0,      /* nb_subtract */
  0,      /* nb_multiply */
#ifndef PY3K
  0,      /* nb_divide */
#endif
  0,      /* nb_remainder */
  0,      /* nb_divmod */
  0,      /* nb_power */
  0,      /* nb_negative */
  0,      /* nb_positive */
  0,      /* nb_absolute */
  PythonQtBoolResult_nonzero,      /* nb_nonzero / nb_bool in Py3K */
  0,      /* nb_invert */
  0,      /* nb_lshift */
  0,      /* nb_rshift */
  0,    /* nb_and */
  0,    /* nb_xor */
  0,    /* nb_or */
#ifndef PY3K
  0,      /* nb_coerce */
#endif
  0,      /* nb_int */
  0,      /* nb_long  / nb_reserved in Py3K */
  0,      /* nb_float */
#ifndef PY3K
  0,      /* nb_oct */
  0,      /* nb_hex */
#endif
  0,      /* nb_inplace_add */
  0,      /* nb_inplace_subtract */
  0,      /* nb_inplace_multiply */
#ifndef PY3K
  0,      /* nb_inplace_divide */
#endif
  0,      /* nb_inplace_remainder */
  0,      /* nb_inplace_power */
  0,      /* nb_inplace_lshift */
  0,      /* nb_inplace_rshift */
  0,      /* nb_inplace_and */
  0,      /* nb_inplace_xor */
  0,      /* nb_inplace_or */
  0,      /* nb_floor_divide */
  0,      /* nb_true_divide */
  0,      /* nb_inplace_floor_divide */
  0,      /* nb_inplace_true_divide */
#ifdef PY3K
  0,      /* nb_index in Py3K */
#endif
};

PyTypeObject PythonQtBoolResult_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "BoolResult",
    sizeof(PythonQtBoolResultObject),
    0,
    0,     /* tp_dealloc */
    0,          /* tp_print */
    0,          /* tp_getattr */
    0,          /* tp_setattr */
    0,
    (reprfunc)PythonQtBoolResult_repr,      /* tp_repr */
    &PythonQtBoolResult_as_number,          /* tp_as_number */
    0,          /* tp_as_sequence */
    0,          /* tp_as_mapping */
    0,      /* tp_hash */
    0,      /* tp_call */
    0,          /* tp_str */
    0,    /* tp_getattro */
    0,          /* tp_setattro */
    0,          /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,/* tp_flags */
    "Result object that is useful for bool* arguments",          /* tp_doc */
    0,    /* tp_traverse */
    0,          /* tp_clear */
    0,          /* tp_richcompare */
    0,          /* tp_weaklistoffset */
    0,          /* tp_iter */
    0,          /* tp_iternext */
    0,          /* tp_methods */
    0,       /* tp_members */
    0,       /* tp_getset */
    0,          /* tp_base */
    0,          /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)&PythonQtBoolResult_init,      /* tp_init */
};

