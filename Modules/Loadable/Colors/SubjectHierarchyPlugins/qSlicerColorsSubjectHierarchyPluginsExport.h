/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerColorsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerColorsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerColorsSubjectHierarchyPluginsExport_h
#define __qSlicerColorsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerColorsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerColorsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_COLORS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_COLORS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_COLORS_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
