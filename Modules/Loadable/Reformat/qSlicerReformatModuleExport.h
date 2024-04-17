/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerReformatModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerReformatModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerReformatModuleExport_h
#define __qSlicerReformatModuleExport_h

#if defined(WIN32) && !defined(qSlicerReformatModule_STATIC)
 #if defined(qSlicerReformatModule_EXPORTS)
  #define Q_SLICER_QTMODULES_REFORMAT_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_REFORMAT_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_REFORMAT_EXPORT
#endif

#endif
