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
// \file    PythonQtMethodInfo.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtMethodInfo.h"
#include "PythonQtClassInfo.h"
#include <iostream>

QHash<QByteArray, PythonQtMethodInfo*> PythonQtMethodInfo::_cachedSignatures;
QHash<int, PythonQtMethodInfo::ParameterInfo> PythonQtMethodInfo::_cachedParameterInfos;
QHash<QByteArray, QByteArray> PythonQtMethodInfo::_parameterNameAliases;

bool PythonQtSlotInfo::_globalShouldAllowThreads = false;

PythonQtMethodInfo::PythonQtMethodInfo(const QMetaMethod& meta, PythonQtClassInfo* classInfo)
{
#ifdef PYTHONQT_DEBUG
  QByteArray sig = PythonQtUtils::signature(meta);
  sig = sig.mid(sig.indexOf('('));
  QByteArray fullSig = QByteArray(meta.typeName()) + " " + sig;
  std::cout << "caching " << fullSig.data() << std::endl;
#endif

  ParameterInfo type;
  fillParameterInfo(type, QByteArray(meta.typeName()), classInfo);
  _parameters.append(type);
  QList<QByteArray> names = meta.parameterTypes();
  Q_FOREACH (const QByteArray& name, names) {
    fillParameterInfo(type, name, classInfo);
    _parameters.append(type);
  }

  setupAllowThreads();
}

PythonQtMethodInfo::PythonQtMethodInfo(const QByteArray& typeName, const QList<QByteArray>& args)
{
  ParameterInfo type;
  fillParameterInfo(type, typeName, nullptr);
  _parameters.append(type);
  Q_FOREACH (const QByteArray& name, args) {
    fillParameterInfo(type, name, nullptr);
    _parameters.append(type);
  }
  setupAllowThreads();
}

void PythonQtMethodInfo::setupAllowThreads()
{
  bool allowThreads = true;
  for (const ParameterInfo& info : qAsConst(_parameters)) {
    if (info.name == "PyObject" || info.name == "PythonQtObjectPtr" ||
      info.innerName == "PyObject" || info.innerName == "PythonQtObjectPtr") {
      allowThreads = false;
      break;
    }
  }
  _shouldAllowThreads = allowThreads;
}

const PythonQtMethodInfo* PythonQtMethodInfo::getCachedMethodInfo(const QMetaMethod& signal, PythonQtClassInfo* classInfo)
{
  QByteArray sig(PythonQtUtils::signature(signal));
  sig = sig.mid(sig.indexOf('('));
  QByteArray fullSig = QByteArray(signal.typeName()) + " " + sig;
  PythonQtMethodInfo* result = _cachedSignatures.value(fullSig);
  if (!result) {
    result = new PythonQtMethodInfo(signal, classInfo);
    _cachedSignatures.insert(fullSig, result);
  }
  return result;
}

const PythonQtMethodInfo* PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(int numArgs, const char** args)
{
  QByteArray typeName = args[0];
  QList<QByteArray> arguments;
  QByteArray fullSig = typeName;
  fullSig += "(";
  for (int i =1;i<numArgs; i++) {
    if (i>1) {
      fullSig += ",";
    }
    QByteArray arg(args[i]);
    fullSig += arg;
    arguments << arg;
  }
  fullSig += ")";
  PythonQtMethodInfo* result = _cachedSignatures.value(fullSig);
  if (!result) {
    result = new PythonQtMethodInfo(typeName, arguments);
    _cachedSignatures.insert(fullSig, result);
  }
  return result;
}

