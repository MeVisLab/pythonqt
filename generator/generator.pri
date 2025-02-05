isEmpty(GENERATORPATH):GENERATORPATH = $$PWD
INCLUDEPATH += $$GENERATORPATH

TEMPLATE = app
#CONFIG += cmdline -- does not work as expected with old Qt versions, f.e. is missing in 5.9
CONFIG += console
CONFIG -= app_bundle
CONFIG += msvc_mp

TARGET +=
DEPENDPATH += $$GENERATORPATH tests parser
INCLUDEPATH += $$GENERATORPATH/.
INCLUDEPATH += $$GENERATORPATH/../common

RESOURCES += generator.qrc

include($$GENERATORPATH/parser/rxx.pri)

include($$GENERATORPATH/simplecpp/simplecpp.pri)

CONFIG += strict_c++
win32-msvc*{
#Disable warning C4996 (deprecated declarations)
        QMAKE_CXXFLAGS += -wd4996
        QMAKE_CFLAGS += -wd4996
#Disable warnings for external headers
        greaterThan(QMAKE_MSC_VER, 1599):QMAKE_CXXFLAGS += -external:anglebrackets -external:W0 -external:templates-
}
#Do not issue warning to Qt's system includes
gcc:!isEmpty(QT_INSTALL_HEADERS): QMAKE_CXXFLAGS += -isystem $$[QT_INSTALL_HEADERS]
gcc|win32-clang-msvc:QMAKE_CXXFLAGS += -Wno-deprecated-declarations -pedantic -Winit-self -Wuninitialized
clang|win32-clang-msvc: QMAKE_CXXFLAGS += -Wno-nested-anon-types -Wno-gnu-anonymous-struct -Wno-unused-private-field
win32-clang-msvc:QMAKE_CXXFLAGS += -Wno-language-extension-token -Wno-microsoft-enum-value


# Input
HEADERS += \
        $$GENERATORPATH/generator.h \
        $$GENERATORPATH/reporthandler.h \
        $$GENERATORPATH/typeparser.h \
        $$GENERATORPATH/typesystem.h \
        $$GENERATORPATH/asttoxml.h \
        $$GENERATORPATH/fileout.h \
        $$GENERATORPATH/generatorset.h \
        $$GENERATORPATH/metajava.h \
        $$GENERATORPATH/customtypes.h \
        $$GENERATORPATH/abstractmetabuilder.h \
        $$GENERATORPATH/abstractmetalang.h \
        $$GENERATORPATH/prigenerator.h \



      
SOURCES += \
        $$GENERATORPATH/generator.cpp \
        $$GENERATORPATH/main.cpp \
        $$GENERATORPATH/reporthandler.cpp \
        $$GENERATORPATH/typeparser.cpp \
        $$GENERATORPATH/typesystem.cpp \
        $$GENERATORPATH/asttoxml.cpp \
        $$GENERATORPATH/fileout.cpp \
        $$GENERATORPATH/generatorset.cpp \
        $$GENERATORPATH/metajava.cpp \
        $$GENERATORPATH/customtypes.cpp \
        $$GENERATORPATH/abstractmetabuilder.cpp \
        $$GENERATORPATH/abstractmetalang.cpp \
        $$GENERATORPATH/prigenerator.cpp \


   
QT += core xml

greaterThan(QT_MAJOR_VERSION, 5) {
    QT += core5compat
    message("WARNING: Qt module core5compat for XML handling in typesystem.cpp")
}

win32-msvc.net {
        QMAKE_CXXFLAGS += /Zm500
        QMAKE_CXXFLAGS -= -Zm200
        QMAKE_CFLAGS -= -Zm200
}

mac {
    contains(QT_CONFIG, x86):contains(QT_CONFIG, ppc):CONFIG += x86 ppc
    CONFIG -= precompile_header
}
