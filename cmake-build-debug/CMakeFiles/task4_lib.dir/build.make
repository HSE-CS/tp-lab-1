# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Disk_D\Programs\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Disk_D\Programs\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Disk_D\My projects\C++\tp-Lab-1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\task4_lib.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\task4_lib.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\task4_lib.dir\flags.make

CMakeFiles\task4_lib.dir\src\task4.cpp.obj: CMakeFiles\task4_lib.dir\flags.make
CMakeFiles\task4_lib.dir\src\task4.cpp.obj: ..\src\task4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task4_lib.dir/src/task4.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\task4_lib.dir\src\task4.cpp.obj /FdCMakeFiles\task4_lib.dir\task4_lib.pdb /FS -c "C:\Disk_D\My projects\C++\tp-Lab-1\src\task4.cpp"
<<

CMakeFiles\task4_lib.dir\src\task4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task4_lib.dir/src/task4.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\task4_lib.dir\src\task4.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Disk_D\My projects\C++\tp-Lab-1\src\task4.cpp"
<<

CMakeFiles\task4_lib.dir\src\task4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task4_lib.dir/src/task4.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\task4_lib.dir\src\task4.cpp.s /c "C:\Disk_D\My projects\C++\tp-Lab-1\src\task4.cpp"
<<

# Object files for target task4_lib
task4_lib_OBJECTS = \
"CMakeFiles\task4_lib.dir\src\task4.cpp.obj"

# External object files for target task4_lib
task4_lib_EXTERNAL_OBJECTS =

task4_lib.lib: CMakeFiles\task4_lib.dir\src\task4.cpp.obj
task4_lib.lib: CMakeFiles\task4_lib.dir\build.make
task4_lib.lib: CMakeFiles\task4_lib.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library task4_lib.lib"
	$(CMAKE_COMMAND) -P CMakeFiles\task4_lib.dir\cmake_clean_target.cmake
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /lib /nologo /machine:X86 /out:task4_lib.lib @CMakeFiles\task4_lib.dir\objects1.rsp 

# Rule to build all files generated by this target.
CMakeFiles\task4_lib.dir\build: task4_lib.lib

.PHONY : CMakeFiles\task4_lib.dir\build

CMakeFiles\task4_lib.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task4_lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles\task4_lib.dir\clean

CMakeFiles\task4_lib.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Disk_D\My projects\C++\tp-Lab-1" "C:\Disk_D\My projects\C++\tp-Lab-1" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles\task4_lib.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\task4_lib.dir\depend

