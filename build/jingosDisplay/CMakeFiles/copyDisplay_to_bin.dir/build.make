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

# Utility rule file for copyDisplay_to_bin.

# Include any custom commands dependencies for this target.
include jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/compiler_depend.make

# Include the progress variables for this target.
include jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/progress.make

jingosDisplay/CMakeFiles/copyDisplay_to_bin:
	cd /home/fauzan/ksrc/kirigami/build/jingosDisplay && /usr/bin/cmake -E make_directory /home/fauzan/ksrc/kirigami/build/bin/jingos/display/
	cd /home/fauzan/ksrc/kirigami/build/jingosDisplay && /usr/bin/cmake -E copy /home/fauzan/ksrc/kirigami/build/bin/libjingosDisplay.so /home/fauzan/ksrc/kirigami/build/bin/jingos/display/

copyDisplay_to_bin: jingosDisplay/CMakeFiles/copyDisplay_to_bin
copyDisplay_to_bin: jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/build.make
.PHONY : copyDisplay_to_bin

# Rule to build all files generated by this target.
jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/build: copyDisplay_to_bin
.PHONY : jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/build

jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/clean:
	cd /home/fauzan/ksrc/kirigami/build/jingosDisplay && $(CMAKE_COMMAND) -P CMakeFiles/copyDisplay_to_bin.dir/cmake_clean.cmake
.PHONY : jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/clean

jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/depend:
	cd /home/fauzan/ksrc/kirigami/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fauzan/ksrc/kirigami /home/fauzan/ksrc/kirigami/jingosDisplay /home/fauzan/ksrc/kirigami/build /home/fauzan/ksrc/kirigami/build/jingosDisplay /home/fauzan/ksrc/kirigami/build/jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : jingosDisplay/CMakeFiles/copyDisplay_to_bin.dir/depend

