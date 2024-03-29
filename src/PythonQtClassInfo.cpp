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
// \file    PythonQt.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"
#include "PythonQt.h"
#include "PythonQtConversion.h"
#include <QMetaMethod>
#include <QMetaObject>
#include <QMetaEnum>

QHash<QByteArray, int> PythonQtMethodInfo::_parameterTypeDict;

// List of registered global namespace wrappers that might contain a top-level enum definition
QList<PythonQtClassInfo*> PythonQtClassInfo::_globalNamespaceWrappers;

// List of words that are reserved in Python, but not in C++, so they need escaping
QSet<QByteArray> PythonQtClassInfo::_reservedNames{
  "None", "True", "False"
};

PythonQtClassInfo::PythonQtClassInfo() {
  _meta = nullptr;
  _constructors = nullptr;
  _destructor = nullptr;
  _decoratorProvider = nullptr;
  _decoratorProviderCB = nullptr;
  _pythonQtClassWrapper = nullptr;
  _shellSetInstanceWrapperCB = nullptr;
  _metaTypeId = -1;
  _typeSlots = 0;
  _isQObject = false;
  _enumsCreated = false;
  _richCompareDetectionDone = false;
  _searchPolymorphicHandlerOnParent = true;
  _searchRefCountCB = true;
  _refCallback = nullptr;
  _unrefCallback = nullptr;
}

PythonQtClassInfo::~PythonQtClassInfo()
{
  clearCachedMembers();
  
  if (_constructors) {
    _constructors->deleteOverloadsAndThis();
  }
  if (_destructor) {
    _destructor->deleteOverloadsAndThis();
  }
  Q_FOREACH(PythonQtSlotInfo* info, _decoratorSlots) {
    info->deleteOverloadsAndThis();
  }
}

void PythonQtClassInfo::setupQObject(const QMetaObject* meta)
{
  // _wrappedClassName is already set earlier in the class setup
  _isQObject = true;
  _meta = meta;
}

void PythonQtClassInfo::setupCPPObject(const QByteArray& classname)
{
  _isQObject = false;
  _wrappedClassName = classname;
  _metaTypeId = QMetaType::type(classname);
  if (_metaTypeId == 0) {
    _metaTypeId = -1;
  }
}

void PythonQtClassInfo::clearCachedMembers()
{
  QHashIterator<QByteArray, PythonQtMemberInfo> i(_cachedMembers);
  while (i.hasNext()) {
    PythonQtMemberInfo member = i.next().value();
    if (member._type== PythonQtMemberInfo::Slot || member._type== PythonQtMemberInfo::Signal) {
      PythonQtSlotInfo* info = member._slot;
      while (info) {
        PythonQtSlotInfo* next = info->nextInfo();
        delete info;
        info = next;
      }
    }
  }
}

int PythonQtClassInfo::findCharOffset(const char* sigStart, char someChar)
{
  const char* sigEnd = sigStart;
  char c;
  do {
    c = *sigEnd++;
  } while (c!=someChar && c!=0);
  return sigEnd-sigStart-1;
}
          
bool PythonQtClassInfo::lookForPropertyAndCache(const char* memberName)
{
  if (!_meta) return false;
  
  bool found = false;
  const char* attributeName = memberName;
  // look for properties
  int i = _meta->indexOfProperty(attributeName);
#ifdef PYTHONQT_SUPPORT_NAME_PROPERTY
  bool nameMapped = false;
  if (i==-1) {
    // try to map name to objectName
    if (qstrcmp(attributeName, "name")==0) {
      attributeName = "objectName";
      nameMapped = true;
      i = _meta->indexOfProperty(attributeName);
    }
  }
#endif
  if (qstrcmp(attributeName, "singleShot") == 0 &&
      className() == "QTimer") {
    // ignore singleShot property, users need to use setSingleShot and isSingleShot instead...
    i = -1;
  }

  if (i!=-1) {
    PythonQtMemberInfo newInfo(_meta->property(i));
    _cachedMembers.insert(attributeName, newInfo);
#ifdef PYTHONQT_SUPPORT_NAME_PROPERTY
    if (nameMapped) {
      _cachedMembers.insert(memberName, newInfo);
    }
#endif
  #ifdef PYTHONQT_DEBUG
    std::cout << "caching property " << memberName << " on " << _meta->className() << std::endl;
  #endif
    found = true;
  }
  return found;
}

