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

# Utility rule file for jingosMultimediaModule_autogen.

# Include any custom commands dependencies for this target.
include jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/progress.make

jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen: jingosMultimedia/jingosMultimediaModule_autogen/timestamp

jingosMultimedia/jingosMultimediaModule_autogen/timestamp: /usr/lib/qt5/bin/moc
jingosMultimedia/jingosMultimediaModule_autogen/timestamp: jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fauzan/ksrc/kirigami/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target jingosMultimediaModule"
	cd /home/fauzan/ksrc/kirigami/build/jingosMultimedia && /usr/bin/cmake -E cmake_autogen /home/fauzan/ksrc/kirigami/build/jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/AutogenInfo.json Debug
	cd /home/fauzan/ksrc/kirigami/build/jingosMultimedia && /usr/bin/cmake -E touch /home/fauzan/ksrc/kirigami/build/jingosMultimedia/jingosMultimediaModule_autogen/timestamp

jingosMultimediaModule_autogen: jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen
jingosMultimediaModule_autogen: jingosMultimedia/jingosMultimediaModule_autogen/timestamp
jingosMultimediaModule_autogen: jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/build.make
.PHONY : jingosMultimediaModule_autogen

# Rule to build all files generated by this target.
jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/build: jingosMultimediaModule_autogen
.PHONY : jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/build

jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/clean:
	cd /home/fauzan/ksrc/kirigami/build/jingosMultimedia && $(CMAKE_COMMAND) -P CMakeFiles/jingosMultimediaModule_autogen.dir/cmake_clean.cmake
.PHONY : jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/clean

jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/depend:
	cd /home/fauzan/ksrc/kirigami/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fauzan/ksrc/kirigami /home/fauzan/ksrc/kirigami/jingosMultimedia /home/fauzan/ksrc/kirigami/build /home/fauzan/ksrc/kirigami/build/jingosMultimedia /home/fauzan/ksrc/kirigami/build/jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : jingosMultimedia/CMakeFiles/jingosMultimediaModule_autogen.dir/depend

