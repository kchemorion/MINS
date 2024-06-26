/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerVolumeRenderingModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerVolumeRenderingModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerVolumeRenderingModuleLogicExport_h
#define __vtkSlicerVolumeRenderingModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerVolumeRenderingModuleLogic_STATIC)
 #if defined(vtkSlicerVolumeRenderingModuleLogic_EXPORTS)
  #define VTK_SLICER_VOLUMERENDERING_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_VOLUMERENDERING_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_VOLUMERENDERING_MODULE_LOGIC_EXPORT
#endif

#endif
