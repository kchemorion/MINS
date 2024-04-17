# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerColorsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerColorsModuleGenericCxxTests" "qSlicerColorsModuleGenericTest")
set_tests_properties([=[qSlicerColorsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerColorsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/CMakeLists.txt;63;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/CMakeLists.txt;0;")
add_test([=[qSlicerColorsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerColorsModuleGenericCxxTests" "qSlicerColorsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerColorsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerColorsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/CMakeLists.txt;63;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/CMakeLists.txt;0;")
subdirs("MRML")
subdirs("VTKWidgets")
subdirs("Logic")
subdirs("MRMLDM")
subdirs("Widgets")
subdirs("SubjectHierarchyPlugins")
subdirs("Testing")
