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
include CMakeFiles\task4.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\task4.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\task4.dir\flags.make

CMakeFiles\task4.dir\src\main4.cpp.obj: CMakeFiles\task4.dir\flags.make
CMakeFiles\task4.dir\src\main4.cpp.obj: ..\src\main4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task4.dir/src/main4.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\task4.dir\src\main4.cpp.obj /FdCMakeFiles\task4.dir\ /FS -c "C:\Disk_D\My projects\C++\tp-Lab-1\src\main4.cpp"
<<

CMakeFiles\task4.dir\src\main4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task4.dir/src/main4.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\task4.dir\src\main4.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Disk_D\My projects\C++\tp-Lab-1\src\main4.cpp"
<<

CMakeFiles\task4.dir\src\main4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task4.dir/src/main4.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\task4.dir\src\main4.cpp.s /c "C:\Disk_D\My projects\C++\tp-Lab-1\src\main4.cpp"
<<

# Object files for target task4
task4_OBJECTS = \
"CMakeFiles\task4.dir\src\main4.cpp.obj"

# External object files for target task4
task4_EXTERNAL_OBJECTS =

task4.exe: CMakeFiles\task4.dir\src\main4.cpp.obj
task4.exe: CMakeFiles\task4.dir\build.make
task4.exe: task4_lib.lib
task4.exe: CMakeFiles\task4.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task4.exe"
	"C:\Disk_D\Programs\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\task4.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\task4.dir\objects1.rsp @<<
 /out:task4.exe /implib:task4.lib /pdb:"C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\task4.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  task4_lib.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\task4.dir\build: task4.exe

.PHONY : CMakeFiles\task4.dir\build

CMakeFiles\task4.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task4.dir\cmake_clean.cmake
.PHONY : CMakeFiles\task4.dir\clean

CMakeFiles\task4.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Disk_D\My projects\C++\tp-Lab-1" "C:\Disk_D\My projects\C++\tp-Lab-1" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug" "C:\Disk_D\My projects\C++\tp-Lab-1\cmake-build-debug\CMakeFiles\task4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\task4.dir\depend

