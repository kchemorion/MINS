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
include Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/progress.make

# Include the compile flags for this target's objects.
include Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/flags.make

Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2
Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt: Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.Release.args
Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt: Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.data
Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.h
Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For vtkSlicerCropVolumeModuleMRML - updating vtkSlicerCropVolumeModuleMRMLHierarchy.txt"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2 @vtkSlicerCropVolumeModuleMRMLHierarchy.Release.args -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerCropVolumeModuleMRMLHierarchy.txt vtkSlicerCropVolumeModuleMRMLHierarchy.data @vtkSlicerCropVolumeModuleMRMLOtherHierarchyFiles.args
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && /usr/bin/cmake -E touch /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt

vtkSlicerCropVolumeModuleMRMLHierarchy.txt: Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt
	@$(CMAKE_COMMAND) -E touch_nocreate vtkSlicerCropVolumeModuleMRMLHierarchy.txt

Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o: Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/flags.make
Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.cxx
Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o: Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o -MF CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o.d -o CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.cxx

Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.cxx > CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.i

Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML/vtkMRMLCropVolumeParametersNode.cxx -o CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.s

# Object files for target vtkSlicerCropVolumeModuleMRML
vtkSlicerCropVolumeModuleMRML_OBJECTS = \
"CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o"

# External object files for target vtkSlicerCropVolumeModuleMRML
vtkSlicerCropVolumeModuleMRML_EXTERNAL_OBJECTS =

lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/vtkMRMLCropVolumeParametersNode.cxx.o
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/build.make
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGLU.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /usr/lib/x86_64-linux-gnu/libm.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so: Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/build: lib/MINS-5.6/qt-loadable-modules/libvtkSlicerCropVolumeModuleMRML.so
.PHONY : Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/build

Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML && $(CMAKE_COMMAND) -P CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/clean

Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/depend: Modules/Loadable/CropVolume/MRML/vtkSlicerCropVolumeModuleMRMLHierarchy.stamp.txt
Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/depend: vtkSlicerCropVolumeModuleMRMLHierarchy.txt
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/CropVolume/MRML/CMakeFiles/vtkSlicerCropVolumeModuleMRML.dir/depend
