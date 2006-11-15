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
// \file    PythonQtVariants.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-08
*/
//----------------------------------------------------------------------------------

#include "PythonQtVariants.h"
#include "PythonQtConversion.h"
#include <QVariant>
#include <QColor>
#include <QPixmap>


typedef struct {
  PyObject_HEAD
  QSize _size;
} PyQSize;

typedef struct {
  PyObject_HEAD
  QPoint _point;
} PyQPoint;

typedef struct {
  PyObject_HEAD
  QRect _rect;
} PyQRect;

typedef struct {
  PyObject_HEAD
  QPixmap* _pixmap;
} PyQPixmap;

typedef struct {
  PyObject_HEAD
  QColor* _color;
} PyQColor;

//------------------------------------------------------------------
int getIntValue(PyObject* value, const char* name, bool& ok)
{
  if (value == NULL) {
    PyErr_SetString(PyExc_TypeError, QString("%1: cannot delete the attribute").arg(name).toLatin1().data());
    ok = false;
    return 0;
  }
  int val = PythonQtConv::PyObjGetInt(value, false, ok);
  if (!ok) {
    PyErr_SetString(PyExc_TypeError, QString("%1: attribute value must be an integer").arg(name).toLatin1().data());
  } else {
    PyErr_Clear();
  }
  return val;
}
//------------------------------------------------------------------
static PyObject *PyQSize_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyQSize *self;
  self = (PyQSize *)type->tp_alloc(type, 0);

  self->_size = QSize();

  return (PyObject *)self;
}

static int PyQSize_init(PyQSize *self, PyObject *args, PyObject *kwds)
{
  PyObject *first=NULL, *last=NULL;

  if (!args) {
    self->_size = QSize();
    PyErr_Clear();
    return 0;
  }

  int w,h;
  PyObject* obj;
  if (PyArg_ParseTuple(args, "ii", &w, &h)) {
    self->_size.setWidth(w);
    self->_size.setHeight(h);
    PyErr_Clear();
  } else if (PyArg_ParseTuple(args, "O", &obj)) {
    if (obj->ob_type == &PyQSizeType) {
      self->_size = ((PyQSize*)obj)->_size;
      PyErr_Clear();
    }
  }
  return 0;
}

static PyObject *PyQSize_getWidth(PyQSize *self, void *closure)
{
  return Py_BuildValue("i",self->_size.width());
}

static PyObject *PyQSize_getHeight(PyQSize *self, void *closure)
{
  return Py_BuildValue("i",self->_size.height());
}

static int PyQSize_setWidth(PyQSize *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"width", ok);
  if (ok) {
    self->_size.setWidth(i);
  }
  return ok?0:-1;
}

static int PyQSize_setHeight(PyQSize *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"height", ok);
  if (ok) {
    self->_size.setHeight(i);
  }
  return ok?0:-1;
}

static PyGetSetDef PyQSize_getseters[] = {
    {"width",
     (getter)PyQSize_getWidth, (setter)PyQSize_setWidth,
     "width",
     NULL},
    {"height",
     (getter)PyQSize_getHeight, (setter)PyQSize_setHeight,
     "height",
     NULL},
    {NULL}  /* Sentinel */
};

static PyObject * PyQSize_repr(PyObject * obj)
{
  PyQSize* wt = (PyQSize*)obj;
  return PyString_FromFormat("%d,%d", wt->_size.width(), wt->_size.height());
}

static int PyQSize_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PyQSizeType &&
    obj2->ob_type == &PyQSizeType) {

    PyQSize* w1 = (PyQSize*)obj1;
    PyQSize* w2 = (PyQSize*)obj2;
    if (w1->_size == w2->_size) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PyQSizeType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PyQSize.PyQSize",             /*tp_name*/
    sizeof(PyQSize),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PyQSize_compare,           /*tp_compare*/
    PyQSize_repr,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PyQSize objects",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    0,                   /* tp_methods */
    0,                   /* tp_members */
    PyQSize_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PyQSize_init,      /* tp_init */
    0,                         /* tp_alloc */
    PyQSize_new,                 /* tp_new */
};

