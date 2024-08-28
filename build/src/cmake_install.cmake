# Install script for directory: /home/fauzan/ksrc/kirigami/src

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2" TYPE DIRECTORY FILES "/home/fauzan/ksrc/kirigami/src/controls/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-dailog-cancel.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-dailog-cancel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-dailog-ok.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-dailog-ok.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/128-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-dailog-cancel.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-dailog-cancel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-dailog-ok.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-dailog-ok.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/16-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/22-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/22-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/22-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/22-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-dailog-cancel.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-dailog-cancel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-dailog-ok.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-dailog-ok.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/32-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-dailog-cancel.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-dailog-cancel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-dailog-ok.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-dailog-ok.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/48-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-dailog-cancel.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-dailog-cancel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-dailog-ok.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-dailog-ok.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-input-pwd-hidden.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-input-pwd-hidden.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-input-pwd-visible.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-input-pwd-visible.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-search-bar.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-search-bar.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-search-bar.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-search-bar.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-search-clear.png" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-search-clear.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/actions" TYPE FILE RENAME "jing-search-clear.svg" FILES "/home/fauzan/ksrc/kirigami/src/controls/image/64-actions-jing-search-clear.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/styles" TYPE DIRECTORY FILES "/home/fauzan/ksrc/kirigami/src/styles/org.kde.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/styles" TYPE DIRECTORY FILES "/home/fauzan/ksrc/kirigami/src/styles/Material")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/mkspecs/modules" TYPE FILE FILES "/home/fauzan/ksrc/kirigami/build/src/qt_Kirigami2.pri")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2" TYPE SHARED_LIBRARY FILES "/home/fauzan/ksrc/kirigami/build/bin/libkirigamiplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so"
         OLD_RPATH "/home/fauzan/ksrc/kirigami/build/bin:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aarch64-linux-gnu/qt5/qml/org/kde/kirigami.2/libkirigamiplugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/fauzan/ksrc/kirigami/build/src/CMakeFiles/kirigamiplugin.dir/install-cxx-module-bmi-Debug.cmake" OPTIONAL)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/fauzan/ksrc/kirigami/build/src/libkirigami/cmake_install.cmake")

endif()

