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

# Utility rule file for tsfiles-60bc7068636831fa74e7e24938b253bc.

# Include any custom commands dependencies for this target.
include CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/progress.make

CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fauzan/ksrc/kirigami/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ts..."
	/usr/bin/cmake -DPYTHON_EXECUTABLE=/usr/bin/python3 -D_ki18n_pmap_compile_script=/usr/lib/aarch64-linux-gnu/cmake/KF5I18n/ts-pmap-compile.py -DCOPY_TO=/home/fauzan/ksrc/kirigami/build/locale -DPO_DIR=/home/fauzan/ksrc/kirigami/po -P /usr/lib/aarch64-linux-gnu/cmake/KF5I18n/build-tsfiles.cmake

tsfiles-60bc7068636831fa74e7e24938b253bc: CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc
tsfiles-60bc7068636831fa74e7e24938b253bc: CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/build.make
.PHONY : tsfiles-60bc7068636831fa74e7e24938b253bc

# Rule to build all files generated by this target.
CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/build: tsfiles-60bc7068636831fa74e7e24938b253bc
.PHONY : CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/build

CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/clean

CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/depend:
	cd /home/fauzan/ksrc/kirigami/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fauzan/ksrc/kirigami /home/fauzan/ksrc/kirigami /home/fauzan/ksrc/kirigami/build /home/fauzan/ksrc/kirigami/build /home/fauzan/ksrc/kirigami/build/CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tsfiles-60bc7068636831fa74e7e24938b253bc.dir/depend

