#ifndef _PYTHONQTMETHODINFO_H
#define _PYTHONQTMETHODINFO_H

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
// \file    PythonQtMethodInfo.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include <QByteArray>
#include <QHash>
#include <QList>
#include <QMetaMethod>

//! stores information about a specific signal/slot/method
class PythonQtMethodInfo
{
public:
  //! this is a funny type union of QMetaType and QVariant, only god knows
  //! why QMetaType do not support identical types in Qt4,
  //! especial the support of Long, Short, Char etc. is missing in QVariant
  //! and QMetaType does not know anything about most variant types and e.g. LongLong
  enum ParameterType {
    Unknown = -1,
    // from QMetaType
    Void = 0,
    Bool = 1, Int = 2, UInt = 3, Double = 6, QChar = 7,
    String = 10, ByteArray = 12,
    Long = 129, Short, Char, ULong,
    UShort, UChar, Float,

    // from QVariant
    LongLong = 4,
    ULongLong = 5,
    Map = 8,
    List = 9,
    StringList = 11,
    BitArray = 13,
    Date = 14,
    Time = 15,
    DateTime = 16,
    Url = 17,
    Locale = 18,
    Rect = 19,
    RectF = 20,
    Size = 21,
    SizeF = 22,
    Line = 23,
    LineF = 24,
    Point = 25,
    PointF = 26,
    RegExp = 27,

    ColorGroup = 63,
    Font = 64,
    Pixmap = 65,
    Brush = 66,
    Color = 67,
    Palette = 68,
    Icon = 69,
    Image = 70,
    Polygon = 71,
    Region = 72,
    Bitmap = 73,
    Cursor = 74,
    SizePolicy = 75,
    KeySequence = 76,
    Pen = 77,
    TextLength = 78,
    TextFormat = 79,

    Variant    = 513
  };

  //! stores the QVariant id (if available) and the name of the type
  struct ParameterInfo {
    ParameterType typeId;
    QByteArray name;
    bool isPointer;
    bool isConst;
  };

  PythonQtMethodInfo(const QMetaMethod& meta);

  const QMetaMethod* metaMethod() const { return &_meta; }

  //! returns the number of parameters (without the return value)
  int  parameterCount() const { return _parameters.size(); };

  //! returns the id for the given type (using an internal dictionary)
  static ParameterType nameToType(const char* name);

  //! get the parameter infos
  const QList<ParameterInfo>& parameters() const { return _parameters; }

  //! get the full signature including return type
  QString fullSignature() { return QString(_meta.typeName()) + " " + _meta.signature(); }

private:
  static void fillParameterInfo(ParameterInfo& type, const QByteArray& name);

  static QHash<QByteArray, ParameterType> _parameterTypeDict;

  QMetaMethod       _meta;
  QList<ParameterInfo> _parameters;
};

//! stores information about a slot, including a next pointer to overloaded slots
class PythonQtSlotInfo : public PythonQtMethodInfo
{
public:
  PythonQtSlotInfo(const QMetaMethod& meta, int slotIndex):PythonQtMethodInfo(meta)
  { _slotIndex = slotIndex; _next = NULL; }

public:
  //! get the index of the slot (needed for qt_metacall)
  int slotIndex() const { return _slotIndex; }

  //! get next overloaded slot (which has the same name)
  PythonQtSlotInfo* nextInfo()  const { return _next; }

  //! set the next overloaded slot
  void setNextInfo(PythonQtSlotInfo* next) { _next = next; }

private:
  int _slotIndex;
  PythonQtSlotInfo* _next;
};


#endif
