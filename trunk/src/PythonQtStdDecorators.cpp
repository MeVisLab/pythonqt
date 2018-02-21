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
// \file    PythonQtStdDecorators.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2007-04
*/
//----------------------------------------------------------------------------------

#include "PythonQtStdDecorators.h"
#include "PythonQt.h"
#include "PythonQtClassInfo.h"
#include "PythonQtConversion.h"

#include <QCoreApplication>

bool PythonQtStdDecorators::connect(QObject* sender, const QByteArray& signal, PyObject* callable)
{
  if (signal.size() == 0) {
    std::cerr << "PythonQt: QObject::disconnect() signal is empty." << std::endl;
    return false;
  }
  bool result = false;
  QByteArray signalTmp = signal;
  char first = signalTmp.at(0);
  if (first<'0' || first>'9') {
    signalTmp = "2" + signalTmp;
  }

  if (sender) {
    result = PythonQt::self()->addSignalHandler(sender, signalTmp, callable);
    if (!result) {
      if (sender->metaObject()->indexOfSignal(QMetaObject::normalizedSignature(signalTmp.constData()+1)) == -1) {
        std::cerr << "PythonQt: QObject::connect() signal '" << signal.constData() << "' does not exist on " << sender->metaObject()->className() << std::endl;
      }
    }
  }
  return result;
}

bool PythonQtStdDecorators::connect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot, Qt::ConnectionType type)
{
  if (signal.size() == 0) {
    std::cerr << "PythonQt: QObject::connect() signal is empty." << std::endl;
    return false;
  }
  if (slot.size() == 0) {
    std::cerr << "PythonQt: QObject::connect() slot is empty." << std::endl;
    return false;
  }
  bool r = false;
  if (sender && receiver) {
    QByteArray signalTmp = signal;
    char first = signalTmp.at(0);
    if (first<'0' || first>'9') {
      signalTmp = "2" + signalTmp;
    }

    QByteArray slotTmp = slot;
    first = slotTmp.at(0);
    if (first<'0' || first>'9') {
      slotTmp = "1" + slotTmp;
    }
    r = QObject::connect(sender, signalTmp, receiver, slotTmp, type);
  }
  return r;
}

bool PythonQtStdDecorators::disconnect(QObject* sender, const QByteArray& signal, PyObject* callable)
{
  if (signal.size() == 0) {
    std::cerr << "PythonQt: QObject::disconnect() signal is empty." << std::endl;
    return false;
  }

  bool result = false;
  QByteArray signalTmp = signal;
  char first = signalTmp.at(0);
  if (first<'0' || first>'9') {
    signalTmp = "2" + signalTmp;
  }
  if (sender) {
    result = PythonQt::self()->removeSignalHandler(sender, signalTmp, callable);
    if (callable == NULL) {
      result |= QObject::disconnect(sender, signalTmp, NULL, NULL);
    }
    if (!result) {
      if (sender->metaObject()->indexOfSignal(QMetaObject::normalizedSignature(signalTmp.constData()+1)) == -1) {
        std::cerr << "PythonQt: QObject::disconnect() signal '" << signal.constData() << "' does not exist on " << sender->metaObject()->className() << std::endl;
      }
    }
  }
  return result;
}

bool PythonQtStdDecorators::disconnect(QObject* sender, const QByteArray& signal, QObject* receiver, const QByteArray& slot)
{
  bool r = false;
  if (signal.size() == 0) {
    std::cerr << "PythonQt: QObject::disconnect() signal is empty." << std::endl;
    return false;
  }
  if (slot.size() == 0) {
    std::cerr << "PythonQt: QObject::disconnect() slot is empty." << std::endl;
    return false;
  }
  if (sender && receiver) {
    QByteArray signalTmp = signal;
    char first = signalTmp.at(0);
    if (first<'0' || first>'9') {
      signalTmp = "2" + signalTmp;
    }

    QByteArray slotTmp = slot;
    first = slotTmp.at(0);
    if (first<'0' || first>'9') {
      slotTmp = "1" + slotTmp;
    }

    r = QObject::disconnect(sender, signalTmp, receiver, slotTmp);
  }
  return r;
}

