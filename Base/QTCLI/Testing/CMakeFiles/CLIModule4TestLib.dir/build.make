# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build

# Include any dependencies generated for this target.
include Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/compiler_depend.make

# Include the progress variables for this target.
include Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/progress.make

# Include the compile flags for this target's objects.
include Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/flags.make

Base/QTCLI/Testing/CLIModule4TestCLP.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build/GenerateCLP/bin/GenerateCLPLauncher
Base/QTCLI/Testing/CLIModule4TestCLP.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.xml
Base/QTCLI/Testing/CLIModule4TestCLP.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/ITKLogo.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating CLIModule4TestCLP.h"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build/GenerateCLP/bin/GenerateCLPLauncher --logoFiles /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/ITKLogo.h --InputXML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.xml --OutputCxx /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing/CLIModule4TestCLP.h

Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o: Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/flags.make
Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.cxx
Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/ITKLogo.h
Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o: Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o -MF CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o.d -o CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.cxx

Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.cxx > CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.i

Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing/CLIModule4Test.cxx -o CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.s

# Object files for target CLIModule4TestLib
CLIModule4TestLib_OBJECTS = \
"CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o"

# External object files for target CLIModule4TestLib
CLIModule4TestLib_EXTERNAL_OBJECTS =

lib/MINS-5.6/cli-modules/libCLIModule4TestLib.so: Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/CLIModule4Test.cxx.o
lib/MINS-5.6/cli-modules/libCLIModule4TestLib.so: Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/build.make
lib/MINS-5.6/cli-modules/libCLIModule4TestLib.so: Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../lib/MINS-5.6/cli-modules/libCLIModule4TestLib.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CLIModule4TestLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/build: lib/MINS-5.6/cli-modules/libCLIModule4TestLib.so
.PHONY : Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/build

Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing && $(CMAKE_COMMAND) -P CMakeFiles/CLIModule4TestLib.dir/cmake_clean.cmake
.PHONY : Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/clean

Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/depend: Base/QTCLI/Testing/CLIModule4TestCLP.h
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Base/QTCLI/Testing/CMakeFiles/CLIModule4TestLib.dir/depend

