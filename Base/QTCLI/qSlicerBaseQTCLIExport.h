/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerBaseQTCLIExport - manage Windows system differences
// .SECTION Description
// The __qSlicerBaseQTCLIExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerBaseQTCLIExport_h
#define __qSlicerBaseQTCLIExport_h

#if defined(WIN32) && !defined(qSlicerBaseQTCLI_STATIC)
 #if defined(qSlicerBaseQTCLI_EXPORTS)
  #define Q_SLICER_BASE_QTCLI_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_BASE_QTCLI_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_BASE_QTCLI_EXPORT
#endif

#endif
