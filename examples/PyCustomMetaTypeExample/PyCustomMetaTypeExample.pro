# --------- PyCustomMetaTypeExample profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PyCustomMetaTypeExample
TEMPLATE = app

DESTDIR           = ../../bin

include ( ../../build/PythonQt.prf )  
  

HEADERS += \
  CustomObject.h

SOURCES += \
  main.cpp \
  CustomObject.cpp

RESOURCES += PyCustomMetaTypeExample.qrc
