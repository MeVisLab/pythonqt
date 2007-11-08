# --------- PythonQt profile -------------------
# Last changed by $Author: florian $
# $Id: PythonQt.pro 35381 2006-03-16 13:05:52Z florian $
# $Source$
# --------------------------------------------------

TARGET   = PythonQt
TEMPLATE = lib

DESTDIR    = lib
DLLDESTDIR = lib

CONFIG += qt

include ( build/python.prf )  

include ( PythonQt.pri )  
