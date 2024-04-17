/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTerminologiesModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTerminologiesModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTerminologiesModuleExport_h
#define __qSlicerTerminologiesModuleExport_h

#if defined(WIN32) && !defined(qSlicerTerminologiesModule_STATIC)
 #if defined(qSlicerTerminologiesModule_EXPORTS)
  #define Q_SLICER_QTMODULES_TERMINOLOGIES_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_TERMINOLOGIES_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_TERMINOLOGIES_EXPORT
#endif

#endif
