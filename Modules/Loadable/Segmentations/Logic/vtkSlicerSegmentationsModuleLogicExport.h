/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerSegmentationsModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerSegmentationsModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerSegmentationsModuleLogicExport_h
#define __vtkSlicerSegmentationsModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerSegmentationsModuleLogic_STATIC)
 #if defined(vtkSlicerSegmentationsModuleLogic_EXPORTS)
  #define VTK_SLICER_SEGMENTATIONS_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_SEGMENTATIONS_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_SEGMENTATIONS_LOGIC_EXPORT
#endif

#endif
