/*
 *
 *  Copyright (C) 2006 MeVis Research GmbH All Rights Reserved.
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
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
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
#include "PythonQtClassInfo.h"
#include "PythonQtConversion.h"

static void PythonQtClassWrapper_dealloc(PythonQtClassWrapper* self)
{
  self->ob_type->tp_free((PyObject*)self);
}

static PyObject* PythonQtClassWrapper_new(PyTypeObject *type, PyObject * /*args*/, PyObject * /*kwds*/)
{
  PythonQtClassWrapper *self;

  self = (PythonQtClassWrapper *)type->tp_alloc(type, 0);
  if (self != NULL) {
    self->_info = NULL;
  }
  return (PyObject *)self;
}

static int PythonQtClassWrapper_init(PythonQtClassWrapper * /*self*/, PyObject * /*args*/, PyObject * /*kwds*/)
{
  return 0;
}

PyObject *PythonQtClassWrapper_call(PyObject *func, PyObject *args, PyObject *kw) {
  PythonQtClassWrapper* wrapper = (PythonQtClassWrapper*)func;
  PyObject* result = NULL;
  QString error;
  PyObject* err = NULL;
  if (wrapper->_info->constructors()) {
    result = PythonQtSlotFunction_CallImpl(NULL, wrapper->_info->constructors(), args, kw);
    err = PyErr_Occurred();
  }
  if (!result) {
    QObject* v = NULL;
    QListIterator<PythonQtConstructorHandler*> it(PythonQt::self()->constructorHandlers());
    while (!v && it.hasNext()) {
      v = it.next()->create(wrapper->_info->metaObject(), args, kw, error);
    }
    if (v) {
      result = PythonQt::priv()->wrapQObject(v);
    }
  }
  if (result) {
    // change ownershipflag to be owned by PythonQt
    if (result->ob_type == &PythonQtInstanceWrapper_Type) {
      ((PythonQtInstanceWrapper*)result)->_ownedByPythonQt = true;
    }
  } else {
    if (!wrapper->_info->constructors()) {
      if (!err) {
        if (error.isEmpty()) {
          error = QString("No constructors available for ") + wrapper->_info->className();
        }
        PyErr_SetString(PyExc_ValueError, error.toLatin1().data());
      }
    }
  }
  return result;
}

static PyObject *PythonQtClassWrapper_classname(PythonQtClassWrapper* type)
{
  return PyString_FromString((QString("Meta_") + type->_info->className()).toLatin1().data());
}

static PyObject *PythonQtClassWrapper_help(PythonQtClassWrapper* type)
{
  return PythonQt::self()->helpCalled(type->_info);
}


static PyMethodDef PythonQtClassWrapper_methods[] = {
    {"className", (PyCFunction)PythonQtClassWrapper_classname, METH_NOARGS,
     "Return the classname of the object"
    },
    {"help", (PyCFunction)PythonQtClassWrapper_help, METH_NOARGS,
    "Shows the help of available methods for this class"
    },
    {NULL, NULL, 0 , NULL}  /* Sentinel */
};


static PyObject *PythonQtClassWrapper_getattro(PyObject *obj,PyObject *name)
{
  const char *attributeName;
  PythonQtClassWrapper *wrapper = (PythonQtClassWrapper *)obj;

  if ((attributeName = PyString_AsString(name)) == NULL) {
    return NULL;
  }

  PythonQtMemberInfo member = wrapper->_info->member(attributeName);
  if (member._type == PythonQtMemberInfo::EnumValue) {
    return PyInt_FromLong(member._enumValue);
  }
  if (member._type == PythonQtMemberInfo::Slot && member._slot->isClassDecorator()) {
    return PythonQtSlotFunction_New(member._slot, obj, NULL);
  }

  // look for the interal methods (className(), help())
  PyObject* internalMethod = Py_FindMethod( PythonQtClassWrapper_methods, obj, (char*)attributeName);
  if (internalMethod) {
    return internalMethod;
  }
  PyErr_Clear();

  if (qstrcmp(attributeName, "__dict__")==0) {
    QStringList l = wrapper->_info->memberList(true);
    PyObject* dict = PyDict_New();
    foreach (QString name, l) {
      //PyObject* o = PyObject_GetAttrString(obj, name.toLatin1().data());
      PyDict_SetItemString(dict, name.toLatin1().data(), Py_None);
      //Py_DECREF(o);
    }
    return dict;
  }

  QString error = QString(wrapper->_info->className()) + " has no attribute named '" + QString(attributeName) + "'";
  PyErr_SetString(PyExc_AttributeError, error.toLatin1().data());
  return NULL;
}

static PyObject * PythonQtClassWrapper_repr(PyObject * obj)
{
  PythonQtClassWrapper* wrapper = (PythonQtClassWrapper*)obj;
  if (wrapper->_info->isCPPWrapper()) {
    const QMetaObject* meta = wrapper->_info->metaObject(); 
    if (!meta) {
      QObject* decorator = wrapper->_info->decorator();
      if (decorator) {
        meta = decorator->metaObject();
      }
    }
    if (meta) {
      return PyString_FromFormat("%s Class (C++ wrapped by %s)", wrapper->_info->className(), meta->className());
    } else {
      return PyString_FromFormat("%s Class (C++ unwrapped)", wrapper->_info->className());
    }
  } else {
    return PyString_FromFormat("%s Class", wrapper->_info->className());
  }
}

static int PythonQtClassWrapper_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PythonQtClassWrapper_Type &&
    obj2->ob_type == &PythonQtClassWrapper_Type) {

    PythonQtClassWrapper* w1 = (PythonQtClassWrapper*)obj1;
    PythonQtClassWrapper* w2 = (PythonQtClassWrapper*)obj2;
    if (w1->_info == w2->_info) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

static long PythonQtClassWrapper_hash(PythonQtClassWrapper *obj)
{
  return reinterpret_cast<long>(obj->_info);
}

PyTypeObject PythonQtClassWrapper_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PythonQt.PythonQtClassWrapper",             /*tp_name*/
    sizeof(PythonQtClassWrapper),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor)PythonQtClassWrapper_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PythonQtClassWrapper_compare,         /*tp_compare*/
    PythonQtClassWrapper_repr,            /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    (hashfunc)PythonQtClassWrapper_hash,                         /*tp_hash */
    PythonQtClassWrapper_call,                         /*tp_call*/
    0,                         /*tp_str*/
    PythonQtClassWrapper_getattro,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PythonQtClassWrapper object",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    0,             /* tp_methods */
    0,             /* tp_members */
    0,                         /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PythonQtClassWrapper_init,      /* tp_init */
    0,                         /* tp_alloc */
    PythonQtClassWrapper_new,                 /* tp_new */
};

//-------------------------------------------------------

