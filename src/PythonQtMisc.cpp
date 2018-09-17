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
// \file    PythonQtMisc.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtMisc.h"
#include <iostream>

#define PYTHONQT_MAX_ARGUMENT_FRAME_SIZE (PYTHONQT_MAX_ARGS * 2)

PythonQtArgumentFrame* PythonQtArgumentFrame::_freeListHead = NULL;

PythonQtArgumentFrame::PythonQtArgumentFrame()
{
  _freeListNext = NULL;

  // it is important to reserve the memory immediately,
  // otherwise pointers would change while pushing back new arguments.
  _variantArgs.reserve(PYTHONQT_MAX_ARGUMENT_FRAME_SIZE);
  _podArgs.reserve(PYTHONQT_MAX_ARGUMENT_FRAME_SIZE);
}

PythonQtArgumentFrame::~PythonQtArgumentFrame()
{
}

PythonQtArgumentFrame* PythonQtArgumentFrame::newFrame()
{
  PythonQtArgumentFrame* frame = NULL;
  if (_freeListHead) {
    frame = _freeListHead;
    _freeListHead = _freeListHead->_freeListNext;
    frame->_freeListNext = NULL;
  } else {
    frame = new PythonQtArgumentFrame();
  }
  return frame;
}

void PythonQtArgumentFrame::deleteFrame(PythonQtArgumentFrame* frame)
{
  frame->reset();
  frame->_freeListNext = _freeListHead;
  _freeListHead = frame;
}

void PythonQtArgumentFrame::cleanupFreeList()
{
  PythonQtArgumentFrame* head = _freeListHead;
  while (head) {
    PythonQtArgumentFrame* tmp = head;
    head = head->_freeListNext;
    delete tmp;
  }
  _freeListHead = NULL;
}

void PythonQtArgumentFrame::reset()
{
  // Note: clear still keeps the capacity of the vectors, which is what we want!
  _variantArgs.clear();
  _podArgs.clear();
}

QVariant* PythonQtArgumentFrame::nextVariantPtr()
{
  if (_variantArgs.size() >= PYTHONQT_MAX_ARGUMENT_FRAME_SIZE) {
    std::cerr << "PYTHONQT_MAX_ARGUMENT_FRAME_SIZE QVariants exceeded, use less complex slots or increase size!" << std::endl;
  }
  _variantArgs.push_back(QVariant());
  return &_variantArgs[_variantArgs.size() - 1];
}

quint64* PythonQtArgumentFrame::nextPODPtr()
{
  if (_podArgs.size() >= PYTHONQT_MAX_ARGUMENT_FRAME_SIZE) {
    std::cerr << "PYTHONQT_MAX_ARGUMENT_FRAME_SIZE PODs exceeded, use less complex slots or increase size!" << std::endl;
  }
  _podArgs.push_back(0);
  return &_podArgs[_podArgs.size() - 1];
}
