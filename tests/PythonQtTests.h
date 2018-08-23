#ifndef _PYTHONQTTESTS_H
#define _PYTHONQTTESTS_H

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
// \file    PythonQtTests.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQt.h"
#include <QtTest/QtTest>
#include <QVariant>
#include "PythonQtImportFileInterface.h"
#include "PythonQtCppWrapperFactory.h"

#include <QPen>
#include <QColor>
#include <QBrush>
#include <QCursor>
//#include <QGLWidget>

class PythonQtTestSlotCallingHelper;
class PythonQtTestApiHelper;
class QWidget;

//! test the PythonQt api
class PythonQtTestApi : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void initTestCase();
  void testCall();
  void testVariables();
  void testRedirect();
  void testImporter();
  void testQColorDecorators();
  void testQtNamespace();
  void testConnects();

  void testProperties();
  void testDynamicProperties();
  
private:
  PythonQtTestApiHelper* _helper;
  PythonQtObjectPtr _main;

};

class ClassA {
public:
  ClassA() { x = 1; }
  int x;
};

class ClassB {
public:
  ClassB() { y = 2; }
  int y;

  virtual int type() { return 2; }
};

class ClassC : public ClassA, public ClassB {
public:
  ClassC() { z = 3; }
  int z;

  virtual int type() { return 3; }
};

class ClassD : public QObject, public ClassA, public ClassB {
  Q_OBJECT
public:
  ClassD() { d = 4; }
  public Q_SLOTS:
    int getD() { return d; }
private:
  int d;

  virtual int type() { return 4; }
};

class ClassAWrapper : public QObject {
  Q_OBJECT
public Q_SLOTS:
  ClassA* new_ClassA() { return new ClassA; }
  int getX(ClassA* o) { return o->x; }
};

class ClassBWrapper : public QObject {
  Q_OBJECT
public Q_SLOTS:
  ClassB* new_ClassB() { return new ClassB; }
  int getY(ClassB* o) { return o->y; }
};

class ClassCWrapper : public QObject {
  Q_OBJECT
public Q_SLOTS:
  ClassC* new_ClassC() { return new ClassC; }
  int getZ(ClassC* o) { return o->z; }
};

class ClassDWrapper : public QObject {
  Q_OBJECT
    public Q_SLOTS:
      ClassD* new_ClassD() { return new ClassD; }
};


//! test the PythonQt api (helper)
class PythonQtTestApiHelper : public QObject , public PythonQtImportFileInterface
{
  Q_OBJECT
public:
  PythonQtTestApiHelper() {
  };

  bool call(const QString& function, const QVariantList& args, const QVariant& expectedResult);

  virtual QByteArray readFileAsBytes(const QString& filename);

  virtual QByteArray readSourceFile(const QString& filename, bool& ok);

  virtual bool exists(const QString& filename);

  virtual QDateTime lastModifiedDate(const QString& filename);
  
  virtual bool isEggArchive(const QString& filename) { return false; }

public Q_SLOTS:

  //! call to set that the test has passed (from Python!)
  void setPassed() { _passed = true; }

  void stdOut(const QString&);
  void stdErr(const QString&);

private:
  bool _passed;
};


// test implementation of the wrapper factory
class PythonQtTestCppFactory : public PythonQtCppWrapperFactory 
{
public:
  virtual QObject* create(const QByteArray& name, void *ptr);
};

//! an cpp object to be wrapped
class PQCppObject {

public:
  PQCppObject(int h) { _height = h; }

  int getHeight() { return _height; }
  void setHeight(int h) { _height = h; }

private:
  int _height;
};

//! an qobject that wraps the existing cpp object
class PQCppObjectWrapper : public QObject {
  Q_OBJECT
public:
  PQCppObjectWrapper(void* ptr) {
    _ptr = (PQCppObject*)ptr;
  }

public Q_SLOTS:
  int  getHeight() { return _ptr->getHeight(); }
  void setHeight(int h) { _ptr->setHeight(h); }

private:
  PQCppObject* _ptr;
};

class PQCppObjectDecorator : public QObject {
  Q_OBJECT
public Q_SLOTS:
  int  getH(PQCppObject* obj) { return obj->getHeight(); }

};

