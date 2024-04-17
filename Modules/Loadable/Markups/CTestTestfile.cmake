# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerMarkupsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerMarkupsModuleGenericCxxTests" "qSlicerMarkupsModuleGenericTest")
set_tests_properties([=[qSlicerMarkupsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerMarkupsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/CMakeLists.txt;83;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/CMakeLists.txt;0;")
add_test([=[qSlicerMarkupsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerMarkupsModuleGenericCxxTests" "qSlicerMarkupsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerMarkupsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerMarkupsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/CMakeLists.txt;83;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/CMakeLists.txt;0;")
subdirs("MRML")
subdirs("VTKWidgets")
subdirs("Logic")
subdirs("MRMLDM")
subdirs("SubjectHierarchyPlugins")
subdirs("Widgets")
subdirs("Testing")
