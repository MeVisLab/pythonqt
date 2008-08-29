CONFIG += debug
VPATH += 
INCLUDEPATH += . $$(PYTHONQT_ROOT)/src /usr/include/python2.5

SOURCES += CPPPyWrapperExample.cpp

LIBS += -L$$(PYTHONQT_ROOT)/lib -lPythonQt  -lutil

RESOURCES += CPPPyWrapperExample.qrc
