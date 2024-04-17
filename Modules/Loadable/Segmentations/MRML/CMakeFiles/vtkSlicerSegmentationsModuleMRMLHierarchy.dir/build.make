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

# Utility rule file for vtkSlicerSegmentationsModuleMRMLHierarchy.

# Include any custom commands dependencies for this target.
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/progress.make

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt

Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2
Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.Release.args
Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.data
Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.h
Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For vtkSlicerSegmentationsModuleMRML - updating vtkSlicerSegmentationsModuleMRMLHierarchy.txt"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2 @vtkSlicerSegmentationsModuleMRMLHierarchy.Release.args -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSegmentationsModuleMRMLHierarchy.txt vtkSlicerSegmentationsModuleMRMLHierarchy.data @vtkSlicerSegmentationsModuleMRMLOtherHierarchyFiles.args
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && /usr/bin/cmake -E touch /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt

vtkSlicerSegmentationsModuleMRMLHierarchy.txt: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt
	@$(CMAKE_COMMAND) -E touch_nocreate vtkSlicerSegmentationsModuleMRMLHierarchy.txt

vtkSlicerSegmentationsModuleMRMLHierarchy: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy
vtkSlicerSegmentationsModuleMRMLHierarchy: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt
vtkSlicerSegmentationsModuleMRMLHierarchy: vtkSlicerSegmentationsModuleMRMLHierarchy.txt
vtkSlicerSegmentationsModuleMRMLHierarchy: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/build.make
.PHONY : vtkSlicerSegmentationsModuleMRMLHierarchy

# Rule to build all files generated by this target.
Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/build: vtkSlicerSegmentationsModuleMRMLHierarchy
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/build

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && $(CMAKE_COMMAND) -P CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/clean

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRMLHierarchy.dir/depend

