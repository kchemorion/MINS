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
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/progress.make

# Include the compile flags for this target's objects.
include Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/flags.make

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

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/flags.make
Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.cxx
Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o -MF CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o.d -o CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.cxx

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.cxx > CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.i

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML/vtkMRMLSegmentEditorNode.cxx -o CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.s

# Object files for target vtkSlicerSegmentationsModuleMRML
vtkSlicerSegmentationsModuleMRML_OBJECTS = \
"CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o"

# External object files for target vtkSlicerSegmentationsModuleMRML
vtkSlicerSegmentationsModuleMRML_EXTERNAL_OBJECTS =

lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/vtkMRMLSegmentEditorNode.cxx.o
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/build.make
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libutil.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGLU.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so: Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/build: lib/MINS-5.6/qt-loadable-modules/libvtkSlicerSegmentationsModuleMRML.so
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/build

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML && $(CMAKE_COMMAND) -P CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/clean

Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/depend: Modules/Loadable/Segmentations/MRML/vtkSlicerSegmentationsModuleMRMLHierarchy.stamp.txt
Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/depend: vtkSlicerSegmentationsModuleMRMLHierarchy.txt
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/Segmentations/MRML/CMakeFiles/vtkSlicerSegmentationsModuleMRML.dir/depend

