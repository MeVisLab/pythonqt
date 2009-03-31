# --------- PythonQtGui profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQtGui
TEMPLATE = lib

DESTDIR    = ../../lib
DLLDESTDIR = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

CONFIG += dll qt uitools

DEFINES +=  PYTHONQTGUI_EXPORTS

HEADERS +=                    \
  PythonQtGui.h           \
  PythonQtGuiSystem.h     \
  
SOURCES +=                    \
  PythonQtGui.cpp

