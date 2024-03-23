#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "grampc-d::grampcd" for configuration "Debug"
set_property(TARGET grampc-d::grampcd APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(grampc-d::grampcd PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgrampcd.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS grampc-d::grampcd )
list(APPEND _IMPORT_CHECK_FILES_FOR_grampc-d::grampcd "${_IMPORT_PREFIX}/lib/libgrampcd.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
