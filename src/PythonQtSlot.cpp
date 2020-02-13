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
// \file    PythonQtSlot.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtSlot.h"
#include "PythonQtInstanceWrapper.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMisc.h"
#include "PythonQtConversion.h"
#include <iostream>

#include <exception>
#include <stdexcept>

#include <QByteArray>

#if defined(__GNUG__) && !defined(__clang__)
#include <cxxabi.h>
#endif

bool PythonQtCallSlot(PythonQtClassInfo* classInfo, QObject* objectToCall, PyObject* args, bool strict, PythonQtSlotInfo* info, void* firstArgument, PyObject** pythonReturnValue, void** directReturnValuePointer, PythonQtPassThisOwnershipType* passThisOwnershipToCPP)
{
  if (directReturnValuePointer) {
    *directReturnValuePointer = NULL;
  }
  PythonQtArgumentFrame* frame = PythonQtArgumentFrame::newFrame();

  // the arguments that are passed to qt_metacall
  void* argList[PYTHONQT_MAX_ARGS];
  PyObject* result = NULL;
  int argc = info->parameterCount();
  const QList<PythonQtSlotInfo::ParameterInfo>& params = info->parameters();

  const PythonQtSlotInfo::ParameterInfo& returnValueParam = params.at(0);
  bool isVoidReturnValue = (returnValueParam.typeId == QMetaType::Void);

  // set return argument to NULL
  argList[0] = NULL;
  
  bool ok = true;
  bool skipFirst = false;
  PythonQtPassThisOwnershipType passThisOwnership = IgnoreOwnership;

  int instanceDecoOffset = 0;
  // it is important to keep arg1 on this scope, because it is stored in argList[1] and
  // would go away if it is moved into the if scope
  void* arg1 = NULL;
  if (info->isInstanceDecorator()) {
    skipFirst = true;
    instanceDecoOffset = 1;

    // for decorators on CPP objects, we take the cpp ptr, for QObjects we take the QObject pointer
    arg1 = firstArgument;
    if (!arg1) {
      arg1 = objectToCall;
    }
    if (arg1) {
      // upcast to correct parent class
      arg1 = ((char*)arg1)+info->upcastingOffset();
    }

    argList[1] = &arg1;
  }
  for (int i = 1 + instanceDecoOffset; i<argc && ok; i++) {
    const PythonQtSlotInfo::ParameterInfo& param = params.at(i);
    argList[i] = PythonQtConv::ConvertPythonToQt(param, PyTuple_GET_ITEM(args, i - 1 - instanceDecoOffset), strict, classInfo, NULL, frame);
    if (argList[i]==NULL) {
      ok = false;
      break;
    }
    if (param.newOwnerOfThis) {
      // (typical use case: setParent(someObject) -> pass ownership of this to someObject)
      if (argList[i] && (*(void**)argList[i])==NULL) {
        // if the object to which the ownership should be passed is NULL,
        // we need to pass the ownership to Python
        passThisOwnership = PassOwnershipToPython;
      } else {
        // if the object is given, pass the ownership to CPP
        passThisOwnership = PassOwnershipToCPP;
      }
    }
  }

  if (ok) {
    if (passThisOwnershipToCPP) {
      *passThisOwnershipToCPP = passThisOwnership;
    }

    // parameters are ok, now create the qt return value which is assigned to by metacall
    if (!isVoidReturnValue) {
      // create empty default value for the return value
      if (!directReturnValuePointer) {
        // create empty default value for the return value
        argList[0] = PythonQtConv::CreateQtReturnValue(returnValueParam, frame);
        if (argList[0]==NULL) {
          // return value could not be created, maybe we have a registered class with a default constructor, so that we can construct the pythonqt wrapper object and
          // pass its internal pointer
          PythonQtClassInfo* info = PythonQt::priv()->getClassInfo(returnValueParam.name);
          if (info && info->pythonQtClassWrapper()) {
            PyObject* emptyTuple = PyTuple_New(0);
            // 1) default construct an empty object as python object (owned by PythonQt), by calling the meta class with empty arguments
            result = PyObject_Call((PyObject*)info->pythonQtClassWrapper(), emptyTuple, NULL);
            if (result) {
              argList[0] = ((PythonQtInstanceWrapper*)result)->_wrappedPtr;
            }
            Py_DECREF(emptyTuple);
          }
        }
      } else {
        // we can use our pointer directly!
        argList[0] = directReturnValuePointer;
      }
    }


    PythonQt::ProfilingCB* profilingCB = PythonQt::priv()->profilingCB();
    if (profilingCB) {
      const char* className = NULL;
      if (info->decorator()) {
        className = info->decorator()->metaObject()->className();
      } else {
        className = objectToCall->metaObject()->className();
      }

      profilingCB(PythonQt::Enter, className, info->signature(), args);
    }

    // invoke the slot via metacall
    bool hadException = false;
    QObject* obj = info->decorator()?info->decorator():objectToCall;
    if (!obj) {
      hadException = true;
      PyErr_SetString(PyExc_RuntimeError, "Trying to call a slot on a deleted QObject!");
    } else {
      try {
        PythonQtSlotInfo::invokeQtMethod(obj, info, argList);
      } catch (std::out_of_range & e) {
        hadException = true;
        QByteArray what("std::out_of_range: ");
        what += e.what();
        PyErr_SetString(PyExc_IndexError, what.constData());
      } catch (std::bad_alloc & e) {
        hadException = true;
        QByteArray what("std::bad_alloc: ");
        what += e.what();
        PyErr_SetString(PyExc_MemoryError, what.constData());
      } catch (std::runtime_error & e) {
        hadException = true;
        QByteArray what("std::runtime_error: ");
        what += e.what();
        PyErr_SetString(PyExc_RuntimeError, what.constData());
      } catch (std::logic_error & e) {
        hadException = true;
        QByteArray what("std::logic_error: ");
        what += e.what();
        PyErr_SetString(PyExc_RuntimeError, what.constData());
      } catch (std::exception& e) {
        hadException = true;
        QByteArray what("std::exception: ");
        what += e.what();
        PyErr_SetString(PyExc_RuntimeError, what.constData());
#ifdef PYTHONQT_CATCH_ALL_EXCEPTIONS
  #if defined(__GNUG__) && !defined(__clang__)
      } catch (abi::__forced_unwind &) {
        throw;
  #endif
      } catch (...) {
        hadException = true;
        PyErr_SetString(PyExc_RuntimeError, "Unknown C++ exception.");
#endif
      }
    }
  
    if (profilingCB) {
      profilingCB(PythonQt::Leave, NULL, NULL, NULL);
    }

    // handle the return value (which in most cases still needs to be converted to a Python object)
    if (!hadException) {
      if (argList[0] || isVoidReturnValue) {
        if (directReturnValuePointer) {
          result = NULL;
        } else {
          // the resulting object maybe present already, because we created it above at 1)...
          if (!result) {
            result = PythonQtConv::ConvertQtValueToPython(returnValueParam, argList[0]);
          }
        }
      } else {
        QString e = QString("Called ") + info->fullSignature() + ", return type '" + returnValueParam.name + "' is ignored because it is unknown to PythonQt. Probably you should register it using qRegisterMetaType() or add a default constructor decorator to the class.";
        PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
        result = NULL;
        ok = false;
      }
    } else {
      result = NULL;
      ok = false;
    }
  }

  PythonQtArgumentFrame::deleteFrame(frame);

  *pythonReturnValue = result;
  
  if (result && returnValueParam.passOwnershipToPython) {
    // if the ownership should be passed to PythonQt, it has to be a PythonQtInstanceWrapper,
    // cast it and pass the ownership
    if (PyObject_TypeCheck(result, &PythonQtInstanceWrapper_Type)) {
      PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)result;
      wrapper->passOwnershipToPython();
    }
    // NOTE: a return value can not pass the ownership to CPP, it would not make sense...
  }
  // Either we have a 
  // a) a result value
  // b) a directReturnValuePointer and it has a value or the return value is void
  // NOTE: it is important to only return here, otherwise the stack will not be popped!!!
  return ok && (result || (directReturnValuePointer && (*directReturnValuePointer || isVoidReturnValue)));
}

