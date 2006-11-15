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
// \file    PythonQt.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"
#include <QMetaMethod>

QHash<QByteArray, PythonQtMethodInfo::ParameterType> PythonQtMethodInfo::_parameterTypeDict;

PythonQtClassInfo::PythonQtClassInfo(const QMetaObject* meta, const QByteArray& wrappedClassName) {
  _meta = meta;
  _wrappedClassName = wrappedClassName;
  _initialized = false;
}

PythonQtSlotInfo* PythonQtClassInfo::slot(const char* slotName)
{
  if (!_initialized) {
    initCache();
  }
  return _slots.value(slotName);
}

const char* PythonQtClassInfo::className()
{
  return _meta->className();
}

bool PythonQtClassInfo::inherits(const char* name)
{
  const QMetaObject* m = _meta;
  while (m) {
    if (strcmp(name, m->className())==0) {
      return true;
    }
    m = m->superClass();
  }
  return false;
}

const QByteArray& PythonQtClassInfo::wrappedCPPClassName()
{
  return _wrappedClassName;
}

QString PythonQtClassInfo::help()
{
  QString h;
  h += QString("--- ") + QString(className()) + QString(" ---\n");

  h += "Properties:\n";

  int i;
  int numProperties = _meta->propertyCount();
  for (i = 0; i < numProperties; i++) {
    QMetaProperty p = _meta->property(i);
    h += QString(p.name()) + " (" + QString(p.typeName()) + " )\n";
  }

  h += "Slots:\n";

  int numMethods = _meta->methodCount();
  for (i = 0; i < numMethods; i++) {
    QMetaMethod m = _meta->method(i);
    if (m.methodType() == QMetaMethod::Method ||
      m.methodType() == QMetaMethod::Slot) {
      h += QString(m.typeName()) + " " + QString(m.signature()) + "\n";
    }
  }

  return h;
}

void PythonQtClassInfo::initCache()
{
  _initialized = true;
  int numMethods = _meta->methodCount();
  for (int i = 0; i < numMethods; i++) {
    QMetaMethod m = _meta->method(i);
    if (m.methodType() == QMetaMethod::Method ||
      m.methodType() == QMetaMethod::Slot) {

      QByteArray first = m.signature();
      first = first.left(first.indexOf('('));

      PythonQtSlotInfo* info = new PythonQtSlotInfo(m, i);
      PythonQtSlotInfo* prev = _slots.value(first);
      if (prev) {
        info->setNextInfo(prev);
      }
      _slots.insert(first, info);

    }
  }
}

