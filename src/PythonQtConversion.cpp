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
// \file    PythonQtConversion.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtConversion.h"
#include "PythonQtVariants.h"
#include <QDateTime>
#include <QTime>
#include <QDate>

PythonQtValueStorage<qint64, 128>  PythonQtConv::global_valueStorage;
PythonQtValueStorage<void*, 128>   PythonQtConv::global_ptrStorage;
PythonQtValueStorage<QVariant, 32> PythonQtConv::global_variantStorage;


PyObject* PythonQtConv::GetPyBool(bool val)
{
  PyObject* r = val?Py_True:Py_False;
  Py_INCREF(r);
  return r;
}

PyObject* PythonQtConv::ConvertQtValueToPython(const PythonQtMethodInfo::ParameterInfo& info, void* data) {
  if (info.typeId == PythonQtMethodInfo::Void) {
    Py_INCREF(Py_None);
    return Py_None;
  } else {
    if (info.isPointer && (info.typeId == PythonQtMethodInfo::Unknown)) {
      // convert argList[0] to python
      PyObject* pyObj = PythonQt::priv()->wrapPtr(*((void**)data), info.name);
      if (pyObj) {
        return pyObj;
      } else {
        std::cerr << "unknown pointer type " << info.name.data() << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
        Py_INCREF(Py_None);
        return Py_None;
      }
    } else {
      return ConvertQtValueToPython(info.typeId, data);
    }
  }
}