//! an cpp object to be wrapped by decorators only
class PQCppObjectNoWrap {

public:
  PQCppObjectNoWrap() { _height = 0; }
  PQCppObjectNoWrap(int h) { _height = h; }

  int getHeight() { return _height; }
  void setHeight(int h) { _height = h; }

private:
  int _height;
};

class PQCppObjectNoWrapDecorator : public QObject {
  Q_OBJECT
  
public Q_SLOTS:
  PQCppObjectNoWrap* new_PQCppObjectNoWrap() {
    return new PQCppObjectNoWrap(0);
  }
  PQCppObjectNoWrap* new_PQCppObjectNoWrap(const PQCppObjectNoWrap& /*other*/) {
    return new PQCppObjectNoWrap(1);
  }
  PQCppObjectNoWrap* new_PQCppObjectNoWrap(double /*value*/) {
    return new PQCppObjectNoWrap(2);
  }

  int  getH(PQCppObjectNoWrap* obj) { return obj->getHeight(); }

};


//! an cpp object that is to be wrapped by decorators only
class PQCppObject2 {
  
public:
  enum TestEnumFlag {
    TestEnumValue1 = 0,
    TestEnumValue2 = 1
  };
  
  PQCppObject2() {}
  
};

class PQCppObject2Decorator : public QObject {
  Q_OBJECT
  
public:
  Q_ENUMS(TestEnumFlag)
  Q_FLAGS(TestEnum)
  
  enum TestEnumFlag {
    TestEnumValue1 = 0,
    TestEnumValue2 = 1
  };
  
  Q_DECLARE_FLAGS(TestEnum, TestEnumFlag)
  
  public Q_SLOTS:
  PQCppObject2* new_PQCppObject2() {
    return new PQCppObject2();
  }

  TestEnumFlag testEnumFlag1(PQCppObject2* obj, TestEnumFlag flag);

  PQCppObject2::TestEnumFlag testEnumFlag2(PQCppObject2* obj, PQCppObject2::TestEnumFlag flag);
    
  // with int overload
  TestEnumFlag testEnumFlag3(PQCppObject2* obj, int flag);
  TestEnumFlag testEnumFlag3(PQCppObject2* obj, TestEnumFlag flag);

};

class PQUnknownValueObject
{
public:
  PQUnknownValueObject() {};
};

class PQUnknownButRegisteredValueObject
{
public:
  PQUnknownButRegisteredValueObject() {};
};

//! test the calling of Q_SLOTS
class PythonQtTestSlotCalling : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void initTestCase();
  void init();

  void testNoArgSlotCall();
  void testPODSlotCalls();
  void testCPPSlotCalls();
  void testQVariantSlotCalls();
  void testQListSlotCalls();
  void testQMapSlotCalls();
  void testObjectSlotCalls();
  void testMultiArgsSlotCall();
  void testPyObjectSlotCall();
  void testOverloadedCall();
  void testKeywordCall();
  void testCppFactory();
  void testInheritance();
  void testAutoConversion();
  void testProperties();

private:
  PythonQtTestSlotCallingHelper* _helper;

};

//! helper class for slot calling test
class PythonQtTestSlotCallingHelper : public QObject
{
  Q_OBJECT
public:
  PythonQtTestSlotCallingHelper(PythonQtTestSlotCalling* test) {
    _test = test;
    _qObjectProp = NULL;
  };

  bool runScript(const char* script, int expectedOverload = -1);

  Q_PROPERTY(int intProp READ intProp WRITE setIntProp);
  Q_PROPERTY(float floatProp READ floatProp WRITE setFloatProp);
  Q_PROPERTY(QVariantList variantListProp READ variantListProp WRITE setVariantListProp);
  Q_PROPERTY(QVariantMap  variantMapProp READ variantMapProp WRITE setVariantMapProp);
  Q_PROPERTY(QVariant     variantProp READ variantProp WRITE setVariantProp);
  Q_PROPERTY(QObject*     qObjectProp READ qObjectProp WRITE setQObjectProp);
  Q_PROPERTY(QList<QObject*>  qObjectListProp READ qObjectListProp WRITE setQObjectListProp);

