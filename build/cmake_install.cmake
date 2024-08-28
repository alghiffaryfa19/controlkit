# Install script for directory: /home/fauzan/ksrc/kirigami

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2" TYPE FILE FILES
    "/home/fauzan/ksrc/kirigami/build/KF5Kirigami2Config.cmake"
    "/home/fauzan/ksrc/kirigami/build/KF5Kirigami2ConfigVersion.cmake"
    "/home/fauzan/ksrc/kirigami/KF5Kirigami2Macros.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2/KF5Kirigami2Targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2/KF5Kirigami2Targets.cmake"
         "/home/fauzan/ksrc/kirigami/build/CMakeFiles/Export/78107bdef5744690aa81f110ea6027cc/KF5Kirigami2Targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2/KF5Kirigami2Targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2/KF5Kirigami2Targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2" TYPE FILE FILES "/home/fauzan/ksrc/kirigami/build/CMakeFiles/Export/78107bdef5744690aa81f110ea6027cc/KF5Kirigami2Targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/cmake/KF5Kirigami2" TYPE FILE FILES "/home/fauzan/ksrc/kirigami/build/CMakeFiles/Export/78107bdef5744690aa81f110ea6027cc/KF5Kirigami2Targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share" TYPE DIRECTORY FILES "/home/fauzan/ksrc/kirigami/build/locale")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/fauzan/ksrc/kirigami/build/src/cmake_install.cmake")
  include("/home/fauzan/ksrc/kirigami/build/templates/cmake_install.cmake")
  include("/home/fauzan/ksrc/kirigami/build/autotests/cmake_install.cmake")
  include("/home/fauzan/ksrc/kirigami/build/jingosTheme/cmake_install.cmake")
  include("/home/fauzan/ksrc/kirigami/build/jingosDisplay/cmake_install.cmake")
  include("/home/fauzan/ksrc/kirigami/build/jingosMultimedia/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/fauzan/ksrc/kirigami/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
