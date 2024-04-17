/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerPlotsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerPlotsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerPlotsModuleExport_h
#define __qSlicerPlotsModuleExport_h

#if defined(WIN32) && !defined(qSlicerPlotsModule_STATIC)
 #if defined(qSlicerPlotsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_PLOTS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_PLOTS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_PLOTS_EXPORT
#endif

#endif
