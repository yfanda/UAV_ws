#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libs::grampc" for configuration "Debug"
set_property(TARGET libs::grampc APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libs::grampc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C;CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgrampc.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS libs::grampc )
list(APPEND _IMPORT_CHECK_FILES_FOR_libs::grampc "${_IMPORT_PREFIX}/lib/libgrampc.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