//------------------------------------------------------------------
static void PyQColor_dealloc(PyQColor* self)
{
  delete self->_color;
  self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyQColor_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyQColor *self;
  self = (PyQColor *)type->tp_alloc(type, 0);

  self->_color = new QColor();

  return (PyObject *)self;
}

static int PyQColor_init(PyQColor *self, PyObject *args, PyObject *kwds)
{
  PyObject *first=NULL, *last=NULL;

  if (!args) {
    PyErr_Clear();
    return 0;
  }

  int r,g,b;
  PyObject* obj;
  if (PyArg_ParseTuple(args, "iii", &r, &g, &b)) {
    self->_color->setRgb(r,g,b);
    PyErr_Clear();
  } else if (PyArg_ParseTuple(args, "O", &obj)) {
    if (obj->ob_type == &PyQColorType) {
      *self->_color = *((PyQColor*)obj)->_color;
      PyErr_Clear();
    }
  }
  return 0;
}

static PyObject *PyQColor_getR(PyQColor *self, void *closure)
{
  return Py_BuildValue("i",self->_color->red());
}

static PyObject *PyQColor_getG(PyQColor *self, void *closure)
{
  return Py_BuildValue("i",self->_color->green());
}

static PyObject *PyQColor_getB(PyQColor *self, void *closure)
{
  return Py_BuildValue("i",self->_color->blue());
}

static int PyQColor_setR(PyQColor *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"red", ok);
  if (ok) {
    self->_color->setRgb(i,self->_color->green(),self->_color->blue());
  }
  return ok?0:-1;
}

static int PyQColor_setG(PyQColor *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"green", ok);
  if (ok) {
    self->_color->setRgb(self->_color->red(),i,self->_color->blue());
  }
  return ok?0:-1;
}

static int PyQColor_setB(PyQColor *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"blue", ok);
  if (ok) {
    self->_color->setRgb(self->_color->red(),self->_color->green(),i);
  }
  return ok?0:-1;
}

static PyGetSetDef PyQColor_getseters[] = {
    {"red",
     (getter)PyQColor_getR, (setter)PyQColor_setR,
     "green",
     NULL},
    {"green",
     (getter)PyQColor_getG, (setter)PyQColor_setG,
     "green",
     NULL},
    {"blue",
    (getter)PyQColor_getB, (setter)PyQColor_setB,
    "blue",
     NULL},
    {NULL}  /* Sentinel */
};

static PyObject *PyQColor_setRGB(PyQColor* self, PyObject *args)
{
  int r,g,b;
  if (PyArg_ParseTuple(args, "iii", &r, &g, &b)) {
    self->_color->setRgb(r,g,b);
    PyErr_Clear();
  }
  return Py_BuildValue("");
}

static PyObject *PyQColor_setHSV(PyQColor* self, PyObject *args)
{
  int h,s,v;
  if (PyArg_ParseTuple(args, "iii", &h, &s, &v)) {
    self->_color->setHsv(h,s,v);
    PyErr_Clear();
  }
  return Py_BuildValue("");
}

static PyMethodDef PyQColor_methods[] = {
    {"setRGB", (PyCFunction)PyQColor_setRGB, METH_VARARGS ,
     "set RGB values in range 0-255"
    },
    {"setHSV", (PyCFunction)PyQColor_setHSV, METH_VARARGS ,
    "set HSV values in range 0-255"
    },
    {NULL}
};

static PyObject * PyQColor_repr(PyObject * obj)
{
  PyQColor* wt = (PyQColor*)obj;
  return PyString_FromFormat("%d,%d,%d", wt->_color->red(),wt->_color->green(),wt->_color->blue());
}

static int PyQColor_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PyQColorType &&
    obj2->ob_type == &PyQColorType) {

    PyQColor* w1 = (PyQColor*)obj1;
    PyQColor* w2 = (PyQColor*)obj2;
    if ((*w1->_color) == (*w2->_color)) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PyQColorType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PyQColor.PyQColor",             /*tp_name*/
    sizeof(PyQColor),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor) PyQColor_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PyQColor_compare,           /*tp_compare*/
    PyQColor_repr,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PyQColor objects",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    PyQColor_methods,                   /* tp_methods */
    0,                   /* tp_members */
    PyQColor_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PyQColor_init,      /* tp_init */
    0,                         /* tp_alloc */
    PyQColor_new,                 /* tp_new */
};

