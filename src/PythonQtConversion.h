#ifndef _PYTHONQTCONVERSION_H
#define _PYTHONQTCONVERSION_H

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
// \file    PythonQtConversion.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtPythonInclude.h"
#include "PythonQt.h"
#include "PythonQtMisc.h"
#include "PythonQtClassInfo.h"
#include "PythonQtMethodInfo.h"

#include <QList>
#include <vector>

typedef PyObject* PythonQtConvertMetaTypeToPythonCB(const void* inObject, int metaTypeId);
typedef bool PythonQtConvertPythonToMetaTypeCB(PyObject* inObject, void* outObject, int metaTypeId, bool strict);
typedef QVariant PythonQtConvertPythonSequenceToQVariantListCB(PyObject* inObject);

#define PythonQtRegisterListTemplateConverter(type, innertype) \
{ int typeId = qRegisterMetaType<type<innertype > >(#type"<"#innertype">"); \
PythonQtConv::registerPythonToMetaTypeConverter(typeId, PythonQtConvertPythonListToListOfValueType<type<innertype >, innertype>); \
PythonQtConv::registerMetaTypeToPythonConverter(typeId, PythonQtConvertListOfValueTypeToPythonList<type<innertype >, innertype>); \
}

#define PythonQtRegisterListTemplateConverterForKnownClass(type, innertype) \
{ int typeId = qRegisterMetaType<type<innertype > >(#type"<"#innertype">"); \
  PythonQtConv::registerPythonToMetaTypeConverter(typeId, PythonQtConvertPythonListToListOfKnownClass<type<innertype >, innertype>); \
  PythonQtConv::registerMetaTypeToPythonConverter(typeId, PythonQtConvertListOfKnownClassToPythonList<type<innertype >, innertype>); \
}

#define PythonQtRegisterQPairConverter(type1, type2) \
{ int typeId = qRegisterMetaType<QPair<type1, type2> >("QPair<"#type1","#type2">"); \
  PythonQtConv::registerPythonToMetaTypeConverter(typeId, PythonQtConvertPythonToPair<type1, type2>); \
  PythonQtConv::registerMetaTypeToPythonConverter(typeId, PythonQtConvertPairToPython<type1, type2>); \
}

#define PythonQtRegisterIntegerMapConverter(type, innertype) \
{ int typeId = qRegisterMetaType<type<int, innertype > >(#type"<int, "#innertype">"); \
  PythonQtConv::registerPythonToMetaTypeConverter(typeId, PythonQtConvertPythonToIntegerMap<type<int, innertype >, innertype>); \
  PythonQtConv::registerMetaTypeToPythonConverter(typeId, PythonQtConvertIntegerMapToPython<type<int, innertype >, innertype>); \
}

#define PythonQtRegisterListTemplateQPairConverter(listtype, type1, type2) \
{ \
  qRegisterMetaType<QPair<type1, type2> >("QPair<"#type1","#type2">"); \
  int typeId = qRegisterMetaType<listtype<QPair<type1, type2> > >(#listtype"<QPair<"#type1","#type2">>"); \
  PythonQtConv::registerPythonToMetaTypeConverter(typeId, PythonQtConvertPythonListToListOfPair<listtype<QPair<type1, type2> >, type1, type2>); \
  PythonQtConv::registerMetaTypeToPythonConverter(typeId, PythonQtConvertListOfPairToPythonList<listtype<QPair<type1, type2> >, type1, type2>); \
}

#define PythonQtRegisterToolClassesTemplateConverter(innertype) \
  PythonQtRegisterListTemplateConverter(QList, innertype); \
  PythonQtRegisterListTemplateConverter(QVector, innertype); \
  PythonQtRegisterListTemplateConverter(std::vector, innertype);

#define PythonQtRegisterToolClassesTemplateConverterForKnownClass(innertype) \
  PythonQtRegisterListTemplateConverterForKnownClass(QList, innertype); \
  PythonQtRegisterListTemplateConverterForKnownClass(QVector, innertype); \
  PythonQtRegisterListTemplateConverterForKnownClass(std::vector, innertype);

//! a static class that offers methods for type conversion
class PYTHONQT_EXPORT PythonQtConv {

public:

  //! get a ref counted True or False Python object
  static PyObject* GetPyBool(bool val);

  //! converts the Qt parameter given in \c data, interpreting it as a \c info parameter, into a Python object,
  static PyObject* ConvertQtValueToPython(const PythonQtMethodInfo::ParameterInfo& info, const void* data);

  //! convert python object to Qt (according to the given parameter) and if the conversion should be strict (classInfo is currently not used anymore)
  static void* ConvertPythonToQt(const PythonQtMethodInfo::ParameterInfo& info, PyObject* obj, bool strict, PythonQtClassInfo* classInfo, void* alreadyAllocatedCPPObject, PythonQtArgumentFrame* frame = NULL);

  //! creates a data storage for the passed parameter type and returns a void pointer to be set as arg[0] of qt_metacall
  static void* CreateQtReturnValue(const PythonQtMethodInfo::ParameterInfo& info, PythonQtArgumentFrame* frame);

  //! converts QString to Python string (unicode!)
  static PyObject* QStringToPyObject(const QString& str);

  //! converts QStringList to Python tuple
  static PyObject* QStringListToPyObject(const QStringList& list);

  //! converts QStringList to Python list
  static PyObject* QStringListToPyList(const QStringList& list);

    //! get string representation of py object
  static QString PyObjGetRepresentation(PyObject* val);

  //! get string value from py object
  static QString PyObjGetString(PyObject* val) { bool ok; QString s = PyObjGetString(val, false, ok); return s; }
  //! get string value from py object
  static QString PyObjGetString(PyObject* val, bool strict, bool &ok);
  //! get bytes from py object
  static QByteArray PyObjGetBytes(PyObject* val, bool strict, bool &ok);
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

  static PyObject* QVariantHashToPyObject(const QVariantHash& m);
  static PyObject* QVariantMapToPyObject(const QVariantMap& m);
  static PyObject* QVariantListToPyObject(const QVariantList& l);
  
  //! get human readable string from CPP object (when the metatype is known)
  static QString CPPObjectToString(int type, const void* data);
    
  //! register a converter callback from python to cpp for given metatype
  static void registerPythonToMetaTypeConverter(int metaTypeId, PythonQtConvertPythonToMetaTypeCB* cb) { _pythonToMetaTypeConverters.insert(metaTypeId, cb); }

  //! register a converter callback from cpp to python for given metatype
  static void registerMetaTypeToPythonConverter(int metaTypeId, PythonQtConvertMetaTypeToPythonCB* cb) { _metaTypeToPythonConverters.insert(metaTypeId, cb); }

  //! set a callback that is called when a Python sequence should be converted to a QVariantList
  //! to allow special conversion.
  static void setPythonSequenceToQVariantListCallback(PythonQtConvertPythonSequenceToQVariantListCB* cb) { _pythonSequenceToQVariantListCB = cb; }

  //! converts the Qt parameter given in \c data, interpreting it as a \c type registered qvariant/meta type, into a Python object,
  static PyObject* convertQtValueToPythonInternal(int type, const void* data);

  //! creates a copy of given object, using the QMetaType
  static PyObject* createCopyFromMetaType( int type, const void* object );

  //! cast wrapper to given className if possible
  static void* castWrapperTo(PythonQtInstanceWrapper* wrapper, const QByteArray& className, bool& ok);

  static bool      convertToPythonQtObjectPtr(PyObject* obj, void* /* PythonQtObjectPtr* */ outPtr, int /*metaTypeId*/, bool /*strict*/);
  static PyObject* convertFromPythonQtObjectPtr(const void* /* PythonQtObjectPtr* */ inObject, int /*metaTypeId*/);
  static bool      convertToPythonQtSafeObjectPtr(PyObject* obj, void* /* PythonQtObjectPtr* */ outPtr, int /*metaTypeId*/, bool /*strict*/);
  static PyObject* convertFromPythonQtSafeObjectPtr(const void* /* PythonQtObjectPtr* */ inObject, int /*metaTypeId*/);
  static bool      convertToQListOfPythonQtObjectPtr(PyObject* obj, void* /* QList<PythonQtObjectPtr>* */ outList, int /*metaTypeId*/, bool /*strict*/);
  static PyObject* convertFromQListOfPythonQtObjectPtr(const void* /* QList<PythonQtObjectPtr>* */ inObject, int /*metaTypeId*/);
  static PyObject* convertFromStringRef(const void* inObject, int /*metaTypeId*/);

  //! Returns the name of the equivalent CPP type (for signals and slots)
  static QByteArray getCPPTypeName(PyObject* type);

  //! Returns if the given object is a string (or unicode string)
  static bool isStringType(PyTypeObject* type);

protected:
  static QHash<int, PythonQtConvertMetaTypeToPythonCB*> _metaTypeToPythonConverters; 
  static QHash<int, PythonQtConvertPythonToMetaTypeCB*> _pythonToMetaTypeConverters; 
  static PythonQtConvertPythonSequenceToQVariantListCB*  _pythonSequenceToQVariantListCB;
 
  //! handle automatic conversion of some special types (QColor, QBrush, ...)
  static void* handlePythonToQtAutoConversion(int typeId, PyObject* obj, void* alreadyAllocatedCPPObject, PythonQtArgumentFrame* frame);

  //! converts the list of pointers of given type to Python
  static PyObject* ConvertQListOfPointerTypeToPythonList(QList<void*>* list, const PythonQtMethodInfo::ParameterInfo& info);
  //! tries to convert the python object to a QList of pointers to \c type objects, returns true on success
  static bool      ConvertPythonListToQListOfPointerType(PyObject* obj, QList<void*>* list, const PythonQtMethodInfo::ParameterInfo& info, bool strict);

  //! helper template method for conversion from Python to QVariantMap/Hash
  template <typename Map>
  static void pythonToMapVariant(PyObject* val, QVariant& result);
  //! helper template function for QVariantMapToPyObject/QVariantHashToPyObject
  template <typename Map>
  static PyObject* mapToPython (const Map& m);
  
};

template<class ListType, class T>
PyObject* PythonQtConvertListOfValueTypeToPythonList(const void* /*QList<T>* */ inList, int metaTypeId)
{
  ListType* list = (ListType*)inList; 
  static const int innerType = PythonQtMethodInfo::getInnerTemplateMetaType(QByteArray(QMetaType::typeName(metaTypeId)));
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertListOfValueTypeToPythonList: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  PyObject* result = PyTuple_New(list->size());
  int i = 0;
  Q_FOREACH (const T& value, *list) {
    PyTuple_SET_ITEM(result, i, PythonQtConv::convertQtValueToPythonInternal(innerType, &value));
    i++;
  }
  return result;
}

template<class ListType, class T>
bool PythonQtConvertPythonListToListOfValueType(PyObject* obj, void* /*QList<T>* */ outList, int metaTypeId, bool /*strict*/)
{
  ListType* list = (ListType*)outList; 
  static const int innerType = PythonQtMethodInfo::getInnerTemplateMetaType(QByteArray(QMetaType::typeName(metaTypeId)));
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertPythonListToListOfValueType: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  bool result = false;
  if (PySequence_Check(obj)) {
    int count = PySequence_Size(obj);
    if (count >= 0) {
      result = true;
      PyObject* value;
      for (int i = 0;i<count;i++) {
        value = PySequence_GetItem(obj,i);
        // this is quite some overhead, but it avoids having another large switch...
        QVariant v = PythonQtConv::PyObjToQVariant(value, innerType);
        Py_XDECREF(value);
        if (v.isValid()) {
          list->push_back(qvariant_cast<T>(v));
        } else {
          result = false;
          break;
        }
      }
    }
  }
  return result;
}

//--------------------------------------------------------------------------------------------------------------------

template<class ListType, class T>
PyObject* PythonQtConvertListOfKnownClassToPythonList(const void* /*QList<T>* */ inList, int metaTypeId)
{
  ListType* list = (ListType*)inList;
  static PythonQtClassInfo* innerType = PythonQt::priv()->getClassInfo(PythonQtMethodInfo::getInnerListTypeName(QByteArray(QMetaType::typeName(metaTypeId))));
  if (innerType == NULL) {
    std::cerr << "PythonQtConvertListOfKnownClassToPythonList: unknown inner type " << innerType->className().constData() << std::endl;
  }
  PyObject* result = PyTuple_New(list->size());
  int i = 0;
  Q_FOREACH(const T& value, *list) {
    T* newObject = new T(value);
    PythonQtInstanceWrapper* wrap = (PythonQtInstanceWrapper*)PythonQt::priv()->wrapPtr(newObject, innerType->className());
    wrap->_ownedByPythonQt = true;
    PyTuple_SET_ITEM(result, i, (PyObject*)wrap);
    i++;
  }
  return result;
}

template<class ListType, class T>
bool PythonQtConvertPythonListToListOfKnownClass(PyObject* obj, void* /*QList<T>* */ outList, int metaTypeId, bool /*strict*/)
{
  ListType* list = (ListType*)outList;
  static PythonQtClassInfo* innerType = PythonQt::priv()->getClassInfo(PythonQtMethodInfo::getInnerListTypeName(QByteArray(QMetaType::typeName(metaTypeId))));
  if (innerType == NULL) {
    std::cerr << "PythonQtConvertListOfKnownClassToPythonList: unknown inner type " << innerType->className().constData() << std::endl;
  }
  bool result = false;
  if (PySequence_Check(obj)) {
    int count = PySequence_Size(obj);
    if (count >= 0) {
      result = true;
      PyObject* value;
      for (int i = 0; i < count; i++) {
        value = PySequence_GetItem(obj, i);
        if (PyObject_TypeCheck(value, &PythonQtInstanceWrapper_Type)) {
          PythonQtInstanceWrapper* wrap = (PythonQtInstanceWrapper*)value;
          bool ok;
          T* object = (T*)PythonQtConv::castWrapperTo(wrap, innerType->className(), ok);
          Py_XDECREF(value);
          if (ok) {
            list->push_back(*object);
          } else {
            result = false;
            break;
          }
        } else {
          Py_XDECREF(value);
          result = false;
          break;
        }
      }
    }
  }
  return result;
}

//--------------------------------------------------------------------------------------------------------------------

template<class T1, class T2>
PyObject* PythonQtConvertPairToPython(const void* /*QPair<T1,T2>* */ inPair, int metaTypeId)
{
  QPair<T1, T2>* pair = (QPair<T1, T2>*)inPair;
  static int innerType1 = -1;
  static int innerType2 = -1;
  if (innerType1==-1) {
    QByteArray innerTypes = PythonQtMethodInfo::getInnerTemplateTypeName(QByteArray(QMetaType::typeName(metaTypeId)));
    QList<QByteArray> names = innerTypes.split(',');
    innerType1 = QMetaType::type(names.at(0).trimmed());
    innerType2 = QMetaType::type(names.at(1).trimmed());
  }
  if (innerType1 == QVariant::Invalid || innerType2 == QVariant::Invalid) {
    std::cerr << "PythonQtConvertPairToPython: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  PyObject* result = PyTuple_New(2);
  PyTuple_SET_ITEM(result, 0, PythonQtConv::convertQtValueToPythonInternal(innerType1, &pair->first));
  PyTuple_SET_ITEM(result, 1, PythonQtConv::convertQtValueToPythonInternal(innerType2, &pair->second));
  return result;
}

template<class T1, class T2>
bool PythonQtConvertPythonToPair(PyObject* obj, void* /*QPair<T1,T2>* */ outPair, int metaTypeId, bool /*strict*/)
{
  QPair<T1, T2>* pair = (QPair<T1, T2>*)outPair;
  static int innerType1 = -1;
  static int innerType2 = -1;
  if (innerType1 == -1) {
    QByteArray innerTypes = PythonQtMethodInfo::getInnerTemplateTypeName(QByteArray(QMetaType::typeName(metaTypeId)));
    QList<QByteArray> names = innerTypes.split(',');
    innerType1 = QMetaType::type(names.at(0).trimmed());
    innerType2 = QMetaType::type(names.at(1).trimmed());
  }
  if (innerType1 == QVariant::Invalid || innerType2 == QVariant::Invalid) {
    std::cerr << "PythonQtConvertPythonToPair: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  bool result = false;
  if (PySequence_Check(obj)) {
    int count = PySequence_Size(obj);
    if (count == 2) {
      result = true;
      PyObject* value;

      value = PySequence_GetItem(obj, 0);
      // this is quite some overhead, but it avoids having another large switch...
      QVariant v = PythonQtConv::PyObjToQVariant(value, innerType1);
      Py_XDECREF(value);
      if (v.isValid()) {
        pair->first = qvariant_cast<T1>(v);
      } else {
        return false;
      }

      value = PySequence_GetItem(obj, 1);
      // this is quite some overhead, but it avoids having another large switch...
      v = PythonQtConv::PyObjToQVariant(value, innerType2);
      Py_XDECREF(value);
      if (v.isValid()) {
        pair->second = qvariant_cast<T2>(v);
      } else {
        return false;
      }
    }
  }
  return result;
}

//--------------------------------------------------------------------------------------------------------------------

template<class ListType, class T1, class T2>
PyObject* PythonQtConvertListOfPairToPythonList(const void* /*QList<QPair<T1,T2> >* */ inList, int metaTypeId)
{
  ListType* list = (ListType*)inList;
  static int innerType = PythonQtMethodInfo::getInnerTemplateMetaType(QByteArray(QMetaType::typeName(metaTypeId)));
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertListOfPairToPythonList: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  PyObject* result = PyTuple_New(list->size());
  int i = 0;
  typedef const QPair<T1, T2> Pair;
  Q_FOREACH(Pair& value, *list) {
    PyObject* object = PythonQtConvertPairToPython<T1, T2>(&value, innerType);
    PyTuple_SET_ITEM(result, i, object);
    i++;
  }
  return result;
}

template<class ListType, class T1, class T2>
bool PythonQtConvertPythonListToListOfPair(PyObject* obj, void* /*QList<QPair<T1,T2> >* */ outList, int metaTypeId, bool /*strict*/)
{
  ListType* list = (ListType*)outList;
  static int innerType = PythonQtMethodInfo::getInnerTemplateMetaType(QByteArray(QMetaType::typeName(metaTypeId)));
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertPythonListToListOfPair: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  bool result = false;
  if (PySequence_Check(obj)) {
    int count = PySequence_Size(obj);
    if (count >= 0) {
      result = true;
      PyObject* value;
      for (int i = 0; i < count; i++) {
        QPair<T1, T2> pair;
        value = PySequence_GetItem(obj, i);
        if (PythonQtConvertPythonToPair<T1,T2>(value, &pair, innerType, false)) {
          Py_XDECREF(value);
          list->push_back(pair);
        } else {
          Py_XDECREF(value);
          result = false;
          break;
        }
      }
    }
  }
  return result;
}

//--------------------------------------------------------------------------------------------------------------------

template<class MapType, class T>
PyObject* PythonQtConvertIntegerMapToPython(const void* /*QMap<int, T>* */ inMap, int metaTypeId)
{
  MapType* map = (MapType*)inMap;
  static int innerType = -1;
  if (innerType == -1) {
    QByteArray innerTypes = PythonQtMethodInfo::getInnerTemplateTypeName(QByteArray(QMetaType::typeName(metaTypeId)));
    QList<QByteArray> names = innerTypes.split(',');
    innerType = QMetaType::type(names.at(1).trimmed());
  }
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertIntegerMapToPython: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }

  PyObject* result = PyDict_New();
  typename MapType::const_iterator t = map->constBegin();
  PyObject* key;
  PyObject* val;
  for (; t != map->constEnd(); t++) {
    key = PyInt_FromLong(t.key());
    val = PythonQtConv::convertQtValueToPythonInternal(innerType, &t.value());
    PyDict_SetItem(result, key, val);
    Py_DECREF(key);
    Py_DECREF(val);
  }
  return result;
}

template<class MapType, class T>
bool PythonQtConvertPythonToIntegerMap(PyObject* val, void* /*QMap<int, T>* */ outMap, int metaTypeId, bool /*strict*/)
{
  MapType* map = (MapType*)outMap;
  static int innerType = -1;
  if (innerType == -1) {
    QByteArray innerTypes = PythonQtMethodInfo::getInnerTemplateTypeName(QByteArray(QMetaType::typeName(metaTypeId)));
    QList<QByteArray> names = innerTypes.split(',');
    innerType = QMetaType::type(names.at(1).trimmed());
  }
  if (innerType == QVariant::Invalid) {
    std::cerr << "PythonQtConvertPythonToIntegerMap: unknown inner type " << QMetaType::typeName(metaTypeId) << std::endl;
  }
  bool result = false;
  if (PyMapping_Check(val)) {
    result = true;
    PyObject* items = PyMapping_Items(val);
    if (items) {
      int count = PyList_Size(items);
      PyObject* value;
      PyObject* key;
      PyObject* tuple;
      for (int i = 0; i < count; i++) {
        tuple = PyList_GetItem(items, i);
        key = PyTuple_GetItem(tuple, 0);
        value = PyTuple_GetItem(tuple, 1);
        
        bool ok;
        int intKey = PythonQtConv::PyObjGetInt(key, false, ok);
        // this is quite some overhead, but it avoids having another large switch...
        QVariant v = PythonQtConv::PyObjToQVariant(value, innerType);
        if (v.isValid() && ok) {
          map->insert(intKey, qvariant_cast<T>(v));
        } else {
          result = false;
          break;
        }
      }
      Py_DECREF(items);
    }
  }
  return result;
}


#endif
