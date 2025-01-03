project(QtAll LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

file(GLOB SOURCES *.h *.cpp)

if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED)
    target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_QTALL_EXPORTS)
else()
    add_library(${PROJECT_NAME} STATIC)
    target_compile_definitions(${PROJECT_NAME} PUBLIC PYTHONQT_QTALL_STATIC)
endif()

target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
    ${GENERATE_SOURCES}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Core
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})


list(APPEND QTMODULES Core Gui Svg Sql Network OpenGL Xml XmlPatterns Multimedia Qml Quick UiTools WebEngineWidgets WebKit)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS ${QTMODULES})

foreach(QTMODULE IN LISTS QTMODULES)
    if(NOT TARGET Qt${QT_VERSION_MAJOR}::${QTMODULE})
        continue()
    endif()

    string(TOLOWER ${QTMODULE} qtmodule)
    file(GLOB GENERATE_SOURCES
        ${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_${qtmodule}/*.h
        ${PYTHONQT_GENERATED_PATH}/com_trolltech_qt_${qtmodule}/*.cpp
    )
    target_sources(${PROJECT_NAME} PRIVATE ${GENERATE_SOURCES})
    target_link_libraries(${PROJECT_NAME} PUBLIC Qt${QT_VERSION_MAJOR}::${QTMODULE})

    string(TOUPPER ${QTMODULE} qtmodule)
    target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_WITH_${qtmodule})
endforeach()

if(TARGET Qt${QT_VERSION_MAJOR}::Gui)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets PrintSupport REQUIRED)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::PrintSupport
    )
endif()

if(TARGET Qt${QT_VERSION_MAJOR}::Svg AND QT_VERSION_MAJOR VERSION_GREATER_EQUAL 6)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS SvgWidgets REQUIRED)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt${QT_VERSION_MAJOR}::SvgWidgets
    )
endif()

if(TARGET Qt${QT_VERSION_MAJOR}::Multimedia)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS MultimediaWidgets REQUIRED)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt${QT_VERSION_MAJOR}::MultimediaWidgets
    )
endif()

if(TARGET Qt${QT_VERSION_MAJOR}::Quick)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS QuickWidgets REQUIRED)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt${QT_VERSION_MAJOR}::QuickWidgets
    )
endif()

if(TARGET Qt${QT_VERSION_MAJOR}::WebKit)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS WebKitWidgets REQUIRED)
    target_link_libraries(${PROJECT_NAME} PUBLIC
        Qt${QT_VERSION_MAJOR}::WebKitWidgets
    )
endif()

file(GLOB PUBLIC_HEADER *.h)

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME PythonQt-QtAll-${PYTHONQT_SUFFIX}
    PUBLIC_HEADER "${PUBLIC_HEADER}"
)

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
