TARGET = pythonqt_generator
DESTDIR = .

include(generator.pri)
DEFINES += QT_NO_CAST_TO_ASCII

# Input
HEADERS += \
        generatorsetqtscript.h \
        metaqtscriptbuilder.h \
        metaqtscript.h \
        shellgenerator.h \
        shellimplgenerator.h \
        shellheadergenerator.h \
        setupgenerator.h

SOURCES += \
        generatorsetqtscript.cpp \
        metaqtscriptbuilder.cpp \
        metaqtscript.cpp \
        shellgenerator.cpp \
        shellimplgenerator.cpp \
        shellheadergenerator.cpp \
        setupgenerator.cpp

#The generate target is NOT built automatically!
QMAKE_EXTRA_TARGETS += generate

generate.depends = $$TARGET
generate.commands = ./$$TARGET --qt-headers="$$[QT_INSTALL_HEADERS]" --core-error --output-directory="."
