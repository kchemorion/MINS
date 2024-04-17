# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerVolumeRenderingModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerVolumeRenderingModuleGenericCxxTests" "qSlicerVolumeRenderingModuleGenericTest")
set_tests_properties([=[qSlicerVolumeRenderingModuleGenericTest]=] PROPERTIES  LABELS "qSlicerVolumeRenderingModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/CMakeLists.txt;65;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/CMakeLists.txt;0;")
add_test([=[qSlicerVolumeRenderingModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerVolumeRenderingModuleGenericCxxTests" "qSlicerVolumeRenderingModuleWidgetGenericTest")
set_tests_properties([=[qSlicerVolumeRenderingModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerVolumeRenderingModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/CMakeLists.txt;65;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/CMakeLists.txt;0;")
subdirs("MRML")
subdirs("Logic")
subdirs("MRMLDM")
subdirs("Widgets")
subdirs("SubjectHierarchyPlugins")
subdirs("Testing")
