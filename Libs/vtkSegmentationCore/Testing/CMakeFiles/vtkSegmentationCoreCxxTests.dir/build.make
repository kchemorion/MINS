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
include Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.make

# Include the progress variables for this target.
include Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/progress.make

# Include the compile flags for this target's objects.
include Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o: Libs/vtkSegmentationCore/Testing/vtkSegmentationCoreCxxTests.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing/vtkSegmentationCoreCxxTests.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing/vtkSegmentationCoreCxxTests.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing/vtkSegmentationCoreCxxTests.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.s

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest1.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest1.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest1.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest1.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.s

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest2.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest2.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest2.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationTest2.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.s

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationHistoryTest1.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationHistoryTest1.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationHistoryTest1.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationHistoryTest1.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.s

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationConverterTest1.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationConverterTest1.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationConverterTest1.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkSegmentationConverterTest1.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.s

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/flags.make
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o -MF CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o.d -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o -c /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx > CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.i

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx -o CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.s

# Object files for target vtkSegmentationCoreCxxTests
vtkSegmentationCoreCxxTests_OBJECTS = \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o" \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o" \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o" \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o" \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o" \
"CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o"

# External object files for target vtkSegmentationCoreCxxTests
vtkSegmentationCoreCxxTests_EXTERNAL_OBJECTS =

bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationCoreCxxTests.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest1.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationTest2.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationHistoryTest1.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkSegmentationConverterTest1.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/vtkClosedSurfaceToFractionalLabelMapConversionTest1.cxx.o
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/build.make
bin/vtkSegmentationCoreCxxTests: /usr/lib/x86_64-linux-gnu/libGL.so
bin/vtkSegmentationCoreCxxTests: /usr/lib/x86_64-linux-gnu/libX11.so
bin/vtkSegmentationCoreCxxTests: Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ../../../bin/vtkSegmentationCoreCxxTests"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkSegmentationCoreCxxTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/build: bin/vtkSegmentationCoreCxxTests
.PHONY : Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/build

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing && $(CMAKE_COMMAND) -P CMakeFiles/vtkSegmentationCoreCxxTests.dir/cmake_clean.cmake
.PHONY : Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/clean

Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Libs/vtkSegmentationCore/Testing/CMakeFiles/vtkSegmentationCoreCxxTests.dir/depend
