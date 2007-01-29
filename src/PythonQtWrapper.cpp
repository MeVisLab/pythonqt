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
// \file    PythonQtWrapper.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtWrapper.h"
#include <QObject>
#include "PythonQt.h"
#include "PythonQtSlot.h"
#include "PythonQtClassInfo.h"
#include "PythonQtConversion.h"

static void PythonQtWrapper_dealloc(PythonQtWrapper* self)
{
  if (self->_wrappedPtr) {

    //mlabDebugConst("Python","c++ wrapper removed " << self->_wrappedPtr << " " << self->_obj->className() << " " << self->_info->wrappedClassName().latin1());

    PythonQt::priv()->removeWrapperPointer(self->_wrappedPtr);
    // we own our qobject, so we delete it now:
    delete self->_obj;
  } else if (self->_obj) {
    //mlabDebugConst("Python","qobject wrapper removed " << self->_obj->className() << " " << self->_info->wrappedClassName().latin1());
    PythonQt::priv()->removeWrapperPointer(self->_obj);
  }
  self->ob_type->tp_free((PyObject*)self);
}

static PyObject* PythonQtWrapper_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PythonQtWrapper *self;

  self = (PythonQtWrapper *)type->tp_alloc(type, 0);
  if (self != NULL) {
    const PythonQtPendingObject* obj = PythonQt::priv()->pendingObject();
    self->_obj = obj->_obj;
    self->_info = obj->_info;
    self->_wrappedPtr = obj->_wrappedPtr;
  }
  return (PyObject *)self;
}

static int PythonQtWrapper_init(PythonQtWrapper *self, PyObject *args, PyObject *kwds)
{
  return 0;
}

static PyMemberDef PythonQtWrapper_members[] = {
  {NULL}  /* Sentinel */
};

static PyObject *PythonQtWrapper_classname(PythonQtWrapper* type)
{
  //EXTRA: callback to ask classname from application?
  return PyString_FromString(type->_info->className());
}

static PyObject *PythonQtWrapper_help(PythonQtWrapper* type)
{
  //EXTRA: callback to show scripting help

  PyObject* p = PyString_FromString(type->_info->help().toLatin1().data());
  return p;
}

static PyObject *PythonQtWrapper_connect(PythonQtWrapper* type, PyObject *args)
{
  PyObject* p = NULL;
  PyObject* o;
  const char* s;
  const char* slot = NULL;
  if (PyArg_ParseTuple(args, "sO|s", &s, &o, &slot)) {
    QByteArray signal("2");
  signal += s;
  // if a slot is passed, it is a QObject slot that we want to connect
  if (slot) {
      if (o->ob_type == &PythonQtWrapper_Type) {
    PythonQtWrapper* wrap = (PythonQtWrapper*)o;
      QByteArray slotTmp("1");
      slotTmp += slot;
    return PythonQtConv::GetPyBool(QObject::connect(type->_obj, signal, wrap->_obj, slotTmp));
    } else {
    //TODO: error
    }
  } else {
    // otherwise it is a callable we should connect to
    p = PythonQtConv::GetPyBool(PythonQt::self()->addSignalHandler(type->_obj, signal, o));
  }
  }
  return p;
}

static PyObject *PythonQtWrapper_disconnect(PythonQtWrapper* type, PyObject *args)
{
  PyObject* p = NULL;
  PyObject* o;
  const char* s;
  const char* slot = NULL;
  if (PyArg_ParseTuple(args, "sO|s", &s, &o, &slot)) {
    QByteArray signal("2");
  signal += s;
  // if a slot is passed, it is a QObject slot that we want to connect
  if (slot) {
      if (o->ob_type == &PythonQtWrapper_Type) {
    PythonQtWrapper* wrap = (PythonQtWrapper*)o;
      QByteArray slotTmp("1");
      slotTmp += slot;
    return PythonQtConv::GetPyBool(QObject::disconnect(type->_obj, signal, wrap->_obj, slotTmp));
    } else {
    //TODO: error
    }
  } else {
    // otherwise it is a callable we should connect to
    p = PythonQtConv::GetPyBool(PythonQt::self()->removeSignalHandler(type->_obj, signal, o));
  }
  }
  return p;
}

static PyMethodDef PythonQtWrapper_methods[] = {
    {"className", (PyCFunction)PythonQtWrapper_classname, METH_NOARGS,
     "Return the classname of the qobject"
    },
    {"help", (PyCFunction)PythonQtWrapper_help, METH_NOARGS,
    "Shows the html help of available methods for this class, dir() does NOT show the available methods!"
    },
    {"connect", (PyCFunction)PythonQtWrapper_connect, METH_VARARGS,
     "connect a signal to a python function or a qt signal/slot, returns true if successful"
    },
    {"disconnect", (PyCFunction)PythonQtWrapper_disconnect, METH_VARARGS,
     "disconnect a signal from a python function or a qt signal/slot, returns true if successful"
    },
  // TODO: maybe add some more QObject support methods, e.g. findChild, findChildren, children, ...
    {NULL}  /* Sentinel */
};