//-----------------------------------------------------------------------------------

static PythonQtSlotFunctionObject *pythonqtslot_free_list = NULL;

PyObject *PythonQtSlotFunction_Call(PyObject *func, PyObject *args, PyObject *kw)
{
  PythonQtSlotFunctionObject* f = (PythonQtSlotFunctionObject*)func;
  return PythonQtMemberFunction_Call(f->m_ml, f->m_self, args, kw);
}

PyObject *PythonQtMemberFunction_Call(PythonQtSlotInfo* info, PyObject* m_self, PyObject *args, PyObject *kw)
{
  if (PyObject_TypeCheck(m_self, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*) m_self;
    if (!info->isClassDecorator() && (self->_obj==NULL && self->_wrappedPtr==NULL)) {
      QString error = QString("Trying to call '") + info->slotName() + "' on a destroyed " + self->classInfo()->className() + " object";
      PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(error));
      return NULL;
    } else {
      PythonQtPassThisOwnershipType ownership;
      PyObject* result = PythonQtSlotFunction_CallImpl(self->classInfo(), self->_obj, info, args, kw, self->_wrappedPtr, NULL, &ownership);
      if (ownership == PassOwnershipToCPP) {
        self->passOwnershipToCPP();
      } else if (ownership == PassOwnershipToPython) {
        self->passOwnershipToPython();
      }
      return result;
    }
  } else if (m_self->ob_type == &PythonQtClassWrapper_Type) {
    PythonQtClassWrapper* type = (PythonQtClassWrapper*) m_self;
    if (info->isClassDecorator()) {
      return PythonQtSlotFunction_CallImpl(type->classInfo(), NULL, info, args, kw);
    } else {
      // otherwise, it is an unbound call and we have an instanceDecorator or normal slot...
      Py_ssize_t argc = PyTuple_Size(args);
      if (argc>0) {
        PyObject* firstArg = PyTuple_GET_ITEM(args, 0);
        if (PyObject_TypeCheck(firstArg, (PyTypeObject*)&PythonQtInstanceWrapper_Type)
          && ((PythonQtInstanceWrapper*)firstArg)->classInfo()->inherits(type->classInfo())) {
          PythonQtInstanceWrapper* self = (PythonQtInstanceWrapper*)firstArg;
          if (!info->isClassDecorator() && (self->_obj==NULL && self->_wrappedPtr==NULL)) {
            QString error = QString("Trying to call '") + info->slotName() + "' on a destroyed " + self->classInfo()->className() + " object";
            PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(error));
            return NULL;
          }
          // strip the first argument...
          PyObject* newargs = PyTuple_GetSlice(args, 1, argc);
          PythonQtPassThisOwnershipType ownership;
          PyObject* result = PythonQtSlotFunction_CallImpl(self->classInfo(), self->_obj, info, newargs, kw, self->_wrappedPtr, NULL, &ownership);
          if (ownership == PassOwnershipToCPP) {
            self->passOwnershipToCPP();
          } else if (ownership == PassOwnershipToPython) {
            self->passOwnershipToPython();
          }
          Py_DECREF(newargs);
          return result;
        } else {
          // first arg is not of correct type!
          QString error = "slot " + info->fullSignature() + " requires " + type->classInfo()->className() + " instance as first argument, got " + firstArg->ob_type->tp_name;
          PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(error));
          return NULL;
        }
      } else {
        // wrong number of args
        QString error = "slot " + info->fullSignature() + " requires " + type->classInfo()->className() + " instance as first argument.";
        PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(error));
        return NULL;
      }
    }
  }
  return NULL;
}

