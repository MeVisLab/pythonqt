
TARGET   = PythonQt_QtAll
TEMPLATE = lib

DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

CONFIG += dll qt

DEFINES +=  PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  PythonQt_QtAll.h
  
SOURCES +=                \
  PythonQt_QtAll.cpp

QT += webkit gui svg sql network xml xmlpatterns opengl

contains(QT_MAJOR_VERSION, 4) {
 CONFIG += uitools
}

contains(QT_MAJOR_VERSION, 5) {
  QT += widgets webkitwidgets printsupport multimedia multimediawidgets uitools
}

include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_core/com_trolltech_qt_core.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_gui/com_trolltech_qt_gui.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_svg/com_trolltech_qt_svg.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_sql/com_trolltech_qt_sql.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_network/com_trolltech_qt_network.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_opengl/com_trolltech_qt_opengl.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_webkit/com_trolltech_qt_webkit.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xml/com_trolltech_qt_xml.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_uitools/com_trolltech_qt_uitools.pri)
contains(QT_MAJOR_VERSION, 5) {
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xmlpatterns/com_trolltech_qt_xmlpatterns.pri)
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_multimedia/com_trolltech_qt_multimedia.pri)
}