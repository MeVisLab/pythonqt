# get external pythonqtall config or enable all by default

isEmpty( PYTHONQTALL_CONFIG ) {
  message("using default PythonQt_QtAll Configuration")
  CONFIG += PythonQtCore
  CONFIG += PythonQtGui
  CONFIG += PythonQtSvg
  CONFIG += PythonQtSql
  CONFIG += PythonQtNetwork
  CONFIG += PythonQtOpengl 
  CONFIG += PythonQtXml
  CONFIG += PythonQtXmlpatterns
  CONFIG += PythonQtMultimedia
  CONFIG += PythonQtQml
  CONFIG += PythonQtQuick
  CONFIG += PythonQtUiTools

  qtHaveModule(webkit):CONFIG += PythonQtWebKit
} else {
  message("using given PythonQt_QtAll Configuration: ")
  message("  $${PYTHONQTALL_CONFIG}")
  CONFIG += $${PYTHONQTALL_CONFIG}
}

TARGET   = PythonQt_QtAll-Qt5-PythonXY
TEMPLATE = lib

DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
TARGET = $$replace(TARGET, PythonXY, Python$${PYTHON_VERSION})

CONFIG += dll qt

DEFINES += PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  PythonQt_QtAll.h
  
SOURCES +=                \
  PythonQt_QtAll.cpp

unix {
  CONFIG += create_pc create_prl no_install_prl
  QMAKE_PKGCONFIG_NAME = PythonQt_QtAll-Qt$${QT_MAJOR_VERSION}-Python$${PYTHON_VERSION}
  QMAKE_PKGCONFIG_DESCRIPTION = Dynamic Python binding for the Qt framework
  QMAKE_PKGCONFIG_PREFIX = $$INSTALLBASE
  QMAKE_PKGCONFIG_LIBDIR = $$target.path
  QMAKE_PKGCONFIG_INCDIR = $$headers.path
  QMAKE_PKGCONFIG_INCDIR += $$PREFIX/include/PythonQt5
  QMAKE_PKGCONFIG_VERSION = $$VERSION
}

unix: target.path = /lib
win32: target.path = /

headers.files = $${HEADERS}
headers.path = /include

INSTALLS += target headers

PythonQtCore {
  DEFINES += PYTHONQT_WITH_CORE
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_core/com_trolltech_qt_core.pri)
}

PythonQtGui  {
  DEFINES += PYTHONQT_WITH_GUI
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_gui/com_trolltech_qt_gui.pri)
  QT += gui widgets printsupport
}

PythonQtSvg {
  DEFINES += PYTHONQT_WITH_SVG
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_svg/com_trolltech_qt_svg.pri)
  QT +=svg
}

PythonQtSql {
  DEFINES += PYTHONQT_WITH_SQL
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_sql/com_trolltech_qt_sql.pri)
  QT += sql
}

PythonQtNetwork {
  DEFINES += PYTHONQT_WITH_NETWORK
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_network/com_trolltech_qt_network.pri)
  QT += network
}

PythonQtOpengl {
  DEFINES += PYTHONQT_WITH_OPENGL
  PythonQtCore: include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_opengl/com_trolltech_qt_opengl.pri)
  QT += opengl
}

PythonQtXml {
  DEFINES += PYTHONQT_WITH_XML
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xml/com_trolltech_qt_xml.pri)
  QT += xml
}

PythonQtXmlpatterns {
  DEFINES += PYTHONQT_WITH_XMLPATTERNS
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_xmlpatterns/com_trolltech_qt_xmlpatterns.pri)
  QT += xmlpatterns
}

PythonQtMultimedia {
  DEFINES += PYTHONQT_WITH_MULTIMEDIA
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_multimedia/com_trolltech_qt_multimedia.pri)
 QT += multimedia multimediawidgets
}

PythonQtQml {
  DEFINES += PYTHONQT_WITH_QML
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_qml/com_trolltech_qt_qml.pri)
  QT += qml
}

PythonQtQuick {
  DEFINES += PYTHONQT_WITH_QUICK
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_quick/com_trolltech_qt_quick.pri)
  QT += quick quickwidgets
}

PythonQtUiTools {
  DEFINES += PYTHONQT_WITH_UITOOLS
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_uitools/com_trolltech_qt_uitools.pri)
  QT += uitools
}

PythonQtWebKit {
  DEFINES += PYTHONQT_WITH_WEBKIT
  include ($$PYTHONQT_GENERATED_PATH/com_trolltech_qt_webkit/com_trolltech_qt_webkit.pri)
  QT += webkit webkitwidgets
}
