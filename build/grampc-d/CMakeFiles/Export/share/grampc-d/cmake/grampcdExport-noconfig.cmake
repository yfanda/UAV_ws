#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "grampc-d::grampcd" for configuration ""
set_property(TARGET grampc-d::grampcd APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(grampc-d::grampcd PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgrampcd.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS grampc-d::grampcd )
list(APPEND _IMPORT_CHECK_FILES_FOR_grampc-d::grampcd "${_IMPORT_PREFIX}/lib/libgrampcd.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
