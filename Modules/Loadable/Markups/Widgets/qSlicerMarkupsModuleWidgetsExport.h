/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerMarkupsModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerMarkupsModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerMarkupsModuleWidgetsExport_h
#define __qSlicerMarkupsModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerMarkupsModuleWidgets_STATIC)
 #if defined(qSlicerMarkupsModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_MARKUPS_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_MARKUPS_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_MARKUPS_WIDGETS_EXPORT
#endif

#endif
