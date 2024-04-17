# Install script for directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "RuntimeLibraries" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE SHARED_LIBRARY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/libvtkAddon.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so"
         OLD_RPATH "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libvtkAddon.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "RuntimeLibraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "RuntimeLibraries" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE MODULE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/vtkAddonPython.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so"
         OLD_RPATH "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/vtkAddonPython.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkAddonConfig.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake" TYPE FILE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon/install/vtkAddonConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Development" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkAddonFunctionAddExecutable.cmake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkAddonFunctionAddExecutable.cmake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkMacroKitPythonWrap.cmake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkWrapHierarchy.cmake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkWrapperInit.data.in;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/vtkWrapPython.cmake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake/WindowsApplicationUseUtf8.manifest")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake" TYPE FILE FILES
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkAddonFunctionAddExecutable.cmake"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkAddonFunctionAddExecutable.cmake"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkMacroKitPythonWrap.cmake"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkWrapHierarchy.cmake"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkWrapperInit.data.in"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/vtkWrapPython.cmake"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/WindowsApplicationUseUtf8.manifest"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon/Testing/cmake_install.cmake")

endif()

