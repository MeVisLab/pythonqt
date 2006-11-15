#ifndef _PYTHONQTOBJECTPTR_H
#define _PYTHONQTOBJECTPTR_H

/*
 *
 *  Copyright (C) 2006 MeVis Research GmbH All Rights Reserved.
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
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQtObjectPtr.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include <Python.h>

//! a smart pointer that stores a PyObject pointer and that handles reference counting automatically
class PythonQtObjectPtr
{
public:
  PythonQtObjectPtr():_object(NULL) {}

  PythonQtObjectPtr(const PythonQtObjectPtr &p):_object(NULL) {
    setObject(p.object());
  }

  PythonQtObjectPtr(PyObject* o) {
    _object = o;
    if (o) Py_INCREF(_object);
  }

  ~PythonQtObjectPtr() { if (_object) Py_DECREF(_object); }

  PythonQtObjectPtr &operator=(const PythonQtObjectPtr &p) {
    setObject(p.object());
    return *this;
  }

  PythonQtObjectPtr &operator=(PyObject* o) {
    setObject(o);
    return *this;
  }

  bool operator==( const PythonQtObjectPtr &p ) const {
    return object() == p.object();
  }

  bool operator!= ( const PythonQtObjectPtr& p ) const {
    return !( *this == p );
  }

  bool operator==( PyObject* p ) const {
    return object() == p;
  }

  bool operator!= ( PyObject* p ) const {
    return object() != p;
  }

  bool isNull() const { return !object(); }

  PyObject* operator->() const { return object(); }

  PyObject& operator*() const { return *( object() ); }

  operator PyObject*() const { return object(); }

  //! sets the object and passes the ownership (stealing the reference, in Python slang)
  void setNewRef(PyObject* o) {
    if (o != _object) {
      if (_object) Py_DECREF(_object);
      _object = o;
    }
  }

  PyObject* object() const {
    return _object;
  }

protected:

  void setObject(PyObject* o) {
    if (o != _object) {
      if (_object) Py_DECREF(_object);
      _object = o;
      if (_object) Py_INCREF(_object);
    }
  }

private:
  PyObject* _object;
};

#endif