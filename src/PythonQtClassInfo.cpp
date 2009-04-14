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
#include "PythonQt.h"
#include <QMetaMethod>

QHash<QByteArray, int> PythonQtMethodInfo::_parameterTypeDict;

PythonQtClassInfo::PythonQtClassInfo(const QMetaObject* meta, const QByteArray& wrappedClassName) {
  _meta = meta;
  _wrappedClassName = wrappedClassName;
  _constructors = NULL;
  _parentClassInfo = NULL; 
  _parentClassInfoResolved = false;
  _decoratorProvider = NULL;
  _decoratorProviderCB = NULL;
  if (wrappedClassName.isEmpty()) {
    _metaTypeId = -1;
  } else {
    _metaTypeId = QMetaType::type(wrappedClassName);
  }
}

PythonQtClassInfo::~PythonQtClassInfo()
{
  clearCachedMembers();
}

void PythonQtClassInfo::clearCachedMembers()
{
  QHashIterator<QByteArray, PythonQtMemberInfo> i(_cachedMembers);
  while (i.hasNext()) {
    PythonQtMemberInfo member = i.next().value();
    if (member._type== PythonQtMemberInfo::Slot) {
      PythonQtSlotInfo* info = member._slot;
      while (info) {
        PythonQtSlotInfo* next = info->nextInfo();
        delete info;
        info = next;
      }
    }
  }
}