//------------------------------------------------------------------
static void PyQPixmap_dealloc(PyQPixmap* self)
{
  delete self->_pixmap;
  self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyQPixmap_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyQPixmap *self;
  self = (PyQPixmap *)type->tp_alloc(type, 0);

  self->_pixmap = new QPixmap();

  return (PyObject *)self;
}

static int PyQPixmap_init(PyQPixmap *self, PyObject *args, PyObject *kwds)
{
  PyObject *first=NULL, *last=NULL;

  if (!args) {
    PyErr_Clear();
    return 0;
  }

  const char* filename;
  PyObject* obj;
  if (PyArg_ParseTuple(args, "s", &filename)) {
    self->_pixmap->load(filename);
    PyErr_Clear();
  } else if (PyArg_ParseTuple(args, "O", &obj)) {
    if (obj->ob_type == &PyQPixmapType) {
      *self->_pixmap = *((PyQPixmap*)obj)->_pixmap;
      PyErr_Clear();
    }
  }
  return 0;
}

static PyObject *PyQPixmap_getW(PyQPixmap *self, void *closure)
{
  return Py_BuildValue("i",self->_pixmap->width());
}

static PyObject *PyQPixmap_getH(PyQPixmap *self, void *closure)
{
  return Py_BuildValue("i",self->_pixmap->height());
}


static PyGetSetDef PyQPixmap_getseters[] = {
    {"width",
     (getter)PyQPixmap_getW, NULL,
     "width",
     NULL},
    {"height",
    (getter)PyQPixmap_getH, NULL,
    "height",
    NULL},
    {NULL}  /* Sentinel */
};

static PyObject *PyQPixmap_load(PyQPixmap* self, PyObject *args)
{
  const char* s;
  if (PyArg_ParseTuple(args, "s", &s)) {
    self->_pixmap->load(s);
    PyErr_Clear();
  }
  return PythonQtConv::GetPyBool(!self->_pixmap->isNull());
}

const char* mlabGetGraphicFormat(const char* filename) {
  //TODO!
  return "PNG";
}

static PyObject *PyQPixmap_save(PyQPixmap* self, PyObject *args)
{
  const char* s;
  bool ok = false;
  if (PyArg_ParseTuple(args, "s", &s)) {
    ok = self->_pixmap->save(s, mlabGetGraphicFormat(s));
  }
  return PythonQtConv::GetPyBool(ok);
}

static PyObject *PyQPixmap_resize(PyQPixmap* self, PyObject *args)
{
  int w,h;
  if (PyArg_ParseTuple(args, "ii", &w, &h)) {
    *self->_pixmap = self->_pixmap->scaled(w,h);
    PyErr_Clear();
  }
  return Py_BuildValue("");
}

static PyMethodDef PyQPixmap_methods[] = {
    {"resize", (PyCFunction)PyQPixmap_resize, METH_VARARGS ,
     "resizes the image"
    },
    {"save", (PyCFunction)PyQPixmap_save, METH_VARARGS ,
    "saves the image, reads the format from the file extension"
    },
    {"load", (PyCFunction)PyQPixmap_load, METH_VARARGS ,
    "loads the image"
    },
    {NULL}
};

static PyObject * PyQPixmap_repr(PyObject * obj)
{
  PyQPixmap* wt = (PyQPixmap*)obj;
  return PyString_FromFormat("QPixmap %d,%d",wt->_pixmap->width(),wt->_pixmap->height());
}

static int PyQPixmap_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PyQPixmapType &&
    obj2->ob_type == &PyQPixmapType) {

    PyQPixmap* w1 = (PyQPixmap*)obj1;
    PyQPixmap* w2 = (PyQPixmap*)obj2;
    if (w1->_pixmap->serialNumber() == w2->_pixmap->serialNumber()) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PyQPixmapType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PyQPixmap.PyQPixmap",             /*tp_name*/
    sizeof(PyQPixmap),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    (destructor) PyQPixmap_dealloc, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PyQPixmap_compare,           /*tp_compare*/
    PyQPixmap_repr,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PyQPixmap objects",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    PyQPixmap_methods,                   /* tp_methods */
    0,                   /* tp_members */
    PyQPixmap_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PyQPixmap_init,      /* tp_init */
    0,                         /* tp_alloc */
    PyQPixmap_new,                 /* tp_new */
};

