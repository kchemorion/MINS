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

# Utility rule file for CompileSlicerPythonFiles.

# Include any custom commands dependencies for this target.
include CMakeFiles/CompileSlicerPythonFiles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CompileSlicerPythonFiles.dir/progress.make

CMakeFiles/CompileSlicerPythonFiles: python_compile_Slicer_complete

python_compile_Slicer_complete: compile_Slicer_python_scripts.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Compiling python scripts: Slicer"
	/usr/bin/cmake -P /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/compile_Slicer_python_scripts.cmake

CompileSlicerPythonFiles: CMakeFiles/CompileSlicerPythonFiles
CompileSlicerPythonFiles: python_compile_Slicer_complete
CompileSlicerPythonFiles: CMakeFiles/CompileSlicerPythonFiles.dir/build.make
.PHONY : CompileSlicerPythonFiles

# Rule to build all files generated by this target.
CMakeFiles/CompileSlicerPythonFiles.dir/build: CompileSlicerPythonFiles
.PHONY : CMakeFiles/CompileSlicerPythonFiles.dir/build

CMakeFiles/CompileSlicerPythonFiles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CompileSlicerPythonFiles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CompileSlicerPythonFiles.dir/clean

CMakeFiles/CompileSlicerPythonFiles.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles/CompileSlicerPythonFiles.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CompileSlicerPythonFiles.dir/depend
