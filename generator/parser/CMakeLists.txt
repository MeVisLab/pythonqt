project(rxx LANGUAGES CXX)
add_subdirectory(rpp)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

file(GLOB SOURCES *.h *.cpp)

add_library(${PROJECT_NAME} INTERFACE)

target_sources(${PROJECT_NAME} INTERFACE
    ${SOURCES}
)

target_link_libraries(${PROJECT_NAME} INTERFACE
    Qt${QT_VERSION_MAJOR}::Core
    rpp
)

target_include_directories(${PROJECT_NAME} INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}
)

target_compile_definitions(${PROJECT_NAME} INTERFACE RXX_ALLOCATOR_INIT_0)
