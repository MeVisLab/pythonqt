# --------- PythonQt profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQt-Qt6-PythonXY
TEMPLATE = lib

DESTDIR    = ../lib

CONFIG += qt
CONFIG -= flat

# allow to choose static linking through the environment variable PYTHONQT_STATIC
isEmpty(PYTHONQT_STATIC) {
PYTHONQT_STATIC = $$(PYTHONQT_STATIC)
}

isEmpty(PYTHONQT_STATIC) {
  CONFIG += dll
} else {
  CONFIG += static
}

DEFINES += PYTHONQT_CATCH_ALL_EXCEPTIONS

contains(QT_MAJOR_VERSION, 6) {
  QT += widgets core-private
}
 
INCLUDEPATH += $$PWD

macx {
    QMAKE_APPLE_DEVICE_ARCHS = x86_64 arm64
}

include ( ../build/common.prf )  
include ( ../build/python.prf )
TARGET = $$replace(TARGET, PythonXY, Python$${PYTHON_VERSION})

include ( src.pri )  

include($${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin.pri)
include($${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin.pri)

unix {
  CONFIG += create_pc create_prl no_install_prl
  QMAKE_PKGCONFIG_NAME = $${TARGET}
  QMAKE_PKGCONFIG_DESCRIPTION = Dynamic Python binding for the Qt framework
  QMAKE_PKGCONFIG_PREFIX = $$INSTALLBASE
  QMAKE_PKGCONFIG_LIBDIR = $$target.path
  QMAKE_PKGCONFIG_INCDIR = $$headers.path
  QMAKE_PKGCONFIG_INCDIR += ${prefix}/include/PythonQt5
  QMAKE_PKGCONFIG_VERSION = $$VERSION
}

unix: target.path = $${INSTALL_PREFIX}/lib
win32: target.path = /

headers.files = $${HEADERS} $$PWD/PythonQtPythonInclude.h
headers.path = $${INSTALL_PREFIX}/include

INSTALLS += target headers
