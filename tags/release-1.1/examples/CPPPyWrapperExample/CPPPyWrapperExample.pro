CONFIG += debug
VPATH += 
INCLUDEPATH += . $$(PYTHONQT_ROOT)/src /usr/include/python2.5

SOURCES += CPPPyWrapperExample.cpp

mac { CONFIG -= app_bundle }

LIBS += -L$$(PYTHONQT_ROOT)/lib -lPythonQt_d  -lutil

RESOURCES += CPPPyWrapperExample.qrc
