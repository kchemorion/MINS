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
include Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/progress.make

# Include the compile flags for this target's objects.
include Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/flags.make

Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2
Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt: Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.Release.args
Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt: Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.data
Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.h
Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "For vtkSlicerUnitsModuleLogic - updating vtkSlicerUnitsModuleLogicHierarchy.txt"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/bin/vtkWrapHierarchy-9.2 @vtkSlicerUnitsModuleLogicHierarchy.Release.args -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerUnitsModuleLogicHierarchy.txt vtkSlicerUnitsModuleLogicHierarchy.data @vtkSlicerUnitsModuleLogicOtherHierarchyFiles.args
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && /usr/bin/cmake -E touch /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt

vtkSlicerUnitsModuleLogicHierarchy.txt: Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt
	@$(CMAKE_COMMAND) -E touch_nocreate vtkSlicerUnitsModuleLogicHierarchy.txt

Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o: Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/flags.make
Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.cxx
Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o: Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o -MF CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o.d -o CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.cxx

Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.cxx > CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.i

Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic/vtkSlicerUnitsLogic.cxx -o CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.s

# Object files for target vtkSlicerUnitsModuleLogic
vtkSlicerUnitsModuleLogic_OBJECTS = \
"CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o"

# External object files for target vtkSlicerUnitsModuleLogic
vtkSlicerUnitsModuleLogic_EXTERNAL_OBJECTS =

lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/vtkSlicerUnitsLogic.cxx.o
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/build.make
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libutil.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGLU.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so: Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkSlicerUnitsModuleLogic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/build: lib/MINS-5.6/qt-loadable-modules/libvtkSlicerUnitsModuleLogic.so
.PHONY : Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/build

Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic && $(CMAKE_COMMAND) -P CMakeFiles/vtkSlicerUnitsModuleLogic.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/clean

Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/depend: Modules/Loadable/Units/Logic/vtkSlicerUnitsModuleLogicHierarchy.stamp.txt
Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/depend: vtkSlicerUnitsModuleLogicHierarchy.txt
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/Units/Logic/CMakeFiles/vtkSlicerUnitsModuleLogic.dir/depend

