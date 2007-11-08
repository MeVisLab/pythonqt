# --------- PyGuiExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyGuiExample
TEMPLATE = app

DESTDIR           = ../../bin

include ( ../../build/python.prf )  
include ( ../../build/PythonQt.prf )  
include ( ../../build/PythonQtGui.prf )  

SOURCES +=                    \
  main.cpp        

RESOURCES += PyGuiExample.qrc
