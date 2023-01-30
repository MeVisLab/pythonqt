/*
 *
 *  Copyright (C) 2011 MeVis Medical Solutions AG All Rights Reserved.
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
// \file    PythonQtStdIn.cpp
// \author  Jean-Christophe Fillion-Robin
// \author  Last changed by $Author: jcfr $
// \date    2011
*/
//----------------------------------------------------------------------------------

#include "PythonQtStdIn.h"
#include "PythonQt.h"

static PyObject *PythonQtStdInRedirect_new(PyTypeObject *type, PyObject * /*args*/, PyObject * /*kwds*/)
{
  PythonQtStdInRedirect *self;
  self = (PythonQtStdInRedirect *)type->tp_alloc(type, 0);
  self->_cb = nullptr;
  self->_callData = nullptr;
  self->_isatty = false;

  return (PyObject *)self;
}

static PyObject *PythonQtStdInRedirect_readline(PyObject * self, PyObject * args)
{
  Q_UNUSED(args)
  PythonQtStdInRedirect*  s = (PythonQtStdInRedirect*)self;
  QString string;
  if (s->_cb) {
    string = (*s->_cb)(s->_callData);
  }
  return Py_BuildValue("s", QStringToPythonConstCharPointer(string));
}

static PyObject *PythonQtStdInRedirect_isatty(PyObject * self, PyObject * /*args*/)
{
  PythonQtStdInRedirect* s = (PythonQtStdInRedirect*)self;
  PyObject* r = s->_isatty ? Py_True : Py_False;
  Py_INCREF(r);
  return r;
}

static PyMethodDef PythonQtStdInRedirect_methods[] = {
  {"readline", (PyCFunction)PythonQtStdInRedirect_readline, METH_VARARGS,
   "read input line"},
  {"isatty", (PyCFunction)PythonQtStdInRedirect_isatty,   METH_NOARGS,
   "returns True if this is a tty-like device. False by default."
  },
  {nullptr,    nullptr, 0 , nullptr} /* sentinel */
};

static PyMemberDef PythonQtStdInRedirect_members[] = {
  {nullptr}  /* Sentinel */
};

PyTypeObject PythonQtStdInRedirectType = {
    PyVarObject_HEAD_INIT(nullptr, 0)
    "PythonQtStdInRedirect",        /*tp_name*/
    sizeof(PythonQtStdInRedirect),  /*tp_basicsize*/
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
    "PythonQtStdInRedirect",   /* tp_doc */
    nullptr,                   /* tp_traverse */
    nullptr,                   /* tp_clear */
    nullptr,                   /* tp_richcompare */
    0,                         /* tp_weaklistoffset */
    nullptr,                   /* tp_iter */
    nullptr,                   /* tp_iternext */
    PythonQtStdInRedirect_methods,   /* tp_methods */
    PythonQtStdInRedirect_members,   /* tp_members */
    nullptr,                   /* tp_getset */
    nullptr,                   /* tp_base */
    nullptr,                   /* tp_dict */
    nullptr,                   /* tp_descr_get */
    nullptr,                   /* tp_descr_set */
    0,                         /* tp_dictoffset */
    nullptr,                   /* tp_init */
    nullptr,                   /* tp_alloc */
    PythonQtStdInRedirect_new,       /* tp_new */
};
