project(Core LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)


if(BUILD_SHARED_LIBS)
    add_library(${PROJECT_NAME} SHARED)
    target_compile_definitions(${PROJECT_NAME} PRIVATE PYTHONQT_EXPORTS)
else()
    add_library(${PROJECT_NAME} STATIC)
    target_compile_definitions(${PROJECT_NAME} PUBLIC PYTHONQT_STATIC)
endif()

# The sources are private, the headers are added publicly
# explicitly set the source files the same as from
# src.pri
set(Core_SOURCES
  gui/PythonQtScriptingConsole.cpp
  PythonQt.cpp
  PythonQtBoolResult.cpp
  PythonQtClassInfo.cpp
  PythonQtClassWrapper.cpp
  PythonQtConversion.cpp
  PythonQtImporter.cpp
  PythonQtInstanceWrapper.cpp
  PythonQtMethodInfo.cpp
  PythonQtMisc.cpp
  PythonQtObjectPtr.cpp
  PythonQtProperty.cpp
  PythonQtQFileImporter.cpp
  PythonQtSignal.cpp
  PythonQtSignalReceiver.cpp
  PythonQtSlot.cpp
  PythonQtSlotDecorator.cpp
  PythonQtStdDecorators.cpp
  PythonQtStdIn.cpp
  PythonQtStdOut.cpp
  PythonQtThreadSupport.cpp
)
target_sources(${PROJECT_NAME} PRIVATE
    ${Core_SOURCES}
    ${PYTHONQT_WRAPPER_CORE_BUILTIN_SOURCES}
    ${PYTHONQT_WRAPPER_GUI_BUILTIN_SOURCES}
)
unset(Core_SOURCES)

set(Core_PUBLIC_HEADER
  PythonQt.h
  PythonQtStdDecorators.h
  PythonQtClassInfo.h
  PythonQtImporter.h
  PythonQtObjectPtr.h
  PythonQtProperty.h
  PythonQtSignal.h
  PythonQtSlot.h
  PythonQtSlotDecorator.h
  PythonQtStdIn.h
  PythonQtStdOut.h
  PythonQtMisc.h
  PythonQtMethodInfo.h
  PythonQtImportFileInterface.h
  PythonQtConversion.h
  PythonQtSignalReceiver.h
  PythonQtInstanceWrapper.h
  PythonQtClassWrapper.h
  PythonQtCppWrapperFactory.h
  PythonQtQFileImporter.h
  PythonQtQFileImporter.h
  PythonQtVariants.h
  gui/PythonQtScriptingConsole.h
  PythonQtSystem.h
  PythonQtUtils.h
  PythonQtBoolResult.h
  PythonQtThreadSupport.h
)
set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME PythonQt-${PYTHONQT_SUFFIX}
    PUBLIC_HEADER ${Core_PUBLIC_HEADER}
)
unset(Core_PUBLIC_HEADER)

add_dependencies(${PROJECT_NAME} PythonQtWrapper)

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
