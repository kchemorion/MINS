/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerTextsModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerTextsModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerTextsModuleLogicExport_h
#define __vtkSlicerTextsModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerTextsModuleLogic_STATIC)
 #if defined(vtkSlicerTextsModuleLogic_EXPORTS)
  #define VTK_SLICER_TEXTS_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_TEXTS_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_TEXTS_MODULE_LOGIC_EXPORT
#endif

#endif
