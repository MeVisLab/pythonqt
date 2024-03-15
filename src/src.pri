DEFINES +=  PYTHONQT_EXPORTS

INCLUDEPATH += $$PWD

CONFIG += c++11

gcc:!no_warn:!clang:QMAKE_CXXFLAGS += -Wno-error=missing-field-initializers
*-clang*:!no_warn:QMAKE_CXXFLAGS += -Wno-error=sometimes-uninitialized

# This was needed to work around "number of sections exceeded object file format limit" linker error
win32-msvc*:QMAKE_CXXFLAGS += /bigobj
!ltcg:win32-g++: QMAKE_CXXFLAGS += -Wa,-mbig-obj

# Force linker to complain on undefined references for dll/so/dylib build when possible
QMAKE_LFLAGS_SHLIB += $$QMAKE_LFLAGS_NOUNDEF

HEADERS +=                    \
  $$PWD/PythonQt.h                  \
  $$PWD/PythonQtStdDecorators.h     \
  $$PWD/PythonQtClassInfo.h         \
  $$PWD/PythonQtImporter.h          \
  $$PWD/PythonQtObjectPtr.h         \
  $$PWD/PythonQtProperty.h          \
  $$PWD/PythonQtSignal.h            \
  $$PWD/PythonQtSlot.h              \
  $$PWD/PythonQtSlotDecorator.h     \
  $$PWD/PythonQtStdIn.h             \
  $$PWD/PythonQtStdOut.h            \
  $$PWD/PythonQtMisc.h              \
  $$PWD/PythonQtMethodInfo.h        \
  $$PWD/PythonQtImportFileInterface.h \
  $$PWD/PythonQtConversion.h        \
  $$PWD/PythonQtSignalReceiver.h    \
  $$PWD/PythonQtInstanceWrapper.h   \
  $$PWD/PythonQtClassWrapper.h \
  $$PWD/PythonQtCppWrapperFactory.h \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/PythonQtQFileImporter.h     \
  $$PWD/PythonQtVariants.h          \
  $$PWD/gui/PythonQtScriptingConsole.h    \
  $$PWD/PythonQtSystem.h \
  $$PWD/PythonQtUtils.h \
  $$PWD/PythonQtBoolResult.h \
  $$PWD/PythonQtThreadSupport.h \
  
SOURCES +=                    \
  $$PWD/PythonQtStdDecorators.cpp   \
  $$PWD/PythonQt.cpp                \
  $$PWD/PythonQtClassInfo.cpp       \
  $$PWD/PythonQtImporter.cpp        \
  $$PWD/PythonQtObjectPtr.cpp       \
  $$PWD/PythonQtProperty.cpp        \
  $$PWD/PythonQtStdIn.cpp           \
  $$PWD/PythonQtStdOut.cpp          \
  $$PWD/PythonQtSignal.cpp          \
  $$PWD/PythonQtSlot.cpp            \
  $$PWD/PythonQtSlotDecorator.cpp   \
  $$PWD/PythonQtMisc.cpp            \
  $$PWD/PythonQtMethodInfo.cpp      \
  $$PWD/PythonQtConversion.cpp      \
  $$PWD/PythonQtSignalReceiver.cpp  \
  $$PWD/PythonQtInstanceWrapper.cpp \
  $$PWD/PythonQtQFileImporter.cpp   \
  $$PWD/PythonQtClassWrapper.cpp    \
  $$PWD/PythonQtBoolResult.cpp      \
  $$PWD/gui/PythonQtScriptingConsole.cpp \
  $$PWD/PythonQtThreadSupport.cpp \



