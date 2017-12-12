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
// \file    PythonQtClassWrapper.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtClassWrapper.h"
#include <QObject>

#include "PythonQt.h"
#include "PythonQtSlot.h"
#include "PythonQtSignal.h"
#include "PythonQtClassInfo.h"
#include "PythonQtConversion.h"
#include "PythonQtInstanceWrapper.h"

static PyObject* PythonQtInstanceWrapper_invert(PythonQtInstanceWrapper* wrapper)
{
  PyObject* result = NULL;
  static QByteArray memberName = "__invert__";
  PythonQtMemberInfo opSlot = wrapper->classInfo()->member(memberName);
  if (opSlot._type == PythonQtMemberInfo::Slot) {
    result = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, NULL, NULL, wrapper->_wrappedPtr);
  }
  return result;
}

static PyObject* PythonQtInstanceWrapper_negative(PythonQtInstanceWrapper* wrapper)
{
  PyObject* result = NULL;
  static QByteArray memberName = "__sub__";
  PythonQtMemberInfo opSlot = wrapper->classInfo()->member(memberName);
  if (opSlot._type == PythonQtMemberInfo::Slot) {
    result = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, NULL, NULL, wrapper->_wrappedPtr);
  }
  return result;
}

static int PythonQtInstanceWrapper_nonzero(PythonQtInstanceWrapper* wrapper)
{
  int result = (wrapper->_wrappedPtr == NULL && wrapper->_obj == NULL)?0:1;
  if (result) {
    static QByteArray memberName = "__nonzero__";
    PythonQtMemberInfo opSlot = wrapper->classInfo()->member(memberName);
    if (opSlot._type == PythonQtMemberInfo::Slot) {
      PyObject* resultObj = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, NULL, NULL, wrapper->_wrappedPtr);
      if (resultObj == Py_False) {
        result = 0;
      }
      Py_XDECREF(resultObj);
    }
  }
  return result;
}

static Py_ssize_t PythonQtInstanceWrapper_length(PythonQtInstanceWrapper* wrapper)
{
  qint64 result = -1;
  if (wrapper->_wrappedPtr != NULL || wrapper->_obj != NULL) {
    static QByteArray memberName = "__len__";
    PythonQtMemberInfo opSlot = wrapper->classInfo()->member(memberName);
    if (opSlot._type == PythonQtMemberInfo::Slot) {
      PyObject* resultObj = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, NULL, NULL, wrapper->_wrappedPtr);
      bool ok;
      result = PythonQtConv::PyObjGetLongLong(resultObj, false, ok);
      if (!ok) {
        result = -1;
      }
      Py_XDECREF(resultObj);
    }
  }
  return result;
}

static int PythonQtInstanceWrapper_setitem(PyObject* self, PyObject* index, PyObject* value)
{
  PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)self;
  PythonQtMemberInfo opSlot;
  bool isSetItem = false;
  if (value) {
    isSetItem = true;
    opSlot = wrapper->classInfo()->member("__setitem__");
  } else {
    opSlot = wrapper->classInfo()->member("__delitem__");
  }
  if (opSlot._type == PythonQtMemberInfo::Slot) {
    PyObject* args = PyTuple_New(isSetItem?2:1);
    Py_INCREF(index);
    PyTuple_SET_ITEM(args, 0, index);
    if (isSetItem) {
      Py_INCREF(value);
      PyTuple_SET_ITEM(args, 1, value);
    }
    PyObject* result = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, args, NULL, wrapper->_wrappedPtr);
    if (result) {
      Py_DECREF(result);
    }
    Py_DECREF(args);
    return PyErr_Occurred()?-1:0;
  } else {
    return -1;
  }
}

