#pragma once
/*
*
*  Copyright (C) 2018 MeVis Medical Solutions AG All Rights Reserved.
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
// \file    PythonQtThreadSupport.h
// \author  Florian Link
// \date    2018-08
*/
//----------------------------------------------------------------------------------


#include "PythonQtPythonInclude.h"
#include "PythonQtSystem.h"

#define PYTHONQT_FULL_THREAD_SUPPORT

#ifdef PYTHONQT_FULL_THREAD_SUPPORT
#define PYTHONQT_GIL_SUPPORT
#define PYTHONQT_ALLOW_THREADS_SUPPORT
#endif

#ifdef PYTHONQT_GIL_SUPPORT

#define PYTHONQT_GIL_SCOPE PythonQtGILScope internal_pythonqt_gilscope;

//! Ensures/releases the Python GIL
//! An instance of this class can be used to
//! allow access to the Python API from C++ code.
class PYTHONQT_EXPORT PythonQtGILScope
{
public:
  PythonQtGILScope();

  ~PythonQtGILScope();

  void release();

  //! This allows to globally enable/disable the GIL scopes.
  //! Make sure to only call this early in the PythonQt setup, or
  //! when you are holding the GIL.
  static void setGILScopeEnabled(bool flag);
  //! Check if GIL scopes are enabled.
  static bool isGILScopeEnabled();

private:
  PyGILState_STATE _state;
  bool _ensured;

  static bool _enableGILScope;
};

#else

#define PYTHONQT_GIL_SCOPE

//! Empty dummy implementation.
class PythonQtGILScope
{
public:
  PythonQtGILScope() {}
  void release() {}
};

#endif

#ifdef PYTHONQT_ALLOW_THREADS_SUPPORT

#define PYTHONQT_ALLOW_THREADS_SCOPE PythonQtThreadStateSaver internal_pythonqt_savethread;

//! This class wraps the Python save/restore thread state API.
//! It can be used to allow other Python threads to run when entering C++ code
//! from Python code.
class PythonQtThreadStateSaver
{
public:
  PythonQtThreadStateSaver() {
    save();
  }

  ~PythonQtThreadStateSaver() {
    restore();
  }

  void save() {
    _state = PyEval_SaveThread();
  }

  void restore() {
    if (_state) {
      PyEval_RestoreThread(_state);
      _state = NULL;
    }
  }

private:
  PyThreadState* _state;
};

#else

#define PYTHONQT_ALLOW_THREADS_SCOPE

//! Empty dummy implementation.
class PythonQtThreadStateSaver
{
public:
  PythonQtThreadStateSaver() {};
  void save() {}
  void restore() {}
};

#endif
