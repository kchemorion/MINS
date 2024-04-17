# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerSegmentationsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerSegmentationsModuleGenericCxxTests" "qSlicerSegmentationsModuleGenericTest")
set_tests_properties([=[qSlicerSegmentationsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerSegmentationsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/CMakeLists.txt;80;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/CMakeLists.txt;0;")
add_test([=[qSlicerSegmentationsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerSegmentationsModuleGenericCxxTests" "qSlicerSegmentationsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerSegmentationsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerSegmentationsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/CMakeLists.txt;80;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/CMakeLists.txt;0;")
subdirs("MRML")
subdirs("Logic")
subdirs("MRMLDM")
subdirs("EditorEffects")
subdirs("Widgets")
subdirs("SubjectHierarchyPlugins")
subdirs("Testing")
