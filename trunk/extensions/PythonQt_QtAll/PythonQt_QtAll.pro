# If Qt has support for webkit, add it:
qtHaveModule(webkit):CONFIG += PythonQtWebKit

TARGET   = PythonQt_QtAll
TEMPLATE = lib

DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  

CONFIG += dll qt

DEFINES += PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  PythonQt_QtAll.h
  
SOURCES +=                \
  PythonQt_QtAll.cpp

QT += gui svg sql network xml xmlpatterns opengl
QT += widgets printsupport multimedia multimediawidgets
QT += quick qml quickwidgets uitools

include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_core/com_trolltech_qt_core.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_gui/com_trolltech_qt_gui.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_svg/com_trolltech_qt_svg.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_sql/com_trolltech_qt_sql.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_network/com_trolltech_qt_network.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_opengl/com_trolltech_qt_opengl.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xml/com_trolltech_qt_xml.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xmlpatterns/com_trolltech_qt_xmlpatterns.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_multimedia/com_trolltech_qt_multimedia.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_qml/com_trolltech_qt_qml.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_quick/com_trolltech_qt_quick.pri)
include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_uitools/com_trolltech_qt_uitools.pri)

PythonQtWebKit {
  QT += webkit webkitwidgets
  DEFINES += PYTHONQT_WITH_WEBKIT
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_webkit/com_trolltech_qt_webkit.pri)
}
