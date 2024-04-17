/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerTerminologiesModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerTerminologiesModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerTerminologiesModuleLogicExport_h
#define __vtkSlicerTerminologiesModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerTerminologiesModuleLogic_STATIC)
 #if defined(vtkSlicerTerminologiesModuleLogic_EXPORTS)
  #define VTK_SLICER_TERMINOLOGIES_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_TERMINOLOGIES_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_TERMINOLOGIES_LOGIC_EXPORT
#endif

#endif