PythonQtSlotInfo* PythonQtClassInfo::recursiveFindDecoratorSlotsFromDecoratorProvider(const char* memberName, PythonQtSlotInfo* inputInfo, bool &found, QHash<QByteArray, PythonQtMemberInfo>& memberCache, int upcastingOffset)
{
  inputInfo = findDecoratorSlotsFromDecoratorProvider(memberName, inputInfo, found, memberCache, upcastingOffset);
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    inputInfo = info._parent->recursiveFindDecoratorSlotsFromDecoratorProvider(memberName, inputInfo, found, memberCache, upcastingOffset+info._upcastingOffset);
  }
  return inputInfo;
}

PythonQtSlotInfo* PythonQtClassInfo::findDecoratorSlotsFromDecoratorProvider(const char* memberName, PythonQtSlotInfo* tail, bool &found, QHash<QByteArray, PythonQtMemberInfo>& memberCache, int upcastingOffset) {
  QObject* decoratorProvider = decorator();
  if (decoratorProvider) {
    //qDebug()<< "looking " << decoratorProvider->metaObject()->className() << " " << memberName << " " << upcastingOffset;
    const QMetaObject* meta = decoratorProvider->metaObject();
    int numMethods = meta->methodCount();
    int startFrom = QObject::staticMetaObject.methodCount();
    for (int i = startFrom; i < numMethods; i++) {
      QMetaMethod m = meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
           m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        
        QByteArray signature = PythonQtUtils::methodName(m);
        bool isClassDeco = false;
        if (signature.startsWith("static_")) {
          // skip the static_classname_ part of the string
          signature = signature.mid(7 + 1 + static_cast<int>(strlen(className())));
          isClassDeco = true;
        } else if (signature.startsWith("new_")) {
          isClassDeco = true;
        } else if (signature.startsWith("delete_")) {
          isClassDeco = true;
        }
        // XXX no checking is currently done if the slots have correct first argument or not...
        
        // check if same length and same name
        if (signature == memberName) {
          found = true;
          PythonQtSlotInfo* info = new PythonQtSlotInfo(this, m, i, decoratorProvider, isClassDeco?PythonQtSlotInfo::ClassDecorator:PythonQtSlotInfo::InstanceDecorator);
          info->setUpcastingOffset(upcastingOffset);
          //qDebug()<< "adding " << decoratorProvider->metaObject()->className() << " " << memberName << " " << upcastingOffset;
          if (tail) {
            tail->setNextInfo(info);
          } else {
            PythonQtMemberInfo newInfo(info);
            memberCache.insert(signature, newInfo);
          }
          tail = info;
        }
      }
    }
  }

  tail = findDecoratorSlots(memberName, tail, found, memberCache, upcastingOffset);

  // now look for slots/signals/methods on this level of the meta object
  if (_meta) {
    int numMethods = _meta->methodCount();
    // start from methodOffset, to only add slots which are located in this class,
    // and not in the parent class, which is traversed recursively later on.
    // (if the class in not a QObject, we are working with a script wrapper QObject
    //  and need to read all slots/signals starting from 0).
    int methodOffset = _isQObject?_meta->methodOffset():0;
    for (int i = methodOffset; i < numMethods; i++) {
      QMetaMethod m = _meta->method(i);
      if (((m.methodType() == QMetaMethod::Method ||
        m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public)
        || m.methodType()==QMetaMethod::Signal) {

          QByteArray signature = PythonQtUtils::methodName(m);

          // check if same length and same name
          if (signature == memberName) {
            found = true;
            PythonQtSlotInfo* info = new PythonQtSlotInfo(this, m, i);
            if (tail) {
              tail->setNextInfo(info);
            } else {
              PythonQtMemberInfo newInfo(info);
              memberCache.insert(signature, newInfo);
            }
            tail = info;
          }
      }
    }
  }
  return tail;
}

bool PythonQtClassInfo::lookForMethodAndCache(const char* memberName)
{
  bool found = false;
  PythonQtSlotInfo* tail = nullptr;
  
  // look for dynamic decorators in this class and in derived classes
  // (do this first to allow overloading of existing slots with generated wrappers,
  //  e.g. QDialog::accept is overloaded with PythonQtWrapper_QDialog::accept decorator)
  tail = recursiveFindDecoratorSlotsFromDecoratorProvider(memberName, tail, found, _cachedMembers, 0);
  
  return found;
}

