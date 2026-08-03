#-----------------------------------------------------------------------------
# Build PythonQt_QtAll bindings as a dedicated shared library.

set(pythonqt_qtall_sources
  PythonQt_QtAll.cpp
)

set(pythonqt_qtall_headers
  PythonQt_QtAll.h
)

set(pythonqt_qtall_moc_headers)
set(pythonqt_qtall_components)
set(pythonqt_qtall_defines)

foreach(qtlib ${qtlibs})
  set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})

  if(PythonQt_Wrap_Qt${qt_wrapped_lib})
    string(TOUPPER ${qt_wrapped_lib} qt_wrapped_lib_uppercase)
    list(APPEND pythonqt_qtall_defines PYTHONQT_WITH_${qt_wrapped_lib_uppercase})

    list(APPEND pythonqt_qtall_components ${qtlib} ${qt_wrapped_lib_depends_${qt_wrapped_lib}})

    set(file_prefix com_trolltech_qt_${qt_wrapped_lib}/com_trolltech_qt_${qt_wrapped_lib})

    # Collect generated wrapper files without relying on a fixed index range.
    file(GLOB generated_cpp_files "${PythonQt_GENERATED_PATH}/${file_prefix}[0-9]*.cpp")
    list(SORT generated_cpp_files)
    list(APPEND pythonqt_qtall_sources ${generated_cpp_files})

    file(GLOB generated_h_files "${PythonQt_GENERATED_PATH}/${file_prefix}[0-9]*.h")
    list(SORT generated_h_files)
    list(APPEND pythonqt_qtall_moc_headers ${generated_h_files})

    set(init_cpp_file "${PythonQt_GENERATED_PATH}/${file_prefix}_init.cpp")
    if(EXISTS "${init_cpp_file}")
      list(APPEND pythonqt_qtall_sources ${init_cpp_file})
    endif()
  endif()
endforeach()

list(REMOVE_DUPLICATES pythonqt_qtall_components)

qt_wrap_cpp(pythonqt_qtall_sources ${pythonqt_qtall_moc_headers})

add_library(PythonQt_QtAll SHARED ${pythonqt_qtall_sources})
set_target_properties(PythonQt_QtAll PROPERTIES DEFINE_SYMBOL PYTHONQT_QTALL_EXPORTS)

set_target_properties(PythonQt_QtAll
  PROPERTIES
    AUTOMOC TRUE
)

# Disable AUTOMOC for specified moc sources to avoid QMetaTypeId specialization conflicts.
foreach(moc_source IN LISTS pythonqt_qtall_moc_headers)
  set_property(SOURCE ${moc_source} PROPERTY SKIP_AUTOMOC ON)
endforeach()

target_compile_options(PythonQt_QtAll PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/bigobj>
)

target_compile_definitions(PythonQt_QtAll
  PRIVATE
    ${pythonqt_qtall_defines}
)

target_include_directories(PythonQt_QtAll
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${PythonQt_INSTALL_INCLUDE_DIR}>
)

target_link_libraries(PythonQt_QtAll
  PUBLIC
    PythonQt
)

foreach(qt_component IN LISTS pythonqt_qtall_components)
  target_link_libraries(PythonQt_QtAll PUBLIC Qt${PythonQt_QT_VERSION}::${qt_component})
endforeach()

install(TARGETS PythonQt_QtAll
  RUNTIME DESTINATION ${PythonQt_INSTALL_RUNTIME_DIR}
  LIBRARY DESTINATION ${PythonQt_INSTALL_LIBRARY_DIR}
  ARCHIVE DESTINATION ${PythonQt_INSTALL_ARCHIVE_DIR}
)
install(FILES ${pythonqt_qtall_headers} DESTINATION ${PythonQt_INSTALL_INCLUDE_DIR})