PyObject* PythonQtConv::ConvertQtValueToPython(int type, void* data) {
  switch (type) {
  case PythonQtMethodInfo::Void:
    Py_INCREF(Py_None);
    return Py_None;
  case PythonQtMethodInfo::Char:
    return PyInt_FromLong(*((char*)data));
  case PythonQtMethodInfo::UChar:
    return PyInt_FromLong(*((unsigned char*)data));
  case PythonQtMethodInfo::Short:
    return PyInt_FromLong(*((short*)data));
  case PythonQtMethodInfo::UShort:
    return PyInt_FromLong(*((unsigned short*)data));
  case PythonQtMethodInfo::Long:
    return PyInt_FromLong(*((long*)data));
  case PythonQtMethodInfo::ULong:
    // does not fit into simple int of python
    return PyLong_FromUnsignedLong(*((unsigned long*)data));
  case PythonQtMethodInfo::Bool:
    return PythonQtConv::GetPyBool(*((bool*)data));
  case PythonQtMethodInfo::Int:
    return PyInt_FromLong(*((int*)data));
  case PythonQtMethodInfo::UInt:
    return PyInt_FromLong(*((unsigned int*)data));
  case PythonQtMethodInfo::QChar:
    return PyInt_FromLong(*((short*)data));
  case PythonQtMethodInfo::Float:
    return PyFloat_FromDouble(*((float*)data));
  case PythonQtMethodInfo::Double:
    return PyFloat_FromDouble(*((double*)data));
  case PythonQtMethodInfo::LongLong:
    return PyLong_FromLongLong(*((qint64*)data));
  case PythonQtMethodInfo::ULongLong:
    return PyLong_FromUnsignedLongLong(*((quint64*)data));
  case PythonQtMethodInfo::ByteArray:
    return PyString_FromString(*((QByteArray*)data));
  case PythonQtMethodInfo::Map:
    return PythonQtConv::QVariantMapToPyObject(*((QVariantMap*)data));
  case PythonQtMethodInfo::List:
    return PythonQtConv::QVariantListToPyObject(*((QVariantList*)data));
  case PythonQtMethodInfo::String:
    return PythonQtConv::QStringToPyObject(*((QString*)data));
  case PythonQtMethodInfo::StringList:
    return PythonQtConv::QStringListToPyObject(*((QStringList*)data));
  case PythonQtMethodInfo::Date:
    return PythonQtConv::QDateToPyObject(*((QDate*)data));
  case PythonQtMethodInfo::Time:
    return PythonQtConv::QTimeToPyObject(*((QTime*)data));
  case PythonQtMethodInfo::DateTime:
    return PythonQtConv::QDateTimeToPyObject(*((QDateTime*)data));
  case PythonQtMethodInfo::Url:
    return PythonQtConv::QUrlToPyObject(*((QUrl*)data));
  case PythonQtMethodInfo::Rect:
    return PythonQtVariants::QRectToPyObject(*((QRect*)data));
  case PythonQtMethodInfo::RectF:
    return PythonQtConv::QRectfToPyObject(*((QRectF*)data));
  case PythonQtMethodInfo::Size:
    return PythonQtVariants::QSizeToPyObject(*((QSize*)data));
  case PythonQtMethodInfo::SizeF:
    return PythonQtConv::QSizefToPyObject(*((QSizeF*)data));
  case PythonQtMethodInfo::Line:
    return PythonQtConv::QLineToPyObject(*((QLine*)data));
  case PythonQtMethodInfo::LineF:
    return PythonQtConv::QLinefToPyObject(*((QLineF*)data));
  case PythonQtMethodInfo::Point:
    return PythonQtVariants::QPointToPyObject(*((QPoint*)data));
  case PythonQtMethodInfo::PointF:
    return PythonQtConv::QPointfToPyObject(*((QPointF*)data));
  case PythonQtMethodInfo::Color:
    return PythonQtVariants::QColorToPyObject(*((QColor*)data));
  case PythonQtMethodInfo::Pixmap:
    return PythonQtVariants::QPixmapToPyObject(*((QPixmap*)data));
  case PythonQtMethodInfo::RegExp:
    return PythonQtConv::QRegExpToPyObject(*((QRegExp*)data));
  case PythonQtMethodInfo::BitArray:
    return PythonQtConv::QBitArrayToPyObject(*((QBitArray*)data));
  case PythonQtMethodInfo::Locale:
    return PythonQtConv::QLocaleToPyObject(*((QLocale*)data));
  case PythonQtMethodInfo::Font:
    return PythonQtConv::QFontToPyObject(*((QFont*)data));
  case PythonQtMethodInfo::Brush:
    return PythonQtConv::QBrushToPyObject(*((QBrush*)data));
  case PythonQtMethodInfo::Palette:
    return PythonQtConv::QPaletteToPyObject(*((QPalette*)data));
  case PythonQtMethodInfo::Icon:
    return PythonQtConv::QIconToPyObject(*((QIcon*)data));
  case PythonQtMethodInfo::Image:
    return PythonQtConv::QImageToPyObject(*((QImage*)data));
  case PythonQtMethodInfo::Polygon:
    return PythonQtConv::QPolygonToPyObject(*((QPolygon*)data));
  case PythonQtMethodInfo::Region:
    return PythonQtConv::QRegionToPyObject(*((QRegion*)data));
  case PythonQtMethodInfo::Bitmap:
    return PythonQtConv::QBitmapToPyObject(*((QBitmap*)data));
  case PythonQtMethodInfo::Cursor:
    return PythonQtConv::QCursorToPyObject(*((QCursor*)data));
  case PythonQtMethodInfo::SizePolicy:
    return PythonQtConv::QSizePolicyToPyObject(*((QSizePolicy*)data));
  case PythonQtMethodInfo::KeySequence:
    return PythonQtConv::QKeySequenceToPyObject(*((QKeySequence*)data));
  case PythonQtMethodInfo::Pen:
    return PythonQtConv::QPenToPyObject(*((QPen*)data));
  case PythonQtMethodInfo::TextLength:
    return PythonQtConv::QTextLengthToPyObject(*((QTextLength*)data));
  case PythonQtMethodInfo::TextFormat:
    return PythonQtConv::QTextFormatToPyObject(*((QTextFormat*)data));
  case PythonQtMethodInfo::Variant:
    return PythonQtConv::QVariantToPyObject(*((QVariant*)data));
  case QMetaType::QObjectStar:
  case QMetaType::QWidgetStar:
    return PythonQt::priv()->wrapQObject(*((QObject**)data));
  default:
    std::cerr << "unknown type " << type << ", in " << __FILE__ << ":" << __LINE__ << std::endl;
}
Py_INCREF(Py_None);
return Py_None;
 }

