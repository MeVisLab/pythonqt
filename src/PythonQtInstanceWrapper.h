#ifndef _PYTHONQTINSTANCEWRAPPER_H
#define _PYTHONQTINSTANCEWRAPPER_H

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
// \file    PythonQtInstanceWrapper.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"

#include "PythonQtSystem.h"
#include "PythonQtClassWrapper.h"
#include <QPointer>

#include "structmember.h"
#include "methodobject.h"
#include "compile.h"
#include "eval.h"

class PythonQtClassInfo;
class QObject;

extern PYTHONQT_EXPORT PyTypeObject PythonQtInstanceWrapper_Type;

//---------------------------------------------------------------
//! a Python wrapper object for Qt objects and C++ objects (that are themselves wrapped by wrapper QObjects)
struct PythonQtInstanceWrapper {
  PyObject_HEAD

  //! the class information, this is set even if the _obj or _wrappedPtr is NULL to support typed NULL pointers
  inline PythonQtClassInfo* classInfo() 
  {  return ((PythonQtClassWrapper*)Py_TYPE(this))->_classInfo; }

  inline PythonQtDynamicClassInfo* dynamicClassInfo()
  { return ((PythonQtClassWrapper*)Py_TYPE(this))->_dynamicClassInfo; }

  //! set the QObject pointer
  void setQObject(QObject* object) {
    _obj = object;
    _objPointerCopy = object;
  }

  //! Passes the ownership of the wrapped object to C++
  void passOwnershipToCPP() {
    // we pass the ownership to C++
    _ownedByPythonQt = false;
    // handle shell instance
    if (_isShellInstance) {
      if (!_shellInstanceRefCountsWrapper) {
        // ref count the wrapper, so that the Python part of the shell instance can not go
        // away until the C++ object gets deleted...
        Py_INCREF((PyObject*)this);
        _shellInstanceRefCountsWrapper = true;
      }
    }
  }

  //! Passes the ownership to Python
  void passOwnershipToPython() {
    _ownedByPythonQt = true;
    // if the shell instance was owned by C++ and the ownership goes to Python,
    // we need to remove the extra ref count that kept the Python part alive from the C++ side.
    if (_shellInstanceRefCountsWrapper) {
      Py_DECREF((PyObject*)this);
      _shellInstanceRefCountsWrapper = false;
    }
  }


  //! pointer to the wrapped Qt object or if _wrappedPtr is set, the Qt object that wraps the C++ Ptr
  QPointer<QObject> _obj;
  //! a copy of the _obj pointer, which is required because the wrapper needs to
  //! deregister itself via the _obj pointer, even when the QPointer<QObject> object was destroyed
  void* _objPointerCopy;

  //! optional C++ object Ptr that is wrapped by the above _obj
  void*    _wrappedPtr;

  // TODO xxx: put booleans into int that holds flags

  //! flag that stores if the object is owned by pythonQt
  bool _ownedByPythonQt;

  //! stores that the owned object should be destroyed using QMetaType::destroy()
  bool _useQMetaTypeDestroy;

  //! stores if the object is a shell instance
  bool _isShellInstance;

  //! stores if the shell instance (C++) owns the wrapper with its ref count
  bool _shellInstanceRefCountsWrapper;

};

int PythonQtInstanceWrapper_init(PythonQtInstanceWrapper * self, PyObject * args, PyObject * kwds);

PyObject *PythonQtInstanceWrapper_delete(PythonQtInstanceWrapper * self);

#endif