PyObject *PythonQtSlotFunction_CallImpl(PythonQtClassInfo* classInfo, QObject* objectToCall, PythonQtSlotInfo* info, PyObject *args, PyObject * kw, void* firstArg, void** directReturnValuePointer,  PythonQtPassThisOwnershipType* passThisOwnershipToCPP)
{
  int argc = args?PyTuple_Size(args):0;

  if (passThisOwnershipToCPP) {
    *passThisOwnershipToCPP = IgnoreOwnership;
  }

  PyObject* r = NULL;
  bool ok = false;

  if (directReturnValuePointer) {
    *directReturnValuePointer = NULL;
  }

  if( (kw != NULL && PyDict_Check(kw) && (PyDict_Size(kw) > 0)) ) {
    // -------------------keyword args slot call -------------------------
    
    // keyword arguments are given as dict, must be mapped to arguments in correct order
    // very complicated, so call them only on a slot with last variable name kwargs
    // slot must be implemented as
    // <type> <name>(any number of positional arguments, QVariantMap kwargs)
    int numCombinedArgs = argc + 1;
    PyObject* combinedArgs = PyTuple_New(numCombinedArgs);

    for (int i = 0; i<argc; i++) {
      PyObject* p = PyTuple_GetItem(args,i);
      Py_INCREF(p);
      PyTuple_SetItem(combinedArgs,i,p);
    }

    Py_INCREF(kw);
    PyTuple_SetItem(combinedArgs, numCombinedArgs - 1, kw);

    bool kwSlotFound = false;

    QList<QByteArray> parameterNames;
    PythonQtSlotInfo* slotInfo = info;
    static QByteArray kwargs = "kwargs";
    while (slotInfo) {
      parameterNames = slotInfo->metaMethod()->parameterNames();
      if (!parameterNames.isEmpty() && (parameterNames.last().constData() == kwargs)) {
        kwSlotFound = true;
        break;
      }
      slotInfo = slotInfo->nextInfo();
    }
    if (kwSlotFound) {
#ifdef PYTHONQT_DEBUG
      std::cout << "called " << slotInfo->metaMethod()->typeName() << " " << slotInfo->signature().constData() << std::endl;
#endif

      ok = PythonQtCallSlot(classInfo, objectToCall, combinedArgs, false, slotInfo, firstArg, &r, directReturnValuePointer, passThisOwnershipToCPP);
      if (!ok && !PyErr_Occurred()) {
        QString e = QString("Called ") + info->fullSignature() + " with wrong arguments: " + PythonQtConv::PyObjGetString(args);
        PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
      }
    } else {
      QString e = QString("Called ") + info->fullSignature() + " with keyword arguments, but called slot does not support kwargs.";
      PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
    }

    Py_DECREF(combinedArgs);
  } else {
  // -------------------Normal slot call -------------------------
    if (info->nextInfo()) {
      // overloaded slot call, try on all slots with strict conversion first
      bool strict = true;
      PythonQtSlotInfo* i = info;
      while (i) {
        bool skipFirst = i->isInstanceDecorator();
        if (i->parameterCount()-1-(skipFirst?1:0) == argc) {
          PyErr_Clear();
          ok = PythonQtCallSlot(classInfo, objectToCall, args, strict, i, firstArg, &r, directReturnValuePointer, passThisOwnershipToCPP);
          if (PyErr_Occurred() || ok) break;
        }
        i = i->nextInfo();
        if (!i) {
          if (strict) {
            // one more run without being strict
            strict = false;
            i = info;
          }
        }
      }
      if (!ok && !PyErr_Occurred()) {
        QString e = QString("Could not find matching overload for given arguments:\n" + PythonQtConv::PyObjGetString(args) + "\n The following slots are available:\n");
        PythonQtSlotInfo* i = info;
        while (i) {
          e += QString(i->fullSignature()) + "\n";
          i = i->nextInfo();
        }
        PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
      }
    } else {
      // simple (non-overloaded) slot call
      bool skipFirst = info->isInstanceDecorator();
      if (info->parameterCount()-1-(skipFirst?1:0) == argc) {
        PyErr_Clear();
  #ifdef PYTHONQT_DEBUG
        std::cout << "called " << info->metaMethod()->typeName() << " " << info->signature().constData() << std::endl;
  #endif
        ok = PythonQtCallSlot(classInfo, objectToCall, args, false, info, firstArg, &r, directReturnValuePointer, passThisOwnershipToCPP);
        if (!ok && !PyErr_Occurred()) {
          QString e = QString("Called ") + info->fullSignature() + " with wrong arguments: " + PythonQtConv::PyObjGetString(args);
          PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
        }
      } else {
        QString e = QString("Called ") + info->fullSignature() + " with wrong number of arguments: " + PythonQtConv::PyObjGetString(args);
        PyErr_SetString(PyExc_ValueError, QStringToPythonConstCharPointer(e));
      }
    }
  }

  return r;
}

