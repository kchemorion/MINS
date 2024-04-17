/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerUnitsModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerUnitsModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerUnitsModuleLogicExport_h
#define __vtkSlicerUnitsModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerUnitsModuleLogic_STATIC)
 #if defined(vtkSlicerUnitsModuleLogic_EXPORTS)
  #define VTK_SLICER_UNITS_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_UNITS_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_UNITS_MODULE_LOGIC_EXPORT
#endif

#endif
