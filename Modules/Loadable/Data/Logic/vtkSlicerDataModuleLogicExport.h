/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerDataModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerDataModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerDataModuleLogicExport_h
#define __vtkSlicerDataModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerDataModuleLogic_STATIC)
 #if defined(vtkSlicerDataModuleLogic_EXPORTS)
  #define VTK_SLICER_DATA_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_DATA_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_DATA_LOGIC_EXPORT
#endif

#endif
