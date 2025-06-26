cmake_minimum_required(VERSION 3.27)
project(PythonQtGenerator LANGUAGES CXX)

add_subdirectory(parser)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

if(FORCE_BUILD_QT5)
  find_package(Qt5 NAMES Qt5 REQUIRED COMPONENTS Core Widgets Xml)
else()
  find_package(Qt6 NAMES Qt6 REQUIRED COMPONENTS Core Widgets Xml Core5Compat)
endif()

file(GLOB SOURCES *.h *.cpp *.qrc simplecpp/*.h simplecpp/*.cpp )
# Explicitly exclude qtscript_masterinclude.h
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_LIST_DIR}/qtscript_masterinclude.h")

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
)

set(QT5_COMPATIBILITY_LIBS "")
if (${QT_VERSION_MAJOR} VERSION_GREATER_EQUAL 6)
    set(QT5_COMPATIBILITY_LIBS Qt${QT_VERSION_MAJOR}::Core5Compat)
endif()

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Xml
    ${QT5_COMPATIBILITY_LIBS}
    rxx
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/simplecpp)

get_filename_component(PYTHONQT_GENERATED_PATH "${CMAKE_CURRENT_BINARY_DIR}" PATH)
set(PYTHONQT_GENERATED_PATH "${PYTHONQT_GENERATED_PATH}/generated_cpp")

file(GLOB resources_files *.txt *.xml qtscript_masterinclude.h)
foreach(resources_file IN LISTS resources_files)
    configure_file(${resources_file} ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
endforeach()

if(WIN32)
    set(LIBRARY_SEARCH_PATH PATH)
else()
    set(LIBRARY_SEARCH_PATH LD_LIBRARY_PATH)
endif()

list(APPEND wrapper_list core core_builtin gui gui_builtin multimedia network qml quick sql svg uitools xml)
foreach(wrapper IN LISTS wrapper_list)
    string(TOUPPER ${wrapper} WRAPPER)
    set(PYTHONQT_WRAPPER_${WRAPPER}_SOURCES
        "${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_${wrapper}/com_trolltech_qt_${wrapper}0.h"
        "${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_${wrapper}/com_trolltech_qt_${wrapper}0.cpp"
        "${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_${wrapper}/com_trolltech_qt_${wrapper}_init.cpp"
    )
    list(APPEND PYTHONQT_WRAPPER_SOURCES ${PYTHONQT_WRAPPER_${WRAPPER}_SOURCES})
    set(PYTHONQT_WRAPPER_${WRAPPER}_SOURCES ${PYTHONQT_WRAPPER_${WRAPPER}_SOURCES} PARENT_SCOPE)
endforeach()

get_target_property(_qtcore_include_dirs Qt${QT_VERSION_MAJOR}::Core INTERFACE_INCLUDE_DIRECTORIES)
foreach(_qtcore_include_dir IN LISTS _qtcore_include_dirs)
    if (IS_DIRECTORY "${_qtcore_include_dir}/QtCore")
        set(_qt_include_prefix "${_qtcore_include_dir}")
        break()
    endif()
endforeach()

add_custom_command(OUTPUT ${PYTHONQT_WRAPPER_SOURCES}
    COMMAND ${CMAKE_COMMAND} -E env --modify ${LIBRARY_SEARCH_PATH}=path_list_prepend:$<TARGET_FILE_DIR:Qt${QT_VERSION_MAJOR}::Widgets>
    $<TARGET_FILE:${PROJECT_NAME}> --qt-include-prefix="${_qt_include_prefix}"
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS ${PROJECT_NAME}
)

set_source_files_properties(${PYTHONQT_WRAPPER_SOURCES} PROPERTIES
    SKIP_AUTOMOC TRUE
    SKIP_AUTOUIC TRUE
)

add_custom_target(PythonQtWrapper
    DEPENDS ${PROJECT_NAME} ${PYTHONQT_WRAPPER_SOURCES}
)
