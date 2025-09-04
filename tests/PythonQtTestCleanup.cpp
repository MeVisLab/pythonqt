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

  if (Py_IsInitialized()) {
    Py_Finalize();
  }

  PythonQt::cleanup();

  delete _helper;
  _helper = nullptr;
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

void PythonQtTestCleanup::testSignalReceiverCleanup()
{
  PythonQtObjectPtr main = PythonQt::self()->getMainModule();

  // Test that PythonQtSignalReceiver is cleaned up properly,
  // i.e. PythonQt::cleanup() doesn't segfault
  main.evalScript(
    "import PythonQt.QtCore\n" \
    "timer = PythonQt.QtCore.QTimer(obj)\n" \
    "timer.connect('destroyed()', obj.onDestroyed)\n"
    );
}

bool PythonQtTestCleanupHelper::runScript(const char* script)
{
  _passed = false;
  PyRun_SimpleString(script);
  return _passed;
}
