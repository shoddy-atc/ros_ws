# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ignition_plugin_lecture_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ignition_plugin_lecture_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ignition_plugin_lecture_FOUND FALSE)
  elseif(NOT ignition_plugin_lecture_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ignition_plugin_lecture_FOUND FALSE)
  endif()
  return()
endif()
set(_ignition_plugin_lecture_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ignition_plugin_lecture_FIND_QUIETLY)
  message(STATUS "Found ignition_plugin_lecture: 0.0.0 (${ignition_plugin_lecture_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ignition_plugin_lecture' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ignition_plugin_lecture_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ignition_plugin_lecture_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${ignition_plugin_lecture_DIR}/${_extra}")
endforeach()