QObject* PythonQtStdDecorators::parent(QObject* o) {
  return o->parent();
}

void PythonQtStdDecorators::setParent(QObject* o, PythonQtNewOwnerOfThis<QObject*> parent)
{
  o->setParent(parent);
}

const QObjectList* PythonQtStdDecorators::children(QObject* o)
{
  return &o->children();
}

bool PythonQtStdDecorators::setProperty(QObject* o, const char* name, const QVariant& value)
{
  return o->setProperty(name, value);
}

QVariant PythonQtStdDecorators::property(QObject* o, const char* name)
{
  return o->property(name);
}

QString PythonQtStdDecorators::tr(QObject* obj, const QString& text, const QString& ambig, int n)
{
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
  return QCoreApplication::translate(obj->metaObject()->className(), text.toUtf8().constData(), ambig.toUtf8().constData(), n);
#else
  return QCoreApplication::translate(obj->metaObject()->className(), text.toUtf8().constData(), ambig.toUtf8().constData(), QCoreApplication::CodecForTr, n);
#endif
}

void PythonQtStdDecorators::static_QTimer_singleShot(int msec, PyObject* callable)
{
  PythonQtSingleShotTimer* timer = new PythonQtSingleShotTimer(msec, callable);
  timer->start();
  // timer deletes itself after calling callable
}

QObject* PythonQtStdDecorators::findChild(QObject* parent, PyObject* type, const QString& name)
{
  const QMetaObject* meta = NULL;
  QByteArray typeName;

  if (PyObject_TypeCheck(type, &PythonQtClassWrapper_Type)) {
    meta = ((PythonQtClassWrapper*)type)->classInfo()->metaObject();
  } else if (PyObject_TypeCheck(type, &PythonQtInstanceWrapper_Type)) {
    meta = ((PythonQtInstanceWrapper*)type)->classInfo()->metaObject();
  } else if (PyBytes_Check(type) || PyUnicode_Check(type)) {
    typeName = PythonQtConv::PyObjGetString(type).toUtf8();
  }

  if (typeName.isEmpty() && !meta) {
    return NULL;
  }

  return findChild(parent, typeName, meta, name);
}

QList<QObject*> PythonQtStdDecorators::findChildren(QObject* parent, PyObject* type, const QString& name)
{
  const QMetaObject* meta = NULL;
  QByteArray typeName;

  if (PyObject_TypeCheck(type, &PythonQtClassWrapper_Type)) {
    meta = ((PythonQtClassWrapper*)type)->classInfo()->metaObject();
  } else if (PyObject_TypeCheck(type, &PythonQtInstanceWrapper_Type)) {
    meta = ((PythonQtInstanceWrapper*)type)->classInfo()->metaObject();
  }
  else if (PyBytes_Check(type) || PyUnicode_Check(type)) {
    typeName = PythonQtConv::PyObjGetString(type).toUtf8();
  }


  QList<QObject*> list;

  if (typeName.isEmpty() && !meta) {
    return list;
  }

  findChildren(parent, typeName, meta, name, list);

  return list;
}

QList<QObject*> PythonQtStdDecorators::findChildren(QObject* parent, PyObject* type, const QRegExp& regExp)
{
  const QMetaObject* meta = NULL;
  QByteArray typeName;

  if (PyObject_TypeCheck(type, &PythonQtClassWrapper_Type)) {
    meta = ((PythonQtClassWrapper*)type)->classInfo()->metaObject();
  } else if (PyObject_TypeCheck(type, &PythonQtInstanceWrapper_Type)) {
    meta = ((PythonQtInstanceWrapper*)type)->classInfo()->metaObject();
  }
  else if (PyBytes_Check(type) || PyUnicode_Check(type)) {
    typeName = PythonQtConv::PyObjGetString(type).toUtf8();
  }

  QList<QObject*> list;

  if (typeName.isEmpty() && !meta) {
    return list;
  }

  findChildren(parent, typeName, meta, regExp, list);

  return list;
}

