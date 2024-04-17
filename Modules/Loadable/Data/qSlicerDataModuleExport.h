/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerDataModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerDataModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerDataModuleExport_h
#define __qSlicerDataModuleExport_h

#if defined(WIN32) && !defined(qSlicerDataModule_STATIC)
 #if defined(qSlicerDataModule_EXPORTS)
  #define Q_SLICER_QTMODULES_DATA_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_DATA_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_DATA_EXPORT
#endif

#endif