  Q_PROPERTY(QSize sizeProp READ sizeProp WRITE setSizeProp);

public:
  int intProp() const { _called = true; return _intProp; }
  void setIntProp(int value) { _called = true; _intProp = value; }
  float floatProp() const { _called = true; return _floatProp; }
  void setFloatProp(float value) { _called = true; _floatProp = value; }

  QVariantList variantListProp() const { _called = true; return _variantListProp; }
  void setVariantListProp(const QVariantList& value) { _called = true; _variantListProp = value; }

  QVariantMap variantMapProp() const { _called = true; return _variantMapProp; }
  void setVariantMapProp(const QVariantMap& value) { _called = true; _variantMapProp = value; }

  QVariant variantProp() const { _called = true; return _variantProp; }
  void setVariantProp(const QVariant& value) { _called = true; _variantProp = value; }

  QObject* qObjectProp() const { _called = true; return _qObjectProp; }
  void setQObjectProp(QObject* value) { _called = true; _qObjectProp = value; }

  QObjectList qObjectListProp() const { _called = true; return _qObjectListProp; }
  void setQObjectListProp(const QObjectList& value) { _called = true; _qObjectListProp = value; }

  QSize sizeProp() const { _called = true; return _sizeProp; }
  void setSizeProp(const QSize& value) { _called = true; _sizeProp = value; }

private:
  int   _intProp;
  float _floatProp;
  QVariantList _variantListProp;
  QVariantMap _variantMapProp;
  QVariant _variantProp;
  QObject* _qObjectProp;
  QObjectList _qObjectListProp;
  QSize _sizeProp;

public Q_SLOTS:

  //! call to set that the test has passed (from Python!)
  void setPassed() { _passed = true; }

  //! no arguments, no return value:
  void testNoArg() { _called = true; }

  //! overload test!
  void overload(bool /*a*/) { _calledOverload = 0; _called = true; }
  void overload(float /*a*/) { _calledOverload = 1; _called = true;}
  void overload(int /*a*/) { _calledOverload = 2; _called = true;}
  void overload(const QString& /*str*/) { _calledOverload = 3; _called = true;}
  void overload(const QStringList& /*str*/) { _calledOverload = 4; _called = true;}
  void overload(QObject* /*str*/) { _calledOverload = 5; _called = true;}
  void overload(float /*a*/, int /*b*/) { _calledOverload = 6; _called = true;}

  //!keyword argument tests
  int keywordInt(int i, const QVariantMap& kwargs = QVariantMap()) { _called = true; return (i + kwargs["value"].toInt()); }
  int keywordOnly(const QVariantMap& kwargs = QVariantMap()) { _called = true; return kwargs.count(); }

  //! POD values:
  int getInt(int a) {   _called = true; return a; }
  unsigned int getUInt(unsigned int a) { _called = true;  return a; }
  bool getBool(bool a) { _called = true;  return a; }
  char getChar(char a) { _called = true;  return a; }
  unsigned char getUChar(unsigned char a) { _called = true;  return a; }
  long getLong(long a) { _called = true;  return a; }
  unsigned long getULong(unsigned long a) { _called = true;  return a; }
  short getShort(short a) { _called = true;  return a; }
  unsigned short getUShort(unsigned short a) { _called = true;  return a; }
  QChar getQChar(QChar a) { _called = true;  return a; }
  qint64 getLongLong(qint64 a) { _called = true;  return a; }
  quint64 getULongLong(quint64 a) { _called = true;  return a; }
  double getDouble(double d) { _called = true;  return d; }
  float  getFloat(float d) { _called = true;  return d; }

  //! important qt types:
  QString getQString(const QString& s) { _called = true;  return s; }
  QStringList getQStringList(const QStringList& l) { _called = true;  return l; }
  QVariant getQVariant(const QVariant& var) { _called = true;  return var; }

