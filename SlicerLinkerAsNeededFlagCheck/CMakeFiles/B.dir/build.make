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
CMAKE_SOURCE_DIR = /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck

# Include any dependencies generated for this target.
include CMakeFiles/B.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/B.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/B.dir/flags.make

CMakeFiles/B.dir/B.cxx.o: CMakeFiles/B.dir/flags.make
CMakeFiles/B.dir/B.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck/B.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/B.dir/B.cxx.o"
	/home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/B.dir/B.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck/B.cxx

CMakeFiles/B.dir/B.cxx.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/B.dir/B.cxx.i"
	/home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck/B.cxx > CMakeFiles/B.dir/B.cxx.i

CMakeFiles/B.dir/B.cxx.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/B.dir/B.cxx.s"
	/home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck/B.cxx -o CMakeFiles/B.dir/B.cxx.s

# Object files for target B
B_OBJECTS = \
"CMakeFiles/B.dir/B.cxx.o"

# External object files for target B
B_EXTERNAL_OBJECTS =

libB.so: CMakeFiles/B.dir/B.cxx.o
libB.so: CMakeFiles/B.dir/build.make
libB.so: CMakeFiles/B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libB.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/B.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/B.dir/build: libB.so
.PHONY : CMakeFiles/B.dir/build

CMakeFiles/B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/B.dir/cmake_clean.cmake
.PHONY : CMakeFiles/B.dir/clean

CMakeFiles/B.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerLinkerAsNeededFlagCheck /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerLinkerAsNeededFlagCheck/CMakeFiles/B.dir/DependInfo.cmake
.PHONY : CMakeFiles/B.dir/depend
