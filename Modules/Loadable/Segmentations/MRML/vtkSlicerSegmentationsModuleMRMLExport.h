/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerSegmentationsModuleMRMLExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerSegmentationsModuleMRMLExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerSegmentationsModuleMRMLExport_h
#define __vtkSlicerSegmentationsModuleMRMLExport_h

#if defined(WIN32) && !defined(vtkSlicerSegmentationsModuleMRML_STATIC)
 #if defined(vtkSlicerSegmentationsModuleMRML_EXPORTS)
  #define VTK_SLICER_SEGMENTATIONS_MODULE_MRML_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_SEGMENTATIONS_MODULE_MRML_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_SEGMENTATIONS_MODULE_MRML_EXPORT
#endif

#endif
