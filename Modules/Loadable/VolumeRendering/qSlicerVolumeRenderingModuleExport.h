/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerVolumeRenderingModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerVolumeRenderingModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerVolumeRenderingModuleExport_h
#define __qSlicerVolumeRenderingModuleExport_h

#if defined(WIN32) && !defined(qSlicerVolumeRenderingModule_STATIC)
 #if defined(qSlicerVolumeRenderingModule_EXPORTS)
  #define Q_SLICER_QTMODULES_VOLUMERENDERING_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_VOLUMERENDERING_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_VOLUMERENDERING_EXPORT
#endif

#endif
