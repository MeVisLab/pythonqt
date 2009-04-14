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
// \file    PythonQtTests.cpp
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtTests.h"

void PythonQtTestSlotCalling::initTestCase()
{
  _helper = new PythonQtTestSlotCallingHelper(this);
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PythonQt::self()->addObject(main, "obj", _helper);
}

void PythonQtTestSlotCalling::init() {

}

void PythonQtTestSlotCalling::testNoArgSlotCall()
{
  QVERIFY(_helper->runScript("obj.testNoArg(); obj.setPassed();\n"));
}

void PythonQtTestSlotCalling::testOverloadedCall()
{
  QVERIFY(_helper->runScript("obj.overload(False); obj.setPassed();\n", 0));
  QVERIFY(_helper->runScript("obj.overload(True); obj.setPassed();\n", 0));
  QVERIFY(_helper->runScript("obj.overload(12.5); obj.setPassed();\n", 1));
  QVERIFY(_helper->runScript("obj.overload(12); obj.setPassed();\n", 2));
  QVERIFY(_helper->runScript("obj.overload('test'); obj.setPassed();\n", 3));
  QVERIFY(_helper->runScript("obj.overload(u'test'); obj.setPassed();\n", 3));
  QVERIFY(_helper->runScript("obj.overload(('test','test2')); obj.setPassed();\n", 4));
  QVERIFY(_helper->runScript("obj.overload(obj); obj.setPassed();\n", 5));
  QVERIFY(_helper->runScript("obj.overload(12,13); obj.setPassed();\n", 6));
}

void PythonQtTestSlotCalling::testPODSlotCalls()
{
  QVERIFY(_helper->runScript("if obj.getBool(False)==False: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getBool(True)==True: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getInt(-42)==-42: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getUInt(42)==42: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getShort(-43)==-43: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getUShort(43)==43: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getChar(-12)==-12: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getUChar(12)==12: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getLong(-256*256*256)==-256*256*256: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getULong(256*256*256)==256*256*256: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getLongLong(-42)==-42: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getULongLong(42)==42: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQChar(4096)==4096: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getDouble(47.12)==47.12: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if abs(obj.getFloat(47.11)-47.11)<0.01: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQString('testStr')=='testStr': obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQString('')=='': obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQStringList(('test','test2'))==('test','test2'): obj.setPassed();\n"));
}

void PythonQtTestSlotCalling::testQVariantSlotCalls()
{
  QVERIFY(_helper->runScript("if obj.getQVariant(-42)==-42: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQVariant('testStr')=='testStr': obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQVariant(('test','test2'))==('test','test2'): obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQVariant(('test',12, 47.11))==('test',12, 47.11): obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQVariant({'test':'bla','test2':47.11})=={'test':'bla','test2':47.11}: obj.setPassed();\n"));
  QEXPECT_FAIL("", "Testing to pass a map and compare with a different map", Continue);
  QVERIFY(_helper->runScript("if obj.getQVariant({'test':'bla2','test2':47.11})=={'test':'bla','test2':47.11}: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getQVariant(obj)==obj: obj.setPassed();\n"));
}

void PythonQtTestSlotCalling::testObjectSlotCalls()
{
  QVERIFY(_helper->runScript("if obj.getQObject(obj)==obj: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getTestObject(obj)==obj: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.getNewObject().className()=='PythonQtTestSlotCallingHelper': obj.setPassed();\n"));
  QEXPECT_FAIL("", "Testing to pass a QObject when another object was expected", Continue);
  QVERIFY(_helper->runScript("if obj.getQWidget(obj)==obj: obj.setPassed();\n"));
}

