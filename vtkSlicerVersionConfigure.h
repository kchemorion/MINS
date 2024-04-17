/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/

#ifndef __vtkSlicerVersionConfigure_h
#define __vtkSlicerVersionConfigure_h

/// \file vtkSlicerVersionConfigure.h
/// \brief Defines macros identifying the version and revision of this project.
///
/// The macros defined in this file are specific to the current revision of the source code,
/// and they augment the version details provided by vtkSlicerVersionConfigureMinimal.h.
/// Note that this header internally includes `vtkSlicerVersionConfigureMinimal.h`.
///
/// Since this header file is regenerated each time the current revision (i.e., Git commit)
/// of the source code changes, it should be included carefully. to maintain incremental build
/// speed. Consider including `vtkSlicerVersionConfigureMinimal.h` before including this header.
///

#include "vtkSlicerVersionConfigureMinimal.h"

/// \def Slicer_VERSION_FULL
/// \brief Slicer long version string.
///
/// Format is `<Slicer_VERSION_MAJOR>.<Slicer_VERSION_MINOR>.<Slicer_VERSION_PATCH>[-<Slicer_BUILDDATE>]`
#define Slicer_VERSION_FULL "5.6.2-2024-04-05"

/// \def Slicer_BUILDDATE
/// \brief Build date associated with this project binaries.
#define Slicer_BUILDDATE "2024-04-05"

/// \def Slicer_WC_URL
/// \brief Source control management URL identifying Slicer project sources.
#define Slicer_WC_URL "https://github.com/Slicer/Slicer"

/// \def Slicer_REVISION
/// \brief Revision identifying this project sources. Can contain WC revision hash or commit count.
/// \sa Slicer_WC_REVISION_TYPE
#define Slicer_REVISION "32448"

/// \def Slicer_REVISION_TYPE
/// \brief Specifies what is stored in Slicer_REVISION (hash or commit count).
/// \sa Slicer_REVISION
#define Slicer_REVISION_TYPE "CommitCount"

/// \def Slicer_WC_REVISION
/// \brief Revision identifying this project sources.
/// \sa Slicer_WC_URL
#define Slicer_WC_REVISION "f10cd8c"

/// \def Slicer_WC_REVISION_HASH
/// \brief Revision hash identifying this project sources.
/// \sa Slicer_WC_URL
#define Slicer_WC_REVISION_HASH "f10cd8c"

/// \def Slicer_WC_REVISION_HASH
/// \brief Commit count identifying this project sources (custom commit count offset applied).
/// \sa Slicer_REVISION
#define Slicer_COMMIT_COUNT "32448"

/// \def Slicer_MAIN_PROJECT_VERSION_FULL
/// \brief Slicer main project long version string.
///
/// Format is `<Slicer_MAIN_PROJECT_VERSION_MAJOR>.<Slicer_MAIN_PROJECT_VERSION_MINOR>.<Slicer_MAIN_PROJECT_VERSION_PATCH>[-<Slicer_MAIN_PROJECT_BUILDDATE>]`
#define Slicer_MAIN_PROJECT_VERSION_FULL "0.1.0-"

/// \def Slicer_MAIN_PROJECT_BUILDDATE
/// \brief Build date associated with main project binaries.
#define Slicer_MAIN_PROJECT_BUILDDATE ""

/// \def Slicer_MAIN_PROJECT_WC_URL
/// \brief Source control management URL identifying main project sources.
#define Slicer_MAIN_PROJECT_WC_URL "NA"

/// \def Slicer_MAIN_PROJECT_REVISION
/// \brief Revision identifying main project sources. Can contain WC revision hash or commit count.
/// \sa Slicer_MAIN_PROJECT_WC_REVISION_TYPE
#define Slicer_MAIN_PROJECT_REVISION "0"

/// \def Slicer_MAIN_PROJECT_REVISION_TYPE
/// \brief Specifies what is stored in Slicer_MAIN_PROJECT_REVISION (hash or commit count).
/// \sa Slicer_MAIN_PROJECT_REVISION
#define Slicer_MAIN_PROJECT_REVISION_TYPE "CommitCount"

/// \def Slicer_MAIN_PROJECT_WC_REVISION
/// \brief Revision identifying main project sources.
/// \sa Slicer_MAIN_PROJECT_WC_URL
#define Slicer_MAIN_PROJECT_WC_REVISION "NA"

/// \def Slicer_MAIN_PROJECT_WC_REVISION_HASH
/// \brief Revision hash identifying main project sources.
/// \sa Slicer_MAIN_PROJECT_WC_URL
#define Slicer_MAIN_PROJECT_WC_REVISION_HASH "NA"

/// \def Slicer_MAIN_PROJECT_WC_REVISION_HASH
/// \brief Commit count identifying main project sources (custom commit count offset applied).
/// \sa Slicer_MAIN_PROJECT_REVISION
#define Slicer_MAIN_PROJECT_COMMIT_COUNT "0"

#endif
