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
include Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.make

# Include the progress variables for this target.
include Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/progress.make

# Include the compile flags for this target's objects.
include Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make

Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModule.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_qSlicerColorsModule.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp_parameters

Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_qSlicerColorsModuleWidget.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp_parameters

Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsReader.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_qSlicerColorsReader.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp_parameters

Modules/Loadable/Colors/ui_qSlicerColorsModuleWidget.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/UI/qSlicerColorsModuleWidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_qSlicerColorsModuleWidget.h"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/uic -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/ui_qSlicerColorsModuleWidget.h /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/UI/qSlicerColorsModuleWidget.ui

Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/qSlicerColorsModule.qrc
Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/Icons/Colors.png
Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/Icons/SlicerCopyColor.png
Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp: Modules/Loadable/Colors/Resources/qSlicerColorsModule.qrc.depends
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating qrc_qSlicerColorsModule.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/rcc --name qSlicerColorsModule --output /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Resources/qSlicerColorsModule.qrc

Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/qSlicer.qrc
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/Bills.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/BIRN-NoText.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NAC.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NAMIC.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NCIGT.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/SPL.png
Modules/Loadable/Colors/qrc_qSlicer.cpp: Modules/Loadable/Colors/__/__/__/Resources/qSlicer.qrc.depends
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating qrc_qSlicer.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /usr/lib/qt5/bin/rcc --name qSlicer --output /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicer.cpp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/qSlicer.qrc

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModule.cxx
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o -MF CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o.d -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModule.cxx

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModule.cxx > CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModule.cxx -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.cxx
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o -MF CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o.d -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.cxx

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.cxx > CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsModuleWidget.cxx -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsReader.cxx
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o -MF CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o.d -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsReader.cxx

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsReader.cxx > CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/qSlicerColorsReader.cxx -o CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o -MF CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o.d -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp > CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o: Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o -MF CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o.d -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp > CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o: Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o -MF CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o.d -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp > CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp -o CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o -MF CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o.d -o CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp > CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp -o CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.s

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/flags.make
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o: Modules/Loadable/Colors/qrc_qSlicer.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o -MF CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o.d -o CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicer.cpp

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicer.cpp > CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.i

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/qrc_qSlicer.cpp -o CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.s

# Object files for target qSlicerColorsModule
qSlicerColorsModule_OBJECTS = \
"CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o" \
"CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o" \
"CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o" \
"CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o" \
"CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o" \
"CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o" \
"CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o" \
"CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o"

# External object files for target qSlicerColorsModule
qSlicerColorsModule_EXTERNAL_OBJECTS =

lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModule.cxx.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsModuleWidget.cxx.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qSlicerColorsReader.cxx.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModule.cpp.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsModuleWidget.cpp.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/moc_qSlicerColorsReader.cpp.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicerColorsModule.cpp.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/qrc_qSlicer.cpp.o
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/build.make
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libGLU.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libm.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libGL.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libX11.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: /usr/lib/x86_64-linux-gnu/libutil.a
lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so: Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX shared library ../../../lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qSlicerColorsModule.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/build: lib/MINS-5.6/qt-loadable-modules/libqSlicerColorsModule.so
.PHONY : Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/build

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors && $(CMAKE_COMMAND) -P CMakeFiles/qSlicerColorsModule.dir/cmake_clean.cmake
.PHONY : Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/clean

Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/moc_qSlicerColorsModule.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/moc_qSlicerColorsModuleWidget.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/moc_qSlicerColorsReader.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/qrc_qSlicer.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/qrc_qSlicerColorsModule.cpp
Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend: Modules/Loadable/Colors/ui_qSlicerColorsModuleWidget.h
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Modules/Loadable/Colors/CMakeFiles/qSlicerColorsModule.dir/depend