void PythonQtMethodInfo::fillParameterInfo(ParameterInfo& type, const QByteArray& orgName, PythonQtClassInfo* classInfo)
{
  QByteArray name = orgName;

  type.enumWrapper = nullptr;
  type.innerNamePointerCount = 0;
  type.isQList = false;
  type.passOwnershipToCPP = false;
  type.passOwnershipToPython = false;
  type.newOwnerOfThis = false;

  int len = name.length();
  if (len>0) {
    if (name.startsWith("PythonQtPassOwnershipToCPP<")) {
      type.passOwnershipToCPP = true;
      name = name.mid(27, len-28);
      len -= 28;
    } else
    if (name.startsWith("PythonQtPassOwnershipToPython<")) {
      type.passOwnershipToPython = true;
      name = name.mid(30, len-31);
      len -= 31;
    } else
    if (name.startsWith("PythonQtNewOwnerOfThis<")) {
      type.newOwnerOfThis = true;
      name = name.mid(23, len-24);
      len -= 24;
    }

    if (strncmp(name.constData(), "const ", 6)==0) {
      name = name.mid(6);
      len -= 6;
      type.isConst = true;
    } else {
      type.isConst = false;
    }
    char pointerCount = 0;
    bool hadReference = false;
    // remove * and & from the end of the string
    while (name.at(len-1) == '*') {
      len--;
      pointerCount++;
    }
    while (name.at(len-1) == '&') {
      len--;
      hadReference = true;
    }
    if (len!=name.length()) {
      name = name.left(len);
    }
    type.pointerCount = pointerCount;
    type.isReference = hadReference;

    QByteArray alias = _parameterNameAliases.value(name);
    if (!alias.isEmpty()) {
      name = alias;
    }

    type.typeId = nameToType(name);
    if (type.typeId == Unknown) {
      type.typeId = QMetaType::type(name.constData());
#if( QT_VERSION >= QT_VERSION_CHECK(5,0,0) )
      if (type.typeId == QMetaType::UnknownType) {
#else
      if (type.typeId == QMetaType::Void) {
#endif
        type.typeId = Unknown;
      }
    }
    type.name = name;

    if (name.startsWith("QList<")) {
      type.isQList = true;
    }
    if (name.contains("<")) {
      QByteArray innerName = getInnerTemplateTypeName(name);
      if (innerName.endsWith("*")) {
        type.innerNamePointerCount = 1;
        innerName.truncate(innerName.length() - 1);
      }
      type.innerName = innerName;
    }

    if (type.typeId == PythonQtMethodInfo::Unknown || type.typeId >= QMetaType::User) {
      bool isLocalEnum;
      // TODOXXX: make use of this flag!
      type.enumWrapper = PythonQtClassInfo::findEnumWrapper(type.name, classInfo, &isLocalEnum);
    }
  } else {
    type.typeId = QMetaType::Void;
    type.pointerCount = 0;
    type.isConst = false;
    type.isReference = false;
  }
}

int PythonQtMethodInfo::getInnerTemplateMetaType(const QByteArray& typeName)
{
  int idx = typeName.indexOf("<");
  if (idx > 0) {
    int idx2 = typeName.lastIndexOf(">");
    if (idx2 > 0) {
      QByteArray innerType = typeName.mid(idx + 1, idx2 - idx - 1).trimmed();
      return QMetaType::type(innerType.constData());
    }
  }
  return QMetaType::Void;
}

QByteArray PythonQtMethodInfo::getInnerTemplateTypeName(const QByteArray& typeName)
{
  int idx = typeName.indexOf("<");
  if (idx > 0) {
    int idx2 = typeName.lastIndexOf(">");
    if (idx2 > 0) {
      return typeName.mid(idx + 1, idx2 - idx - 1).trimmed();
    }
  }
  return QByteArray();
}

QByteArray PythonQtMethodInfo::getInnerListTypeName(const QByteArray& typeName)
{
  QByteArray name = getInnerTemplateTypeName(typeName);
  if (name.isEmpty() && typeName.endsWith("List")) {
    name = typeName.left(typeName.length() - 4);
  }
  return name;
}

int PythonQtMethodInfo::nameToType(const char* name)
{
  if (_parameterTypeDict.isEmpty()) {
    // we could also use QMetaType::nameToType, but that does a string compare search
    // and does not support QVariant

    // QMetaType names
    _parameterTypeDict.insert("long", QMetaType::Long);
    _parameterTypeDict.insert("int", QMetaType::Int);
    _parameterTypeDict.insert("short", QMetaType::Short);
    _parameterTypeDict.insert("char", QMetaType::Char);
    _parameterTypeDict.insert("signed long", QMetaType::Long);
    _parameterTypeDict.insert("signed int", QMetaType::Int);
    _parameterTypeDict.insert("signed short", QMetaType::Short);
    _parameterTypeDict.insert("signed char", QMetaType::Char);
    _parameterTypeDict.insert("ulong", QMetaType::ULong);
    _parameterTypeDict.insert("unsigned long", QMetaType::ULong);
    _parameterTypeDict.insert("uint", QMetaType::UInt);
    _parameterTypeDict.insert("unsigned int", QMetaType::UInt);
    _parameterTypeDict.insert("ushort", QMetaType::UShort);
    _parameterTypeDict.insert("unsigned short", QMetaType::UShort);
    _parameterTypeDict.insert("uchar", QMetaType::UChar);
    _parameterTypeDict.insert("unsigned char", QMetaType::UChar);
    _parameterTypeDict.insert("bool", QMetaType::Bool);
    _parameterTypeDict.insert("float", QMetaType::Float);
    _parameterTypeDict.insert("double", QMetaType::Double);
    _parameterTypeDict.insert("qreal", QMetaType::Double);
    _parameterTypeDict.insert("QChar", QMetaType::QChar);
    _parameterTypeDict.insert("QByteArray", QMetaType::QByteArray);
    _parameterTypeDict.insert("QString", QMetaType::QString);
    _parameterTypeDict.insert("", QMetaType::Void);
    _parameterTypeDict.insert("void", QMetaType::Void);
    _parameterTypeDict.insert("QtMsgType", QMetaType::Int);

    // GL types
    _parameterTypeDict.insert("GLenum", QMetaType::UInt);
    _parameterTypeDict.insert("GLboolean", QMetaType::UChar);
    _parameterTypeDict.insert("GLbitfield", QMetaType::UInt);
    _parameterTypeDict.insert("GLbyte", QMetaType::Char);
    _parameterTypeDict.insert("GLubyte", QMetaType::UChar);
    _parameterTypeDict.insert("GLshort", QMetaType::Short);
    _parameterTypeDict.insert("GLushort", QMetaType::UShort);
    _parameterTypeDict.insert("GLint", QMetaType::Int);
    _parameterTypeDict.insert("GLuint", QMetaType::UInt);
    _parameterTypeDict.insert("GLsizei", QMetaType::UInt);
    _parameterTypeDict.insert("GLclampf", QMetaType::Float);
    _parameterTypeDict.insert("GLfloat", QMetaType::Float);
    _parameterTypeDict.insert("GLclampd", QMetaType::Double);
    _parameterTypeDict.insert("GLdouble", QMetaType::Double);
    _parameterTypeDict.insert("GLvoid", QMetaType::Void);

    // Pointer-size dependent types
    if (QT_POINTER_SIZE == 8) {
      _parameterTypeDict.insert("qgl_GLintptr", QMetaType::LongLong);
      _parameterTypeDict.insert("qgl_GLsizeiptr", QMetaType::LongLong);
      _parameterTypeDict.insert("size_t", QMetaType::ULongLong);
      _parameterTypeDict.insert("qintptr", QMetaType::LongLong);
      _parameterTypeDict.insert("qptrdiff", QMetaType::LongLong);
      _parameterTypeDict.insert("quintptr", QMetaType::ULongLong);
      _parameterTypeDict.insert("WId", QMetaType::ULongLong);
      _parameterTypeDict.insert("qsizetype", QMetaType::LongLong);
    } else {
      _parameterTypeDict.insert("qgl_GLintptr", QMetaType::Int);
      _parameterTypeDict.insert("qgl_GLsizeiptr", QMetaType::Int);
      _parameterTypeDict.insert("size_t", QMetaType::UInt);
      _parameterTypeDict.insert("qintptr", QMetaType::Int);
      _parameterTypeDict.insert("qptrdiff", QMetaType::Int);
      _parameterTypeDict.insert("quintptr", QMetaType::UInt);
      _parameterTypeDict.insert("WId", QMetaType::UInt);
      _parameterTypeDict.insert("qsizetype", QMetaType::Int);
    }

#ifdef PYTHONQT_SUPPORT_ML_TYPES
    _parameterTypeDict.insert("MLuint8",  QMetaType::UChar);
    _parameterTypeDict.insert("MLint8",   QMetaType::Char);
    _parameterTypeDict.insert("MLuint16", QMetaType::UShort);
    _parameterTypeDict.insert("MLint16",  QMetaType::Short);
    _parameterTypeDict.insert("MLuint32", QMetaType::UInt);
    _parameterTypeDict.insert("MLint32",  QMetaType::Int);
    _parameterTypeDict.insert("MLuint64", QMetaType::ULongLong);
    _parameterTypeDict.insert("MLint64",  QMetaType::LongLong);
    _parameterTypeDict.insert("MLuint",   QMetaType::ULongLong);
    _parameterTypeDict.insert("MLint",    QMetaType::LongLong);
    _parameterTypeDict.insert("MLfloat",  QMetaType::Float);
    _parameterTypeDict.insert("MLdouble", QMetaType::Double);
#endif

    // QVariant names
    _parameterTypeDict.insert("Q_LLONG", QMetaType::LongLong);
    _parameterTypeDict.insert("Q_ULLONG", QMetaType::ULongLong);
    _parameterTypeDict.insert("qlonglong", QMetaType::LongLong);
    _parameterTypeDict.insert("qulonglong", QMetaType::ULongLong);
    _parameterTypeDict.insert("qint64", QMetaType::LongLong);
    _parameterTypeDict.insert("quint64", QMetaType::ULongLong);
    _parameterTypeDict.insert("QVariantHash", QMetaType::QVariantHash);
    _parameterTypeDict.insert("QVariantMap", QMetaType::QVariantMap);
    _parameterTypeDict.insert("QVariantList", QMetaType::QVariantList);
    _parameterTypeDict.insert("QHash<QString,QVariant>", QMetaType::QVariantHash);
    _parameterTypeDict.insert("QMap<QString,QVariant>", QMetaType::QVariantMap);
    _parameterTypeDict.insert("QList<QVariant>", QMetaType::QVariantList);
    _parameterTypeDict.insert("QStringList", QMetaType::QStringList);
    _parameterTypeDict.insert("QBitArray", QMetaType::QBitArray);
    _parameterTypeDict.insert("QDate", QMetaType::QDate);
    _parameterTypeDict.insert("QTime", QMetaType::QTime);
    _parameterTypeDict.insert("QDateTime", QMetaType::QDateTime);
    _parameterTypeDict.insert("QUrl", QMetaType::QUrl);
    _parameterTypeDict.insert("QLocale", QMetaType::QLocale);
    _parameterTypeDict.insert("QRect", QMetaType::QRect);
    _parameterTypeDict.insert("QRectF", QMetaType::QRectF);
    _parameterTypeDict.insert("QSize", QMetaType::QSize);
    _parameterTypeDict.insert("QSizeF", QMetaType::QSizeF);
    _parameterTypeDict.insert("QLine", QMetaType::QLine);
    _parameterTypeDict.insert("QLineF", QMetaType::QLineF);
    _parameterTypeDict.insert("QPoint", QMetaType::QPoint);
    _parameterTypeDict.insert("QPointF", QMetaType::QPointF);
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    _parameterTypeDict.insert("QRegExp", QMetaType::QRegExp);
#endif
    _parameterTypeDict.insert("QRegularExpression", QMetaType::QRegularExpression);
    _parameterTypeDict.insert("QFont", QMetaType::QFont);
    _parameterTypeDict.insert("QPixmap", QMetaType::QPixmap);
    _parameterTypeDict.insert("QBrush", QMetaType::QBrush);
    _parameterTypeDict.insert("QColor", QMetaType::QColor);
    _parameterTypeDict.insert("QCursor", QMetaType::QCursor);
    _parameterTypeDict.insert("QPalette", QMetaType::QPalette);
    _parameterTypeDict.insert("QIcon", QMetaType::QIcon);
    _parameterTypeDict.insert("QImage", QMetaType::QImage);
    _parameterTypeDict.insert("QRegion", QMetaType::QRegion);
    _parameterTypeDict.insert("QBitmap", QMetaType::QBitmap);
    _parameterTypeDict.insert("QSizePolicy", QMetaType::QSizePolicy);
    _parameterTypeDict.insert("QKeySequence", QMetaType::QKeySequence);
    _parameterTypeDict.insert("QPen", QMetaType::QPen);
    _parameterTypeDict.insert("QTextLength", QMetaType::QTextLength);
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    _parameterTypeDict.insert("QMatrix", QMetaType::QMatrix);
#endif
    _parameterTypeDict.insert("QMatrix4x4", QMetaType::QMatrix4x4);
    _parameterTypeDict.insert("QTransform", QMetaType::QTransform);
    _parameterTypeDict.insert("QTextFormat", QMetaType::QTextFormat);
    _parameterTypeDict.insert("QVariant", PythonQtMethodInfo::Variant);
    // own special types... (none so far, could be e.g. ObjectList
  }
  QHash<QByteArray, int>::const_iterator it = _parameterTypeDict.find(name);
  if (it!=_parameterTypeDict.end()) {
    return it.value();
  } else {
    return PythonQtMethodInfo::Unknown;
  }
}

void PythonQtMethodInfo::cleanupCachedMethodInfos()
{
  QHashIterator<QByteArray, PythonQtMethodInfo *> i(_cachedSignatures);
  while (i.hasNext()) {
    delete i.next().value();
  }
  _cachedSignatures.clear();
  _cachedParameterInfos.clear();
}

void PythonQtMethodInfo::addParameterTypeAlias(const QByteArray& alias, const QByteArray& name)
{
#if QT_VERSION >= 0x060000
  QByteArray alias2{ alias };
  QByteArray name2{ name };
  // in Qt6 QPair has been replaced by std::pair, QVector is really QList, and there is no space between ">"
  alias2.replace("QPair", "std::pair").replace("QVector", "QList").replace("> >", ">>");
  name2.replace("QPair", "std::pair").replace("QVector", "QList").replace("> >", ">>");
  _parameterNameAliases.insert(alias2, name2);
#else
  _parameterNameAliases.insert(alias, name);
#endif
}

const PythonQtMethodInfo::ParameterInfo& PythonQtMethodInfo::getParameterInfoForMetaType(int type)
{
  QHash<int, ParameterInfo>::ConstIterator it = _cachedParameterInfos.find(type);
  if (it != _cachedParameterInfos.constEnd()) {
    return it.value();
  }
  ParameterInfo info;
  fillParameterInfo(info, QMetaType::typeName(type));
  _cachedParameterInfos.insert(type, info);
  return _cachedParameterInfos[type];
}

//-------------------------------------------------------------------------------------------------

void PythonQtSlotInfo::deleteOverloadsAndThis()
{
  PythonQtSlotInfo* cur = this;
  while(cur) {
    PythonQtSlotInfo* next = cur->nextInfo();
    delete cur;
    cur = next;
  }
}


QString PythonQtSlotInfo::fullSignature(bool skipReturnValue, int optionalArgsIndex) const
{ 
  int firstArgOffset = isInstanceDecorator()?2:1;
  QString result;
  QByteArray sig = slotName();
  QList<QByteArray> names = _meta.parameterNames();

  bool isStatic = false;
  bool isConstructor = false;
  bool isDestructor = false;

  if (_type == ClassDecorator) {
    if (sig.startsWith("new_")) {
      sig = sig.mid(4);
      isConstructor = true;
    }
    else if (sig.startsWith("py_q_")) {
      sig = sig.mid(5);
    }
    else if (sig.startsWith("delete_")) {
      sig = sig.mid(7);
      isDestructor = true;
    } else if(sig.startsWith("static_")) {
      isStatic = true;
      sig = sig.mid(7);
      int idx = sig.indexOf("_");
      if (idx>=0) {
        sig = sig.mid(idx+1);
      }
    }
  }

  result += sig;
  result += "(";

  for (int i = firstArgOffset; i<_parameters.count(); i++) {
    if ((optionalArgsIndex + firstArgOffset) == i) {
      result += " [";
    }
    if (i!=firstArgOffset) {
      result += ", ";
    }
    //if (_parameters.at(i).isConst) {
    //  result += "const ";
    //}
    if (_parameters.at(i).name == "bool" && _parameters.at(i).pointerCount == 1) {
      result += "PythonQt.BoolResult";
    } else {
      result += _parameters.at(i).name;
    }
    //if (_parameters.at(i).pointerCount) {
    //  QByteArray stars;
    //  stars.fill('*', _parameters.at(i).pointerCount);
    //  result += stars;
    //}
    if (!names.at(i-1).isEmpty()) {
      result += " ";
      result += names.at(i-1);
    }
  }
  if (optionalArgsIndex != -1) {
    result += "]";
  }
  result += ")";

  if (isStatic) {
    result = QString("static ") + result;
  } 
  if (isConstructor) {
//    result = QString("constructor ") + result;
  } 
  if (isDestructor) {
    result = QString("~") + result;
  } 

  if (!skipReturnValue) {
    if (!_parameters.at(0).name.isEmpty()) {
      result += " -> ";
      result += _parameters.at(0).name;
    }
  }
  return result;
}


QByteArray PythonQtSlotInfo::slotName(bool removeDecorators) const
{
  QByteArray name = PythonQtUtils::methodName(_meta);
  if (removeDecorators) {
    if (name.startsWith("py_q_")) {
      name = name.mid(5);
    } else 
    if (name.startsWith("static_")) {
      name = name.mid(7);
      int idx = name.indexOf("_");
      if (idx>=0) {
        name = name.mid(idx+1);
      }
    }
  }
  return name;
}

QByteArray PythonQtSlotInfo::signature() const
{
  return PythonQtUtils::signature(_meta);
}

QStringList PythonQtSlotInfo::overloads(bool skipReturnValue) const
{
  const PythonQtSlotInfo* info = this;
  QList<const PythonQtSlotInfo*> list;
  do {
    list << info;
    info = info->nextInfo();
  } while (info);

  QList<const PythonQtSlotInfo*> all = list;

  QStringList results;
  while (!list.isEmpty()) {
    const PythonQtSlotInfo* current = list.takeFirst();
    int minSameArgs = 1000;
    QList<PythonQtMethodInfo::ParameterInfo> currentArguments = current->arguments();
    int maxArgs = currentArguments.size();
    const PythonQtSlotInfo* maxArgSlot = current;
    QList<const PythonQtSlotInfo*> slotsWithSameArgs;
    slotsWithSameArgs << current;
    QMutableListIterator<const PythonQtSlotInfo*> it(all);
    while (it.hasNext()) {
      const PythonQtSlotInfo* other = it.next();
      // same slot...
      if (other == current) {
        continue;
      }
      // different return types...
      if (other->parameters().at(0).name != current->parameters().at(0).name) {
        continue;
      }
      QList<PythonQtMethodInfo::ParameterInfo> otherArguments = other->arguments();
      int paramCount = qMin(currentArguments.size(), otherArguments.size());
      int sameArgs = 0;
      for (int i = 0; i<paramCount; i++) {
        if (currentArguments.at(i).name == otherArguments.at(i).name) {
          sameArgs++;
        } else {
          break;
        }
      }
      if (sameArgs > 0 && sameArgs == paramCount) {
        slotsWithSameArgs << other;
        minSameArgs = qMin(sameArgs, minSameArgs);
        if (otherArguments.size() > maxArgs) {
          maxArgs = otherArguments.size();
          maxArgSlot = other;
          current = other;
          currentArguments = otherArguments;
        }
      }
    }
    if (slotsWithSameArgs.size() > 1) {
      results << maxArgSlot->fullSignature(skipReturnValue, minSameArgs);
      foreach(const PythonQtSlotInfo* o, slotsWithSameArgs) {
        list.removeOne(o);
      }
    } else {
      results << current->fullSignature(skipReturnValue);
    }
  }
  return results;
}

QList<PythonQtMethodInfo::ParameterInfo> PythonQtSlotInfo::arguments() const
{
  QList<PythonQtMethodInfo::ParameterInfo> result;
  for (int i = isInstanceDecorator()?2:1; i<_parameters.size(); i++) {
    result << _parameters[i];
  }
  return result;
}

QByteArray PythonQtSlotInfo::getImplementingClassName() const
{
  if (isInstanceDecorator()) {
    return _parameters.at(1).name;
  } else if (isClassDecorator()) {
    QByteArray name = PythonQtUtils::methodName(_meta);
    if (name.startsWith("static_")) {
      name = name.mid(7);
      int idx = name.indexOf("_");
      name = name.mid(0, idx);
      return name;
    } else {
      return name;
    }
  } else {
    return _meta.enclosingMetaObject()->className();
  }
}

void PythonQtSlotInfo::invokeQtMethod(QObject* obj, PythonQtSlotInfo* slot, void** args)
{
  if (slot->shouldAllowThreads() && _globalShouldAllowThreads) {
    PYTHONQT_ALLOW_THREADS_SCOPE
    obj->qt_metacall(QMetaObject::InvokeMetaMethod, slot->slotIndex(), args);
  } else {
    obj->qt_metacall(QMetaObject::InvokeMetaMethod, slot->slotIndex(), args);
  }
}

void PythonQtSlotInfo::setGlobalShouldAllowThreads(bool flag)
{
  _globalShouldAllowThreads = flag;
}

bool PythonQtSlotInfo::getGlobalShouldAllowThreads()
{
  return _globalShouldAllowThreads;
}
