/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerSubjectHierarchyModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerSubjectHierarchyModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerSubjectHierarchyModuleLogicExport_h
#define __vtkSlicerSubjectHierarchyModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerSubjectHierarchyModuleLogic_STATIC)
 #if defined(vtkSlicerSubjectHierarchyModuleLogic_EXPORTS)
  #define VTK_SLICER_SUBJECTHIERARCHY_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_SUBJECTHIERARCHY_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_SUBJECTHIERARCHY_LOGIC_EXPORT
#endif

#endif
