/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTablesSubjectHierarchyPluginsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTablesSubjectHierarchyPluginsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTablesSubjectHierarchyPluginsExport_h
#define __qSlicerTablesSubjectHierarchyPluginsExport_h

#if defined(WIN32) && !defined(qSlicerTablesSubjectHierarchyPlugins_STATIC)
 #if defined(qSlicerTablesSubjectHierarchyPlugins_EXPORTS)
  #define Q_SLICER_TABLES_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_TABLES_SUBJECT_HIERARCHY_PLUGINS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_TABLES_SUBJECT_HIERARCHY_PLUGINS_EXPORT
#endif

#endif
