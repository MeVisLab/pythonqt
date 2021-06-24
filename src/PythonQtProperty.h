#pragma once

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

#include "PythonQtPythonInclude.h"
#include "PythonQtSystem.h"
#include <QByteArray>
#include <QList>

#include <structmember.h>

extern PYTHONQT_EXPORT PyTypeObject PythonQtProperty_Type;

#define PythonQtProperty_Check(op) (Py_TYPE(op) == &PythonQtProperty_Type)

struct PythonQtPropertyData
{
  PythonQtPropertyData() {
    fget = NULL;
    fset = NULL;
    fdel = NULL;
    freset = NULL;
    notify = NULL;
    doc = NULL;
    designable = true;
    scriptable = true;
    stored = true;
    user = false;
    constant = false;
    final = false;
  }

  //! Call the fset method in Python, bound to the wrapper object.
  //! Returns true if successful
  bool callSetter(PyObject* wrapper, PyObject* newValue);

  //! Call the fget method in Python, bound to the wrapper object.
  //! Returns the return value of the call (with a new ref).
  PyObject* callGetter(PyObject* wrapper);

  //! Call the freset method in Python, bound to the wrapper object.
  bool callReset(PyObject* wrapper);

  QByteArray cppType;

  PyObject* fget;
  PyObject* fset;
  PyObject* fdel;
  PyObject* freset;
  PyObject* notify;
  PyObject* doc;

  bool designable;
  bool scriptable;
  bool stored;
  bool user;
  bool constant;
  bool final;
};

struct PythonQtProperty {
  PyObject_HEAD
  PythonQtPropertyData* data;
};
