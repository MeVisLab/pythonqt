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
// \file    PythonQtObjectPtr.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

  
#include "PythonQt.h"
QVariant PythonQtObjectPtr::evalScript(const QString& script, int start)
{
  return PythonQt::self()->evalScript(_object, script, start);
}

void PythonQtObjectPtr::evalFile(const QString& file)
{
  PythonQt::self()->evalFile(_object, file);
}

QVariant PythonQtObjectPtr::evalCode(PyObject* pycode)
{
  return PythonQt::self()->evalCode(_object, pycode);
}

void PythonQtObjectPtr::addObject(const QString& name, QObject* object)
{
  PythonQt::self()->addObject(_object, name, object);
}

void PythonQtObjectPtr::addVariable(const QString& name, const QVariant& v)
{
  PythonQt::self()->addVariable(_object, name, v);
}

void PythonQtObjectPtr::removeVariable(const QString& name)
{
  PythonQt::self()->removeVariable(_object, name);
}

QVariant PythonQtObjectPtr::getVariable(const QString& name)
{
  return PythonQt::self()->getVariable(_object, name);
}


QVariant PythonQtObjectPtr::call(const QString& callable, const QVariantList& args, const QVariantMap& kwargs)
{
  return PythonQt::self()->call(_object, callable, args, kwargs);
}

QVariant PythonQtObjectPtr::call(const QVariantList& args, const QVariantMap& kwargs)
{
  return PythonQt::self()->call(_object, args, kwargs);
}

PythonQtObjectPtr::PythonQtObjectPtr(PyObject* o)
{
  _object = o;
  if (o) Py_INCREF(_object);
}

PythonQtObjectPtr::PythonQtObjectPtr(PythonQtSafeObjectPtr &&p) :_object(p.takeObject())
{
}

PythonQtObjectPtr::~PythonQtObjectPtr()
{
  if (_object) Py_DECREF(_object);
}

void PythonQtObjectPtr::setNewRef(PyObject* o)
{
  if (o != _object) {
    if (_object) Py_DECREF(_object);
    _object = o;
  }
}

bool PythonQtObjectPtr::fromVariant(const QVariant& variant) 
{
  if (!variant.isNull()) {
    PyObject* object = NULL;
    if (PythonQt::priv()->isPythonQtSafeObjectPtrMetaId(variant.userType())) {
      object = (*((const PythonQtSafeObjectPtr*)variant.constData())).object();
    } else if (PythonQt::priv()->isPythonQtObjectPtrMetaId(variant.userType())) {
      object = (*((const PythonQtObjectPtr*)variant.constData())).object();
    }
    setObject(object);
    return true;
  }
  else {
    setObject(NULL);
    return false;
  } 
}

QVariant PythonQtObjectPtr::toVariant()
{
  return QVariant::fromValue(PythonQtSafeObjectPtr(*this));
}


PythonQtObjectPtr & PythonQtObjectPtr::operator=(PythonQtSafeObjectPtr &&p)
{
  if (_object) {
    setObject(NULL);
  }
  _object = p.takeObject();
  return *this;
}

void PythonQtObjectPtr::setObject(PyObject* o)
{
  if (o != _object) {
    if (_object) Py_DECREF(_object);
    _object = o;
    if (_object) Py_INCREF(_object);
  }
}

//------------------------------------------------------------------------------

PythonQtSafeObjectPtr::PythonQtSafeObjectPtr(PyObject* o)
{
  _object = o;
  if (o) {
    PYTHONQT_GIL_SCOPE
    Py_INCREF(_object);
  }
}

PythonQtSafeObjectPtr::~PythonQtSafeObjectPtr()
{
  if (_object) {
    PYTHONQT_GIL_SCOPE
    Py_DECREF(_object);
  }
}

void PythonQtSafeObjectPtr::setObject(PyObject* o)
{
  if (o != _object) {
    PYTHONQT_GIL_SCOPE
    if (_object) Py_DECREF(_object);
    _object = o;
    if (_object) Py_INCREF(_object);
  }
}

void PythonQtSafeObjectPtr::setObjectUnsafe(PyObject* o)
{
  if (o != _object) {
    if (_object) Py_DECREF(_object);
    _object = o;
    if (_object) Py_INCREF(_object);
  }
}


//--------------------------------------------------------------------------

// we do this here to allow toLocalVariant() to create a QVariant
Q_DECLARE_METATYPE(PythonQtObjectPtr)

QVariant PythonQtObjectPtr::toLocalVariant()
{
  return QVariant::fromValue(PythonQtSafeObjectPtr(*this));
}
