# --------- PythonQtTest profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------
TARGET   = PythonQtTest
TEMPLATE = app

DESTDIR    = ../lib
QMAKE_RPATHDIR += $$DESTDIR

QT += testlib opengl
CONFIG += testcase cmdline exceptions testcase_no_bundle no_testcase_installs

#Workaround for MinGW build. Qt incorrectly sets it to empty string on Win32 for bash
mingw: TEST_TARGET_DIR = .

DEFINES += QT_NO_CAST_TO_ASCII

gcc: QMAKE_CXXFLAGS += -pedantic -ansi -Winit-self -Wuninitialized

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets
}

include ( ../build/common.prf )
include ( ../build/PythonQt.prf )

HEADERS +=                    \
  PythonQtTests.h

SOURCES +=                    \
  PythonQtTestMain.cpp        \
  PythonQtTests.cpp
