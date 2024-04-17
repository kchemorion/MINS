/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qMINSAppExport - manage Windows system differences
// .SECTION Description
// The __qMINSAppExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qMINSAppExport_h
#define __qMINSAppExport_h

#if defined(WIN32) && !defined(qMINSApp_STATIC)
 #if defined(qMINSApp_EXPORTS)
  #define Q_MINS_APP_EXPORT __declspec( dllexport )
 #else
  #define Q_MINS_APP_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_MINS_APP_EXPORT
#endif

#endif
