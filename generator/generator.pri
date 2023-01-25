isEmpty(GENERATORPATH):GENERATORPATH = $$PWD
INCLUDEPATH += $$GENERATORPATH

TEMPLATE = app
#CONFIG += cmdline -- does not work as expected with old Qt versions, f.e. is missing in 5.9
CONFIG += console
CONFIG -= app_bundle

TARGET +=
DEPENDPATH += $$GENERATORPATH tests parser
INCLUDEPATH += $$GENERATORPATH/.
INCLUDEPATH += $$GENERATORPATH/../common

RESOURCES += generator.qrc

include($$GENERATORPATH/parser/rxx.pri)

include($$GENERATORPATH/parser/rpp/rpp.pri)

win32-msvc2005:{
        QMAKE_CXXFLAGS += -wd4996
        QMAKE_CFLAGS += -wd4996
}
gcc:QMAKE_CXXFLAGS += -Wno-deprecated-declarations -Wpedantic
clang: QMAKE_CXXFLAGS += -Wno-nested-anon-types -Wno-gnu-anonymous-struct -Wno-unused-private-field

# Input
HEADERS += \
        $$GENERATORPATH/generator.h \
        $$GENERATORPATH/main.h \
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

win32-msvc.net {
        QMAKE_CXXFLAGS += /Zm500
        QMAKE_CXXFLAGS -= -Zm200
        QMAKE_CFLAGS -= -Zm200
}

mac {
    contains(QT_CONFIG, x86):contains(QT_CONFIG, ppc):CONFIG += x86 ppc
    CONFIG -= precompile_header
}
