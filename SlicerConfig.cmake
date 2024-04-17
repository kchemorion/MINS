#
# This file has been primarily designed for the purpose of Slicer extension development.
#
# This file is configured by Slicer and used by UseSlicer.cmake module
# to load Slicer's settings for an external project. External projects
# can use these setting to build new modules against a Slicer build tree.
#
#

#
# When manually building extension on macOS, in addition to the usual configure
# option (CMAKE_BUILD_TYPE, ...), the developer is also expected to
# configure it passing the variables:
#   CMAKE_OSX_ARCHITECTURES
#   CMAKE_OSX_DEPLOYMENT_TARGET
#   CMAKE_OSX_SYSROOT
# The value of these variables should match the one used to
# configure the associated Slicer build tree. These values can be
# retrieved looking at the CMakeCache.txt file located in the Slicer
# build tree.
#
# To simplify the task of manually building out-of-source modules or extensions,
# the developer could include the following statement at the top of both the main
# CMakeLists.txt of the extension and also at the top of each module CMakeLists.txt
# bundled within the extension.
# Doing so will ensure that either the extension or each bundled module could be
# built in a standalone fashion very easily without passing extra option
# at configure time:
#
#  find_package(Slicer COMPONENTS ConfigurePrerequisites REQUIRED)
#
#  project(Foo)
#
#  [...]
#
#  find_package(Slicer REQUIRED)
#  include(${Slicer_USE_FILE})
#  [...]


# Extension support can be disabled by either
#  (1) setting Slicer_DONT_USE_EXTENSION to TRUE or
#  (2) calling find_package(Slicer COMPONENTS NoExtensionSupport [...] REQUIRED)


# --------------------------------------------------------------------------
#  COMPONENTS                | CMAKE VARIABLE(S)
# --------------------------------------------------------------------------
#  NoExtensionSupport        | Slicer_USE_NOEXTENSIONSUPPORT
#                            | Slicer_DONT_USE_EXTENSION
# --------------------------------------------------------------------------
#  ConfigurePrerequisites    | Slicer_USE_CONFIGUREPREREQUISITES
# --------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.16.3...3.19.7 FATAL_ERROR)

foreach(component NoExtensionSupport ConfigurePrerequisites)
  string(TOUPPER ${component} _COMPONENT)
  set(Slicer_USE_${_COMPONENT} 0)
endforeach()

if(Slicer_FIND_COMPONENTS)
  foreach(component ${Slicer_FIND_COMPONENTS})
    string(TOUPPER ${component} _COMPONENT)
    set(Slicer_USE_${_COMPONENT} 1)
  endforeach()

  set(Slicer_DONT_USE_EXTENSION ${Slicer_USE_NOEXTENSIONSUPPORT})
endif()

if(NOT DEFINED Slicer_DONT_USE_EXTENSION)
  set(Slicer_DONT_USE_EXTENSION FALSE)
endif()

if(NOT DEFINED Slicer_USE_CONFIGUREPREREQUISITES)
  set(Slicer_USE_CONFIGUREPREREQUISITES FALSE)
endif()

if(Slicer_SOURCE_DIR)
  return()
endif()

