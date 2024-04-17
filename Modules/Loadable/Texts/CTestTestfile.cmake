# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Texts
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerTextsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerTextsModuleGenericCxxTests" "qSlicerTextsModuleGenericTest")
set_tests_properties([=[qSlicerTextsModuleGenericTest]=] PROPERTIES  LABELS "qSlicerTextsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/CMakeLists.txt;57;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/CMakeLists.txt;0;")
add_test([=[qSlicerTextsModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerTextsModuleGenericCxxTests" "qSlicerTextsModuleWidgetGenericTest")
set_tests_properties([=[qSlicerTextsModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerTextsModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/CMakeLists.txt;57;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/CMakeLists.txt;0;")
subdirs("Logic")
subdirs("Widgets")
subdirs("SubjectHierarchyPlugins")