PyObject *
PythonQtSlotFunction_New(PythonQtSlotInfo *ml, PyObject *self, PyObject *module)
{
  PythonQtSlotFunctionObject *op;
  op = pythonqtslot_free_list;
  if (op != NULL) {
    pythonqtslot_free_list = (PythonQtSlotFunctionObject *)(op->m_self);
    PyObject_INIT(op, &PythonQtSlotFunction_Type);
  }
  else {
    op = PyObject_GC_New(PythonQtSlotFunctionObject, &PythonQtSlotFunction_Type);
    if (op == NULL)
      return NULL;
  }
  op->m_ml = ml;
  Py_XINCREF(self);
  op->m_self = self;
  Py_XINCREF(module);
  op->m_module = module;
  PyObject_GC_Track(op);
  return (PyObject *)op;
}

PythonQtSlotInfo*
PythonQtSlotFunction_GetSlotInfo(PyObject *op)
{
  if (!PythonQtSlotFunction_Check(op)) {
    PyErr_Format(PyExc_SystemError, "%s:%d: bad argument to internal function", __FILE__, __LINE__);
    return NULL;
  }
  return ((PythonQtSlotFunctionObject *)op) -> m_ml;
}

PyObject *
PythonQtSlotFunction_GetSelf(PyObject *op)
{
  if (!PythonQtSlotFunction_Check(op)) {
    PyErr_Format(PyExc_SystemError, "%s:%d: bad argument to internal function", __FILE__, __LINE__);
    return NULL;
  }
  return ((PythonQtSlotFunctionObject *)op) -> m_self;
}

