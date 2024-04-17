/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerCamerasModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerCamerasModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerCamerasModuleExport_h
#define __qSlicerCamerasModuleExport_h

#if defined(WIN32) && !defined(qSlicerCamerasModule_STATIC)
 #if defined(qSlicerCamerasModule_EXPORTS)
  #define Q_SLICER_QTMODULES_CAMERAS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_CAMERAS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_CAMERAS_EXPORT
#endif

#endif
