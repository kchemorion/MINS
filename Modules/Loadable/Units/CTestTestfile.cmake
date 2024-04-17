# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerUnitsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerUnitsModuleGenericCxxTests" "qSlicerUnitsModuleGenericTest")
set_tests_properties([=[qSlicerUnitsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerUnitsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/CMakeLists.txt;66;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/CMakeLists.txt;0;")
add_test([=[qSlicerUnitsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerUnitsModuleGenericCxxTests" "qSlicerUnitsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerUnitsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerUnitsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/CMakeLists.txt;66;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/CMakeLists.txt;0;")
subdirs("Logic")
subdirs("Widgets")
subdirs("Testing")
