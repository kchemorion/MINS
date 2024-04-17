/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerVolumesModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerVolumesModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerVolumesModuleExport_h
#define __qSlicerVolumesModuleExport_h

#if defined(WIN32) && !defined(qSlicerVolumesModule_STATIC)
 #if defined(qSlicerVolumesModule_EXPORTS)
  #define Q_SLICER_QTMODULES_VOLUMES_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_VOLUMES_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_VOLUMES_EXPORT
#endif

#endif