QObject* PythonQtStdDecorators::findChild(QObject* parent, const char* typeName, const QMetaObject* meta, const QString& name)
{
  const QObjectList &children = parent->children();

  int i;
  for (i = 0; i < children.size(); ++i) {
    QObject* obj = children.at(i);

    if (!obj)
      return NULL;

    // Skip if the name doesn't match.
    if (!name.isNull() && obj->objectName() != name)
      continue;

    if ((typeName && obj->inherits(typeName)) ||
      (meta && meta->cast(obj)))
      return obj;
  }

  for (i = 0; i < children.size(); ++i) {
    QObject* obj = findChild(children.at(i), typeName, meta, name);

    if (obj != NULL)
      return obj;
  }

  return NULL;
}

int PythonQtStdDecorators::findChildren(QObject* parent, const char* typeName, const QMetaObject* meta, const QString& name, QList<QObject*>& list)
{
  const QObjectList& children = parent->children();
  int i;

  for (i = 0; i < children.size(); ++i) {
    QObject* obj = children.at(i);

    if (!obj)
      return -1;

    // Skip if the name doesn't match.
    if (!name.isNull() && obj->objectName() != name)
      continue;

    if ((typeName && obj->inherits(typeName)) ||
      (meta && meta->cast(obj))) {
        list += obj;
    }

    if (findChildren(obj, typeName, meta, name, list) < 0)
      return -1;
  }

  return 0;
}

int PythonQtStdDecorators::findChildren(QObject* parent, const char* typeName, const QMetaObject* meta, const QRegExp& regExp, QList<QObject*>& list)
{
  const QObjectList& children = parent->children();
  int i;

  for (i = 0; i < children.size(); ++i) {
    QObject* obj = children.at(i);

    if (!obj)
      return -1;

    // Skip if the name doesn't match.
    if (regExp.indexIn(obj->objectName()) == -1)
      continue;

    if ((typeName && obj->inherits(typeName)) ||
      (meta && meta->cast(obj))) {
        list += obj;
    }

    if (findChildren(obj, typeName, meta, regExp, list) < 0)
      return -1;
  }

  return 0;
}

const QMetaObject* PythonQtStdDecorators::metaObject( QObject* obj )
{
  return obj->metaObject();
}

bool PythonQtDebugAPI::isOwnedByPython( PyObject* object )
{
  if (PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)object;
    return wrapper->_ownedByPythonQt;
  }
  return true;
}

bool PythonQtDebugAPI::isDerivedShellInstance( PyObject* object )
{
  if (PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)object;
    return wrapper->_isShellInstance;
  }
  return false;
}

bool PythonQtDebugAPI::hasExtraShellRefCount( PyObject* object )
{
  if (PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)object;
    return wrapper->_shellInstanceRefCountsWrapper;
  }
  return false;
}

bool PythonQtDebugAPI::passOwnershipToCPP( PyObject* object )
{
  if (PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)object;
    wrapper->passOwnershipToCPP();
    return true;
  }
  return false;
}

bool PythonQtDebugAPI::passOwnershipToPython( PyObject* object )
{
  if (PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type)) {
    PythonQtInstanceWrapper* wrapper = (PythonQtInstanceWrapper*)object;
    wrapper->passOwnershipToPython();
    return true;
  }
  return false;
}

bool PythonQtDebugAPI::isPythonQtInstanceWrapper( PyObject* object )
{
  return PyObject_TypeCheck(object, &PythonQtInstanceWrapper_Type) != 0;
}

bool PythonQtDebugAPI::isPythonQtClassWrapper( PyObject* object )
{
  return PyObject_TypeCheck(object, &PythonQtClassWrapper_Type) != 0;
}

//---------------------------------------------------------------------------

PythonQtSingleShotTimer::PythonQtSingleShotTimer(int msec, const PythonQtObjectPtr& callable)
{
  _callable = callable;
  setSingleShot(true);
  setInterval(msec);
  connect(this, SIGNAL(timeout()), this, SLOT(slotTimeout()));
}

void PythonQtSingleShotTimer::slotTimeout()
{
  if (_callable) {
    _callable.call();
  }
  // delete ourself
  deleteLater();
}
