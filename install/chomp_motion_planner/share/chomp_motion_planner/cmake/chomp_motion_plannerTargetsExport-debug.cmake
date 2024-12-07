#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "chomp_motion_planner::chomp_motion_planner" for configuration "Debug"
set_property(TARGET chomp_motion_planner::chomp_motion_planner APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(chomp_motion_planner::chomp_motion_planner PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libchomp_motion_planner.so.2.5.6"
  IMPORTED_SONAME_DEBUG "libchomp_motion_planner.so.2.5.6"
  )

list(APPEND _IMPORT_CHECK_TARGETS chomp_motion_planner::chomp_motion_planner )
list(APPEND _IMPORT_CHECK_FILES_FOR_chomp_motion_planner::chomp_motion_planner "${_IMPORT_PREFIX}/lib/libchomp_motion_planner.so.2.5.6" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