//-----------------------------------------------------

static PyObject *PyQPoint_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyQPoint *self;
  self = (PyQPoint *)type->tp_alloc(type, 0);

  self->_point = QPoint();

  return (PyObject *)self;
}

static int PyQPoint_init(PyQPoint *self, PyObject *args, PyObject *kwds)
{
  PyObject *first=NULL, *last=NULL;

  if (!args) {
    self->_point = QPoint();
    PyErr_Clear();
    return 0;
  }

  int x,y;
  PyObject* obj;
  if (PyArg_ParseTuple(args, "ii", &x, &y)) {
    self->_point = QPoint(x,y);
    PyErr_Clear();
  } else if (PyArg_ParseTuple(args, "O", &obj)) {
    if (obj->ob_type == &PyQPointType) {
      self->_point = ((PyQPoint*)obj)->_point;
      PyErr_Clear();
    }
  }
  return 0;
}

static PyObject *PyQPoint_getX(PyQPoint *self, void *closure)
{
  return Py_BuildValue("i",self->_point.x());
}

static PyObject *PyQPoint_getY(PyQPoint *self, void *closure)
{
  return Py_BuildValue("i",self->_point.y());
}

static int PyQPoint_setX(PyQPoint *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"x", ok);
  if (ok) {
    self->_point.setX(i);
  }
  return ok?0:-1;
}

static int PyQPoint_setY(PyQPoint *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"y", ok);
  if (ok) {
    self->_point.setY(i);
  }
  return ok?0:-1;
}

static PyGetSetDef PyQPoint_getseters[] = {
    {"x",
     (getter)PyQPoint_getX, (setter)PyQPoint_setX,
     "x",
     NULL},
    {"y",
     (getter)PyQPoint_getY, (setter)PyQPoint_setY,
     "y",
     NULL},
    {NULL}  /* Sentinel */
};

static PyObject * PyQPoint_repr(PyObject * obj)
{
  PyQPoint* wt = (PyQPoint*)obj;
  return PyString_FromFormat("%d,%d", wt->_point.x(), wt->_point.y());
}

static int PyQPoint_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PyQPointType &&
    obj2->ob_type == &PyQPointType) {

    PyQPoint* w1 = (PyQPoint*)obj1;
    PyQPoint* w2 = (PyQPoint*)obj2;
    if (w1->_point == w2->_point) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PyQPointType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PyQPoint.PyQPoint",             /*tp_name*/
    sizeof(PyQPoint),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PyQPoint_compare,           /*tp_compare*/
    PyQPoint_repr,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PyQPoint objects",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    0,                   /* tp_methods */
    0,                   /* tp_members */
    PyQPoint_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PyQPoint_init,      /* tp_init */
    0,                         /* tp_alloc */
    PyQPoint_new,                 /* tp_new */
};

//------------------------------------------------------------------
static PyObject *PyQRect_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  PyQRect *self;
  self = (PyQRect *)type->tp_alloc(type, 0);

  self->_rect = QRect();

  return (PyObject *)self;
}

static int PyQRect_init(PyQRect *self, PyObject *args, PyObject *kwds)
{
  PyObject *first=NULL, *last=NULL;

  if (!args) {
    self->_rect = QRect();
    PyErr_Clear();
    return 0;
  }

  int l,t,w,h;
  PyObject *obj, *obj2;
  if (PyArg_ParseTuple(args, "iiii", &l, &t,&w,&h)) {
    self->_rect = QRect(l,t,w,h);
    PyErr_Clear();
  } else if (PyArg_ParseTuple(args, "O", &obj)) {
    if (obj->ob_type == &PyQRectType) {
      self->_rect = ((PyQRect*)obj)->_rect;
      PyErr_Clear();
    }
  } else if (PyArg_ParseTuple(args, "OO", &obj,&obj2)) {
    if (obj->ob_type == &PyQPointType && obj2->ob_type == &PyQSizeType) {
      self->_rect = QRect(((PyQPoint*)obj)->_point, ((PyQSize*)obj2)->_size);
      PyErr_Clear();
    }
  }
  return 0;
}

