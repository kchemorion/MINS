/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerMarkupsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerMarkupsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerMarkupsModuleExport_h
#define __qSlicerMarkupsModuleExport_h

#if defined(WIN32) && !defined(qSlicerMarkupsModule_STATIC)
 #if defined(qSlicerMarkupsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_MARKUPS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_MARKUPS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_MARKUPS_EXPORT
#endif

#endif