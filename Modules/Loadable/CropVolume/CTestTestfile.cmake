# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[qSlicerCropVolumeModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerCropVolumeModuleGenericCxxTests" "qSlicerCropVolumeModuleGenericTest")
set_tests_properties([=[qSlicerCropVolumeModuleGenericTest]=] PROPERTIES  LABELS "qSlicerCropVolumeModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/CMakeLists.txt;49;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/CMakeLists.txt;0;")
add_test([=[qSlicerCropVolumeModuleWidgetGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerCropVolumeModuleGenericCxxTests" "qSlicerCropVolumeModuleWidgetGenericTest")
set_tests_properties([=[qSlicerCropVolumeModuleWidgetGenericTest]=] PROPERTIES  LABELS "qSlicerCropVolumeModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildLoadableModule.cmake;292;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/CMakeLists.txt;49;slicerMacroBuildLoadableModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/CMakeLists.txt;0;")
subdirs("MRML")
subdirs("Logic")
subdirs("Testing")