static PyObject *PyQRect_getX(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.x());
}

static PyObject *PyQRect_getY(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.y());
}

static PyObject *PyQRect_getWidth(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.width());
}

static PyObject *PyQRect_getHeight(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.height());
}

static PyObject *PyQRect_getBottom(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.bottom());
}

static PyObject *PyQRect_getRight(PyQRect *self, void *closure)
{
  return Py_BuildValue("i",self->_rect.right());
}

static int PyQRect_setX(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"x", ok);
  if (ok) {
    self->_rect.moveLeft(i);
  }
  return ok?0:-1;
}

static int PyQRect_setY(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"y", ok);
  if (ok) {
    self->_rect.moveTop(i);
  }
  return ok?0:-1;
}

static int PyQRect_setBottom(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"bottom", ok);
  if (ok) {
    self->_rect.moveBottom(i);
  }
  return ok?0:-1;
}

static int PyQRect_setRight(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"right", ok);
  if (ok) {
    self->_rect.moveRight(i);
  }
  return ok?0:-1;
}

static int PyQRect_setWidth(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"width", ok);
  if (ok) {
    self->_rect.setWidth(i);
  }
  return ok?0:-1;
}

static int PyQRect_setHeight(PyQRect *self, PyObject *value, void *closure)
{
  bool ok;
  int i = getIntValue(value,"height", ok);
  if (ok) {
    self->_rect.setHeight(i);
  }
  return ok?0:-1;
}

// TODO: more methods that set/get topLeft, ... points and center
// TODO: contains, intersect etc. methods
static PyGetSetDef PyQRect_getseters[] = {
    {"x",
     (getter)PyQRect_getX, (setter)PyQRect_setX,
     "x",
     NULL},
    {"y",
     (getter)PyQRect_getY, (setter)PyQRect_setY,
     "y",
     NULL},
    {"left",
    (getter)PyQRect_getX, (setter)PyQRect_setX,
    "left",
    NULL},
    {"top",
    (getter)PyQRect_getY, (setter)PyQRect_setY,
    "top",
    NULL},
    {"bottom",
    (getter)PyQRect_getBottom, (setter)PyQRect_setBottom,
    "bottom",
    NULL},
    {"right",
    (getter)PyQRect_getRight, (setter)PyQRect_setRight,
    "right",
    NULL},
    {"width",
    (getter)PyQRect_getWidth, (setter)PyQRect_setWidth,
    "width",
    NULL},
    {"height",
    (getter)PyQRect_getHeight, (setter)PyQRect_setHeight,
    "height",
    NULL},
    {NULL}  /* Sentinel */
};

static PyObject * PyQRect_repr(PyObject * obj)
{
  PyQRect* wt = (PyQRect*)obj;
  return PyString_FromFormat("xy %d,%d wh %d,%d", wt->_rect.x(), wt->_rect.y(),  wt->_rect.width(), wt->_rect.height());
}

static int PyQRect_compare(PyObject * obj1, PyObject * obj2)
{
  if (obj1->ob_type == &PyQRectType &&
    obj2->ob_type == &PyQRectType) {

    PyQRect* w1 = (PyQRect*)obj1;
    PyQRect* w2 = (PyQRect*)obj2;
    if (w1->_rect == w2->_rect) {
      return 0;
    } else {
      return -1;
    }
  } else {
    return -1;
  }
}

