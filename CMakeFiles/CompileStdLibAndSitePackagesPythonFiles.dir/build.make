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

# Utility rule file for CompileStdLibAndSitePackagesPythonFiles.

# Include any custom commands dependencies for this target.
include CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/progress.make

CMakeFiles/CompileStdLibAndSitePackagesPythonFiles: python_compile_stdlib_and_sitepackages_complete

python_compile_stdlib_and_sitepackages_complete:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Compiling python stdlib and site-packages modules: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9"
	/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin/PythonSlicer -m compileall -q -x "[/\\\\]test[s]?[/\\\\]" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9

CompileStdLibAndSitePackagesPythonFiles: CMakeFiles/CompileStdLibAndSitePackagesPythonFiles
CompileStdLibAndSitePackagesPythonFiles: python_compile_stdlib_and_sitepackages_complete
CompileStdLibAndSitePackagesPythonFiles: CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/build.make
.PHONY : CompileStdLibAndSitePackagesPythonFiles

# Rule to build all files generated by this target.
CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/build: CompileStdLibAndSitePackagesPythonFiles
.PHONY : CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/build

CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/clean

CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CompileStdLibAndSitePackagesPythonFiles.dir/depend

