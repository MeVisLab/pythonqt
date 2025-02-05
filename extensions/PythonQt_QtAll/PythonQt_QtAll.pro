# get external pythonqtall config or enable all by default

isEmpty( PYTHONQTALL_CONFIG ) {
  PYTHONQTALL_CONFIG = $$(PYTHONQTALL_CONFIG)
}

isEmpty( PYTHONQTALL_CONFIG ) {
  message("using default PythonQt_QtAll Configuration")
  CONFIG += PythonQtCore
  qtHaveModule(gui):qtHaveModule(widgets):CONFIG += PythonQtGui
  qtHaveModule(svg):CONFIG += PythonQtSvg
  qtHaveModule(sql):CONFIG += PythonQtSql
  qtHaveModule(network):CONFIG += PythonQtNetwork
  lessThan(QT_MAJOR_VERSION, 6) {
    # module is empty in Qt6
    qtHaveModule(opengl):CONFIG += PythonQtOpengl
  }
  qtHaveModule(xml):CONFIG += PythonQtXml
  qtHaveModule(xmlpatterns):CONFIG += PythonQtXmlpatterns
  qtHaveModule(multimedia):CONFIG += PythonQtMultimedia
  qtHaveModule(qml):CONFIG += PythonQtQml
  qtHaveModule(quick):CONFIG += PythonQtQuick
  qtHaveModule(uitools):CONFIG += PythonQtUiTools
  qtHaveModule(webenginewidgets):CONFIG += PythonQtWebEngineWidgets

  qtHaveModule(webkit):CONFIG += PythonQtWebKit
} else {
  message("using given PythonQt_QtAll Configuration: ")
  message("  $${PYTHONQTALL_CONFIG}")
  eval(CONFIG += $${PYTHONQTALL_CONFIG})
}

TARGET   = PythonQt_QtAll-Qt$${QT_MAJOR_VERSION}-PythonXY
TEMPLATE = lib

DESTDIR    = ../../lib

include ( ../../build/common.prf )  
include ( ../../build/PythonQt.prf )  
TARGET = $$replace(TARGET, PythonXY, Python$${PYTHON_VERSION})

CONFIG += qt strict_c++ msvc_mp

!static:!staticlib {
  CONFIG += dll
  # Force linker to complain on undefined references for dll/so/dylib build when possible
  QMAKE_LFLAGS_SHLIB += $$QMAKE_LFLAGS_NOUNDEF
}

DEFINES += PYTHONQT_QTALL_EXPORTS

HEADERS +=                \
  $$PWD/PythonQt_QtAll.h
  
SOURCES +=                \
  $$PWD/PythonQt_QtAll.cpp

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

unix: target.path = $${INSTALL_PREFIX}/lib
win32: target.path = /

msvc:QMAKE_CXXFLAGS += /bigobj

headers.files = $${HEADERS}
headers.path = $${INSTALL_PREFIX}/include

INSTALLS += target headers

defineTest(Xinclude) {
  f=$$PYTHONQT_GENERATED_PATH/$$1/$${1}.pri
  exists($$f):include($$f):export(HEADERS):export(SOURCES):export(DEFINES)

}


PythonQtCore {
  DEFINES += PYTHONQT_WITH_CORE
  Xinclude (com_trolltech_qt_core)
  QT += core
}

PythonQtGui  {
  DEFINES += PYTHONQT_WITH_GUI
  Xinclude (com_trolltech_qt_gui)
  QT += gui widgets printsupport
}

PythonQtSvg {
  DEFINES += PYTHONQT_WITH_SVG
  Xinclude (com_trolltech_qt_svg)
  QT += svg
  !lessThan(QT_MAJOR_VERSION,6): QT += svgwidgets
}

PythonQtSql {
  DEFINES += PYTHONQT_WITH_SQL
  Xinclude (com_trolltech_qt_sql)
  QT += sql
}

PythonQtNetwork {
  DEFINES += PYTHONQT_WITH_NETWORK
  Xinclude (com_trolltech_qt_network)
  QT += network
}

PythonQtOpengl {
  DEFINES += PYTHONQT_WITH_OPENGL
  QT += opengl
  PythonQtCore: Xinclude (com_trolltech_qt_opengl)
  QT += xml
}

PythonQtXml {
  DEFINES += PYTHONQT_WITH_XML
  Xinclude (com_trolltech_qt_xml)
  QT += xml
}

PythonQtXmlpatterns {
  DEFINES += PYTHONQT_WITH_XMLPATTERNS
  Xinclude (com_trolltech_qt_xmlpatterns)
  QT += xmlpatterns
}

PythonQtMultimedia {
  DEFINES += PYTHONQT_WITH_MULTIMEDIA
  Xinclude (com_trolltech_qt_multimedia)
  QT += multimedia multimediawidgets
}

PythonQtQml {
  DEFINES += PYTHONQT_WITH_QML
  Xinclude (com_trolltech_qt_qml)
  QT += qml
}

PythonQtQuick {
  DEFINES += PYTHONQT_WITH_QUICK
  Xinclude (com_trolltech_qt_quick)
  QT += quick quickwidgets
}

PythonQtUiTools {
  DEFINES += PYTHONQT_WITH_UITOOLS
  Xinclude (com_trolltech_qt_uitools)
  QT += uitools
}

PythonQtWebEngineWidgets {
  DEFINES += PYTHONQT_WITH_WEBENGINEWIDGETS
  Xinclude (com_trolltech_qt_webenginewidgets)
  QT += webenginewidgets
}

PythonQtWebKit {
  DEFINES += PYTHONQT_WITH_WEBKIT
  Xinclude (com_trolltech_qt_webkit)
  QT += webkit webkitwidgets
}
