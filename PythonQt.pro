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

HEADERS +=                    \
  src/PythonQt.h                  \
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
  src/PythonQtCppWrapperFactory.h \
  src/PythonQtVariants.h          \
  src/PythonQtSystem.h
  
SOURCES +=                    \
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
  src/PythonQtWrapper.cpp         

