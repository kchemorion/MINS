/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTransformsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTransformsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTransformsModuleExport_h
#define __qSlicerTransformsModuleExport_h

#if defined(WIN32) && !defined(qSlicerTransformsModule_STATIC)
 #if defined(qSlicerTransformsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_TRANSFORMS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_TRANSFORMS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_TRANSFORMS_EXPORT
#endif

#endif
