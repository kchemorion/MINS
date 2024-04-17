/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerVolumesModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerVolumesModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerVolumesModuleWidgetsExport_h
#define __qSlicerVolumesModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerVolumesModuleWidgets_STATIC)
 #if defined(qSlicerVolumesModuleWidgets_EXPORTS)
  #define Q_SLICER_QTMODULES_VOLUMES_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_VOLUMES_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_VOLUMES_WIDGETS_EXPORT
#endif

#endif
