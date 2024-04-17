/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerPlotsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerPlotsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerPlotsSubjectHierarchyPluginsExport_h
#define __qSlicerPlotsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerPlotsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerPlotsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_PLOTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_PLOTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_PLOTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
