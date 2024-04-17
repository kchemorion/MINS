/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTextsSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTextsSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTextsSubjectHierarchyPluginsExport_h
#define __qSlicerTextsSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerTextsSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerTextsSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_TEXTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_TEXTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_TEXTS_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