void* PythonQtConv::CreateQtReturnValue(const PythonQtMethodInfo::ParameterInfo& info) {
  void* ptr = NULL;
  if (info.isPointer) {
    PythonQtValueStorage_ADD_VALUE(global_ptrStorage, void*, NULL, ptr);
  } else {
    switch (info.typeId) {
    case PythonQtMethodInfo::Char:
    case PythonQtMethodInfo::UChar:
    case PythonQtMethodInfo::Short:
    case PythonQtMethodInfo::UShort:
    case PythonQtMethodInfo::Long:
    case PythonQtMethodInfo::ULong:
    case PythonQtMethodInfo::Bool:
    case PythonQtMethodInfo::Int:
    case PythonQtMethodInfo::UInt:
    case PythonQtMethodInfo::QChar:
    case PythonQtMethodInfo::Float:
    case PythonQtMethodInfo::Double:
      PythonQtValueStorage_ADD_VALUE(global_valueStorage, long, 0, ptr);
      break;
    case PythonQtMethodInfo::Variant:
      PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, 0, ptr);
      // return the ptr to the variant
      break;
    default:
      // everything else is stored in a QVariant...
      PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, QVariant::Type(info.typeId), ptr);
      // return the constData pointer that will be filled with the result value later on
      ptr = (void*)((QVariant*)ptr)->constData();
    }
  }
  return ptr;
}

