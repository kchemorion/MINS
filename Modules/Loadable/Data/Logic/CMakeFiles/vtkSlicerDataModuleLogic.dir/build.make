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
include Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/progress.make

# Include the compile flags for this target's objects.
include Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/flags.make

Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2
Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt: Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.Release.args
Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt: Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.data
Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.h
Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For vtkSlicerDataModuleLogic - updating vtkSlicerDataModuleLogicHierarchy.txt"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2 @vtkSlicerDataModuleLogicHierarchy.Release.args -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerDataModuleLogicHierarchy.txt vtkSlicerDataModuleLogicHierarchy.data @vtkSlicerDataModuleLogicOtherHierarchyFiles.args
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && /usr/bin/cmake -E touch /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt

vtkSlicerDataModuleLogicHierarchy.txt: Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt
	@$(CMAKE_COMMAND) -E touch_nocreate vtkSlicerDataModuleLogicHierarchy.txt

Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o: Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/flags.make
Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.cxx
Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o: Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o -MF CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o.d -o CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.cxx

Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.cxx > CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.i

Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogic.cxx -o CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.s

# Object files for target vtkSlicerDataModuleLogic
vtkSlicerDataModuleLogic_OBJECTS = \
"CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o"

# External object files for target vtkSlicerDataModuleLogic
vtkSlicerDataModuleLogic_EXTERNAL_OBJECTS =

lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/vtkSlicerDataModuleLogic.cxx.o
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/build.make
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libutil.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGLU.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /usr/lib/x86_64-linux-gnu/libm.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so: Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkSlicerDataModuleLogic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/build: lib/MINS-5.6/qt-loadable-modules/libvtkSlicerDataModuleLogic.so
.PHONY : Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/build

Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic && $(CMAKE_COMMAND) -P CMakeFiles/vtkSlicerDataModuleLogic.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/clean

Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/depend: Modules/Loadable/Data/Logic/vtkSlicerDataModuleLogicHierarchy.stamp.txt
Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/depend: vtkSlicerDataModuleLogicHierarchy.txt
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/Data/Logic/CMakeFiles/vtkSlicerDataModuleLogic.dir/depend
