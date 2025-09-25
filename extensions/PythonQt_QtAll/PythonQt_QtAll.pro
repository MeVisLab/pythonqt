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
  exists($$f) {
    DEFINES += $$2 # shoud be in the included (generated) .pri file
    QT += $$3 # shoud be in the included (generated) .pri file
    include($$f)
    export(HEADERS)
    export(SOURCES)
    export(DEFINES)
    export(QT)
    return(true)
  }
  return(false)
}

PythonQtCore:Xinclude(com_trolltech_qt_core, PYTHONQT_WITH_CORE, core)

PythonQtGui:Xinclude(com_trolltech_qt_gui, PYTHONQT_WITH_GUI, gui widgets printsupport)

PythonQtSvg:Xinclude(com_trolltech_qt_svg, PYTHONQT_WITH_SVG, svg) {
  !lessThan(QT_MAJOR_VERSION,6): QT += svgwidgets
}

PythonQtSql:Xinclude(com_trolltech_qt_sql, PYTHONQT_WITH_SQL, sql)

PythonQtNetwork:Xinclude(com_trolltech_qt_network, PYTHONQT_WITH_NETWORK, network)

PythonQtOpengl:Xinclude(com_trolltech_qt_opengl, PYTHONQT_WITH_OPENGL, opengl xml)

PythonQtXml:Xinclude(com_trolltech_qt_xml, PYTHONQT_WITH_XML, xml)

PythonQtXmlpatterns:Xinclude(com_trolltech_qt_xmlpatterns, PYTHONQT_WITH_XMLPATTERNS, xmlpatterns)

PythonQtMultimedia:Xinclude(com_trolltech_qt_multimedia, PYTHONQT_WITH_MULTIMEDIA, multimedia multimediawidgets)

PythonQtQml:Xinclude(com_trolltech_qt_qml, PYTHONQT_WITH_QML, qml)

PythonQtQuick:Xinclude(com_trolltech_qt_quick, PYTHONQT_WITH_QUICK, quick quickwidgets)

PythonQtUiTools:Xinclude(com_trolltech_qt_uitools, PYTHONQT_WITH_UITOOLS, uitools)

PythonQtWebEngineWidgets:Xinclude(com_trolltech_qt_webenginewidgets, PYTHONQT_WITH_WEBENGINEWIDGETS, webenginewidgets)

PythonQtWebKit:Xinclude(com_trolltech_qt_webkit, PYTHONQT_WITH_WEBKIT, webkit webkitwidgets)
