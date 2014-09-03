# --------- PyScriptingConsole profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyScriptingConsole
TEMPLATE = app

DESTDIR           = ../../lib

mac:CONFIG-= app_bundle

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
include ( ../../build/PythonQt_QtAll.prf )  

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets
}

HEADERS +=                    \
  PyExampleObject.h             
  
SOURCES +=                    \
  PyExampleObject.cpp         \  
  main.cpp        

RESOURCES += PyScriptingConsole.qrc
