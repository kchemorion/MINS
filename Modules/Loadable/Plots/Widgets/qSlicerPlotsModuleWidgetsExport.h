/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerPlotsModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerPlotsModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerPlotsModuleWidgetsExport_h
#define __qSlicerPlotsModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerPlotsModuleWidgets_STATIC)
 #if defined(qSlicerPlotsModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_PLOTS_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_PLOTS_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_PLOTS_WIDGETS_EXPORT
#endif

#endif
