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
include Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/compiler_depend.make

# Include the progress variables for this target.
include Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/progress.make

# Include the compile flags for this target's objects.
include Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/flags.make

Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o: Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/flags.make
Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK/Testing/VTKITKVectorReader.cxx
Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o: Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o -MF CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o.d -o CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK/Testing/VTKITKVectorReader.cxx

Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK/Testing/VTKITKVectorReader.cxx > CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.i

Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK/Testing/VTKITKVectorReader.cxx -o CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.s

# Object files for target VTKITKVectorReader
VTKITKVectorReader_OBJECTS = \
"CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o"

# External object files for target VTKITKVectorReader
VTKITKVectorReader_EXTERNAL_OBJECTS =

bin/VTKITKVectorReader: Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/VTKITKVectorReader.cxx.o
bin/VTKITKVectorReader: Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/build.make
bin/VTKITKVectorReader: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
bin/VTKITKVectorReader: /usr/lib/x86_64-linux-gnu/libGL.so
bin/VTKITKVectorReader: /usr/lib/x86_64-linux-gnu/libX11.so
bin/VTKITKVectorReader: Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/VTKITKVectorReader"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VTKITKVectorReader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/build: bin/VTKITKVectorReader
.PHONY : Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/build

Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing && $(CMAKE_COMMAND) -P CMakeFiles/VTKITKVectorReader.dir/cmake_clean.cmake
.PHONY : Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/clean

Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Libs/vtkITK/Testing/CMakeFiles/VTKITKVectorReader.dir/depend

