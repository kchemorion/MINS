# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SelfTests
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/SelfTests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[py_nomainwindow_qSlicerSelfTestsModuleGenericTest]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--no-splash" "--testing" "--no-main-window" "--disable-cli-modules" "--additional-module-path" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/lib/MINS-5.6/qt-scripted-modules" "--python-code" "import slicer.testing; slicer.testing.runUnitTest(['/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/SelfTests', '/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SelfTests'], 'qSlicerSelfTestsModuleGenericTest')")
set_tests_properties([=[py_nomainwindow_qSlicerSelfTestsModuleGenericTest]=] PROPERTIES  RUN_SERIAL "TRUE" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/ExternalData.cmake;325;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroPythonTesting.cmake;86;ExternalData_add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroBuildScriptedModule.cmake;114;slicer_add_python_unittest;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SelfTests/CMakeLists.txt;14;slicerMacroBuildScriptedModule;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SelfTests/CMakeLists.txt;0;")
