# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/Testing
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/Testing
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[vtkMRMLCropVolumeParametersNodeTest1]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--launch" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/bin/qSlicerCropVolumeModuleCxxTests" "vtkMRMLCropVolumeParametersNodeTest1")
set_tests_properties([=[vtkMRMLCropVolumeParametersNodeTest1]=] PROPERTIES  LABELS "qSlicerCropVolumeModule" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/ExternalData.cmake;325;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroSimpleTest.cmake;63;ExternalData_add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/Testing/CMakeLists.txt;19;simple_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/Testing/CMakeLists.txt;0;")
subdirs("Python")
