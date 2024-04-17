/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerSegmentationsModuleMRMLDisplayableManagerExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerSegmentationsModuleMRMLDisplayableManagerExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerSegmentationsModuleMRMLDisplayableManagerExport_h
#define __vtkSlicerSegmentationsModuleMRMLDisplayableManagerExport_h

#if defined(WIN32) && !defined(vtkSlicerSegmentationsModuleMRMLDisplayableManager_STATIC)
 #if defined(vtkSlicerSegmentationsModuleMRMLDisplayableManager_EXPORTS)
  #define VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

#endif
