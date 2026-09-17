
cmake_minimum_required(VERSION 3.20.6)

project(PythonQt)

#----------------------------------------------------------------------------
# Qt version

set(_default_qt_major_version 5)
if(DEFINED Qt6_DIR)
  set(_default_qt_major_version 6)
endif()

# Set PythonQt_QT_VERSION
set(PythonQt_QT_VERSION ${_default_qt_major_version} CACHE STRING "Qt major version (5 or 6)")
set_property(CACHE PythonQt_QT_VERSION PROPERTY STRINGS "5" "6")
if(NOT "${PythonQt_QT_VERSION}" MATCHES "^(5|6)$")
  message(FATAL_ERROR "error: PythonQt_QT_VERSION must be 5 or 6.")
endif()

# Requirements
set(minimum_required_qt5_version "5.15.0")
set(minimum_required_qt6_version "6.4.0")
set(minimum_required_qt_version ${minimum_required_qt${PythonQt_QT_VERSION}_version})

find_package(Qt${PythonQt_QT_VERSION} ${minimum_required_qt_version} QUIET)

#----------------------------------------------------------------------------
# Qt components
set(qtlibs
  Core
  Widgets
  Network
  OpenGL
  Qml
  Quick
  Sql
  Svg
  Multimedia
  WebEngineWidgets
  UiTools
  Xml
  )
# XmlPatterns and WebKitWidgets are removed from Qt 6
if(PythonQt_QT_VERSION VERSION_EQUAL "5")
  list(APPEND qtlibs
    XmlPatterns
    WebKitWidgets
  )
endif()

#-----------------------------------------------------------------------------
# Python libraries

find_package(Python3 COMPONENTS Development REQUIRED)

#-----------------------------------------------------------------------------
# Build options

option(PythonQt_SUPPORT_NAME_PROPERTY "Enable PythonQt name-property support" ON)
option(PythonQt_USE_RELEASE_PYTHON_FALLBACK "Fallback to Release python when Debug missing" ON)
option(PythonQt_DEBUG "Enable PythonQt debug output" OFF)
option(PythonQt_BUILD_QTALL "Build PythonQt_QtAll bindings as a separate library" ON)

if(NOT DEFINED PythonQt_INSTALL_RUNTIME_DIR)
  set(PythonQt_INSTALL_RUNTIME_DIR bin)
endif()

if(NOT DEFINED PythonQt_INSTALL_LIBRARY_DIR)
  set(PythonQt_INSTALL_LIBRARY_DIR lib${LIB_SUFFIX})
endif()

if(NOT DEFINED PythonQt_INSTALL_ARCHIVE_DIR)
  set(PythonQt_INSTALL_ARCHIVE_DIR lib${LIB_SUFFIX})
endif()

if(NOT DEFINED PythonQt_INSTALL_INCLUDE_DIR)
  set(PythonQt_INSTALL_INCLUDE_DIR include/PythonQt)
endif()

#-----------------------------------------------------------------------------
# Set qtlib_to_wraplib_* variables

set(qtlib_to_wraplib_Widgets gui)
set(qtlib_to_wraplib_WebKitWidgets webkit)

set(qt_wrapped_lib_depends_gui Multimedia PrintSupport)
if(PythonQt_QT_VERSION VERSION_EQUAL "6")
  list(APPEND qt_wrapped_lib_depends_gui Widgets OpenGL)
endif()
set(qt_wrapped_lib_depends_multimedia MultimediaWidgets)
set(qt_wrapped_lib_depends_quick QuickWidgets)
set(qt_wrapped_lib_depends_svg )
if(PythonQt_QT_VERSION VERSION_EQUAL "6")
  list(APPEND qt_wrapped_lib_depends_svg SvgWidgets)
endif()
set(qt_wrapped_lib_depends_webenginewidgets )
set(qt_wrapped_lib_depends_webkit )

