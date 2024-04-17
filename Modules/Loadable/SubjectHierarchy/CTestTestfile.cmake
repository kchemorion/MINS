# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/SubjectHierarchy
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerSubjectHierarchyModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerSubjectHierarchyModuleGenericCxxTests" "qSlicerSubjectHierarchyModuleGenericTest")
set_tests_properties([=[qSlicerSubjectHierarchyModuleGenericTest]=] PROPERTIES  LABELS "qSlicerSubjectHierarchyModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/CMakeLists.txt;48;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/CMakeLists.txt;0;")
add_test([=[qSlicerSubjectHierarchyModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerSubjectHierarchyModuleGenericCxxTests" "qSlicerSubjectHierarchyModuleWidgetGenericTest")
set_tests_properties([=[qSlicerSubjectHierarchyModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerSubjectHierarchyModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/CMakeLists.txt;48;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/CMakeLists.txt;0;")
subdirs("Logic")
subdirs("Widgets")
subdirs("Testing")
