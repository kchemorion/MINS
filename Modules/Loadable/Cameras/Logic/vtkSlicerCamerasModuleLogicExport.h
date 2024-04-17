/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerCamerasModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerCamerasModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerCamerasModuleLogicExport_h
#define __vtkSlicerCamerasModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerCamerasModuleLogic_STATIC)
 #if defined(vtkSlicerCamerasModuleLogic_EXPORTS)
  #define VTK_SLICER_CAMERAS_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_CAMERAS_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_CAMERAS_LOGIC_EXPORT
#endif

#endif
