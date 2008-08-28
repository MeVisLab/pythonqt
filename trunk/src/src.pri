DEFINES +=  PYTHONQT_EXPORTS

HEADERS +=                    \
  $$PWD/PythonQt.h                  \
  $$PWD/PythonQtStdDecorators.h     \
  $$PWD/PythonQtClassInfo.h         \
  $$PWD/PythonQtImporter.h          \
  $$PWD/PythonQtObjectPtr.h         \
  $$PWD/PythonQtSlot.h              \
  $$PWD/PythonQtStdOut.h            \
  $$PWD/PythonQtMisc.h              \
  $$PWD/PythonQtMethodInfo.h        \
  $$PWD/PythonQtImportFileInterface.h \
  $$PWD/PythonQtConversion.h        \
  $$PWD/PythonQtSignalReceiver.h    \
  $$PWD/PythonQtWrapper.h           \
  $$PWD/PythonQtMetaObjectWrapper.h \
  $$PWD/PythonQtCppWrapperFactory.h \
  $$PWD/PythonQtVariants.h          \
  $$PWD/PythonQtVariantWrapper.h    \
  $$PWD/wrapper/PythonQtWrappedVariants.h    \
  $$PWD/gui/PythonQtScriptingConsole.h    \
  $$PWD/PythonQtSystem.h
  
SOURCES +=                    \
  $$PWD/PythonQtStdDecorators.cpp   \
  $$PWD/PythonQt.cpp                \
  $$PWD/PythonQtClassInfo.cpp       \
  $$PWD/PythonQtImporter.cpp        \
  $$PWD/PythonQtObjectPtr.cpp       \
  $$PWD/PythonQtStdOut.cpp          \
  $$PWD/PythonQtSlot.cpp            \
  $$PWD/PythonQtMisc.cpp            \
  $$PWD/PythonQtMethodInfo.cpp      \
  $$PWD/PythonQtConversion.cpp      \
  $$PWD/PythonQtSignalReceiver.cpp  \
  $$PWD/PythonQtVariants.cpp        \
  $$PWD/PythonQtVariantWrapper.cpp \
  $$PWD/PythonQtWrapper.cpp         \
  $$PWD/PythonQtMetaObjectWrapper.cpp \
  $$PWD/gui/PythonQtScriptingConsole.cpp

