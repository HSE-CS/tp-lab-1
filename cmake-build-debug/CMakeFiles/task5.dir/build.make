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
include CMakeFiles/task5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task5.dir/flags.make

CMakeFiles/task5.dir/src/main5.cpp.o: CMakeFiles/task5.dir/flags.make
CMakeFiles/task5.dir/src/main5.cpp.o: ../src/main5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task5.dir/src/main5.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task5.dir/src/main5.cpp.o -c /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/main5.cpp

CMakeFiles/task5.dir/src/main5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task5.dir/src/main5.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/main5.cpp > CMakeFiles/task5.dir/src/main5.cpp.i

CMakeFiles/task5.dir/src/main5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task5.dir/src/main5.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/src/main5.cpp -o CMakeFiles/task5.dir/src/main5.cpp.s

# Object files for target task5
task5_OBJECTS = \
"CMakeFiles/task5.dir/src/main5.cpp.o"

# External object files for target task5
task5_EXTERNAL_OBJECTS =

task5: CMakeFiles/task5.dir/src/main5.cpp.o
task5: CMakeFiles/task5.dir/build.make
task5: libtask5_lib.a
task5: CMakeFiles/task5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task5.dir/build: task5

.PHONY : CMakeFiles/task5.dir/build

CMakeFiles/task5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task5.dir/clean

CMakeFiles/task5.dir/depend:
	cd /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1 /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1 /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug /home/toliman/Projects/HSE-CS/TP-LAB-1/tp-Lab-1/cmake-build-debug/CMakeFiles/task5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task5.dir/depend

