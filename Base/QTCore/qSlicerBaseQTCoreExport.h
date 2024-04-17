/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerBaseQTCoreExport - manage Windows system differences
// .SECTION Description
// The __qSlicerBaseQTCoreExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerBaseQTCoreExport_h
#define __qSlicerBaseQTCoreExport_h

#if defined(WIN32) && !defined(qSlicerBaseQTCore_STATIC)
 #if defined(qSlicerBaseQTCore_EXPORTS)
  #define Q_SLICER_BASE_QTCORE_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_BASE_QTCORE_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_BASE_QTCORE_EXPORT
#endif

#endif