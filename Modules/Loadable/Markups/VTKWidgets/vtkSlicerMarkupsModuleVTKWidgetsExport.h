/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerMarkupsModuleVTKWidgetsExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerMarkupsModuleVTKWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerMarkupsModuleVTKWidgetsExport_h
#define __vtkSlicerMarkupsModuleVTKWidgetsExport_h

#if defined(WIN32) && !defined(vtkSlicerMarkupsModuleVTKWidgets_STATIC)
 #if defined(vtkSlicerMarkupsModuleVTKWidgets_EXPORTS)
  #define VTK_SLICER_MARKUPS_MODULE_VTKWIDGETS_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_MARKUPS_MODULE_VTKWIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_MARKUPS_MODULE_VTKWIDGETS_EXPORT
#endif

#endif
