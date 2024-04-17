

// .NAME __qSlicerIconEnginePluginExport - manage Windows system differences
// .SECTION Description
// The __qSlicerIconEnginePluginExport captures some system differences between Unix
// and Windows operating systems. 

#ifndef __qSlicerIconEnginePluginExport_h
#define __qSlicerIconEnginePluginExport_h

#include "ctkCompatibility_p.h"
#include "ctkCompilerDetections_p.h"

#include <QtGlobal>

#if defined(Q_OS_WIN) || defined(Q_OS_SYMBIAN)
#  if defined(qSlicerIconEnginePlugin_EXPORTS)
#    define Q_SLICER_BASE_QTGUI_ICON_ENGINE_EXPORT Q_DECL_EXPORT
#  else
#    define Q_SLICER_BASE_QTGUI_ICON_ENGINE_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_SLICER_BASE_QTGUI_ICON_ENGINE_EXPORT)
//#  if defined(CTK_SHARED)
#    define Q_SLICER_BASE_QTGUI_ICON_ENGINE_EXPORT Q_DECL_EXPORT
//#  else
//#    define Q_SLICER_BASE_QTGUI_ICON_ENGINE_EXPORT
//#  endif
#endif



#endif

