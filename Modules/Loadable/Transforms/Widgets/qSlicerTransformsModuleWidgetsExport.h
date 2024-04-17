/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTransformsModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTransformsModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTransformsModuleWidgetsExport_h
#define __qSlicerTransformsModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerTransformsModuleWidgets_STATIC)
 #if defined(qSlicerTransformsModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_TRANSFORMS_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_TRANSFORMS_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_TRANSFORMS_WIDGETS_EXPORT
#endif

#endif