/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerTransformsModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerTransformsModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerTransformsModuleLogicExport_h
#define __vtkSlicerTransformsModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerTransformsModuleLogic_STATIC)
 #if defined(vtkSlicerTransformsModuleLogic_EXPORTS)
  #define VTK_SLICER_TRANSFORMS_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_TRANSFORMS_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_TRANSFORMS_MODULE_LOGIC_EXPORT
#endif

#endif
