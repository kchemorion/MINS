/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerColorsModuleVTKWidgetsExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerColorsModuleVTKWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerColorsModuleVTKWidgetsExport_h
#define __vtkSlicerColorsModuleVTKWidgetsExport_h

#if defined(WIN32) && !defined(vtkSlicerColorsModuleVTKWidgets_STATIC)
 #if defined(vtkSlicerColorsModuleVTKWidgets_EXPORTS)
  #define VTK_SLICER_COLORS_VTKWIDGETS_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_COLORS_VTKWIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_COLORS_VTKWIDGETS_EXPORT
#endif

#endif
