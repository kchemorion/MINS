/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerMarkupsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerMarkupsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerMarkupsSubjectHierarchyPluginsExport_h
#define __qSlicerMarkupsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerMarkupsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerMarkupsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_MARKUPS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MARKUPS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MARKUPS_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
