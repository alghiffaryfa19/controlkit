# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fauzan/ksrc/kirigami

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fauzan/ksrc/kirigami/build

# Utility rule file for KF5ConfigWidgets_QCH.

# Include any custom commands dependencies for this target.
include jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/compiler_depend.make

# Include the progress variables for this target.
include jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/progress.make

KF5ConfigWidgets_QCH: jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/build.make
.PHONY : KF5ConfigWidgets_QCH

# Rule to build all files generated by this target.
jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/build: KF5ConfigWidgets_QCH
.PHONY : jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/build

jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/clean:
	cd /home/fauzan/ksrc/kirigami/build/jingosMultimedia && $(CMAKE_COMMAND) -P CMakeFiles/KF5ConfigWidgets_QCH.dir/cmake_clean.cmake
.PHONY : jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/clean

jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/depend:
	cd /home/fauzan/ksrc/kirigami/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fauzan/ksrc/kirigami /home/fauzan/ksrc/kirigami/jingosMultimedia /home/fauzan/ksrc/kirigami/build /home/fauzan/ksrc/kirigami/build/jingosMultimedia /home/fauzan/ksrc/kirigami/build/jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : jingosMultimedia/CMakeFiles/KF5ConfigWidgets_QCH.dir/depend

