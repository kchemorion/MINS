/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerColorsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerColorsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerColorsModuleExport_h
#define __qSlicerColorsModuleExport_h

#if defined(WIN32) && !defined(qSlicerColorsModule_STATIC)
 #if defined(qSlicerColorsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_COLORS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_COLORS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_COLORS_EXPORT
#endif

#endif
