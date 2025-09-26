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

#ifndef __PythonQtPythonInclude_h
#define __PythonQtPythonInclude_h

// Undefine macros that features.h defines to avoid redefinition warning
#ifdef _POSIX_C_SOURCE
#  undef _POSIX_C_SOURCE
#endif

#ifdef _XOPEN_SOURCE
#  undef _XOPEN_SOURCE
#endif

// Undefine Qt keywords that conflict with Python headers
#ifdef slots
#undef slots
#define PYTHONQT_RESTORE_KEYWORDS
#endif

//From https://github.com/boostorg/python/pull/253
// Python.h defines a macro with hypot name, what breaks libstdc++ math header
// that it tries to include afterwards.
# if defined(__MINGW32__)
#  include <cmath>
#  include <math.h>
# endif

// 
// Use the real python debugging library if it is provided.  
// Otherwise use the "documented" trick involving checking for _DEBUG
// and undefined that symbol while we include Python headers.
// Update: this method does not fool Microsoft Visual C++ 8 anymore; two
// of its header files (crtdefs.h and use_ansi.h) check if _DEBUG was set
// or not, and set flags accordingly (_CRT_MANIFEST_RETAIL, 
// _CRT_MANIFEST_DEBUG, _CRT_MANIFEST_INCONSISTENT). The next time the
// check is performed in the same compilation unit, and the flags are found,
// and error is triggered. Let's prevent that by setting _CRT_NOFORCE_MANIFEST.
//

// If PYTHONQT_USE_RELEASE_PYTHON_FALLBACK is enabled, try to link
// release Python DLL if it is available by undefining _DEBUG while
// including Python.h
#if defined(PYTHONQT_USE_RELEASE_PYTHON_FALLBACK) && defined(_DEBUG)
# define PYTHONQT_UNDEF_DEBUG
// Include these low level headers before undefing _DEBUG. Otherwise when doing
// a debug build against a release build of python the compiler will end up
// including these low level headers without DEBUG enabled, causing it to try
// and link release versions of this low level C api.
# include <basetsd.h>
# include <assert.h>
# include <ctype.h>
# include <errno.h>
# include <io.h>
# include <math.h>
# include <sal.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <time.h>
# include <wchar.h>
# undef _DEBUG
# if defined(_MSC_VER) && _MSC_VER >= 1400
#  define _CRT_NOFORCE_MANIFEST 1
#  define _STL_NOFORCE_MANIFEST 1
# endif
#endif

#include <Python.h>

#ifdef PYTHONQT_UNDEF_DEBUG
# define _DEBUG
#endif

// By including Python.h on Linux truncate could have been defined (in unistd.h)
// which would lead to compiler errors. Therefore:
#ifdef truncate
# undef truncate
#endif

// get Qt keywords back
#ifdef PYTHONQT_RESTORE_KEYWORDS
#define slots Q_SLOTS
#undef PYTHONQT_RESTORE_KEYWORDS
#endif

#if PY_MAJOR_VERSION >= 3
#define PY3K
// Helper defines to facilitate porting
#define PyString_FromString PyUnicode_FromString
#define PyString_AS_STRING  PyUnicode_AsUTF8
#define PyString_AsString   PyUnicode_AsUTF8
#define PyString_FromFormat PyUnicode_FromFormat
#define PyString_Check      PyUnicode_Check

#else
// Defines to use Python 3 names in Python 2 code
#define PyBytes_Type      PyString_Type
#define PyBytes_Check     PyString_Check
#define PyBytes_AS_STRING PyString_AS_STRING
#define PyBytes_AsString  PyString_AsString
#define PyBytes_GET_SIZE  PyString_GET_SIZE
#define PyBytes_FromStringAndSize PyString_FromStringAndSize
#endif

// Avoid clashes with libstdc++ <locale> by undefining ctype macros
// that CPython may introduce on macOS when the UTF-8 ctype quirk is enabled.
// (_PY_PORT_CTYPE_UTF8_ISSUE is defined by CPython’s pyport.h; we apply these
// undefs only in C++ builds.)
#if defined(_PY_PORT_CTYPE_UTF8_ISSUE) && defined(__cplusplus)
#undef isalnum
#undef isalpha
#undef islower
#undef isspace
#undef isupper
#undef tolower
#undef toupper
#endif

#endif

