/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerPlotsModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerPlotsModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerPlotsModuleLogicExport_h
#define __vtkSlicerPlotsModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerPlotsModuleLogic_STATIC)
 #if defined(vtkSlicerPlotsModuleLogic_EXPORTS)
  #define VTK_SLICER_PLOTS_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_PLOTS_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_PLOTS_MODULE_LOGIC_EXPORT
#endif

#endif