static PyObject* PythonQtInstanceWrapper_binaryfunc(PyObject* self, PyObject* other, const QByteArray& opName, const QByteArray& fallbackOpName = QByteArray())
{
  // since we disabled type checking, we can receive any object as self, but we currently only support
  // different objects on the right. Otherwise we would need to generate __radd__ etc. methods.
  if (!PyObject_TypeCheck(self, &PythonQtInstanceWrapper_Type)) {
    QString error = "Unsupported operation " + opName + "(" + self->ob_type->tp_name + ", " +  other->ob_type->tp_name + ")";
    PyErr_SetString(PyExc_ArithmeticError, QStringToPythonCharPointer(error));
    return NULL;
  }
  PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)self;
  PyObject* result = NULL;
  PythonQtMemberInfo opSlot = wrapper->classInfo()->member(opName);
  if (opSlot._type == PythonQtMemberInfo::Slot) {
    PyObject* args = PyTuple_New(1);
    Py_INCREF(other);
    PyTuple_SET_ITEM(args, 0, other);
    result = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, args, NULL, wrapper->_wrappedPtr);
    Py_DECREF(args);
    if (!result && !fallbackOpName.isEmpty()) {
      // try fallback if we did not get a result
      result = PythonQtInstanceWrapper_binaryfunc(self, other, fallbackOpName);
    }
  }
  return result;
}

static PyObject* PythonQtInstanceWrapper_mul(PyObject* self, PyObject* other)
{
  // since we disabled type checking, we can receive any object as self,
  // in case of multiplication we support this by switching the types:
  if (!PyObject_TypeCheck(self, &PythonQtInstanceWrapper_Type)) {
    PyObject* tmp;
    tmp = self;
    self = other;
    other = tmp;
  }
  PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)self;
  PyObject* result = NULL;
  PythonQtMemberInfo opSlot = wrapper->classInfo()->member("__mul__");
  if (opSlot._type == PythonQtMemberInfo::Slot) {
    PyObject* args = PyTuple_New(1);
    Py_INCREF(other);
    PyTuple_SET_ITEM(args, 0, other);
    result = PythonQtSlotFunction_CallImpl(wrapper->classInfo(), wrapper->_obj, opSlot._slot, args, NULL, wrapper->_wrappedPtr);
    Py_DECREF(args);
  }
  return result;
}

