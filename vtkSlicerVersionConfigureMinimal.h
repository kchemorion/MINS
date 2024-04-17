/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/

#ifndef __vtkSlicerVersionConfigureMinimal_h
#define __vtkSlicerVersionConfigureMinimal_h

/// \file vtkSlicerVersionConfigureMinimal.h
/// \brief Defines macros identifying the operating system, architecture and version of this project.
///
/// The macros provided in this file identify the operating system, architecture, and
/// version of this project.
///
/// The file is prefixed with "Minimal" because it provides a subset of the version
/// information that rarely changes. Indeed, these macros are occasionally modified
/// by updating the `Slicer_VERSION_*` or `Slicer_RELEASE_TYPE` CMake options
/// (e.g., when creating a release).
///
/// If you need version information specific to the current revision of this project
/// source code, consider including `vtkSlicerVersionConfigure.h` instead of this header.
///

//-----------------------------------------------------------------------------
/// \def Slicer_VERSION_MAJOR
/// Major version number of this project source and binaries.
#define Slicer_VERSION_MAJOR 5

/// \def Slicer_VERSION_MINOR
/// Minor version number of this project source and binaries.
#define Slicer_VERSION_MINOR 6

/// \def Slicer_VERSION_PATCH
/// Patch version number of this project source and binaries.
#define Slicer_VERSION_PATCH 2

//-----------------------------------------------------------------------------
/// \def Slicer_MAIN_PROJECT_VERSION_MAJOR
#define Slicer_MAIN_PROJECT_VERSION_MAJOR 0

/// \def Slicer_MAIN_PROJECT_VERSION_MINOR
#define Slicer_MAIN_PROJECT_VERSION_MINOR 1

/// \def Slicer_MAIN_PROJECT_VERSION_PATCH
#define Slicer_MAIN_PROJECT_VERSION_PATCH 0

//-----------------------------------------------------------------------------
/// \def Slicer_VERSION
/// \brief Slicer version string.
///
/// Format is `<Slicer_VERSION_MAJOR>.<Slicer_VERSION_MINOR>`.
#define Slicer_VERSION "5.6"

//-----------------------------------------------------------------------------
/// \def Slicer_MAIN_PROJECT_VERSION
/// \brief Slicer main project version string.
///
/// Format is `<Slicer_MAIN_PROJECT_VERSION_MAJOR>.<Slicer_MAIN_PROJECT_VERSION_MINOR>`.
#define Slicer_MAIN_PROJECT_VERSION "0.1"

//-----------------------------------------------------------------------------
/// \def Slicer_OS_LINUX_NAME
/// String describing Linux operating system.
#define Slicer_OS_LINUX_NAME "linux"

/// \def Slicer_OS_MAC_NAME
/// String describing macOS operating system.
#define Slicer_OS_MAC_NAME "macosx"

/// \def Slicer_OS_WIN_NAME
/// String describing Windows operating system.
#define Slicer_OS_WIN_NAME "win"

/// \def Slicer_ARCHITECTURE
/// \brief String describing the architecture associated with this project binaries.
#define Slicer_ARCHITECTURE "amd64"

/// \def Slicer_OS
/// \brief String describing the operating system associated with this project binaries.
#define Slicer_OS "linux"

/// \def Slicer_RELEASE_TYPE
/// \brief Type of Slicer release: `Experimental`, `Nightly` or `Stable`.
#define Slicer_RELEASE_TYPE "Experimental"

#endif