/* Methods (the standard built-in methods, that is) */

static void
meth_dealloc(PythonQtSlotFunctionObject *m)
{
  PyObject_GC_UnTrack(m);
  Py_XDECREF(m->m_self);
  Py_XDECREF(m->m_module);
  m->m_self = (PyObject *)pythonqtslot_free_list;
  pythonqtslot_free_list = m;
}

static PyObject *
meth_get__doc__(PythonQtSlotFunctionObject * m, void * /*closure*/)
{
  QByteArray doc;
  PythonQtSlotInfo* info = m->m_ml;
  const QByteArray& returnType = info->parameters().at(0).name;
  int returnTypeId = info->parameters().at(0).typeId;

  PythonQtSlotInfo* longestInfo = info;
  PythonQtSlotInfo* infoSearch = info->nextInfo();
  while (infoSearch) {
    if (longestInfo->parameterCount() < infoSearch->parameterCount()) {
      longestInfo = infoSearch;
    }
    infoSearch = infoSearch->nextInfo();
  }
  doc = "X." + info->slotName(true) + "(";
  int firstArgOffset = info->isInstanceDecorator() ? 2 : 1;
  QList<QByteArray> names = longestInfo->metaMethod()->parameterNames();
  for (int i = firstArgOffset; i < longestInfo->parameterCount(); i++) {
    if (i != firstArgOffset) {
      doc += ", ";
    }
    if (!names.at(i - 1).isEmpty()) {
      doc += names.at(i - 1);
    } else {
      doc += QString('a' + i - firstArgOffset);
    }
  }
  doc += ")";
  QByteArray pyReturnType;
  if (returnType == "QString" || returnType == "SbName" || returnType == "SbString") {
    pyReturnType = "str";
  } else if (returnType.startsWith("QVector<") || returnType.startsWith("QList<") ||
             returnType == "QStringList" || returnType == "QObjectList" || returnType == "QVariantList") {
    pyReturnType = "tuple";
  } else if (returnType.startsWith("QHash<") || returnType.startsWith("QMap<") ||
    returnType == "QVariantMap" || returnType == "QVariantHash") {
    pyReturnType = "dict";
  } else if (returnTypeId == QVariant::Bool) {
    pyReturnType = "bool";
  } else if (returnTypeId == PythonQtMethodInfo::Variant) {
    pyReturnType = "object";
  } else if (returnTypeId == QMetaType::Char || returnTypeId == QMetaType::UChar ||
    returnTypeId == QMetaType::Short || returnTypeId == QMetaType::UShort ||
    returnTypeId == QMetaType::Int || returnTypeId == QMetaType::UInt ||
    returnTypeId == QMetaType::Long || returnTypeId == QMetaType::ULong ||
    returnTypeId == QMetaType::LongLong || returnTypeId == QMetaType::ULongLong) {
    pyReturnType = "int";
  } else if (returnTypeId == QMetaType::Float || returnTypeId == QMetaType::Double) {
    pyReturnType = "float";
  } else {
    PythonQtClassInfo* returnTypeClassInfo = PythonQt::priv()->getClassInfo(returnType);
    if (returnTypeClassInfo) {
      PyObject* s = PyObject_GetAttrString(returnTypeClassInfo->pythonQtClassWrapper(), "__module__");
      if (s) {
        pyReturnType = QByteArray(PyString_AsString(s)) + "." + returnType;
        Py_DECREF(s);
      }
    }
  }
  if (!pyReturnType.isEmpty()) {
    doc += " -> " + pyReturnType;
  }
  return PyString_FromString(doc.constData());
}

