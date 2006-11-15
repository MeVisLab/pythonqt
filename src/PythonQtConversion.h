#ifndef _PYTHONQTCONVERSION_H
#define _PYTHONQTCONVERSION_H

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
// \file    PythonQtConversion.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include "PythonQtMisc.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"

#include <QWidget.h>

//! a static class that offers methods for type conversion
class PythonQtConv {

public:

  //! get a ref counted True or False Python object
  static PyObject* GetPyBool(bool val);

  //! converts the Qt parameter given in \c data, interpreting it as a \c info parameter, into a Python object,
  static PyObject* ConvertQtValueToPython(const PythonQtMethodInfo::ParameterInfo& info, void* data);

  //! converts the Qt parameter given in \c data, interpreting it as a \c type registered qvariant/meta type, into a Python object,
  static PyObject* ConvertQtValueToPython(int type, void* data);

  //! convert python object to Qt (according to the given parameter) and if the conversion should be strict
  static void* ConvertPythonToQt(const PythonQtMethodInfo::ParameterInfo& info, PyObject* obj, bool strict);

  //! creates a data storage for the passed parameter type and returns a void pointer to be set as arg[0] of qt_metacall
  static void* CreateQtReturnValue(const PythonQtMethodInfo::ParameterInfo& info);

  //! clear the parameter storage
  static void resetParameterStorage() {
    global_ptrStorage.reset();
    global_variantStorage.reset();
    global_valueStorage.reset();
  }


  //! converts QString to Python string (unicode!)
  static PyObject* QStringToPyObject(const QString& str);

  //! converts QStringList to Python tuple
  static PyObject* QStringListToPyObject(const QStringList& list);

  //! converts QStringList to Python list
  static PyObject* QStringListToPyList(const QStringList& list);

  //! get string value form py object
  static QString PyObjGetString(PyObject* val) { bool ok; QString s = PyObjGetString(val, false, ok); return s; }
  //! get string value form py object
  static QString PyObjGetString(PyObject* val, bool strict, bool &ok);
  //! get int from py object
  static int     PyObjGetInt(PyObject* val, bool strict, bool &ok);
  //! get int64 from py object
  static qint64  PyObjGetLongLong(PyObject* val, bool strict, bool &ok);
  //! get int64 from py object
  static quint64  PyObjGetULongLong(PyObject* val, bool strict, bool &ok);
  //! get double from py object
  static double  PyObjGetDouble(PyObject* val, bool strict, bool &ok);
  //! get bool from py object
  static bool    PyObjGetBool(PyObject* val, bool strict, bool &ok);

  //! create a string list from python sequence
  static QStringList PyObjToStringList(PyObject* val, bool strict, bool& ok);

  //! convert python object to qvariant, if type is given it will try to create a qvariant of that type, otherwise
  //! it will guess from the python type
  static QVariant PyObjToQVariant(PyObject* val, int type = -1);

  //! convert QVariant from PyObject
  static PyObject* QVariantToPyObject(const QVariant& v);

  static PyObject* QVariantMapToPyObject(const QVariantMap& m);
  static PyObject* QVariantListToPyObject(const QVariantList& l);
  static PyObject* QDateToPyObject(const QDate& b);
  static PyObject* QTimeToPyObject(const QTime& b);
  static PyObject* QDateTimeToPyObject(const QDateTime& b);

  // TODO: support the rest of the QVariant types!
  static PyObject* QBitArrayToPyObject(const QBitArray& b) { return NULL; }
  static PyObject* QUrlToPyObject(const QUrl& b) { return NULL; }
  static PyObject* QLocaleToPyObject(const QLocale& b) { return NULL; }
  static PyObject* QRectfToPyObject(const QRectF& b) { return NULL; }
  static PyObject* QLineToPyObject(const QLine& b) { return NULL; }
  static PyObject* QLinefToPyObject(const QLineF& b) { return NULL; }
  static PyObject* QPointfToPyObject(const QPointF& b) { return NULL; }
  static PyObject* QSizefToPyObject(const QSizeF& b) { return NULL; }
  static PyObject* QRegExpToPyObject(const QRegExp& b) { return NULL; }
  static PyObject* QFontToPyObject(const QFont& b) { return NULL; }
  static PyObject* QBrushToPyObject(const QBrush& b) { return NULL; }
  static PyObject* QPaletteToPyObject(const QPalette& b) { return NULL; }
  static PyObject* QIconToPyObject(const QIcon& b) { return NULL; }
  static PyObject* QImageToPyObject(const QImage& b) { return NULL; }
  static PyObject* QPolygonToPyObject(const QPolygon& b) { return NULL; }
  static PyObject* QRegionToPyObject(const QRegion& b) { return NULL; }
  static PyObject* QBitmapToPyObject(const QBitmap& b) { return NULL; }
  static PyObject* QCursorToPyObject(const QCursor& b) { return NULL; }
  static PyObject* QSizePolicyToPyObject(const QSizePolicy& b) { return NULL; }
  static PyObject* QKeySequenceToPyObject(const QKeySequence& b) { return NULL; }
  static PyObject* QPenToPyObject(const QPen& b) { return NULL; }
  static PyObject* QTextLengthToPyObject(const QTextLength& b) { return NULL; }
  static PyObject* QTextFormatToPyObject(const QTextFormat& b) { return NULL; }

private:

  static PythonQtValueStorage<qint64, 128>    global_valueStorage;
  static PythonQtValueStorage<void*, 128>   global_ptrStorage;
  static PythonQtValueStorage<QVariant, 32> global_variantStorage;
};

#endif
