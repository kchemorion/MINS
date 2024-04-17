# CMake generated Testfile for 
# Source directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing
# Build directory: /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CMake/Testing
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[cmake_list_to_string_test]=] "/usr/bin/cmake" "-DTEST_list_to_string_test:BOOL=ON" "-P" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/ListToString.cmake")
set_tests_properties([=[cmake_list_to_string_test]=] PROPERTIES  LABELS "CMake" PASS_REGULAR_EXPRESSION "SUCCESS" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;6;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;17;add_cmakescript_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;0;")
add_test([=[cmake_slicer_setting_variable_message_test]=] "/usr/bin/cmake" "-DTEST_slicer_setting_variable_message_test:BOOL=ON" "-P" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/UseSlicerMacros.cmake")
set_tests_properties([=[cmake_slicer_setting_variable_message_test]=] PROPERTIES  LABELS "CMake" PASS_REGULAR_EXPRESSION "SUCCESS" _BACKTRACE_TRIPLES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;6;add_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;21;add_cmakescript_test;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/Testing/CMakeLists.txt;0;")