bool PythonQtClassInfo::lookForEnumAndCache(const QMetaObject* meta, const char* memberName)
{
  bool found = false;
  // look for enum values
  int enumCount = meta->enumeratorCount();
  for (int i=0;i<enumCount; i++) {
    QMetaEnum e = meta->enumerator(i);
    // we do not want flags, they will cause our values to appear two times
    if (e.isFlag()) continue;
    
    for (int j=0; j < e.keyCount(); j++) {
      if (escapeReservedNames(e.key(j)) == memberName) {
        PyObject* enumType = findEnumWrapper(e.name());
        if (enumType) {
          PythonQtObjectPtr enumValuePtr;
          enumValuePtr.setNewRef(PythonQtPrivate::createEnumValueInstance(enumType, e.value(j)));
          PythonQtMemberInfo newInfo(enumValuePtr);
          _cachedMembers.insert(memberName, newInfo);
  #ifdef PYTHONQT_DEBUG
          std::cout << "caching enum " << memberName << " on " << meta->className() << std::endl;
  #endif
          found = true;
          break;
        } else {
          std::cerr << "enum " << e.name() << " not found on " << className().constData() << std::endl;
        }
      }
    }
  }
  return found;
}

PythonQtMemberInfo PythonQtClassInfo::member(const char* memberName)
{
  PythonQtMemberInfo info = _cachedMembers.value(memberName);
  if (info._type != PythonQtMemberInfo::Invalid) {
    return info;
  } else {
    bool found = false;
  
    found = lookForPropertyAndCache(memberName);
    if (!found) {
      found = lookForMethodAndCache(memberName);
    }
    if (!found) {
      if (_meta) {
        // check enums in our meta object directly
        found = lookForEnumAndCache(_meta, memberName);
      }
      if (!found) {
        // check enums in the class hierachy of CPP classes
        // look for dynamic decorators in this class and in derived classes
        QList<QObject*> decoObjects;
        recursiveCollectDecoratorObjects(decoObjects);
        Q_FOREACH(QObject* deco, decoObjects) {
          // call on ourself for caching, but with different metaObject():
          found = lookForEnumAndCache(deco->metaObject(), memberName);
          if (found) {
            break;
          }
        }
      }
    }
    if (!found) {
      // maybe it is an enum wrapper?
      PyObject* p = findEnumWrapper(memberName);
      if (p) {
        info._type = PythonQtMemberInfo::EnumWrapper;
        info._pythonType = p;
        _cachedMembers.insert(memberName, info);
        found = true;
      }
      // maybe it is a nested class?
      Q_FOREACH(PythonQtClassInfo* nestedClass, _nestedClasses) {
        PyObject* pyClass = nestedClass->pythonQtClassWrapper();
        if (pyClass) {
          if (strcmp(memberName, nestedClass->unscopedClassName().constData()) == 0) {
            info._type = PythonQtMemberInfo::NestedClass;
            info._pythonType = pyClass;
            _cachedMembers.insert(memberName, info);
            found = true;
            break;
          }
        }
      }
    }
    if (!found) {
      // since python keywords can not be looked up, we check if the name contains a single trailing _
      // and remove that and look again, so that we e.g. find exec on an exec_ lookup
      QByteArray mbrName(memberName);
      if ((mbrName.length()>2) && 
          (mbrName.at(mbrName.length()-1) == '_') &&
          (mbrName.at(mbrName.length()-2) != '_')) {
        mbrName = mbrName.mid(0,mbrName.length()-1);
        found = lookForMethodAndCache(mbrName.constData());
        if (found) {
          return _cachedMembers.value(mbrName);
        }
      }
    }
    if (!found) {
      // we store a NotFound member, so that we get a quick result for non existing members (e.g. operator_equal lookup)
      info._type = PythonQtMemberInfo::NotFound;
      _cachedMembers.insert(memberName, info);
    }
  }

  return _cachedMembers.value(memberName);
}

void PythonQtClassInfo::recursiveCollectDecoratorObjects(QList<QObject*>& decoratorObjects) {
  QObject* deco = decorator();
  if (deco) {
    decoratorObjects.append(deco);
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    info._parent->recursiveCollectDecoratorObjects(decoratorObjects);
  }
}

void PythonQtClassInfo::recursiveCollectClassInfos(QList<PythonQtClassInfo*>& classInfoObjects) {
  classInfoObjects.append(this);
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    info._parent->recursiveCollectClassInfos(classInfoObjects);
  }
}

PythonQtSlotInfo* PythonQtClassInfo::findDecoratorSlots(const char* memberName, PythonQtSlotInfo* tail, bool &found, QHash<QByteArray, PythonQtMemberInfo>& memberCache, int upcastingOffset)
{
  QListIterator<PythonQtSlotInfo*> it(_decoratorSlots);
  while (it.hasNext()) {

    PythonQtSlotInfo* infoOrig = it.next();
    QByteArray signature = PythonQtUtils::methodName(*infoOrig->metaMethod());
    if (signature.startsWith("static_")) {
      int offset = signature.indexOf('_', 7);
      signature = signature.mid(offset+1);
    }
    if (signature == memberName) {
      //make a copy, otherwise we will have trouble on overloads!
      PythonQtSlotInfo* info = new PythonQtSlotInfo(*infoOrig);
      info->setUpcastingOffset(upcastingOffset);
      found = true;
      if (tail) {
        tail->setNextInfo(info);
      } else {
        PythonQtMemberInfo newInfo(info);
        memberCache.insert(signature, newInfo);
      }
      tail = info;
    }
  }
  return tail;
}

