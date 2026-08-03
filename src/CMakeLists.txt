#-----------------------------------------------------------------------------
# Sources

set(pythonqt_sources
  PythonQtBoolResult.cpp
  PythonQtClassInfo.cpp
  PythonQtClassWrapper.cpp
  PythonQtConversion.cpp
  PythonQt.cpp
  PythonQtImporter.cpp
  PythonQtInstanceWrapper.cpp
  PythonQtMethodInfo.cpp
  PythonQtMisc.cpp
  PythonQtObjectPtr.cpp
  PythonQtProperty.cpp
  PythonQtQFileImporter.cpp
  PythonQtSignalReceiver.cpp
  PythonQtSlot.cpp
  PythonQtSlotDecorator.cpp
  PythonQtSignal.cpp
  PythonQtStdDecorators.cpp
  PythonQtStdIn.cpp
  PythonQtStdOut.cpp
  PythonQtThreadSupport.cpp
  gui/PythonQtScriptingConsole.cpp

  ${PythonQt_GENERATED_PATH}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin0.cpp
  ${PythonQt_GENERATED_PATH}/com_trolltech_qt_core_builtin/com_trolltech_qt_core_builtin_init.cpp
  ${PythonQt_GENERATED_PATH}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin0.cpp
  ${PythonQt_GENERATED_PATH}/com_trolltech_qt_gui_builtin/com_trolltech_qt_gui_builtin_init.cpp
)

#-----------------------------------------------------------------------------
# List headers. This list is used for the install command.

set(pythonqt_headers
  PythonQtBoolResult.h
  PythonQtClassInfo.h
  PythonQtClassWrapper.h
  PythonQtConversion.h
  PythonQtCppWrapperFactory.h
  PythonQtDoc.h
  PythonQt.h
  PythonQtImporter.h
  PythonQtImportFileInterface.h
  PythonQtInstanceWrapper.h
  PythonQtMethodInfo.h
  PythonQtMisc.h
  PythonQtObjectPtr.h
  PythonQtProperty.h
  PythonQtQFileImporter.h
  PythonQtSignalReceiver.h
  PythonQtSlot.h
  PythonQtSlotDecorator.h
  PythonQtSignal.h
  PythonQtStdDecorators.h
  PythonQtStdIn.h
  PythonQtStdOut.h
  PythonQtSystem.h
  PythonQtThreadSupport.h
  PythonQtUtils.h
  PythonQtVariants.h
  PythonQtPythonInclude.h
)

#-----------------------------------------------------------------------------
# Configure header

# Map the CMake option `PythonQt_USE_RELEASE_PYTHON_FALLBACK` (camelCase)
# to a plain variable used by the configured header. The public-facing
# preprocessor symbol remains `PYTHONQT_USE_RELEASE_PYTHON_FALLBACK`.
set(PYTHONQT_USE_RELEASE_PYTHON_FALLBACK ${PythonQt_USE_RELEASE_PYTHON_FALLBACK})
configure_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/PythonQtConfigure.h.in
  ${CMAKE_CURRENT_BINARY_DIR}/PythonQtConfigure.h
)
unset(PYTHONQT_USE_RELEASE_PYTHON_FALLBACK)

list(APPEND pythonqt_headers
  ${CMAKE_CURRENT_BINARY_DIR}/PythonQtConfigure.h
)

#-----------------------------------------------------------------------------
# Build the library

add_library(PythonQt SHARED ${pythonqt_sources})
set_target_properties(PythonQt PROPERTIES DEFINE_SYMBOL PYTHONQT_EXPORTS)

set_target_properties(PythonQt
  PROPERTIES
    AUTOMOC TRUE
)

target_compile_definitions(PythonQt
  PRIVATE
    $<$<BOOL:${PythonQt_DEBUG}>:PYTHONQT_DEBUG>
    $<$<BOOL:${PythonQt_SUPPORT_NAME_PROPERTY}>:PYTHONQT_SUPPORT_NAME_PROPERTY>
)

target_compile_options(PythonQt PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/bigobj>
)

target_include_directories(PythonQt
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    $<INSTALL_INTERFACE:${PythonQt_INSTALL_INCLUDE_DIR}>
)

target_link_libraries(PythonQt
  PUBLIC
    Python3::Python
    ${QT_LIBRARIES}
  PRIVATE
    # Required for use of "QtCore/private/qmetaobjectbuilder_p.h" in "PythonQt.cpp"
    Qt${PythonQt_QT_VERSION}::CorePrivate
)

#-----------------------------------------------------------------------------
# Install library (on windows, put the dll in 'bin' and the archive in 'lib')

install(TARGETS PythonQt
  RUNTIME DESTINATION ${PythonQt_INSTALL_RUNTIME_DIR}
  LIBRARY DESTINATION ${PythonQt_INSTALL_LIBRARY_DIR}
  ARCHIVE DESTINATION ${PythonQt_INSTALL_ARCHIVE_DIR}
)
install(FILES ${pythonqt_headers} DESTINATION ${PythonQt_INSTALL_INCLUDE_DIR})
