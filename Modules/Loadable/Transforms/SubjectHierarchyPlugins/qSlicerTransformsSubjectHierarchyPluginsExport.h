/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTransformsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTransformsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTransformsSubjectHierarchyPluginsExport_h
#define __qSlicerTransformsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerTransformsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerTransformsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_TRANSFORMS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_TRANSFORMS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_TRANSFORMS_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
