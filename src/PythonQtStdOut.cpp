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
// \file    PythonQtStdOut.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtStdOut.h"

static PyObject *PythonQtStdOutRedirect_new(PyTypeObject *type, PyObject * /*args*/, PyObject * /*kwds*/)
{
  PythonQtStdOutRedirect *self;
  self = (PythonQtStdOutRedirect *)type->tp_alloc(type, 0);

  self->softspace = 0;
  self->closed = false;
  self->_cb = nullptr;

  return (PyObject *)self;
}

static PyObject *PythonQtStdOutRedirect_write(PyObject *self, PyObject *args)
{
  PythonQtStdOutRedirect*  s = (PythonQtStdOutRedirect*)self;
  if (s->_cb) {
    QString output;
    if (PyTuple_GET_SIZE(args)>=1) {
      PyObject* obj = PyTuple_GET_ITEM(args,0);
      if (PyUnicode_Check(obj)) {
#ifdef PY3K
        output = QString::fromUtf8(PyUnicode_AsUTF8(obj));
#else
        PyObject *tmp = PyUnicode_AsUTF8String(obj);
        if(tmp) {
          output = QString::fromUtf8(PyString_AS_STRING(tmp));
          Py_DECREF(tmp);
        } else {
          return NULL;
        }
#endif
      } else {
        char *string;
        if (!PyArg_ParseTuple(args, "s", &string)) {
          return nullptr;
        }
#ifdef PY3K
        output = QString::fromUtf8(string);
#else
        output = QString::fromLatin1(string);
#endif
      }
    }

    if (s->softspace > 0) {
      (*s->_cb)(QString(""));
      s->softspace = 0;
    }

    (*s->_cb)(output);
  }
  return Py_BuildValue("");
}

static PyObject *PythonQtStdOutRedirect_flush(PyObject * /*self*/, PyObject * /*args*/)
{
  return Py_BuildValue("");
}

static PyObject *PythonQtStdOutRedirect_isatty(PyObject * /*self*/, PyObject * /*args*/)
{
  Py_INCREF(Py_False);
  return Py_False;
}

static PyMethodDef PythonQtStdOutRedirect_methods[] = {
  {"write", (PyCFunction)PythonQtStdOutRedirect_write, METH_VARARGS,
  "redirect the writing to a callback"},
  {"flush", (PyCFunction)PythonQtStdOutRedirect_flush, METH_VARARGS,
  "flush the output, currently not implemented but needed for logging framework"
  },
  {"isatty", (PyCFunction)PythonQtStdOutRedirect_isatty,   METH_NOARGS,
  "return False since this object is not a tty-like device. Needed for logging framework"
  },
  {nullptr,    nullptr, 0 , nullptr} /* sentinel */
};

static PyMemberDef PythonQtStdOutRedirect_members[] = {
  {const_cast<char*>("softspace"), T_INT, offsetof(PythonQtStdOutRedirect, softspace), 0,
    const_cast<char*>("soft space flag")
  },
  { const_cast<char*>("closed"), T_BOOL, offsetof(PythonQtStdOutRedirect, closed), 0,
  const_cast<char*>("soft space flag")
  },
  {nullptr}  /* Sentinel */
};

PyTypeObject PythonQtStdOutRedirectType = {
    PyVarObject_HEAD_INIT(nullptr, 0)
    "PythonQtStdOutRedirect",             /*tp_name*/
    sizeof(PythonQtStdOutRedirect),       /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    nullptr,                   /*tp_dealloc*/
    0,                         /*tp_vectorcall_offset*/
    nullptr,                   /*tp_getattr*/
    nullptr,                   /*tp_setattr*/
    nullptr,                   /*tp_compare*/
    nullptr,                   /*tp_repr*/
    nullptr,                   /*tp_as_number*/
    nullptr,                   /*tp_as_sequence*/
    nullptr,                   /*tp_as_mapping*/
    nullptr,                   /*tp_hash */
    nullptr,                   /*tp_call*/
    nullptr,                   /*tp_str*/
    nullptr,                   /*tp_getattro*/
    nullptr,                   /*tp_setattro*/
    nullptr,                   /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PythonQtStdOutRedirect",  /* tp_doc */
    nullptr,                   /* tp_traverse */
    nullptr,                   /* tp_clear */
    nullptr,                   /* tp_richcompare */
    0,                         /* tp_weaklistoffset */
    nullptr,                   /* tp_iter */
    nullptr,                   /* tp_iternext */
    PythonQtStdOutRedirect_methods,  /* tp_methods */
    PythonQtStdOutRedirect_members,  /* tp_members */
    nullptr,                   /* tp_getset */
    nullptr,                   /* tp_base */
    nullptr,                   /* tp_dict */
    nullptr,                   /* tp_descr_get */
    nullptr,                   /* tp_descr_set */
    0,                         /* tp_dictoffset */
    nullptr,                   /* tp_init */
    nullptr,                   /* tp_alloc */
    PythonQtStdOutRedirect_new,      /* tp_new */
};