PyTypeObject PyQRectType = {
    PyObject_HEAD_INIT(NULL)
    0,                         /*ob_size*/
    "PyQRect.PyQRect",             /*tp_name*/
    sizeof(PyQRect),             /*tp_basicsize*/
    0,                         /*tp_itemsize*/
    0, /*tp_dealloc*/
    0,                         /*tp_print*/
    0,                         /*tp_getattr*/
    0,                         /*tp_setattr*/
    PyQRect_compare,           /*tp_compare*/
    PyQRect_repr,              /*tp_repr*/
    0,                         /*tp_as_number*/
    0,                         /*tp_as_sequence*/
    0,                         /*tp_as_mapping*/
    0,                         /*tp_hash */
    0,                         /*tp_call*/
    0,                         /*tp_str*/
    0,                         /*tp_getattro*/
    0,                         /*tp_setattro*/
    0,                         /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /*tp_flags*/
    "PyQRect objects",           /* tp_doc */
    0,                   /* tp_traverse */
    0,                   /* tp_clear */
    0,                   /* tp_richcompare */
    0,                   /* tp_weaklistoffset */
    0,                   /* tp_iter */
    0,                   /* tp_iternext */
    0,                   /* tp_methods */
    0,                   /* tp_members */
    PyQRect_getseters,           /* tp_getset */
    0,                         /* tp_base */
    0,                         /* tp_dict */
    0,                         /* tp_descr_get */
    0,                         /* tp_descr_set */
    0,                         /* tp_dictoffset */
    (initproc)PyQRect_init,      /* tp_init */
    0,                         /* tp_alloc */
    PyQRect_new,                 /* tp_new */
};

void PythonQtVariants::init(PyObject* module) {
  static bool typeReady = false;
  if (!typeReady) {
    typeReady = true;
    PyType_Ready(&PyQSizeType);
    PyType_Ready(&PyQPointType);
    PyType_Ready(&PyQRectType);
    PyType_Ready(&PyQColorType);
    PyType_Ready(&PyQPixmapType);
  }

  Py_INCREF(&PyQSizeType);
  PyModule_AddObject(module, "QSize", (PyObject *)&PyQSizeType);

  Py_INCREF(&PyQPointType);
  PyModule_AddObject(module, "QPoint", (PyObject *)&PyQPointType);

  Py_INCREF(&PyQRectType);
  PyModule_AddObject(module, "QRect", (PyObject *)&PyQRectType);

  Py_INCREF(&PyQColorType);
  PyModule_AddObject(module, "QColor", (PyObject *)&PyQColorType);

  Py_INCREF(&PyQPixmapType);
  PyModule_AddObject(module, "QPixmap", (PyObject *)&PyQPixmapType);
}

PyObject* PythonQtVariants::QRectToPyObject(const QRect& b)
{
  PyObject* r = PyQRectType.tp_new(&PyQRectType,NULL, NULL);
  ((PyQRect*)r)->_rect = b;
  return r;
}

PyObject* PythonQtVariants::QPointToPyObject(const QPoint& b)
{
  PyObject* r = PyQPointType.tp_new(&PyQPointType,NULL, NULL);
  ((PyQPoint*)r)->_point = b;
  return r;
}

PyObject* PythonQtVariants::QSizeToPyObject(const QSize& b)
{
  PyObject* r = PyQSizeType.tp_new(&PyQSizeType,NULL, NULL);
  ((PyQSize*)r)->_size = b;
  return r;
}

PyObject* PythonQtVariants::QColorToPyObject(const QColor& b)
{
  PyObject* r = PyQColorType.tp_new(&PyQColorType,NULL, NULL);
  *((PyQColor*)r)->_color = b;
  return r;
}

PyObject* PythonQtVariants::QPixmapToPyObject(const QPixmap& b)
{
  PyObject* r = PyQPixmapType.tp_new(&PyQPixmapType,NULL, NULL);
  *((PyQPixmap*)r)->_pixmap = b;
  return r;
}


QVariant  PythonQtVariants::PyObjectToQVariant(PyObject* obj, int type)
{
  QVariant r;

  switch (type) {
  case QVariant::Size:
    if (obj->ob_type == &PyQSizeType) {
      r = ((PyQSize*)obj)->_size;
    }
    break;
  case QVariant::Point:
    if (obj->ob_type == &PyQPointType) {
      r = ((PyQPoint*)obj)->_point;
    }
    break;
  case QVariant::Rect:
    if (obj->ob_type == &PyQRectType) {
      r = ((PyQRect*)obj)->_rect;
    }
    break;
  case QVariant::Color:
    if (obj->ob_type == &PyQColorType) {
      r = *((PyQColor*)obj)->_color;
    }
    break;
  case QVariant::Pixmap:
    if (obj->ob_type == &PyQPixmapType) {
      r = *((PyQPixmap*)obj)->_pixmap;
    }
    break;
  default:
    r = QVariant();
  }
  return r;
}
