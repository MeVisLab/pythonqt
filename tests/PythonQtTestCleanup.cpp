#include "PythonQtTestCleanup.h"
#include "PythonQt.h"
#include "PythonQt_QtAll.h"

void PythonQtTestCleanup::initTestCase()
{
}

void PythonQtTestCleanup::cleanupTestCase()
{
}

void PythonQtTestCleanup::init()
{
  // Initialize before each test

  PythonQt::init(PythonQt::IgnoreSiteModule);
  PythonQt_QtAll::init();

  _helper = new PythonQtTestCleanupHelper();
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PythonQt::self()->addObject(main, "obj", _helper);
}

void PythonQtTestCleanup::cleanup()
{
  // Finalize and cleanup after each test

  PythonQtObjectPtr main = PythonQt::self()->getMainModule();
  PythonQt::self()->removeVariable(main, "obj");
  delete _helper;
  _helper = nullptr;

  if (Py_IsInitialized()) {
    Py_Finalize();
  }

  PythonQt::cleanup();
}

void PythonQtTestCleanup::testQtEnum()
{
  QVERIFY(_helper->runScript(
    "import PythonQt.QtCore\n" \
    "x = PythonQt.QtCore.QFile.ReadOnly\n" \
    "obj.setPassed()"
    ));
}

void PythonQtTestCleanup::testCallQtMethodInDel()
{
  QVERIFY(_helper->runScript(
    "import PythonQt.QtCore\n" \
    "class TimerWrapper(object):\n" \
    "  def __init__(self):\n" \
    "    self.timer = PythonQt.QtCore.QTimer()\n" \
    "  def __del__(self):\n" \
    "    self.timer.setSingleShot(True)\n" \
    "x = TimerWrapper()\n" \
    "obj.setPassed()\n"
    ));
}

bool PythonQtTestCleanupHelper::runScript(const char* script)
{
  _passed = false;
  PyRun_SimpleString(script);
  return _passed;
}
