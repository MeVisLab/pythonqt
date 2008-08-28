# --------- PythonQt profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQt
TEMPLATE = lib

# ---------------------------------------------------------------
# special case when PythonQt is built in the MeVis build system:
# ---------------------------------------------------------------
DESTDIR    = $(MEVIS_LIB)/lib
DLLDESTDIR = $(MEVIS_LIB)/MLabModules/std/misc

MEVIS_LIB_EXPANDED = $$(MEVIS_LIB)
!isEmpty(MEVIS_LIB_EXPANDED) {

  # add used packages here
  CONFIG += dll python qt

  # DONT REMOVE THE FOLLOWING LINE:
  include( $(MEVIS_LIB)/make/mevisPackages.pro )

  CONFIG += qt

} else {
# ---------------------------------------------------------------
# standard case for external users
# ---------------------------------------------------------------
  
  include ( build/python.prf )  
  include ( build/external.prf )  
}

DEFINES +=  PYTHONQT_EXPORTS

INCLUDEPATH += src

HEADERS +=                    \
  src/PythonQt.h                  \
  src/PythonQtStdDecorators.h     \
  src/PythonQtClassInfo.h         \
  src/PythonQtImporter.h          \
  src/PythonQtObjectPtr.h         \
  src/PythonQtSlot.h              \
  src/PythonQtStdOut.h            \
  src/PythonQtMisc.h              \
  src/PythonQtMethodInfo.h        \
  src/PythonQtImportFileInterface.h \
  src/PythonQtConversion.h        \
  src/PythonQtSignalReceiver.h    \
  src/PythonQtWrapper.h           \
  src/PythonQtMetaObjectWrapper.h \
  src/PythonQtCppWrapperFactory.h \
  src/PythonQtVariants.h          \
  src/PythonQtVariantWrapper.h    \
  src/wrapper/PythonQtWrappedVariants.h    \
  src/gui/PythonQtScriptingConsole.h    \
  src/PythonQtSystem.h
  
SOURCES +=                    \
  src/PythonQtStdDecorators.cpp   \
  src/PythonQt.cpp                \
  src/PythonQtClassInfo.cpp       \
  src/PythonQtImporter.cpp        \
  src/PythonQtObjectPtr.cpp       \
  src/PythonQtStdOut.cpp          \
  src/PythonQtSlot.cpp            \
  src/PythonQtMisc.cpp            \
  src/PythonQtMethodInfo.cpp      \
  src/PythonQtConversion.cpp      \
  src/PythonQtSignalReceiver.cpp  \
  src/PythonQtVariants.cpp        \
  src/PythonQtVariantWrapper.cpp \
  src/PythonQtWrapper.cpp         \
  src/PythonQtMetaObjectWrapper.cpp \
  src/gui/PythonQtScriptingConsole.cpp