static PyObject *
meth_get__name__(PythonQtSlotFunctionObject *m, void * /*closure*/)
{
  return PyString_FromString(m->m_ml->slotName(true));
}

static int
meth_traverse(PythonQtSlotFunctionObject *m, visitproc visit, void *arg)
{
  int err;
  if (m->m_self != NULL) {
    err = visit(m->m_self, arg);
    if (err)
      return err;
  }
  if (m->m_module != NULL) {
    err = visit(m->m_module, arg);
    if (err)
      return err;
  }
  return 0;
}

static PyObject *
meth_get__self__(PythonQtSlotFunctionObject *m, void * /*closure*/)
{
  PyObject *self;
#ifndef PY3K
  if (PyEval_GetRestricted()) {
    PyErr_SetString(PyExc_RuntimeError,
      "method.__self__ not accessible in restricted mode");
    return NULL;
  }
#endif
  self = m->m_self;
  if (self == NULL)
    self = Py_None;
  Py_INCREF(self);
  return self;
}

static PyGetSetDef meth_getsets [] = {
  {const_cast<char*>("__doc__"),  (getter)meth_get__doc__,  NULL, NULL},
  {const_cast<char*>("__name__"), (getter)meth_get__name__, NULL, NULL},
  {const_cast<char*>("__self__"), (getter)meth_get__self__, NULL, NULL},
  {NULL, NULL, NULL,NULL},
};