  QList<int> getQListInt() { _called = true; return QList<int>() << 1 << 2 << 3; }
  QList<unsigned int> getQListUnsignedInt() { _called = true; return QList<unsigned int>() << 1 << 2 << 3; }
  QList<qreal> getQListqreal() { _called = true; return QList<qreal>() << 1.1 << 2.2 << 3.3; }
  QList<float> getQListfloat() { _called = true; return QList<float>() << 1 << 2 << 3; }
  QList<double> getQListdouble() { _called = true; return QList<double>() << 1.1 << 2.2 << 3.3; }
  QList<quint64> getQListquint64() { _called = true; return QList<quint64>() << 1 << 2 << 3; }
  QList<qint64> getQListqint64() { _called = true; return QList<qint64>() << 1 << 2 << 3; }
  //QList<GLuint64> getQListGLuint64() { _called = true; return QList<GLuint64>() << 1 << 2 << 3; }
  //QList<GLuint> getQListGLuint() { _called = true; return QList<GLuint>() << 1 << 2 << 3; }

  QList<QSize> getQListQSize() { _called = true; return QList<QSize>() << QSize(1,2) << QSize(3,4); }
  QList<QSize> getQListQSize(const QList<QSize>& list) { _called = true; return list; }

  QList<Qt::DayOfWeek> getQListDayOfWeek(const QList<Qt::DayOfWeek>& days) { _called = true; return days; }
  
  QMap<int, QVariant> getQMapIntVariant(const QMap<int, QVariant>& map) { _called = true; return map; }
  QMap<int, QString> getQMapIntString(const QMap<int, QString>& map) { _called = true; return map; }

  QVector<QPair<double, QColor >  > getQVectorQPair1(const QVector<QPair<double, QColor >  > &list) { _called = true; return list; }
  QVector<QPair<qreal, QColor >  > getQVectorQPair2(const QVector<QPair<qreal, QColor >  > &list) { _called = true; return list; }
  
  QPair<double, QColor> getQPair(const QPair<double, QColor>& pair) { _called = true; return pair; }

  QPair<double, QVariant> getQPairVariant(const QPair<double, QVariant>& pair) { _called = true; return pair; }

  // QColor as representative for C++ value classes
  QColor  getQColor1(const QColor& var) { _called = true;  return var; }
  QColor  getQColor2(QColor& var) { _called = true;  return var; }
  QColor  getQColor3(QColor* col) { _called = true;  return *col; }
  QColor  getQColor4(const QVariant& color) { _called = true;  return qvariant_cast<QColor>(color); }
  QColor* getQColor5() { _called = true; static QColor c(1,2,3); return &c; }

  PyObject* getPyObject(PyObject* obj) {
    _called = true;
    // returned object needs to get an extra ref count!
    Py_XINCREF(obj);
    return obj;
  }

  PyObject* getPyObjectFromVariant(const QVariant& val) {
    _called = true;
    PythonQtObjectPtr value = val;
    PyObject* obj = value.object();
    // returned object needs to get an extra ref count!
    Py_XINCREF(obj);
    return obj;
  }
  QVariant  getPyObjectFromVariant2(const QVariant& val) { _called = true; return val; }

  //! testing pointer passing
  PythonQtTestSlotCallingHelper* getTestObject(PythonQtTestSlotCallingHelper* obj) {  _called = true; return obj; }
  //! testing inheritance checking
  QObject* getQObject(QObject* obj) { _called = true; return obj; }
  QWidget* getQWidget(QWidget* obj) { _called = true; return obj; }
  //! testing if an object that was not wrapped is wrapped earlier is wrapped correctly
  QObject* getNewObject() { _called = true; return new PythonQtTestSlotCallingHelper(NULL); }

  QVariantList getMultiArgs(int a, double b, const QString& str) { _called = true; return (QVariantList() << a << b << str); }

  //! cpp wrapper factory test
  PQCppObject* createPQCppObject(int h) { _called = true; return new PQCppObject(h); }

  //! cpp wrapper factory test
  PQCppObject* getPQCppObject(PQCppObject* p) { _called = true; return p; }

  //! cpp wrapper factory test
  PQCppObjectNoWrap* createPQCppObjectNoWrap(int h) { _called = true; return new PQCppObjectNoWrap(h); }

  //! cpp wrapper factory test
  PQCppObjectNoWrap* getPQCppObjectNoWrap(PQCppObjectNoWrap* p) { _called = true; return p; }

