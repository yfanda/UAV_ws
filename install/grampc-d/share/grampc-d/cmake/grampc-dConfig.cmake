# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_grampc-d_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED grampc-d_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(grampc-d_FOUND FALSE)
  elseif(NOT grampc-d_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(grampc-d_FOUND FALSE)
  endif()
  return()
endif()
set(_grampc-d_CONFIG_INCLUDED TRUE)

# output package information
if(NOT grampc-d_FIND_QUIETLY)
  message(STATUS "Found grampc-d: 0.0.0 (${grampc-d_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'grampc-d' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${grampc-d_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(grampc-d_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${grampc-d_DIR}/${_extra}")
endforeach()