#if PY_MAJOR_VERSION == 2 && PY_MINOR_VERSION < 6
#define PY_WRITE_RESTRICTED WRITE_RESTRICTED
#endif

#define OFF(x) offsetof(PythonQtSlotFunctionObject, x)

static PyMemberDef meth_members[] = {
  {const_cast<char*>("__module__"),    T_OBJECT,     OFF(m_module), PY_WRITE_RESTRICTED},
  {NULL}
};

static PyObject *PythonQtSlotFunction_parameterTypes(PythonQtSlotFunctionObject* type)
{
  return PythonQtMemberFunction_parameterTypes(type->m_ml);
}

static PyObject *PythonQtSlotFunction_parameterNames(PythonQtSlotFunctionObject* type)
{
  return PythonQtMemberFunction_parameterNames(type->m_ml);
}

static PyObject *PythonQtSlotFunction_typeName(PythonQtSlotFunctionObject* type)
{
  return PythonQtMemberFunction_typeName(type->m_ml);
}

PyObject *PythonQtMemberFunction_parameterTypes(PythonQtSlotInfo* theInfo)
{
  PythonQtSlotInfo* info = theInfo;
  int count = 0;
  while (info) {
    info = info->nextInfo();
    count++;
  }
  info = theInfo;
  PyObject* result = PyTuple_New(count);
  for (int j = 0;j<count;j++) {
    QList<QByteArray> types = info->metaMethod()->parameterTypes();
    PyObject* tuple = PyTuple_New(types.count());
    for (int i = 0; i<types.count();i++) {
      PyTuple_SET_ITEM(tuple, i, PyString_FromString(types.at(i).constData()));
    }
    info = info->nextInfo();
    PyTuple_SET_ITEM(result, j, tuple);
  }
  return result;
}

PyObject *PythonQtMemberFunction_parameterNames(PythonQtSlotInfo* theInfo)
{
  PythonQtSlotInfo* info = theInfo;
  int count = 0;
  while (info) {
    info = info->nextInfo();
    count++;
  }
  info = theInfo;
  PyObject* result = PyTuple_New(count);
  for (int j = 0;j<count;j++) {
    QList<QByteArray> names = info->metaMethod()->parameterNames();
    PyObject* tuple = PyTuple_New(names.count());
    for (int i = 0; i<names.count();i++) {
      PyTuple_SET_ITEM(tuple, i, PyString_FromString(names.at(i).constData()));
    }
    info = info->nextInfo();
    PyTuple_SET_ITEM(result, j, tuple);
  }
  return result;
}

PyObject *PythonQtMemberFunction_typeName(PythonQtSlotInfo* theInfo)
{
  PythonQtSlotInfo* info = theInfo;
  int count = 0;
  while (info) {
    info = info->nextInfo();
    count++;
  }
  info = theInfo;
  PyObject* result = PyTuple_New(count);
  for (int j = 0;j<count;j++) {
    QByteArray name = PythonQtUtils::typeName(*info->metaMethod());
    PyTuple_SET_ITEM(result, j, PyString_FromString(name.constData()));
    info = info->nextInfo();
  }
  return result;
}

static PyMethodDef meth_methods[] = {
  {"parameterTypes", (PyCFunction)PythonQtSlotFunction_parameterTypes, METH_NOARGS,
  "Returns a tuple of tuples of the C++ parameter types for all overloads of the slot"
  },
  {"parameterNames", (PyCFunction)PythonQtSlotFunction_parameterNames, METH_NOARGS,
  "Returns a tuple of tuples of the C++ parameter type names (if available), for all overloads of the slot"
  },
  {"typeName", (PyCFunction)PythonQtSlotFunction_typeName, METH_NOARGS,
  "Returns a tuple of the C++ return value types of each slot overload"
  },
  {NULL, NULL, 0 , NULL}  /* Sentinel */
};

