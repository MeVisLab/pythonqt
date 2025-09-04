#ifndef _PYTHONQTTESTCLEANUP_H
#define _PYTHONQTTESTCLEANUP_H

#include <QtTest/QtTest>

class PythonQtTestCleanupHelper;

//! Test PythonQt cleanup and Python interpreter finalization
class PythonQtTestCleanup : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void initTestCase();
  void cleanupTestCase();
  void init();
  void cleanup();

  void testQtEnum();
  void testCallQtMethodInDel();

private:
  PythonQtTestCleanupHelper* _helper;
};

//! Test helper class
class PythonQtTestCleanupHelper : public QObject
{
  Q_OBJECT
public:
  PythonQtTestCleanupHelper() :
    _passed(false) {
  };

  bool runScript(const char* script);

public Q_SLOTS:
  void setPassed() { _passed = true; }

private:
  bool _passed;
};

#endif
