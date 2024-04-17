/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerUnitsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerUnitsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerUnitsModuleExport_h
#define __qSlicerUnitsModuleExport_h

#if defined(WIN32) && !defined(qSlicerUnitsModule_STATIC)
 #if defined(qSlicerUnitsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_UNITS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_UNITS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_UNITS_EXPORT
#endif

#endif
