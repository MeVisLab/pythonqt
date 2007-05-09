# --------- PythonQtGui profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQtGui
TEMPLATE = lib

# ---------------------------------------------------------------
# special case when PythonQt is built in the MeVis build system:
# ---------------------------------------------------------------
DESTDIR    = $(MEVIS_LIB)/lib
DLLDESTDIR = $(MEVIS_LIB)/MLabModules/std/misc

MEVIS_LIB_EXPANDED = $$(MEVIS_LIB)
!isEmpty(MEVIS_LIB_EXPANDED) {

  # add used packages here
  CONFIG += dll python qt PythonQt

  # DONT REMOVE THE FOLLOWING LINE:
  include( $(MEVIS_LIB)/make/mevisPackages.pro )

  CONFIG += qt

} else {
# ---------------------------------------------------------------
# standard case for external users
# ---------------------------------------------------------------
  
  include ( build/PythonQt.prf )  
  include ( build/python.prf )  
  include ( build/external.prf )  
}

CONFIG += uitools

DEFINES +=  PYTHONQTGUI_EXPORTS

HEADERS +=                    \
  PythonQtGui.h           \
  PythonQtGuiSystem.h     \
  
SOURCES +=                    \
  PythonQtGui.cpp

