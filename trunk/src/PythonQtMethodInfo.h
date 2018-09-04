#ifndef _PYTHONQTMETHODINFO_H
#define _PYTHONQTMETHODINFO_H

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
// \file    PythonQtMethodInfo.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"
#include "PythonQtSystem.h"

#include <QByteArray>
#include <QHash>
#include <QList>
#include <QMetaMethod>

class PythonQtClassInfo;
struct _object;
typedef struct _object PyObject;

//! stores information about a specific signal/slot/method
class PYTHONQT_EXPORT PythonQtMethodInfo
{
public:
  enum ParameterType {
    Unknown = -1,
    Variant = -2
  };

  //! stores various informations about a parameter/type name
  struct ParameterInfo {
    QByteArray name;
    QByteArray innerName; // if the type is a template, this stores the inner name
    PyObject*  enumWrapper; // if it is an enum, a pointer to the enum wrapper
    int  typeId; // a mixture from QMetaType and ParameterType
    char pointerCount; // the number of pointer indirections
    char innerNamePointerCount; // the number of pointer indirections in the inner name 
    bool isConst;
    bool isReference;
    bool isQList;
    bool passOwnershipToCPP;
    bool passOwnershipToPython;
    bool newOwnerOfThis;
  };

  PythonQtMethodInfo() {
    _shouldAllowThreads = true;
  };
  ~PythonQtMethodInfo() {};
  PythonQtMethodInfo(const QMetaMethod& meta, PythonQtClassInfo* classInfo);
  PythonQtMethodInfo(const QByteArray& typeName, const QList<QByteArray>& args);
  PythonQtMethodInfo(const PythonQtMethodInfo& other) {
    _parameters = other._parameters;
    _shouldAllowThreads = other._shouldAllowThreads;
  }

  //! returns the method info of the signature, uses a cache internally to speed up
  //! multiple requests for the same method, classInfo is passed to allow local enum resolution (if NULL is passed, no local enums are recognized)
  static const PythonQtMethodInfo* getCachedMethodInfo(const QMetaMethod& method, PythonQtClassInfo* classInfo);

  //! get the cached method info using the passed in list of return value and arguments, return value needs to be passed as first arg
  static const PythonQtMethodInfo* getCachedMethodInfoFromArgumentList(int numArgs, const char** args);

  //! cleanup the cache
  static void cleanupCachedMethodInfos();

  //! returns the number of parameters including the return value
  int  parameterCount() const { return _parameters.size(); };

  //! returns the id for the given type (using an internal dictionary)
  static int nameToType(const char* name);

  //! get the parameter infos
  const QList<ParameterInfo>& parameters() const { return _parameters; }

  //! add an alias for a typename, e.g. QObjectList and QList<QObject*>.
  static void addParameterTypeAlias(const QByteArray& alias, const QByteArray& name);

  //! fill the parameter info for the given type name
  static void fillParameterInfo(ParameterInfo& type, const QByteArray& name, PythonQtClassInfo* classInfo = NULL);

  //! returns a parameter info for the given metatype (and creates and caches one if it is not yet present)
  static const ParameterInfo& getParameterInfoForMetaType(int type);

  //! returns the inner type id of a simple template of the form SomeObject<InnerType>
  static int getInnerTemplateMetaType(const QByteArray& typeName);

  //! returns the inner type name of a simple template of the form SomeObject<InnerType>
  static QByteArray getInnerTemplateTypeName(const QByteArray& typeName);

  //! returns the inner type name of a simple template or the typename without appended "List".
  static QByteArray getInnerListTypeName(const QByteArray& typeName);

  //! returns if the GIL should be released when calling this method.
  //! This is the default, but it will return false if any of the
  //! parameters is a PythonQtObjectPtr or PyObject*.
  bool shouldAllowThreads() const { return _shouldAllowThreads; }

protected:
  void setupAllowThreads();

  static QHash<QByteArray, int> _parameterTypeDict;
  static QHash<QByteArray, QByteArray> _parameterNameAliases;

