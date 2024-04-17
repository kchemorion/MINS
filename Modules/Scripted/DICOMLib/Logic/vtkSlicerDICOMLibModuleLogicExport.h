/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerDICOMLibModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerDICOMLibModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerDICOMLibModuleLogicExport_h
#define __vtkSlicerDICOMLibModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerDICOMLibModuleLogic_STATIC)
 #if defined(vtkSlicerDICOMLibModuleLogic_EXPORTS)
  #define VTK_SLICER_DICOMLIB_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_DICOMLIB_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_DICOMLIB_MODULE_LOGIC_EXPORT
#endif

#endif
