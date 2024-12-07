#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_resources_prbt_ikfast_manipulator_plugin::prbt_manipulator_moveit_ikfast_plugin" for configuration "Debug"
set_property(TARGET moveit_resources_prbt_ikfast_manipulator_plugin::prbt_manipulator_moveit_ikfast_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(moveit_resources_prbt_ikfast_manipulator_plugin::prbt_manipulator_moveit_ikfast_plugin PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libprbt_manipulator_moveit_ikfast_plugin.so"
  IMPORTED_SONAME_DEBUG "libprbt_manipulator_moveit_ikfast_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_resources_prbt_ikfast_manipulator_plugin::prbt_manipulator_moveit_ikfast_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_resources_prbt_ikfast_manipulator_plugin::prbt_manipulator_moveit_ikfast_plugin "${_IMPORT_PREFIX}/lib/libprbt_manipulator_moveit_ikfast_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