foreach(qtlib ${qtlibs})
  string(TOLOWER ${qtlib} qtlib_lowercase)
  if(DEFINED qtlib_to_wraplib_${qtlib})
    set(qtlib_lowercase ${qtlib_to_wraplib_${qtlib}})
  endif()
  set(qtlib_to_wraplib_${qtlib} ${qtlib_lowercase})
endforeach()

#-----------------------------------------------------------------------------
# Define PythonQt_Wrap_Qt* options
option(PythonQt_Wrap_QtAll "Make all Qt components available in python" OFF)
foreach(qtlib ${qtlibs})
  OPTION(PythonQt_Wrap_Qt${qtlib_to_wraplib_${qtlib}} "Make all of Qt${qtlib} available in python" OFF)
endforeach()

#-----------------------------------------------------------------------------
# Force option if it applies
if(PythonQt_Wrap_QtAll)
  foreach(qtlib ${qtlibs})
    # XXX xmlpatterns wrapper does *NOT* build at all :(
    if(${qtlib} STREQUAL "XmlPatterns")
      continue()
    endif()
    set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})
    if(NOT ${PythonQt_Wrap_Qt${qt_wrapped_lib}})
      set(PythonQt_Wrap_Qt${qt_wrapped_lib} ON CACHE BOOL "Make all of Qt${qt_wrapped_lib} available in python" FORCE)
      message(STATUS "Enabling [PythonQt_Wrap_Qt${qt_wrapped_lib}] because of [PythonQt_Wrap_QtAll] evaluates to True")
    endif()
  endforeach()
endif()

#-----------------------------------------------------------------------------
# Setup Qt

# Required components
set(qt_required_components Core Widgets)
foreach(qtlib ${qtlibs})
  set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})
  if(${PythonQt_Wrap_Qt${qt_wrapped_lib}})
    list(APPEND qt_required_components ${qtlib} ${qt_wrapped_lib_depends_${qt_wrapped_lib}})
  endif()
endforeach()
if(BUILD_TESTING)
  list(APPEND qt_required_components Test)
endif()
if("${Qt${PythonQt_QT_VERSION}_VERSION}" VERSION_GREATER_EQUAL "6.10.0")
  list(APPEND qt_required_components CorePrivate)
endif()
list(REMOVE_DUPLICATES qt_required_components)

message(STATUS "${PROJECT_NAME}: Required Qt components [${qt_required_components}]")
find_package(Qt${PythonQt_QT_VERSION} ${minimum_required_qt_version} COMPONENTS ${qt_required_components} REQUIRED)

set(QT_VERSION_MAJOR ${Qt${PythonQt_QT_VERSION}_VERSION_MAJOR})
set(QT_VERSION_MINOR ${Qt${PythonQt_QT_VERSION}_VERSION_MINOR})

set(QT_LIBRARIES )
foreach(qt_component ${qt_required_components})
  list(APPEND QT_LIBRARIES Qt${PythonQt_QT_VERSION}::${qt_component})
endforeach()

if(UNIX)
  find_package(OpenGL)
  if(OPENGL_FOUND)
    list(APPEND QT_LIBRARIES ${OPENGL_LIBRARIES})
  endif()
endif()

#-----------------------------------------------------------------------------
# Pre-generated wrappers default to Qt 5.15 set (generated_cpp_515). Users may override.
if(PythonQt_QT_VERSION VERSION_EQUAL "5")
  set(generated_cpp_suffix "_515")
  set(_default_generated_path "${CMAKE_CURRENT_SOURCE_DIR}/generated_cpp${generated_cpp_suffix}")
else()
  set(_default_generated_path "PythonQt_GENERATED_PATH-NOTFOUND")
endif()

set(PythonQt_GENERATED_PATH "${_default_generated_path}"
  CACHE PATH "Directory containing pre-generated PythonQt Qt wrappers for Qt ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR} (e.g., generated_cpp_515)")

if(NOT IS_DIRECTORY "${PythonQt_GENERATED_PATH}")
  message(FATAL_ERROR
    "PythonQt: missing generated wrapper sources for Qt ${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}.\n"
    "Expected: ${PythonQt_GENERATED_PATH}\n"
    "Hint: pass -DPythonQt_GENERATED_PATH:PATH=/path/to/generated_cpp")