void* PythonQtConv::ConvertPythonToQt(const PythonQtMethodInfo::ParameterInfo& info, PyObject* obj, bool strict)
{
  bool ok;
  void* ptr = NULL;
  if (info.isPointer) {
    if (obj->ob_type == &PythonQtWrapper_Type) {
      PythonQtWrapper* wrap = (PythonQtWrapper*)obj;
      // c++ wrapper, check if the class names of the c++ objects match
      if (wrap->_info->isCPPWrapper()) {
        if (wrap->_info->wrappedCPPClassName() == info.name) {
          PythonQtValueStorage_ADD_VALUE(global_ptrStorage, void*, wrap->_wrappedPtr, ptr);
        } else {
          // not matching
        }
      } else {
        if (wrap->_info->inherits(info.name)) {
          PythonQtValueStorage_ADD_VALUE(global_ptrStorage, void*, wrap->_obj, ptr);
        } else {
          // not matching
        }
      }
    } else
    if (info.typeId == PythonQtMethodInfo::Char || info.typeId == PythonQtMethodInfo::UChar) {
      QString str = PyObjGetString(obj, strict, ok);
      if (ok) {
        void* ptr2 = NULL;
        PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, QVariant(str.toUtf8()), ptr2);
        PythonQtValueStorage_ADD_VALUE(global_ptrStorage, void*, (((QByteArray*)((QVariant*)ptr2)->constData())->data()), ptr);
      }
    } else if (info.name == "PyObject") {
      // handle low level PyObject directly
      PythonQtValueStorage_ADD_VALUE(global_ptrStorage, void*, obj, ptr);
    }
    // EXTRA: we could support pointers to other simple types, but this would not make sense in most situations

  } else {
    // not a pointer
    switch (info.typeId) {
      case PythonQtMethodInfo::Char:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, char, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::UChar:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, unsigned char, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Short:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, short, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::UShort:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, unsigned short, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Long:
        {
          long val = (long)PyObjGetLongLong(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, long, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::ULong:
        {
          unsigned long val = (unsigned long)PyObjGetLongLong(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, unsigned long, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Bool:
        {
          bool val = PyObjGetBool(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, bool, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Int:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, int, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::UInt:
        {
          unsigned int val = (unsigned int)PyObjGetLongLong(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, int, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::QChar:
        {
          int val = PyObjGetInt(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, short, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Float:
        {
          float val = (float)PyObjGetDouble(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, float, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::Double:
        {
          double val = (double)PyObjGetDouble(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, double, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::LongLong:
        {
          qint64 val = PyObjGetLongLong(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, qint64, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::ULongLong:
        {
          quint64 val = PyObjGetULongLong(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_valueStorage, quint64, val, ptr);
          }
        }
        break;
      case PythonQtMethodInfo::ByteArray:
        {
          QString str = PyObjGetString(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, QVariant(str.toUtf8()), ptr);
            ptr = (void*)((QVariant*)ptr)->constData();
          }
        }
        break;
      case PythonQtMethodInfo::String:
        {
          QString str = PyObjGetString(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, QVariant(str), ptr);
            ptr = (void*)((QVariant*)ptr)->constData();
          }
        }
        break;
      case PythonQtMethodInfo::StringList:
        {
          QStringList l = PyObjToStringList(obj, strict, ok);
          if (ok) {
            PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, QVariant(l), ptr);
            ptr = (void*)((QVariant*)ptr)->constData();
          }
        }
        break;

      case PythonQtMethodInfo::List:
      case PythonQtMethodInfo::Map:
      case PythonQtMethodInfo::Date:
      case PythonQtMethodInfo::Time:
      case PythonQtMethodInfo::DateTime:
      case PythonQtMethodInfo::Url:
      case PythonQtMethodInfo::Rect:
      case PythonQtMethodInfo::RectF:
      case PythonQtMethodInfo::Size:
      case PythonQtMethodInfo::SizeF:
      case PythonQtMethodInfo::Line:
      case PythonQtMethodInfo::LineF:
      case PythonQtMethodInfo::Point:
      case PythonQtMethodInfo::PointF:
      case PythonQtMethodInfo::RegExp:
      case PythonQtMethodInfo::BitArray:
      case PythonQtMethodInfo::Locale:
      case PythonQtMethodInfo::Font:
      case PythonQtMethodInfo::Pixmap:
      case PythonQtMethodInfo::Brush:
      case PythonQtMethodInfo::Color:
      case PythonQtMethodInfo::Palette:
      case PythonQtMethodInfo::Icon:
      case PythonQtMethodInfo::Image:
      case PythonQtMethodInfo::Polygon:
      case PythonQtMethodInfo::Region:
      case PythonQtMethodInfo::Bitmap:
      case PythonQtMethodInfo::Cursor:
      case PythonQtMethodInfo::SizePolicy:
      case PythonQtMethodInfo::KeySequence:
      case PythonQtMethodInfo::Pen:
      case PythonQtMethodInfo::TextLength:
      case PythonQtMethodInfo::TextFormat:
        {
          // for all these types, we use the same qvariant conversion and pass out the constData of the variant:
          QVariant v = PyObjToQVariant(obj, info.typeId);
          if (v.isValid()) {
            PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, v, ptr);
            ptr = (void*)((QVariant*)ptr)->constData();
          }
        }
        break;
      case PythonQtMethodInfo::Variant:
        {
          QVariant v = PyObjToQVariant(obj);
          if (v.isValid()) {
            PythonQtValueStorage_ADD_VALUE(global_variantStorage, QVariant, v, ptr);
          }
        }
        break;
    }
  }
  return ptr;
}


QStringList PythonQtConv::PyObjToStringList(PyObject* val, bool strict, bool& ok) {
  QStringList v;
  ok = false;
  // if we are strict, we do not want to convert a string to a stringlist
  // (strings in python are detected to be sequences)
  if (strict &&
    (val->ob_type == &PyString_Type ||
    PyUnicode_Check(val))) {
    ok = false;
    return v;
  }
  if (PySequence_Check(val)) {
    int count = PySequence_Size(val);
    for (int i = 0;i<count;i++) {
      PyObject* value = PySequence_GetItem(val,i);
      v.append(PyObjGetString(value,false,ok));
    }
    ok = true;
  }
  return v;
}

QString PythonQtConv::PyObjGetString(PyObject* val, bool strict, bool& ok) {
  QString r;
  ok = true;
  if (val->ob_type == &PyString_Type) {
    r = QString(PyString_AS_STRING(val));
  } else if (PyUnicode_Check(val)) {
#ifdef WIN32
    r = QString::fromUtf16(PyUnicode_AS_UNICODE(val));
#else
    PyObject *ptmp = PyUnicode_AsUTF8String(val);
    if(ptmp) {
      r = QString::fromUtf8(PyString_AS_STRING(ptmp));
      Py_DECREF(ptmp);
    }
#endif
  } else if (!strict) {
    // EXTRA: could also use _Unicode, but why should we?
    PyObject* str =  PyObject_Str(val);
    if (str) {
      r = QString(PyString_AS_STRING(str));
      Py_DECREF(str);
    } else {
      ok = false;
    }
  } else {
    ok = false;
  }
  return r;
}

bool PythonQtConv::PyObjGetBool(PyObject* val, bool strict, bool &ok) {
  bool d = false;
  if (val == Py_False) {
    d = false;
    ok = true;
  } else if (val == Py_True) {
    d = true;
    ok = true;
  } else if (!strict) {
    d = PyObjGetInt(val, false, ok)!=0;
  }
  return d;
}

int PythonQtConv::PyObjGetInt(PyObject* val, bool strict, bool &ok) {
  int d;
  ok = true;
  if (val->ob_type == &PyInt_Type) {
    d = PyInt_AS_LONG(val);
  } else if (!strict) {
    if (val->ob_type == &PyFloat_Type) {
      d = floor(PyFloat_AS_DOUBLE(val));
    } else if (val->ob_type == &PyLong_Type) {
      // handle error on overflow!
      d = PyLong_AsLong(val);
    } else if (val == Py_False) {
      d = 0;
    } else if (val == Py_True) {
      d = 1;
    } else {
      ok = false;
    }
  } else {
    ok = false;
  }
  return d;
}

qint64 PythonQtConv::PyObjGetLongLong(PyObject* val, bool strict, bool &ok) {
  qint64 d;
  ok = true;
  if (val->ob_type == &PyInt_Type) {
    d = PyInt_AS_LONG(val);
  } else if (val->ob_type == &PyLong_Type) {
    d = PyLong_AsLongLong(val);
  } else if (!strict) {
    if (val->ob_type == &PyFloat_Type) {
      d = floor(PyFloat_AS_DOUBLE(val));
    } else if (val == Py_False) {
      d = 0;
    } else if (val == Py_True) {
      d = 1;
    } else {
      ok = false;
    }
  } else {
    ok = false;
  }
  return d;
}

quint64 PythonQtConv::PyObjGetULongLong(PyObject* val, bool strict, bool &ok) {
  quint64 d;
  ok = true;
  if (val->ob_type == &PyInt_Type) {
    d = PyInt_AS_LONG(val);
  } else if (val->ob_type == &PyLong_Type) {
    d = PyLong_AsLongLong(val);
  } else if (!strict) {
    if (val->ob_type == &PyFloat_Type) {
      d = floor(PyFloat_AS_DOUBLE(val));
    } else if (val == Py_False) {
      d = 0;
    } else if (val == Py_True) {
      d = 1;
    } else {
      ok = false;
    }
  } else {
    ok = false;
  }
  return d;
}

double PythonQtConv::PyObjGetDouble(PyObject* val, bool strict, bool &ok) {
  double d;
  ok = true;
  if (val->ob_type == &PyFloat_Type) {
    d = PyFloat_AS_DOUBLE(val);
  } else if (!strict) {
    if (val->ob_type == &PyInt_Type) {
      d = PyInt_AS_LONG(val);
    } else if (val->ob_type == &PyLong_Type) {
      d = PyLong_AsLong(val);
    } else if (val == Py_False) {
      d = 0;
    } else if (val == Py_True) {
      d = 1;
    } else {
      ok = false;
    }
  } else {
    ok = false;
  }
  return d;
}

QVariant PythonQtConv::PyObjToQVariant(PyObject* val, int type)
{
  QVariant v;
  bool ok = true;

  if (type==-1) {
    // no special type requested
    if (val->ob_type==&PyString_Type || val->ob_type==&PyUnicode_Type) {
      type = QVariant::String;
    } else
    if (val->ob_type==&PyInt_Type) {
      type = QVariant::Int;
    } else
    if (val->ob_type==&PyLong_Type) {
      type = QVariant::LongLong;
    } else
    if (val->ob_type==&PyFloat_Type) {
      type = QVariant::Double;
    } else
    if (val == Py_False || val == Py_True) {
      type = QVariant::Bool;
    } else
    if (val->ob_type == &PythonQtWrapper_Type) {
      PythonQtWrapper* wrap = (PythonQtWrapper*)val;
      // c++ wrapper, check if the class names of the c++ objects match
      if (wrap->_info->isCPPWrapper()) {
        // is this worth anything? we loose the knowledge of the cpp object type
        v = qVariantFromValue(wrap->_wrappedPtr);
      } else {
        v = qVariantFromValue(wrap->_obj);
      }
      return v;
    } else
    if (val->ob_type==&PyDict_Type) {
      type = QVariant::Map;
    } else
    if (val->ob_type==&PyList_Type || val->ob_type==&PyTuple_Type || PySequence_Check(val)) {
      type = QVariant::List;
    } else if (val == Py_None) {
      // none is invalid
      type = QVariant::Invalid;
    } else {
      type = QVariant::String;
    }
  }

  // special type request:
  switch (type) {
  case QVariant::Invalid:
    return v;
    break;
  case QVariant::Int:
    {
      int d = PyObjGetInt(val, false, ok);
      if (ok) return QVariant(d);
    }
    break;
  case QVariant::UInt:
    {
      int d = PyObjGetInt(val, false,ok);
      if (ok) v = QVariant((unsigned int)d);
    }
    break;
  case QVariant::Bool:
    {
      int d = PyObjGetBool(val,false,ok);
      if (ok) v =  QVariant((bool)(d!=0));
    }
    break;
  case QVariant::Double:
    {
    double d = PyObjGetDouble(val,false,ok);
    if (ok) v =  QVariant(d);
    break;
    }
  case QMetaType::Float:
    {
    float d = (float) PyObjGetDouble(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::Long:
    {
    long d = (long) PyObjGetLongLong(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::ULong:
    {
    unsigned long d = (unsigned long) PyObjGetLongLong(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::Short:
    {
    short d = (short) PyObjGetInt(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::UShort:
    {
    unsigned short d = (unsigned short) PyObjGetInt(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::Char:
    {
    char d = (char) PyObjGetInt(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }
  case QMetaType::UChar:
    {
    unsigned char d = (unsigned char) PyObjGetInt(val,false,ok);
    if (ok) v =  qVariantFromValue(d);
    break;
    }

  case QVariant::ByteArray:
  case QVariant::String:
    {
      bool ok;
      v = QVariant(PyObjGetString(val, false, ok));
    }
    break;

  // these are important for MeVisLab
  case QVariant::Map:
  {
    if (PyMapping_Check(val)) {
      QMap<QString,QVariant> map;
      PyObject* items = PyMapping_Items(val);
      if (items) {
        int count = PyList_Size(items);
        PyObject* value;
        PyObject* key;
        PyObject* tuple;
        for (int i = 0;i<count;i++) {
          tuple = PyList_GetItem(items,i);
          key = PyTuple_GetItem(tuple, 0);
          value = PyTuple_GetItem(tuple, 1);
          map.insert(PyObjGetString(key), PyObjToQVariant(value,-1));
        }
        Py_DECREF(items);
        v = map;
      }
    }
  }
  break;
  case QVariant::List:
    if (PySequence_Check(val)) {
      QVariantList list;
      int count = PySequence_Size(val);
      PyObject* value;
      for (int i = 0;i<count;i++) {
        value = PySequence_GetItem(val,i);
        list.append(PyObjToQVariant(value, -1));
      }
      v = list;
    }
    break;
  case QVariant::StringList:
    {
      bool ok;
      QStringList l = PyObjToStringList(val, false, ok);
      if (ok) {
        v = l;
      }
    }
    break;

  case QVariant::Date:
    //TODO: either support ISO strings, or python datetime objects
    break;
  case QVariant::DateTime:
    //TODO: either support ISO strings, or python datetime objects
    break;
  case QVariant::Time:
    //TODO: either support ISO strings, or python datetime objects
    break;

  case QVariant::Rect:
  case QVariant::Point:
  case QVariant::Pixmap:
  case QVariant::Color:
  case QVariant::Size:
    v = PythonQtVariants::PyObjectToQVariant(val, type);
    break;

  default:
    //TODO: add support for the rest of the qvariant types
    v = QVariant();
  }
  return v;
}

PyObject* PythonQtConv::QStringToPyObject(const QString& str)
{
  if (str.isNull()) {
    return PyString_FromString("");
  } else {
#ifdef WIN32
//    return PyString_FromString(str.toLatin1().data());
    return PyUnicode_FromUnicode(str.utf16(), str.length());
#else
    return PyUnicode_DecodeUTF16((const char*)str.utf16(), str.length()*2, NULL, NULL);
#endif
  }
}

PyObject* PythonQtConv::QStringListToPyObject(const QStringList& list)
{
  PyObject* result = PyTuple_New(list.count());
  int i = 0;
  QString str;
  foreach (str, list) {
    PyTuple_SET_ITEM(result, i, PythonQtConv::QStringToPyObject(str));
    i++;
  }
  // why is the error state bad after this?
  PyErr_Clear();
  return result;
}

PyObject* PythonQtConv::QStringListToPyList(const QStringList& list)
{
  PyObject* result = PyList_New(list.count());
  int i = 0;
  for (QStringList::ConstIterator it = list.begin(); it!=list.end(); ++it) {
    PyList_SET_ITEM(result, i, PythonQtConv::QStringToPyObject(*it));
    i++;
  }
  return result;
}

PyObject* PythonQtConv::QVariantToPyObject(const QVariant& v)
{
  return ConvertQtValueToPython(v.userType(), (void*)v.constData());
}

PyObject* PythonQtConv::QVariantMapToPyObject(const QVariantMap& m) {
  PyObject* result = PyDict_New();
  QVariantMap::const_iterator t = m.constBegin();
  PyObject* key;
  PyObject* val;
  for (;t!=m.end();t++) {
    key = QStringToPyObject(t.key());
    val = QVariantToPyObject(t.value());
    PyDict_SetItem(result, key, val);
    Py_DECREF(key);
    Py_DECREF(val);
  }
  return result;
}

PyObject* PythonQtConv::QVariantListToPyObject(const QVariantList& l) {
  PyObject* result = PyTuple_New(l.count());
  int i = 0;
  QVariant v;
  foreach (v, l) {
    PyTuple_SET_ITEM(result, i, PythonQtConv::QVariantToPyObject(v));
    i++;
  }
  // why is the error state bad after this?
  PyErr_Clear();
  return result;
}

PyObject* PythonQtConv::QDateToPyObject(const QDate& d)
{
  // EXTRA: probably it would be good to support python datetime, since it is now part of the core Python 2.5
  // (but we already have scripts which work with the ISO strings that we return here 8-()
  QString s = d.toString(Qt::ISODate);
  if (s.isEmpty()) {
    return PyString_FromString("");
  } else {
    return PyString_FromString(s.toLatin1().data());
  }
}

PyObject* PythonQtConv::QTimeToPyObject(const QTime& t)
{
  QString s = t.toString(Qt::ISODate);
  if (s.isEmpty()) {
    return PyString_FromString("");
  } else {
    return PyString_FromString(s.toLatin1().data());
  }
}

PyObject* PythonQtConv::QDateTimeToPyObject(const QDateTime& dt)
{
  QString s = dt.toString(Qt::ISODate);
  if (s.isEmpty()) {
    return PyString_FromString("");
  } else {
    return PyString_FromString(s.toLatin1().data());
  }
}

