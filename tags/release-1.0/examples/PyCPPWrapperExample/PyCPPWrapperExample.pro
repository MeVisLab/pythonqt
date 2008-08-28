# --------- PyCPPWrapperExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyCPPWrapperExample
TEMPLATE = app

DESTDIR           = ../../bin

# ---------------------------------------------------------------
# special case when PythonQt is built in the MeVis build system:
# ---------------------------------------------------------------
MEVIS_LIB_EXPANDED = $$(MEVIS_LIB)
!isEmpty(MEVIS_LIB_EXPANDED) {

  # add used packages here
  CONFIG += python qt PythonQt

  # DONT REMOVE THE FOLLOWING LINE:
  include( $(MEVIS_LIB)/make/mevisPackages.pro )

  CONFIG += qt
} else {
# ---------------------------------------------------------------
# standard case for external users
# ---------------------------------------------------------------
  
  include ( ../../build/python.prf )  
  include ( ../../build/PythonQt.prf )  
}
  

HEADERS += \
  CustomObjects.h

SOURCES += \
  main.cpp \
  CustomObjects.cpp

RESOURCES += PyCPPWrapperExample.qrc