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

static PyObject* PythonQtClassWrapper_alloc(PyTypeObject *self, Py_ssize_t nitems)
{
  // call the default type alloc
  PyObject* obj = PyType_Type.tp_alloc(self, nitems);

  // take current class type, if we are called via newPythonQtClassWrapper()
  PythonQtClassWrapper* wrap = (PythonQtClassWrapper*)obj;
  wrap->_classInfo = PythonQt::priv()->currentClassInfoForClassWrapperCreation();

  return obj;
}


static int PythonQtClassWrapper_init(PythonQtClassWrapper* self, PyObject* args, PyObject* kwds)
{
  // call the default type init
  if (PyType_Type.tp_init((PyObject *)self, args, kwds) < 0) {
    return -1;
  }

  // if we have no CPP class information, try our base class
  if (!self->classInfo()) {
    PyTypeObject*  superType = ((PyTypeObject *)self)->tp_base;

    if (!superType || (superType->ob_type != &PythonQtClassWrapper_Type)) {
      PyErr_Format(PyExc_TypeError, "type %s is not derived from PythonQtClassWrapper", ((PyTypeObject*)self)->tp_name);
      return -1;
    }

    // take the class info from the superType
    self->_classInfo = ((PythonQtClassWrapper*)superType)->classInfo();
  }

  return 0;
}

static PyObject *PythonQtClassWrapper_classname(PythonQtClassWrapper* type)
{
  return PyString_FromString((QString("Class_") + type->classInfo()->className()).toLatin1().data());
}

static PyObject *PythonQtClassWrapper_help(PythonQtClassWrapper* type)
{
  return PythonQt::self()->helpCalled(type->classInfo());
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


static PyObject *PythonQtClassWrapper_getattro(PyObject *obj, PyObject *name)
{
  const char *attributeName;
  PythonQtClassWrapper *wrapper = (PythonQtClassWrapper *)obj;

  if ((attributeName = PyString_AsString(name)) == NULL) {
    return NULL;
  }

  PythonQtMemberInfo member = wrapper->classInfo()->member(attributeName);
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
    QStringList l = wrapper->classInfo()->memberList(true);
    PyObject* dict = PyDict_New();
    foreach (QString name, l) {
      //PyObject* o = PyObject_GetAttrString(obj, name.toLatin1().data());
      PyDict_SetItemString(dict, name.toLatin1().data(), Py_None);
      //Py_DECREF(o);
    }
    return dict;
  }

  QString error = QString(wrapper->classInfo()->className()) + " has no attribute named '" + QString(attributeName) + "'";
  PyErr_SetString(PyExc_AttributeError, error.toLatin1().data());
  return NULL;
}

static int PythonQtClassWrapper_setattro(PyObject *obj,PyObject *name,PyObject * /*value*/)
{
  QString error;
  char *attributeName;
  if ((attributeName = PyString_AsString(name)) == NULL) {
    return -1;
  }
  PythonQtClassWrapper *wrapper = (PythonQtClassWrapper *)obj;

  // TODO
  return -1;
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
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
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
    0,             /* tp_methods */
    0,             /* tp_members */
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