void PythonQtClassInfo::listDecoratorSlotsFromDecoratorProvider(QStringList& list, bool metaOnly) {
  QObject* decoratorProvider = decorator();
  if (decoratorProvider) {
    const QMetaObject* meta = decoratorProvider->metaObject();
    int numMethods = meta->methodCount();
    int startFrom = QObject::staticMetaObject.methodCount();
    for (int i = startFrom; i < numMethods; i++) {
      QMetaMethod m = meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
           m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        
        QByteArray signature = PythonQtUtils::methodName(m);
        bool isClassDeco = false;
        if (signature.startsWith("static_")) {
          // skip the static_classname_ part of the string
          signature = signature.mid(7 + 1 + static_cast<int>(strlen(className())));
          isClassDeco = true;
        } else if (signature.startsWith("new_")) {
          continue;
        } else if (signature.startsWith("delete_")) {
          continue;
        }
        // XXX no checking is currently done if the slots have correct first argument or not...
        if (!metaOnly || isClassDeco) {
          list << QString::fromLatin1(signature.constData()); 
        }
      }
    }
  }

  // look for global decorator slots
  QListIterator<PythonQtSlotInfo*> it(_decoratorSlots);
  while (it.hasNext()) {
    PythonQtSlotInfo* slot = it.next();
    QByteArray name = slot->slotName();
    if (name.startsWith("static_")) {
      int idx = name.indexOf('_');
      idx = name.indexOf('_', idx+1);
      name = name.mid(idx+1);
    } else if (name.startsWith("new_")) {
      continue;
    } else if (name.startsWith("delete_")) {
      continue;
    }
    if (!metaOnly || slot->isClassDecorator()) {
      list << name;
    }
  }
}

QStringList PythonQtClassInfo::propertyList()
{
  QStringList l;
  if (_isQObject && _meta) {
    int i;
    int numProperties = _meta->propertyCount();
    for (i = 0; i < numProperties; i++) {
      QMetaProperty p = _meta->property(i);
      l << QString(p.name());
    }
  }
  QStringList members = memberList();
  foreach(QString member, members) {
    if (member.startsWith("py_get_")) {
      l << member.mid(7);
    }
  }
  return l;
}