void PythonQtTestSlotCalling::testCppFactory()
{
  PythonQtTestCppFactory* f = new PythonQtTestCppFactory;
  PythonQt::self()->addInstanceDecorators(new PQCppObjectDecorator);
  PythonQt::self()->addInstanceDecorators(new PQCppObjectNoWrapDecorator);

  PythonQt::self()->addWrapperFactory(f);
  QVERIFY(_helper->runScript("if obj.createPQCppObject(12).getHeight()==12: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("if obj.createPQCppObject(12).getH()==12: obj.setPassed();\n"));
  QVERIFY(_helper->runScript("pq1 = obj.createPQCppObject(12);\n"
    "pq2 = obj.createPQCppObject(13);\n"
    "pq3 = obj.getPQCppObject(pq1);\n"
    "pq4 = obj.getPQCppObject(pq2);\n"
    "if pq3.getHeight()==12 and pq4.getHeight()==13: obj.setPassed();\n"
    ));

  QVERIFY(_helper->runScript("if obj.createPQCppObjectNoWrap(12).getH()==12: obj.setPassed();\n"));
}


void PythonQtTestSlotCalling::testMultiArgsSlotCall()
{
  QVERIFY(_helper->runScript("if obj.getMultiArgs(12,47.11,'test')==(12,47.11,'test'): obj.setPassed();\n"));
}

bool PythonQtTestSlotCallingHelper::runScript(const char* script, int expectedOverload)
{
  _called = false;
  _passed = false;
  _calledOverload = -1;
  PyRun_SimpleString(script);
  return _called && _passed && _calledOverload==expectedOverload;
}


void PythonQtTestSignalHandler::initTestCase()
{
  _helper = new PythonQtTestSignalHandlerHelper(this);
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PythonQt::self()->addObject(main, "obj", _helper);
}

void PythonQtTestSignalHandler::testSignalHandler()
{
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PyRun_SimpleString("def testIntSignal(a):\n  if a==12: obj.setPassed();\n");
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(intSignal(int)), main, "testIntSignal"));
  QVERIFY(_helper->emitIntSignal(12));

  PyRun_SimpleString("def testFloatSignal(a):\n  if a==12: obj.setPassed();\n");
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(floatSignal(float)), main, "testFloatSignal"));
  QVERIFY(_helper->emitFloatSignal(12));

  PyRun_SimpleString("def testVariantSignal(a):\n  if a==obj.expectedVariant(): obj.setPassed();\n");
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(variantSignal(QVariant)), main, "testVariantSignal"));
  _helper->setExpectedVariant(QString("Test"));
  QVERIFY(_helper->emitVariantSignal(QString("Test")));
  _helper->setExpectedVariant(12);
  QVERIFY(_helper->emitVariantSignal(12));
  _helper->setExpectedVariant(QStringList() << "test1" << "test2");
  QVERIFY(_helper->emitVariantSignal(QStringList() << "test1" << "test2"));
  _helper->setExpectedVariant(qVariantFromValue((QObject*)_helper));
  QVERIFY(_helper->emitVariantSignal(qVariantFromValue((QObject*)_helper)));

  PyRun_SimpleString("def testComplexSignal(a,b,l,o):\n  if a==12 and b==13 and l==('test1','test2') and o == obj: obj.setPassed();\n");
  // intentionally not normalized signal:
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(complexSignal( int, float , const QStringList  , QObject*)), main, "testComplexSignal"));
  QVERIFY(_helper->emitComplexSignal(12,13,QStringList() << "test1" << "test2", _helper));

  // try removing the handler
  QVERIFY(PythonQt::self()->removeSignalHandler(_helper, SIGNAL(complexSignal( int, float , const QStringList  , QObject*)), main, "testComplexSignal"));
  // and emit the signal, which should fail because the handler was removed
  QVERIFY(!_helper->emitComplexSignal(12,13,QStringList() << "test1" << "test2", _helper));

  QVERIFY(PythonQt::self()->removeSignalHandler(_helper, SIGNAL(intSignal(int)), main, "testIntSignal"));
  QVERIFY(PythonQt::self()->removeSignalHandler(_helper, SIGNAL(floatSignal(float)), main, "testFloatSignal"));
  QVERIFY(PythonQt::self()->removeSignalHandler(_helper, SIGNAL(variantSignal(QVariant)), main, "testVariantSignal"));

}

void PythonQtTestSignalHandler::testRecursiveSignalHandler()
{
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PyRun_SimpleString("def testSignal1(a):\n  obj.emitSignal2(a);\n");
  PyRun_SimpleString("def testSignal2(a):\n  obj.emitSignal3(float(a));\n");
  PyRun_SimpleString("def testSignal3(a):\n  if a==12: obj.setPassed();\n");
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(signal1(int)), main, "testSignal1"));
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(signal2(const QString&)), main, "testSignal2"));
  QVERIFY(PythonQt::self()->addSignalHandler(_helper, SIGNAL(signal3(float)), main, "testSignal3"));
  QVERIFY(_helper->emitSignal1(12));
}


void PythonQtTestApi::initTestCase()
{
  _helper = new PythonQtTestApiHelper();
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PythonQt::self()->addObject(main, "obj", _helper);
}

