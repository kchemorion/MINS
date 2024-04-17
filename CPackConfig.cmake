# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.27/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "Slicer built using CMake")
set(CPACK_DMG_SLA_USE_RESOURCE_FILE_LICENSE "ON")
set(CPACK_GENERATOR "TGZ")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALL_CMAKE_PROJECTS ";/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build;CTK;RuntimeApplications;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build;CTK;RuntimePlugins;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build;VTK;runtime;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build;VTK;python;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;RuntimeLibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;Libraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;libraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;cpplibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;hllibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build;ITK;Unspecified;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/JsonCpp-build;JsonCpp;Unspecified;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build;SlicerExecutionModel;RuntimeLibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build;teem;RuntimeLibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build;CTK;RuntimeLibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build;Slicer;RuntimeLibraries;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build;Slicer;RuntimePlugins;/;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build;Slicer;Runtime;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK/Modules/ThirdParty/DCMTK/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK/Utilities/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Extensions/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK/Utilities/CMake")
set(CPACK_MONOLITHIC_INSTALL "ON")
set(CPACK_NSIS_DISPLAY_NAME "MINS 0.1.0-")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "MINS 0.1.0-")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJCOPY_EXECUTABLE "/usr/bin/objcopy")
set(CPACK_OBJDUMP_EXECUTABLE "/usr/bin/objdump")
set(CPACK_OUTPUT_CONFIG_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/README.md")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Computational fluid dynamics tool")
set(CPACK_PACKAGE_FILE_NAME "MINS-0.1.0--linux-amd64")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "MINS 0.1.0-")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "MINS 0.1.0-")
set(CPACK_PACKAGE_NAME "MINS")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "DISC4ALL")
set(CPACK_PACKAGE_VERSION "0.1.0-")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_READELF_EXECUTABLE "/usr/bin/readelf")
set(CPACK_RESOURCE_FILE_LICENSE "/home/blvksh33p/Documents/MINS/LICENSE")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.27/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.27/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TXZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "OFF")
set(CPACK_SOURCE_TGZ "OFF")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "OFF")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_STRIP_FILES "1")
set(CPACK_SYSTEM_NAME "linux-amd64")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "linux-amd64")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
