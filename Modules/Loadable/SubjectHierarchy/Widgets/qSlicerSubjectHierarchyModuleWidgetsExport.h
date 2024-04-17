/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSubjectHierarchyModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSubjectHierarchyModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSubjectHierarchyModuleWidgetsExport_h
#define __qSlicerSubjectHierarchyModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerSubjectHierarchyModuleWidgets_STATIC)
 #if defined(qSlicerSubjectHierarchyModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_SUBJECTHIERARCHY_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_SUBJECTHIERARCHY_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_SUBJECTHIERARCHY_WIDGETS_EXPORT
#endif

#endif