QStringList PythonQtClassInfo::memberList()
{
  decorator();

  QStringList l;
  // normal slots of QObject (or wrapper QObject)
  if (_meta) {
    int numMethods = _meta->methodCount();
    bool skipQObj = !_isQObject;
    for (int i = skipQObj?QObject::staticMetaObject.methodCount():0; i < numMethods; i++) {
      QMetaMethod m = _meta->method(i);
      if (((m.methodType() == QMetaMethod::Method ||
        m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public)
          || m.methodType()==QMetaMethod::Signal) {
        l << PythonQtUtils::methodName(m);
      }
    }
  }

  {
    // look for dynamic decorators in this class and in derived classes
    QList<PythonQtClassInfo*> infos;
    recursiveCollectClassInfos(infos);
    Q_FOREACH(PythonQtClassInfo* info, infos) {
      info->listDecoratorSlotsFromDecoratorProvider(l, false);
    }
  }
  
  // List enumerator keys...
  QList<const QMetaObject*> enumMetaObjects;
  if (_meta) {
    enumMetaObjects << _meta;
  }
  // check enums in the class hierachy of CPP classes
  QList<QObject*> decoObjects;
  recursiveCollectDecoratorObjects(decoObjects);
  Q_FOREACH(QObject* deco, decoObjects) {
    enumMetaObjects << deco->metaObject();
  }
  
  Q_FOREACH(const QMetaObject* meta, enumMetaObjects) {
    for (int i = 0; i<meta->enumeratorCount(); i++) {
      QMetaEnum e = meta->enumerator(i);
      l << e.name();
      // we do not want flags, they will cause our values to appear two times
      if (e.isFlag()) continue;

      for (int j=0; j < e.keyCount(); j++) {
        l << QString(e.key(j));
      }
    }
  }

  Q_FOREACH(PythonQtClassInfo* nestedClass, _nestedClasses) {
    PyObject* pyClass = nestedClass->pythonQtClassWrapper();
    if (pyClass) {
      QByteArray name = nestedClass->unscopedClassName();
      l << QString(name);
    }
  }

#if QT_VERSION >= 0x060000
  QSet<QString> set(l.begin(), l.end());
  return set.values();
#else
  return QSet<QString>::fromList(l).toList();
#endif
}

const QByteArray& PythonQtClassInfo::className() const
{
  return _wrappedClassName;
}

void* PythonQtClassInfo::castTo(void* ptr, const char* classname)
{
  if (ptr==nullptr) {
    return nullptr;
  }
  if (_wrappedClassName == classname) {
    return ptr;
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    void* result = info._parent->castTo((char*)ptr + info._upcastingOffset, classname);
    if (result) {
      return result;
    }
  }
  return nullptr;
}

bool PythonQtClassInfo::inherits(const char* name)
{
  if (_wrappedClassName == name) {
    return true;
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    if (info._parent->inherits(name)) {
      return true;
    }
  }
  return false;
}

bool PythonQtClassInfo::inherits(PythonQtClassInfo* classInfo)
{
  if (classInfo == this) {
    return true;
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    if (info._parent->inherits(classInfo)) {
      return true;
    }
  }
  return false;
}

QString PythonQtClassInfo::help()
{
  decorator();
  QString h;
  h += QString("--- ") + QString(className()) + QString(" ---\n");
  
  if (_isQObject) {
    h += "Properties:\n";
  
    int i;
    int numProperties = _meta->propertyCount();
    for (i = 0; i < numProperties; i++) {
      QMetaProperty p = _meta->property(i);
      h += QString(p.name()) + " (" + QString(p.typeName()) + " )\n";
    }
  }
  
  if (constructors()) {
    h += "Constructors:\n";
    PythonQtSlotInfo* constr = constructors();
    while (constr) {
      h += constr->fullSignature() + "\n";
      constr = constr->nextInfo();
    }
  }

  h += "Slots:\n";
  h += "QString help()\n";
  h += "QString className()\n";

  if (_meta) {
    int numMethods = _meta->methodCount();
    for (int i = 0; i < numMethods; i++) {
      QMetaMethod m = _meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
        m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        PythonQtSlotInfo slot(this, m, i);
        h += slot.fullSignature()+ "\n";
      }
    }
  }
  
  // TODO xxx : decorators and enums from decorator() are missing...
  // maybe we can reuse memberlist()?
  
  if (_meta && _meta->enumeratorCount()) {
    h += "Enums:\n";
    for (int i = 0; i<_meta->enumeratorCount(); i++) {
      QMetaEnum e = _meta->enumerator(i);
      h += QString(e.name()) + " {";
      for (int j=0; j < e.keyCount(); j++) {
        if (j) { h+= ", "; }
        h += e.key(j);
      }
      h += " }\n";
    }
  }

  if (_isQObject && _meta) {
    int numMethods = _meta->methodCount();
    if (numMethods>0) {
      h += "Signals:\n";
      for (int i = 0; i < numMethods; i++) {
        QMetaMethod m = _meta->method(i);
        if (m.methodType() == QMetaMethod::Signal) {
          h += QString(PythonQtUtils::signature(m)) + "\n";
        }
      }
    }
  }
  return h;
}

PythonQtSlotInfo* PythonQtClassInfo::constructors()
{
  if (!_constructors) {
    // force creation of lazy decorator, which will register the decorators
    decorator();
  }
  return _constructors;
}

PythonQtSlotInfo* PythonQtClassInfo::destructor()
{
  if (!_destructor) {
    // force creation of lazy decorator, which will register the decorators
    decorator();
  }
  if (!_destructor) {
    if (!_parentClasses.isEmpty()) {
      _destructor = _parentClasses.at(0)._parent->destructor();
    }
  }
  return _destructor;
}

void PythonQtClassInfo::addConstructor(PythonQtSlotInfo* info)
{
  PythonQtSlotInfo* prev = constructors();
  if (prev) {
    info->setNextInfo(prev->nextInfo());
    prev->setNextInfo(info);
  } else {
    _constructors = info;
  }
}

void PythonQtClassInfo::addDecoratorSlot(PythonQtSlotInfo* info)
{
  _decoratorSlots.append(info);
}

void PythonQtClassInfo::setDestructor(PythonQtSlotInfo* info)
{
  if (_destructor) {
    _destructor->deleteOverloadsAndThis();
  }
  _destructor = info;
}

