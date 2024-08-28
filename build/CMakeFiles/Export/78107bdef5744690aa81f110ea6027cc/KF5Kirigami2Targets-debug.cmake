#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::KF5Kirigami2" for configuration "Debug"
set_property(TARGET KF5::KF5Kirigami2 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KF5Kirigami2 PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Qml;Qt5::Quick;Qt5::QuickControls2;Qt5::DBus"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/aarch64-linux-gnu/libKF5Kirigami2.so.SOVERSION"
  IMPORTED_SONAME_DEBUG "libKF5Kirigami2.so.SOVERSION"
  )

list(APPEND _cmake_import_check_targets KF5::KF5Kirigami2 )
list(APPEND _cmake_import_check_files_for_KF5::KF5Kirigami2 "${_IMPORT_PREFIX}/lib/aarch64-linux-gnu/libKF5Kirigami2.so.SOVERSION" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
