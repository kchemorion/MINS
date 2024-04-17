/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSegmentationsModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSegmentationsModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSegmentationsModuleWidgetsExport_h
#define __qSlicerSegmentationsModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerSegmentationsModuleWidgets_STATIC)
 #if defined(qSlicerSegmentationsModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_SEGMENTATIONS_WIDGETS_EXPORT
#endif

#endif
