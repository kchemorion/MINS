# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SegmentEditor
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/SegmentEditor
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[py_SegmentEditor]=] "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS" "--no-splash" "--testing" "--disable-cli-modules" "--python-code" "import slicer.testing; slicer.testing.runUnitTest(['/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/SegmentEditor', '/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SegmentEditor'], 'SegmentEditor')")
set_tests_properties([=[py_SegmentEditor]=] PROPERTIES  RUN_SERIAL "TRUE" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/ExternalData.cmake;325;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerMacroPythonTesting.cmake;86;ExternalData_add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SegmentEditor/CMakeLists.txt;35;slicer_add_python_unittest;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/SegmentEditor/CMakeLists.txt;0;")
subdirs("SubjectHierarchyPlugins")
