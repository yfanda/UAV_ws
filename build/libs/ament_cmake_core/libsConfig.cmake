# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_libs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED libs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(libs_FOUND FALSE)
  elseif(NOT libs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(libs_FOUND FALSE)
  endif()
  return()
endif()
set(_libs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT libs_FIND_QUIETLY)
  message(STATUS "Found libs: 0.0.0 (${libs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'libs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${libs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(libs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${libs_DIR}/${_extra}")
endforeach()