#define BINARY_OP(NAME) \
static PyObject* PythonQtInstanceWrapper_ ## NAME(PyObject* self, PyObject* other) \
{ \
  static const QByteArray opName("__" #NAME "__"); \
  return PythonQtInstanceWrapper_binaryfunc(self, other, opName); \
}

#define BINARY_OP_INPLACE(NAME) \
  static PyObject* PythonQtInstanceWrapper_i ## NAME(PyObject* self, PyObject* other) \
{ \
  static const QByteArray opName("__i" #NAME "__"); \
  static const QByteArray fallbackName("__" #NAME "__"); \
  return PythonQtInstanceWrapper_binaryfunc(self, other, opName, fallbackName); \
}

BINARY_OP(add)
BINARY_OP(sub)
BINARY_OP(div)
BINARY_OP(and)
BINARY_OP(or)
BINARY_OP(xor)
BINARY_OP(mod)
BINARY_OP(lshift)
BINARY_OP(rshift)
BINARY_OP(getitem)

BINARY_OP_INPLACE(add)
BINARY_OP_INPLACE(sub)
BINARY_OP_INPLACE(mul)
BINARY_OP_INPLACE(div)
BINARY_OP_INPLACE(and)
BINARY_OP_INPLACE(or)
BINARY_OP_INPLACE(xor)
BINARY_OP_INPLACE(mod)
BINARY_OP_INPLACE(lshift)
BINARY_OP_INPLACE(rshift)

static void initializeSlots(PythonQtClassWrapper* wrap)
{
  int typeSlots = wrap->classInfo()->typeSlots();
  if (typeSlots) {

    if (typeSlots & PythonQt::Type_MappingGetItem) {
      wrap->_base.as_mapping.mp_subscript = (binaryfunc)PythonQtInstanceWrapper_getitem;
    }
    if (typeSlots & PythonQt::Type_MappingSetItem) {
      wrap->_base.as_mapping.mp_ass_subscript = (objobjargproc)PythonQtInstanceWrapper_setitem;
    }
    if (typeSlots & (PythonQt::Type_MappingGetItem | PythonQt::Type_MappingSetItem)) {
      if (typeSlots & PythonQt::Type_Length) {
        wrap->_base.as_mapping.mp_length = (lenfunc)PythonQtInstanceWrapper_length;
      }
    }

    if (typeSlots & PythonQt::Type_Add) {
      wrap->_base.as_number.nb_add = (binaryfunc)PythonQtInstanceWrapper_add;
    }
    if (typeSlots & PythonQt::Type_Subtract) {
      wrap->_base.as_number.nb_subtract = (binaryfunc)PythonQtInstanceWrapper_sub;
      wrap->_base.as_number.nb_negative = (unaryfunc)PythonQtInstanceWrapper_negative;
    }
    if (typeSlots & PythonQt::Type_Multiply) {
      wrap->_base.as_number.nb_multiply = (binaryfunc)PythonQtInstanceWrapper_mul;
    }
    if (typeSlots & PythonQt::Type_Divide) {
#ifndef PY3K
      wrap->_base.as_number.nb_divide = (binaryfunc)PythonQtInstanceWrapper_div;
#endif
      wrap->_base.as_number.nb_true_divide = (binaryfunc)PythonQtInstanceWrapper_div;
    }
    if (typeSlots & PythonQt::Type_And) {
      wrap->_base.as_number.nb_and = (binaryfunc)PythonQtInstanceWrapper_and;
    }
    if (typeSlots & PythonQt::Type_Or) {
      wrap->_base.as_number.nb_or = (binaryfunc)PythonQtInstanceWrapper_or;
    }
    if (typeSlots & PythonQt::Type_Xor) {
      wrap->_base.as_number.nb_xor = (binaryfunc)PythonQtInstanceWrapper_xor;
    }
    if (typeSlots & PythonQt::Type_Mod) {
      wrap->_base.as_number.nb_remainder = (binaryfunc)PythonQtInstanceWrapper_mod;
    }
    if (typeSlots & PythonQt::Type_LShift) {
      wrap->_base.as_number.nb_lshift = (binaryfunc)PythonQtInstanceWrapper_lshift;
    }
    if (typeSlots & PythonQt::Type_RShift) {
      wrap->_base.as_number.nb_rshift = (binaryfunc)PythonQtInstanceWrapper_rshift;
    }

    if (typeSlots & PythonQt::Type_InplaceAdd) {
      wrap->_base.as_number.nb_inplace_add = (binaryfunc)PythonQtInstanceWrapper_iadd;
    }
    if (typeSlots & PythonQt::Type_InplaceSubtract) {
      wrap->_base.as_number.nb_inplace_subtract = (binaryfunc)PythonQtInstanceWrapper_isub;
    }
    if (typeSlots & PythonQt::Type_InplaceMultiply) {
      wrap->_base.as_number.nb_inplace_multiply = (binaryfunc)PythonQtInstanceWrapper_imul;
    }
    if (typeSlots & PythonQt::Type_InplaceDivide) {
#ifndef PY3K
      wrap->_base.as_number.nb_inplace_divide = (binaryfunc)PythonQtInstanceWrapper_idiv;
#endif
      wrap->_base.as_number.nb_inplace_true_divide = (binaryfunc)PythonQtInstanceWrapper_idiv;
    }
    if (typeSlots & PythonQt::Type_InplaceAnd) {
      wrap->_base.as_number.nb_inplace_and = (binaryfunc)PythonQtInstanceWrapper_iand;
    }
    if (typeSlots & PythonQt::Type_InplaceOr) {
      wrap->_base.as_number.nb_inplace_or = (binaryfunc)PythonQtInstanceWrapper_ior;
    }
    if (typeSlots & PythonQt::Type_InplaceXor) {
      wrap->_base.as_number.nb_inplace_xor = (binaryfunc)PythonQtInstanceWrapper_ixor;
    }
    if (typeSlots & PythonQt::Type_InplaceMod) {
      wrap->_base.as_number.nb_inplace_remainder = (binaryfunc)PythonQtInstanceWrapper_imod;
    }
    if (typeSlots & PythonQt::Type_InplaceLShift) {
      wrap->_base.as_number.nb_inplace_lshift = (binaryfunc)PythonQtInstanceWrapper_ilshift;
    }
    if (typeSlots & PythonQt::Type_InplaceRShift) {
      wrap->_base.as_number.nb_inplace_rshift = (binaryfunc)PythonQtInstanceWrapper_irshift;
    }
    if (typeSlots & PythonQt::Type_Invert) {
      wrap->_base.as_number.nb_invert = (unaryfunc)PythonQtInstanceWrapper_invert;
    }
    if (typeSlots & PythonQt::Type_NonZero) {
#ifdef PY3K
      wrap->_base.as_number.nb_bool = (inquiry)PythonQtInstanceWrapper_nonzero;
#else
      wrap->_base.as_number.nb_nonzero = (inquiry)PythonQtInstanceWrapper_nonzero;
#endif
    }
  }
}

static PyObject* PythonQtClassWrapper_alloc(PyTypeObject *self, Py_ssize_t nitems)
{
  // call the default type alloc
  PyObject* obj = PyType_Type.tp_alloc(self, nitems);

  // take current class type, if we are called via newPythonQtClassWrapper()
  PythonQtClassWrapper* wrap = (PythonQtClassWrapper*)obj;
  wrap->_classInfo = PythonQt::priv()->currentClassInfoForClassWrapperCreation();
  if (wrap->_classInfo) {
    initializeSlots(wrap);
  }

  return obj;
}


static int PythonQtClassWrapper_init(PythonQtClassWrapper* self, PyObject* args, PyObject* kwds)
{
  // call the default type init
  if (PyType_Type.tp_init((PyObject *)self, args, kwds) < 0) {
    return -1;
  }
  self->_dynamicClassInfo = NULL;

  // if we have no CPP class information, try our base class
  if (!self->classInfo()) {
    PyTypeObject*  superType = ((PyTypeObject *)self)->tp_base;
    // recursively search for PythonQtClassWrapper superclass,
    // this is needed for multiple levels of inheritance in python,
    // e.g.
    // class MyWidgetBase(QWidget):
    //  ...
    // class MyWidget(MyWidgetBase):
    //  ...
    while (superType && Py_TYPE(superType) != &PythonQtClassWrapper_Type) {
      superType = superType->tp_base;
    }

    if (!superType || (Py_TYPE(superType) != &PythonQtClassWrapper_Type)) {
      PyErr_Format(PyExc_TypeError, "type %s is not derived from PythonQtClassWrapper", ((PyTypeObject*)self)->tp_name);
      return -1;
    }

    // take the class info from the superType
    self->_classInfo = ((PythonQtClassWrapper*)superType)->classInfo();
    self->_dynamicClassInfo = new PythonQtDynamicClassInfo();

    // take the class info from the superType and fill the whole chain
    PyTypeObject* typeChain = (PyTypeObject *)self;
    while (typeChain && Py_TYPE(typeChain) != &PythonQtClassWrapper_Type) {

      ((PythonQtClassWrapper*)typeChain)->_classInfo = ((PythonQtClassWrapper*)superType)->classInfo();
      ((PythonQtClassWrapper*)typeChain)->_dynamicClassInfo = new PythonQtDynamicClassInfo();

      typeChain = typeChain->tp_base;
    }
  }

  return 0;
}

static PyObject *PythonQtClassWrapper_classname(PythonQtClassWrapper* type)
{
  return PyString_FromString((QByteArray("Class_") + type->classInfo()->className()).constData());
}

static PyObject *PythonQtClassWrapper_help(PythonQtClassWrapper* type)
{
  return PythonQt::self()->helpCalled(type->classInfo());
}

PyObject *PythonQtClassWrapper_delete(PythonQtClassWrapper *type, PyObject *args)
{
  Q_UNUSED(type);

  Py_ssize_t argc = PyTuple_Size(args);
  if (argc>0) {
    PyObject* self = PyTuple_GET_ITEM(args, 0);
    if (PyObject_TypeCheck(self, &PythonQtInstanceWrapper_Type)) {
      return PythonQtInstanceWrapper_delete((PythonQtInstanceWrapper*)self);
    }
  }
  return NULL;
}

PyObject *PythonQtClassWrapper_inherits(PythonQtClassWrapper *type, PyObject *args)
{
  Q_UNUSED(type);
  PythonQtInstanceWrapper* wrapper = NULL;
  char *name = NULL;
  if (!PyArg_ParseTuple(args, "O!s:PythonQtClassWrapper.inherits",&PythonQtInstanceWrapper_Type, &wrapper, &name)) {
    return NULL;
  }
  return PythonQtConv::GetPyBool(wrapper->classInfo()->inherits(name));
}


static PyMethodDef PythonQtClassWrapper_methods[] = {
    {"className", (PyCFunction)PythonQtClassWrapper_classname, METH_NOARGS,
     "Return the classname of the object"
    },
    {"inherits", (PyCFunction)PythonQtClassWrapper_inherits, METH_VARARGS,
    "Returns if the class inherits or is of given type name"
    },
    {"help", (PyCFunction)PythonQtClassWrapper_help, METH_NOARGS,
    "Shows the help of available methods for this class"
    },
    {"delete", (PyCFunction)PythonQtClassWrapper_delete, METH_VARARGS,
    "Deletes the given C++ object"
    },
    {NULL, NULL, 0 , NULL}  /* Sentinel */
};

static PyObject* PythonQtClassWrapper_getDummyInstanceForProperty(PythonQtClassWrapper* wrapper, const QString& property)
{
  PythonQtClassInfo* info = wrapper->classInfo()->getClassInfoForProperty(property);
  if (info) {
    return (PyObject*)PythonQt::priv()->createNewPythonQtInstanceWrapper(NULL, info);
  }
  Py_INCREF(Py_None);
  return Py_None;
}

static PyObject *PythonQtClassWrapper_getattro(PyObject *obj, PyObject *name)
{
  const char *attributeName;
  PythonQtClassWrapper *wrapper = (PythonQtClassWrapper *)obj;

  if ((attributeName = PyString_AsString(name)) == NULL) {
    return NULL;
  }
  if (obj == (PyObject*)&PythonQtInstanceWrapper_Type) {
    // if we are called as PythonQtInstanceWrapper_Type, we need to get the properties from the type...
    PyObject* superAttr = PyType_Type.tp_getattro(obj, name);
    return superAttr;
  }

  if (qstrcmp(attributeName, "__dict__")==0) {
    PyObject* objectDict  = ((PyTypeObject *)wrapper)->tp_dict;
    if (!wrapper->classInfo()) {
      Py_INCREF(objectDict);
      return objectDict;
    }
    PyObject* dict = PyDict_New();
      
    QSet<QString> completeSet = QSet<QString>::fromList(wrapper->classInfo()->memberList());
    completeSet.unite(QSet<QString>::fromList(wrapper->classInfo()->propertyList()));

    Q_FOREACH (QString name, completeSet) {
      if (name.startsWith("py_")) {
        // do not expose internal slots
        continue;
      }
      PyObject* o = PyObject_GetAttrString(obj, QStringToPythonConstCharPointer(name));
      if (o) {
        PyDict_SetItemString(dict, QStringToPythonConstCharPointer(name), o);
        Py_DECREF(o);
      } else {
        // we should not get here anymore, but ignore this anyways.
        PyErr_Clear();
      }
    }

    if (wrapper->classInfo()->constructors()) {
      PyObject* initName = PyString_FromString("__init__");
      PyObject* func = PyType_Type.tp_getattro(obj, initName);
      Py_DECREF(initName);
      PyDict_SetItemString(dict, "__init__", func);
      Py_DECREF(func);
    }
    for (int i = 0; PythonQtClassWrapper_methods[i].ml_name != NULL; i++) {
      PyObject* func = PyCFunction_New(&PythonQtClassWrapper_methods[i], obj);
      PyDict_SetItemString(dict, PythonQtClassWrapper_methods[i].ml_name, func);
      Py_DECREF(func);
    }

    PyDict_Update(dict, objectDict);
    return dict;
  }

  // look in Python to support derived Python classes
  PyObject* superAttr = PyType_Type.tp_getattro(obj, name);
  if (superAttr) {
    return superAttr;
  }
  PyErr_Clear();

  if ((qstrncmp("py_", attributeName, 3) != 0) && wrapper->classInfo()) {
    PythonQtMemberInfo member = wrapper->classInfo()->member(attributeName);
    if (member._type == PythonQtMemberInfo::EnumValue) {
      PyObject* enumValue = member._enumValue;
      Py_INCREF(enumValue);
      return enumValue;
    } else if (member._type == PythonQtMemberInfo::EnumWrapper ||
               member._type == PythonQtMemberInfo::NestedClass) {
      PyObject* enumWrapper = member._pythonType;
      Py_INCREF(enumWrapper);
      return enumWrapper;
    } else if (member._type == PythonQtMemberInfo::Slot) {
      // NOTE: this does an extra lookup and string copy, it might be better to move this to
      //       PythonQtClassInfo and add a new cache for qualified class methods...
      QByteArray qualifiedMemberName = "py_q_";
      qualifiedMemberName += attributeName;
      PythonQtMemberInfo qualifiedMember = wrapper->classInfo()->member(qualifiedMemberName);
      if (qualifiedMember._type == PythonQtMemberInfo::Slot) {
        // return the qualified member, so that virtual calls on classes call the qualified member
        return PythonQtSlotFunction_New(qualifiedMember._slot, obj, NULL);
      }
      else {
        // we return all slots, even the instance slots, since they are callable as unbound slots with self argument
        return PythonQtSlotFunction_New(member._slot, obj, NULL);
      }
    } else if (member._type == PythonQtMemberInfo::Signal) {
      // we return all signals, even the instance signals, since they are callable as unbound signals with self argument
      return PythonQtSignalFunction_New(member._slot, obj, NULL);
    } else if (member._type == PythonQtMemberInfo::Property) {
      PyObject* dummy = PythonQtClassWrapper_getDummyInstanceForProperty(wrapper, attributeName);
      return dummy;
    }
    QByteArray pyget = "py_get_";
    member = wrapper->classInfo()->member((pyget + attributeName).constData());
    if (member._type == PythonQtMemberInfo::Slot) {
      PyObject* dummy = PythonQtClassWrapper_getDummyInstanceForProperty(wrapper, attributeName);
      return dummy;
    }
  }

  // look for the internal methods (className(), help())
#ifdef PY3K
  PyObject* internalMethod = PyObject_GenericGetAttr(obj, name);
#else
  PyObject* internalMethod = Py_FindMethod( PythonQtClassWrapper_methods, obj, (char*)attributeName);
#endif
  if (internalMethod) {
    return internalMethod;
  }

  QString error = QString(wrapper->classInfo()->className()) + " has no attribute named '" + QString(attributeName) + "'";
  PyErr_SetString(PyExc_AttributeError, QStringToPythonConstCharPointer(error));
  return NULL;
}

static int PythonQtClassWrapper_setattro(PyObject *obj,PyObject *name,PyObject *value)
{
  return PyType_Type.tp_setattro(obj,name,value);
}

/*
static PyObject * PythonQtClassWrapper_repr(PyObject * obj)
{
  PythonQtClassWrapper* wrapper = (PythonQtClassWrapper*)obj;
  if (wrapper->classInfo()->isCPPWrapper()) {
    const QMetaObject* meta = wrapper->classInfo()->metaObject();
    if (!meta) {
      QObject* decorator = wrapper->classInfo()->decorator();
      if (decorator) {
        meta = decorator->metaObject();
      }
    }
    if (meta) {
      return PyString_FromFormat("%s Class (C++ wrapped by %s)", wrapper->classInfo()->className(), meta->className());
    } else {
      return PyString_FromFormat("%s Class (C++ unwrapped)", wrapper->classInfo()->className());
    }
  } else {
    return PyString_FromFormat("%s Class", wrapper->classInfo()->className());
  }
}

*/

PyTypeObject PythonQtClassWrapper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "PythonQt.PythonQtClassWrapper",             /*tp_name*/
    sizeof(PythonQtClassWrapper),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0,                         /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    0,                         /*tp_compare*/
    0, //PythonQtClassWrapper_repr,            /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    PythonQtClassWrapper_getattro,                         /*tp_getattro*/
    PythonQtClassWrapper_setattro,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    0,           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    #ifdef PY3K
    PythonQtClassWrapper_methods,                   /* tp_methods */
    #else
    0,                   /* tp_methods */
    #endif
    0,                   /* tp_members */
    0,                         /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PythonQtClassWrapper_init,      /* tp_init */
    PythonQtClassWrapper_alloc,                         /* tp_alloc */
    0,                         /* tp_new */
    0,                         /* tp_free */
};

//-------------------------------------------------------

