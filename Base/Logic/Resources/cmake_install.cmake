# Install script for directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./share/MINS-5.6/ColorFiles" TYPE FILE FILES
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/64Color-Nonsemantic.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/AbdomenColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Cividis.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/ColdToHotRainbow.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/DarkBrightChartColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/DivergingBlueRed.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/GenericAnatomyColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/GenericColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/HotToColdRainbow.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Inferno.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/LightPaleChartColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Magma.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/MediumChartColors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/PelvisColor.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Plasma.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/SPL-BrainAtlas-2009-ColorFile.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/SPL-BrainAtlas-2012-ColorFile.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/SPL-BrainAtlas-ColorFile.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Slicer3_2010_Brain_Labels.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Slicer3_2010_Label_Colors.txt"
    "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/ColorFiles/Viridis.txt"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/./share/MINS-5.6/OrientationMarkers" TYPE FILE FILES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic/Resources/OrientationMarkers/Human.vtp")
endif()

