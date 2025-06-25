project(rpp LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

if(FORCE_BUILD_QT5)
  find_package(Qt5 NAMES Qt5 REQUIRED COMPONENTS Core)
else()
  find_package(Qt6 NAMES Qt6 REQUIRED COMPONENTS Core)
endif()

file(GLOB SOURCES *.h preprocessor.cpp)

add_library(${PROJECT_NAME} INTERFACE)

target_sources(${PROJECT_NAME} INTERFACE ${SOURCES})

target_link_libraries(${PROJECT_NAME} INTERFACE Qt${QT_VERSION_MAJOR}::Core)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_LIST_DIR})

