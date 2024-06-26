/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerAnnotationsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerAnnotationsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerAnnotationsModuleExport_h
#define __qSlicerAnnotationsModuleExport_h

#if defined(WIN32) && !defined(qSlicerAnnotationsModule_STATIC)
 #if defined(qSlicerAnnotationsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_ANNOTATIONS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_ANNOTATIONS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_ANNOTATIONS_EXPORT
#endif

#endif