void PythonQtClassInfo::setMetaObject(const QMetaObject* meta)
{
  _meta = meta;
  clearCachedMembers();
}

QObject* PythonQtClassInfo::decorator()
{
  if (!_decoratorProvider && _decoratorProviderCB) {
    _decoratorProvider = (*_decoratorProviderCB)();
    if (_decoratorProvider) {
      _decoratorProvider->setParent(PythonQt::priv());
      // setup enums early, since they might be needed by the constructor decorators:
      if (!_enumsCreated) {
        createEnumWrappers(_decoratorProvider);
      }
      PythonQt::priv()->addDecorators(_decoratorProvider, PythonQtPrivate::ConstructorDecorator | PythonQtPrivate::DestructorDecorator);
    }
  }
  // check if enums need to be created and create them if they are not yet created
  if (!_enumsCreated) {
    createEnumWrappers(_decoratorProvider);
  }
  return _decoratorProvider;
}

void* PythonQtClassInfo::recursiveCastDownIfPossible(void* ptr, const char** resultClassName)
{
  if (!_polymorphicHandlers.isEmpty()) {
    Q_FOREACH(PythonQtPolymorphicHandlerCB* cb, _polymorphicHandlers) {
      void* resultPtr = (*cb)(ptr, resultClassName);
      if (resultPtr) {
        return resultPtr;
      }
    }
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    if (!info._parent->isQObject()) {
      void* resultPtr = info._parent->recursiveCastDownIfPossible((char*)ptr + info._upcastingOffset, resultClassName);
      if (resultPtr) {
        return resultPtr;
      }
    }
  }
  return nullptr;
}

void* PythonQtClassInfo::castDownIfPossible(void* ptr, PythonQtClassInfo** resultClassInfo)
{
  const char* className;
  // this would do downcasting recursively...
  // It is too expensive, since it walks the whole hierarchy on each cast...
  // void* resultPtr = recursiveCastDownIfPossible(ptr, &className);

  if (_polymorphicHandlers.isEmpty() && _searchPolymorphicHandlerOnParent) {
    // if we don't have a polymorphic handler, seach
    // in the first parent class hierarchy, not for multiple inheritance...
    // (for speed reasons and because of casting offsets...)
    // Only do this once...
    _searchPolymorphicHandlerOnParent = false;
    if (_parentClasses.count()>0) {
      PythonQtClassInfo* parent = _parentClasses[0]._parent;
      while (parent) {
        if (parent->_polymorphicHandlers.count()>0) {
          // copy handlers from parent class, to speedup next lookup
          _polymorphicHandlers = parent->_polymorphicHandlers;
          break;
        }
        if (parent->_parentClasses.count()>0) {
          parent = parent->_parentClasses[0]._parent;
        } else {
          parent = nullptr;
        }
      }
    }
  }

  // we only do downcasting on the base object, not on the whole inheritance tree...
  void* resultPtr = nullptr;
  if (!_polymorphicHandlers.isEmpty()) {
    Q_FOREACH(PythonQtPolymorphicHandlerCB* cb, _polymorphicHandlers) {
      resultPtr = (*cb)(ptr, &className);
      if (resultPtr) {
        break;
      }
    }
  }
  if (resultPtr) {
    *resultClassInfo = PythonQt::priv()->getClassInfo(className);
  } else {
    *resultClassInfo = this;
    resultPtr = ptr;
  }
  return resultPtr;
}

PyObject* PythonQtClassInfo::findEnumWrapper(const QByteArray& name, PythonQtClassInfo* localScope, bool* isLocalEnum)
{
  if (isLocalEnum) {
    *isLocalEnum = true;
  }
  int scopePos = name.lastIndexOf("::");
  if (scopePos != -1) {
    if (isLocalEnum) {
      *isLocalEnum = false;
    }
    // split into scope and enum name
    QByteArray enumScope = name.mid(0,scopePos);
    QByteArray enumName = name.mid(scopePos+2);
    PythonQtClassInfo* info = PythonQt::priv()->getClassInfo(enumScope);
    if (info) {
      return info->findEnumWrapper(enumName);
    } else{
      return nullptr;
    }
  }
  PyObject* enumWrapper = nullptr;
  if (localScope) {
    enumWrapper = localScope->findEnumWrapper(name);
  } 
  if (!enumWrapper) {
    // it might be a top-level enum - search in all currently registered global namespace wrappers
    for (PythonQtClassInfo* globalWrapper : _globalNamespaceWrappers) {
      enumWrapper = globalWrapper->findEnumWrapper(name);
      if (enumWrapper) {
        break;
      }
    }
  }
  return enumWrapper;
}

