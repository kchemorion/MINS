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
include Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/progress.make

# Include the compile flags for this target's objects.
include Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make

Base/QTApp/moc_qSlicerAboutDialog.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerAboutDialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating moc_qSlicerAboutDialog.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerAboutDialog.cpp_parameters

Base/QTApp/moc_qSlicerApplicationHelper.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerApplicationHelper.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_qSlicerApplicationHelper.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerApplicationHelper.cpp_parameters

Base/QTApp/moc_qSlicerErrorReportDialog.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerErrorReportDialog.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating moc_qSlicerErrorReportDialog.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerErrorReportDialog.cpp_parameters

Base/QTApp/moc_qSlicerMainWindow.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerMainWindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating moc_qSlicerMainWindow.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/moc @/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerMainWindow.cpp_parameters

Base/QTApp/ui_qSlicerAboutDialog.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerAboutDialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ui_qSlicerAboutDialog.h"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/uic -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/ui_qSlicerAboutDialog.h /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerAboutDialog.ui

Base/QTApp/ui_qSlicerErrorReportDialog.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerErrorReportDialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Generating ui_qSlicerErrorReportDialog.h"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/uic -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/ui_qSlicerErrorReportDialog.h /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerErrorReportDialog.ui

Base/QTApp/ui_qSlicerMainWindow.h: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerMainWindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Generating ui_qSlicerMainWindow.h"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/uic -o /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/ui_qSlicerMainWindow.h /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/Resources/UI/qSlicerMainWindow.ui

Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/qSlicer.qrc
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/Bills.png
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/BIRN-NoText.png
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NAC.png
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NAMIC.png
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/NCIGT.png
Base/QTApp/qrc_qSlicer.cpp: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/Logos/SPL.png
Base/QTApp/qrc_qSlicer.cpp: Base/QTApp/__/__/Resources/qSlicer.qrc.depends
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Generating qrc_qSlicer.cpp"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /usr/lib/qt5/bin/rcc --name qSlicer --output /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/qrc_qSlicer.cpp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/qSlicer.qrc

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerAboutDialog.cxx
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o -MF CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerAboutDialog.cxx

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerAboutDialog.cxx > CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerAboutDialog.cxx -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerApplicationHelper.cxx
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o -MF CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerApplicationHelper.cxx

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerApplicationHelper.cxx > CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerApplicationHelper.cxx -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerErrorReportDialog.cxx
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o -MF CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerErrorReportDialog.cxx

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerErrorReportDialog.cxx > CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerErrorReportDialog.cxx -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerMainWindow.cxx
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o -MF CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerMainWindow.cxx

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerMainWindow.cxx > CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp/qSlicerMainWindow.cxx -o CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o: Base/QTApp/moc_qSlicerAboutDialog.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o -MF CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerAboutDialog.cpp

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerAboutDialog.cpp > CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerAboutDialog.cpp -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o: Base/QTApp/moc_qSlicerApplicationHelper.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o -MF CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerApplicationHelper.cpp

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerApplicationHelper.cpp > CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerApplicationHelper.cpp -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o: Base/QTApp/moc_qSlicerErrorReportDialog.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o -MF CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerErrorReportDialog.cpp

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerErrorReportDialog.cpp > CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerErrorReportDialog.cpp -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o: Base/QTApp/moc_qSlicerMainWindow.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o -MF CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerMainWindow.cpp

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerMainWindow.cpp > CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/moc_qSlicerMainWindow.cpp -o CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.s

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/flags.make
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o: Base/QTApp/qrc_qSlicer.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o -MF CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o.d -o CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/qrc_qSlicer.cpp

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/qrc_qSlicer.cpp > CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.i

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/qrc_qSlicer.cpp -o CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.s

# Object files for target qSlicerBaseQTApp
qSlicerBaseQTApp_OBJECTS = \
"CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o" \
"CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o"

# External object files for target qSlicerBaseQTApp
qSlicerBaseQTApp_EXTERNAL_OBJECTS =

bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerAboutDialog.cxx.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerApplicationHelper.cxx.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerErrorReportDialog.cxx.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qSlicerMainWindow.cxx.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerAboutDialog.cpp.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerApplicationHelper.cpp.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerErrorReportDialog.cpp.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/moc_qSlicerMainWindow.cpp.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/qrc_qSlicer.cpp.o
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/build.make
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu//libQt5Core.so
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libutil.a
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libGL.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libGL.so
bin/libqSlicerBaseQTApp.so: /usr/lib/x86_64-linux-gnu/libX11.so
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
bin/libqSlicerBaseQTApp.so: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
bin/libqSlicerBaseQTApp.so: Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX shared library ../../bin/libqSlicerBaseQTApp.so"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qSlicerBaseQTApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/build: bin/libqSlicerBaseQTApp.so
.PHONY : Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/build

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp && $(CMAKE_COMMAND) -P CMakeFiles/qSlicerBaseQTApp.dir/cmake_clean.cmake
.PHONY : Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/clean

Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/moc_qSlicerAboutDialog.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/moc_qSlicerApplicationHelper.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/moc_qSlicerErrorReportDialog.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/moc_qSlicerMainWindow.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/qrc_qSlicer.cpp
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/ui_qSlicerAboutDialog.h
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/ui_qSlicerErrorReportDialog.h
Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend: Base/QTApp/ui_qSlicerMainWindow.h
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Base/QTApp/CMakeFiles/qSlicerBaseQTApp.dir/depend
