/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerCropVolumeModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerCropVolumeModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerCropVolumeModuleExport_h
#define __qSlicerCropVolumeModuleExport_h

#if defined(WIN32) && !defined(qSlicerCropVolumeModule_STATIC)
 #if defined(qSlicerCropVolumeModule_EXPORTS)
  #define Q_SLICER_QTMODULES_CROPVOLUME_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_CROPVOLUME_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_CROPVOLUME_EXPORT
#endif

#endif
