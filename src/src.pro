# --------- PythonQt profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQt
TEMPLATE = lib


DESTDIR    = ../lib

CONFIG += qt
CONFIG -= flat


# allow to choose static linking through the environment variable PYTHONQT_STATIC
PYTHONQT_STATIC = $$(PYTHONQT_STATIC)
isEmpty(PYTHONQT_STATIC) {
  CONFIG += dll
} else {
  CONFIG += static
}

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets
}

INCLUDEPATH += $$PWD

include ( ../build/common.prf )  
include ( ../build/python.prf )

include ( src.pri )  
