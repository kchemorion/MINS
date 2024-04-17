/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerModelsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerModelsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerModelsModuleExport_h
#define __qSlicerModelsModuleExport_h

#if defined(WIN32) && !defined(qSlicerModelsModule_STATIC)
 #if defined(qSlicerModelsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_MODELS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_MODELS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_MODELS_EXPORT
#endif

#endif