bool PythonQtTestApiHelper::call(const QString& function, const QVariantList& args, const QVariant& expectedResult) {
  _passed = false;
  QVariant r = PythonQt::self()->call(PythonQt::self()->getMainModule(), function, args);
  return _passed && expectedResult==r;
}

void PythonQtTestApi::testCall()
{
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();

  QVERIFY(qVariantValue<QObject*>(PythonQt::self()->getVariable(main, "obj"))==_helper);

  PyRun_SimpleString("def testCallNoArgs():\n  obj.setPassed();\n");
  QVERIFY(_helper->call("testCallNoArgs", QVariantList(), QVariant()));

  PyRun_SimpleString("def testCall1(a):\n if a=='test': obj.setPassed();\n return 'test2';\n");
  QVERIFY(_helper->call("testCall1", QVariantList() << QVariant("test"), QVariant(QString("test2"))));

  PyRun_SimpleString("def testCall2(a, b):\n if a=='test' and b==obj: obj.setPassed();\n return obj;\n");
  QVariant r = PythonQt::self()->call(PythonQt::self()->getMainModule(), "testCall2", QVariantList() << QVariant("test") << qVariantFromValue((QObject*)_helper));
  QObject* p = qVariantValue<QObject*>(r);
  QVERIFY(p==_helper);
}

void PythonQtTestApi::testVariables()
{
  PythonQt::self()->addObject(PythonQt::self()->getMainModule(), "someObject", _helper);
  QVariant v = PythonQt::self()->getVariable(PythonQt::self()->getMainModule(), "someObject");
  QObject* p = qVariantValue<QObject*>(v);
  QVERIFY(p==_helper);
  // test for unset variable
  QVariant v2 = PythonQt::self()->getVariable(PythonQt::self()->getMainModule(), "someObject2");
  QVERIFY(v2==QVariant());

  PythonQt::self()->addVariable(PythonQt::self()->getMainModule(), "someValue", QStringList() << "test1" << "test2");
  QVariant v3 = PythonQt::self()->getVariable(PythonQt::self()->getMainModule(), "someValue");
  QVERIFY(v3 == QVariant(QStringList() << "test1" << "test2"));

  QStringList l = PythonQt::self()->introspection(PythonQt::self()->getMainModule(), QString::null, PythonQt::Variable);
  QSet<QString> s;
  // check that at least these three variables are set
  s << "obj" << "someObject" << "someValue";
  foreach (QString value, s) {
    QVERIFY(l.indexOf(value)!=-1);
  }

  // insert a second time!
  PythonQt::self()->addObject(PythonQt::self()->getMainModule(), "someObject", _helper);
  // and remove
  PythonQt::self()->removeVariable(PythonQt::self()->getMainModule(), "someObject");
  // we expect to find no variable
  QVariant v4 = PythonQt::self()->getVariable(PythonQt::self()->getMainModule(), "someObject");
  QVERIFY(v4==QVariant());
}

void PythonQtTestApi::testImporter()
{
  PythonQt::self()->setImporter(_helper);
  PythonQt::self()->overwriteSysPath(QStringList() << "c:\\test");
  PyRun_SimpleString("import bla\n");
}

QByteArray PythonQtTestApiHelper::readFileAsBytes(const QString& filename)
{
  QByteArray b;
  return b;
}

QByteArray PythonQtTestApiHelper::readSourceFile(const QString& filename, bool& ok)
{
  QByteArray b;
  ok = true;
  return b;
}

bool PythonQtTestApiHelper::exists(const QString& filename)
{
  return true;
}

QDateTime PythonQtTestApiHelper::lastModifiedDate(const QString& filename) {
  return QDateTime::currentDateTime();
}


void PythonQtTestApi::testRedirect()
{
  connect(PythonQt::self(), SIGNAL(pythonStdOut(const QString&)), _helper, SLOT(stdOut(const QString&)));
  connect(PythonQt::self(), SIGNAL(pythonStdErr(const QString&)), _helper, SLOT(stdErr(const QString&)));
  PyRun_SimpleString("print 'test'\n");
}

void PythonQtTestApiHelper::stdOut(const QString& s)
{
  qDebug() << s;
}

void PythonQtTestApiHelper::stdErr(const QString& s)
{
  qDebug() << s;
}

QObject* PythonQtTestCppFactory::create(const QByteArray& name, void *ptr)
{
  if (name == "PQCppObject") {
    return new PQCppObjectWrapper(ptr);
  }
  return NULL;
}
