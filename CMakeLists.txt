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

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Python3 COMPONENTS Development)

set(PYTHONQT_SUFFIX Qt${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}-Python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR})

add_subdirectory(generator)
add_subdirectory(src)
add_subdirectory(extensions)
add_subdirectory(tests)
# add_subdirectory(examples)
