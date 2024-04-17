/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerVolumeRenderingModuleMRMLExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerVolumeRenderingModuleMRMLExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerVolumeRenderingModuleMRMLExport_h
#define __vtkSlicerVolumeRenderingModuleMRMLExport_h

#if defined(WIN32) && !defined(vtkSlicerVolumeRenderingModuleMRML_STATIC)
 #if defined(vtkSlicerVolumeRenderingModuleMRML_EXPORTS)
  #define VTK_SLICER_VOLUMERENDERING_MODULE_MRML_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_VOLUMERENDERING_MODULE_MRML_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_VOLUMERENDERING_MODULE_MRML_EXPORT
#endif

#endif
