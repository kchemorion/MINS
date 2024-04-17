/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSegmentationsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSegmentationsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSegmentationsSubjectHierarchyPluginsExport_h
#define __qSlicerSegmentationsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerSegmentationsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerSegmentationsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_SEGMENTATIONS_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_SEGMENTATIONS_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_SEGMENTATIONS_PLUGINS_EXPORT
#endif

#endif
