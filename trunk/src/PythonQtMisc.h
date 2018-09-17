#ifndef _PYTHONQTMISC_H
#define _PYTHONQTMISC_H

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
// \file    PythonQtMisc.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"
#include <vector>
#include <QVariant>

#define PYTHONQT_MAX_ARGS 32

#define PythonQtArgumentFrame_ADD_VALUE(store, type, value, ptr) \
{  type* item = (type*)store->nextPODPtr(); \
   *item = value; \
   ptr = (void*)item; \
}

#define PythonQtArgumentFrame_ADD_VALUE_IF_NEEDED(alreadyAllocatedPtr,store, type, value, ptr) \
{ \
  type* item = (type*)(alreadyAllocatedPtr?alreadyAllocatedPtr:store->nextPODPtr()); \
  *item = value; \
  ptr = (void*)item; \
}

#define PythonQtArgumentFrame_ADD_VARIANT_VALUE(store, value, ptr) \
{  QVariant* item = store->nextVariantPtr(); \
   *item = value; \
   ptr = (void*)item; \
}

#define PythonQtArgumentFrame_ADD_VARIANT_VALUE_IF_NEEDED(alreadyAllocatedPtr,store, value, ptr) \
{ \
  QVariant* item = (QVariant*)(alreadyAllocatedPtr?alreadyAllocatedPtr:store->nextVariantPtr()); \
  *item = value; \
  ptr = (void*)item; \
}

//! Stores C++ arguments for a qt_metacall (which are created when converting data from Python to C++)
class PythonQtArgumentFrame {

public:
  //! Create a new (empty) frame (which is typically reused from a freelist)
  static PythonQtArgumentFrame* newFrame();
  //! Frees the frame (resetting it and putting it back to the freelist)
  static void deleteFrame(PythonQtArgumentFrame* frame);

  //! Frees all PythonQtArgumentFrame frames that are stored.
  static void cleanupFreeList();

  //! Resets the pod and variant argument lists to empty lists.
  void reset();

  //! Get next pointer to a variant
  QVariant* nextVariantPtr();
  //! Get next pointer to a POD.
  quint64*  nextPODPtr();

private:
  PythonQtArgumentFrame();
  ~PythonQtArgumentFrame();

  std::vector<quint64>  _podArgs;
  std::vector<QVariant> _variantArgs;

  PythonQtArgumentFrame* _freeListNext;

  static PythonQtArgumentFrame* _freeListHead;
};

#endif
