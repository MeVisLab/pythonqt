#ifndef _PYTHONQTOBJECTPTR_H
#define _PYTHONQTOBJECTPTR_H

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
// \file    PythonQtObjectPtr.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"

#include "PythonQtSystem.h"
#include "PythonQtThreadSupport.h"
#include <QVariant>
#include <QVariantList>
#include <QVariantMap>

class PythonQtSafeObjectPtr;

//! a smart pointer that stores a PyObject pointer and that handles reference counting automatically
class PYTHONQT_EXPORT PythonQtObjectPtr
{
public:
  PythonQtObjectPtr():_object(NULL) {}

  PythonQtObjectPtr(const PythonQtObjectPtr &p)
  :_object(NULL) {
    setObject(p.object());
  }

  //! rvalue copy constructor, does not need any incref/decref.
  PythonQtObjectPtr(PythonQtObjectPtr &&p)
    :_object(p.takeObject()) {
  }

  //! rvalue copy constructor, does not need any incref/decref.
  PythonQtObjectPtr(PythonQtSafeObjectPtr &&p);

  //! If the given variant holds a PythonQtObjectPtr, extract the value from it and hold onto the reference. This results in an increment of the reference count.
  PythonQtObjectPtr(const QVariant& variant):_object(NULL) {
    fromVariant(variant);
  }

  PythonQtObjectPtr(PyObject* o);
  
  ~PythonQtObjectPtr();
  
  //! If the given variant holds a PythonQtObjectPtr, extract the value from it and hold onto the reference. This results in an increment of the reference count.
  bool fromVariant(const QVariant& variant);

  //! Returns a PythonQtSafeObjectPtr as a QVariant. It does not return a PythonQtObjectPtr, because that would be unsafe regarding the GIL.
  QVariant toVariant();

  //! Returns a PythonQtObjectPtr as a QVariant. Only use this when you know that the variant is only used locally and not stored outside of the current GIL scope.
  QVariant toLocalVariant();

  PythonQtObjectPtr &operator=(const PythonQtObjectPtr &p) {
    setObject(p.object());
    return *this;
  }

  //! rvalue assignment operator that steals the reference from p
  PythonQtObjectPtr &operator=(PythonQtObjectPtr &&p) {
    if (_object) {
      setObject(NULL);
    }
    _object = p.takeObject();
    return *this;
  }

  //! rvalue assignment operator that steals the reference from p
  PythonQtObjectPtr &operator=(PythonQtSafeObjectPtr &&p);

  PythonQtObjectPtr &operator=(PyObject* o) {
    setObject(o);
    return *this;
  }


  PythonQtObjectPtr &operator=(const QVariant& variant) {
    fromVariant(variant);
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
  void setNewRef(PyObject* o);
  
  PyObject* object() const {
    return _object;
  }

  //! evaluates the given script code in the context of this object and returns the result value
  QVariant evalScript(const QString& script, int start = Py_file_input);

  //! evaluates the given code and returns the result value (use Py_Compile etc. to create pycode from string)
  //! If pycode is NULL, a python error is printed.
  QVariant evalCode(PyObject* pycode);

  //! evaluates the given code in the context
  void evalFile(const QString& filename);

  //! add the given \c object to the \c module as a variable with \c name (it can be removed via clearVariable)
  void addObject(const QString& name, QObject* object);

  //! add the given variable to the module
  void addVariable(const QString& name, const QVariant& v);

  //! remove the given variable
  void removeVariable(const QString& name);

  //! get the variable with the \c name of the \c module, returns an invalid QVariant on error
  QVariant getVariable(const QString& name);

  //! call the given python object (in the scope of the current object), returns the result converted to a QVariant
  QVariant call(const QString& callable, const QVariantList& args = QVariantList(), const QVariantMap& kwargs = QVariantMap());

  //! call the contained python object directly, returns the result converted to a QVariant
  QVariant call(const QVariantList& args = QVariantList(), const QVariantMap& kwargs = QVariantMap());

  //! takes the object from the pointer, leaving the pointer empty.
  //! the caller has to take care about the decref of the taken object!
  PyObject* takeObject() {
    PyObject* o = _object;
    _object = NULL;
    return o;
  }

protected:

  void setObject(PyObject* o);
  
private:
  PyObject* _object;
};

//! a smart pointer that stores a PyObject pointer and that handles reference counting automatically
class PYTHONQT_EXPORT PythonQtSafeObjectPtr
{
public:
  PythonQtSafeObjectPtr() :_object(NULL) {}

  PythonQtSafeObjectPtr(const PythonQtSafeObjectPtr &p)
    :_object(NULL) {
    setObject(p.object());
  }

  PythonQtSafeObjectPtr(const PythonQtObjectPtr &p)
    :_object(NULL) {
    setObject(p.object());
  }

  //! rvalue copy constructor, does not need any incref/decref.
  PythonQtSafeObjectPtr(PythonQtSafeObjectPtr &&p)
    :_object(p._object) {
    p._object = NULL;
  }

  //! rvalue copy constructor, does not need any incref/decref.
  PythonQtSafeObjectPtr(PythonQtObjectPtr &&p)
    :_object(p.takeObject()) {
  }

  PythonQtSafeObjectPtr(PyObject* o);

  ~PythonQtSafeObjectPtr();

  PythonQtSafeObjectPtr &operator=(const PythonQtSafeObjectPtr &p) {
    setObject(p.object());
    return *this;
  }

  PythonQtSafeObjectPtr &operator=(const PythonQtObjectPtr &p) {
    setObjectUnsafe(p.object());
    return *this;
  }

  //! rvalue assignment operator that steals the reference from p
  PythonQtSafeObjectPtr &operator=(PythonQtSafeObjectPtr &&p) {
    if (_object) {
      setObject(NULL);
    }
    _object = p._object;
    p._object = NULL;
    return *this;
  }

  //! rvalue assignment operator that steals the reference from p
  PythonQtSafeObjectPtr &operator=(PythonQtObjectPtr &&p) {
    if (_object) {
      setObjectUnsafe(NULL);
    }
    _object = p.takeObject();
    return *this;
  }

  PythonQtSafeObjectPtr &operator=(PyObject* o) {
    setObject(o);
    return *this;
  }

  bool operator==(const PythonQtSafeObjectPtr &p) const {
    return object() == p.object();
  }

  bool operator!= (const PythonQtSafeObjectPtr& p) const {
    return !(*this == p);
  }

  bool operator==(PyObject* p) const {
    return object() == p;
  }

  bool operator!= (PyObject* p) const {
    return object() != p;
  }

  bool isNull() const { return !object(); }

  PyObject* operator->() const { return object(); }

  PyObject& operator*() const { return *(object()); }

  operator PyObject*() const { return object(); }

  PyObject* object() const {
    return _object;
  }

  //! takes the object from the pointer, leaving the pointer empty.
  //! the caller has to take care about the decref of the taken object!
  PyObject* takeObject() {
    PyObject* o = _object;
    _object = NULL;
    return o;
  }

protected:
  void setObject(PyObject* o);
  void setObjectUnsafe(PyObject* o);

private:
  PyObject* _object;
};

// We don't want QVariant to take PythonQtObjectPtr via QVariant::fromValue, because it is unsafe when using multi-threading/GIL
// A QVariant can still be obtained with PythonQtObjectPtr::toLocalVariant().
//Q_DECLARE_METATYPE(PythonQtObjectPtr)

// register PythonQtSafeObjectPtr to the meta type system
Q_DECLARE_METATYPE(PythonQtSafeObjectPtr)

#endif