static PyObject *
meth_repr(PythonQtSlotFunctionObject *f)
{
  if (f->m_self->ob_type == &PythonQtClassWrapper_Type) {
    PythonQtClassWrapper* self = (PythonQtClassWrapper*) f->m_self;
    return PyString_FromFormat("<unbound qt slot %s of %s type>",
      f->m_ml->slotName().data(),
      self->classInfo()->className().constData());
  } else {
    return PyString_FromFormat("<qt slot %s of %s instance at %p>",
      f->m_ml->slotName().data(),
      f->m_self->ob_type->tp_name,
      f->m_self);
  }
}

static int
meth_compare(PythonQtSlotFunctionObject *a, PythonQtSlotFunctionObject *b)
{
  if (a->m_self != b->m_self)
    return (a->m_self < b->m_self) ? -1 : 1;
  if (a->m_ml == b->m_ml)
    return 0;
  if (strcmp(a->m_ml->signature().constData(), b->m_ml->signature().constData()) < 0)
    return -1;
  else
    return 1;
}

static long
meth_hash(PythonQtSlotFunctionObject *a)
{
  long x,y;
  if (a->m_self == NULL)
    x = 0;
  else {
    x = PyObject_Hash(a->m_self);
    if (x == -1)
      return -1;
  }
  y = _Py_HashPointer((void*)(a->m_ml));
  if (y == -1)
    return -1;
  x ^= y;
  if (x == -1)
    x = -2;
  return x;
}

// for python 3.x
static PyObject*
meth_richcompare(PythonQtSlotFunctionObject *a, PythonQtSlotFunctionObject *b, int op)
{
  int x = meth_compare(a, b);
  bool r = false;
  if (op == Py_LT)
    r = x < 0;
  else if (op == Py_LE)
    r = x < 1;
  else if (op == Py_EQ)
    r = x == 0;
  else if (op == Py_NE)
    r = x != 0;
  else if (op == Py_GE)
    r = x > -1;
  else if (op == Py_GT)
    r = x > 0;
  if (r)
    Py_RETURN_TRUE;
  else
    Py_RETURN_FALSE;
}

PyTypeObject PythonQtSlotFunction_Type = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    "builtin_qt_slot",
    sizeof(PythonQtSlotFunctionObject),
    0,
    (destructor)meth_dealloc,     /* tp_dealloc */
    0,          /* tp_print */
    0,          /* tp_getattr */
    0,          /* tp_setattr */
#ifdef PY3K
    0,
#else
    (cmpfunc)meth_compare,      /* tp_compare */
#endif
    (reprfunc)meth_repr,      /* tp_repr */
    0,          /* tp_as_number */
    0,          /* tp_as_sequence */
    0,          /* tp_as_mapping */
    (hashfunc)meth_hash,      /* tp_hash */
    PythonQtSlotFunction_Call,      /* tp_call */
    0,          /* tp_str */
    PyObject_GenericGetAttr,    /* tp_getattro */
    0,          /* tp_setattro */
    0,          /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,/* tp_flags */
    0,          /* tp_doc */
    (traverseproc)meth_traverse,    /* tp_traverse */
    0,          /* tp_clear */
    (richcmpfunc)meth_richcompare,          /* tp_richcompare */
    0,          /* tp_weaklistoffset */
    0,          /* tp_iter */
    0,          /* tp_iternext */
    meth_methods,          /* tp_methods */
    meth_members,       /* tp_members */
    meth_getsets,       /* tp_getset */
    0,          /* tp_base */
    0,          /* tp_dict */
};

/* Clear out the free list */

void
PythonQtSlotFunction_Fini(void)
{
  while (pythonqtslot_free_list) {
    PythonQtSlotFunctionObject *v = pythonqtslot_free_list;
    pythonqtslot_free_list = (PythonQtSlotFunctionObject *)(v->m_self);
    PyObject_GC_Del(v);
  }
}

