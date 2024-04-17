/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTablesModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTablesModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTablesModuleExport_h
#define __qSlicerTablesModuleExport_h

#if defined(WIN32) && !defined(qSlicerTablesModule_STATIC)
 #if defined(qSlicerTablesModule_EXPORTS)
  #define Q_SLICER_QTMODULES_TABLES_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_TABLES_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_TABLES_EXPORT
#endif

#endif