void PythonQtClassInfo::createEnumWrappers(const QMetaObject* meta)
{
  for (int i = meta->enumeratorOffset();i<meta->enumeratorCount();i++) {
    QMetaEnum e = meta->enumerator(i);
    PythonQtObjectPtr p;
    p.setNewRef(PythonQtPrivate::createNewPythonQtEnumWrapper(e.name(), _pythonQtClassWrapper));
    // add enum values to the enum type itself, in case enum value names are so generic
    // that they are not unique
    for (int j = 0; j < e.keyCount(); j++) {
      PythonQtObjectPtr enumValuePtr;
      enumValuePtr.setNewRef(PythonQtPrivate::createEnumValueInstance(p.object(), e.value(j)));
      p.addVariable(escapeReservedNames(e.key(j)), enumValuePtr.toLocalVariant());
    }
    _enumWrappers.append(p);
  }
}

void PythonQtClassInfo::createEnumWrappers(const QObject* decoratorProvider)
{
  if (!_enumsCreated) {
    _enumsCreated = true;
    if (_meta) {
      createEnumWrappers(_meta);
    }
    if (decoratorProvider) {
      createEnumWrappers(decoratorProvider->metaObject());
    }
    Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
      // trigger decorator() instead of createEnumWrappers(),
      // which will then call createEnumWrappers().
      info._parent->decorator();
    }
  }
}

PyObject* PythonQtClassInfo::findEnumWrapper(const char* name) {
  // force enum creation
  if (!_enumsCreated) {
    // trigger decorator() instead of createEnumWrappers(),
    // which will then call createEnumWrappers().
    decorator();
  }
  Q_FOREACH(const PythonQtObjectPtr& p, _enumWrappers) {
    const char* className = ((PyTypeObject*)p.object())->tp_name;
    if (qstrcmp(className, name)==0) {
      return p.object();
    }
  }
  Q_FOREACH(const ParentClassInfo& info, _parentClasses) {
    PyObject* p = info._parent->findEnumWrapper(name);
    if (p) return p;
  }
  return nullptr;
}

void PythonQtClassInfo::setDecoratorProvider( PythonQtQObjectCreatorFunctionCB* cb )
{
  _decoratorProviderCB = cb;
  _decoratorProvider = nullptr;
  _enumsCreated = false;
}

void PythonQtClassInfo::clearNotFoundCachedMembers()
{
  // remove all not found entries, since a new decorator means new slots,
  // which might have been cached as "NotFound" already.
  QMutableHashIterator<QByteArray, PythonQtMemberInfo> it(_cachedMembers);
  while (it.hasNext()) {
    it.next();
    if (it.value()._type == PythonQtMemberInfo::NotFound) {
      it.remove();
    }
  }
}

void PythonQtClassInfo::addNestedClass(PythonQtClassInfo* info)
{
  _nestedClasses.append(info);
}

QByteArray PythonQtClassInfo::unscopedClassName() const
{
  int index = _wrappedClassName.indexOf("::");
  if (index > 0) {
    return _wrappedClassName.mid(index + 2);
  } else {
    return _wrappedClassName;
  }
}

PyObject* PythonQtClassInfo::copyObject( void* cppObject )
{
  PythonQtClassInfo* info;
  cppObject = castDownIfPossible(cppObject, &info);
  if (info->metaTypeId() != PythonQtMethodInfo::Unknown) {
    // use meta type to copy the object
    return PythonQtConv::createCopyFromMetaType(info->metaTypeId(), cppObject);
  } else {
    // use copy constructor
    PythonQtSlotInfo* slot = info->getCopyConstructor();
    if (slot) {
      void* result;
      void* args[2];
      args[0] = &result;
      args[1] = cppObject;
      {
        PythonQtSlotInfo::invokeQtMethod(slot->decorator(), slot, args);
      }
      if (result) {
        PythonQtInstanceWrapper* wrapper =  (PythonQtInstanceWrapper*)PythonQt::priv()->wrapPtr(result, info->className());
        if (wrapper) {
          wrapper->_ownedByPythonQt = true;
        }
        return (PyObject*)wrapper;
      }
    } else {
      std::cerr << "PythonQt: Can't create a copy of '" << info->_wrappedClassName.constData() << "', either use qRegisterMetaType() or add a copy constructor to the decorator/wrapper." << std::endl;
    }
  }
  return nullptr;
}

PythonQtSlotInfo* PythonQtClassInfo::getCopyConstructor()
{
  PythonQtSlotInfo* construc = constructors();
  while (construc) {
    if ((construc->parameterCount() == 2) &&
        (construc->parameters().at(1).name == _wrappedClassName) &&  
        (construc->parameters().at(1).pointerCount == 0)) {
      return construc;
    }
    construc = construc->nextInfo();
  }
  return nullptr;
}

