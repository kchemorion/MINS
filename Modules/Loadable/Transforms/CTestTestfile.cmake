# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Transforms
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerTransformsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerTransformsModuleGenericCxxTests" "qSlicerTransformsModuleGenericTest")
set_tests_properties([=[qSlicerTransformsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerTransformsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/CMakeLists.txt;58;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/CMakeLists.txt;0;")
add_test([=[qSlicerTransformsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerTransformsModuleGenericCxxTests" "qSlicerTransformsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerTransformsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerTransformsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/CMakeLists.txt;58;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/CMakeLists.txt;0;")
subdirs("Logic")
subdirs("MRMLDM")
subdirs("Widgets")
subdirs("SubjectHierarchyPlugins")
subdirs("Testing")
