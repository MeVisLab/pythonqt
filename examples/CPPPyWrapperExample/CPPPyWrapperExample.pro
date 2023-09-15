
TARGET   = CPPPyWrapperExample
TEMPLATE = app

mac:CONFIG -= app_bundle

DESTDIR           = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

QT += widgets

SOURCES +=                    \
  CPPPyWrapperExample.cpp        

RESOURCES += CPPPyWrapperExample.qrc
