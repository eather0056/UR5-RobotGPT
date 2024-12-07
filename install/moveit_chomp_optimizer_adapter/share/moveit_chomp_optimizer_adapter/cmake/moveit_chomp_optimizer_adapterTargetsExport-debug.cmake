#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter" for configuration "Debug"
set_property(TARGET moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmoveit_chomp_optimizer_adapter.so.2.5.6"
  IMPORTED_SONAME_DEBUG "libmoveit_chomp_optimizer_adapter.so.2.5.6"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter "${_IMPORT_PREFIX}/lib/libmoveit_chomp_optimizer_adapter.so.2.5.6" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
