cmake_minimum_required(VERSION 3.20.6)

project(PythonQtGenerator LANGUAGES CXX)

#----------------------------------------------------------------------------
# Setup Qt

set(_default_qt_major_version 5)
if(DEFINED Qt6_DIR)
  set(_default_qt_major_version 6)
endif()

# Set PythonQtGenerator_QT_VERSION
set(PythonQtGenerator_QT_VERSION ${_default_qt_major_version} CACHE STRING "Qt major version (5 or 6)")
set_property(CACHE PythonQtGenerator_QT_VERSION PROPERTY STRINGS "5" "6")
if(NOT "${PythonQtGenerator_QT_VERSION}" MATCHES "^(5|6)$")
  message(FATAL_ERROR "error: PythonQtGenerator_QT_VERSION must be 5 or 6.")
endif()

set(minimum_required_qt5_version "5.15.0")
set(minimum_required_qt6_version "6.4.0")
set(minimum_required_qt_version ${minimum_required_qt${PythonQtGenerator_QT_VERSION}_version})

set(qt_required_components Core Xml)

message(STATUS "${PROJECT_NAME}: Required Qt${PythonQtGenerator_QT_VERSION} components [${qt_required_components}]")

# Requirements
find_package(Qt${PythonQtGenerator_QT_VERSION} ${minimum_required_qt_version}
  COMPONENTS ${qt_required_components} REQUIRED)

#-----------------------------------------------------------------------------
# Sources

set(sources
  # Based of parser/rxx.pro
  parser/ast.cpp
  parser/binder.cpp
  parser/class_compiler.cpp
  parser/codemodel.cpp
  parser/codemodel_finder.cpp
  parser/compiler_utils.cpp
  parser/control.cpp
  parser/declarator_compiler.cpp
  parser/default_visitor.cpp
  parser/dumptree.cpp
  parser/lexer.cpp
  parser/list.cpp
  parser/name_compiler.cpp
  parser/parser.cpp
  parser/smallobject.cpp
  parser/tokens.cpp
  parser/type_compiler.cpp
  parser/visitor.cpp

  # Based of simplecpp/simplecpp.pri
  simplecpp/simplecpp.cpp

  # Based of generator.pri
  abstractmetabuilder.cpp
  abstractmetalang.cpp
  asttoxml.cpp
  customtypes.cpp
  fileout.cpp
  generator.cpp
  generator.qrc
  generatorset.cpp
  main.cpp
  metajava.cpp
  prigenerator.cpp
  reporthandler.cpp
  typeparser.cpp
  typesystem.cpp

  # Based of generator.pro
  generatorsetqtscript.cpp
  metaqtscriptbuilder.cpp
  metaqtscript.cpp
  setupgenerator.cpp
  shellgenerator.cpp
  shellheadergenerator.cpp
  shellimplgenerator.cpp
  )

add_executable(${PROJECT_NAME} ${sources})

set_target_properties(${PROJECT_NAME}
  PROPERTIES
    AUTOMOC TRUE
    AUTORCC TRUE
  )

target_include_directories(${PROJECT_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/parser>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/simplecpp>
  )

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    Qt${PythonQtGenerator_QT_VERSION}::Core
    Qt${PythonQtGenerator_QT_VERSION}::Xml
  )

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
      RXX_ALLOCATOR_INIT_0 # Based of parser/rxx.pro
      QT_NO_CAST_TO_ASCII # Based of generator.pro
  )

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