endif()

#-----------------------------------------------------------------------------
# Build targets
add_subdirectory(src)
if(PythonQt_BUILD_QTALL)
  add_subdirectory(extensions/PythonQt_QtAll)
endif()

#-----------------------------------------------------------------------------
# Testing

option(BUILD_TESTING "Build the testing tree." OFF)
include(CTest)

if(BUILD_TESTING)
  create_test_sourcelist(test_sources PythonQtCppTests.cpp
    tests/PythonQtTestMain.cpp
    )

  set_property(SOURCE tests/PythonQtTestMain.cpp PROPERTY COMPILE_DEFINITIONS "main=tests_PythonQtTestMain")

  list(APPEND test_sources
    tests/PythonQtTests.cpp
    tests/PythonQtTests.h
    )

  if(PythonQt_Wrap_QtCore AND PythonQt_BUILD_QTALL)
    list(APPEND test_sources
      tests/PythonQtTestCleanup.cpp
      tests/PythonQtTestCleanup.h
      )

    set_property(SOURCE tests/PythonQtTestMain.cpp APPEND PROPERTY COMPILE_DEFINITIONS "PythonQt_Wrap_QtCore")
  endif()

  add_executable(PythonQtCppTests ${test_sources})

  target_include_directories(PythonQtCppTests
    PRIVATE
      $<$<BOOL:${PythonQt_Wrap_QtCore}>:${PythonQt_GENERATED_PATH}>
      $<$<AND:$<BOOL:${PythonQt_Wrap_QtCore}>,$<BOOL:${PythonQt_BUILD_QTALL}>>:${CMAKE_CURRENT_SOURCE_DIR}/extensions/PythonQt_QtAll>
    )

  target_link_libraries(PythonQtCppTests PythonQt)
  if(PythonQt_Wrap_QtCore AND PythonQt_BUILD_QTALL)
    target_link_libraries(PythonQtCppTests PythonQt_QtAll)
  endif()

  set_target_properties(PythonQtCppTests
    PROPERTIES
      AUTOMOC TRUE
    )

  target_compile_definitions(PythonQtCppTests
    PRIVATE
      $<$<BOOL:${PythonQt_SUPPORT_NAME_PROPERTY}>:PYTHONQT_SUPPORT_NAME_PROPERTY>
    )

  if(WIN32)
    # Python3::Python may resolve to the import library directory (e.g. .../libs),
    # while pythonXY.dll typically lives one level above. Add both.
    get_filename_component(_python3_lib_dir "${Python3_LIBRARY}" DIRECTORY)
    get_filename_component(_python3_root_dir "${_python3_lib_dir}" DIRECTORY)

    set(_pythonqt_test_path_entries
      "$<TARGET_FILE_DIR:PythonQtCppTests>"
      "$<TARGET_FILE_DIR:PythonQt>"
      "$<TARGET_FILE_DIR:Qt${PythonQt_QT_VERSION}::Core>"
      "$<TARGET_FILE_DIR:Python3::Python>"
      "${_python3_lib_dir}"
      "${_python3_root_dir}"
      )
    if(PythonQt_BUILD_QTALL)
      list(APPEND _pythonqt_test_path_entries "$<TARGET_FILE_DIR:PythonQt_QtAll>")
    endif()
    list(JOIN _pythonqt_test_path_entries ";" _pythonqt_test_path_prefix)
    set(_pythonqt_test_env "PATH=${_pythonqt_test_path_prefix};$ENV{PATH}")

    add_test(
      NAME tests_PythonQtTestMain
      COMMAND ${CMAKE_COMMAND} -E env "${_pythonqt_test_env}" $<TARGET_FILE:PythonQtCppTests> tests/PythonQtTestMain
      )
  else()
    add_test(
      NAME tests_PythonQtTestMain
      COMMAND $<TARGET_FILE:PythonQtCppTests> tests/PythonQtTestMain
      )
  endif()
endif()

