#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "common_msgs::common_msgs__rosidl_typesupport_fastrtps_c" for configuration "Debug"
set_property(TARGET common_msgs::common_msgs__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(common_msgs::common_msgs__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcommon_msgs__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_DEBUG "libcommon_msgs__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS common_msgs::common_msgs__rosidl_typesupport_fastrtps_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_common_msgs::common_msgs__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libcommon_msgs__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
