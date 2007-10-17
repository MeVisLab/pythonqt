# --------- PythonQtTest profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------
TARGET   = PythonQtTest
TEMPLATE = app
# ---------------------------------------------------------------
# special case when PythonQt is built in the MeVis build system:
# ---------------------------------------------------------------
DESTDIR           = ../bin
DLLDESTDIR        = ../bin

macx:CONFIG -= app_bundle

MEVIS_LIB_EXPANDED = $$(MEVIS_LIB)
!isEmpty(MEVIS_LIB_EXPANDED) {
  # add used packages here
  CONFIG += python qt console qtestlib PythonQt
  
  # DONT REMOVE THE FOLLOWING LINE:
  include( $(MEVIS_LIB)/make/mevisPackages.pro )
  
  CONFIG += qt
} else {
# ---------------------------------------------------------------
# standard case for external users
# ---------------------------------------------------------------

  CONFIG += qtestlib

  include ( ../build/python.prf )
  include ( ../build/PythonQt.prf )
}


HEADERS +=                    \
  PythonQtTests.h

SOURCES +=                    \
  PythonQtTestMain.cpp        \
  PythonQtTests.cpp
