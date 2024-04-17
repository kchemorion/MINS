# Install script for directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTGUI/DesignerPlugins

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "RuntimePlugins" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer" TYPE MODULE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/designer/libqSlicerBaseQTGUIDesignerPlugins.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so"
         OLD_RPATH "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CMakeExternals/Install/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build/ModuleDescriptionParser/bin:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib:/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/./lib/QtPlugins/designer/libqSlicerBaseQTGUIDesignerPlugins.so")
    endif()
  endif()
endif()