# --------------------------------------------------------------------------
set(Slicer_CMAKE_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake")
set(Slicer_EXTENSIONS_CMAKE_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Extensions/CMake")
set(vtkAddon_CMAKE_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon/CMake")

# Update CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH
  ${Slicer_CMAKE_DIR}
  ${Slicer_EXTENSIONS_CMAKE_DIR}
  ${vtkAddon_CMAKE_DIR}
  ${CMAKE_MODULE_PATH}
  )

# --------------------------------------------------------------------------
if(Slicer_USE_CONFIGUREPREREQUISITES)
  if(NOT Slicer_PREREQUISITES_CONFIGURED)
    if(DEFINED CMAKE_PROJECT_NAME)
      message(FATAL_ERROR
        "To be effective, 'find_package(Slicer COMPONENTS ConfigurePrerequisites)' should "
        "be placed before any calls to 'project()' or 'enable_language()'."
        "Before re-configuring, make sure to clean the build directory: ${CMAKE_CURRENT_BINARY_DIR}"
        )
    endif()
    # Note: By setting CMAKE_OSX_* variables before any enable_language() or project() calls,
    #       we ensure that the bitness will be properly detected.
    include(SlicerInitializeOSXVariables)
    set(Slicer_PREREQUISITES_CONFIGURED 1 CACHE INTERNAL "True if component 'ConfigurePrerequisites' has already been included")
  endif()
  return()
endif()

# --------------------------------------------------------------------------
# Slicer options
# --------------------------------------------------------------------------
set(Slicer_DEFAULT_BUILD_TYPE "Debug")
set(Slicer_USE_NUMPY "ON")
set(Slicer_USE_SCIPY "ON")
set(Slicer_USE_PYTHONQT "ON")
set(Slicer_USE_QtTesting "OFF")
set(Slicer_USE_SimpleITK "OFF")
set(Slicer_USE_TBB "TRUE")
set(Slicer_BUILD_BRAINSTOOLS "OFF")
set(Slicer_BUILD_CLI_SUPPORT "ON")
set(Slicer_BUILD_DICOM_SUPPORT "ON")
set(Slicer_BUILD_DIFFUSION_SUPPORT "OFF")
set(Slicer_BUILD_EXTENSIONMANAGER_SUPPORT "OFF")
set(Slicer_BUILD_APPLICATIONUPDATE_SUPPORT "OFF")
set(Slicer_BUILD_PARAMETERSERIALIZER_SUPPORT "OFF")
set(Slicer_BUILD_TESTING "ON")
set(Slicer_BUILD_WEBENGINE_SUPPORT "ON")

set(Slicer_REQUIRED_QT_VERSION "5.12")
set(Slicer_REQUIRED_QT_MODULES "Core;Widgets;Network;OpenGL;PrintSupport;UiTools;Xml;XmlPatterns;Svg;Sql;Multimedia;MultimediaWidgets;X11Extras;WebEngine;WebEngineWidgets;WebChannel;LinguistTools;Test")

# Launcher command
set(Slicer_USE_CTKAPPLAUNCHER "ON")
set(Slicer_LAUNCHER_EXECUTABLE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS")
set(Slicer_LAUNCH_COMMAND "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS;--launch")
set(SEM_LAUNCH_COMMAND "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MINS;--launch")

# VCS commands
set(GIT_EXECUTABLE "/usr/bin/git"  CACHE FILEPATH "Git command line client")

# Slicer working copy Revision, URL and Root
set(Slicer_REVISION "32448")
set(Slicer_WC_REVISION "f10cd8c")
set(Slicer_WC_REVISION_HASH "f10cd8c")
set(Slicer_WC_URL "https://github.com/Slicer/Slicer")
set(Slicer_WC_ROOT "https://github.com/Slicer/Slicer")

# Note that the variable "Slicer_REVISION" can be forced to
# a particular value by setting environment variable of the same name.
# This is particularly useful when the revision of Slicer changes because of
# updates to the extension build system and the extensions still need to be
# built against the revision prior to the update.
if(NOT "$ENV{Slicer_REVISION}" STREQUAL "")
  set(Slicer_REVISION "$ENV{Slicer_REVISION}")
  message(STATUS "SlicerConfig: Forcing Slicer_REVISION to '${Slicer_REVISION}'")
endif()

# Slicer os and architecture
set(Slicer_OS "linux")
set(Slicer_ARCHITECTURE "amd64")

# Slicer main application
set(Slicer_MAIN_PROJECT "MINSApp")
set(Slicer_MAIN_PROJECT_APPLICATION_NAME "MINS")

# License and Readme file
set(Slicer_LICENSE_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/License.txt")
set(Slicer_README_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/README.md")

# Path to qrcc.py script used in slicerFunctionAddPythonQtResources  CMake function
set(Slicer_QRCC_SCRIPT "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Utilities/Scripts/qrcc.py")

# Test templates directory
set(Slicer_CXX_MODULE_TEST_TEMPLATES_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTGUI/Testing/Cxx")
set(Slicer_PYTHON_MODULE_TEST_TEMPLATES_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCore/Testing/Python")

# Script for generating <Extension>Config.cmake
set(Slicer_EXTENSION_GENERATE_CONFIG "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerExtensionGenerateConfig.cmake")

# Path to extension CPack script
set(Slicer_EXTENSION_CPACK "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerExtensionCPack.cmake")
set(Slicer_EXTENSION_CPACK_BUNDLE_FIXUP "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/SlicerExtensionCPackBundleFixup.cmake.in")
set(Slicer_EXTENSIONS_DIRBASENAME "Extensions")
set(Slicer_EXTENSIONS_DIRNAME "${Slicer_EXTENSIONS_DIRBASENAME}-${Slicer_REVISION}") # Deprecated - Remove in Slicer 5.5

# Whether Slicer was built with modules and CLI support.
set(Slicer_BUILD_CLI "ON")
set(Slicer_BUILD_QTLOADABLEMODULES "ON")
set(Slicer_BUILD_QTSCRIPTEDMODULES "ON")

# Whether Slicer was built with shared libraries.
set(Slicer_BUILD_SHARED "ON")
set(Slicer_LIBRARY_PROPERTIES "")

# Export header for BuildModuleLogic and BuildQTModule
set(Slicer_EXPORT_HEADER_TEMPLATE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/CMake/qSlicerExport.h.in")
set(Slicer_LOGOS_RESOURCE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Resources/qSlicer.qrc")

# Slicer home (top of the tree)
set(Slicer_HOME "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build")

# Slicer binary directory
set(Slicer_BINARY_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build")

# Slicer Core library
set(Slicer_CORE_LIBRARY qSlicerBaseQTCore)

# Slicer GUI library
set(Slicer_GUI_LIBRARY qSlicerBaseQTApp)

# MRML libraries - This variable regroup all related MRML libraries
set(MRML_LIBRARIES MRMLCore;MRMLLogic;MRMLDisplayableManager;MRMLCLI)

# Slicer Libs VTK wrapped libraries
set(Slicer_Libs_VTK_WRAPPED_LIBRARIES "vtkSegmentationCore;vtkTeem;vtkITK;MRMLCore;MRMLLogic;vtkAddon;MRMLDisplayableManager;MRMLCLI")

# Slicer VTK version
set(Slicer_VTK_VERSION_MAJOR "9")

# Slicer include directories for module

set(qSlicerCamerasModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Cameras;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Cameras")
set(qSlicerUnitsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units")
set(qSlicerTerminologiesModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Terminologies;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Terminologies")
set(qSlicerSubjectHierarchyModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/SubjectHierarchy")
set(qSlicerColorsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors")
set(qSlicerAnnotationsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Annotations;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Annotations")
set(qSlicerMarkupsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups")
set(qSlicerTransformsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Transforms")
set(qSlicerDataModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data")
set(qSlicerModelsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Models;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Models")
set(qSlicerPlotsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Plots;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Plots")
set(qSlicerSegmentationsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations")
set(qSlicerSequencesModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Sequences;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Sequences")
set(qSlicerTablesModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Tables;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Tables")
set(qSlicerTextsModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Texts")
set(qSlicerReformatModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Reformat;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Reformat")
set(qSlicerVolumesModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Volumes;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Volumes")
set(qSlicerVolumeRenderingModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering")
set(qSlicerCropVolumeModule_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume")

# Slicer include directories for module logic

set(vtkSlicerCamerasModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Cameras/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Cameras/Logic")
set(vtkSlicerUnitsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Logic")
set(vtkSlicerTerminologiesModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Terminologies/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Terminologies/Logic")
set(vtkSlicerSubjectHierarchyModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/SubjectHierarchy/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTGUI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTGUI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI/Testing;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp")
set(vtkSlicerColorsModuleVTKWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/VTKWidgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/VTKWidgets")
set(vtkSlicerColorsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/Logic")
set(vtkSlicerColorsModuleMRMLDisplayableManager_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/MRMLDM;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/MRMLDM")
set(vtkSlicerAnnotationsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Annotations/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Annotations/Logic")
set(vtkSlicerMarkupsModuleVTKWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/VTKWidgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups/VTKWidgets")
set(vtkSlicerMarkupsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups/Logic")
set(vtkSlicerMarkupsModuleMRMLDisplayableManager_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/MRMLDM;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups/MRMLDM")
set(vtkSlicerTransformsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Transforms/Logic")
set(vtkSlicerTransformsModuleMRMLDisplayableManager_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/MRMLDM;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Transforms/MRMLDM")
set(vtkSlicerDataModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Data/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Data/Logic")
set(vtkSlicerModelsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Models/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Models/Logic")
set(vtkSlicerPlotsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Plots/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Plots/Logic")
set(vtkSlicerSegmentationsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/Logic")
set(vtkSlicerSegmentationsModuleMRMLDisplayableManager_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRMLDM;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRMLDM")
set(vtkSlicerSequencesModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Sequences/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Sequences/Logic")
set(vtkSlicerTablesModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Tables/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Tables/Logic")
set(vtkSlicerTextsModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Texts/Logic")
set(vtkSlicerReformatModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Reformat/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Reformat/Logic")
set(vtkSlicerVolumesModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Volumes/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Volumes/Logic")
set(vtkSlicerVolumeRenderingModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering/Logic")
set(vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/MRMLDM;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering/MRMLDM")
set(vtkSlicerCropVolumeModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/Logic")
set(vtkSlicerDICOMLibModuleLogic_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/DICOMLib/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/DICOMLib/Logic")

# Slicer include directories for module mrml

set(vtkSlicerColorsModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/MRML")
set(vtkSlicerAnnotationsModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Annotations/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Annotations/MRML")
set(vtkSlicerMarkupsModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups/MRML")
set(vtkSlicerSegmentationsModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/MRML")
set(vtkSlicerSequencesModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Sequences/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Sequences/MRML")
set(vtkSlicerVolumeRenderingModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering/MRML")
set(vtkSlicerCropVolumeModuleMRML_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/CropVolume/MRML;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/CropVolume/MRML")

# Slicer include directories for module Widget

set(qSlicerUnitsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Units/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Units/Widgets")
set(qSlicerTerminologiesModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Terminologies/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Terminologies/Widgets")
set(qSlicerSubjectHierarchyModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/SubjectHierarchy/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/SubjectHierarchy/Widgets")
set(qSlicerColorsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Colors/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Colors/Widgets")
set(qSlicerMarkupsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Markups/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Markups/Widgets")
set(qSlicerTransformsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Transforms/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Transforms/Widgets")
set(qSlicerModelsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Models/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Models/Widgets")
set(qSlicerPlotsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Plots/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Plots/Widgets")
set(qSlicerSegmentationsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Segmentations/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Segmentations/Widgets")
set(qSlicerSequencesModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Sequences/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Sequences/Widgets")
set(qSlicerTablesModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Tables/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Tables/Widgets")
set(qSlicerTextsModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Texts/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Texts/Widgets")
set(qSlicerVolumesModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Volumes/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/Volumes/Widgets")
set(qSlicerVolumeRenderingModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/VolumeRendering/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Loadable/VolumeRendering/Widgets")
set(qSlicerDICOMLibModuleWidgets_INCLUDE_DIRS
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Scripted/DICOMLib/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Scripted/DICOMLib/Widgets")

# See vtkAddon/CMake/vtkMacroKitPythonWrap.cmake
set(Slicer_VTK_WRAP_HIERARCHY_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build")

# Slicer VTK wrap hierarchy files

set(vtkAddon_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkAddonHierarchy.txt")
set(vtkTeem_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkTeemHierarchy.txt")
set(vtkITK_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkITKHierarchy.txt")
set(vtkSegmentationCore_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSegmentationCoreHierarchy.txt")
set(MRMLCore_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MRMLCoreHierarchy.txt")
set(MRMLCLI_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MRMLCLIHierarchy.txt")
set(MRMLLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MRMLLogicHierarchy.txt")
set(MRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/MRMLDisplayableManagerHierarchy.txt")
set(SlicerBaseLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerBaseLogicHierarchy.txt")
set(qSlicerBaseQTCLI_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/qSlicerBaseQTCLIHierarchy.txt")
set(vtkSlicerCamerasModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerCamerasModuleLogicHierarchy.txt")
set(vtkSlicerUnitsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerUnitsModuleLogicHierarchy.txt")
set(vtkSlicerTerminologiesModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerTerminologiesModuleLogicHierarchy.txt")
set(vtkSlicerSubjectHierarchyModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSubjectHierarchyModuleLogicHierarchy.txt")
set(vtkSlicerColorsModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerColorsModuleMRMLHierarchy.txt")
set(vtkSlicerColorsModuleVTKWidgets_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerColorsModuleVTKWidgetsHierarchy.txt")
set(vtkSlicerColorsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerColorsModuleLogicHierarchy.txt")
set(vtkSlicerColorsModuleMRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerColorsModuleMRMLDisplayableManagerHierarchy.txt")
set(vtkSlicerAnnotationsModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerAnnotationsModuleMRMLHierarchy.txt")
set(vtkSlicerAnnotationsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerAnnotationsModuleLogicHierarchy.txt")
set(vtkSlicerMarkupsModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerMarkupsModuleMRMLHierarchy.txt")
set(vtkSlicerMarkupsModuleVTKWidgets_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerMarkupsModuleVTKWidgetsHierarchy.txt")
set(vtkSlicerMarkupsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerMarkupsModuleLogicHierarchy.txt")
set(vtkSlicerMarkupsModuleMRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerMarkupsModuleMRMLDisplayableManagerHierarchy.txt")
set(vtkSlicerTransformsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerTransformsModuleLogicHierarchy.txt")
set(vtkSlicerTransformsModuleMRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerTransformsModuleMRMLDisplayableManagerHierarchy.txt")
set(vtkSlicerDataModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerDataModuleLogicHierarchy.txt")
set(vtkSlicerModelsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerModelsModuleLogicHierarchy.txt")
set(vtkSlicerPlotsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerPlotsModuleLogicHierarchy.txt")
set(vtkSlicerSegmentationsModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSegmentationsModuleMRMLHierarchy.txt")
set(vtkSlicerSegmentationsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSegmentationsModuleLogicHierarchy.txt")
set(vtkSlicerSegmentationsModuleMRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSegmentationsModuleMRMLDisplayableManagerHierarchy.txt")
set(vtkSlicerSequencesModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSequencesModuleMRMLHierarchy.txt")
set(vtkSlicerSequencesModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerSequencesModuleLogicHierarchy.txt")
set(vtkSlicerTablesModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerTablesModuleLogicHierarchy.txt")
set(vtkSlicerTextsModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerTextsModuleLogicHierarchy.txt")
set(vtkSlicerReformatModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerReformatModuleLogicHierarchy.txt")
set(vtkSlicerVolumesModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerVolumesModuleLogicHierarchy.txt")
set(vtkSlicerVolumeRenderingModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerVolumeRenderingModuleMRMLHierarchy.txt")
set(vtkSlicerVolumeRenderingModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerVolumeRenderingModuleLogicHierarchy.txt")
set(vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerHierarchy.txt")
set(vtkSlicerCropVolumeModuleMRML_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerCropVolumeModuleMRMLHierarchy.txt")
set(vtkSlicerCropVolumeModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerCropVolumeModuleLogicHierarchy.txt")
set(vtkSlicerDICOMLibModuleLogic_WRAP_HIERARCHY_FILE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/vtkSlicerDICOMLibModuleLogicHierarchy.txt")

# Slicer Libs include file directories.
set(Slicer_Libs_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/ITKFactoryRegistration;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/ITKFactoryRegistration;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkTeem;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkTeem;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/RemoteIO;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/RemoteIO;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/DisplayableManager;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/DisplayableManager;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/IDImageIO;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/IDImageIO;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Widgets")

# Slicer Base include file directories.
set(Slicer_Base_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build" "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTGUI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTGUI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTCLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTCLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI/Testing;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Modules/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/QTApp;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/QTApp")

# Slicer Module logic include file directories.
set(Slicer_ModuleLogic_INCLUDE_DIRS "${vtkSlicerCamerasModuleLogic_INCLUDE_DIRS};${vtkSlicerUnitsModuleLogic_INCLUDE_DIRS};${vtkSlicerTerminologiesModuleLogic_INCLUDE_DIRS};${vtkSlicerSubjectHierarchyModuleLogic_INCLUDE_DIRS};${vtkSlicerColorsModuleVTKWidgets_INCLUDE_DIRS};${vtkSlicerColorsModuleLogic_INCLUDE_DIRS};${vtkSlicerColorsModuleMRMLDisplayableManager_INCLUDE_DIRS};${vtkSlicerAnnotationsModuleLogic_INCLUDE_DIRS};${vtkSlicerMarkupsModuleVTKWidgets_INCLUDE_DIRS};${vtkSlicerMarkupsModuleLogic_INCLUDE_DIRS};${vtkSlicerMarkupsModuleMRMLDisplayableManager_INCLUDE_DIRS};${vtkSlicerTransformsModuleLogic_INCLUDE_DIRS};${vtkSlicerTransformsModuleMRMLDisplayableManager_INCLUDE_DIRS};${vtkSlicerDataModuleLogic_INCLUDE_DIRS};${vtkSlicerModelsModuleLogic_INCLUDE_DIRS};${vtkSlicerPlotsModuleLogic_INCLUDE_DIRS};${vtkSlicerSegmentationsModuleLogic_INCLUDE_DIRS};${vtkSlicerSegmentationsModuleMRMLDisplayableManager_INCLUDE_DIRS};${vtkSlicerSequencesModuleLogic_INCLUDE_DIRS};${vtkSlicerTablesModuleLogic_INCLUDE_DIRS};${vtkSlicerTextsModuleLogic_INCLUDE_DIRS};${vtkSlicerReformatModuleLogic_INCLUDE_DIRS};${vtkSlicerVolumesModuleLogic_INCLUDE_DIRS};${vtkSlicerVolumeRenderingModuleLogic_INCLUDE_DIRS};${vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_INCLUDE_DIRS};${vtkSlicerCropVolumeModuleLogic_INCLUDE_DIRS};${vtkSlicerDICOMLibModuleLogic_INCLUDE_DIRS}"
  CACHE INTERNAL "Slicer Module logic includes" FORCE)

# Slicer Module MRML include file directories.
set(Slicer_ModuleMRML_INCLUDE_DIRS "${vtkSlicerColorsModuleMRML_INCLUDE_DIRS};${vtkSlicerAnnotationsModuleMRML_INCLUDE_DIRS};${vtkSlicerMarkupsModuleMRML_INCLUDE_DIRS};${vtkSlicerSegmentationsModuleMRML_INCLUDE_DIRS};${vtkSlicerSequencesModuleMRML_INCLUDE_DIRS};${vtkSlicerVolumeRenderingModuleMRML_INCLUDE_DIRS};${vtkSlicerCropVolumeModuleMRML_INCLUDE_DIRS}"
  CACHE INTERNAL "Slicer Module MRML includes" FORCE)

# Slicer Module Widgets include file directories.
set(Slicer_ModuleWidgets_INCLUDE_DIRS "${qSlicerUnitsModuleWidgets_INCLUDE_DIRS};${qSlicerTerminologiesModuleWidgets_INCLUDE_DIRS};${qSlicerSubjectHierarchyModuleWidgets_INCLUDE_DIRS};${qSlicerColorsModuleWidgets_INCLUDE_DIRS};${qSlicerMarkupsModuleWidgets_INCLUDE_DIRS};${qSlicerTransformsModuleWidgets_INCLUDE_DIRS};${qSlicerModelsModuleWidgets_INCLUDE_DIRS};${qSlicerPlotsModuleWidgets_INCLUDE_DIRS};${qSlicerSegmentationsModuleWidgets_INCLUDE_DIRS};${qSlicerSequencesModuleWidgets_INCLUDE_DIRS};${qSlicerTablesModuleWidgets_INCLUDE_DIRS};${qSlicerTextsModuleWidgets_INCLUDE_DIRS};${qSlicerVolumesModuleWidgets_INCLUDE_DIRS};${qSlicerVolumeRenderingModuleWidgets_INCLUDE_DIRS};${qSlicerDICOMLibModuleWidgets_INCLUDE_DIRS}"
  CACHE INTERNAL "Slicer Module widgets includes" FORCE)

set(ITKFactoryRegistration_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/ITKFactoryRegistration;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/ITKFactoryRegistration"
  CACHE INTERNAL "ITKFactoryRegistration includes" FORCE)

set(MRMLCore_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Core;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore"
  CACHE INTERNAL "MRMLCore includes" FORCE)

set(MRMLLogic_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Logic;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Logic"
  CACHE INTERNAL "MRMLLogic includes" FORCE)

set(MRMLCLI_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/CLI"
  CACHE INTERNAL "MRMLCLI includes" FORCE)

set(qMRMLWidgets_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/MRML/Widgets;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/MRML/Widgets"
  CACHE INTERNAL "qMRMLWidgets includes" FORCE)

set(RemoteIO_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/RemoteIO;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/RemoteIO"
  CACHE INTERNAL "RemoteIO includes" FORCE)

set(vtkAddon_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/vtkAddon;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkAddon"
  CACHE INTERNAL "vtkAddon includes" FORCE)

set(vtkITK_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkITK;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkITK"
  CACHE INTERNAL "vtkITK includes" FORCE)

set(vtkSegmentationCore_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkSegmentationCore;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkSegmentationCore"
  CACHE INTERNAL "vtkSegmentationCore includes" FORCE)

set(vtkTeem_INCLUDE_DIRS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/vtkTeem;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/vtkTeem"
  CACHE INTERNAL "vtkTeem includes" FORCE)

# The location of the UseSlicer.cmake file.
set(Slicer_USE_FILE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/UseSlicer.cmake")

set(Slicer_BINARY_INNER_SUBDIR "Slicer-build")

# Slicer relative build directories.
set(Slicer_BIN_DIR "bin")
set(Slicer_LIB_DIR "lib/MINS-5.6")
set(Slicer_INCLUDE_DIR "include/MINS-5.6")
set(Slicer_SHARE_DIR "share/MINS-5.6")
set(Slicer_ITKFACTORIES_DIR "lib/MINS-5.6/ITKFactories")

set(Slicer_CLIMODULES_SUBDIR "cli-modules")
set(Slicer_CLIMODULES_BIN_DIR "lib/MINS-5.6/cli-modules")
set(Slicer_CLIMODULES_LIB_DIR "lib/MINS-5.6/cli-modules")
set(Slicer_CLIMODULES_SHARE_DIR "share/MINS-5.6/cli-modules")

set(Slicer_QTLOADABLEMODULES_SUBDIR "qt-loadable-modules")
set(Slicer_QTLOADABLEMODULES_BIN_DIR "lib/MINS-5.6/qt-loadable-modules")
set(Slicer_QTLOADABLEMODULES_LIB_DIR "lib/MINS-5.6/qt-loadable-modules")
set(Slicer_QTLOADABLEMODULES_INCLUDE_DIR "include/MINS-5.6/qt-loadable-modules")
set(Slicer_QTLOADABLEMODULES_SHARE_DIR "share/MINS-5.6/qt-loadable-modules")
set(Slicer_QTLOADABLEMODULES_PYTHON_LIB_DIR "lib/MINS-5.6/qt-loadable-modules/Python")

if(Slicer_USE_PYTHONQT)
  set(Slicer_QTSCRIPTEDMODULES_SUBDIR "qt-scripted-modules")
  set(Slicer_QTSCRIPTEDMODULES_BIN_DIR "lib/MINS-5.6/qt-scripted-modules")
  set(Slicer_QTSCRIPTEDMODULES_LIB_DIR "lib/MINS-5.6/qt-scripted-modules")
  set(Slicer_QTSCRIPTEDMODULES_INCLUDE_DIR "include/MINS-5.6/qt-scripted-modules")
  set(Slicer_QTSCRIPTEDMODULES_SHARE_DIR "share/MINS-5.6/qt-scripted-modules")
endif()

# ThirdParty: Corresponds to superbuild projects built
# in Slicer extension.
set(Slicer_THIRDPARTY_BIN_DIR "bin")
set(Slicer_THIRDPARTY_LIB_DIR "lib/MINS-5.6")
set(Slicer_THIRDPARTY_SHARE_DIR  "share/MINS-5.6")

# Slicer Python version
set(Slicer_REQUIRED_PYTHON_VERSION "3.9.10")
set(Slicer_REQUIRED_PYTHON_VERSION_MAJOR "3")
set(Slicer_REQUIRED_PYTHON_VERSION_MINOR "9")
set(Slicer_REQUIRED_PYTHON_VERSION_PATCH "10")
set(Slicer_REQUIRED_PYTHON_VERSION_DOT "3.9")

# Python stdlib and site-package sub-directories
set(PYTHON_STDLIB_SUBDIR "lib/python3.9")
set(PYTHON_SITE_PACKAGES_SUBDIR "lib/python3.9/site-packages")

# Slicer install root
set(Slicer_INSTALL_ROOT "./")

# Slicer relative install directories.
set(Slicer_INSTALL_BIN_DIR "./bin")
set(Slicer_INSTALL_LIB_DIR "./lib/MINS-5.6")
set(Slicer_INSTALL_INCLUDE_DIR "./include/MINS-5.6")
set(Slicer_INSTALL_SHARE_DIR "./share/MINS-5.6")
set(Slicer_INSTALL_ITKFACTORIES_DIR "./lib/MINS-5.6/ITKFactories")

set(Slicer_INSTALL_CLIMODULES_BIN_DIR "./lib/MINS-5.6/cli-modules")
set(Slicer_INSTALL_CLIMODULES_LIB_DIR "./lib/MINS-5.6/cli-modules")
set(Slicer_INSTALL_CLIMODULES_SHARE_DIR "./share/MINS-5.6/cli-modules")

set(Slicer_INSTALL_QTLOADABLEMODULES_BIN_DIR "./lib/MINS-5.6/qt-loadable-modules")
set(Slicer_INSTALL_QTLOADABLEMODULES_LIB_DIR "./lib/MINS-5.6/qt-loadable-modules")
set(Slicer_INSTALL_QTLOADABLEMODULES_PYTHON_LIB_DIR "./lib/MINS-5.6/qt-loadable-modules/Python")
set(Slicer_INSTALL_QTLOADABLEMODULES_INCLUDE_DIR "./include/MINS-5.6/qt-loadable-modules")
set(Slicer_INSTALL_QTLOADABLEMODULES_SHARE_DIR "./share/MINS-5.6/qt-loadable-modules")

if(Slicer_USE_PYTHONQT)
  set(Slicer_INSTALL_QTSCRIPTEDMODULES_BIN_DIR "./lib/MINS-5.6/qt-scripted-modules")
  set(Slicer_INSTALL_QTSCRIPTEDMODULES_LIB_DIR "./lib/MINS-5.6/qt-scripted-modules")
  set(Slicer_INSTALL_QTSCRIPTEDMODULES_INCLUDE_DIR "./include/MINS-5.6/qt-scripted-modules")
  set(Slicer_INSTALL_QTSCRIPTEDMODULES_SHARE_DIR "./share/MINS-5.6/qt-scripted-modules")
endif()

set(Slicer_INSTALL_THIRDPARTY_BIN_DIR "${Slicer_INSTALL_ROOT}${Slicer_BUNDLE_EXTENSIONS_LOCATION}${Slicer_THIRDPARTY_BIN_DIR}")
set(Slicer_INSTALL_THIRDPARTY_LIB_DIR "${Slicer_INSTALL_ROOT}${Slicer_BUNDLE_EXTENSIONS_LOCATION}${Slicer_THIRDPARTY_LIB_DIR}")
set(Slicer_INSTALL_THIRDPARTY_SHARE_DIR "${Slicer_INSTALL_ROOT}${Slicer_BUNDLE_EXTENSIONS_LOCATION}${Slicer_THIRDPARTY_SHARE_DIR}")

# The Slicer install prefix (*not* defined in the install tree)
set(Slicer_INSTALL_PREFIX  "/usr/local")


# --------------------------------------------------------------------------
# Testing
# --------------------------------------------------------------------------
include(CTestUseLaunchers)

# --------------------------------------------------------------------------
# External data
# --------------------------------------------------------------------------
if(NOT DEFINED Slicer_ExternalData_DATA_MANAGEMENT_TARGET)
  set(Slicer_ExternalData_DATA_MANAGEMENT_TARGET "SlicerData")
endif()
if(NOT DEFINED SEM_DATA_MANAGEMENT_TARGET)
  set(SEM_DATA_MANAGEMENT_TARGET ${Slicer_ExternalData_DATA_MANAGEMENT_TARGET})
endif()
set(Slicer_ExternalData_OBJECT_STORES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-build/ExternalData/Objects")
set(Slicer_ExternalData_URL_TEMPLATES "https://github.com/Slicer/SlicerTestingData/releases/download/%(algo)/%(hash)")

# --------------------------------------------------------------------------
# External projects
# --------------------------------------------------------------------------

# With the help of SuperBuild, Slicer has been configured and built against a collection
# of external projects.
#
# Considering that, by default, Slicer and most of its dependent external projects are
# built as shared library, it's important to make sure that the project including
# SlicerConfig.cmake (this file) is built against the same set of external projects if it applies.
#
# Let's consider the example of a project depending on both VTK and Slicer. With the help of
# the macro 'slicer_config_set_ep', the build system will check that the path of the already
# defined VTK_DIR matches the VTK_DIR used to build Slicer.
#
# A typical use of this macro is illustrated below:
#
#    slicer_config_set_ep("VTK_DIR", "")
#
#
macro(slicer_config_set_ep var value)
  if(NOT "${value}" STREQUAL "")
    if(DEFINED ${var})
      get_filename_component(var_realpath "${${var}}" REALPATH)
      get_filename_component(value_realpath ${value} REALPATH)
      if(NOT ${var_realpath} STREQUAL ${value_realpath})
        message(FATAL_ERROR "Variable ${var} defined prior calling 'find_package(Slicer)' does NOT "
                            "match value used to configure Slicer. It probably means that a different "
                            "${var} has been used to configure this project and Slicer.\n"
                            "${var}=${${var}}\n"
                            "Slicer_${var}=${value}")
      endif()
    endif()
    set(${var} "${value}" ${ARGN})
  endif()
endmacro()

# SlicerExecutionModel settings
set(SlicerExecutionModel_CLI_LIBRARY_WRAPPER_CXX "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/CLI/SEMCommandLineLibraryWrapper.cxx")
set(SlicerExecutionModel_EXTRA_INCLUDE_DIRECTORIES "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Base/CLI;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Base/CLI/Testing;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Libs/ITKFactoryRegistration;/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/Libs/ITKFactoryRegistration")
set(SlicerExecutionModel_EXTRA_EXECUTABLE_TARGET_LIBRARIES "ITKFactoryRegistration")

# Slicer external projects variables

slicer_config_set_ep(
  Qt5_DIR
  "/usr/lib/x86_64-linux-gnu/cmake/Qt5"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  ZLIB_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  ZLIB_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install/lib/libzlib.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  ZLIB_ROOT
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/zlib-install"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  OPENSSL_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  OPENSSL_SSL_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libssl.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  OPENSSL_CRYPTO_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL/libcrypto.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  CURL_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  CURL_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/curl-install/lib/libcurl.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  CTKAppLauncherLib_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAppLauncherLib-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  BZIP2_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/bzip2"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  BZIP2_LIBRARIES
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/bzip2-install/lib/libbz2.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  CTKAppLauncher_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAPPLAUNCHER"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LibFFI_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibFFI-install/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LibFFI_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibFFI-install/lib/libffi.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LZMA_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LZMA-install/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LZMA_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LZMA-install/lib/liblzma.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  sqlite_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/sqlite-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  sqlite_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/sqlite-install/lib/libsqlite3.a"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  sqlite_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/sqlite-install/include/sqlite3"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  PYTHON_EXECUTABLE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin/PythonSlicer"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  PYTHON_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/include/python3.9"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  PYTHON_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_ROOT_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/include/python3.9"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_LIBRARY_DEBUG
  ""
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_LIBRARY_RELEASE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/libpython3.9.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Python3_EXECUTABLE
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin/PythonSlicer"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  TBB_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/cmake/tbb"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  VTK_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  Teem_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  DCMTK_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  ITK_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  CTK_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LibArchive_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  LibArchive_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib/libarchive.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  RapidJSON_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/RapidJSON/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  RapidJSON_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/RapidJSON-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  SlicerExecutionModel_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  JsonCpp_INCLUDE_DIR
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/JsonCpp/include"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  JsonCpp_LIBRARY
  "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/JsonCpp-build/src/lib_json/./libjsoncpp.so"
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  QtTesting_DIR
  ""
  CACHE STRING "Path to project build directory or file" FORCE)

slicer_config_set_ep(
  BRAINSCommonLib_DIR
  ""
  CACHE STRING "Path to project build directory or file" FORCE)


# --------------------------------------------------------------------------
# Consistent Compiler Selections
# --------------------------------------------------------------------------
# Compilation Commands
set(Slicer_CMAKE_CXX_COMPILER "/home/blvksh33p/.local/bin/c++")
set(Slicer_CMAKE_C_COMPILER   "/home/blvksh33p/.local/bin/cc")

# With the help of SuperBuild, Slicer has been configured with specific compiler
#
# Considering that, by default, Slicer and most of its dependent external projects are
# built with a particular compiler, it's important to make sure that the project including
# SlicerConfig.cmake (this file) is built against the same compliant compiler
#
# A typical use of this macro is illustrated below:
#    slicer_config_set_compiler_ep("CMAKE_C_COMPILER", "")
#    slicer_config_set_compiler_ep("CMAKE_CXX_COMPILER", "")
#
macro(slicer_config_set_compiler_ep var value)
  if(NOT "${value}" STREQUAL "")
    if(DEFINED ${var})
      get_filename_component(var_realpath "${${var}}" REALPATH)
      get_filename_component(value_realpath ${value} REALPATH)
      if(NOT MSVC AND NOT ${var_realpath} STREQUAL ${value_realpath})
        message(FATAL_ERROR "Variable ${var} defined prior calling 'find_package(Slicer)' does NOT "
                            "match value used to configure Slicer. It probably means that a different "
                            "${var} has been used to configure this project and Slicer.\n"
                            "${var}=${${var}}\n"
                            "Slicer_${var}=${value}")
      endif()
    endif()
    set(${var} "${value}" ${ARGN})
  endif()
endmacro()
slicer_config_set_compiler_ep( CMAKE_C_COMPILER   "/home/blvksh33p/.local/bin/cc"
   CACHE PATH "Path to C compiler used in Slicer build" FORCE )
slicer_config_set_compiler_ep( CMAKE_CXX_COMPILER "/home/blvksh33p/.local/bin/c++"
   CACHE PATH "Path to CXX compiler used in Slicer build" FORCE )
slicer_config_set_compiler_ep( CMAKE_CXX_STANDARD "17"
   CACHE PATH "C++ standard used in Slicer build" FORCE )
slicer_config_set_compiler_ep( CMAKE_CXX_STANDARD_REQUIRED "ON"
   CACHE PATH "Whether the specified C++ standard is a requirement in Slicer build" FORCE )
slicer_config_set_compiler_ep( CMAKE_CXX_EXTENSIONS "OFF"
   CACHE PATH "Whether compiler specific extensions are requested in Slicer build" FORCE )

# On platform (i.e. Windows with Visual Studio) where it is possible to use
# either a 32 or 64 bits generator, it is important to compare bitness of Slicer
# project against project depending on Slicer (i.e. extension) to ensure there
# are no mismatch.
set(Slicer_CMAKE_SIZEOF_VOID_P "8")
set(Slicer_CMAKE_GENERATOR "Unix Makefiles")
if(NOT DEFINED Slicer_SKIP_CMAKE_SIZEOF_VOID_P_CHECK)
  set(Slicer_SKIP_CMAKE_SIZEOF_VOID_P_CHECK FALSE)
endif()
if(NOT ${Slicer_SKIP_CMAKE_SIZEOF_VOID_P_CHECK})
  if(NOT Slicer_CMAKE_SIZEOF_VOID_P EQUAL CMAKE_SIZEOF_VOID_P)
    message(FATAL_ERROR
      "Mismatch between bitness of '${CMAKE_PROJECT_NAME}' and 'Slicer' project !\n"
      "\tSlicer_CMAKE_SIZEOF_VOID_P:${Slicer_CMAKE_SIZEOF_VOID_P}\n"
      "\tCMAKE_SIZEOF_VOID_P:${CMAKE_SIZEOF_VOID_P}\n"
      "Reconfigure '${CMAKE_PROJECT_NAME}' project using a compatible Generator.\n"
      "Generator used to configure Slicer was: ${Slicer_CMAKE_GENERATOR}\n"
      "See https://www.cmake.org/cmake/help/v2.8.11/cmake.html#opt:-Ggenerator-name")
  endif()
endif()

# List all required external project
set(Slicer_EXTERNAL_PROJECTS CTK;CTKAppLauncherLib;ITK;CURL;Teem;VTK;RapidJSON;CTKAppLauncher;SlicerExecutionModel;DCMTK;PythonLibs;PythonInterp)
set(Slicer_EXTERNAL_PROJECTS_NO_USEFILE CURL;CTKAppLauncherLib;RapidJSON;CTKAppLauncher;DCMTK;PythonLibs;PythonInterp;VTK)

set(Slicer_VTK_COMPONENTS "FiltersExtraction;FiltersFlowPaths;FiltersGeometry;FiltersParallel;GUISupportQtSQL;IOExport;IOImage;IOLegacy;IOPLY;IOXML;ImagingMath;ImagingMorphological;ImagingStatistics;ImagingStencil;InteractionImage;RenderingContextOpenGL2;RenderingQt;RenderingVolumeOpenGL2;TestingRendering;ViewsQt;zlib;WrappingPythonCore")

# Include external projects
foreach(proj ${Slicer_EXTERNAL_PROJECTS})
  set(_component_args)
  if(DEFINED Slicer_${proj}_COMPONENTS)
    set(_component_args COMPONENTS ${Slicer_${proj}_COMPONENTS})
  endif()
  find_package(${proj} ${_component_args} REQUIRED)
  # Add project CMake dir to module path
  if(DEFINED ${proj}_CMAKE_DIR)
    set(CMAKE_MODULE_PATH
      ${${proj}_CMAKE_DIR}
      ${CMAKE_MODULE_PATH}
      )
  endif()
  # Add project Utilities/CMake dir to module path
  if(DEFINED ${proj}_CMAKE_UTILITIES_DIR)
    set(CMAKE_MODULE_PATH
      ${${proj}_CMAKE_UTILITIES_DIR}
      ${CMAKE_MODULE_PATH}
      )
  endif()
endforeach()

# List all Slicer_USE_SYSTEM_* variables

set(Slicer_USE_SYSTEM_Slicer_USE_SYSTEM_python "")

# This block should be added after VTK and CTK are found.
# It will check if CTK_Qt5_DIR is valid.
include(${Slicer_CMAKE_DIR}/SlicerBlockFindQtAndCheckVersion.cmake)

# --------------------------------------------------------------------------
if(EXISTS "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerTargets.cmake" AND NOT TARGET SlicerBaseLogic)
  include("/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build/SlicerTargets.cmake")
endif()
