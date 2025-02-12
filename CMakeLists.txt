cmake_minimum_required(VERSION 3.27)

project(PythonQt LANGUAGES CXX VERSION 3.5.6)

enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Python3 COMPONENTS Development)

set(PYTHONQT_SUFFIX Qt${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}-Python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR})
get_filename_component(QTDIR "${Qt${QT_VERSION_MAJOR}_DIR}" PATH)
get_filename_component(QTDIR "${QTDIR}" PATH)
get_filename_component(QTDIR "${QTDIR}" PATH)
set(ENV{QTDIR} "${QTDIR}")

add_subdirectory(generator)
add_subdirectory(src)
add_subdirectory(extensions)
add_subdirectory(tests)
# add_subdirectory(examples)