void PythonQtClassInfo::resolveParentClassInfo()
{
  if (!_parentClassInfoResolved) {
    _parentClassInfoResolved = true;
    if (isCPPWrapper()) {
      if (!_wrappedClassName.isEmpty()) {
        _parentClassInfo = PythonQt::priv()->getClassInfo(_wrappedParentClassName);
      }
    } else {
      if (_meta->superClass()) {
        _parentClassInfo = PythonQt::priv()->getClassInfo(_meta->superClass());
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
  bool found = false;
  bool nameMapped = false;
  const char* attributeName = memberName;
  // look for properties
  int i = _meta->indexOfProperty(attributeName);
  if (i==-1) {
    // try to map name to objectName
    if (qstrcmp(attributeName, "name")==0) {
      attributeName = "objectName";
      nameMapped = true;
      i = _meta->indexOfProperty(attributeName);
    }
  }
  if (i!=-1) {
    PythonQtMemberInfo newInfo(_meta->property(i));
    _cachedMembers.insert(attributeName, newInfo);
    if (nameMapped) {
      _cachedMembers.insert(memberName, newInfo);
    }
  #ifdef PYTHONQT_DEBUG
    std::cout << "caching property " << memberName << " on " << _meta->className() << std::endl;
  #endif
    found = true;
  }
  return found;
}

PythonQtSlotInfo* PythonQtClassInfo::findDecoratorSlotsFromDecoratorProvider(const char* memberName, PythonQtSlotInfo* tail, bool &found, QHash<QByteArray, PythonQtMemberInfo>& memberCache) {
  QObject* decoratorProvider = decorator();
  if (decoratorProvider) {
    const QMetaObject* meta = decoratorProvider->metaObject();
    int memberNameLen = strlen(memberName);
    int numMethods = meta->methodCount();
    int startFrom = QObject::staticMetaObject.methodCount();
    for (int i = startFrom; i < numMethods; i++) {
      QMetaMethod m = meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
           m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        
        const char* sigStart = m.signature();
        bool isClassDeco = false;
        if (qstrncmp(sigStart, "static_", 7)==0) {
          // skip the static_classname_ part of the string
          sigStart += 7 + 1 + strlen(className());
          isClassDeco = true;
        } else if (qstrncmp(sigStart, "new_", 4)==0) {
          isClassDeco = true;
        } else if (qstrncmp(sigStart, "delete_", 7)==0) {
          isClassDeco = true;
        }
        // find the first '('
        int offset = findCharOffset(sigStart, '(');

        // XXX no checking is currently done if the slots have correct first argument or not...
        
        // check if same length and same name
        if (memberNameLen == offset && qstrncmp(memberName, sigStart, offset)==0) {
          found = true;
          PythonQtSlotInfo* info = new PythonQtSlotInfo(m, i, decoratorProvider, isClassDeco?PythonQtSlotInfo::ClassDecorator:PythonQtSlotInfo::InstanceDecorator);
          if (tail) {
            tail->setNextInfo(info);
          } else {
            PythonQtMemberInfo newInfo(info);
            memberCache.insert(memberName, newInfo);
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
  int memberNameLen = strlen(memberName);
  PythonQtSlotInfo* tail = NULL;
  if (_meta) {
    int numMethods = _meta->methodCount();
    for (int i = 0; i < numMethods; i++) {
      QMetaMethod m = _meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
           m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        
        const char* sigStart = m.signature();
        // find the first '('
        int offset = findCharOffset(sigStart, '(');
        
        // check if same length and same name
        if (memberNameLen == offset && qstrncmp(memberName, sigStart, offset)==0) {
          found = true;
          PythonQtSlotInfo* info = new PythonQtSlotInfo(m, i);
          if (tail) {
            tail->setNextInfo(info);
          } else {
            PythonQtMemberInfo newInfo(info);
            _cachedMembers.insert(memberName, newInfo);
          }
          tail = info;
        }
      }
    }
  }
  
  // look for dynamic decorators in this class and in derived classes
  PythonQtClassInfo* info = this;
  while (info) {
    tail = info->findDecoratorSlotsFromDecoratorProvider(memberName, tail, found, _cachedMembers);
    if (!info->_parentClassInfoResolved) {
      info->resolveParentClassInfo();
    }
    info = info->_parentClassInfo;
  }

  // look for decorators
  if (!_wrappedClassName.isEmpty()) {
    tail = findDecoratorSlots(_wrappedClassName.constData(), memberName, memberNameLen, tail, found);
  } 

  const QMetaObject* meta = _meta;
  while (meta) {
    tail = findDecoratorSlots(meta->className(), memberName, memberNameLen, tail, found);
    meta = meta->superClass();
  }
  return found;
}

bool PythonQtClassInfo::lookForEnumAndCache(const QMetaObject* meta, const char* memberName)
{
  bool found = false;
  // look for enum values
  int enumCount = meta->enumeratorCount();
  for (int i=0;i<enumCount; i++) {
    QMetaEnum e = meta->enumerator(i);
    for (int j=0; j < e.keyCount(); j++) {
      if (qstrcmp(e.key(j), memberName)==0) {
        PythonQtMemberInfo newInfo(e.value(j));
        _cachedMembers.insert(memberName, newInfo);
  #ifdef PYTHONQT_DEBUG
        std::cout << "caching enum " << memberName << " on " << meta->className() << std::endl;
  #endif
        found = true;
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
        PythonQtClassInfo* info = this;
        while (info && !found) {
          QObject* deco = info->decorator();
          if (deco) {
            // call on ourself for caching, but with different metaObject():
            found = lookForEnumAndCache(deco->metaObject(), memberName);
          }
          if (!info->_parentClassInfoResolved) {
            info->resolveParentClassInfo();
          }
          info = info->_parentClassInfo;
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

PythonQtSlotInfo* PythonQtClassInfo::findDecoratorSlots(const char* classname, const char* memberName, int memberNameLen, PythonQtSlotInfo* tail, bool& found)
{
  QListIterator<PythonQtSlotInfo*> it(PythonQt::priv()->getDecoratorSlots(classname));
  while (it.hasNext()) {

    PythonQtSlotInfo* infoOrig = it.next();
          
    const char* sigStart = infoOrig->metaMethod()->signature();
    if (qstrncmp("static_", sigStart, 7)==0) {
      sigStart += 7;
      sigStart += findCharOffset(sigStart, '_')+1;
    }
    int offset = findCharOffset(sigStart, '(');
    if (memberNameLen == offset && qstrncmp(memberName, sigStart, offset)==0) {
      //make a copy, otherwise we will have trouble on overloads!
      PythonQtSlotInfo* info = new PythonQtSlotInfo(*infoOrig);
      found = true;
      if (tail) {
        tail->setNextInfo(info);
      } else {
        PythonQtMemberInfo newInfo(info);
        _cachedMembers.insert(memberName, newInfo);
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
        
        const char* sigStart = m.signature();
        bool isClassDeco = false;
        if (qstrncmp(sigStart, "static_", 7)==0) {
          // skip the static_classname_ part of the string
          sigStart += 7 + 1 + strlen(className());
          isClassDeco = true;
        } else if (qstrncmp(sigStart, "new_", 4)==0) {
          continue;
        } else if (qstrncmp(sigStart, "delete_", 7)==0) {
          continue;
        }
        // find the first '('
        int offset = findCharOffset(sigStart, '(');
        
        // XXX no checking is currently done if the slots have correct first argument or not...
        if (!metaOnly || isClassDeco) {
          list << QString::fromLatin1(sigStart, offset); 
        }
      }
    }
  }
}
 
QStringList PythonQtClassInfo::memberList(bool metaOnly)
{
  resolveParentClassInfo();
  decorator();

  QStringList l;
  QString h;
  if (_wrappedClassName.isEmpty() && _meta && !metaOnly) {
    int i;
    int numProperties = _meta->propertyCount();
    for (i = 0; i < numProperties; i++) {
      QMetaProperty p = _meta->property(i);
      l << QString(p.name());
    }
  }
  
  // normal slots of QObject (or wrapper QObject)
  if (!metaOnly && _meta) {
    int numMethods = _meta->methodCount();
    bool skipQObj = !_wrappedClassName.isEmpty();
    for (int i = skipQObj?QObject::staticMetaObject.methodCount():0; i < numMethods; i++) {
      QMetaMethod m = _meta->method(i);
      if ((m.methodType() == QMetaMethod::Method ||
        m.methodType() == QMetaMethod::Slot) && m.access() == QMetaMethod::Public) {
        QByteArray signa(m.signature()); 
        if (signa.startsWith("new_")) continue;
        if (signa.startsWith("delete_")) continue;
        if (signa.startsWith("static_")) continue;
        PythonQtSlotInfo slot(m, i);
        l << slot.slotName();
      }
    }
  }

  {
    // look for dynamic decorators in this class and in derived classes
    PythonQtClassInfo* info = this;
    while (info) {
      info->listDecoratorSlotsFromDecoratorProvider(l, metaOnly);
      if (!info->_parentClassInfoResolved) {
        info->resolveParentClassInfo();
      }
      info = info->_parentClassInfo;
    }
  }
  
  // look for decorators
  QList<const char*> names;
  if (!_wrappedClassName.isEmpty()) {
    // CPP wrapper case:
    names << _wrappedClassName.constData();
    // for CPP classes which are wrapped, we do not want to look for decorators of the wrapping qobjects, since they
    // would require a different pointer on the decorator slot call
  } else {
    // QObject case:
    const QMetaObject* meta = _meta;
    while (meta) {
      if (meta==&QObject::staticMetaObject && !_wrappedClassName.isEmpty()) break;
      names << meta->className();
      meta = meta->superClass();
    }
  }

  QListIterator<const char*> nameIt(names);
  while (nameIt.hasNext()) {
    QListIterator<PythonQtSlotInfo*> it(PythonQt::priv()->getDecoratorSlots(nameIt.next()));
    while (it.hasNext()) {
      PythonQtSlotInfo* slot = it.next();
      if (metaOnly) {
        if (slot->isClassDecorator()) {
          QByteArray first = slot->slotName();
          if (first.startsWith("static_")) {
            int idx = first.indexOf('_');
            idx = first.indexOf('_', idx+1);
            first = first.mid(idx+1);
          }
          l << first;
        }
      } else {
        l << slot->slotName();
      }
    }
  }
  
  // List enumerator keys...
  QList<const QMetaObject*> enumMetaObjects;
  if (_meta) {
    enumMetaObjects << _meta;
  }
  // check enums in the class hierachy of CPP classes
  PythonQtClassInfo* info = this;
  while (info) {
    QObject* deco = info->decorator();
    if (deco) {
      enumMetaObjects << deco->metaObject();
    }
    if (!info->_parentClassInfoResolved) {
      info->resolveParentClassInfo();
    }
    info = info->_parentClassInfo;
  }
  
  foreach(const QMetaObject* meta, enumMetaObjects) {
    for (int i = 0; i<meta->enumeratorCount(); i++) {
      QMetaEnum e = meta->enumerator(i);
      for (int j=0; j < e.keyCount(); j++) {
        l << QString(e.key(j));
      }
    }
  }
  return l;
}

const char* PythonQtClassInfo::className()
{
  if (!_wrappedClassName.isEmpty()) {
    return _wrappedClassName.constData();
  } else {
    return _meta->className();
  }
}

bool PythonQtClassInfo::inherits(const char* name)
{
  resolveParentClassInfo();
  if (isCPPWrapper()) {
    PythonQtClassInfo* info = this;
    while (info) {
      if (_wrappedClassName == name) {
        return true;
      }
      if (!info->_parentClassInfoResolved) {
        info->resolveParentClassInfo();
      }
      info = info->_parentClassInfo;
    }
  } else {
    const QMetaObject* m = _meta;
    while (m) {
      if (strcmp(name, m->className())==0) {
        return true;
      }
      m = m->superClass();
    }
  }
  return false;
}

QString PythonQtClassInfo::help()
{
  resolveParentClassInfo();
  decorator();
  QString h;
  h += QString("--- ") + QString(className()) + QString(" ---\n");
  
  if (_wrappedClassName.isEmpty()) {
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
      h += constr->fullSignature(false) + "\n";
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
        QByteArray signa(m.signature()); 
        if (signa.startsWith("new_")) continue;
        if (signa.startsWith("delete_")) continue;
        if (signa.startsWith("static_")) continue;
        PythonQtSlotInfo slot(m, i);
        h += slot.fullSignature(false)+ "\n";
      }
    }
  }
  
  // TODO xxx : decorators and enums from decorator() are missing...
  // maybe we can reuse memberlist()?
  
  // look for decorators
  QList<const char*> names;
  if (!_wrappedClassName.isEmpty()) {
    names << _wrappedClassName.constData();
  }
  const QMetaObject* meta = _meta;
  while (meta) {
    names << meta->className();
    meta = meta->superClass();
  }

  QListIterator<const char*> nameIt(names);
  while (nameIt.hasNext()) {
    QListIterator<PythonQtSlotInfo*> it(PythonQt::priv()->getDecoratorSlots(nameIt.next()));
    while (it.hasNext()) {
      PythonQtSlotInfo* slot = it.next();
      h += slot->fullSignature(slot->isInstanceDecorator()) + "\n";
    }
  }
   
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

  if (_wrappedClassName.isEmpty() && _meta) {
    int numMethods = _meta->methodCount();
    if (numMethods>0) {
      h += "Signals:\n";
      for (int i = 0; i < numMethods; i++) {
        QMetaMethod m = _meta->method(i);
        if (m.methodType() == QMetaMethod::Signal) {
          h += QString(m.signature()) + "\n";
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
    _constructors = PythonQt::priv()->getConstructorSlot(!_wrappedClassName.isEmpty()?_wrappedClassName:QByteArray(_meta->className()));
  }
  return _constructors;
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
      PythonQt::priv()->addDecorators(_decoratorProvider, PythonQtPrivate::ConstructorDecorator | PythonQtPrivate::DestructorDecorator);
    }
  }
  return _decoratorProvider;
}

bool PythonQtClassInfo::hasOwnerMethodButNoOwner(void* object)
{
  PythonQtMemberInfo info = member("hasOwner");
  if (info._type == PythonQtMemberInfo::Slot) {
    void* obj = object;
    bool result = false;
    void* args[2];
    args[0] = &result;
    args[1] = &obj;
    info._slot->decorator()->qt_metacall(QMetaObject::InvokeMetaMethod, info._slot->slotIndex(), args);
    return !result;
  } else {
    return false;
  }
}
