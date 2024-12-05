cmake_minimum_required(VERSION 3.27)

enable_testing()

project(PythonQt LANGUAGES CXX VERSION 3.5.6)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Python3 COMPONENTS Development)

set(PYTHONQT_SUFFIX Qt${QT_VERSION_MAJOR}.${QT_VERSION_MINOR}-Python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR})

add_subdirectory(generator)

if(NOT EXISTS "${PYTHONQT_GENERATED_PATH}")
    if(${QT_VERSION_MAJOR} VERSION_EQUAL 5)
        if(${QT_VERSION_MINOR} VERSION_LESS 3)
            set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_LIST_DIR}/generated_cpp_50)
        elseif(${QT_VERSION_MINOR} VERSION_LESS 6)
            set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_LIST_DIR}/generated_cpp_54)
        elseif(${QT_VERSION_MINOR} VERSION_LESS 11)
            set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_LIST_DIR}/generated_cpp_56)
        elseif(${QT_VERSION_MINOR} VERSION_LESS 15)
            set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_LIST_DIR}/generated_cpp_511)
        else()
            set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_LIST_DIR}/generated_cpp_515)
        endif()
    # elseif(${QT_VERSION_MAJOR} VERSION_EQUAL 6)
    else()
        message(FATAL "No generated sources exist for Qt${QT_VERSION}")
    endif()
endif()

add_subdirectory(src)
add_subdirectory(extensions)
add_subdirectory(tests)
# add_subdirectory(examples)
