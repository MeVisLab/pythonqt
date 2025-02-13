project(PythonQtTest LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Test REQUIRED)

file(GLOB SOURCES *.h *.cpp)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Test
    Core
    QtAll
)

add_test(NAME ${PROJECT_NAME}
    COMMAND $<TARGET_FILE:${PROJECT_NAME}>
    WORKING_DIRECTORY $<TARGET_FILE_DIR:${PROJECT_NAME}>
)

if(WIN32)
    set(LIBRARY_SEARCH_PATH PATH)
else()
    set(LIBRARY_SEARCH_PATH LD_LIBRARY_PATH)
endif()

set_tests_properties(${PROJECT_NAME} PROPERTIES
    ENVIRONMENT_MODIFICATION "${LIBRARY_SEARCH_PATH}=path_list_prepend:$<TARGET_FILE_DIR:Qt${QT_VERSION_MAJOR}::Widgets>"
)