  //! get a return by value PQCppObjectNoWrap
  PQCppObjectNoWrap getPQCppObjectNoWrapAsValue() { _called = true; return PQCppObjectNoWrap(47); }
  
  PQUnknownButRegisteredValueObject getUnknownButRegisteredValueObjectAsValue() { _called = true; return PQUnknownButRegisteredValueObject(); }
  PQUnknownValueObject              getUnknownValueObjectAsValue() { _called = true; return PQUnknownValueObject(); }

  PQUnknownButRegisteredValueObject* getUnknownButRegisteredValueObjectAsPtr() { _called = true; return new PQUnknownButRegisteredValueObject(); }
  PQUnknownValueObject*              getUnknownValueObjectAsPtr() { _called = true; return new PQUnknownValueObject(); }

  ClassA* getClassAPtr(ClassA* o) { _called = true; return o; }
  ClassB* getClassBPtr(ClassB* o) { _called = true; return o; }
  ClassC* getClassCPtr(ClassC* o) { _called = true; return o; }
  ClassD* getClassDPtr(ClassD* o) { _called = true; return o; }

  ClassA* createClassA() { _called = true; return new ClassA; }
  ClassB* createClassB() { _called = true; return new ClassB; }
  ClassC* createClassC() { _called = true; return new ClassC; }
  ClassD* createClassD() { _called = true; return new ClassD; }
  ClassA* createClassCAsA() { _called = true; return new ClassC; }
  ClassB* createClassCAsB() { _called = true; return new ClassC; }
  ClassA* createClassDAsA() { _called = true; return new ClassD; }
  ClassB* createClassDAsB() { _called = true; return new ClassD; }

  QColor  setAutoConvertColor(const QColor& color) { _called = true; return color; }
  QBrush  setAutoConvertBrush(const QBrush& brush) { _called = true; return brush; }
  QPen    setAutoConvertPen(const QPen& pen) { _called = true; return pen; }
  QCursor setAutoConvertCursor(const QCursor& cursor) { _called = true; return cursor; }
  
private:
  bool _passed;
  mutable bool _called;
  int  _calledOverload;
  PythonQtTestSlotCalling* _test;
};

class PythonQtTestSignalHandlerHelper;

//! test the connection of Q_SIGNALS to python
class PythonQtTestSignalHandler : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void initTestCase();

  void testSignalHandler();
  void testRecursiveSignalHandler();

private:
  PythonQtTestSignalHandlerHelper* _helper;

};

//! helper class for signal testing
class PythonQtTestSignalHandlerHelper : public QObject
{
  Q_OBJECT

public:
  PythonQtTestSignalHandlerHelper(PythonQtTestSignalHandler* test) {
    _test = test;
  }

public Q_SLOTS:
  void setPassed() { _passed = true; }

  bool emitIntSignal(int a) { _passed = false; emit intSignal(a); return _passed; }
  bool emitFloatSignal(float a) { _passed = false; emit floatSignal(a); return _passed; }
  bool emitEnumSignal(PQCppObject2::TestEnumFlag flag) { _passed = false; emit enumSignal(flag); return _passed; }

  bool emitVariantSignal(const QVariant& v) { _passed = false; emit variantSignal(v); return _passed; }
  QVariant expectedVariant() { return _v; }
  void setExpectedVariant(const QVariant& v) { _v = v; }

  bool emitComplexSignal(int a, float b, const QStringList& l, QObject* obj) { _passed = false; emit complexSignal(a,b,l,obj); return _passed; }

  bool emitSignal1(int a) { _passed = false; emit signal1(a); return _passed; }
  bool emitSignal2(const QString& s) { _passed = false; emit signal2(s); return _passed; }
  bool emitSignal3(float a) { _passed = false; emit signal3(a); return _passed; }

Q_SIGNALS:
  void intSignal(int);
  void floatSignal(float);
  void variantSignal(const QVariant& v);
  void complexSignal(int a, float b, const QStringList& l, QObject* obj);
  void enumSignal(PQCppObject2::TestEnumFlag flag);

  void signal1(int);
  void signal2(const QString&);
  void signal3(float);

private:
  bool _passed;
  QVariant _v;

  PythonQtTestSignalHandler* _test;
};

#endif