  //! stores the cached signatures of methods to speedup mapping from Qt to Python types
  static QHash<QByteArray, PythonQtMethodInfo*> _cachedSignatures;

  static QHash<int, ParameterInfo> _cachedParameterInfos;

  QList<ParameterInfo> _parameters;
  bool _shouldAllowThreads;

};

//! stores information about a slot, including a next pointer to overloaded slots
class PYTHONQT_EXPORT PythonQtSlotInfo : public PythonQtMethodInfo
{
public:
  enum Type {
    MemberSlot, InstanceDecorator, ClassDecorator
  };

  PythonQtSlotInfo(const PythonQtSlotInfo& info):PythonQtMethodInfo() {
    _meta = info._meta;
    _parameters = info._parameters;
    _shouldAllowThreads = info._shouldAllowThreads;
    _slotIndex = info._slotIndex;
    _next = NULL;
    _decorator = info._decorator;
    _type = info._type;
    _upcastingOffset = 0;
  }

  PythonQtSlotInfo(PythonQtClassInfo* classInfo, const QMetaMethod& meta, int slotIndex, QObject* decorator = NULL, Type type = MemberSlot ):PythonQtMethodInfo()
  { 
    const PythonQtMethodInfo* info = getCachedMethodInfo(meta, classInfo);
    _meta = meta;
    _parameters = info->parameters();
    _shouldAllowThreads = info->shouldAllowThreads();
    _slotIndex = slotIndex;
    _next = NULL;
    _decorator = decorator;
    _type = type;
    _upcastingOffset = 0;
  }


public:
  //! get the parameter infos for the arguments, without return type and instance decorator.
  QList<ParameterInfo> arguments() const;

  void deleteOverloadsAndThis();

  const QMetaMethod* metaMethod() const { return &_meta; }

  void setUpcastingOffset(int upcastingOffset) { _upcastingOffset = upcastingOffset; }

  int upcastingOffset() const { return _upcastingOffset; }

  //! get the index of the slot (needed for qt_metacall)
  int slotIndex() const { return _slotIndex; }

  //! get next overloaded slot (which has the same name)
  PythonQtSlotInfo* nextInfo()  const { return _next; }

  //! set the next overloaded slot
  void setNextInfo(PythonQtSlotInfo* next) { _next = next; }

  //! returns if the slot is a decorator slot
  bool isInstanceDecorator() const { return _decorator!=NULL && _type == InstanceDecorator; }

  //! returns if the slot is a constructor slot
  bool isClassDecorator() const { return _decorator!=NULL && _type == ClassDecorator; }

  QObject* decorator() const { return _decorator; }

  //! get the full signature including return type
  QString fullSignature(bool skipReturnValue = false, int optionalArgsIndex = -1) const;

  //! get the Qt signature of the slot
  QByteArray signature() const;

  //! get the short slot name
  QByteArray slotName(bool removeDecorators = false) const;

  //! gets a list of all overload signatures. Signatures
  //! which only differ because of default values are joined using "[]" to
  //! indicate the optional arguments.
  QStringList overloads(bool skipReturnValue = false) const;

  //! Returns the class name that originally implements this method,
  //! regardless where the wrapper is located/implemented.
  QByteArray getImplementingClassName() const;

  //! Invoke the given slot on obj, save/restore thread state if needed.
  static void invokeQtMethod(QObject* obj, PythonQtSlotInfo* slot, void** argList);

  //! Sets if calling slots should release the GIL to allow other Python threads while being inside of C++
  static void setGlobalShouldAllowThreads(bool flag);

  //! Returns if calling slots should release the GIL to allow  Python threads while being inside of C++
  static bool getGlobalShouldAllowThreads();

private:
  int               _slotIndex;
  PythonQtSlotInfo* _next;
  QObject*          _decorator;
  Type              _type;
  QMetaMethod       _meta;
  int               _upcastingOffset;

  static bool _globalShouldAllowThreads;
};


#endif
