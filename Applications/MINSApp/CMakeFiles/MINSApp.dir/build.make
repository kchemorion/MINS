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
include Applications/MINSApp/CMakeFiles/MINSApp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Applications/MINSApp/CMakeFiles/MINSApp.dir/compiler_depend.make

# Include the progress variables for this target.
include Applications/MINSApp/CMakeFiles/MINSApp.dir/progress.make

# Include the compile flags for this target's objects.
include Applications/MINSApp/CMakeFiles/MINSApp.dir/flags.make

Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o: Applications/MINSApp/CMakeFiles/MINSApp.dir/flags.make
Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o: /home/blvksh33p/Documents/MINS/Applications/MINSApp/Main.cxx
Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o: Applications/MINSApp/CMakeFiles/MINSApp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o -MF CMakeFiles/MINSApp.dir/Main.cxx.o.d -o CMakeFiles/MINSApp.dir/Main.cxx.o -c /home/blvksh33p/Documents/MINS/Applications/MINSApp/Main.cxx

Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MINSApp.dir/Main.cxx.i"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/blvksh33p/Documents/MINS/Applications/MINSApp/Main.cxx > CMakeFiles/MINSApp.dir/Main.cxx.i

Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MINSApp.dir/Main.cxx.s"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp && /home/blvksh33p/.local/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/blvksh33p/Documents/MINS/Applications/MINSApp/Main.cxx -o CMakeFiles/MINSApp.dir/Main.cxx.s

# Object files for target MINSApp
MINSApp_OBJECTS = \
"CMakeFiles/MINSApp.dir/Main.cxx.o"

# External object files for target MINSApp
MINSApp_EXTERNAL_OBJECTS =

bin/MINSApp-real: Applications/MINSApp/CMakeFiles/MINSApp.dir/Main.cxx.o
bin/MINSApp-real: Applications/MINSApp/CMakeFiles/MINSApp.dir/build.make
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libQt5UiTools.a
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Core.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Widgets.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Gui.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu//libQt5Core.so
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build/bin/libCTKAppLauncherLib.a
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libutil.a
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libGL.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libGLU.so
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libGL.so
bin/MINSApp-real: /usr/lib/x86_64-linux-gnu/libX11.so
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so
bin/MINSApp-real: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so
bin/MINSApp-real: Applications/MINSApp/CMakeFiles/MINSApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/MINSApp-real"
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MINSApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Applications/MINSApp/CMakeFiles/MINSApp.dir/build: bin/MINSApp-real
.PHONY : Applications/MINSApp/CMakeFiles/MINSApp.dir/build

Applications/MINSApp/CMakeFiles/MINSApp.dir/clean:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp && $(CMAKE_COMMAND) -P CMakeFiles/MINSApp.dir/cmake_clean.cmake
.PHONY : Applications/MINSApp/CMakeFiles/MINSApp.dir/clean

Applications/MINSApp/CMakeFiles/MINSApp.dir/depend:
	cd /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src /home/blvksh33p/Documents/MINS/Applications/MINSApp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Applications/MINSApp/CMakeFiles/MINSApp.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Applications/MINSApp/CMakeFiles/MINSApp.dir/depend

