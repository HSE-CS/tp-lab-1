# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/129/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/129/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task1_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task1_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task1_lib.dir/flags.make

CMakeFiles/task1_lib.dir/src/task1.cpp.o: CMakeFiles/task1_lib.dir/flags.make
CMakeFiles/task1_lib.dir/src/task1.cpp.o: ../src/task1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task1_lib.dir/src/task1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task1_lib.dir/src/task1.cpp.o -c /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/task1.cpp

CMakeFiles/task1_lib.dir/src/task1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task1_lib.dir/src/task1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/task1.cpp > CMakeFiles/task1_lib.dir/src/task1.cpp.i

CMakeFiles/task1_lib.dir/src/task1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task1_lib.dir/src/task1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/task1.cpp -o CMakeFiles/task1_lib.dir/src/task1.cpp.s

# Object files for target task1_lib
task1_lib_OBJECTS = \
"CMakeFiles/task1_lib.dir/src/task1.cpp.o"

# External object files for target task1_lib
task1_lib_EXTERNAL_OBJECTS =

libtask1_lib.a: CMakeFiles/task1_lib.dir/src/task1.cpp.o
libtask1_lib.a: CMakeFiles/task1_lib.dir/build.make
libtask1_lib.a: CMakeFiles/task1_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libtask1_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/task1_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task1_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task1_lib.dir/build: libtask1_lib.a

.PHONY : CMakeFiles/task1_lib.dir/build

CMakeFiles/task1_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task1_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task1_lib.dir/clean

CMakeFiles/task1_lib.dir/depend:
	cd /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1 /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1 /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles/task1_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task1_lib.dir/depend

