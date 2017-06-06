# --------- PyGuiExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyGuiExample
TEMPLATE = app

mac:CONFIG -= app_bundle

DESTDIR           = ../../lib

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets
}

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
include ( ../../build/PythonQt_QtAll.prf )  

SOURCES +=                    \
  main.cpp        

RESOURCES += PyGuiExample.qrc