void PythonQtClassInfo::setReferenceCounting( PythonQtVoidPtrCB* refCB, PythonQtVoidPtrCB* unrefCB )
{
  _refCallback = refCB;
  _unrefCallback = unrefCB;
}

PythonQtVoidPtrCB* PythonQtClassInfo::referenceCountingRefCB()
{
  if (_searchRefCountCB) {
    updateRefCountingCBs();
  }
  return _refCallback;
}

PythonQtVoidPtrCB* PythonQtClassInfo::referenceCountingUnrefCB()
{
  if (_searchRefCountCB) {
    updateRefCountingCBs();
  }
  return _unrefCallback;
}

QByteArray PythonQtClassInfo::escapeReservedNames(const QByteArray& name)
{
  if (_reservedNames.contains(name)) {
    return name + "_";
  }
  else {
    return name;
  }
}

void PythonQtClassInfo::addGlobalNamespaceWrapper(PythonQtClassInfo* namespaceWrapper)
{
  _globalNamespaceWrappers.insert(0, namespaceWrapper);
}

void PythonQtClassInfo::updateRefCountingCBs()
{
  if (!_refCallback) {
    if (!_parentClasses.isEmpty()) {
      // we only search in single inheritance, using the first parent class
      PythonQtClassInfo* parent = _parentClasses.at(0)._parent;
      parent->updateRefCountingCBs();
      // propagate to ourself
      _refCallback = parent->_refCallback; 
      _unrefCallback = parent->_unrefCallback; 
    }
  }
  _searchRefCountCB = false;
}

PyObject* PythonQtClassInfo::getPythonTypeForProperty( const QString& name )
{
  PythonQtClassInfo* classInfo = getClassInfoForProperty(name);
  if (classInfo) {
    return classInfo->pythonQtClassWrapper();
  } else {
    return nullptr;
  }
}

PythonQtClassInfo* PythonQtClassInfo::getClassInfoForProperty( const QString& name )
{
  QByteArray typeName;
  PythonQtMemberInfo info = member(QStringToPythonConstCharPointer(name));
  if (info._type == PythonQtMemberInfo::Property) {
    typeName = info._property.typeName();
  } else {
    info = member(QStringToPythonConstCharPointer(QString("py_get_" + name)));
    if (info._type == PythonQtMemberInfo::Slot) {
      typeName = info._slot->parameters().at(0).name;
    }
  }
  if (!typeName.isEmpty()) {
    if (typeName.endsWith("*")) {
      typeName.truncate(typeName.length() - 1);
    }
    PythonQtClassInfo* classInfo = PythonQt::priv()->getClassInfo(typeName);
    return classInfo;
  }
  return nullptr;
}

bool PythonQtClassInfo::supportsRichCompare()
{
  if (_typeSlots & PythonQt::Type_RichCompare) {
    return true;
  }
  if (!_richCompareDetectionDone) {
    _richCompareDetectionDone = true;
    static QList<QByteArray> names;
    if (names.isEmpty()) {
      names << "__eq__";
      names << "__ne__";
      names << "__lt__";
      names << "__le__";
      names << "__gt__";
      names << "__ge__";
    }
    foreach (const QByteArray& name, names) {
      if (member(name)._type == PythonQtMemberInfo::Slot) {
        // we found one of the operators, so we can support the type slot
        _typeSlots |= PythonQt::Type_RichCompare;
        break;
      }
    }
  }
  return (_typeSlots & PythonQt::Type_RichCompare);
}

//-------------------------------------------------------------------------

PythonQtMemberInfo::PythonQtMemberInfo( PythonQtSlotInfo* info ) : _slot(info)
{
  if (info->metaMethod()->methodType() == QMetaMethod::Signal) {
    _type = Signal;
  } else {
    _type = Slot;
  }
  _enumValue = nullptr;
  _pythonType = nullptr;
}

PythonQtMemberInfo::PythonQtMemberInfo( const PythonQtObjectPtr& enumValue )
{
  _type = EnumValue;
  _slot = nullptr;
  _enumValue = enumValue;
  _pythonType = nullptr;
}

PythonQtMemberInfo::PythonQtMemberInfo( const QMetaProperty& prop )
{
  _type = Property;
  _slot = nullptr;
  _property = prop;
  _enumValue = nullptr;
  _pythonType = nullptr;
}

PythonQtDynamicClassInfo::~PythonQtDynamicClassInfo()
{
  delete _classInfo;
}
