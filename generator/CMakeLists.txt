project(PythonQtGenerator LANGUAGES CXX)

add_subdirectory(parser)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

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
# NOTE: 'generated_cpp' is hardcoded in setupgenerator.cpp, so do not add version suffix here.
set(PYTHONQT_GENERATED_PATH "${PYTHONQT_GENERATED_PATH}/generated_cpp")
#set(PYTHONQT_GENERATED_PATH "${PYTHONQT_GENERATED_PATH}/generated_cpp_${QT_VERSION_MAJOR}${QT_VERSION_MINOR}")

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

# Determine the Qt include prefix
get_target_property(_qtcore_include_dirs Qt${QT_VERSION_MAJOR}::Core INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(all_qt_include_dirs Qt${QT_VERSION_MAJOR}::Widgets INTERFACE_INCLUDE_DIRECTORIES)
set(all_qt_include_dirs "")
set(include_path_seperator ":")
foreach(_qtcore_include_dir IN LISTS _qtcore_include_dirs)
    # Some versions of Qt may have subdirectories like "QtCore" for header files
    if (IS_DIRECTORY "${_qtcore_include_dir}/QtCore")
        set(_qt_include_prefix "${_qtcore_include_dir}")
        list(APPEND all_qt_include_dirs "${_qt_include_prefix}")
        break()
    else()
        # If frameworks, then no QtCore should be suffixed
        if (IS_DIRECTORY "${_qtcore_include_dir}")
            set(_qt_include_prefix "${_qtcore_include_dir}")
            list(APPEND all_qt_include_dirs "${_qt_include_prefix}")
            break()
        endif()
    endif()
endforeach()



find_package(Qt6 COMPONENTS Core Gui Widgets Xml OpenGL Network Core5Compat REQUIRED)
set(QT6_COMPONENTS Core Gui Widgets Xml OpenGL Network)
set(QT6_COMPONENTS_FOUND)
foreach(comp IN LISTS QT6_COMPONENTS)
    if(Qt6${comp}_FOUND)
        list(APPEND QT6_COMPONENTS_FOUND Qt6::${comp})
    endif()
endforeach()
unset(QT6_COMPONENTS)
message(STATUS "Found Qt6 components: ${QT6_COMPONENTS_FOUND}")

# Initialize include directory list
set(ALL_QT6_INCLUDE_DIRS)
# Loop through each Qt6 target and collect its INTERFACE_INCLUDE_DIRECTORIES
foreach(qt_target IN LISTS QT6_COMPONENTS_FOUND)
    get_target_property(_incs ${qt_target} INTERFACE_INCLUDE_DIRECTORIES)
    if(_incs)
        foreach(_inc IN LISTS _incs)
            # Check if the string ends with ".framework/Headers"
            if(_inc MATCHES "\\.framework/Headers$")
                # Remove the suffix
                string(REGEX REPLACE "/[^/]+\\.framework/Headers$" "" framework_path "${_inc}")
                list(APPEND ALL_QT6_INCLUDE_DIRS ${framework_path})
            elseif(_inc MATCHES "\\.framework$")
                # Remove the suffix
                string(REGEX REPLACE "/[^/]+\\.framework$" "" framework_path "${_inc}")
                list(APPEND ALL_QT6_INCLUDE_DIRS ${framework_path})
            else()
                list(APPEND ALL_QT6_INCLUDE_DIRS ${_inc})
            endif()
        endforeach()

    endif()
endforeach()
unset(QT6_COMPONENTS_FOUND)

# Optionally remove duplicates
list(REMOVE_DUPLICATES ALL_QT6_INCLUDE_DIRS)

# Copy resource to the build tree
message(STATUS "Copying resource files from ${CMAKE_CURRENT_LIST_DIR} to ${CMAKE_CURRENT_BINARY_DIR}")
file(GLOB resources_files *.txt *.xml qtscript_masterinclude.h)
foreach(resources_file IN LISTS resources_files)
    configure_file(${resources_file} ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
endforeach()
set(gen_masterinclude_file "${CMAKE_CURRENT_BINARY_DIR}/qtscript_masterinclude.h")

if(QT_VERSION_MAJOR EQUAL 5)
    set(gen_build_all_file "${CMAKE_CURRENT_SOURCE_DIR}/build_all.txt")
else()
    # For Qt6, we need to generate a different master include file
    set(gen_build_all_file "${CMAKE_CURRENT_BINARY_DIR}/build_all.txt")
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/build_all_qt6.txt ${gen_build_all_file} COPYONLY)
endif()


string(JOIN ":" CMD_LINE_COLON_SEPARATED_INCLUDE_DIRS ${ALL_QT6_INCLUDE_DIRS})
set(QTDIR ${QT${QT_VERSION_MAJOR}_INSTALL_PREFIX} )
add_custom_command(OUTPUT ${PYTHONQT_WRAPPER_SOURCES}
    COMMAND ${CMAKE_COMMAND} -E env  QTDIR=${QTDIR} PYTHONQT_INCLUDE=${_qt_include_prefix}
        --modify ${LIBRARY_SEARCH_PATH}=path_list_prepend:$<TARGET_FILE_DIR:Qt${QT_VERSION_MAJOR}::Widgets>
    $<TARGET_FILE:${PROJECT_NAME}>
        # FOR DEBUGGING --dump-object-tree
        # FOR DEBUGGING --debug-level=full
        --include-paths="${CMD_LINE_COLON_SEPARATED_INCLUDE_DIRS}"
        --output-dir=${PYTHONQT_GENERATED_PATH}
        ${gen_masterinclude_file} ${gen_build_all_file}
    COMMENT "Generating PythonQt wrapper sources:  $<TARGET_FILE:${PROJECT_NAME}>"
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
