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
// \file    PythonQtMethodInfo.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtMethodInfo.h"

PythonQtMethodInfo::PythonQtMethodInfo(const QMetaMethod& meta)
{
  _meta = meta;
  ParameterInfo type;
  fillParameterInfo(type, QByteArray(meta.typeName()));
  _parameters.append(type);
  QByteArray name;
  QList<QByteArray> names = meta.parameterTypes();
  foreach (name, names) {
    fillParameterInfo(type, name);
    _parameters.append(type);
  }
}

void PythonQtMethodInfo::fillParameterInfo(ParameterInfo& type, const QByteArray& orgName)
{
  QByteArray name = orgName;

  int len = name.length();
  if (len>0) {
    if (strncmp(name.data(), "const ", 6)==0) {
      name = name.mid(6);
      len -= 6;
      type.isConst = true;
    } else {
      type.isConst = false;
    }
    // EXTRA: & references are not yet supported, while const & is removed by moc
    while (name.at(len-1) == '*') {
      len--;
    }
    if (len!=name.length()) {
      name = name.left(len);
      type.isPointer = true;
    } else {
      type.isPointer = false;
    }

    type.typeId = nameToType(name);
    type.name = name;
  } else {
    type.typeId = Void;
    type.isPointer = false;
    type.isConst = false;
  }
}

PythonQtMethodInfo::ParameterType PythonQtMethodInfo::nameToType(const char* name)
{
  if (_parameterTypeDict.isEmpty()) {
    // QMetaType names
    _parameterTypeDict.insert("long", PythonQtMethodInfo::Long);
    _parameterTypeDict.insert("int", PythonQtMethodInfo::Int);
    _parameterTypeDict.insert("short", PythonQtMethodInfo::Short);
    _parameterTypeDict.insert("char", PythonQtMethodInfo::Char);
    _parameterTypeDict.insert("ulong", PythonQtMethodInfo::ULong);
    _parameterTypeDict.insert("unsigned long", PythonQtMethodInfo::ULong);
    _parameterTypeDict.insert("uint", PythonQtMethodInfo::UInt);
    _parameterTypeDict.insert("unsigned int", PythonQtMethodInfo::UInt);
    _parameterTypeDict.insert("ushort", PythonQtMethodInfo::UShort);
    _parameterTypeDict.insert("unsigned short", PythonQtMethodInfo::UShort);
    _parameterTypeDict.insert("uchar", PythonQtMethodInfo::UChar);
    _parameterTypeDict.insert("unsigned char", PythonQtMethodInfo::UChar);
    _parameterTypeDict.insert("bool", PythonQtMethodInfo::Bool);
    _parameterTypeDict.insert("float", PythonQtMethodInfo::Float);
    _parameterTypeDict.insert("double", PythonQtMethodInfo::Double);
    _parameterTypeDict.insert("qreal", PythonQtMethodInfo::Double);
    _parameterTypeDict.insert("QChar", PythonQtMethodInfo::QChar);
    _parameterTypeDict.insert("QByteArray", PythonQtMethodInfo::ByteArray);
    _parameterTypeDict.insert("Q3CString", PythonQtMethodInfo::ByteArray);
    _parameterTypeDict.insert("QString", PythonQtMethodInfo::String);
    _parameterTypeDict.insert("", PythonQtMethodInfo::Void);
    _parameterTypeDict.insert("void", PythonQtMethodInfo::Void);
    // QVariant names
    _parameterTypeDict.insert("Q_LLONG", PythonQtMethodInfo::LongLong);
    _parameterTypeDict.insert("Q_ULLONG", PythonQtMethodInfo::ULongLong);
    _parameterTypeDict.insert("qlonglong", PythonQtMethodInfo::LongLong);
    _parameterTypeDict.insert("qulonglong", PythonQtMethodInfo::ULongLong);
    _parameterTypeDict.insert("qint64", PythonQtMethodInfo::LongLong);
    _parameterTypeDict.insert("quint64", PythonQtMethodInfo::ULongLong);
    _parameterTypeDict.insert("QIconSet", PythonQtMethodInfo::Icon);
    _parameterTypeDict.insert("QVariant", PythonQtMethodInfo::Variant);
    _parameterTypeDict.insert("QVariantMap", PythonQtMethodInfo::Map);
    _parameterTypeDict.insert("QVariantList", PythonQtMethodInfo::List);
    _parameterTypeDict.insert("QMap<QString,QVariant>", PythonQtMethodInfo::Map);
    _parameterTypeDict.insert("QList<QVariant>", PythonQtMethodInfo::List);
    _parameterTypeDict.insert("QStringList", PythonQtMethodInfo::StringList);
    _parameterTypeDict.insert("QBitArray", PythonQtMethodInfo::BitArray);
    _parameterTypeDict.insert("QDate", PythonQtMethodInfo::Date);
    _parameterTypeDict.insert("QTime", PythonQtMethodInfo::Time);
    _parameterTypeDict.insert("QDateTime", PythonQtMethodInfo::DateTime);
    _parameterTypeDict.insert("QUrl", PythonQtMethodInfo::Url);
    _parameterTypeDict.insert("QLocale", PythonQtMethodInfo::Locale);
    _parameterTypeDict.insert("QRect", PythonQtMethodInfo::Rect);
    _parameterTypeDict.insert("QRectf", PythonQtMethodInfo::RectF);
    _parameterTypeDict.insert("QSize", PythonQtMethodInfo::Size);
    _parameterTypeDict.insert("QSizef", PythonQtMethodInfo::SizeF);
    _parameterTypeDict.insert("QLine", PythonQtMethodInfo::Line);
    _parameterTypeDict.insert("QLinef", PythonQtMethodInfo::LineF);
    _parameterTypeDict.insert("QPoint", PythonQtMethodInfo::Point);
    _parameterTypeDict.insert("QPointf", PythonQtMethodInfo::PointF);
    _parameterTypeDict.insert("QRegExp", PythonQtMethodInfo::RegExp);
    _parameterTypeDict.insert("QColorGroup", PythonQtMethodInfo::ColorGroup);
    _parameterTypeDict.insert("QFont", PythonQtMethodInfo::Font);
    _parameterTypeDict.insert("QPixmap", PythonQtMethodInfo::Pixmap);
    _parameterTypeDict.insert("QBrush", PythonQtMethodInfo::Brush);
    _parameterTypeDict.insert("QColor", PythonQtMethodInfo::Color);
    _parameterTypeDict.insert("QPalette", PythonQtMethodInfo::Palette);
    _parameterTypeDict.insert("QIcon", PythonQtMethodInfo::Icon);
    _parameterTypeDict.insert("QImage", PythonQtMethodInfo::Polygon);
    _parameterTypeDict.insert("QRegion", PythonQtMethodInfo::Region);
    _parameterTypeDict.insert("QBitmap", PythonQtMethodInfo::Bitmap);
    _parameterTypeDict.insert("QSizePolicy", PythonQtMethodInfo::SizePolicy);
    _parameterTypeDict.insert("QKeySequence", PythonQtMethodInfo::KeySequence);
    _parameterTypeDict.insert("QPen", PythonQtMethodInfo::Pen);
    _parameterTypeDict.insert("QTextLength", PythonQtMethodInfo::TextLength);
    _parameterTypeDict.insert("QTextFormat", PythonQtMethodInfo::TextFormat);
    // own special types... (none so far, could be e.g. ObjectList
  }
  return _parameterTypeDict.value(name);
}
