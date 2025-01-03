project(PythonQtGenerator LANGUAGES CXX)

add_subdirectory(parser)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Xml REQUIRED)

file(GLOB SOURCES *.h *.cpp *.qrc)
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_LIST_DIR}/qtscript_masterinclude.h")

add_executable(${PROJECT_NAME})
  
target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Xml
    rxx
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})

set(PYTHONQT_GENERATED_PATH ${CMAKE_CURRENT_BINARY_DIR}/../generated_cpp PARENT_SCOPE)

if(NOT EXISTS ${PYTHONQT_GENERATED_PATH})
    file(GLOB resources_files *.txt *.xml qtscript_masterinclude.h)
    foreach(resources_file IN LISTS resources_files)
        configure_file(${resources_file} ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
    endforeach()

    if(WIN32)
        set(LIBRARY_SEARCH_PATH PATH)
    else()
        set(LIBRARY_SEARCH_PATH LD_LIBRARY_PATH)
    endif()

    add_custom_target(GenerateCpp
        COMMAND ${CMAKE_COMMAND} -E env --modify ${LIBRARY_SEARCH_PATH}=path_list_prepend:$<TARGET_FILE_DIR:Qt${QT_VERSION_MAJOR}::Widgets> $<TARGET_FILE:${PROJECT_NAME}>
        WORKING_DIRECTORY $<TARGET_FILE_DIR:${PROJECT_NAME}>
        VERBATIM USES_TERMINAL
    )
endif()

