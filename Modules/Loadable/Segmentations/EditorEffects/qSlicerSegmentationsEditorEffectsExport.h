/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerSegmentationsEditorEffectsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerSegmentationsEditorEffectsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerSegmentationsEditorEffectsExport_h
#define __qSlicerSegmentationsEditorEffectsExport_h

#if defined(WIN32) && !defined(qSlicerSegmentationsEditorEffects_STATIC)
 #if defined(qSlicerSegmentationsEditorEffects_EXPORTS)
  #define Q_SLICER_SEGMENTATIONS_EFFECTS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_SEGMENTATIONS_EFFECTS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_SEGMENTATIONS_EFFECTS_EXPORT
#endif

#endif
