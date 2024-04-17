/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSequencesModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSequencesModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSequencesModuleExport_h
#define __qSlicerSequencesModuleExport_h

#if defined(WIN32) && !defined(qSlicerSequencesModule_STATIC)
 #if defined(qSlicerSequencesModule_EXPORTS)
  #define Q_SLICER_QTMODULES_SEQUENCES_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_SEQUENCES_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_SEQUENCES_EXPORT
#endif

#endif
