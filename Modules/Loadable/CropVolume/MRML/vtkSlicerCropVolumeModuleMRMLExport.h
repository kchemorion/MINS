/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerCropVolumeModuleMRMLExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerCropVolumeModuleMRMLExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerCropVolumeModuleMRMLExport_h
#define __vtkSlicerCropVolumeModuleMRMLExport_h

#if defined(WIN32) && !defined(vtkSlicerCropVolumeModuleMRML_STATIC)
 #if defined(vtkSlicerCropVolumeModuleMRML_EXPORTS)
  #define VTK_SLICER_CROPVOLUME_MODULE_MRML_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_CROPVOLUME_MODULE_MRML_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_CROPVOLUME_MODULE_MRML_EXPORT
#endif

#endif
