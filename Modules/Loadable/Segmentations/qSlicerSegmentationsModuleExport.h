/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSegmentationsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSegmentationsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSegmentationsModuleExport_h
#define __qSlicerSegmentationsModuleExport_h

#if defined(WIN32) && !defined(qSlicerSegmentationsModule_STATIC)
 #if defined(qSlicerSegmentationsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_SEGMENTATIONS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_SEGMENTATIONS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_SEGMENTATIONS_EXPORT
#endif

#endif