static PyObject *PythonQtWrapper_getattro(PyObject *obj,PyObject *name)
{
  const char *nm;
  PythonQtWrapper *wt = (PythonQtWrapper *)obj;

  if ((nm = PyString_AsString(name)) == NULL) {
    return NULL;
  }
//  mlabDebugConst("Python","get " << nm);

  int i = wt->_obj->metaObject()->indexOfProperty(nm);
  if (i==-1) {
    if (qstrcmp(nm, "name")==0) {
      nm = "objectName";
    }
    i = wt->_obj->metaObject()->indexOfProperty(nm);
  }
  if (i!=-1) {
    QMetaProperty prop = wt->_obj->metaObject()->property(i);
    QVariant v = prop.read(wt->_obj);
    return PythonQtConv::QVariantToPyObject(v);
  }

  // look for a slot with "name"
  PythonQtSlotInfo* def = wt->_info->slot(nm);
  if (def) {
    return PythonQtSlotFunction_New(def, obj, NULL);
  }

  // look for the interal methods (className(), help())
  PyObject* internalMethod = Py_FindMethod( PythonQtWrapper_methods, obj, (char*)nm);
  if (internalMethod) {
    return internalMethod;
  }
  PyErr_Clear();

  QObject* child = NULL;
  child = qFindChild(wt->_obj, QString(nm), child);
  if (child) {
  return PythonQt::self()->priv()->wrapQObject(child);
  }

  return Py_BuildValue("");
}

static int PythonQtWrapper_setattro(PyObject *obj,PyObject *name,PyObject *value)
{
  char *nm;
  PythonQtWrapper *wt = (PythonQtWrapper *)obj;

  if ((nm = PyString_AsString(name)) == NULL)
    return -1;

  // look if it is a property
  int i = wt->_obj->metaObject()->indexOfProperty(nm);
  if (i==-1) {
    if (qstrcmp(nm, "name")==0) {
      nm = "objectName";
    }
    i = wt->_obj->metaObject()->indexOfProperty(nm);
  }
  if (i!=-1) {
    QMetaProperty prop = wt->_obj->metaObject()->property(i);
    if (prop.isWritable()) {
      if (prop.isEnumType()) {
        QVariant v = PythonQtConv::PyObjToQVariant(value, QVariant::String);
        wt->_obj->setProperty(nm, v);
        return 0;
      } else {
        int t = prop.type();
        // since Qt does not store the type of the usertype and just returns QVariant::UserType, we
        // need our own lookup for other known types (e.g. float)
        if (t == QVariant::UserType) {
          t = PythonQtMethodInfo::nameToType(prop.typeName());
        }
        QVariant v = PythonQtConv::PyObjToQVariant(value, t);
        if (v.isValid()) {
          wt->_obj->setProperty(nm, v);
          return 0;
        } else {
          std::cerr << "invalid qvariant argument (not implemented yet) " << nm << " type " << QVariant::typeToName(prop.type()) << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
        }
      }
    } else {
      std::cerr << "property not writeable " << nm << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
    }
  }
  return -1;
}

static PyObject * PythonQtWrapper_repr(PyObject * obj)
{
  PythonQtWrapper* wt = (PythonQtWrapper*)obj;
  if (wt->_wrappedPtr) {
    return PyString_FromFormat("%s (C++ Object 0x%x (%x))", wt->_info->className(), wt->_wrappedPtr, wt->_obj);
  } else {
    return PyString_FromFormat("%s (QObject 0x%x)", wt->_info->className(), wt->_obj, wt->_wrappedPtr);
  }
}

static int PythonQtWrapper_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PythonQtWrapper_Type &&
    obj2->ob_type == &PythonQtWrapper_Type) {

    PythonQtWrapper* w1 = (PythonQtWrapper*)obj1;
    PythonQtWrapper* w2 = (PythonQtWrapper*)obj2;
    if (w1->_obj == w2->_obj) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PythonQtWrapper_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PythonQt.PythonQtWrapper",             /*tp_name*/
    sizeof(PythonQtWrapper),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor)PythonQtWrapper_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PythonQtWrapper_compare,         /*tp_compare*/
    PythonQtWrapper_repr,            /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    PythonQtWrapper_getattro,                         /*tp_getattro*/
    PythonQtWrapper_setattro,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PythonQtWrapper object",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    PythonQtWrapper_methods,             /* tp_methods */
    PythonQtWrapper_members,             /* tp_members */
    0,                         /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PythonQtWrapper_init,      /* tp_init */
    0,                         /* tp_alloc */
    PythonQtWrapper_new,                 /* tp_new */
};

//-------------------------------------------------------

