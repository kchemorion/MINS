/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerModulesCoreExport - manage Windows system differences
// .SECTION Description
// The __qSlicerModulesCoreExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerModulesCoreExport_h
#define __qSlicerModulesCoreExport_h

#if defined(WIN32) && !defined(qSlicerModulesCore_STATIC)
 #if defined(qSlicerModulesCore_EXPORTS)
  #define Q_SLICER_MODULES_CORE_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULES_CORE_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULES_CORE_EXPORT
#endif

#endif
