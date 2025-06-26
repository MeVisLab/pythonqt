cmake_minimum_required(VERSION 3.27)

project(PythonQt LANGUAGES CXX VERSION 3.5.6)

#-----------------------------------------------------------------------------
# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message(STATUS "Setting build type to 'Release' as none was specified.")
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose the type of build." FORCE)
  mark_as_advanced(CMAKE_BUILD_TYPE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "RelWithDebInfo")
endif()
#-----------------------------------------------------------------------------

enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(FORCE_BUILD_QT5 "Force Qt5 build instead of Qt6" OFF)

if(FORCE_BUILD_QT5)
  find_package(Qt5 NAMES Qt5 REQUIRED COMPONENTS Core)
  string(REPLACE "." ";" qt_version_list ${Qt5_VERSION})
else()
  find_package(Qt6 NAMES Qt6 REQUIRED COMPONENTS Core)
  string(REPLACE "." ";" qt_version_list ${Qt6_VERSION})
endif()
list(GET qt_version_list 0 QT_VERSION_MAJOR)
list(GET qt_version_list 1 QT_VERSION_MINOR)
list(GET qt_version_list 1 QT_VERSION_PATCH)
message(STATUS "QT_VERSION_MAJOR = ${QT_VERSION_MAJOR}")

find_package(Python3 COMPONENTS Development)

# Set the environment as defined in Readme.md
# Set environment variables for Python
if(Python3_FOUND)
  set(PYTHON_VERSION "${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR}")
  set(PYTHON_PATH "${Python3_PREFIX}")
  set(PYTHON_LIB "${Python3_PREFIX}/libs")
  set(PYTHON_DIR "${Python3_PREFIX}")
  set(ENV{PYTHON_VERSION} "${PYTHON_VERSION}")
  set(ENV{PYTHON_PATH} "${PYTHON_PATH}")
  set(ENV{PYTHON_LIB} "${PYTHON_LIB}")
  set(ENV{PYTHON_DIR} "${PYTHON_DIR}")
endif()

# Set QTDIR environment variable to Qt installation root
if(FORCE_BUILD_QT5)
  if(DEFINED Qt5_DIR)
    set(ENV{QTDIR} "${Qt5_DIR}")
  endif()
else()
  if(DEFINED Qt6_DIR)
    set(ENV{QTDIR} "${Qt6_DIR}")
  endif()
endif()


set(PYTHONQT_SUFFIX Qt${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}-Python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR})
include_directories(src)
add_subdirectory(generator)
add_subdirectory(src)
add_subdirectory(extensions)
add_subdirectory(tests)
# add_subdirectory(examples)
