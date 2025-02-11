project(Core LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Widgets REQUIRED)
find_package(Python3 COMPONENTS Development REQUIRED)

file(GLOB SOURCES *.h *.cpp)

if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED)
    target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_EXPORTS)
else()
    add_library(${PROJECT_NAME} STATIC)
    target_compile_definitions(${PROJECT_NAME} PUBLIC PYTHONQT_STATIC)
endif()

target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
    ${PYTHONQT_WRAPPER_CORE_BUILTIN_SOURCES}
    ${PYTHONQT_WRAPPER_GUI_BUILTIN_SOURCES}
)

add_dependencies(${PROJECT_NAME} PythonQtWrapper)

file(GLOB PUBLIC_HEADER *.h)

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME PythonQt-${PYTHONQT_SUFFIX}
    PUBLIC_HEADER "${PUBLIC_HEADER}"
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::CorePrivate
    Qt${QT_VERSION_MAJOR}::Widgets
    Python3::Python
)

target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_EXPORTS PYTHONQT_CATCH_ALL_EXCEPTIONS)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE "/bigobj")
elseif(MINGW)
    target_compile_options(${PROJECT_NAME} PRIVATE "-Wa,-mbig-obj")
endif()

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
