# Install script for directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/LastConfigureStep

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Python/lib/python3.9/" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9/" USE_SOURCE_PERMISSIONS REGEX "lib2to3/tests/" EXCLUDE REGEX "lib[-]old/" EXCLUDE REGEX "plat[-].*" EXCLUDE REGEX "/test/" EXCLUDE REGEX "/tests/" EXCLUDE REGEX "distutils/command/wininst-.*" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(
  GLOB_RECURSE libraries FOLLOW_SYMLINKS
  LIST_DIRECTORIES false
  RELATIVE $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}
  $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Python/lib/python3.9/_SimpleITK.*.so
  )
foreach(file IN LISTS libraries)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/${file}")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/${file}")
endforeach()

endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Python/lib" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/" FILES_MATCHING REGEX "/libpython3[^/]*$" PERMISSIONS OWNER_WRITE OWNER_READ OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ REGEX "/libpython3[^/]*\\.a$" EXCLUDE REGEX "/libpython3[^/]*\\.debug$" EXCLUDE REGEX "/libpython3[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Python/lib/libpython3.9.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/Python/lib/libpython3.9.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM RENAME "python-real" FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin/python")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE FILE RENAME "PythonSlicerLauncherSettings.ini" FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin/PythonSlicerLauncherSettingsToInstall.ini")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM RENAME "PythonSlicer" FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAPPLAUNCHER/bin/CTKAppLauncher")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/Python/include/python3.9" TYPE FILE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/include/python3.9//pyconfig.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/storescu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/storescu")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/storescu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/storescp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/storescp")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/storescp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dcmdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmdump")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dump2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dump2dcm")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dump2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/img2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/img2dcm")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/img2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dcmdjpeg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmdjpeg")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmdjpeg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dcmqrscp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmqrscp")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcmqrscp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dcm2xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcm2xml")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dcm2xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/xml2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/xml2dcm")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/xml2dcm")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dsr2html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsr2html")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsr2html")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dsr2xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsr2xml")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsr2xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/xml2dsr")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/xml2dsr")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/xml2dsr")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/dsrdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsrdump")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/dsrdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/bin/echoscu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/echoscu")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./bin/echoscu")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE FILE RENAME "SlicerDesignerLauncherSettings.ini" FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/SlicerDesignerLauncherSettingsToInstall.ini")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./bin" TYPE PROGRAM RENAME "SlicerDesigner" FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAPPLAUNCHER/bin/CTKAppLauncher")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libofstd\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libofstd.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libofstd.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/liboflog\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/liboflog.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/liboflog.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmdata\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmdata.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmdata.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libi2d\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libi2d.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libi2d.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmimgle\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmimgle.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmimgle.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmimage\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmimage.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmimage.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmjpeg\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmjpeg.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmjpeg.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libijg8\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg8.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg8.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libijg12\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg12.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg12.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libijg16\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg16.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libijg16.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmjpls\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmjpls.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmjpls.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmtkcharls\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtkcharls.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtkcharls.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmtls\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtls.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtls.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmnet\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmnet.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmnet.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmsr\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmsr.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmsr.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libcmr\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libcmr.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libcmr.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmdsig\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmdsig.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmdsig.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmwlm\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmwlm.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmwlm.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmqrdb\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmqrdb.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmqrdb.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmpstat\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmpstat.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmpstat.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmrt\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmrt.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmrt.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmiod\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmiod.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmiod.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmfg\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmfg.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmfg.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmseg\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmseg.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmseg.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmtract\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtract.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmtract.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmpmap\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmpmap.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmpmap.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/" FILES_MATCHING REGEX "/libdcmect\\.so[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmect.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libdcmect.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE FILE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib/libPythonQt.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libPythonQt.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libPythonQt.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/" FILES_MATCHING REGEX "/libssl[^/]*$" REGEX "/libssl[^/]*\\.a$" EXCLUDE REGEX "/libssl[^/]*\\.debug$" EXCLUDE REGEX "/libssl[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libssl.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libssl.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/" FILES_MATCHING REGEX "/libcrypto[^/]*$" REGEX "/libcrypto[^/]*\\.a$" EXCLUDE REGEX "/libcrypto[^/]*\\.debug$" EXCLUDE REGEX "/libcrypto[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libcrypto.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libcrypto.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/" FILES_MATCHING REGEX "/libtbb[^/]*$" REGEX "/libtbb[^/]*\\.a$" EXCLUDE REGEX "/libtbb[^/]*\\.debug$" EXCLUDE REGEX "/libtbb[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbb.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbb.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/" FILES_MATCHING REGEX "/libtbbmalloc[^/]*$" REGEX "/libtbbmalloc[^/]*\\.a$" EXCLUDE REGEX "/libtbbmalloc[^/]*\\.debug$" EXCLUDE REGEX "/libtbbmalloc[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbbmalloc.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbbmalloc.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/" FILES_MATCHING REGEX "/libtbbmalloc\\_proxy[^/]*$" REGEX "/libtbbmalloc\\_proxy[^/]*\\.a$" EXCLUDE REGEX "/libtbbmalloc\\_proxy[^/]*\\.debug$" EXCLUDE REGEX "/libtbbmalloc\\_proxy[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbbmalloc_proxy.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libtbbmalloc_proxy.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6" TYPE DIRECTORY FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/" FILES_MATCHING REGEX "/libarchive[^/]*$" REGEX "/libarchive[^/]*\\.a$" EXCLUDE REGEX "/libarchive[^/]*\\.debug$" EXCLUDE REGEX "/libarchive[^/]*\\_debug\\.[^/]*$" EXCLUDE REGEX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/.+/" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  message(STATUS "Stripping: $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libarchive.so")
  execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/MINS-5.6/libarchive.so")
endif()

