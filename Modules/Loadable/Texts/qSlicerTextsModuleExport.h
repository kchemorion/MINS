/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerTextsModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerTextsModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerTextsModuleExport_h
#define __qSlicerTextsModuleExport_h

#if defined(WIN32) && !defined(qSlicerTextsModule_STATIC)
 #if defined(qSlicerTextsModule_EXPORTS)
  #define Q_SLICER_QTMODULES_TEXTS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_TEXTS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_TEXTS_EXPORT
#endif

#endif
