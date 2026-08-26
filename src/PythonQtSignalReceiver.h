#ifndef _PYTHONQTSIGNALRECEIVER_H
#define _PYTHONQTSIGNALRECEIVER_H

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
// \file    PythonQtSignalReceiver.h
// \author  Florian Link
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"

#include "PythonQtSystem.h"
#include "PythonQtObjectPtr.h"

class PythonQtMethodInfo;
class PythonQtClassInfo;

//! stores information about a signal target
/*! copy construction and assignment works fine with the C++ standard behavior and are thus not implemented
*/
class PYTHONQT_EXPORT PythonQtSignalTarget
{
public:
  PythonQtSignalTarget() { _methodInfo = nullptr; }

  PythonQtSignalTarget(const PythonQtMethodInfo* methodInfo, PyObject* callable)
  {
    _methodInfo = methodInfo;
    _callable = callable;
  };

  ~PythonQtSignalTarget() {};

  //! get the signals parameter info
  const PythonQtMethodInfo* methodInfo() const { return _methodInfo; }

  //! call the python callable with the given arguments (as defined in methodInfo)
  void call(void** arguments) const;

  //! check if this targets the same callable
  bool isSame(PyObject* callable) const;

  //! call the given callable with arguments described by PythonQtMethodInfo, returns a new reference as result value (or NULL)
  static PyObject* call(PyObject* callable, const PythonQtMethodInfo* methodInfo, void** arguments,
    bool skipFirstArgumentOfMethodInfo = false);

private:
  const PythonQtMethodInfo* _methodInfo;
  PythonQtSafeObjectPtr _callable;
};

//! base class for signal receivers
/*!
*/
class PythonQtSignalReceiverBase : public QObject
{
  Q_OBJECT
public:
  PythonQtSignalReceiverBase() = default;
};

//! connects a signal to a callable
/*! we derive from our base but do not declare the QObject macro because we want to reimplement qt_metacall only.
*/
class PythonQtSignalReceiver : public PythonQtSignalReceiverBase
{

public:
  PythonQtSignalReceiver(QObject* sender, int signalId, PyObject* callable);
  ~PythonQtSignalReceiver() override;

  //! Returns the signal sender for which this receiver was created.
  QObject* sender() const { return _sender; }

  //! Returns the signal ID for which this receiver was created.
  int signalId() const { return _signalId; }

  //! Check if this object targets the callable given as argument.
  bool isSameCallable(PyObject* callable) const;

  //! Mark this object as already removed from the global list of signal receivers.
  void markAsRemoved();

  //! We implement this method to either call the callable, or react to the fact that the sender was destroyed.
  int qt_metacall(QMetaObject::Call c, int id, void** arguments) override;

  //! Get the index of a sender's signal.
  static int getSignalIndex(QObject* sender, const char* signal);

private:
  static int _slotCount;
  QObject* _sender;
  int _signalId;
  bool _alreadyRemoved;
  PythonQtSignalTarget _target;
};

#endif
